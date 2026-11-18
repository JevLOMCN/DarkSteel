// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryCore
// Functions: 54

// TOrientedBox3<float> @ 1435e2320

TOrientedBox3<float> * __thiscall
UE::Geometry::TOrientedBox3<float>::TOrientedBox3<float>
          (TOrientedBox3<float> *this,TAxisAlignedBox3<float> *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  fVar4 = __real_3f000000;
  fVar1 = (param_1->Max).field0_0x0._s_0.Z;
  fVar2 = (param_1->Min).field0_0x0._s_0.Z;
  fVar5 = ((param_1->Max).field0_0x0._s_0.Y + (param_1->Min).field0_0x0._s_0.Y) * __real_3f000000;
  (this->Frame).Origin.field0_0x0._s_0.X =
       ((param_1->Min).field0_0x0._s_0.X + (param_1->Max).field0_0x0._s_0.X) * __real_3f000000;
  (this->Frame).Origin.field0_0x0._s_0.Y = fVar5;
  (this->Frame).Origin.field0_0x0._s_0.Z = (fVar1 + fVar2) * fVar4;
  *(undefined8 *)&(this->Frame).Rotation.field0_0x0 = 0;
  (this->Frame).Rotation.field0_0x0._s_0.Z = 0.0;
  (this->Frame).Rotation.field0_0x0._s_0.W = 1.0;
  fVar1 = (param_1->Max).field0_0x0._s_0.Y;
  fVar2 = (param_1->Max).field0_0x0._s_0.Z;
  fVar5 = (param_1->Min).field0_0x0._s_0.Y;
  fVar3 = (param_1->Min).field0_0x0._s_0.Z;
  (this->Extents).field0_0x0._s_0.X =
       ((param_1->Max).field0_0x0._s_0.X - (param_1->Min).field0_0x0._s_0.X) * fVar4;
  (this->Extents).field0_0x0._s_0.Y = (fVar1 - fVar5) * fVar4;
  (this->Extents).field0_0x0._s_0.Z = (fVar2 - fVar3) * fVar4;
  return this;
}

// TOrientedBox3<float> @ 1435e23c0

TOrientedBox3<float> * __thiscall
UE::Geometry::TOrientedBox3<float>::TOrientedBox3<float>
          (TOrientedBox3<float> *this,TFrame3<float> *param_1,TVector<float> *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)((longlong)&(param_1->Origin).field0_0x0 + 8);
  *(undefined8 *)&(this->Frame).Origin.field0_0x0 = *(undefined8 *)&(param_1->Origin).field0_0x0;
  *(undefined8 *)((longlong)&(this->Frame).Origin.field0_0x0 + 8) = uVar1;
  *(undefined8 *)((longlong)&(this->Frame).Rotation.field0_0x0 + 4) =
       *(undefined8 *)((longlong)&(param_1->Rotation).field0_0x0 + 4);
  (this->Frame).Rotation.field0_0x0._s_0.W = (param_1->Rotation).field0_0x0._s_0.W;
  *(undefined8 *)&(this->Extents).field0_0x0 = *(undefined8 *)&param_2->field0_0x0;
  (this->Extents).field0_0x0._s_0.Z = (param_2->field0_0x0)._s_0.Z;
  return this;
}

// TOrientedBox3<float> @ 1435e2400

TOrientedBox3<float> * __thiscall
UE::Geometry::TOrientedBox3<float>::TOrientedBox3<float>
          (TOrientedBox3<float> *this,TVector<float> *param_1,TVector<float> *param_2)

{
  (this->Frame).Rotation.field0_0x0._s_0.W = 1.0;
  *(undefined8 *)((longlong)&(this->Frame).Rotation.field0_0x0 + 4) = 0;
  (this->Frame).Rotation.field0_0x0._s_0.X = 0.0;
  *(undefined8 *)&(this->Frame).Origin.field0_0x0 = *(undefined8 *)&param_1->field0_0x0;
  (this->Frame).Origin.field0_0x0._s_0.Z = (param_1->field0_0x0)._s_0.Z;
  *(undefined8 *)((longlong)&(this->Frame).Rotation.field0_0x0 + 4) = 0;
  (this->Frame).Rotation.field0_0x0._s_0.W = 1.0;
  *(undefined8 *)&(this->Extents).field0_0x0 = *(undefined8 *)&param_2->field0_0x0;
  (this->Extents).field0_0x0._s_0.Z = (param_2->field0_0x0)._s_0.Z;
  return this;
}

// TOrientedBox3<float> @ 1435e2450

TOrientedBox3<float> * __thiscall
UE::Geometry::TOrientedBox3<float>::TOrientedBox3<float>
          (TOrientedBox3<float> *this,FOrientedBox *param_1)

{
  double dVar1;
  double dVar2;
  TVector<float>_u_0 local_38;
  TVector<float>_u_0 local_2c;
  TVector<float>_u_0 local_20;
  TVector<float>_u_0 local_14;
  
  local_38._s_0.X = (float)(param_1->AxisZ).field0_0x0._s_0.X;
  local_38._s_0.Y = (float)(param_1->AxisZ).field0_0x0._s_0.Y;
  local_38._s_0.Z = (float)(param_1->AxisZ).field0_0x0._s_0.Z;
  local_2c._s_0.X = (float)(param_1->AxisY).field0_0x0._s_0.X;
  local_2c._s_0.Y = (float)(param_1->AxisY).field0_0x0._s_0.Y;
  local_2c._s_0.Z = (float)(param_1->AxisY).field0_0x0._s_0.Z;
  local_20._s_0.X = (float)(param_1->AxisX).field0_0x0._s_0.X;
  local_20._s_0.Y = (float)(param_1->AxisX).field0_0x0._s_0.Y;
  local_20._s_0.Z = (float)(param_1->AxisX).field0_0x0._s_0.Z;
  local_14._s_0.X = (float)(param_1->Center).field0_0x0._s_0.X;
  local_14._s_0.Y = (float)(param_1->Center).field0_0x0._s_0.Y;
  local_14._s_0.Z = (float)(param_1->Center).field0_0x0._s_0.Z;
  TFrame3<float>::TFrame3<float>
            (&this->Frame,(TVector<float> *)&local_14._s_0,(TVector<float> *)&local_20._s_0,
             (TVector<float> *)&local_2c._s_0,(TVector<float> *)&local_38._s_0);
  dVar1 = param_1->ExtentZ;
  dVar2 = param_1->ExtentX;
  (this->Extents).field0_0x0._s_0.Y = (float)param_1->ExtentY;
  (this->Extents).field0_0x0._s_0.X = (float)dVar2;
  (this->Extents).field0_0x0._s_0.Z = (float)dVar1;
  return this;
}

// TOrientedBox3<float> @ 1435e2570

TOrientedBox3<float> * __thiscall
UE::Geometry::TOrientedBox3<float>::TOrientedBox3<float>(TOrientedBox3<float> *this)

{
  (this->Frame).Rotation.field0_0x0._s_0.W = 1.0;
  *(undefined8 *)((longlong)&(this->Frame).Rotation.field0_0x0 + 4) = 0;
  (this->Frame).Rotation.field0_0x0._s_0.X = 0.0;
  *(undefined8 *)&(this->Frame).Origin.field0_0x0 =
       UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_;
  (this->Frame).Origin.field0_0x0._s_0.Z = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
  *(undefined8 *)((longlong)&(this->Frame).Rotation.field0_0x0 + 4) = 0;
  (this->Frame).Rotation.field0_0x0._s_0.W = 1.0;
  (this->Extents).field0_0x0._s_0.X = 1.0;
  (this->Extents).field0_0x0._s_0.Y = 1.0;
  (this->Extents).field0_0x0._s_0.Z = 1.0;
  return this;
}

// TOrientedBox3<double> @ 1435e25c0

TOrientedBox3<double> * __thiscall
UE::Geometry::TOrientedBox3<double>::TOrientedBox3<double>
          (TOrientedBox3<double> *this,TAxisAlignedBox3<double> *param_1)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  
  dVar3 = __real_3fe0000000000000;
  dVar5 = ((param_1->Max).field0_0x0._s_0.Y + (param_1->Min).field0_0x0._s_0.Y) *
          __real_3fe0000000000000;
  dVar4 = ((param_1->Max).field0_0x0._s_0.Z + (param_1->Min).field0_0x0._s_0.Z) *
          __real_3fe0000000000000;
  (this->Frame).Origin.field0_0x0._s_0.X =
       ((param_1->Min).field0_0x0._s_0.X + (param_1->Max).field0_0x0._s_0.X) *
       __real_3fe0000000000000;
  (this->Frame).Origin.field0_0x0._s_0.Y = dVar5;
  (this->Frame).Origin.field0_0x0._s_0.Z = dVar4;
  (this->Frame).Rotation.field0_0x0._s_0.X = 0.0;
  (this->Frame).Rotation.field0_0x0._s_0.Y = 0.0;
  (this->Frame).Rotation.field0_0x0._s_0.Z = 0.0;
  (this->Frame).Rotation.field0_0x0._s_0.W = 1.0;
  dVar4 = (param_1->Max).field0_0x0._s_0.Z;
  dVar5 = (param_1->Max).field0_0x0._s_0.X;
  dVar1 = (param_1->Min).field0_0x0._s_0.Z;
  dVar2 = (param_1->Min).field0_0x0._s_0.X;
  (this->Extents).field0_0x0._s_0.Y =
       ((param_1->Max).field0_0x0._s_0.Y - (param_1->Min).field0_0x0._s_0.Y) * dVar3;
  (this->Extents).field0_0x0._s_0.X = (dVar5 - dVar2) * dVar3;
  (this->Extents).field0_0x0._s_0.Z = (dVar4 - dVar1) * dVar3;
  return this;
}

// TOrientedBox3<double> @ 1435e2660

TOrientedBox3<double> * __thiscall
UE::Geometry::TOrientedBox3<double>::TOrientedBox3<double>
          (TOrientedBox3<double> *this,TFrame3<double> *param_1,TVector<double> *param_2)

{
  double dVar1;
  
  dVar1 = (param_1->Origin).field0_0x0._s_0.Y;
  (this->Frame).Origin.field0_0x0._s_0.X = (param_1->Origin).field0_0x0._s_0.X;
  (this->Frame).Origin.field0_0x0._s_0.Y = dVar1;
  dVar1 = (param_1->Rotation).field0_0x0._s_0.X;
  (this->Frame).Origin.field0_0x0._s_0.Z = (param_1->Origin).field0_0x0._s_0.Z;
  (this->Frame).Rotation.field0_0x0._s_0.X = dVar1;
  dVar1 = (param_1->Rotation).field0_0x0._s_0.Z;
  (this->Frame).Rotation.field0_0x0._s_0.Y = (param_1->Rotation).field0_0x0._s_0.Y;
  (this->Frame).Rotation.field0_0x0._s_0.Z = dVar1;
  (this->Frame).Rotation.field0_0x0._s_0.W = (param_1->Rotation).field0_0x0._s_0.W;
  dVar1 = (param_2->field0_0x0)._s_0.Y;
  (this->Extents).field0_0x0._s_0.X = (param_2->field0_0x0)._s_0.X;
  (this->Extents).field0_0x0._s_0.Y = dVar1;
  (this->Extents).field0_0x0._s_0.Z = (param_2->field0_0x0)._s_0.Z;
  return this;
}

// TOrientedBox3<double> @ 1435e26a0

TOrientedBox3<double> * __thiscall
UE::Geometry::TOrientedBox3<double>::TOrientedBox3<double>
          (TOrientedBox3<double> *this,TVector<double> *param_1,TVector<double> *param_2)

{
  double dVar1;
  
  (this->Frame).Rotation.field0_0x0._s_0.W = 1.0;
  (this->Frame).Rotation.field0_0x0._s_0.Z = 0.0;
  (this->Frame).Rotation.field0_0x0._s_0.Y = 0.0;
  (this->Frame).Rotation.field0_0x0._s_0.X = 0.0;
  dVar1 = (param_1->field0_0x0)._s_0.Y;
  (this->Frame).Origin.field0_0x0._s_0.X = (param_1->field0_0x0)._s_0.X;
  (this->Frame).Origin.field0_0x0._s_0.Y = dVar1;
  (this->Frame).Origin.field0_0x0._s_0.Z = (param_1->field0_0x0)._s_0.Z;
  (this->Frame).Rotation.field0_0x0._s_0.Y = 0.0;
  (this->Frame).Rotation.field0_0x0._s_0.Z = 0.0;
  (this->Frame).Rotation.field0_0x0._s_0.W = 1.0;
  dVar1 = (param_2->field0_0x0)._s_0.Y;
  (this->Extents).field0_0x0._s_0.X = (param_2->field0_0x0)._s_0.X;
  (this->Extents).field0_0x0._s_0.Y = dVar1;
  (this->Extents).field0_0x0._s_0.Z = (param_2->field0_0x0)._s_0.Z;
  return this;
}

// TOrientedBox3<double> @ 1435e2700

TOrientedBox3<double> * __thiscall
UE::Geometry::TOrientedBox3<double>::TOrientedBox3<double>
          (TOrientedBox3<double> *this,FOrientedBox *param_1)

{
  double dVar1;
  double dVar2;
  double dVar3;
  TQuaternion<double>_u_0 local_98;
  TVector<double>_u_0 local_78;
  double local_60;
  double local_58;
  double local_50;
  double local_48;
  double local_40;
  double local_38;
  
  local_78._s_0.Z = (param_1->AxisZ).field0_0x0._s_0.X;
  local_50 = (param_1->AxisZ).field0_0x0._s_0.Y;
  local_78._s_0.Y = (param_1->AxisY).field0_0x0._s_0.X;
  local_58 = (param_1->AxisY).field0_0x0._s_0.Y;
  local_78._s_0.X = (param_1->AxisX).field0_0x0._s_0.X;
  local_60 = (param_1->AxisX).field0_0x0._s_0.Y;
  local_48 = (param_1->AxisX).field0_0x0._s_0.Z;
  dVar1 = (param_1->Center).field0_0x0._s_0.Z;
  dVar2 = (param_1->Center).field0_0x0._s_0.X;
  dVar3 = (param_1->Center).field0_0x0._s_0.Y;
  local_40 = (param_1->AxisY).field0_0x0._s_0.Z;
  local_38 = (param_1->AxisZ).field0_0x0._s_0.Z;
  (this->Frame).Rotation.field0_0x0._s_0.Z = 0.0;
  (this->Frame).Rotation.field0_0x0._s_0.Y = 0.0;
  (this->Frame).Rotation.field0_0x0._s_0.X = 0.0;
  (this->Frame).Rotation.field0_0x0._s_0.W = 1.0;
  (this->Frame).Origin.field0_0x0._s_0.X = dVar2;
  (this->Frame).Origin.field0_0x0._s_0.Y = dVar3;
  (this->Frame).Origin.field0_0x0._s_0.Z = dVar1;
  local_98._s_0.X = 0.0;
  local_98._s_0.Y = 0.0;
  local_98._s_0.Z = 0.0;
  local_98._s_0.W = __real_3ff0000000000000;
  TQuaternion<double>::SetFromRotationMatrix
            ((TQuaternion<double> *)&local_98._s_0,(TMatrix3<double> *)&local_78._s_0);
  (this->Frame).Rotation.field0_0x0._s_0.X = local_98._s_0.X;
  (this->Frame).Rotation.field0_0x0._s_0.Y = local_98._s_0.Y;
  (this->Frame).Rotation.field0_0x0._s_0.Z = local_98._s_0.Z;
  (this->Frame).Rotation.field0_0x0._s_0.W = local_98._s_0.W;
  dVar1 = param_1->ExtentY;
  dVar2 = param_1->ExtentZ;
  (this->Extents).field0_0x0._s_0.X = param_1->ExtentX;
  (this->Extents).field0_0x0._s_0.Y = dVar1;
  (this->Extents).field0_0x0._s_0.Z = dVar2;
  return this;
}

// TOrientedBox3<double> @ 1435e2830

TOrientedBox3<double> * __thiscall
UE::Geometry::TOrientedBox3<double>::TOrientedBox3<double>(TOrientedBox3<double> *this)

{
  undefined8 uVar1;
  
  (this->Frame).Rotation.field0_0x0._s_0.Z = 0.0;
  (this->Frame).Rotation.field0_0x0._s_0.Y = 0.0;
  (this->Frame).Rotation.field0_0x0._s_0.X = 0.0;
  (this->Frame).Rotation.field0_0x0._s_0.W = 1.0;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->Frame).Origin.field0_0x0._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->Frame).Origin.field0_0x0._s_0.Y = (double)uVar1;
  (this->Frame).Origin.field0_0x0._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  (this->Frame).Rotation.field0_0x0._s_0.Y = 0.0;
  (this->Frame).Rotation.field0_0x0._s_0.Z = 0.0;
  (this->Frame).Rotation.field0_0x0._s_0.W = 1.0;
  (this->Extents).field0_0x0._s_0.X = 1.0;
  (this->Extents).field0_0x0._s_0.Y = 1.0;
  (this->Extents).field0_0x0._s_0.Z = 1.0;
  return this;
}

// operator_FOrientedBox @ 1435e51f0

FOrientedBox * __thiscall
UE::Geometry::TOrientedBox3<float>::operator_FOrientedBox
          (TOrientedBox3<float> *this,FOrientedBox *__return_storage_ptr__)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  
  (__return_storage_ptr__->Center).field0_0x0._s_0.X = 0.0;
  (__return_storage_ptr__->Center).field0_0x0._s_0.Y = 0.0;
  (__return_storage_ptr__->Center).field0_0x0._s_0.Z = 0.0;
  (__return_storage_ptr__->AxisX).field0_0x0._s_0.X = 1.0;
  (__return_storage_ptr__->AxisX).field0_0x0._s_0.Y = 0.0;
  (__return_storage_ptr__->AxisX).field0_0x0._s_0.Z = 0.0;
  (__return_storage_ptr__->AxisY).field0_0x0._s_0.X = 0.0;
  (__return_storage_ptr__->AxisY).field0_0x0._s_0.Y = 1.0;
  (__return_storage_ptr__->AxisY).field0_0x0._s_0.Z = 0.0;
  (__return_storage_ptr__->AxisZ).field0_0x0._s_0.X = 0.0;
  (__return_storage_ptr__->AxisZ).field0_0x0._s_0.Y = 0.0;
  (__return_storage_ptr__->AxisZ).field0_0x0._s_0.Z = 1.0;
  __return_storage_ptr__->ExtentX = 1.0;
  __return_storage_ptr__->ExtentY = 1.0;
  __return_storage_ptr__->ExtentZ = 1.0;
  fVar1 = (this->Frame).Origin.field0_0x0._s_0.Y;
  fVar2 = (this->Frame).Origin.field0_0x0._s_0.Z;
  (__return_storage_ptr__->Center).field0_0x0._s_0.X =
       (double)(this->Frame).Origin.field0_0x0._s_0.X;
  (__return_storage_ptr__->Center).field0_0x0._s_0.Y = (double)fVar1;
  (__return_storage_ptr__->Center).field0_0x0._s_0.Z = (double)fVar2;
  fVar4 = __real_3f800000;
  fVar1 = (this->Frame).Rotation.field0_0x0._s_0.Z;
  fVar2 = (this->Frame).Rotation.field0_0x0._s_0.Y;
  fVar5 = (this->Frame).Rotation.field0_0x0._s_0.X;
  fVar6 = fVar1 + fVar1;
  fVar3 = (this->Frame).Rotation.field0_0x0._s_0.W;
  fVar7 = fVar2 + fVar2;
  (__return_storage_ptr__->AxisX).field0_0x0._s_0.X =
       (double)(__real_3f800000 - (fVar6 * fVar1 + fVar7 * fVar2));
  (__return_storage_ptr__->AxisX).field0_0x0._s_0.Y = (double)(fVar3 * fVar6 + fVar5 * fVar7);
  (__return_storage_ptr__->AxisX).field0_0x0._s_0.Z = (double)(fVar5 * fVar6 - fVar3 * fVar7);
  fVar1 = (this->Frame).Rotation.field0_0x0._s_0.X;
  fVar2 = (this->Frame).Rotation.field0_0x0._s_0.Z;
  fVar5 = (this->Frame).Rotation.field0_0x0._s_0.Y;
  fVar3 = (this->Frame).Rotation.field0_0x0._s_0.W;
  fVar6 = fVar2 + fVar2;
  (__return_storage_ptr__->AxisY).field0_0x0._s_0.X =
       (double)((fVar5 + fVar5) * fVar1 - fVar3 * fVar6);
  (__return_storage_ptr__->AxisY).field0_0x0._s_0.Y =
       (double)(fVar4 - (fVar6 * fVar2 + (fVar1 + fVar1) * fVar1));
  (__return_storage_ptr__->AxisY).field0_0x0._s_0.Z =
       (double)(fVar5 * fVar6 + fVar3 * (fVar1 + fVar1));
  fVar1 = (this->Frame).Rotation.field0_0x0._s_0.X;
  fVar2 = (this->Frame).Rotation.field0_0x0._s_0.Y;
  fVar5 = (this->Frame).Rotation.field0_0x0._s_0.Z;
  fVar3 = (this->Frame).Rotation.field0_0x0._s_0.W;
  fVar5 = fVar5 + fVar5;
  (__return_storage_ptr__->AxisZ).field0_0x0._s_0.X =
       (double)(fVar3 * (fVar2 + fVar2) + fVar5 * fVar1);
  (__return_storage_ptr__->AxisZ).field0_0x0._s_0.Y =
       (double)(fVar5 * fVar2 - fVar3 * (fVar1 + fVar1));
  (__return_storage_ptr__->AxisZ).field0_0x0._s_0.Z =
       (double)(fVar4 - ((fVar2 + fVar2) * fVar2 + (fVar1 + fVar1) * fVar1));
  __return_storage_ptr__->ExtentX = (double)(this->Extents).field0_0x0._s_0.X;
  __return_storage_ptr__->ExtentY = (double)(this->Extents).field0_0x0._s_0.Y;
  __return_storage_ptr__->ExtentZ = (double)(this->Extents).field0_0x0._s_0.Z;
  return __return_storage_ptr__;
}

// operator_FOrientedBox @ 1435e5420

FOrientedBox * __thiscall
UE::Geometry::TOrientedBox3<double>::operator_FOrientedBox
          (TOrientedBox3<double> *this,FOrientedBox *__return_storage_ptr__)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  
  (__return_storage_ptr__->Center).field0_0x0._s_0.X = 0.0;
  (__return_storage_ptr__->Center).field0_0x0._s_0.Y = 0.0;
  (__return_storage_ptr__->Center).field0_0x0._s_0.Z = 0.0;
  (__return_storage_ptr__->AxisX).field0_0x0._s_0.X = 1.0;
  (__return_storage_ptr__->AxisX).field0_0x0._s_0.Y = 0.0;
  (__return_storage_ptr__->AxisX).field0_0x0._s_0.Z = 0.0;
  (__return_storage_ptr__->AxisY).field0_0x0._s_0.X = 0.0;
  (__return_storage_ptr__->AxisY).field0_0x0._s_0.Y = 1.0;
  (__return_storage_ptr__->AxisY).field0_0x0._s_0.Z = 0.0;
  (__return_storage_ptr__->AxisZ).field0_0x0._s_0.X = 0.0;
  (__return_storage_ptr__->AxisZ).field0_0x0._s_0.Y = 0.0;
  (__return_storage_ptr__->AxisZ).field0_0x0._s_0.Z = 1.0;
  __return_storage_ptr__->ExtentX = 1.0;
  __return_storage_ptr__->ExtentY = 1.0;
  __return_storage_ptr__->ExtentZ = 1.0;
  dVar4 = __real_3ff0000000000000;
  dVar2 = (this->Frame).Origin.field0_0x0._s_0.Y;
  dVar1 = (this->Frame).Origin.field0_0x0._s_0.Z;
  (__return_storage_ptr__->Center).field0_0x0._s_0.X = (this->Frame).Origin.field0_0x0._s_0.X;
  (__return_storage_ptr__->Center).field0_0x0._s_0.Y = dVar2;
  (__return_storage_ptr__->Center).field0_0x0._s_0.Z = dVar1;
  dVar1 = (this->Frame).Rotation.field0_0x0._s_0.Z;
  dVar2 = (this->Frame).Rotation.field0_0x0._s_0.Y;
  dVar3 = (this->Frame).Rotation.field0_0x0._s_0.X;
  dVar5 = dVar1 + dVar1;
  dVar7 = (this->Frame).Rotation.field0_0x0._s_0.W;
  dVar6 = dVar2 + dVar2;
  (__return_storage_ptr__->AxisX).field0_0x0._s_0.X = dVar4 - (dVar5 * dVar1 + dVar6 * dVar2);
  (__return_storage_ptr__->AxisX).field0_0x0._s_0.Y = dVar7 * dVar5 + dVar3 * dVar6;
  (__return_storage_ptr__->AxisX).field0_0x0._s_0.Z = dVar3 * dVar5 - dVar7 * dVar6;
  dVar1 = (this->Frame).Rotation.field0_0x0._s_0.X;
  dVar2 = (this->Frame).Rotation.field0_0x0._s_0.Z;
  dVar3 = (this->Frame).Rotation.field0_0x0._s_0.Y;
  dVar7 = (this->Frame).Rotation.field0_0x0._s_0.W;
  dVar6 = dVar2 + dVar2;
  (__return_storage_ptr__->AxisY).field0_0x0._s_0.X = (dVar3 + dVar3) * dVar1 - dVar7 * dVar6;
  (__return_storage_ptr__->AxisY).field0_0x0._s_0.Y =
       dVar4 - (dVar6 * dVar2 + (dVar1 + dVar1) * dVar1);
  (__return_storage_ptr__->AxisY).field0_0x0._s_0.Z = dVar3 * dVar6 + dVar7 * (dVar1 + dVar1);
  dVar1 = (this->Frame).Rotation.field0_0x0._s_0.X;
  dVar2 = (this->Frame).Rotation.field0_0x0._s_0.Y;
  dVar3 = (this->Frame).Rotation.field0_0x0._s_0.W;
  dVar7 = (this->Frame).Rotation.field0_0x0._s_0.Z;
  dVar7 = dVar7 + dVar7;
  (__return_storage_ptr__->AxisZ).field0_0x0._s_0.X = dVar1 * dVar7 + (dVar2 + dVar2) * dVar3;
  (__return_storage_ptr__->AxisZ).field0_0x0._s_0.Y = dVar2 * dVar7 - (dVar1 + dVar1) * dVar3;
  (__return_storage_ptr__->AxisZ).field0_0x0._s_0.Z =
       dVar4 - ((dVar2 + dVar2) * dVar2 + (dVar1 + dVar1) * dVar1);
  __return_storage_ptr__->ExtentX = (this->Extents).field0_0x0._s_0.X;
  __return_storage_ptr__->ExtentY = (this->Extents).field0_0x0._s_0.Y;
  __return_storage_ptr__->ExtentZ = (this->Extents).field0_0x0._s_0.Z;
  return __return_storage_ptr__;
}

// AxisX @ 1435f17b0

TVector<float> * __thiscall
UE::Geometry::TOrientedBox3<float>::AxisX
          (TOrientedBox3<float> *this,TVector<float> *__return_storage_ptr__)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  fVar1 = (this->Frame).Rotation.field0_0x0._s_0.Z;
  fVar2 = (this->Frame).Rotation.field0_0x0._s_0.Y;
  fVar3 = (this->Frame).Rotation.field0_0x0._s_0.X;
  fVar5 = fVar1 + fVar1;
  fVar6 = fVar2 + fVar2;
  fVar4 = (this->Frame).Rotation.field0_0x0._s_0.W;
  (__return_storage_ptr__->field0_0x0)._s_0.X = __real_3f800000 - (fVar5 * fVar1 + fVar6 * fVar2);
  (__return_storage_ptr__->field0_0x0)._s_0.Y = fVar4 * fVar5 + fVar3 * fVar6;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = fVar3 * fVar5 - fVar4 * fVar6;
  return __return_storage_ptr__;
}

// AxisX @ 1435f1830

TVector<double> * __thiscall
UE::Geometry::TOrientedBox3<double>::AxisX
          (TOrientedBox3<double> *this,TVector<double> *__return_storage_ptr__)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  
  dVar1 = (this->Frame).Rotation.field0_0x0._s_0.Z;
  dVar2 = (this->Frame).Rotation.field0_0x0._s_0.Y;
  dVar3 = (this->Frame).Rotation.field0_0x0._s_0.X;
  dVar5 = dVar1 + dVar1;
  dVar6 = dVar2 + dVar2;
  dVar4 = (this->Frame).Rotation.field0_0x0._s_0.W;
  (__return_storage_ptr__->field0_0x0)._s_0.X =
       __real_3ff0000000000000 - (dVar5 * dVar1 + dVar6 * dVar2);
  (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar4 * dVar5 + dVar3 * dVar6;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = dVar3 * dVar5 - dVar4 * dVar6;
  return __return_storage_ptr__;
}

// AxisY @ 1435f18b0

TVector<float> * __thiscall
UE::Geometry::TOrientedBox3<float>::AxisY
          (TOrientedBox3<float> *this,TVector<float> *__return_storage_ptr__)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  fVar1 = (this->Frame).Rotation.field0_0x0._s_0.X;
  fVar2 = (this->Frame).Rotation.field0_0x0._s_0.Z;
  fVar3 = (this->Frame).Rotation.field0_0x0._s_0.W;
  fVar6 = fVar2 + fVar2;
  fVar4 = (this->Frame).Rotation.field0_0x0._s_0.Y;
  (__return_storage_ptr__->field0_0x0)._s_0.X = (fVar4 + fVar4) * fVar1 - fVar3 * fVar6;
  fVar5 = __real_3f800000;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = fVar4 * fVar6 + fVar3 * (fVar1 + fVar1);
  (__return_storage_ptr__->field0_0x0)._s_0.Y = fVar5 - (fVar6 * fVar2 + (fVar1 + fVar1) * fVar1);
  return __return_storage_ptr__;
}

// AxisY @ 1435f1960

TVector<double> * __thiscall
UE::Geometry::TOrientedBox3<double>::AxisY
          (TOrientedBox3<double> *this,TVector<double> *__return_storage_ptr__)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  
  dVar1 = (this->Frame).Rotation.field0_0x0._s_0.X;
  dVar2 = (this->Frame).Rotation.field0_0x0._s_0.Z;
  dVar3 = (this->Frame).Rotation.field0_0x0._s_0.W;
  dVar6 = dVar2 + dVar2;
  dVar4 = (this->Frame).Rotation.field0_0x0._s_0.Y;
  (__return_storage_ptr__->field0_0x0)._s_0.X = (dVar4 + dVar4) * dVar1 - dVar3 * dVar6;
  dVar5 = __real_3ff0000000000000;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = dVar4 * dVar6 + dVar3 * (dVar1 + dVar1);
  (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar5 - (dVar6 * dVar2 + (dVar1 + dVar1) * dVar1);
  return __return_storage_ptr__;
}

// AxisZ @ 1435f1a10

TVector<float> * __thiscall
UE::Geometry::TOrientedBox3<float>::AxisZ
          (TOrientedBox3<float> *this,TVector<float> *__return_storage_ptr__)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  fVar4 = __real_3f800000;
  fVar1 = (this->Frame).Rotation.field0_0x0._s_0.X;
  fVar2 = (this->Frame).Rotation.field0_0x0._s_0.Y;
  fVar5 = (this->Frame).Rotation.field0_0x0._s_0.Z;
  fVar3 = (this->Frame).Rotation.field0_0x0._s_0.W;
  fVar5 = fVar5 + fVar5;
  (__return_storage_ptr__->field0_0x0)._s_0.X = fVar3 * (fVar2 + fVar2) + fVar5 * fVar1;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = fVar5 * fVar2 - fVar3 * (fVar1 + fVar1);
  (__return_storage_ptr__->field0_0x0)._s_0.Z =
       fVar4 - ((fVar2 + fVar2) * fVar2 + (fVar1 + fVar1) * fVar1);
  return __return_storage_ptr__;
}

// AxisZ @ 1435f1aa0

TVector<double> * __thiscall
UE::Geometry::TOrientedBox3<double>::AxisZ
          (TOrientedBox3<double> *this,TVector<double> *__return_storage_ptr__)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  
  dVar4 = __real_3ff0000000000000;
  dVar1 = (this->Frame).Rotation.field0_0x0._s_0.X;
  dVar2 = (this->Frame).Rotation.field0_0x0._s_0.Y;
  dVar5 = (this->Frame).Rotation.field0_0x0._s_0.Z;
  dVar3 = (this->Frame).Rotation.field0_0x0._s_0.W;
  dVar5 = dVar5 + dVar5;
  (__return_storage_ptr__->field0_0x0)._s_0.X = dVar3 * (dVar2 + dVar2) + dVar5 * dVar1;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar5 * dVar2 - dVar3 * (dVar1 + dVar1);
  (__return_storage_ptr__->field0_0x0)._s_0.Z =
       dVar4 - ((dVar2 + dVar2) * dVar2 + (dVar1 + dVar1) * dVar1);
  return __return_storage_ptr__;
}

// Center @ 1435f3150

TVector<float> * __thiscall
UE::Geometry::TOrientedBox3<float>::Center
          (TOrientedBox3<float> *this,TVector<float> *__return_storage_ptr__)

{
  float fVar1;
  
  fVar1 = (this->Frame).Origin.field0_0x0._s_0.Z;
  *(undefined8 *)&__return_storage_ptr__->field0_0x0 =
       *(undefined8 *)&(this->Frame).Origin.field0_0x0;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = fVar1;
  return __return_storage_ptr__;
}

// Center @ 1435f3170

TVector<double> * __thiscall
UE::Geometry::TOrientedBox3<double>::Center
          (TOrientedBox3<double> *this,TVector<double> *__return_storage_ptr__)

{
  double dVar1;
  double dVar2;
  
  dVar2 = (this->Frame).Origin.field0_0x0._s_0.Y;
  dVar1 = (this->Frame).Origin.field0_0x0._s_0.Z;
  (__return_storage_ptr__->field0_0x0)._s_0.X = (this->Frame).Origin.field0_0x0._s_0.X;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar2;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = dVar1;
  return __return_storage_ptr__;
}

// ClosestPoint @ 1435f4470

TVector<float> * __thiscall
UE::Geometry::TOrientedBox3<float>::ClosestPoint
          (TOrientedBox3<float> *this,TVector<float> *__return_storage_ptr__,TVector<float> *param_1
          )

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
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  
  fVar12 = (this->Frame).Rotation.field0_0x0._s_0.X;
  fVar1 = (this->Frame).Rotation.field0_0x0._s_0.Y;
  fVar3 = (this->Frame).Rotation.field0_0x0._s_0.Z;
  fVar4 = (this->Frame).Rotation.field0_0x0._s_0.W;
  fVar6 = fVar3 + fVar3;
  fVar9 = fVar1 + fVar1;
  fVar8 = fVar4 * (fVar12 + fVar12);
  fVar10 = (fVar12 + fVar12) * fVar12;
  fVar11 = fVar9 * fVar12 + fVar4 * fVar6;
  fVar13 = fVar9 * fVar12 - fVar4 * fVar6;
  fVar2 = (this->Extents).field0_0x0._s_0.X;
  fVar16 = fVar6 * fVar12 - fVar4 * fVar9;
  fVar15 = fVar6 * fVar12 + fVar4 * fVar9;
  fVar5 = (param_1->field0_0x0)._s_0.Z - (this->Frame).Origin.field0_0x0._s_0.Z;
  fVar14 = __real_3f800000 - (fVar6 * fVar3 + fVar10);
  fVar18 = __real_3f800000 - (fVar6 * fVar3 + fVar9 * fVar1);
  fVar7 = (param_1->field0_0x0)._s_0.X - (this->Frame).Origin.field0_0x0._s_0.X;
  fVar17 = (param_1->field0_0x0)._s_0.Y - (this->Frame).Origin.field0_0x0._s_0.Y;
  fVar4 = __real_3f800000 - (fVar9 * fVar1 + fVar10);
  fVar3 = fVar6 * fVar1 - fVar8;
  fVar8 = fVar6 * fVar1 + fVar8;
  fVar12 = fVar17 * fVar11 + fVar7 * fVar18 + fVar5 * fVar16;
  if (fVar2 <= fVar12) {
    fVar12 = fVar2;
  }
  if (fVar12 <= (float)((uint)fVar2 ^ __xmm_80000000800000008000000080000000)) {
    fVar12 = (float)((uint)fVar2 ^ __xmm_80000000800000008000000080000000);
  }
  fVar1 = (this->Extents).field0_0x0._s_0.Y;
  fVar2 = (this->Extents).field0_0x0._s_0.Z;
  fVar6 = fVar17 * fVar14 + fVar7 * fVar13 + fVar5 * fVar8;
  if (fVar1 <= fVar6) {
    fVar6 = fVar1;
  }
  fVar5 = fVar17 * fVar3 + fVar7 * fVar15 + fVar5 * fVar4;
  if (fVar6 <= (float)((uint)fVar1 ^ __xmm_80000000800000008000000080000000)) {
    fVar6 = (float)((uint)fVar1 ^ __xmm_80000000800000008000000080000000);
  }
  if (fVar2 <= fVar5) {
    fVar5 = fVar2;
  }
  if (fVar5 <= (float)((uint)fVar2 ^ __xmm_80000000800000008000000080000000)) {
    fVar5 = (float)((uint)fVar2 ^ __xmm_80000000800000008000000080000000);
  }
  fVar1 = (this->Frame).Origin.field0_0x0._s_0.Z;
  fVar2 = (this->Frame).Origin.field0_0x0._s_0.Y;
  (__return_storage_ptr__->field0_0x0)._s_0.X =
       fVar6 * fVar13 + fVar12 * fVar18 + fVar5 * fVar15 + (this->Frame).Origin.field0_0x0._s_0.X;
  (__return_storage_ptr__->field0_0x0)._s_0.Z =
       fVar6 * fVar8 + fVar12 * fVar16 + fVar5 * fVar4 + fVar1;
  (__return_storage_ptr__->field0_0x0)._s_0.Y =
       fVar6 * fVar14 + fVar12 * fVar11 + fVar5 * fVar3 + fVar2;
  return __return_storage_ptr__;
}

// ClosestPoint @ 1435f4730

TVector<double> * __thiscall
UE::Geometry::TOrientedBox3<double>::ClosestPoint
          (TOrientedBox3<double> *this,TVector<double> *__return_storage_ptr__,
          TVector<double> *param_1)

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
  uint uVar15;
  uint uVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  
  dVar1 = (this->Frame).Rotation.field0_0x0._s_0.X;
  dVar14 = (this->Frame).Rotation.field0_0x0._s_0.Y;
  dVar2 = (this->Frame).Rotation.field0_0x0._s_0.Z;
  dVar3 = (this->Frame).Rotation.field0_0x0._s_0.W;
  dVar18 = dVar2 + dVar2;
  dVar13 = dVar14 + dVar14;
  dVar4 = dVar3 * (dVar1 + dVar1);
  dVar5 = (dVar1 + dVar1) * dVar1;
  dVar6 = dVar13 * dVar1 + dVar3 * dVar18;
  dVar7 = dVar13 * dVar1 - dVar3 * dVar18;
  dVar12 = (this->Extents).field0_0x0._s_0.X;
  dVar9 = dVar18 * dVar1 - dVar3 * dVar13;
  dVar8 = dVar18 * dVar1 + dVar3 * dVar13;
  dVar17 = (param_1->field0_0x0)._s_0.Z - (this->Frame).Origin.field0_0x0._s_0.Z;
  dVar3 = __real_3ff0000000000000 - (dVar18 * dVar2 + dVar5);
  dVar2 = __real_3ff0000000000000 - (dVar18 * dVar2 + dVar13 * dVar14);
  dVar19 = (param_1->field0_0x0)._s_0.X - (this->Frame).Origin.field0_0x0._s_0.X;
  dVar10 = (param_1->field0_0x0)._s_0.Y - (this->Frame).Origin.field0_0x0._s_0.Y;
  dVar11 = dVar18 * dVar14 - dVar4;
  dVar13 = __real_3ff0000000000000 - (dVar13 * dVar14 + dVar5);
  dVar4 = dVar18 * dVar14 + dVar4;
  dVar1 = dVar19 * dVar2 + dVar10 * dVar6 + dVar17 * dVar9;
  if (dVar12 <= dVar1) {
    dVar1 = dVar12;
  }
  uVar15 = (uint)__xmm_80000000000000008000000000000000;
  uVar16 = (uint)((ulonglong)__xmm_80000000000000008000000000000000 >> 0x20);
  dVar14 = (double)CONCAT44((uint)((ulonglong)dVar12 >> 0x20) ^ uVar16,SUB84(dVar12,0) ^ uVar15);
  if (dVar1 <= dVar14) {
    dVar1 = dVar14;
  }
  dVar14 = (this->Extents).field0_0x0._s_0.Y;
  dVar12 = (this->Extents).field0_0x0._s_0.Z;
  dVar5 = dVar10 * dVar3 + dVar19 * dVar7 + dVar17 * dVar4;
  if (dVar14 <= dVar5) {
    dVar5 = dVar14;
  }
  dVar18 = (double)CONCAT44((uint)((ulonglong)dVar14 >> 0x20) ^ uVar16,SUB84(dVar14,0) ^ uVar15);
  dVar14 = dVar10 * dVar11 + dVar19 * dVar8 + dVar17 * dVar13;
  if (dVar5 <= dVar18) {
    dVar5 = dVar18;
  }
  if (dVar12 <= dVar14) {
    dVar14 = dVar12;
  }
  dVar12 = (double)CONCAT44((uint)((ulonglong)dVar12 >> 0x20) ^ uVar16,SUB84(dVar12,0) ^ uVar15);
  if (dVar14 <= dVar12) {
    dVar14 = dVar12;
  }
  (__return_storage_ptr__->field0_0x0)._s_0.X =
       dVar1 * dVar2 + dVar5 * dVar7 + dVar14 * dVar8 + (this->Frame).Origin.field0_0x0._s_0.X;
  dVar2 = (this->Frame).Origin.field0_0x0._s_0.Y;
  (__return_storage_ptr__->field0_0x0)._s_0.Z =
       dVar5 * dVar4 + dVar1 * dVar9 + dVar14 * dVar13 + (this->Frame).Origin.field0_0x0._s_0.Z;
  (__return_storage_ptr__->field0_0x0)._s_0.Y =
       dVar5 * dVar3 + dVar1 * dVar6 + dVar14 * dVar11 + dVar2;
  return __return_storage_ptr__;
}

// Contains @ 1435f7cb0

bool __thiscall
UE::Geometry::TOrientedBox3<float>::Contains(TOrientedBox3<float> *this,TVector<float> *param_1)

{
  float *pfVar1;
  TVector<float>_u_0 local_28;
  TVector<float>_u_0 local_18;
  
  local_28._s_0.X = (param_1->field0_0x0)._s_0.X - (this->Frame).Origin.field0_0x0._s_0.X;
  local_28._s_0.Y = (param_1->field0_0x0)._s_0.Y - (this->Frame).Origin.field0_0x0._s_0.Y;
  local_28._s_0.Z = (param_1->field0_0x0)._s_0.Z - (this->Frame).Origin.field0_0x0._s_0.Z;
  TQuaternion<float>::InverseMultiply
            (&(this->Frame).Rotation,(TVector<float> *)&local_18._s_0,
             (TVector<float> *)&local_28._s_0);
  if ((((float)((uint)local_18._s_0.X & __xmm_7fffffff7fffffff7fffffff7fffffff) <
        (this->Extents).field0_0x0._s_0.X ||
        (float)((uint)local_18._s_0.X & __xmm_7fffffff7fffffff7fffffff7fffffff) ==
        (this->Extents).field0_0x0._s_0.X) &&
      (pfVar1 = &(this->Extents).field0_0x0._s_0.Y,
      (float)((uint)local_18._s_0.Y & __xmm_7fffffff7fffffff7fffffff7fffffff) < *pfVar1 ||
      (float)((uint)local_18._s_0.Y & __xmm_7fffffff7fffffff7fffffff7fffffff) == *pfVar1)) &&
     (pfVar1 = &(this->Extents).field0_0x0._s_0.Z,
     (float)((uint)local_18._s_0.Z & __xmm_7fffffff7fffffff7fffffff7fffffff) < *pfVar1 ||
     (float)((uint)local_18._s_0.Z & __xmm_7fffffff7fffffff7fffffff7fffffff) == *pfVar1)) {
    return true;
  }
  return false;
}

// Contains @ 1435f7d50

bool __thiscall
UE::Geometry::TOrientedBox3<double>::Contains(TOrientedBox3<double> *this,TVector<double> *param_1)

{
  double *pdVar1;
  double dVar2;
  TVector<double> local_38;
  TVector<double>_u_0 local_20;
  
  local_20._s_0.X = (param_1->field0_0x0)._s_0.X - (this->Frame).Origin.field0_0x0._s_0.X;
  local_20._s_0.Y = (param_1->field0_0x0)._s_0.Y - (this->Frame).Origin.field0_0x0._s_0.Y;
  local_20._s_0.Z = (param_1->field0_0x0)._s_0.Z - (this->Frame).Origin.field0_0x0._s_0.Z;
  TQuaternion<double>::InverseMultiply
            (&(this->Frame).Rotation,&local_38,(TVector<double> *)&local_20._s_0);
  dVar2 = (double)CONCAT44((uint)((ulonglong)local_38.field0_0x0._0_8_ >> 0x20) &
                           __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                           SUB84(local_38.field0_0x0._s_0.X,0) &
                           (uint)__xmm_7fffffffffffffff7fffffffffffffff);
  if (((dVar2 < (this->Extents).field0_0x0._s_0.X || dVar2 == (this->Extents).field0_0x0._s_0.X) &&
      (dVar2 = (double)CONCAT44((uint)((ulonglong)local_38.field0_0x0._8_8_ >> 0x20) &
                                __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                SUB84(local_38.field0_0x0._s_0.Y,0) &
                                (uint)__xmm_7fffffffffffffff7fffffffffffffff),
      pdVar1 = &(this->Extents).field0_0x0._s_0.Y, dVar2 < *pdVar1 || dVar2 == *pdVar1)) &&
     (dVar2 = (double)CONCAT44((uint)((ulonglong)local_38.field0_0x0._16_8_ >> 0x20) &
                               __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                               SUB84(local_38.field0_0x0._s_0.Z,0) &
                               (uint)__xmm_7fffffffffffffff7fffffffffffffff),
     pdVar1 = &(this->Extents).field0_0x0._s_0.Z, dVar2 < *pdVar1 || dVar2 == *pdVar1)) {
    return true;
  }
  return false;
}

// Diagonal @ 1435f8e70

TVector<float> * __thiscall
UE::Geometry::TOrientedBox3<float>::Diagonal
          (TOrientedBox3<float> *this,TVector<float> *__return_storage_ptr__)

{
  TQuaternion<float> *pTVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  TVector<float> *pTVar6;
  TVector<float> *pTVar7;
  TVector<float>_u_0 local_68;
  TVector<float> local_5c;
  TVector<float> local_50 [6];
  
  pTVar1 = &(this->Frame).Rotation;
  fVar2 = (this->Extents).field0_0x0._s_0.X;
  fVar3 = (this->Extents).field0_0x0._s_0.Y;
  fVar4 = (this->Extents).field0_0x0._s_0.Z;
  local_68._s_0.X = fVar2;
  local_68._s_0.Y = fVar3;
  local_68._s_0.Z = fVar4;
  pTVar6 = operator*<float>(&local_5c,pTVar1,(TVector<float> *)&local_68._s_0);
  local_68._s_0.X = (float)((uint)fVar2 ^ __xmm_80000000800000008000000080000000);
  local_68._s_0.Y = (float)((uint)fVar3 ^ __xmm_80000000800000008000000080000000);
  local_68._s_0.Z = (float)((uint)fVar4 ^ __xmm_80000000800000008000000080000000);
  pTVar7 = operator*<float>(local_50,pTVar1,(TVector<float> *)&local_68._s_0);
  fVar2 = (pTVar6->field0_0x0)._s_0.Y;
  fVar3 = (pTVar7->field0_0x0)._s_0.Y;
  (__return_storage_ptr__->field0_0x0)._s_0.X =
       (pTVar6->field0_0x0)._s_0.X - (pTVar7->field0_0x0)._s_0.X;
  fVar4 = (pTVar6->field0_0x0)._s_0.Z;
  fVar5 = (pTVar7->field0_0x0)._s_0.Z;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = fVar2 - fVar3;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = fVar4 - fVar5;
  return __return_storage_ptr__;
}

// Diagonal @ 1435f8f60

TVector<double> * __thiscall
UE::Geometry::TOrientedBox3<double>::Diagonal
          (TOrientedBox3<double> *this,TVector<double> *__return_storage_ptr__)

{
  TQuaternion<double> *pTVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  TVector<double> *pTVar9;
  TVector<double> *pTVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  TVector<double>_u_0 local_88;
  TVector<double> local_70;
  TVector<double> local_58 [3];
  
  pTVar1 = &(this->Frame).Rotation;
  local_88._s_0.X = (double)*(undefined8 *)&(this->Extents).field0_0x0;
  uVar13 = SUB84(local_88._s_0.X,0);
  uVar6 = (ulonglong)local_88._s_0.X >> 0x20;
  local_88._s_0.Y = *(double *)((longlong)&(this->Extents).field0_0x0 + 8);
  uVar14 = SUB84(local_88._s_0.Y,0);
  uVar7 = (ulonglong)local_88._s_0.Y >> 0x20;
  local_88._s_0.Z = *(double *)((longlong)&(this->Extents).field0_0x0 + 0x10);
  uVar15 = SUB84(local_88._s_0.Z,0);
  uVar8 = (ulonglong)local_88._s_0.Z >> 0x20;
  pTVar9 = operator*<double>(&local_70,pTVar1,(TVector<double> *)&local_88._s_0);
  uVar11 = (uint)__xmm_80000000000000008000000000000000;
  uVar12 = (uint)((ulonglong)__xmm_80000000000000008000000000000000 >> 0x20);
  local_88._s_0.X = (double)CONCAT44((uint)uVar6 ^ uVar12,uVar13 ^ uVar11);
  local_88._s_0.Y = (double)CONCAT44((uint)uVar7 ^ uVar12,uVar14 ^ uVar11);
  local_88._s_0.Z = (double)CONCAT44((uint)uVar8 ^ uVar12,uVar15 ^ uVar11);
  pTVar10 = operator*<double>(local_58,pTVar1,(TVector<double> *)&local_88._s_0);
  dVar2 = (pTVar9->field0_0x0)._s_0.Y;
  dVar3 = (pTVar10->field0_0x0)._s_0.Y;
  (__return_storage_ptr__->field0_0x0)._s_0.X =
       (pTVar9->field0_0x0)._s_0.X - (pTVar10->field0_0x0)._s_0.X;
  dVar4 = (pTVar9->field0_0x0)._s_0.Z;
  dVar5 = (pTVar10->field0_0x0)._s_0.Z;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar2 - dVar3;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = dVar4 - dVar5;
  return __return_storage_ptr__;
}

// DistanceSquared @ 1435f90f0

float __thiscall
UE::Geometry::TOrientedBox3<float>::DistanceSquared
          (TOrientedBox3<float> *this,TVector<float> *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  TVector<float>_u_0 local_28;
  TVector<float>_u_0 local_18;
  
  local_28._s_0.X = (param_1->field0_0x0)._s_0.X - (this->Frame).Origin.field0_0x0._s_0.X;
  local_28._s_0.Y = (param_1->field0_0x0)._s_0.Y - (this->Frame).Origin.field0_0x0._s_0.Y;
  local_28._s_0.Z = (param_1->field0_0x0)._s_0.Z - (this->Frame).Origin.field0_0x0._s_0.Z;
  TQuaternion<float>::InverseMultiply
            (&(this->Frame).Rotation,(TVector<float> *)&local_18._s_0,
             (TVector<float> *)&local_28._s_0);
  fVar2 = (float)((uint)local_18._s_0.Y & __xmm_7fffffff7fffffff7fffffff7fffffff) -
          (this->Extents).field0_0x0._s_0.Y;
  fVar1 = (float)((uint)local_18._s_0.X & __xmm_7fffffff7fffffff7fffffff7fffffff) -
          (this->Extents).field0_0x0._s_0.X;
  fVar3 = (float)((uint)local_18._s_0.Z & __xmm_7fffffff7fffffff7fffffff7fffffff) -
          (this->Extents).field0_0x0._s_0.Z;
  if (fVar2 <= 0.0) {
    fVar2 = 0.0;
  }
  if (fVar1 <= 0.0) {
    fVar1 = 0.0;
  }
  if (fVar3 <= 0.0) {
    fVar3 = 0.0;
  }
  return fVar1 * fVar1 + fVar2 * fVar2 + fVar3 * fVar3;
}

// DistanceSquared @ 1435f91a0

double __thiscall
UE::Geometry::TOrientedBox3<double>::DistanceSquared
          (TOrientedBox3<double> *this,TVector<double> *param_1)

{
  double dVar1;
  double dVar2;
  double dVar3;
  TVector<double> local_38;
  TVector<double>_u_0 local_20;
  
  dVar2 = (param_1->field0_0x0)._s_0.Y - (this->Frame).Origin.field0_0x0._s_0.Y;
  local_20._s_0.Z = (param_1->field0_0x0)._s_0.Z - (this->Frame).Origin.field0_0x0._s_0.Z;
  local_20._8_4_ = SUB84(dVar2,0);
  local_20._0_8_ = (param_1->field0_0x0)._s_0.X - (this->Frame).Origin.field0_0x0._s_0.X;
  local_20._12_4_ = (int)((ulonglong)dVar2 >> 0x20);
  TQuaternion<double>::InverseMultiply
            (&(this->Frame).Rotation,&local_38,(TVector<double> *)&local_20._s_0);
  dVar2 = (double)CONCAT44((uint)((ulonglong)local_38.field0_0x0._8_8_ >> 0x20) &
                           __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                           SUB84(local_38.field0_0x0._s_0.Y,0) &
                           (uint)__xmm_7fffffffffffffff7fffffffffffffff) -
          (this->Extents).field0_0x0._s_0.Y;
  dVar1 = (double)CONCAT44((uint)((ulonglong)local_38.field0_0x0._0_8_ >> 0x20) &
                           __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                           SUB84(local_38.field0_0x0._s_0.X,0) &
                           (uint)__xmm_7fffffffffffffff7fffffffffffffff) -
          (this->Extents).field0_0x0._s_0.X;
  dVar3 = (double)CONCAT44((uint)((ulonglong)local_38.field0_0x0._16_8_ >> 0x20) &
                           __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                           SUB84(local_38.field0_0x0._s_0.Z,0) &
                           (uint)__xmm_7fffffffffffffff7fffffffffffffff) -
          (this->Extents).field0_0x0._s_0.Z;
  if (dVar2 <= 0.0) {
    dVar2 = 0.0;
  }
  if (dVar1 <= 0.0) {
    dVar1 = 0.0;
  }
  if (dVar3 <= 0.0) {
    dVar3 = 0.0;
  }
  return dVar1 * dVar1 + dVar2 * dVar2 + dVar3 * dVar3;
}

// GetAxis @ 143606550

TVector<float> * __thiscall
UE::Geometry::TOrientedBox3<float>::GetAxis
          (TOrientedBox3<float> *this,TVector<float> *__return_storage_ptr__,int param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  code *pcVar4;
  undefined4 uVar5;
  bool bVar6;
  TVector<float> *pTVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  
  fVar3 = __real_3f800000;
  if (param_1 == 0) {
    fVar3 = (this->Frame).Rotation.field0_0x0._s_0.Z;
    fVar1 = (this->Frame).Rotation.field0_0x0._s_0.Y;
    fVar2 = (this->Frame).Rotation.field0_0x0._s_0.X;
    fVar9 = fVar3 + fVar3;
    fVar10 = fVar1 + fVar1;
    fVar8 = (this->Frame).Rotation.field0_0x0._s_0.W;
    (__return_storage_ptr__->field0_0x0)._s_0.X = __real_3f800000 - (fVar9 * fVar3 + fVar10 * fVar1)
    ;
    (__return_storage_ptr__->field0_0x0)._s_0.Y = fVar8 * fVar9 + fVar2 * fVar10;
    (__return_storage_ptr__->field0_0x0)._s_0.Z = fVar2 * fVar9 - fVar8 * fVar10;
    return __return_storage_ptr__;
  }
  if (param_1 == 1) {
    fVar3 = (this->Frame).Rotation.field0_0x0._s_0.Y;
    fVar1 = (this->Frame).Rotation.field0_0x0._s_0.X;
    fVar2 = (this->Frame).Rotation.field0_0x0._s_0.Z;
    fVar8 = (this->Frame).Rotation.field0_0x0._s_0.W;
    fVar10 = fVar2 + fVar2;
    (__return_storage_ptr__->field0_0x0)._s_0.X = (fVar3 + fVar3) * fVar1 - fVar8 * fVar10;
    fVar9 = __real_3f800000;
    (__return_storage_ptr__->field0_0x0)._s_0.Z = fVar3 * fVar10 + fVar8 * (fVar1 + fVar1);
    (__return_storage_ptr__->field0_0x0)._s_0.Y = fVar9 - (fVar10 * fVar2 + (fVar1 + fVar1) * fVar1)
    ;
    return __return_storage_ptr__;
  }
  if (param_1 == 2) {
    fVar1 = (this->Frame).Rotation.field0_0x0._s_0.X;
    fVar2 = (this->Frame).Rotation.field0_0x0._s_0.Y;
    fVar8 = (this->Frame).Rotation.field0_0x0._s_0.Z;
    fVar9 = (this->Frame).Rotation.field0_0x0._s_0.W;
    fVar8 = fVar8 + fVar8;
    (__return_storage_ptr__->field0_0x0)._s_0.X = fVar9 * (fVar2 + fVar2) + fVar8 * fVar1;
    (__return_storage_ptr__->field0_0x0)._s_0.Y = fVar8 * fVar2 - fVar9 * (fVar1 + fVar1);
    (__return_storage_ptr__->field0_0x0)._s_0.Z =
         fVar3 - ((fVar2 + fVar2) * fVar2 + (fVar1 + fVar1) * fVar1);
    return __return_storage_ptr__;
  }
  bVar6 = ::FDebug::CheckVerifyFailedImpl2
                    ("!\"Enclosing block should never be called\"",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryCore\\Public\\FrameTypes.h"
                     ,0x88,L"");
  uVar5 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
  if (bVar6) {
    pcVar4 = (code *)swi(3);
    pTVar7 = (TVector<float> *)(*pcVar4)();
    return pTVar7;
  }
  *(undefined8 *)&__return_storage_ptr__->field0_0x0 =
       UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = (float)uVar5;
  return __return_storage_ptr__;
}

// GetAxis @ 143606760

TVector<double> * __thiscall
UE::Geometry::TOrientedBox3<double>::GetAxis
          (TOrientedBox3<double> *this,TVector<double> *__return_storage_ptr__,int param_1)

{
  TFrame3<double>::GetAxis(&this->Frame,__return_storage_ptr__,param_1);
  return __return_storage_ptr__;
}

// GetCorner @ 1436068c0

TVector<float> * __thiscall
UE::Geometry::TOrientedBox3<float>::GetCorner
          (TOrientedBox3<float> *this,TVector<float> *__return_storage_ptr__,int param_1)

{
  code *pcVar1;
  bool bVar2;
  TVector<float> *pTVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  if (7 < (uint)param_1) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Index >= 0 && Index <= 7",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryCore\\Public\\OrientedBoxTypes.h"
                       ,0x9e,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TVector<float> *)(*pcVar1)();
      return pTVar3;
    }
  }
  fVar5 = (this->Extents).field0_0x0._s_0.X;
  if ((((uint)param_1 >> 1 ^ param_1) & 1) == 0) {
    fVar5 = (float)((uint)fVar5 ^ __xmm_80000000800000008000000080000000);
  }
  fVar6 = (this->Extents).field0_0x0._s_0.Y;
  if ((param_1 / 2 & 1U) == 0) {
    fVar6 = (float)((uint)fVar6 ^ __xmm_80000000800000008000000080000000);
  }
  fVar4 = (this->Extents).field0_0x0._s_0.Z;
  if (param_1 < 4) {
    fVar4 = (float)((uint)fVar4 ^ __xmm_80000000800000008000000080000000);
  }
  TFrame3<float>::PointAt(&this->Frame,__return_storage_ptr__,fVar5,fVar6,fVar4);
  return __return_storage_ptr__;
}

// GetCorner @ 143606970

TVector<double> * __thiscall
UE::Geometry::TOrientedBox3<double>::GetCorner
          (TOrientedBox3<double> *this,TVector<double> *__return_storage_ptr__,int param_1)

{
  code *pcVar1;
  bool bVar2;
  TVector<double> *pTVar3;
  double dVar4;
  uint uVar5;
  uint uVar6;
  double dVar7;
  double dVar8;
  
  if (7 < (uint)param_1) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Index >= 0 && Index <= 7",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryCore\\Public\\OrientedBoxTypes.h"
                       ,0x9e,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TVector<double> *)(*pcVar1)();
      return pTVar3;
    }
  }
  dVar7 = *(double *)&(this->Extents).field0_0x0;
  uVar5 = (uint)__xmm_80000000000000008000000000000000;
  uVar6 = (uint)((ulonglong)__xmm_80000000000000008000000000000000 >> 0x20);
  if ((((uint)param_1 >> 1 ^ param_1) & 1) == 0) {
    dVar7 = (double)CONCAT44((uint)((ulonglong)dVar7 >> 0x20) ^ uVar6,SUB84(dVar7,0) ^ uVar5);
  }
  dVar8 = *(double *)((longlong)&(this->Extents).field0_0x0 + 8);
  if ((param_1 / 2 & 1U) == 0) {
    dVar8 = (double)CONCAT44((uint)((ulonglong)dVar8 >> 0x20) ^ uVar6,SUB84(dVar8,0) ^ uVar5);
  }
  dVar4 = *(double *)((longlong)&(this->Extents).field0_0x0 + 0x10);
  if (param_1 < 4) {
    dVar4 = (double)CONCAT44((uint)((ulonglong)dVar4 >> 0x20) ^ uVar6,SUB84(dVar4,0) ^ uVar5);
  }
  TFrame3<double>::PointAt(&this->Frame,__return_storage_ptr__,dVar7,dVar8,dVar4);
  return __return_storage_ptr__;
}

// GetCornerSide @ 143606a20

FIndex3i * __cdecl
UE::Geometry::TOrientedBox3<float>::GetCornerSide(FIndex3i *__return_storage_ptr__,int param_1)

{
  code *pcVar1;
  bool bVar2;
  FIndex3i *pFVar3;
  
  if (7 < (uint)param_1) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Index >= 0 && Index <= 7",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryCore\\Public\\OrientedBoxTypes.h"
                       ,0xd5,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FIndex3i *)(*pcVar1)();
      return pFVar3;
    }
  }
  (__return_storage_ptr__->field0_0x0)._s_0.A = ((uint)param_1 >> 1 ^ param_1) & 1;
  (__return_storage_ptr__->field0_0x0)._s_0.B = param_1 / 2 & 1;
  *(uint *)((longlong)&__return_storage_ptr__->field0_0x0 + 8) = (uint)(3 < param_1);
  return __return_storage_ptr__;
}

// GetCornerSide @ 143606aa0

FIndex3i * __cdecl
UE::Geometry::TOrientedBox3<double>::GetCornerSide(FIndex3i *__return_storage_ptr__,int param_1)

{
  code *pcVar1;
  bool bVar2;
  FIndex3i *pFVar3;
  
  if (7 < (uint)param_1) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Index >= 0 && Index <= 7",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryCore\\Public\\OrientedBoxTypes.h"
                       ,0xd5,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FIndex3i *)(*pcVar1)();
      return pFVar3;
    }
  }
  (__return_storage_ptr__->field0_0x0)._s_0.A = ((uint)param_1 >> 1 ^ param_1) & 1;
  (__return_storage_ptr__->field0_0x0)._s_0.B = param_1 / 2 & 1;
  *(uint *)((longlong)&__return_storage_ptr__->field0_0x0 + 8) = (uint)(3 < param_1);
  return __return_storage_ptr__;
}

// Intersects @ 14360d050

bool __thiscall
UE::Geometry::TOrientedBox3<float>::Intersects
          (TOrientedBox3<float> *this,TOrientedBox3<float> *param_1,float param_2)

{
  float *pfVar1;
  bool bVar2;
  TVector<float>_u_0 local_78;
  TQuaternion<float> local_68;
  TQuaternion<float> local_58;
  TVector<float> local_48;
  TVector<float> local_3c;
  TVector<float> local_30 [3];
  
  if (((((this->Extents).field0_0x0._s_0.X <= 0.0 && (this->Extents).field0_0x0._s_0.X != 0.0) ||
       (pfVar1 = &(this->Extents).field0_0x0._s_0.Y, *pfVar1 <= 0.0 && *pfVar1 != 0.0)) ||
      (pfVar1 = &(this->Extents).field0_0x0._s_0.Z, *pfVar1 <= 0.0 && *pfVar1 != 0.0)) ||
     ((((param_1->Extents).field0_0x0._s_0.X <= 0.0 && (param_1->Extents).field0_0x0._s_0.X != 0.0
       || (pfVar1 = &(param_1->Extents).field0_0x0._s_0.Y, *pfVar1 <= 0.0 && *pfVar1 != 0.0)) ||
      (pfVar1 = &(param_1->Extents).field0_0x0._s_0.Z, *pfVar1 <= 0.0 && *pfVar1 != 0.0)))) {
    bVar2 = false;
  }
  else {
    TQuaternion<float>::Inverse(&(this->Frame).Rotation,&local_58);
    operator*<float>(&local_68,&local_58,&(param_1->Frame).Rotation);
    TQuaternion<float>::GetAxes(&local_68,&local_48,&local_3c,local_30);
    local_78._s_0.X =
         (param_1->Frame).Origin.field0_0x0._s_0.X - (this->Frame).Origin.field0_0x0._s_0.X;
    local_78._s_0.Y =
         (param_1->Frame).Origin.field0_0x0._s_0.Y - (this->Frame).Origin.field0_0x0._s_0.Y;
    local_78._s_0.Z =
         (param_1->Frame).Origin.field0_0x0._s_0.Z - (this->Frame).Origin.field0_0x0._s_0.Z;
    operator*<float>((TVector<float> *)&local_68,&local_58,(TVector<float> *)&local_78._s_0);
    bVar2 = OrientedBoxTypeLocals::BoxIntersectsLocalSpaceHelper<float>
                      (&this->Extents,(TVector<float> *)&local_68,(TVector<float> (*) [3])&local_48,
                       &param_1->Extents,param_2);
  }
  return bVar2;
}

// Intersects @ 14360d180

bool __thiscall
UE::Geometry::TOrientedBox3<float>::Intersects
          (TOrientedBox3<float> *this,TAxisAlignedBox3<float> *param_1,float param_2)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  bool bVar8;
  TVector<float>_u_0 local_c8;
  TVector<float>_u_0 local_b8;
  TVector<float> local_a8;
  TVector<float> local_9c;
  TVector<float> local_90 [11];
  
  if (((0.0 < (this->Extents).field0_0x0._s_0.X || (this->Extents).field0_0x0._s_0.X == 0.0) &&
      (pfVar1 = &(this->Extents).field0_0x0._s_0.Y, 0.0 < *pfVar1 || *pfVar1 == 0.0)) &&
     (pfVar1 = &(this->Extents).field0_0x0._s_0.Z, 0.0 < *pfVar1 || *pfVar1 == 0.0)) {
    fVar2 = (param_1->Min).field0_0x0._s_0.X;
    fVar3 = (param_1->Max).field0_0x0._s_0.X;
    if (fVar2 <= fVar3) {
      fVar4 = (param_1->Max).field0_0x0._s_0.Y;
      fVar5 = (param_1->Min).field0_0x0._s_0.Y;
      if (fVar5 <= fVar4) {
        fVar6 = (param_1->Max).field0_0x0._s_0.Z;
        fVar7 = (param_1->Min).field0_0x0._s_0.Z;
        if (fVar7 <= fVar6) {
          TQuaternion<float>::GetAxes(&(this->Frame).Rotation,&local_a8,&local_9c,local_90);
          local_b8._s_0.X = (fVar3 - fVar2) * __real_3f000000;
          local_c8._s_0.X =
               (this->Frame).Origin.field0_0x0._s_0.X - (fVar2 + fVar3) * __real_3f000000;
          local_b8._s_0.Z = (fVar6 - fVar7) * __real_3f000000;
          local_b8._s_0.Y = (fVar4 - fVar5) * __real_3f000000;
          local_c8._s_0.Y =
               (this->Frame).Origin.field0_0x0._s_0.Y - (fVar4 + fVar5) * __real_3f000000;
          local_c8._s_0.Z =
               (this->Frame).Origin.field0_0x0._s_0.Z - (fVar6 + fVar7) * __real_3f000000;
          bVar8 = OrientedBoxTypeLocals::BoxIntersectsLocalSpaceHelper<float>
                            ((TVector<float> *)&local_b8._s_0,(TVector<float> *)&local_c8._s_0,
                             (TVector<float> (*) [3])&local_a8,&this->Extents,param_2);
          return bVar8;
        }
      }
    }
  }
  return false;
}

// Intersects @ 14360d320

bool __thiscall
UE::Geometry::TOrientedBox3<double>::Intersects
          (TOrientedBox3<double> *this,TOrientedBox3<double> *param_1,double param_2)

{
  double *pdVar1;
  double dVar2;
  bool bVar3;
  TVector<double>_u_0 local_c8;
  TQuaternion<double> local_b0;
  TQuaternion<double> local_90;
  TVector<double> local_68;
  TVector<double> local_50;
  TVector<double> local_38 [2];
  
  if (((((this->Extents).field0_0x0._s_0.X <= 0.0 && (this->Extents).field0_0x0._s_0.X != 0.0) ||
       (pdVar1 = &(this->Extents).field0_0x0._s_0.Y, *pdVar1 <= 0.0 && *pdVar1 != 0.0)) ||
      (pdVar1 = &(this->Extents).field0_0x0._s_0.Z, *pdVar1 <= 0.0 && *pdVar1 != 0.0)) ||
     ((((param_1->Extents).field0_0x0._s_0.X <= 0.0 && (param_1->Extents).field0_0x0._s_0.X != 0.0
       || (pdVar1 = &(param_1->Extents).field0_0x0._s_0.Y, *pdVar1 <= 0.0 && *pdVar1 != 0.0)) ||
      (pdVar1 = &(param_1->Extents).field0_0x0._s_0.Z, *pdVar1 <= 0.0 && *pdVar1 != 0.0)))) {
    bVar3 = false;
  }
  else {
    TQuaternion<double>::Inverse(&(this->Frame).Rotation,&local_90);
    operator*<double>(&local_b0,&local_90,&(param_1->Frame).Rotation);
    TQuaternion<double>::GetAxes(&local_b0,&local_68,&local_50,local_38);
    dVar2 = (param_1->Frame).Origin.field0_0x0._s_0.Y - (this->Frame).Origin.field0_0x0._s_0.Y;
    local_c8._s_0.Z =
         (param_1->Frame).Origin.field0_0x0._s_0.Z - (this->Frame).Origin.field0_0x0._s_0.Z;
    local_c8._8_4_ = SUB84(dVar2,0);
    local_c8._0_8_ =
         (param_1->Frame).Origin.field0_0x0._s_0.X - (this->Frame).Origin.field0_0x0._s_0.X;
    local_c8._12_4_ = (int)((ulonglong)dVar2 >> 0x20);
    operator*<double>((TVector<double> *)&local_b0,&local_90,(TVector<double> *)&local_c8._s_0);
    bVar3 = OrientedBoxTypeLocals::BoxIntersectsLocalSpaceHelper<double>
                      (&this->Extents,(TVector<double> *)&local_b0,
                       (TVector<double> (*) [3])&local_68,&param_1->Extents,param_2);
  }
  return bVar3;
}

// Intersects @ 14360d450

bool __thiscall
UE::Geometry::TOrientedBox3<double>::Intersects
          (TOrientedBox3<double> *this,TAxisAlignedBox3<double> *param_1,double param_2)

{
  double *pdVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  bool bVar8;
  TVector<double>_u_0 local_f8;
  TVector<double>_u_0 local_e0;
  TVector<double> local_c8;
  TVector<double> local_b0;
  TVector<double> local_98 [6];
  
  if (((0.0 < (this->Extents).field0_0x0._s_0.X || (this->Extents).field0_0x0._s_0.X == 0.0) &&
      (pdVar1 = &(this->Extents).field0_0x0._s_0.Y, 0.0 < *pdVar1 || *pdVar1 == 0.0)) &&
     (pdVar1 = &(this->Extents).field0_0x0._s_0.Z, 0.0 < *pdVar1 || *pdVar1 == 0.0)) {
    dVar2 = (param_1->Min).field0_0x0._s_0.X;
    dVar3 = (param_1->Max).field0_0x0._s_0.X;
    if (dVar2 <= dVar3) {
      dVar4 = (param_1->Max).field0_0x0._s_0.Y;
      dVar5 = (param_1->Min).field0_0x0._s_0.Y;
      if (dVar5 <= dVar4) {
        dVar6 = (param_1->Max).field0_0x0._s_0.Z;
        dVar7 = (param_1->Min).field0_0x0._s_0.Z;
        if (dVar7 <= dVar6) {
          TQuaternion<double>::GetAxes(&(this->Frame).Rotation,&local_c8,&local_b0,local_98);
          local_e0._s_0.X = (dVar3 - dVar2) * __real_3fe0000000000000;
          local_f8._s_0.X =
               (this->Frame).Origin.field0_0x0._s_0.X - (dVar2 + dVar3) * __real_3fe0000000000000;
          local_e0._s_0.Z = (dVar6 - dVar7) * __real_3fe0000000000000;
          local_e0._s_0.Y = (dVar4 - dVar5) * __real_3fe0000000000000;
          local_f8._s_0.Y =
               (this->Frame).Origin.field0_0x0._s_0.Y - (dVar5 + dVar4) * __real_3fe0000000000000;
          local_f8._s_0.Z =
               (this->Frame).Origin.field0_0x0._s_0.Z - (dVar7 + dVar6) * __real_3fe0000000000000;
          bVar8 = OrientedBoxTypeLocals::BoxIntersectsLocalSpaceHelper<double>
                            ((TVector<double> *)&local_e0._s_0,(TVector<double> *)&local_f8._s_0,
                             (TVector<double> (*) [3])&local_c8,&this->Extents,param_2);
          return bVar8;
        }
      }
    }
  }
  return false;
}

// IsValid @ 14360d790

bool __thiscall UE::Geometry::TOrientedBox3<float>::IsValid(TOrientedBox3<float> *this)

{
  float *pfVar1;
  
  if (((0.0 < (this->Extents).field0_0x0._s_0.X || (this->Extents).field0_0x0._s_0.X == 0.0) &&
      (pfVar1 = &(this->Extents).field0_0x0._s_0.Y, 0.0 < *pfVar1 || *pfVar1 == 0.0)) &&
     (pfVar1 = &(this->Extents).field0_0x0._s_0.Z, 0.0 < *pfVar1 || *pfVar1 == 0.0)) {
    return true;
  }
  return false;
}

// IsValid @ 14360d7c0

bool __thiscall UE::Geometry::TOrientedBox3<double>::IsValid(TOrientedBox3<double> *this)

{
  double *pdVar1;
  
  if (((0.0 < (this->Extents).field0_0x0._s_0.X || (this->Extents).field0_0x0._s_0.X == 0.0) &&
      (pdVar1 = &(this->Extents).field0_0x0._s_0.Y, 0.0 < *pdVar1 || *pdVar1 == 0.0)) &&
     (pdVar1 = &(this->Extents).field0_0x0._s_0.Z, 0.0 < *pdVar1 || *pdVar1 == 0.0)) {
    return true;
  }
  return false;
}

// Merge @ 14360dcc0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TOrientedBox3<float> * __thiscall
UE::Geometry::TOrientedBox3<float>::Merge
          (TOrientedBox3<float> *this,TOrientedBox3<float> *__return_storage_ptr__,
          TOrientedBox3<float> *param_1,bool param_2)

{
  TQuaternion<float> *pTVar1;
  undefined1 auVar2 [16];
  undefined8 uVar3;
  undefined1 auVar4 [8];
  undefined8 uVar5;
  TOrientedBox3<float> *pTVar6;
  int iVar7;
  int iVar8;
  TVector<float> *pTVar9;
  ulonglong uVar10;
  longlong lVar11;
  int iVar12;
  longlong lVar13;
  uint uVar14;
  float fVar15;
  undefined1 auVar16 [16];
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  undefined1 auVar24 [16];
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  undefined4 uVar30;
  undefined4 uVar31;
  undefined1 local_2f0 [8];
  float fStack_2e8;
  float fStack_2e4;
  float local_2e0;
  float local_2dc;
  float local_2d8;
  TVector<float>_u_0 local_2d0;
  float local_2c0;
  float local_2bc;
  float local_2b8;
  float local_2b4;
  float local_2b0;
  float local_2ac;
  float local_2a8;
  undefined8 local_2a0;
  float local_298;
  undefined8 local_294;
  float local_28c;
  undefined8 local_288;
  float local_280;
  TVector<float>_u_0 local_278;
  TVector<float>_u_0 local_26c;
  TVector<float>_u_0 local_260;
  undefined1 local_250 [12];
  undefined8 local_244;
  undefined1 local_238 [4];
  float local_234 [2];
  TVector<float>_u_0 local_22c;
  TVector<float>_u_0 local_220;
  float local_210;
  float local_20c;
  float local_208;
  float local_204;
  float local_200;
  ulonglong local_1f8;
  float local_1f0;
  float local_1ec;
  float local_1e8;
  TQuaternion<float>_u_0 local_1e0;
  float local_1c8;
  float local_1c4;
  float local_1c0;
  TOrientedBox3<float> *local_1b8;
  TVector<float>_u_0 local_1b0;
  TOrientedBox3<float> *local_1a0;
  TQuaternion<float> *local_198;
  undefined1 local_188 [12];
  undefined8 local_17c;
  float local_174;
  float local_170;
  uint local_16c;
  float local_168;
  float local_164;
  float local_160;
  float local_15c;
  float local_158;
  uint local_154;
  float local_150;
  float local_14c;
  float local_148;
  float local_144;
  float local_140;
  uint local_13c;
  float local_138;
  float local_134;
  float local_130;
  float local_12c;
  undefined1 local_128 [12];
  undefined8 local_11c;
  float local_114;
  float local_110;
  float local_10c;
  float local_108;
  float local_104;
  undefined4 local_100;
  float local_fc;
  float local_f8;
  float local_f4;
  float local_f0;
  float local_ec;
  undefined4 local_e8;
  float local_e4;
  float local_e0;
  float local_dc;
  float local_d8;
  float local_d4;
  undefined4 local_d0;
  float local_cc;
  
  uVar14 = __xmm_80000000800000008000000080000000;
  fVar22 = (this->Frame).Rotation.field0_0x0._s_0.W;
  fVar25 = (this->Frame).Rotation.field0_0x0._s_0.Z;
  fVar28 = (this->Frame).Rotation.field0_0x0._s_0.X;
  fVar15 = (this->Frame).Rotation.field0_0x0._s_0.Y;
  fVar19 = fVar15 * fVar15 + fVar28 * fVar28 + fVar25 * fVar25 + fVar22 * fVar22;
  if (fVar19 <= 0.0) {
    local_2f0 = (undefined1  [8])0x0;
    _fStack_2e8 = 0;
  }
  else {
    fVar19 = __real_3f800000 / fVar19;
    local_2f0._4_4_ = (uint)(fVar19 * fVar15) ^ __xmm_80000000800000008000000080000000;
    local_2f0._0_4_ = (uint)(fVar19 * fVar28) ^ __xmm_80000000800000008000000080000000;
    fStack_2e4 = fVar19 * fVar22;
    fStack_2e8 = (float)((uint)(fVar19 * fVar25) ^ __xmm_80000000800000008000000080000000);
  }
  pTVar1 = &(param_1->Frame).Rotation;
  local_1b8 = param_1;
  local_1a0 = __return_storage_ptr__;
  local_198 = pTVar1;
  operator*<float>((TQuaternion<float> *)&local_1e0._s_0,(TQuaternion<float> *)local_2f0,pTVar1);
  fVar22 = (param_1->Frame).Origin.field0_0x0._s_0.X - (this->Frame).Origin.field0_0x0._s_0.X;
  fVar25 = (param_1->Frame).Origin.field0_0x0._s_0.Y - (this->Frame).Origin.field0_0x0._s_0.Y;
  fVar28 = (param_1->Frame).Origin.field0_0x0._s_0.Z - (this->Frame).Origin.field0_0x0._s_0.Z;
  local_2e0 = fVar28;
  local_2dc = fVar22;
  local_2d8 = fVar25;
  local_250._0_4_ = fVar22;
  local_250._4_4_ = fVar25;
  local_250._8_4_ = fVar28;
  operator*<float>((TVector<float> *)&local_2d0._s_0,(TQuaternion<float> *)local_2f0,
                   (TVector<float> *)local_250);
  local_250._0_4_ = (uint)fVar22 ^ uVar14;
  local_250._4_4_ = (uint)fVar25 ^ uVar14;
  local_250._8_4_ = (uint)fVar28 ^ uVar14;
  TQuaternion<float>::InverseMultiply
            (pTVar1,(TVector<float> *)local_2f0,(TVector<float> *)local_250);
  local_17c = *(undefined8 *)&(this->Extents).field0_0x0;
  fVar15 = (float)((ulonglong)local_17c >> 0x20);
  local_2b0 = (float)((uint)(this->Extents).field0_0x0._s_0.X ^ uVar14);
  local_16c = (uint)(this->Extents).field0_0x0._s_0.Y ^ uVar14;
  fVar25 = (float)((uint)(this->Extents).field0_0x0._s_0.Z ^ uVar14);
  fVar22 = (float)((uint)(param_1->Extents).field0_0x0._s_0.X ^ uVar14);
  local_174 = (this->Extents).field0_0x0._s_0.Z;
  fVar26 = (float)((uint)(param_1->Extents).field0_0x0._s_0.Y ^ uVar14);
  local_11c = *(undefined8 *)&(param_1->Extents).field0_0x0;
  local_128._8_4_ = (uint)(param_1->Extents).field0_0x0._s_0.Z ^ uVar14;
  local_188._0_8_ = CONCAT44(local_16c,local_2b0);
  local_2b4 = (this->Extents).field0_0x0._s_0.Z;
  local_244._0_4_ = (float)local_17c;
  local_2b8 = (float)local_244;
  local_158 = (float)local_244;
  local_140 = (float)local_244;
  local_134 = (float)local_244;
  local_1b0._0_8_ = CONCAT44(fVar15,fVar15);
  local_2a8 = (param_1->Extents).field0_0x0._s_0.Z;
  local_114 = (param_1->Extents).field0_0x0._s_0.Z;
  local_128._0_8_ = CONCAT44(fVar26,fVar22);
  lVar13 = 0;
  lVar11 = 8;
  local_100 = (undefined4)((ulonglong)local_11c >> 0x20);
  local_1f8 = CONCAT44(local_100,local_100);
  auVar24 = ZEXT416(local_16c);
  local_244._0_4_ = (float)local_11c;
  local_2ac = (float)local_244;
  local_f8 = (float)local_244;
  local_e0 = (float)local_244;
  local_d4 = (float)local_244;
  fVar28 = (float)local_128._8_4_;
  fVar19 = fVar15;
  fVar21 = fVar15;
  fVar27 = fVar15;
  local_244 = local_11c;
  local_188._8_4_ = fVar25;
  local_170 = local_2b0;
  local_168 = local_2b4;
  local_164 = local_2b0;
  local_160 = fVar15;
  local_15c = fVar25;
  local_154 = local_16c;
  local_150 = fVar25;
  local_14c = local_2b0;
  local_148 = fVar15;
  local_144 = local_2b4;
  local_13c = local_16c;
  local_138 = local_2b4;
  local_130 = fVar15;
  local_12c = fVar25;
  local_110 = fVar22;
  local_10c = fVar26;
  local_108 = local_2a8;
  local_104 = fVar22;
  local_fc = (float)local_128._8_4_;
  local_f4 = fVar26;
  local_f0 = (float)local_128._8_4_;
  local_ec = fVar22;
  local_e8 = local_100;
  local_e4 = local_2a8;
  local_dc = fVar26;
  local_d8 = local_2a8;
  local_d0 = local_100;
  local_cc = (float)local_128._8_4_;
  do {
    pTVar9 = operator*<float>((TVector<float> *)local_250,(TQuaternion<float> *)&local_1e0._s_0,
                              (TVector<float> *)(local_128 + lVar13));
    fVar20 = local_2d0._s_0.X + (pTVar9->field0_0x0)._s_0.X;
    fVar17 = local_2d0._s_0.Y + (pTVar9->field0_0x0)._s_0.Y;
    fVar18 = local_2d0._s_0.Z + (pTVar9->field0_0x0)._s_0.Z;
    fVar29 = fVar20;
    if (local_2b0 <= fVar20) {
      fVar29 = local_2b0;
    }
    if (local_2b8 < fVar20) {
      local_2b8 = fVar20;
    }
    if (fVar17 <= auVar24._0_4_) {
      auVar24._0_4_ = fVar17;
    }
    if (fVar15 < fVar17) {
      fVar19 = 0.0;
      fVar21 = 0.0;
      fVar27 = 0.0;
      fVar15 = fVar17;
    }
    if (fVar18 <= fVar25) {
      fVar25 = fVar18;
    }
    if (local_2b4 < fVar18) {
      local_2b4 = fVar18;
    }
    local_2b0 = fVar29;
    pTVar9 = TQuaternion<float>::InverseMultiply
                       ((TQuaternion<float> *)&local_1e0._s_0,(TVector<float> *)&local_1b0._s_0,
                        (TVector<float> *)(local_188 + lVar13));
    fVar29 = __real_7f7fffff;
    fVar18 = (float)local_2f0._0_4_ + (pTVar9->field0_0x0)._s_0.X;
    fVar20 = fStack_2e8 + (pTVar9->field0_0x0)._s_0.Z;
    fVar17 = (float)local_2f0._4_4_ + (pTVar9->field0_0x0)._s_0.Y;
    if (fVar18 <= fVar22) {
      fVar22 = fVar18;
    }
    if (local_2ac < fVar18) {
      local_2ac = fVar18;
    }
    if (fVar17 <= fVar26) {
      fVar26 = fVar17;
    }
    fVar18 = (float)local_1f8;
    if ((float)local_1f8 < fVar17) {
      local_1f8 = (ulonglong)(uint)fVar17;
      fVar18 = fVar17;
    }
    local_1ec = fVar20;
    if (fVar28 <= fVar20) {
      local_1ec = fVar28;
    }
    if (local_2a8 < fVar20) {
      local_2a8 = fVar20;
    }
    lVar13 = lVar13 + 0xc;
    lVar11 = lVar11 + -1;
    fVar28 = local_1ec;
  } while (lVar11 != 0);
  local_20c = local_2b8 - local_2b0;
  local_1c4 = fVar22;
  local_210 = fVar15 - auVar24._0_4_;
  local_1c8 = fVar26;
  local_1e8 = auVar24._0_4_;
  local_1c0 = local_2b4 - fVar25;
  auVar16._4_4_ = fVar19;
  auVar16._0_4_ = local_210;
  auVar16._8_4_ = fVar21;
  auVar16._12_4_ = fVar27;
  local_1f0 = fVar25;
  fVar25 = 0.0;
  if (local_210 <= 0.0) {
    auVar2._12_4_ = 0;
    auVar2._0_12_ = auVar16._4_12_;
    auVar16 = auVar2 << 0x20;
  }
  local_1b0._0_8_ = CONCAT44(fVar19,fVar15);
  local_250._0_4_ = local_1c0;
  if (local_1c0 <= 0.0) {
    local_250._0_4_ = fVar25;
  }
  local_250._8_4_ = 3.4028235e+38;
  local_208 = local_2a8 - local_1ec;
  fVar28 = local_20c;
  if (local_20c <= 0.0) {
    fVar28 = fVar25;
  }
  local_200 = local_2ac - fVar22;
  local_250._0_4_ = fVar28 * auVar16._0_4_ * (float)local_250._0_4_;
  local_204 = fVar18 - fVar26;
  fVar22 = local_200;
  if (local_200 <= 0.0) {
    fVar22 = fVar25;
  }
  fVar28 = local_204;
  if (local_204 <= 0.0) {
    fVar28 = fVar25;
  }
  fVar15 = local_208;
  if (local_208 <= 0.0) {
    fVar15 = fVar25;
  }
  local_1e0._0_8_ = ___xmm_ff7fffff7f7fffff7f7fffff7f7fffff;
  uVar3 = local_1e0._0_8_;
  local_1e0._8_8_ = _UNK_150a9e6b8;
  uVar5 = local_1e0._8_8_;
  local_2c0 = __real_ff7fffff;
  local_250._4_4_ = fVar28 * fVar22 * fVar15;
  local_2bc = __real_ff7fffff;
  if (param_2) {
    local_1e0._s_0.Z = (float)_UNK_150a9e6b8;
    local_1e0._s_0.W = (float)((ulonglong)_UNK_150a9e6b8 >> 0x20);
    local_2e0 = local_1e0._s_0.Z;
    local_1e0._s_0.Y = (float)((ulonglong)___xmm_ff7fffff7f7fffff7f7fffff7f7fffff >> 0x20);
    local_2dc = local_1e0._s_0.Y;
    local_1e0._s_0.X = (float)___xmm_ff7fffff7f7fffff7f7fffff7f7fffff;
    local_2d8 = local_1e0._s_0.X;
    uVar31 = local_1e0._s_0.W;
    local_1e0._0_8_ = uVar3;
    local_1e0._8_8_ = uVar5;
    goto LAB_14360eeca;
  }
  TQuaternion<float>::GetAxes
            (&(this->Frame).Rotation,(TVector<float> *)&local_278._s_0,
             (TVector<float> *)&local_26c._s_0,(TVector<float> *)&local_260._s_0);
  TQuaternion<float>::GetAxes
            (&(param_1->Frame).Rotation,(TVector<float> *)local_238,
             (TVector<float> *)&local_22c._s_0,(TVector<float> *)&local_220._s_0);
  pTVar1 = local_198;
  pTVar6 = local_1b8;
  auVar4 = local_2f0;
  local_2a0 = CONCAT44(local_2d8,local_2dc);
  fVar22 = (param_1->Extents).field0_0x0._s_0.X;
  fVar25 = (this->Extents).field0_0x0._s_0.Y;
  fVar19 = local_2d8 * local_2d8 + local_2dc * local_2dc + local_2e0 * local_2e0;
  fVar28 = (this->Extents).field0_0x0._s_0.X;
  fVar15 = (this->Extents).field0_0x0._s_0.Z;
  fVar15 = fVar25 * fVar25 + fVar28 * fVar28 + fVar15 * fVar15;
  fVar25 = (param_1->Extents).field0_0x0._s_0.Y;
  fVar28 = (param_1->Extents).field0_0x0._s_0.Z;
  fVar22 = fVar25 * fVar25 + fVar22 * fVar22 + fVar28 * fVar28;
  if (fVar15 <= fVar22) {
    fVar15 = fVar22;
  }
  local_2f0._0_4_ = (undefined4)UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_;
  fVar22 = (float)local_2f0._0_4_;
  fVar25 = (float)((ulonglong)UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_ >> 0x20);
  local_288 = UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_;
  if (fVar19 <= fVar15) {
    fVar27 = (float)((uint)(local_278._s_0.Y * local_234[0] + local_278._s_0.X * (float)local_238 +
                           local_278._s_0.Z * local_234[1]) & __xmm_7fffffff7fffffff7fffffff7fffffff
                    );
    fVar21 = (float)((uint)(local_26c._s_0.Y * local_234[0] + local_26c._s_0.X * (float)local_238 +
                           local_26c._s_0.Z * local_234[1]) & __xmm_7fffffff7fffffff7fffffff7fffffff
                    );
    fVar19 = (float)((uint)(local_22c._s_0.Y * local_278._s_0.Y +
                            local_22c._s_0.X * local_278._s_0.X +
                           local_22c._s_0.Z * local_278._s_0.Z) &
                    __xmm_7fffffff7fffffff7fffffff7fffffff);
    fVar15 = (float)((uint)(local_22c._s_0.Y * local_26c._s_0.Y +
                            local_22c._s_0.X * local_26c._s_0.X +
                           local_22c._s_0.Z * local_26c._s_0.Z) &
                    __xmm_7fffffff7fffffff7fffffff7fffffff);
    fVar28 = fVar27;
    if (fVar27 < fVar19) {
      fVar28 = fVar19;
    }
    uVar10 = (ulonglong)(fVar27 < fVar19);
    fVar19 = fVar21;
    if (fVar21 < fVar15) {
      fVar19 = fVar15;
    }
    uVar14 = (uint)(fVar21 < fVar15);
    if (fVar28 < (float)((uint)(local_220._s_0.Y * local_278._s_0.Y +
                                local_220._s_0.X * local_278._s_0.X +
                               local_220._s_0.Z * local_278._s_0.Z) &
                        __xmm_7fffffff7fffffff7fffffff7fffffff)) {
      uVar10 = 2;
    }
    if (fVar19 < (float)((uint)(local_220._s_0.Y * local_26c._s_0.Y +
                                local_220._s_0.X * local_26c._s_0.X +
                               local_220._s_0.Z * local_26c._s_0.Z) &
                        __xmm_7fffffff7fffffff7fffffff7fffffff)) {
      uVar14 = 2;
    }
    if ((uint)uVar10 == uVar14) {
      uVar14 = (uVar14 + 1) % 3;
    }
    iVar7 = 1;
    if (local_234[uVar10 * 3] * local_278._s_0.Y +
        *(float *)(local_238 + uVar10 * 0xc) * local_278._s_0.X +
        local_234[uVar10 * 3 + 1] * local_278._s_0.Z < 0.0) {
      iVar7 = -1;
    }
    fVar28 = (float)iVar7;
    lVar11 = (longlong)(int)uVar14;
    iVar7 = 1;
    if (local_234[lVar11 * 3] * local_26c._s_0.Y +
        *(float *)(local_238 + lVar11 * 0xc) * local_26c._s_0.X +
        local_234[lVar11 * 3 + 1] * local_26c._s_0.Z < 0.0) {
      iVar7 = -1;
    }
    fVar19 = fVar28 * *(float *)(local_238 + uVar10 * 0xc) + local_278._s_0.X;
    fVar15 = fVar28 * local_234[uVar10 * 3] + local_278._s_0.Y;
    local_298 = fVar28 * local_234[uVar10 * 3 + 1] + local_278._s_0.Z;
    fVar28 = (float)iVar7;
    fVar21 = fVar15 * fVar15 + fVar19 * fVar19 + local_298 * local_298;
    if (fVar21 == __real_3f800000) {
      local_2a0 = CONCAT44(fVar15,fVar19);
      local_2f0 = (undefined1  [8])CONCAT44(fVar15,fVar19);
    }
    else if (__real_322bcc77 <= fVar21) {
      fVar21 = __real_3f800000 / SQRT(fVar21);
      fVar15 = fVar15 * fVar21;
      local_298 = local_298 * fVar21;
      fVar19 = fVar19 * fVar21;
      local_2a0 = CONCAT44(fVar15,fVar19);
      local_2f0 = auVar4;
    }
    else {
      local_2f0 = (undefined1  [8])UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_;
      local_2a0 = UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_;
      fVar15 = fVar25;
      fVar19 = fVar22;
      local_298 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
    }
    fVar26 = local_234[lVar11 * 3] * fVar28 + local_26c._s_0.Y;
    fVar29 = *(float *)(local_238 + lVar11 * 0xc) * fVar28 + local_26c._s_0.X;
    fVar28 = local_234[lVar11 * 3 + 1] * fVar28 + local_26c._s_0.Z;
    fVar21 = fVar28 * fVar15 - fVar26 * local_298;
    fVar27 = fVar29 * local_298 - fVar28 * fVar19;
    local_280 = fVar26 * fVar19 - fVar29 * fVar15;
    fVar28 = fVar27 * fVar27 + fVar21 * fVar21 + local_280 * local_280;
    if (fVar28 == __real_3f800000) {
      local_2f0 = (undefined1  [8])CONCAT44(fVar27,fVar21);
      local_288 = local_2f0;
      fVar25 = fVar27;
      fVar22 = fVar21;
    }
    else if (__real_322bcc77 <= fVar28) {
      fVar22 = __real_3f800000 / SQRT(fVar28);
      fVar25 = fVar27 * fVar22;
      local_280 = local_280 * fVar22;
      fVar22 = fVar21 * fVar22;
      local_288 = CONCAT44(fVar25,fVar22);
    }
    else {
      local_2f0 = (undefined1  [8])UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_;
      local_280 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
    }
    fVar28 = fVar25 * local_298 - local_280 * fVar15;
    fVar21 = local_280 * fVar19 - fVar22 * local_298;
    fVar25 = fVar22 * fVar15 - fVar25 * fVar19;
    fVar22 = fVar21 * fVar21 + fVar28 * fVar28 + fVar25 * fVar25;
    if (fVar22 == __real_3f800000) {
LAB_14360ebf8:
      local_294 = CONCAT44(fVar21,fVar28);
      uVar30 = fVar25;
    }
    else {
      local_294 = UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_;
      uVar30 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
      if (__real_322bcc77 <= fVar22) {
        fVar22 = __real_3f800000 / SQRT(fVar22);
        fVar28 = fVar28 * fVar22;
        fVar21 = fVar21 * fVar22;
        fVar25 = fVar25 * fVar22;
        goto LAB_14360ebf8;
      }
    }
    fVar22 = (float)((ulonglong)local_294 >> 0x20);
    fVar28 = (float)local_294;
  }
  else {
    local_298 = local_2e0;
    local_2f0 = (undefined1  [8])CONCAT44(local_2d8,local_2dc);
    if (fVar19 != __real_3f800000) {
      if (0.0 <= fVar19) {
        fVar28 = __real_3f800000 / SQRT(fVar19);
        local_2dc = fVar28 * local_2dc;
        local_2d8 = fVar28 * local_2d8;
        local_298 = fVar28 * local_2e0;
        local_2a0 = CONCAT44(local_2d8,local_2dc);
        local_2f0 = auVar4;
      }
      else {
        local_2f0 = (undefined1  [8])UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_;
        local_2a0 = UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_;
        local_2dc = fVar22;
        local_2d8 = fVar25;
        local_298 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
      }
    }
    uVar3 = CONCAT44(local_234[0],local_238);
    fVar15 = (float)((uint)(local_278._s_0.Y * local_2d8 + local_278._s_0.X * local_2dc +
                           local_278._s_0.Z * local_298) & __xmm_7fffffff7fffffff7fffffff7fffffff);
    fVar28 = (float)((uint)(local_234[0] * local_2d8 + (float)local_238 * local_2dc +
                           local_234[1] * local_298) & __xmm_7fffffff7fffffff7fffffff7fffffff);
    if (fVar15 < fVar28) {
      fVar28 = fVar15;
      uVar3 = CONCAT44(local_278._s_0.Y,local_278._s_0.X);
      local_234[1] = local_278._s_0.Z;
    }
    if (fVar28 < fVar29) {
      fVar29 = fVar28;
      local_2d0._0_8_ = uVar3;
      local_2d0._s_0.Z = local_234[1];
    }
    fVar28 = (float)((uint)(local_26c._s_0.Y * local_2d8 + local_26c._s_0.X * local_2dc +
                           local_26c._s_0.Z * local_298) & __xmm_7fffffff7fffffff7fffffff7fffffff);
    fVar15 = (float)((uint)(local_22c._s_0.Y * local_2d8 + local_22c._s_0.X * local_2dc +
                           local_22c._s_0.Z * local_298) & __xmm_7fffffff7fffffff7fffffff7fffffff);
    if (fVar15 <= fVar28) {
      if (fVar15 < fVar29) {
        local_2d0._s_0.Z = local_22c._s_0.Z;
        fVar29 = fVar15;
        local_2d0._0_8_ = CONCAT44(local_22c._s_0.Y,local_22c._s_0.X);
      }
    }
    else if (fVar28 < fVar29) {
      local_2d0._s_0.Z = local_26c._s_0.Z;
      fVar29 = fVar28;
      local_2d0._0_8_ = CONCAT44(local_26c._s_0.Y,local_26c._s_0.X);
    }
    fVar28 = (float)((uint)(local_260._s_0.Y * local_2d8 + local_260._s_0.X * local_2dc +
                           local_260._s_0.Z * local_298) & __xmm_7fffffff7fffffff7fffffff7fffffff);
    fVar15 = (float)((uint)(local_220._s_0.Y * local_2d8 + local_220._s_0.X * local_2dc +
                           local_220._s_0.Z * local_298) & __xmm_7fffffff7fffffff7fffffff7fffffff);
    if (fVar15 <= fVar28) {
      if (fVar15 < fVar29) {
        local_2d0._s_0.Z = local_220._s_0.Z;
        local_2d0._0_8_ = CONCAT44(local_220._s_0.Y,local_220._s_0.X);
      }
    }
    else if (fVar28 < fVar29) {
      local_2d0._s_0.Z = local_260._s_0.Z;
      local_2d0._0_8_ = CONCAT44(local_260._s_0.Y,local_260._s_0.X);
    }
    fVar19 = local_2d0._s_0.Z * local_2d8 - local_2d0._s_0.Y * local_298;
    local_280 = local_2d0._s_0.Y * local_2dc - local_2d0._s_0.X * local_2d8;
    fVar15 = local_2d0._s_0.X * local_298 - local_2d0._s_0.Z * local_2dc;
    fVar28 = fVar15 * fVar15 + fVar19 * fVar19 + local_280 * local_280;
    if (fVar28 == __real_3f800000) {
      local_2f0 = (undefined1  [8])CONCAT44(fVar15,fVar19);
      local_288 = local_2f0;
      fVar25 = fVar15;
      fVar22 = fVar19;
    }
    else if (0.0 <= fVar28) {
      fVar22 = __real_3f800000 / SQRT(fVar28);
      fVar25 = fVar15 * fVar22;
      local_280 = local_280 * fVar22;
      fVar22 = fVar19 * fVar22;
      local_288 = CONCAT44(fVar25,fVar22);
    }
    else {
      local_2f0 = (undefined1  [8])UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_;
      local_280 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
    }
    fVar28 = fVar25 * local_298 - local_280 * local_2d8;
    uVar30 = fVar22 * local_2d8 - fVar25 * local_2dc;
    fVar22 = local_280 * local_2dc - fVar22 * local_298;
    local_294 = CONCAT44(fVar22,fVar28);
  }
  lVar11 = 0;
  lVar13 = 8;
  local_2e0 = local_1e0._s_0.Z;
  local_2dc = local_1e0._s_0.Y;
  local_2d8 = local_1e0._s_0.X;
  fVar25 = local_2bc;
  fVar15 = local_2c0;
  uVar31 = local_1e0._s_0.W;
  local_28c = (float)uVar30;
  do {
    pTVar9 = operator*<float>((TVector<float> *)local_2f0,&(this->Frame).Rotation,
                              (TVector<float> *)(local_188 + lVar11));
    fVar29 = (this->Frame).Origin.field0_0x0._s_0.Y + (pTVar9->field0_0x0)._s_0.Y;
    fVar21 = (this->Frame).Origin.field0_0x0._s_0.X + (pTVar9->field0_0x0)._s_0.X;
    fVar19 = (this->Frame).Origin.field0_0x0._s_0.Z + (pTVar9->field0_0x0)._s_0.Z;
    fVar27 = fVar29 * local_2a0._4_4_ + fVar21 * (float)local_2a0 + fVar19 * local_298;
    fVar26 = fVar29 * local_288._4_4_ + fVar21 * (float)local_288 + fVar19 * local_280;
    fVar21 = fVar21 * fVar28 + fVar29 * fVar22 + fVar19 * (float)uVar30;
    pTVar9 = operator*<float>((TVector<float> *)&local_2d0._s_0,pTVar1,
                              (TVector<float> *)(local_128 + lVar11));
    fVar17 = (pTVar6->Frame).Origin.field0_0x0._s_0.X + (pTVar9->field0_0x0)._s_0.X;
    fVar20 = (pTVar6->Frame).Origin.field0_0x0._s_0.Y + (pTVar9->field0_0x0)._s_0.Y;
    fVar29 = (pTVar6->Frame).Origin.field0_0x0._s_0.Z + (pTVar9->field0_0x0)._s_0.Z;
    fVar18 = fVar20 * local_2a0._4_4_ + fVar17 * (float)local_2a0 + fVar29 * local_298;
    fVar19 = fVar27;
    if (fVar27 <= (float)uVar31) {
      fVar19 = (float)uVar31;
    }
    fVar23 = fVar20 * local_288._4_4_ + fVar17 * (float)local_288 + fVar29 * local_280;
    if (local_2d8 <= fVar27) {
      fVar27 = local_2d8;
    }
    fVar29 = fVar17 * fVar28 + fVar20 * fVar22 + fVar29 * (float)uVar30;
    uVar31 = fVar19;
    if (fVar19 <= fVar18) {
      uVar31 = fVar18;
    }
    fVar19 = fVar21;
    if (local_2dc <= fVar21) {
      fVar19 = local_2dc;
    }
    local_2d8 = fVar27;
    if (fVar18 <= fVar27) {
      local_2d8 = fVar18;
    }
    if (fVar21 <= fVar15) {
      fVar21 = fVar15;
    }
    local_2dc = fVar19;
    if (fVar29 <= fVar19) {
      local_2dc = fVar29;
    }
    fVar15 = fVar21;
    if (fVar21 <= fVar29) {
      fVar15 = fVar29;
    }
    fVar19 = fVar26;
    if (local_2e0 <= fVar26) {
      fVar19 = local_2e0;
    }
    if (fVar26 <= fVar25) {
      fVar26 = fVar25;
    }
    lVar11 = lVar11 + 0xc;
    local_2e0 = fVar19;
    if (fVar23 <= fVar19) {
      local_2e0 = fVar23;
    }
    fVar25 = fVar26;
    if (fVar26 <= fVar23) {
      fVar25 = fVar23;
    }
    lVar13 = lVar13 + -1;
  } while (lVar13 != 0);
  auVar24 = ZEXT416((uint)local_1e8);
  fVar18 = (float)local_1f8;
  fVar28 = 0.0;
  fVar22 = fVar15 - local_2dc;
  if (fVar15 - local_2dc <= 0.0) {
    fVar22 = fVar28;
  }
  fVar19 = fVar25 - local_2e0;
  if (fVar25 - local_2e0 <= 0.0) {
    fVar19 = fVar28;
  }
  fVar21 = (float)uVar31 - local_2d8;
  if ((float)uVar31 - local_2d8 <= 0.0) {
    fVar21 = fVar28;
  }
  local_250._8_4_ = fVar21 * fVar22 * fVar19;
  __return_storage_ptr__ = local_1a0;
  param_1 = local_1b8;
  local_2c0 = fVar15;
  local_2bc = fVar25;
LAB_14360eeca:
  fVar15 = local_280;
  fVar28 = local_28c;
  fVar25 = local_298;
  iVar12 = 1;
  lVar11 = 1;
  fVar22 = (float)local_250._0_4_;
  iVar7 = 0;
  do {
    iVar8 = iVar12;
    fVar19 = *(float *)(local_250 + lVar11 * 4);
    if (fVar22 <= *(float *)(local_250 + lVar11 * 4)) {
      iVar8 = iVar7;
      fVar19 = fVar22;
    }
    fVar22 = fVar19;
    iVar12 = iVar12 + 1;
    lVar11 = lVar11 + 1;
    iVar7 = iVar8;
  } while (lVar11 < (longlong)(ulonglong)((param_2 ^ 1) + 2));
  *(undefined8 *)((longlong)&(__return_storage_ptr__->Frame).Rotation.field0_0x0 + 4) = 0;
  pTVar1 = &(__return_storage_ptr__->Frame).Rotation;
  (pTVar1->field0_0x0)._s_0.X = 0.0;
  (__return_storage_ptr__->Frame).Rotation.field0_0x0._s_0.W = 1.0;
  *(undefined8 *)&(__return_storage_ptr__->Frame).Origin.field0_0x0 =
       UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_;
  (__return_storage_ptr__->Frame).Origin.field0_0x0._s_0.Z =
       UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
  *(undefined8 *)((longlong)&(__return_storage_ptr__->Frame).Rotation.field0_0x0 + 4) = 0;
  (__return_storage_ptr__->Frame).Rotation.field0_0x0._s_0.W = 1.0;
  (__return_storage_ptr__->Extents).field0_0x0._s_0.X = 1.0;
  (__return_storage_ptr__->Extents).field0_0x0._s_0.Y = 1.0;
  (__return_storage_ptr__->Extents).field0_0x0._s_0.Z = 1.0;
  fVar22 = __real_3f000000;
  if (iVar8 == 2) {
    fVar22 = (float)local_2a0;
    fVar21 = (float)local_294;
    fVar26 = (float)local_288;
    fVar19 = local_2a0._4_4_;
    fVar27 = local_294._4_4_;
    fVar29 = local_288._4_4_;
    local_278._s_0.X = (float)local_2a0;
    local_278._s_0.Y = (float)local_294;
    local_278._s_0.Z = (float)local_288;
    local_26c._s_0.X = local_2a0._4_4_;
    local_26c._s_0.Y = local_294._4_4_;
    local_26c._s_0.Z = local_288._4_4_;
    local_260._s_0.X = local_298;
    local_260._s_0.Y = local_28c;
    local_260._s_0.Z = local_280;
    TQuaternion<float>::SetFromRotationMatrix(pTVar1,(TMatrix3<float> *)&local_278._s_0);
    local_210 = local_2c0 - local_2dc;
    local_1c0 = local_2bc - local_2e0;
    local_20c = (float)uVar31 - local_2d8;
    fVar20 = (local_2c0 + local_2dc) * __real_3f000000;
    fVar17 = (local_2bc + local_2e0) * __real_3f000000;
    fVar18 = ((float)uVar31 + local_2d8) * __real_3f000000;
    fVar28 = fVar20 * fVar28 + fVar18 * fVar25 + fVar17 * fVar15;
    fVar15 = fVar20 * fVar27 + fVar18 * fVar19 + fVar17 * fVar29;
    fVar25 = fVar20 * fVar21 + fVar18 * fVar22 + fVar17 * fVar26;
    fVar22 = __real_3f000000;
  }
  else if (iVar8 == 0) {
    uVar3 = *(undefined8 *)((longlong)&(this->Frame).Rotation.field0_0x0 + 8);
    *(undefined8 *)&pTVar1->field0_0x0 = *(undefined8 *)&(this->Frame).Rotation.field0_0x0;
    *(undefined8 *)((longlong)&(__return_storage_ptr__->Frame).Rotation.field0_0x0 + 8) = uVar3;
    fStack_2e8 = (local_1f0 + local_2b4) * fVar22;
    local_2f0._4_4_ = ((float)local_1b0._0_8_ + auVar24._0_4_) * fVar22;
    local_2f0._0_4_ = (local_2b8 + local_2b0) * fVar22;
    pTVar9 = operator*<float>((TVector<float> *)local_250,&(this->Frame).Rotation,
                              (TVector<float> *)local_2f0);
    fVar28 = (pTVar9->field0_0x0)._s_0.Z + (this->Frame).Origin.field0_0x0._s_0.Z;
    fVar15 = (pTVar9->field0_0x0)._s_0.Y + (this->Frame).Origin.field0_0x0._s_0.Y;
    fVar25 = (pTVar9->field0_0x0)._s_0.X + (this->Frame).Origin.field0_0x0._s_0.X;
  }
  else {
    uVar3 = *(undefined8 *)((longlong)&(param_1->Frame).Rotation.field0_0x0 + 8);
    local_2f0._0_4_ = (local_1c4 + local_2ac) * __real_3f000000;
    *(undefined8 *)&pTVar1->field0_0x0 = *(undefined8 *)&(param_1->Frame).Rotation.field0_0x0;
    *(undefined8 *)((longlong)&(__return_storage_ptr__->Frame).Rotation.field0_0x0 + 8) = uVar3;
    local_2f0._4_4_ = (local_1c8 + fVar18) * fVar22;
    fStack_2e8 = (local_1ec + local_2a8) * fVar22;
    pTVar9 = operator*<float>((TVector<float> *)local_250,&(param_1->Frame).Rotation,
                              (TVector<float> *)local_2f0);
    fVar28 = (pTVar9->field0_0x0)._s_0.Z + (param_1->Frame).Origin.field0_0x0._s_0.Z;
    fVar15 = (pTVar9->field0_0x0)._s_0.Y + (param_1->Frame).Origin.field0_0x0._s_0.Y;
    fVar25 = (param_1->Frame).Origin.field0_0x0._s_0.X + (pTVar9->field0_0x0)._s_0.X;
    local_210 = local_204;
    local_1c0 = local_208;
    local_20c = local_200;
  }
  (__return_storage_ptr__->Frame).Origin.field0_0x0._s_0.X = fVar25;
  (__return_storage_ptr__->Frame).Origin.field0_0x0._s_0.Y = fVar15;
  (__return_storage_ptr__->Frame).Origin.field0_0x0._s_0.Z = fVar28;
  (__return_storage_ptr__->Extents).field0_0x0._s_0.X = local_20c * fVar22;
  (__return_storage_ptr__->Extents).field0_0x0._s_0.Y = local_210 * fVar22;
  (__return_storage_ptr__->Extents).field0_0x0._s_0.Z = local_1c0 * fVar22;
  fVar25 = __real_358637bd;
  fVar28 = (__return_storage_ptr__->Extents).field0_0x0._s_0.Z + __real_358637bd;
  (__return_storage_ptr__->Extents).field0_0x0._s_0.X =
       (__return_storage_ptr__->Extents).field0_0x0._s_0.X + __real_358637bd;
  fVar22 = (__return_storage_ptr__->Extents).field0_0x0._s_0.Y;
  (__return_storage_ptr__->Extents).field0_0x0._s_0.Z = fVar28;
  (__return_storage_ptr__->Extents).field0_0x0._s_0.Y = fVar22 + fVar25;
  return __return_storage_ptr__;
}

// Merge @ 14360f270

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TOrientedBox3<double> * __thiscall
UE::Geometry::TOrientedBox3<double>::Merge
          (TOrientedBox3<double> *this,TOrientedBox3<double> *__return_storage_ptr__,
          TOrientedBox3<double> *param_1,bool param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auVar4 [16];
  double dVar5;
  undefined1 auVar6 [12];
  undefined1 auVar7 [12];
  undefined8 uVar8;
  double *pdVar9;
  int iVar10;
  int iVar11;
  TVector<double> *pTVar12;
  ulonglong uVar13;
  longlong lVar14;
  int iVar15;
  longlong lVar16;
  double dVar17;
  double dVar18;
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  double dVar21;
  double dVar22;
  double dVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  undefined4 uVar26;
  undefined4 uVar27;
  double dVar28;
  double dVar29;
  double dVar30;
  uint uVar31;
  uint uVar32;
  uint uVar33;
  double dVar34;
  uint uVar35;
  uint uVar36;
  uint uVar37;
  uint uVar38;
  uint uVar40;
  undefined1 auVar39 [16];
  uint uVar41;
  undefined4 uVar42;
  uint uVar43;
  undefined4 uVar44;
  uint uVar45;
  uint uVar46;
  undefined4 uVar47;
  undefined4 uVar48;
  undefined4 uVar49;
  undefined4 uVar50;
  undefined4 uVar51;
  undefined4 uVar52;
  TQuaternion<double>_u_0 local_4d0;
  double local_4b0;
  double local_4a8;
  double local_4a0;
  double local_498;
  TVector<double>_u_0 local_490;
  double local_478;
  double local_470;
  double local_468;
  double dStack_460;
  double local_458;
  undefined1 local_450 [16];
  double local_440;
  double local_438;
  double dStack_430;
  double local_428;
  double local_418;
  double local_410;
  TVector<double>_u_0 local_408;
  TVector<double>_u_0 local_3f0;
  TVector<double>_u_0 local_3d8;
  undefined1 local_3b8 [8];
  double local_3b0 [2];
  TVector<double>_u_0 local_3a0;
  TVector<double>_u_0 local_388;
  TQuaternion<double>_u_0 local_368;
  double local_348;
  double dStack_340;
  undefined1 local_338 [40];
  double local_310;
  double local_308;
  undefined4 uStack_300;
  undefined4 uStack_2fc;
  double local_2f8;
  undefined4 uStack_2f0;
  undefined4 uStack_2ec;
  double local_2e8;
  undefined4 uStack_2e0;
  undefined4 uStack_2dc;
  double local_2d8;
  double local_2d0;
  double local_2c8;
  double local_2c0;
  double local_2b8;
  double local_2a8;
  double dStack_2a0;
  double local_298;
  TOrientedBox3<double> *local_290;
  TVector<double>_u_0 local_288;
  double local_270;
  double local_268;
  double local_260;
  double local_258;
  double local_250;
  undefined1 local_248 [16];
  ulonglong local_238;
  undefined4 local_230;
  undefined4 uStack_22c;
  undefined4 uStack_228;
  undefined4 uStack_224;
  double local_220;
  undefined8 local_218;
  double local_210;
  double local_208;
  undefined8 local_200;
  double local_1f8;
  ulonglong local_1f0;
  undefined4 local_1e8;
  undefined4 uStack_1e4;
  double local_1e0;
  ulonglong local_1d8;
  undefined8 local_1d0;
  double local_1c8;
  double local_1c0;
  undefined4 local_1b8;
  undefined4 uStack_1b4;
  double local_1b0;
  double local_1a8;
  undefined4 local_1a0;
  undefined4 uStack_19c;
  double local_198;
  ulonglong local_190;
  double local_188;
  double dStack_180;
  undefined8 local_178;
  undefined4 local_170;
  undefined4 uStack_16c;
  undefined4 uStack_168;
  undefined4 uStack_164;
  double local_160;
  undefined8 local_158;
  undefined8 local_150;
  double local_148;
  undefined8 local_140;
  double local_138;
  undefined8 local_130;
  undefined4 local_128;
  undefined4 uStack_124;
  undefined8 local_120;
  undefined8 local_118;
  undefined8 local_110;
  double local_108;
  double local_100;
  undefined4 local_f8;
  undefined4 uStack_f4;
  undefined8 local_f0;
  double local_e8;
  undefined4 local_e0;
  undefined4 uStack_dc;
  double local_d8;
  undefined8 local_d0;
  
  dVar23 = (this->Frame).Rotation.field0_0x0._s_0.W;
  dVar17 = (this->Frame).Rotation.field0_0x0._s_0.Z;
  uVar36 = (uint)__xmm_80000000000000008000000000000000;
  uVar37 = (uint)((ulonglong)__xmm_80000000000000008000000000000000 >> 0x20);
  dVar34 = (this->Frame).Rotation.field0_0x0._s_0.X;
  dVar18 = (this->Frame).Rotation.field0_0x0._s_0.Y;
  dVar28 = dVar18 * dVar18 + dVar34 * dVar34 + dVar17 * dVar17 + dVar23 * dVar23;
  if (dVar28 <= 0.0) {
    local_4d0._s_0.Z = 0.0;
    local_4d0._s_0.W = 0.0;
    local_4d0._s_0.X = 0.0;
    local_4d0._s_0.Y = 0.0;
  }
  else {
    dVar28 = __real_3ff0000000000000 / dVar28;
    local_4d0._s_0.X =
         (double)CONCAT44((uint)((ulonglong)(dVar28 * dVar34) >> 0x20) ^ uVar37,
                          SUB84(dVar28 * dVar34,0) ^ uVar36);
    local_4d0._s_0.Y =
         (double)CONCAT44((uint)((ulonglong)(dVar28 * dVar18) >> 0x20) ^ uVar37,
                          SUB84(dVar28 * dVar18,0) ^ uVar36);
    local_4d0._s_0.W = dVar28 * dVar23;
    local_4d0._s_0.Z =
         (double)CONCAT44((uint)((ulonglong)(dVar28 * dVar17) >> 0x20) ^ uVar37,
                          SUB84(dVar28 * dVar17,0) ^ uVar36);
  }
  local_290 = __return_storage_ptr__;
  operator*<double>((TQuaternion<double> *)&local_368._s_0,(TQuaternion<double> *)&local_4d0._s_0,
                    &(param_1->Frame).Rotation);
  dVar23 = (param_1->Frame).Origin.field0_0x0._s_0.X - (this->Frame).Origin.field0_0x0._s_0.X;
  dVar34 = (param_1->Frame).Origin.field0_0x0._s_0.Y - (this->Frame).Origin.field0_0x0._s_0.Y;
  dVar17 = (param_1->Frame).Origin.field0_0x0._s_0.Z - (this->Frame).Origin.field0_0x0._s_0.Z;
  local_4b0 = dVar17;
  local_4a8 = dVar23;
  local_4a0 = dVar34;
  local_490._s_0.X = dVar23;
  local_490._s_0.Y = dVar34;
  local_490._s_0.Z = dVar17;
  operator*<double>((TVector<double> *)&local_288._s_0,(TQuaternion<double> *)&local_4d0._s_0,
                    (TVector<double> *)&local_490._s_0);
  local_338._0_8_ = CONCAT44((uint)((ulonglong)dVar23 >> 0x20) ^ uVar37,SUB84(dVar23,0) ^ uVar36);
  local_338._16_8_ = CONCAT44((uint)((ulonglong)dVar17 >> 0x20) ^ uVar37,SUB84(dVar17,0) ^ uVar36);
  local_338._8_8_ = CONCAT44((uint)((ulonglong)dVar34 >> 0x20) ^ uVar37,SUB84(dVar34,0) ^ uVar36);
  TQuaternion<double>::InverseMultiply
            (&(param_1->Frame).Rotation,(TVector<double> *)&local_4d0._s_0,
             (TVector<double> *)local_338);
  local_230 = *(undefined4 *)&(this->Extents).field0_0x0;
  uStack_22c = *(undefined4 *)((longlong)&(this->Extents).field0_0x0 + 4);
  local_2f8 = *(double *)&(this->Extents).field0_0x0;
  uStack_300 = *(undefined4 *)((longlong)&(this->Extents).field0_0x0 + 8);
  uStack_2fc = *(undefined4 *)((longlong)&(this->Extents).field0_0x0 + 0xc);
  local_470 = (this->Extents).field0_0x0._s_0.Z;
  uVar1 = *(undefined8 *)&(this->Extents).field0_0x0;
  uVar2 = *(undefined8 *)((longlong)&(this->Extents).field0_0x0 + 8);
  uVar31 = (uint)uVar1 ^ uVar36;
  uVar32 = (uint)((ulonglong)uVar1 >> 0x20) ^ uVar37;
  uVar1 = *(undefined8 *)((longlong)&(this->Extents).field0_0x0 + 0x10);
  uVar33 = (uint)uVar2 ^ uVar36;
  uVar35 = (uint)((ulonglong)uVar2 >> 0x20) ^ uVar37;
  local_248._8_8_ = CONCAT44(uVar35,uVar33);
  local_170 = *(undefined4 *)&(param_1->Extents).field0_0x0;
  uStack_16c = *(undefined4 *)((longlong)&(param_1->Extents).field0_0x0 + 4);
  local_2e8 = (param_1->Extents).field0_0x0._s_0.X;
  pdVar9 = &(param_1->Extents).field0_0x0._s_0.Y;
  uStack_2e0 = *(undefined4 *)pdVar9;
  uStack_2dc = *(undefined4 *)((longlong)&(param_1->Extents).field0_0x0 + 0xc);
  dStack_2a0 = *pdVar9;
  uVar2 = *(undefined8 *)&(param_1->Extents).field0_0x0;
  uVar38 = (uint)uVar1 ^ uVar36;
  uVar40 = (uint)((ulonglong)uVar1 >> 0x20) ^ uVar37;
  auVar39._0_8_ = CONCAT44(uVar40,uVar38);
  uVar24 = 0;
  uVar25 = 0;
  auVar39._8_8_ = 0;
  uVar1 = *(undefined8 *)((longlong)&(param_1->Extents).field0_0x0 + 8);
  local_248._0_8_ = CONCAT44(uVar32,uVar31);
  uVar3 = *(undefined8 *)((longlong)&(param_1->Extents).field0_0x0 + 0x10);
  uVar41 = (uint)uVar2 ^ uVar36;
  uVar43 = (uint)((ulonglong)uVar2 >> 0x20) ^ uVar37;
  local_410 = (param_1->Extents).field0_0x0._s_0.Z;
  uVar45 = (uint)uVar1 ^ uVar36;
  uVar46 = (uint)((ulonglong)uVar1 >> 0x20) ^ uVar37;
  uVar36 = (uint)uVar3 ^ uVar36;
  uVar37 = (uint)((ulonglong)uVar3 >> 0x20) ^ uVar37;
  auVar6._4_8_ = local_248._8_8_;
  auVar6._0_4_ = uStack_22c;
  auVar19._0_8_ = auVar6._0_8_ << 0x20;
  auVar19._8_4_ = uStack_300;
  auVar19._12_4_ = uStack_2fc;
  local_308 = auVar19._8_8_;
  local_478 = (double)CONCAT44(uVar32,uVar31);
  local_218 = CONCAT44(uVar32,uVar31);
  local_200 = CONCAT44(uVar32,uVar31);
  local_1d0 = CONCAT44(uVar32,uVar31);
  lVar16 = 0;
  dVar34 = (double)CONCAT44(uVar43,uVar41);
  dStack_180 = (double)CONCAT44(uVar46,uVar45);
  lVar14 = 8;
  auVar7._4_8_ = dStack_180;
  auVar7._0_4_ = uStack_16c;
  auVar20._0_8_ = auVar7._0_8_ << 0x20;
  auVar20._8_4_ = uStack_2e0;
  auVar20._12_4_ = uStack_2dc;
  dVar23 = (double)CONCAT44(uVar37,uVar36);
  local_2a8 = auVar20._8_8_;
  local_158 = CONCAT44(uVar43,uVar41);
  local_150 = CONCAT44(uVar46,uVar45);
  local_140 = CONCAT44(uVar43,uVar41);
  local_130 = CONCAT44(uVar37,uVar36);
  local_120 = CONCAT44(uVar46,uVar45);
  local_118 = CONCAT44(uVar37,uVar36);
  local_110 = CONCAT44(uVar43,uVar41);
  local_f0 = CONCAT44(uVar46,uVar45);
  local_d0 = CONCAT44(uVar37,uVar36);
  local_178 = CONCAT44(uVar37,uVar36);
  dVar17 = dStack_180;
  dVar18 = (double)local_248._8_8_;
  local_338._16_8_ = dVar23;
  local_310 = local_410;
  uStack_2f0 = uStack_300;
  uStack_2ec = uStack_2fc;
  local_238 = auVar39._0_8_;
  uStack_228 = uStack_300;
  uStack_224 = uStack_2fc;
  local_220 = local_470;
  local_210 = (double)local_248._8_8_;
  local_208 = local_470;
  local_1f8 = local_308;
  local_1f0 = auVar39._0_8_;
  local_1e8 = local_230;
  uStack_1e4 = uStack_22c;
  local_1e0 = (double)local_248._8_8_;
  local_1d8 = auVar39._0_8_;
  local_1c8 = local_308;
  local_1c0 = local_470;
  local_1b8 = local_230;
  uStack_1b4 = uStack_22c;
  local_1b0 = (double)local_248._8_8_;
  local_1a8 = local_470;
  local_1a0 = local_230;
  uStack_19c = uStack_22c;
  local_198 = local_308;
  local_190 = auVar39._0_8_;
  local_188 = dVar34;
  uStack_168 = uStack_2e0;
  uStack_164 = uStack_2dc;
  local_160 = local_410;
  local_148 = local_410;
  local_138 = local_2a8;
  local_128 = local_170;
  uStack_124 = uStack_16c;
  local_108 = local_2a8;
  local_100 = local_410;
  local_f8 = local_170;
  uStack_f4 = uStack_16c;
  local_e8 = local_410;
  local_e0 = local_170;
  uStack_dc = uStack_16c;
  local_d8 = local_2a8;
  do {
    pTVar12 = operator*<double>((TVector<double> *)local_338,(TQuaternion<double> *)&local_368._s_0,
                                (TVector<double> *)((longlong)&local_188 + lVar16));
    dVar29 = local_288._s_0.X + (pTVar12->field0_0x0)._s_0.X;
    dVar21 = local_288._s_0.Y + (pTVar12->field0_0x0)._s_0.Y;
    dVar28 = local_288._s_0.Z + (pTVar12->field0_0x0)._s_0.Z;
    dVar5 = dVar29;
    if (local_478 <= dVar29) {
      dVar5 = local_478;
    }
    if (local_2f8 < dVar29) {
      dVar18 = (double)CONCAT44(uVar35,uVar33);
      auVar39._4_4_ = uVar40;
      auVar39._0_4_ = uVar38;
      auVar39._8_4_ = uVar24;
      auVar39._12_4_ = uVar25;
      local_2f8 = dVar29;
    }
    dVar29 = dVar21;
    if (dVar18 <= dVar21) {
      dVar29 = dVar18;
    }
    if (local_308 < dVar21) {
      auVar39._4_4_ = uVar40;
      auVar39._0_4_ = uVar38;
      auVar39._8_4_ = uVar24;
      auVar39._12_4_ = uVar25;
      local_308 = dVar21;
    }
    if (dVar28 <= auVar39._0_8_) {
      auVar39._0_8_ = (ulonglong)dVar28;
    }
    if (local_470 < dVar28) {
      local_470 = dVar28;
    }
    local_478 = dVar5;
    pTVar12 = TQuaternion<double>::InverseMultiply
                        ((TQuaternion<double> *)&local_368._s_0,(TVector<double> *)local_338,
                         (TVector<double> *)(local_248 + lVar16));
    dVar5 = local_4b0;
    dVar28 = __real_7fefffffffffffff;
    dVar22 = local_4d0._s_0.X + (pTVar12->field0_0x0)._s_0.X;
    dVar18 = local_4d0._s_0.Y + (pTVar12->field0_0x0)._s_0.Y;
    dVar21 = local_4d0._s_0.Z + (pTVar12->field0_0x0)._s_0.Z;
    if (dVar22 <= dVar34) {
      dVar34 = dVar22;
    }
    if (local_2e8 < dVar22) {
      local_2e8 = dVar22;
    }
    local_2c0 = dVar18;
    if (dVar17 <= dVar18) {
      local_2c0 = dVar17;
    }
    if (local_2a8 < dVar18) {
      local_2a8 = dVar18;
      dStack_2a0 = 0.0;
    }
    if (dVar21 <= dVar23) {
      dVar23 = dVar21;
    }
    if (local_410 < dVar21) {
      local_410 = dVar21;
    }
    lVar16 = lVar16 + 0x18;
    uVar33 = SUB84(dVar29,0);
    uVar35 = (uint)((ulonglong)dVar29 >> 0x20);
    uVar38 = auVar39._0_4_;
    uVar40 = auVar39._4_4_;
    uVar24 = auVar39._8_4_;
    uVar25 = auVar39._12_4_;
    lVar14 = lVar14 + -1;
    dVar17 = local_2c0;
    dVar18 = dVar29;
  } while (lVar14 != 0);
  iVar15 = 1;
  dVar18 = local_470 - auVar39._0_8_;
  local_258 = dVar23;
  local_298 = dVar29;
  dVar29 = local_308 - dVar29;
  local_270 = dVar18;
  local_2c8 = auVar39._0_8_;
  dVar17 = local_2f8 - local_478;
  local_268 = dVar29;
  local_260 = dVar17;
  if (dVar17 <= 0.0) {
    dVar17 = 0.0;
  }
  if (dVar29 <= 0.0) {
    dVar29 = 0.0;
  }
  if (dVar18 <= 0.0) {
    dVar18 = 0.0;
  }
  dVar23 = local_410 - dVar23;
  local_250 = dVar23;
  dVar21 = local_2e8 - dVar34;
  dVar22 = local_2a8 - local_2c0;
  local_2d0 = dVar21;
  if (dVar21 <= 0.0) {
    dVar21 = 0.0;
  }
  local_338._0_8_ = dVar17 * dVar29 * dVar18;
  local_2d8 = dVar22;
  if (dVar22 <= 0.0) {
    dVar22 = 0.0;
  }
  uVar36 = SUB84(__real_7fefffffffffffff,0);
  uVar37 = (uint)((ulonglong)__real_7fefffffffffffff >> 0x20);
  if (dVar23 <= 0.0) {
    dVar23 = 0.0;
  }
  local_338._16_8_ = __real_7fefffffffffffff;
  local_368._s_0.X = ___xmm_7fefffffffffffff7fefffffffffffff;
  local_368._s_0.Y = _UNK_150a9e648;
  local_368._s_0.Z = ___xmm_ffefffffffffffff7fefffffffffffff;
  local_368._24_8_ = _UNK_150a9e6d8;
  local_338._8_8_ = dVar22 * dVar21 * dVar23;
  local_348 = ___xmm_ffefffffffffffffffefffffffffffff;
  dStack_340 = _UNK_1508ffb58;
  local_418 = dVar34;
  if (param_2) {
    uVar24 = SUB84(___xmm_ffefffffffffffffffefffffffffffff,0);
    uVar25 = (undefined4)((ulonglong)___xmm_ffefffffffffffffffefffffffffffff >> 0x20);
    uVar26 = SUB84(_UNK_150a9e6d8,0);
    uVar27 = (undefined4)((ulonglong)_UNK_150a9e6d8 >> 0x20);
    local_4b0 = ___xmm_ffefffffffffffff7fefffffffffffff;
    local_4a8 = _UNK_150a9e648;
    local_4a0 = ___xmm_7fefffffffffffff7fefffffffffffff;
    dVar23 = _UNK_1508ffb58;
  }
  else {
    TQuaternion<double>::GetAxes
              (&(this->Frame).Rotation,(TVector<double> *)&local_408._s_0,
               (TVector<double> *)&local_3f0._s_0,(TVector<double> *)&local_3d8._s_0);
    TQuaternion<double>::GetAxes
              (&(param_1->Frame).Rotation,(TVector<double> *)local_3b8,
               (TVector<double> *)&local_3a0._s_0,(TVector<double> *)&local_388._s_0);
    dVar23 = (param_1->Extents).field0_0x0._s_0.X;
    dVar17 = (this->Extents).field0_0x0._s_0.Y;
    dVar21 = local_4a0 * local_4a0 + local_4a8 * local_4a8 + dVar5 * dVar5;
    dVar34 = (this->Extents).field0_0x0._s_0.X;
    dVar18 = (this->Extents).field0_0x0._s_0.Z;
    dVar18 = dVar17 * dVar17 + dVar34 * dVar34 + dVar18 * dVar18;
    dVar17 = (param_1->Extents).field0_0x0._s_0.Y;
    dVar34 = (param_1->Extents).field0_0x0._s_0.Z;
    dVar23 = dVar17 * dVar17 + dVar23 * dVar23 + dVar34 * dVar34;
    if (dVar18 <= dVar23) {
      dVar18 = dVar23;
    }
    if (dVar21 <= dVar18) {
      dVar23 = local_408._s_0.Y * local_3b0[0] + local_408._s_0.X * (double)local_3b8 +
               local_408._s_0.Z * local_3b0[1];
      uVar41 = SUB84(dVar23,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff;
      uVar43 = (uint)((ulonglong)dVar23 >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
      dVar23 = local_3f0._s_0.Y * local_3b0[0] + local_3f0._s_0.X * (double)local_3b8 +
               local_3f0._s_0.Z * local_3b0[1];
      uVar38 = SUB84(dVar23,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff;
      uVar40 = (uint)((ulonglong)dVar23 >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
      dVar23 = local_3a0._s_0.Y * local_408._s_0.Y + local_3a0._s_0.X * local_408._s_0.X +
               local_3a0._s_0.Z * local_408._s_0.Z;
      dVar17 = local_3a0._s_0.Y * local_3f0._s_0.Y + local_3a0._s_0.X * local_3f0._s_0.X +
               local_3a0._s_0.Z * local_3f0._s_0.Z;
      uVar32 = SUB84(dVar23,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff;
      uVar35 = (uint)((ulonglong)dVar23 >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
      uVar31 = SUB84(dVar17,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff;
      uVar33 = (uint)((ulonglong)dVar17 >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
      dVar23 = (double)CONCAT44(uVar33,uVar31);
      uVar36 = uVar41;
      uVar37 = uVar43;
      if ((double)CONCAT44(uVar43,uVar41) <= (double)CONCAT44(uVar35,uVar32) &&
          (double)CONCAT44(uVar35,uVar32) != (double)CONCAT44(uVar43,uVar41)) {
        uVar36 = uVar32;
        uVar37 = uVar35;
      }
      uVar13 = (ulonglong)
               ((double)CONCAT44(uVar43,uVar41) <= (double)CONCAT44(uVar35,uVar32) &&
               (double)CONCAT44(uVar35,uVar32) != (double)CONCAT44(uVar43,uVar41));
      uVar32 = uVar38;
      uVar35 = uVar40;
      if ((double)CONCAT44(uVar40,uVar38) <= dVar23 && dVar23 != (double)CONCAT44(uVar40,uVar38)) {
        uVar32 = uVar31;
        uVar35 = uVar33;
      }
      uVar31 = (uint)((double)CONCAT44(uVar40,uVar38) < dVar23);
      dVar17 = local_388._s_0.Y * local_408._s_0.Y + local_388._s_0.X * local_408._s_0.X +
               local_388._s_0.Z * local_408._s_0.Z;
      dVar23 = local_388._s_0.Y * local_3f0._s_0.Y + local_388._s_0.X * local_3f0._s_0.X +
               local_388._s_0.Z * local_3f0._s_0.Z;
      dVar17 = (double)CONCAT44((uint)((ulonglong)dVar17 >> 0x20) &
                                __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                SUB84(dVar17,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff);
      uVar33 = SUB84(dVar23,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff;
      uVar38 = (uint)((ulonglong)dVar23 >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
      if ((double)CONCAT44(uVar37,uVar36) <= dVar17 && dVar17 != (double)CONCAT44(uVar37,uVar36)) {
        uVar13 = 2;
      }
      if ((double)CONCAT44(uVar35,uVar32) <= (double)CONCAT44(uVar38,uVar33) &&
          (double)CONCAT44(uVar38,uVar33) != (double)CONCAT44(uVar35,uVar32)) {
        uVar31 = 2;
      }
      if ((uint)uVar13 == uVar31) {
        uVar31 = (uVar31 + 1) % 3;
      }
      iVar10 = 1;
      if (local_3b0[uVar13 * 3] * local_408._s_0.Y +
          *(double *)(local_3b8 + uVar13 * 0x18) * local_408._s_0.X +
          local_3b0[uVar13 * 3 + 1] * local_408._s_0.Z < 0.0) {
        iVar10 = -1;
      }
      dVar23 = (double)iVar10;
      lVar14 = (longlong)(int)uVar31;
      local_468 = dVar23 * *(double *)(local_3b8 + uVar13 * 0x18) + local_408._s_0.X;
      iVar10 = 1;
      if (local_3b0[lVar14 * 3] * local_3f0._s_0.Y +
          *(double *)(local_3b8 + lVar14 * 0x18) * local_3f0._s_0.X +
          local_3b0[lVar14 * 3 + 1] * local_3f0._s_0.Z < 0.0) {
        iVar10 = -1;
      }
      local_4d0._s_0.Z = dVar23 * local_3b0[uVar13 * 3 + 1] + local_408._s_0.Z;
      dStack_460 = dVar23 * local_3b0[uVar13 * 3] + local_408._s_0.Y;
      dVar17 = (double)iVar10;
      dVar23 = dStack_460 * dStack_460 + local_468 * local_468 + local_4d0._s_0.Z * local_4d0._s_0.Z
      ;
      if (dVar23 != __real_3ff0000000000000) {
        if (__real_3e45798ee0000000 <= dVar23) {
          local_498 = __real_3ff0000000000000 / SQRT(dVar23);
          dStack_460 = dStack_460 * local_498;
          local_4d0._s_0.Z = local_498 * local_4d0._s_0.Z;
          local_468 = local_498 * local_468;
        }
        else {
          local_4d0._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
          local_468 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
          dStack_460 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
        }
      }
      dVar23 = local_3b0[lVar14 * 3] * dVar17 + local_3f0._s_0.Y;
      local_458 = local_4d0._s_0.Z;
      dVar34 = *(double *)(local_3b8 + lVar14 * 0x18) * dVar17 + local_3f0._s_0.X;
      dVar17 = dVar17 * local_3b0[lVar14 * 3 + 1] + local_3f0._s_0.Z;
      dVar18 = dVar17 * dStack_460 - dVar23 * local_4d0._s_0.Z;
      dVar17 = dVar34 * local_4d0._s_0.Z - dVar17 * local_468;
      dVar34 = dVar23 * local_468 - dVar34 * dStack_460;
      dVar23 = dVar17 * dVar17 + dVar18 * dVar18 + dVar34 * dVar34;
      local_428 = dVar34;
      local_438 = dVar18;
      dStack_430 = dVar17;
      if ((dVar23 != __real_3ff0000000000000) &&
         (local_428 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z,
         local_438 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X,
         dStack_430 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y,
         __real_3e45798ee0000000 <= dVar23)) {
        local_498 = __real_3ff0000000000000 / SQRT(dVar23);
        local_428 = dVar34 * local_498;
        local_438 = dVar18 * local_498;
        dStack_430 = dVar17 * local_498;
      }
      dVar18 = dStack_430 * local_4d0._s_0.Z - local_428 * dStack_460;
      dVar34 = local_438 * dStack_460 - dStack_430 * local_468;
      dVar17 = local_428 * local_468 - local_438 * local_4d0._s_0.Z;
      dVar23 = dVar17 * dVar17 + dVar18 * dVar18 + dVar34 * dVar34;
      uVar3 = dVar18;
      uVar2 = dVar34;
      uVar1 = dVar17;
      local_4d0._s_0.Z = dVar34;
      if ((dVar23 != __real_3ff0000000000000) &&
         (uVar3 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X,
         uVar2 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z,
         uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y,
         local_4d0._s_0.Z = local_428, __real_3e45798ee0000000 <= dVar23)) {
        local_498 = __real_3ff0000000000000 / SQRT(dVar23);
        uVar3 = local_498 * dVar18;
        uVar2 = local_498 * dVar34;
        uVar1 = local_498 * dVar17;
        local_4d0._s_0.Z = local_498 * dVar34;
      }
      local_450._8_4_ = (int)uVar1;
      local_450._0_8_ = uVar3;
      local_450._12_4_ = (int)((ulonglong)uVar1 >> 0x20);
    }
    else {
      local_458 = local_490._s_0.Z;
      local_468 = local_4a8;
      dStack_460 = local_4a0;
      if ((dVar21 != __real_3ff0000000000000) &&
         (local_458 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z,
         local_468 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X,
         dStack_460 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y, 0.0 <= dVar21)) {
        local_498 = __real_3ff0000000000000 / SQRT(dVar21);
        local_458 = dVar5 * local_498;
        local_468 = local_4a8 * local_498;
        dStack_460 = local_4a0 * local_498;
      }
      dVar23 = local_408._s_0.Y * dStack_460 + local_408._s_0.X * local_468 +
               local_408._s_0.Z * local_458;
      uVar31 = SUB84(dVar23,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff;
      uVar33 = (uint)((ulonglong)dVar23 >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
      dVar23 = local_3b0[0] * dStack_460 + (double)local_3b8 * local_468 + local_3b0[1] * local_458;
      uVar32 = SUB84(dVar23,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff;
      uVar35 = (uint)((ulonglong)dVar23 >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
      dVar23 = (double)CONCAT44(uVar35,uVar32);
      if (dVar23 <= (double)CONCAT44(uVar33,uVar31)) {
        if (dVar23 < dVar28) {
          local_490._s_0.Z = local_3b0[1];
          uVar36 = uVar32;
          uVar37 = uVar35;
          local_490._0_8_ = local_3b8;
          local_490._s_0.Y = local_3b0[0];
        }
      }
      else if ((double)CONCAT44(uVar33,uVar31) < dVar28) {
        local_490._s_0.Z = local_408._s_0.Z;
        uVar36 = uVar31;
        uVar37 = uVar33;
        local_490._s_0.X = local_408._s_0.X;
        local_490._s_0.Y = local_408._s_0.Y;
      }
      dVar23 = local_3f0._s_0.Y * dStack_460 + local_3f0._s_0.X * local_468 +
               local_3f0._s_0.Z * local_458;
      uVar31 = SUB84(dVar23,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff;
      uVar33 = (uint)((ulonglong)dVar23 >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
      dVar23 = local_3a0._s_0.Y * dStack_460 + local_3a0._s_0.X * local_468 +
               local_3a0._s_0.Z * local_458;
      uVar32 = SUB84(dVar23,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff;
      uVar35 = (uint)((ulonglong)dVar23 >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
      dVar23 = (double)CONCAT44(uVar35,uVar32);
      if (dVar23 <= (double)CONCAT44(uVar33,uVar31)) {
        if (dVar23 < (double)CONCAT44(uVar37,uVar36)) {
          local_490._s_0.Z = local_3a0._s_0.Z;
          uVar36 = uVar32;
          uVar37 = uVar35;
          local_490._s_0.X = local_3a0._s_0.X;
          local_490._s_0.Y = local_3a0._s_0.Y;
        }
      }
      else if ((double)CONCAT44(uVar33,uVar31) < (double)CONCAT44(uVar37,uVar36)) {
        local_490._s_0.Z = local_3f0._s_0.Z;
        uVar36 = uVar31;
        uVar37 = uVar33;
        local_490._s_0.X = local_3f0._s_0.X;
        local_490._s_0.Y = local_3f0._s_0.Y;
      }
      dVar23 = local_3d8._s_0.Y * dStack_460 + local_3d8._s_0.X * local_468 +
               local_3d8._s_0.Z * local_458;
      uVar31 = SUB84(dVar23,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff;
      uVar33 = (uint)((ulonglong)dVar23 >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
      dVar23 = local_388._s_0.Y * dStack_460 + local_388._s_0.X * local_468 +
               local_388._s_0.Z * local_458;
      dVar23 = (double)CONCAT44((uint)((ulonglong)dVar23 >> 0x20) &
                                __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                SUB84(dVar23,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff);
      if (dVar23 <= (double)CONCAT44(uVar33,uVar31)) {
        if (dVar23 < (double)CONCAT44(uVar37,uVar36)) {
          local_490._s_0.Z = local_388._s_0.Z;
          local_490._s_0.X = local_388._s_0.X;
          local_490._s_0.Y = local_388._s_0.Y;
        }
      }
      else if ((double)CONCAT44(uVar33,uVar31) < (double)CONCAT44(uVar37,uVar36)) {
        local_490._s_0.Z = local_3d8._s_0.Z;
        local_490._s_0.X = local_3d8._s_0.X;
        local_490._s_0.Y = local_3d8._s_0.Y;
      }
      dVar34 = local_490._s_0.Z * dStack_460 - local_490._s_0.Y * local_458;
      dVar17 = local_490._s_0.Y * local_468 - local_490._s_0.X * dStack_460;
      dVar18 = local_490._s_0.X * local_458 - local_490._s_0.Z * local_468;
      dVar23 = dVar18 * dVar18 + dVar34 * dVar34 + dVar17 * dVar17;
      local_4d0._s_0.Z = dVar17;
      local_438 = dVar34;
      dStack_430 = dVar18;
      if ((dVar23 != __real_3ff0000000000000) &&
         (local_4d0._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z,
         local_438 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X,
         dStack_430 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y, 0.0 <= dVar23)) {
        local_498 = __real_3ff0000000000000 / SQRT(dVar23);
        local_4d0._s_0.Z = dVar17 * local_498;
        local_438 = dVar34 * local_498;
        dStack_430 = dVar18 * local_498;
      }
      uVar3 = dStack_430 * local_458 - local_4d0._s_0.Z * dStack_460;
      uVar2 = local_438 * dStack_460 - dStack_430 * local_468;
      uVar1 = local_4d0._s_0.Z * local_468 - local_438 * local_458;
      local_450._8_8_ = uVar1;
      local_450._0_8_ = uVar3;
      local_428 = local_4d0._s_0.Z;
    }
    lVar16 = 0;
    lVar14 = 8;
    local_4b0 = local_368._s_0.Z;
    local_4a8 = local_368._s_0.Y;
    local_4a0 = local_368._s_0.X;
    uVar8 = local_368._24_8_;
    dVar23 = dStack_340;
    dVar17 = local_348;
    local_440 = (double)uVar2;
    do {
      pTVar12 = operator*<double>((TVector<double> *)&local_4d0._s_0,&(this->Frame).Rotation,
                                  (TVector<double> *)(local_248 + lVar16));
      dVar18 = (this->Frame).Origin.field0_0x0._s_0.Y + (pTVar12->field0_0x0)._s_0.Y;
      dVar28 = (this->Frame).Origin.field0_0x0._s_0.X + (pTVar12->field0_0x0)._s_0.X;
      dVar34 = (this->Frame).Origin.field0_0x0._s_0.Z + (pTVar12->field0_0x0)._s_0.Z;
      dVar22 = dVar18 * dStack_460 + dVar28 * local_468 + dVar34 * local_458;
      dVar29 = dVar18 * dStack_430 + dVar28 * local_438 + dVar34 * local_428;
      dVar21 = dVar28 * (double)uVar3 + dVar18 * (double)uVar1 + dVar34 * (double)uVar2;
      pTVar12 = operator*<double>((TVector<double> *)&local_4d0._s_0,&(param_1->Frame).Rotation,
                                  (TVector<double> *)((longlong)&local_188 + lVar16));
      dVar28 = (param_1->Frame).Origin.field0_0x0._s_0.Y + (pTVar12->field0_0x0)._s_0.Y;
      dVar30 = (param_1->Frame).Origin.field0_0x0._s_0.X + (pTVar12->field0_0x0)._s_0.X;
      dVar34 = (param_1->Frame).Origin.field0_0x0._s_0.Z + (pTVar12->field0_0x0)._s_0.Z;
      dVar18 = dVar28 * dStack_460 + dVar30 * local_468 + dVar34 * local_458;
      dVar5 = dVar28 * dStack_430 + dVar30 * local_438 + dVar34 * local_428;
      dVar28 = dVar30 * (double)uVar3 + dVar28 * (double)uVar1 + dVar34 * (double)uVar2;
      dVar34 = dVar22;
      if (local_4a0 <= dVar22) {
        dVar34 = local_4a0;
      }
      if (dVar22 <= (double)uVar8) {
        dVar22 = (double)uVar8;
      }
      local_4a0 = dVar34;
      if (dVar18 <= dVar34) {
        local_4a0 = dVar18;
      }
      uVar8 = dVar22;
      if (dVar22 <= dVar18) {
        uVar8 = dVar18;
      }
      dVar34 = dVar21;
      if (local_4a8 <= dVar21) {
        dVar34 = local_4a8;
      }
      if (dVar21 <= dVar17) {
        dVar21 = dVar17;
      }
      local_4a8 = dVar34;
      if (dVar28 <= dVar34) {
        local_4a8 = dVar28;
      }
      dVar17 = dVar21;
      if (dVar21 <= dVar28) {
        dVar17 = dVar28;
      }
      if (dVar29 <= local_4b0) {
        local_4b0 = dVar29;
      }
      if (dVar5 <= local_4b0) {
        local_4b0 = dVar5;
      }
      if (dVar23 <= dVar29) {
        dVar23 = dVar29;
      }
      lVar16 = lVar16 + 0x18;
      if (dVar23 <= dVar5) {
        dVar23 = dVar5;
      }
      lVar14 = lVar14 + -1;
    } while (lVar14 != 0);
    dVar34 = (double)uVar8 - local_4a0;
    local_2b8 = dVar17;
    uVar24 = SUB84(dVar17,0);
    uVar25 = (undefined4)((ulonglong)dVar17 >> 0x20);
    if (dVar34 <= 0.0) {
      dVar34 = 0.0;
    }
    dVar18 = dVar17 - local_4a8;
    if (dVar17 - local_4a8 <= 0.0) {
      dVar18 = 0.0;
    }
    dVar17 = dVar23 - local_4b0;
    if (dVar23 - local_4b0 <= 0.0) {
      dVar17 = 0.0;
    }
    uVar26 = (undefined4)uVar8;
    uVar27 = (undefined4)((ulonglong)uVar8 >> 0x20);
    local_338._16_8_ = dVar34 * dVar18 * dVar17;
    __return_storage_ptr__ = local_290;
    local_498 = (double)uVar8;
  }
  dVar18 = local_438;
  dVar34 = local_468;
  lVar14 = 1;
  dVar17 = (double)local_338._0_8_;
  iVar10 = 0;
  do {
    iVar11 = iVar15;
    dVar28 = *(double *)(local_338 + lVar14 * 8);
    if (dVar17 <= *(double *)(local_338 + lVar14 * 8)) {
      iVar11 = iVar10;
      dVar28 = dVar17;
    }
    dVar17 = dVar28;
    iVar15 = iVar15 + 1;
    lVar14 = lVar14 + 1;
    iVar10 = iVar11;
  } while (lVar14 < (longlong)(ulonglong)((param_2 ^ 1) + 2));
  (__return_storage_ptr__->Frame).Rotation.field0_0x0._s_0.Z = 0.0;
  (__return_storage_ptr__->Frame).Rotation.field0_0x0._s_0.W = 1.0;
  (__return_storage_ptr__->Frame).Rotation.field0_0x0._s_0.Y = 0.0;
  (__return_storage_ptr__->Frame).Rotation.field0_0x0._s_0.X = 0.0;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (__return_storage_ptr__->Frame).Origin.field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (__return_storage_ptr__->Frame).Origin.field0_0x0._s_0.Y = (double)uVar1;
  (__return_storage_ptr__->Frame).Origin.field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  (__return_storage_ptr__->Frame).Rotation.field0_0x0._s_0.Y = 0.0;
  (__return_storage_ptr__->Frame).Rotation.field0_0x0._s_0.Z = 0.0;
  (__return_storage_ptr__->Frame).Rotation.field0_0x0._s_0.W = 1.0;
  (__return_storage_ptr__->Extents).field0_0x0._s_0.X = 1.0;
  (__return_storage_ptr__->Extents).field0_0x0._s_0.Y = 1.0;
  (__return_storage_ptr__->Extents).field0_0x0._s_0.Z = 1.0;
  dVar17 = __real_3fe0000000000000;
  if (iVar11 == 2) {
    uVar1 = local_450._0_8_;
    local_3f0._s_0.X = dStack_460;
    local_3f0._s_0.Y = (double)local_450._8_8_;
    local_3f0._s_0.Z = dStack_430;
    local_3d8._s_0.X = local_458;
    local_3d8._s_0.Y = local_440;
    local_3d8._s_0.Z = local_428;
    local_408._s_0.X = local_468;
    local_408._s_0.Y = (double)local_450._0_8_;
    local_408._s_0.Z = local_438;
    TQuaternion<double>::SetFromRotationMatrix
              (&(__return_storage_ptr__->Frame).Rotation,(TMatrix3<double> *)&local_408._s_0);
    uVar42 = SUB84(__real_3fe0000000000000,0);
    uVar44 = (undefined4)((ulonglong)__real_3fe0000000000000 >> 0x20);
    dVar28 = (double)CONCAT44(uVar27,uVar26) - local_4a0;
    dVar17 = ((double)CONCAT44(uVar25,uVar24) + local_4a8) * __real_3fe0000000000000;
    dVar5 = dVar23 - local_4b0;
    dVar21 = ((double)CONCAT44(uVar27,uVar26) + local_4a0) * __real_3fe0000000000000;
    dVar23 = (dVar23 + local_4b0) * __real_3fe0000000000000;
    (__return_storage_ptr__->Frame).Origin.field0_0x0._s_0.X =
         dVar21 * dVar34 + dVar17 * (double)uVar1 + dVar23 * dVar18;
    (__return_storage_ptr__->Frame).Origin.field0_0x0._s_0.Y =
         dVar21 * dStack_460 + dVar17 * (double)local_450._8_8_ + dVar23 * dStack_430;
    (__return_storage_ptr__->Frame).Origin.field0_0x0._s_0.Z =
         dVar21 * local_458 + dVar17 * local_440 + dVar23 * local_428;
    local_4a8 = (double)CONCAT44(uVar25,uVar24) - local_4a8;
  }
  else {
    if (iVar11 == 0) {
      dVar23 = (this->Frame).Rotation.field0_0x0._s_0.Y;
      uVar42 = SUB84(__real_3fe0000000000000,0);
      uVar44 = (undefined4)((ulonglong)__real_3fe0000000000000 >> 0x20);
      (__return_storage_ptr__->Frame).Rotation.field0_0x0._s_0.X =
           (this->Frame).Rotation.field0_0x0._s_0.X;
      (__return_storage_ptr__->Frame).Rotation.field0_0x0._s_0.Y = dVar23;
      dVar23 = (this->Frame).Rotation.field0_0x0._s_0.W;
      local_4d0._s_0.X = (local_2f8 + local_478) * dVar17;
      local_4d0._s_0.Y = (local_308 + local_298) * dVar17;
      local_4d0._s_0.Z = (local_2c8 + local_470) * dVar17;
      (__return_storage_ptr__->Frame).Rotation.field0_0x0._s_0.Z =
           (this->Frame).Rotation.field0_0x0._s_0.Z;
      (__return_storage_ptr__->Frame).Rotation.field0_0x0._s_0.W = dVar23;
      pTVar12 = operator*<double>((TVector<double> *)&local_288._s_0,&(this->Frame).Rotation,
                                  (TVector<double> *)&local_4d0._s_0);
      uVar24 = *(undefined4 *)((longlong)&(this->Frame).Origin.field0_0x0 + 8);
      uVar25 = *(undefined4 *)((longlong)&(this->Frame).Origin.field0_0x0 + 0xc);
      uVar26 = *(undefined4 *)((longlong)&(this->Frame).Origin.field0_0x0 + 0x10);
      uVar27 = *(undefined4 *)((longlong)&(this->Frame).Origin.field0_0x0 + 0x14);
      uVar51 = SUB84(local_270,0);
      uVar52 = (undefined4)((ulonglong)local_270 >> 0x20);
      dVar34 = (pTVar12->field0_0x0)._s_0.X + (this->Frame).Origin.field0_0x0._s_0.X;
      dVar17 = (pTVar12->field0_0x0)._s_0.Y;
      dVar23 = (pTVar12->field0_0x0)._s_0.Z;
      uVar47 = SUB84(local_268,0);
      uVar48 = (undefined4)((ulonglong)local_268 >> 0x20);
      uVar49 = SUB84(local_260,0);
      uVar50 = (undefined4)((ulonglong)local_260 >> 0x20);
    }
    else {
      dVar23 = (param_1->Frame).Rotation.field0_0x0._s_0.Y;
      local_418 = local_418 + local_2e8;
      (__return_storage_ptr__->Frame).Rotation.field0_0x0._s_0.X =
           (param_1->Frame).Rotation.field0_0x0._s_0.X;
      (__return_storage_ptr__->Frame).Rotation.field0_0x0._s_0.Y = dVar23;
      dVar17 = __real_3fe0000000000000;
      dVar23 = (param_1->Frame).Rotation.field0_0x0._s_0.W;
      uVar42 = SUB84(__real_3fe0000000000000,0);
      uVar44 = (undefined4)((ulonglong)__real_3fe0000000000000 >> 0x20);
      local_4d0._s_0.X = local_418 * __real_3fe0000000000000;
      local_4d0._s_0.Y = (local_2c0 + local_2a8) * __real_3fe0000000000000;
      (__return_storage_ptr__->Frame).Rotation.field0_0x0._s_0.Z =
           (param_1->Frame).Rotation.field0_0x0._s_0.Z;
      (__return_storage_ptr__->Frame).Rotation.field0_0x0._s_0.W = dVar23;
      local_4d0._s_0.Z = (local_258 + local_410) * dVar17;
      pTVar12 = operator*<double>((TVector<double> *)&local_288._s_0,&(param_1->Frame).Rotation,
                                  (TVector<double> *)&local_4d0._s_0);
      dVar17 = (param_1->Frame).Origin.field0_0x0._s_0.Y;
      dVar23 = (param_1->Frame).Origin.field0_0x0._s_0.Z;
      uVar24 = *(undefined4 *)((longlong)&pTVar12->field0_0x0 + 8);
      uVar25 = *(undefined4 *)((longlong)&pTVar12->field0_0x0 + 0xc);
      uVar26 = *(undefined4 *)((longlong)&pTVar12->field0_0x0 + 0x10);
      uVar27 = *(undefined4 *)((longlong)&pTVar12->field0_0x0 + 0x14);
      dVar34 = (param_1->Frame).Origin.field0_0x0._s_0.X + (pTVar12->field0_0x0)._s_0.X;
      uVar51 = SUB84(local_250,0);
      uVar52 = (undefined4)((ulonglong)local_250 >> 0x20);
      uVar47 = SUB84(local_2d8,0);
      uVar48 = (undefined4)((ulonglong)local_2d8 >> 0x20);
      uVar49 = SUB84(local_2d0,0);
      uVar50 = (undefined4)((ulonglong)local_2d0 >> 0x20);
    }
    local_4a8 = (double)CONCAT44(uVar48,uVar47);
    dVar5 = (double)CONCAT44(uVar52,uVar51);
    dVar28 = (double)CONCAT44(uVar50,uVar49);
    dVar23 = (double)CONCAT44(uVar27,uVar26) + dVar23;
    (__return_storage_ptr__->Frame).Origin.field0_0x0._s_0.X = dVar34;
    auVar4._8_4_ = SUB84(dVar23,0);
    auVar4._0_8_ = (double)CONCAT44(uVar25,uVar24) + dVar17;
    auVar4._12_4_ = (int)((ulonglong)dVar23 >> 0x20);
    *(undefined1 (*) [16])((longlong)&(__return_storage_ptr__->Frame).Origin.field0_0x0 + 8) =
         auVar4;
  }
  (__return_storage_ptr__->Extents).field0_0x0._s_0.X = dVar28 * (double)CONCAT44(uVar44,uVar42);
  (__return_storage_ptr__->Extents).field0_0x0._s_0.Y = local_4a8 * (double)CONCAT44(uVar44,uVar42);
  (__return_storage_ptr__->Extents).field0_0x0._s_0.Z = dVar5 * (double)CONCAT44(uVar44,uVar42);
  dVar34 = _UNK_150aa88b8;
  dVar17 = ___xmm_3e45798ee2308c3a3e45798ee2308c3a;
  (__return_storage_ptr__->Extents).field0_0x0._s_0.X =
       (__return_storage_ptr__->Extents).field0_0x0._s_0.X + __real_3e45798ee2308c3a;
  dVar23 = (__return_storage_ptr__->Extents).field0_0x0._s_0.Z;
  (__return_storage_ptr__->Extents).field0_0x0._s_0.Y =
       dVar17 + (__return_storage_ptr__->Extents).field0_0x0._s_0.Y;
  (__return_storage_ptr__->Extents).field0_0x0._s_0.Z = dVar34 + dVar23;
  return __return_storage_ptr__;
}

// ReparameterizedCloserToWorldFrame @ 143617a00

TOrientedBox3<float> * __thiscall
UE::Geometry::TOrientedBox3<float>::ReparameterizedCloserToWorldFrame
          (TOrientedBox3<float> *this,TOrientedBox3<float> *__return_storage_ptr__)

{
  float fVar1;
  float fVar2;
  code *pcVar3;
  float fVar4;
  float fVar5;
  undefined8 uVar6;
  bool bVar7;
  int iVar8;
  uint uVar9;
  TOrientedBox3<float> *pTVar10;
  uint uVar11;
  ulonglong uVar12;
  uint uVar13;
  ulonglong uVar14;
  uint uVar15;
  int iVar16;
  float fVar17;
  double dVar18;
  double dVar19;
  float fVar20;
  double dVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float local_148 [10];
  TQuaternion<float>_u_0 local_120;
  double local_110 [3];
  TVector<float>_u_0 local_f8;
  float local_ec;
  float local_e8;
  float local_e4;
  float local_e0;
  float local_dc;
  float local_d8;
  float fStack_cc;
  
  fVar17 = (this->Frame).Rotation.field0_0x0._s_0.X;
  fVar24 = (this->Frame).Rotation.field0_0x0._s_0.Z;
  fVar25 = (this->Frame).Rotation.field0_0x0._s_0.W;
  fVar23 = (this->Frame).Rotation.field0_0x0._s_0.Y;
  fVar20 = fVar23 + fVar23;
  fVar26 = fVar24 + fVar24;
  local_148[2] = fVar17 * fVar26 - fVar25 * fVar20;
  local_148[6] = fVar17 * fVar26 + fVar25 * fVar20;
  local_148[0] = __real_3f800000 - (fVar26 * fVar24 + fVar20 * fVar23);
  fVar22 = (fVar17 + fVar17) * fVar17;
  local_148[7] = (fVar17 + fVar17) * fVar25;
  local_148[1] = fVar25 * fVar26 + fVar17 * fVar20;
  local_148[3] = fVar17 * fVar20 - fVar25 * fVar26;
  local_148[5] = fVar26 * fVar23 + local_148[7];
  local_148[8] = __real_3f800000 - (fVar22 + fVar20 * fVar23);
  local_148[4] = __real_3f800000 - (fVar22 + fVar26 * fVar24);
  local_148[7] = fVar26 * fVar23 - local_148[7];
  fVar25 = (float)((uint)local_148[2] & __xmm_7fffffff7fffffff7fffffff7fffffff);
  fVar17 = (float)((uint)local_148[5] & __xmm_7fffffff7fffffff7fffffff7fffffff);
  fVar24 = (float)((uint)local_148[8] & __xmm_7fffffff7fffffff7fffffff7fffffff);
  if (fVar25 <= fVar17) {
    uVar14 = (ulonglong)((fVar17 <= fVar24) + 1);
  }
  else {
    uVar14 = 2;
    if (fVar24 < fVar25) {
      uVar14 = 0;
    }
  }
  iVar16 = -1;
  iVar8 = -1;
  if (0.0 < local_148[uVar14 * 3 + 2]) {
    iVar8 = 1;
  }
  local_110[1] = (double)local_148[4];
  local_110[0] = (double)local_148[1];
  fVar17 = (float)iVar8;
  local_110[2] = (double)local_148[7];
  fVar24 = fVar17 * local_148[uVar14 * 3];
  local_110[uVar14] = 0.0;
  dVar19 = (double)CONCAT44((uint)((ulonglong)local_110[1] >> 0x20) &
                            __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                            SUB84(local_110[1],0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff);
  dVar21 = (double)CONCAT44((uint)((ulonglong)local_110[0] >> 0x20) &
                            __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                            SUB84(local_110[0],0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff);
  fVar25 = fVar17 * local_148[uVar14 * 3 + 1];
  dVar18 = (double)CONCAT44((uint)((ulonglong)local_110[2] >> 0x20) &
                            __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                            SUB84(local_110[2],0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff);
  fVar17 = fVar17 * local_148[uVar14 * 3 + 2];
  if (dVar21 <= dVar19) {
    uVar12 = (ulonglong)((dVar19 <= dVar18) + 1);
  }
  else {
    uVar12 = 2;
    if (dVar18 < dVar21) {
      uVar12 = 0;
    }
  }
  if (0.0 < local_110[uVar12]) {
    iVar16 = 1;
  }
  fVar22 = (float)iVar16;
  fVar23 = fVar22 * local_148[uVar12 * 3];
  fVar20 = fVar22 * local_148[uVar12 * 3 + 1];
  fVar22 = fVar22 * local_148[uVar12 * 3 + 2];
  uVar11 = (uint)uVar12;
  uVar13 = (uint)uVar14;
  uVar9 = (3 - uVar11) - uVar13;
  uVar15 = 2;
  if ((int)uVar9 < 2) {
    uVar15 = uVar9;
  }
  uVar9 = 0;
  if (0 < (int)uVar15) {
    uVar9 = uVar15;
  }
  if (((uVar9 == uVar11) || (uVar11 == uVar13)) || (uVar9 == uVar13)) {
    bVar7 = Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_7749309084427353745>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryCore\\Private\\OrientedBoxTypes.cpp"
                       ,0x16f,"BestX != BestY && BestY != BestZ && BestX != BestZ");
    if (bVar7) {
      pcVar3 = (code *)swi(3);
      pTVar10 = (TOrientedBox3<float> *)(*pcVar3)();
      return pTVar10;
    }
    uVar6 = *(undefined8 *)((longlong)&(this->Frame).Origin.field0_0x0 + 8);
    *(undefined8 *)&(__return_storage_ptr__->Frame).Origin.field0_0x0 =
         *(undefined8 *)&(this->Frame).Origin.field0_0x0;
    *(undefined8 *)((longlong)&(__return_storage_ptr__->Frame).Origin.field0_0x0 + 8) = uVar6;
    uVar6 = *(undefined8 *)((longlong)&(this->Frame).Rotation.field0_0x0 + 0xc);
    *(undefined8 *)((longlong)&(__return_storage_ptr__->Frame).Rotation.field0_0x0 + 4) =
         *(undefined8 *)((longlong)&(this->Frame).Rotation.field0_0x0 + 4);
    *(undefined8 *)((longlong)&(__return_storage_ptr__->Frame).Rotation.field0_0x0 + 0xc) = uVar6;
    *(undefined8 *)((longlong)&(__return_storage_ptr__->Extents).field0_0x0 + 4) =
         *(undefined8 *)((longlong)&(this->Extents).field0_0x0 + 4);
  }
  else {
    fVar26 = (this->Extents).field0_0x0.XYZ[uVar14];
    fVar1 = (this->Extents).field0_0x0.XYZ[uVar12];
    if ((2 < uVar9) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValidIndex(Index)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\Vector.h"
                           ,0x7ab,L""), bVar7)) {
      pcVar3 = (code *)swi(3);
      pTVar10 = (TOrientedBox3<float> *)(*pcVar3)();
      return pTVar10;
    }
    fVar4 = (this->Frame).Origin.field0_0x0._s_0.X;
    fVar5 = (this->Frame).Origin.field0_0x0._s_0.Y;
    local_120._4_8_ = 0;
    fVar2 = (this->Extents).field0_0x0.XYZ[(int)uVar9];
    fStack_cc = (this->Frame).Origin.field0_0x0._s_0.Z;
    local_f8._s_0.X = fVar20 * fVar17 - fVar22 * fVar25;
    local_120._s_0.X = 0.0;
    local_120._s_0.W = 1.0;
    local_ec = fVar22 * fVar24 - fVar23 * fVar17;
    local_e0 = fVar23 * fVar25 - fVar20 * fVar24;
    local_f8._s_0.Y = fVar23;
    local_f8._s_0.Z = fVar24;
    local_e8 = fVar20;
    local_e4 = fVar25;
    local_dc = fVar22;
    local_d8 = fVar17;
    TQuaternion<float>::SetFromRotationMatrix
              ((TQuaternion<float> *)&local_120._s_0,(TMatrix3<float> *)&local_f8._s_0);
    (__return_storage_ptr__->Frame).Origin.field0_0x0._s_0.X = fVar4;
    (__return_storage_ptr__->Frame).Origin.field0_0x0._s_0.Y = fVar5;
    (__return_storage_ptr__->Frame).Origin.field0_0x0._s_0.Z = fStack_cc;
    (__return_storage_ptr__->Frame).Rotation.field0_0x0._s_0.X = local_120._s_0.X;
    *(undefined8 *)((longlong)&(__return_storage_ptr__->Frame).Rotation.field0_0x0 + 4) =
         local_120._4_8_;
    (__return_storage_ptr__->Frame).Rotation.field0_0x0._s_0.W = local_120._s_0.W;
    (__return_storage_ptr__->Extents).field0_0x0._s_0.X = fVar2;
    (__return_storage_ptr__->Extents).field0_0x0._s_0.Y = fVar1;
    (__return_storage_ptr__->Extents).field0_0x0._s_0.Z = fVar26;
  }
  return __return_storage_ptr__;
}

// ReparameterizedCloserToWorldFrame @ 143617e60

TOrientedBox3<double> * __thiscall
UE::Geometry::TOrientedBox3<double>::ReparameterizedCloserToWorldFrame
          (TOrientedBox3<double> *this,TOrientedBox3<double> *__return_storage_ptr__)

{
  double dVar1;
  double dVar2;
  code *pcVar3;
  double dVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  double dVar7;
  double dVar8;
  bool bVar9;
  int iVar10;
  TOrientedBox3<double> *pTVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  int iVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  double local_1d0 [5];
  double local_1a8 [10];
  TQuaternion<double>_u_0 local_158;
  TVector<double>_u_0 local_138;
  double local_120;
  double local_118;
  double local_110;
  double local_108;
  double local_100;
  double local_f8;
  undefined4 local_d8;
  undefined4 uStack_d4;
  
  dVar23 = (this->Frame).Rotation.field0_0x0._s_0.X;
  dVar1 = (this->Frame).Rotation.field0_0x0._s_0.Z;
  dVar19 = (this->Frame).Rotation.field0_0x0._s_0.W;
  dVar22 = (this->Frame).Rotation.field0_0x0._s_0.Y;
  dVar20 = dVar22 + dVar22;
  dVar4 = dVar1 + dVar1;
  local_1a8[2] = dVar23 * dVar4 - dVar19 * dVar20;
  local_1a8[6] = dVar23 * dVar4 + dVar19 * dVar20;
  local_1a8[0] = __real_3ff0000000000000 - (dVar4 * dVar1 + dVar20 * dVar22);
  local_1a8[1] = dVar19 * dVar4 + dVar23 * dVar20;
  dVar21 = (dVar23 + dVar23) * dVar23;
  local_1a8[7] = (dVar23 + dVar23) * dVar19;
  local_1a8[3] = dVar23 * dVar20 - dVar19 * dVar4;
  local_1a8[5] = dVar4 * dVar22 + local_1a8[7];
  local_1a8[7] = dVar4 * dVar22 - local_1a8[7];
  dVar23 = (double)CONCAT44((uint)((ulonglong)local_1a8[2] >> 0x20) &
                            __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                            SUB84(local_1a8[2],0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff);
  local_1a8[4] = __real_3ff0000000000000 - (dVar21 + dVar4 * dVar1);
  local_1a8[8] = __real_3ff0000000000000 - (dVar21 + dVar20 * dVar22);
  uVar17 = SUB84(local_1a8[5],0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff;
  uVar18 = (uint)((ulonglong)local_1a8[5] >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
  uVar15 = SUB84(local_1a8[8],0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff;
  uVar16 = (uint)((ulonglong)local_1a8[8] >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
  if (dVar23 < (double)CONCAT44(uVar18,uVar17) || dVar23 == (double)CONCAT44(uVar18,uVar17)) {
    uVar13 = (ulonglong)
             (((double)CONCAT44(uVar18,uVar17) < (double)CONCAT44(uVar16,uVar15) ||
              (double)CONCAT44(uVar18,uVar17) == (double)CONCAT44(uVar16,uVar15)) + 1);
  }
  else {
    uVar13 = 2;
    if ((double)CONCAT44(uVar16,uVar15) <= dVar23 && dVar23 != (double)CONCAT44(uVar16,uVar15)) {
      uVar13 = 0;
    }
  }
  local_1d0[0] = local_1a8[1];
  dVar23 = local_1a8[uVar13 * 3 + 2];
  iVar14 = -1;
  iVar10 = -1;
  local_1d0[1] = local_1a8[4];
  local_1d0[2] = local_1a8[7];
  local_1d0[uVar13] = 0.0;
  if (0.0 < dVar23) {
    iVar10 = 1;
  }
  uVar17 = SUB84(local_1d0[1],0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff;
  uVar18 = (uint)((ulonglong)local_1d0[1] >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
  dVar19 = (double)CONCAT44((uint)((ulonglong)local_1d0[0] >> 0x20) &
                            __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                            SUB84(local_1d0[0],0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff);
  uVar15 = SUB84(local_1d0[2],0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff;
  uVar16 = (uint)((ulonglong)local_1d0[2] >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
  dVar22 = (double)iVar10;
  dVar23 = dVar22 * local_1a8[uVar13 * 3];
  dVar1 = dVar22 * local_1a8[uVar13 * 3 + 1];
  dVar22 = dVar22 * local_1a8[uVar13 * 3 + 2];
  if (dVar19 < (double)CONCAT44(uVar18,uVar17) || dVar19 == (double)CONCAT44(uVar18,uVar17)) {
    uVar12 = (ulonglong)
             (((double)CONCAT44(uVar18,uVar17) < (double)CONCAT44(uVar16,uVar15) ||
              (double)CONCAT44(uVar18,uVar17) == (double)CONCAT44(uVar16,uVar15)) + 1);
  }
  else {
    uVar12 = 2;
    if ((double)CONCAT44(uVar16,uVar15) <= dVar19 && dVar19 != (double)CONCAT44(uVar16,uVar15)) {
      uVar12 = 0;
    }
  }
  if (0.0 < local_1d0[uVar12]) {
    iVar14 = 1;
  }
  dVar20 = (double)iVar14;
  dVar19 = dVar20 * local_1a8[uVar12 * 3];
  dVar4 = dVar20 * local_1a8[uVar12 * 3 + 1];
  dVar20 = dVar20 * local_1a8[uVar12 * 3 + 2];
  uVar17 = (uint)uVar12;
  uVar18 = (uint)uVar13;
  uVar16 = (3 - uVar17) - uVar18;
  uVar15 = 2;
  if ((int)uVar16 < 2) {
    uVar15 = uVar16;
  }
  uVar16 = 0;
  if (0 < (int)uVar15) {
    uVar16 = uVar15;
  }
  if (((uVar16 == uVar17) || (uVar17 == uVar18)) || (uVar16 == uVar18)) {
    bVar9 = Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_7749309084427353745>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryCore\\Private\\OrientedBoxTypes.cpp"
                       ,0x16f,"BestX != BestY && BestY != BestZ && BestX != BestZ");
    if (bVar9) {
      pcVar3 = (code *)swi(3);
      pTVar11 = (TOrientedBox3<double> *)(*pcVar3)();
      return pTVar11;
    }
    dVar23 = (this->Frame).Origin.field0_0x0._s_0.Y;
    (__return_storage_ptr__->Frame).Origin.field0_0x0._s_0.X =
         (this->Frame).Origin.field0_0x0._s_0.X;
    (__return_storage_ptr__->Frame).Origin.field0_0x0._s_0.Y = dVar23;
    dVar23 = (this->Frame).Rotation.field0_0x0._s_0.X;
    (__return_storage_ptr__->Frame).Origin.field0_0x0._s_0.Z =
         (this->Frame).Origin.field0_0x0._s_0.Z;
    (__return_storage_ptr__->Frame).Rotation.field0_0x0._s_0.X = dVar23;
    dVar23 = (this->Frame).Rotation.field0_0x0._s_0.Z;
    (__return_storage_ptr__->Frame).Rotation.field0_0x0._s_0.Y =
         (this->Frame).Rotation.field0_0x0._s_0.Y;
    (__return_storage_ptr__->Frame).Rotation.field0_0x0._s_0.Z = dVar23;
    dVar23 = (this->Extents).field0_0x0._s_0.X;
    (__return_storage_ptr__->Frame).Rotation.field0_0x0._s_0.W =
         (this->Frame).Rotation.field0_0x0._s_0.W;
    (__return_storage_ptr__->Extents).field0_0x0._s_0.X = dVar23;
    dVar23 = (this->Extents).field0_0x0._s_0.Z;
    (__return_storage_ptr__->Extents).field0_0x0._s_0.Y = (this->Extents).field0_0x0._s_0.Y;
    (__return_storage_ptr__->Extents).field0_0x0._s_0.Z = dVar23;
  }
  else {
    local_1d0[3] = (this->Extents).field0_0x0.XYZ[uVar13];
    dVar21 = (this->Extents).field0_0x0.XYZ[uVar12];
    if ((2 < uVar16) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValidIndex(Index)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\Vector.h"
                           ,0x7ab,L""), bVar9)) {
      pcVar3 = (code *)swi(3);
      pTVar11 = (TOrientedBox3<double> *)(*pcVar3)();
      return pTVar11;
    }
    dVar7 = (this->Frame).Origin.field0_0x0._s_0.X;
    dVar8 = (this->Frame).Origin.field0_0x0._s_0.Y;
    uVar5 = *(undefined4 *)((longlong)&(this->Frame).Origin.field0_0x0 + 0x10);
    uVar6 = *(undefined4 *)((longlong)&(this->Frame).Origin.field0_0x0 + 0x14);
    dVar2 = (this->Extents).field0_0x0.XYZ[(int)uVar16];
    local_138._s_0.X = dVar4 * dVar22 - dVar20 * dVar1;
    local_108 = dVar19 * dVar1 - dVar4 * dVar23;
    local_158._s_0.X = 0.0;
    local_120 = dVar20 * dVar23 - dVar19 * dVar22;
    local_158._s_0.W = __real_3ff0000000000000;
    local_158._s_0.Y = 0.0;
    local_158._s_0.Z = 0.0;
    local_138._s_0.Y = dVar19;
    local_138._s_0.Z = dVar23;
    local_118 = dVar4;
    local_110 = dVar1;
    local_100 = dVar20;
    local_f8 = dVar22;
    TQuaternion<double>::SetFromRotationMatrix
              ((TQuaternion<double> *)&local_158._s_0,(TMatrix3<double> *)&local_138._s_0);
    local_d8 = SUB84(local_158._s_0.X,0);
    uStack_d4 = (undefined4)((ulonglong)local_158._0_8_ >> 0x20);
    (__return_storage_ptr__->Frame).Origin.field0_0x0._s_0.X = dVar7;
    (__return_storage_ptr__->Frame).Origin.field0_0x0._s_0.Y = dVar8;
    *(undefined4 *)((longlong)&(__return_storage_ptr__->Frame).Origin.field0_0x0 + 0x10) = uVar5;
    *(undefined4 *)((longlong)&(__return_storage_ptr__->Frame).Origin.field0_0x0 + 0x14) = uVar6;
    *(undefined4 *)&(__return_storage_ptr__->Frame).Rotation.field0_0x0 = local_d8;
    *(undefined4 *)((longlong)&(__return_storage_ptr__->Frame).Rotation.field0_0x0 + 4) = uStack_d4;
    (__return_storage_ptr__->Frame).Rotation.field0_0x0._s_0.Y = local_158._s_0.Y;
    (__return_storage_ptr__->Frame).Rotation.field0_0x0._s_0.Z = local_158._s_0.Z;
    (__return_storage_ptr__->Frame).Rotation.field0_0x0._s_0.W = local_158._s_0.W;
    (__return_storage_ptr__->Extents).field0_0x0._s_0.X = dVar2;
    (__return_storage_ptr__->Extents).field0_0x0._s_0.Y = dVar21;
    (__return_storage_ptr__->Extents).field0_0x0._s_0.Z = local_1d0[3];
  }
  return __return_storage_ptr__;
}

// SignedDistance @ 14361af80

float __thiscall
UE::Geometry::TOrientedBox3<float>::SignedDistance
          (TOrientedBox3<float> *this,TVector<float> *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  TVector<float>_u_0 local_28;
  TVector<float>_u_0 local_18;
  
  local_28._s_0.X = (param_1->field0_0x0)._s_0.X - (this->Frame).Origin.field0_0x0._s_0.X;
  local_28._s_0.Y = (param_1->field0_0x0)._s_0.Y - (this->Frame).Origin.field0_0x0._s_0.Y;
  local_28._s_0.Z = (param_1->field0_0x0)._s_0.Z - (this->Frame).Origin.field0_0x0._s_0.Z;
  TQuaternion<float>::InverseMultiply
            (&(this->Frame).Rotation,(TVector<float> *)&local_18._s_0,
             (TVector<float> *)&local_28._s_0);
  fVar3 = (float)((uint)local_18._s_0.Y & __xmm_7fffffff7fffffff7fffffff7fffffff) -
          (this->Extents).field0_0x0._s_0.Y;
  fVar2 = (float)((uint)local_18._s_0.X & __xmm_7fffffff7fffffff7fffffff7fffffff) -
          (this->Extents).field0_0x0._s_0.X;
  fVar4 = (float)((uint)local_18._s_0.Z & __xmm_7fffffff7fffffff7fffffff7fffffff) -
          (this->Extents).field0_0x0._s_0.Z;
  fVar1 = fVar3;
  if (fVar3 <= fVar2) {
    fVar1 = fVar2;
  }
  if (fVar1 <= fVar4) {
    fVar1 = fVar4;
  }
  if (0.0 <= fVar1) {
    if (fVar2 <= 0.0) {
      fVar2 = 0.0;
    }
    if (fVar3 <= 0.0) {
      fVar3 = 0.0;
    }
    if (fVar4 <= 0.0) {
      fVar4 = 0.0;
    }
    fVar1 = SQRT(fVar2 * fVar2 + fVar3 * fVar3 + fVar4 * fVar4);
  }
  return fVar1;
}

// SignedDistance @ 14361b050

double __thiscall
UE::Geometry::TOrientedBox3<double>::SignedDistance
          (TOrientedBox3<double> *this,TVector<double> *param_1)

{
  undefined1 auVar1 [16];
  double dVar2;
  undefined1 auVar4 [16];
  double dVar5;
  double dVar6;
  TVector<double> local_38;
  TVector<double>_u_0 local_20;
  double dVar3;
  
  dVar2 = (param_1->field0_0x0)._s_0.Y - (this->Frame).Origin.field0_0x0._s_0.Y;
  local_20._s_0.Z = (param_1->field0_0x0)._s_0.Z - (this->Frame).Origin.field0_0x0._s_0.Z;
  local_20._8_4_ = SUB84(dVar2,0);
  local_20._0_8_ = (param_1->field0_0x0)._s_0.X - (this->Frame).Origin.field0_0x0._s_0.X;
  local_20._12_4_ = (int)((ulonglong)dVar2 >> 0x20);
  TQuaternion<double>::InverseMultiply
            (&(this->Frame).Rotation,&local_38,(TVector<double> *)&local_20._s_0);
  dVar5 = (double)CONCAT44((uint)((ulonglong)local_38.field0_0x0._8_8_ >> 0x20) &
                           __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                           SUB84(local_38.field0_0x0._s_0.Y,0) &
                           (uint)__xmm_7fffffffffffffff7fffffffffffffff) -
          (this->Extents).field0_0x0._s_0.Y;
  dVar2 = (double)CONCAT44((uint)((ulonglong)local_38.field0_0x0._0_8_ >> 0x20) &
                           __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                           SUB84(local_38.field0_0x0._s_0.X,0) &
                           (uint)__xmm_7fffffffffffffff7fffffffffffffff) -
          (this->Extents).field0_0x0._s_0.X;
  dVar6 = (double)CONCAT44((uint)((ulonglong)local_38.field0_0x0._16_8_ >> 0x20) &
                           __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                           SUB84(local_38.field0_0x0._s_0.Z,0) &
                           (uint)__xmm_7fffffffffffffff7fffffffffffffff) -
          (this->Extents).field0_0x0._s_0.Z;
  dVar3 = dVar5;
  if (dVar5 <= dVar2) {
    dVar3 = dVar2;
  }
  if (dVar3 <= dVar6) {
    dVar3 = dVar6;
  }
  auVar4._8_8_ = 0;
  auVar4._0_8_ = dVar3;
  if (0.0 <= dVar3) {
    if (dVar2 <= 0.0) {
      dVar2 = 0.0;
    }
    if (dVar5 <= 0.0) {
      dVar5 = 0.0;
    }
    if (dVar6 <= 0.0) {
      dVar6 = 0.0;
    }
    auVar1._8_8_ = 0;
    auVar1._0_8_ = dVar2 * dVar2 + dVar5 * dVar5 + dVar6 * dVar6;
    auVar4 = sqrtpd(auVar4,auVar1);
    dVar3 = auVar4._0_8_;
  }
  return dVar3;
}

// SurfaceArea @ 14361c650

float __thiscall UE::Geometry::TOrientedBox3<float>::SurfaceArea(TOrientedBox3<float> *this)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  fVar2 = (this->Extents).field0_0x0._s_0.Y;
  fVar3 = (this->Extents).field0_0x0._s_0.Z;
  if (fVar2 <= 0.0) {
    fVar2 = 0.0;
  }
  fVar1 = (this->Extents).field0_0x0._s_0.X;
  if (fVar3 <= 0.0) {
    fVar3 = 0.0;
  }
  if (fVar1 <= 0.0) {
    fVar1 = 0.0;
  }
  return (fVar1 * (fVar2 + fVar3) + fVar2 * fVar3) * __real_41000000;
}

// SurfaceArea @ 14361c690

double __thiscall UE::Geometry::TOrientedBox3<double>::SurfaceArea(TOrientedBox3<double> *this)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  
  dVar3 = (this->Extents).field0_0x0._s_0.Y;
  dVar2 = 0.0;
  dVar4 = (this->Extents).field0_0x0._s_0.Z;
  if (dVar3 <= 0.0) {
    dVar3 = dVar2;
  }
  dVar1 = (this->Extents).field0_0x0._s_0.X;
  if (dVar4 <= 0.0) {
    dVar4 = dVar2;
  }
  if (dVar1 <= 0.0) {
    dVar1 = dVar2;
  }
  return (dVar1 * (dVar3 + dVar4) + dVar3 * dVar4) * __real_4020000000000000;
}

// UnitPositive @ 14361e930

TOrientedBox3<float> * __cdecl
UE::Geometry::TOrientedBox3<float>::UnitPositive(TOrientedBox3<float> *__return_storage_ptr__)

{
  float fVar1;
  undefined4 uVar2;
  float fVar3;
  float fVar4;
  
  uVar2 = UE::Math::TVector<float>::OneVector.field0_0x0._s_0.Z;
  fVar1 = __real_3f000000;
  fVar4 = UE::Math::TVector<float>::OneVector.field0_0x0._s_0.X * __real_3f000000;
  fVar3 = UE::Math::TVector<float>::OneVector.field0_0x0._s_0.Y * __real_3f000000;
  (__return_storage_ptr__->Frame).Origin.field0_0x0._s_0.X = fVar4;
  (__return_storage_ptr__->Frame).Origin.field0_0x0._s_0.Y = fVar3;
  (__return_storage_ptr__->Frame).Origin.field0_0x0._s_0.Z = (float)uVar2 * fVar1;
  *(undefined8 *)&(__return_storage_ptr__->Frame).Rotation.field0_0x0 = 0;
  (__return_storage_ptr__->Frame).Rotation.field0_0x0._s_0.Z = 0.0;
  (__return_storage_ptr__->Frame).Rotation.field0_0x0._s_0.W = 1.0;
  (__return_storage_ptr__->Extents).field0_0x0._s_0.X = fVar4;
  (__return_storage_ptr__->Extents).field0_0x0._s_0.Y = fVar3;
  (__return_storage_ptr__->Extents).field0_0x0._s_0.Z = (float)uVar2 * fVar1;
  return __return_storage_ptr__;
}

// UnitPositive @ 14361e9a0

TOrientedBox3<double> * __cdecl
UE::Geometry::TOrientedBox3<double>::UnitPositive(TOrientedBox3<double> *__return_storage_ptr__)

{
  double dVar1;
  double dVar2;
  double dVar3;
  
  dVar3 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.X * __real_3fe0000000000000;
  dVar2 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Y * __real_3fe0000000000000;
  dVar1 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Z * __real_3fe0000000000000;
  (__return_storage_ptr__->Frame).Origin.field0_0x0._s_0.X = dVar3;
  (__return_storage_ptr__->Frame).Origin.field0_0x0._s_0.Y = dVar2;
  (__return_storage_ptr__->Frame).Origin.field0_0x0._s_0.Z = dVar1;
  (__return_storage_ptr__->Frame).Rotation.field0_0x0._s_0.X = 0.0;
  (__return_storage_ptr__->Frame).Rotation.field0_0x0._s_0.Y = 0.0;
  (__return_storage_ptr__->Frame).Rotation.field0_0x0._s_0.Z = 0.0;
  (__return_storage_ptr__->Frame).Rotation.field0_0x0._s_0.W = 1.0;
  (__return_storage_ptr__->Extents).field0_0x0._s_0.X = dVar3;
  (__return_storage_ptr__->Extents).field0_0x0._s_0.Y = dVar2;
  (__return_storage_ptr__->Extents).field0_0x0._s_0.Z = dVar1;
  return __return_storage_ptr__;
}

// UnitZeroCentered @ 14361ea10

TOrientedBox3<float> * __cdecl
UE::Geometry::TOrientedBox3<float>::UnitZeroCentered(TOrientedBox3<float> *__return_storage_ptr__)

{
  float fVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  float fVar6;
  
  uVar5 = UE::Math::TVector<float>::OneVector.field0_0x0._s_0.Z;
  uVar4 = UE::Math::TVector<float>::OneVector.field0_0x0._s_0.Y;
  uVar3 = UE::Math::TVector<float>::OneVector.field0_0x0._s_0.X;
  uVar2 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
  *(undefined8 *)&(__return_storage_ptr__->Frame).Origin.field0_0x0 =
       UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_;
  (__return_storage_ptr__->Frame).Origin.field0_0x0._s_0.Z = (float)uVar2;
  *(undefined8 *)&(__return_storage_ptr__->Frame).Rotation.field0_0x0 = 0;
  (__return_storage_ptr__->Frame).Rotation.field0_0x0._s_0.Z = 0.0;
  (__return_storage_ptr__->Frame).Rotation.field0_0x0._s_0.W = 1.0;
  fVar1 = __real_3f000000;
  fVar6 = (float)uVar4 * __real_3f000000;
  (__return_storage_ptr__->Extents).field0_0x0._s_0.X = (float)uVar3 * __real_3f000000;
  (__return_storage_ptr__->Extents).field0_0x0._s_0.Y = fVar6;
  (__return_storage_ptr__->Extents).field0_0x0._s_0.Z = (float)uVar5 * fVar1;
  return __return_storage_ptr__;
}

// UnitZeroCentered @ 14361ea80

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TOrientedBox3<double> * __cdecl
UE::Geometry::TOrientedBox3<double>::UnitZeroCentered(TOrientedBox3<double> *__return_storage_ptr__)

{
  undefined1 auVar1 [16];
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  double dVar7;
  
  uVar6 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Z;
  uVar5 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Y;
  uVar4 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.X;
  uVar3 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  uVar2 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (__return_storage_ptr__->Frame).Origin.field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (__return_storage_ptr__->Frame).Origin.field0_0x0._s_0.Y = (double)uVar2;
  (__return_storage_ptr__->Frame).Origin.field0_0x0._s_0.Z = (double)uVar3;
  (__return_storage_ptr__->Frame).Rotation.field0_0x0._s_0.X = 0.0;
  (__return_storage_ptr__->Frame).Rotation.field0_0x0._s_0.Y = 0.0;
  (__return_storage_ptr__->Frame).Rotation.field0_0x0._s_0.Z = 0.0;
  (__return_storage_ptr__->Frame).Rotation.field0_0x0._s_0.W = 1.0;
  dVar7 = (double)uVar6 * ___xmm_3fe00000000000003fe0000000000000;
  auVar1._8_4_ = SUB84((double)uVar5 * _UNK_150689678,0);
  auVar1._0_8_ = (double)uVar4 * ___xmm_3fe00000000000003fe0000000000000;
  auVar1._12_4_ = (int)((ulonglong)((double)uVar5 * _UNK_150689678) >> 0x20);
  *(undefined1 (*) [16])&(__return_storage_ptr__->Extents).field0_0x0 = auVar1;
  (__return_storage_ptr__->Extents).field0_0x0._s_0.Z = dVar7;
  return __return_storage_ptr__;
}

// Volume @ 14361ef50

float __thiscall UE::Geometry::TOrientedBox3<float>::Volume(TOrientedBox3<float> *this)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  fVar1 = (this->Extents).field0_0x0._s_0.Z;
  fVar2 = (this->Extents).field0_0x0._s_0.Y;
  if (fVar1 <= 0.0) {
    fVar1 = 0.0;
  }
  fVar3 = (this->Extents).field0_0x0._s_0.X;
  if (fVar2 <= 0.0) {
    fVar2 = 0.0;
  }
  if (fVar3 <= 0.0) {
    fVar3 = 0.0;
  }
  return fVar1 * fVar2 * fVar3 * __real_41000000;
}

// Volume @ 14361ef90

double __thiscall UE::Geometry::TOrientedBox3<double>::Volume(TOrientedBox3<double> *this)

{
  double dVar1;
  double dVar2;
  double dVar3;
  
  dVar1 = (this->Extents).field0_0x0._s_0.Z;
  dVar2 = (this->Extents).field0_0x0._s_0.Y;
  if (dVar1 <= 0.0) {
    dVar1 = 0.0;
  }
  dVar3 = (this->Extents).field0_0x0._s_0.X;
  if (dVar2 <= 0.0) {
    dVar2 = 0.0;
  }
  if (dVar3 <= 0.0) {
    dVar3 = 0.0;
  }
  return dVar1 * dVar2 * dVar3 * __real_4020000000000000;
}

