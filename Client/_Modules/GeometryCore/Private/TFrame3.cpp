// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryCore
// Functions: 8

// FromFramePoint @ 1433a1bb0

TVector<float> * __thiscall
UE::Geometry::TFrame3<float>::FromFramePoint
          (TFrame3<float> *this,TVector<float> *__return_storage_ptr__,TVector<float> *param_1)

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
  
  fVar1 = (this->Rotation).field0_0x0._s_0.X;
  fVar2 = (this->Rotation).field0_0x0._s_0.Y;
  fVar3 = (this->Rotation).field0_0x0._s_0.Z;
  fVar4 = (param_1->field0_0x0)._s_0.Z;
  fVar5 = (param_1->field0_0x0)._s_0.X;
  fVar6 = (this->Rotation).field0_0x0._s_0.W;
  fVar12 = fVar3 + fVar3;
  fVar13 = fVar2 + fVar2;
  fVar14 = fVar6 * (fVar1 + fVar1);
  fVar15 = (fVar1 + fVar1) * fVar1;
  fVar7 = (param_1->field0_0x0)._s_0.Y;
  fVar8 = (this->Origin).field0_0x0._s_0.Z;
  fVar10 = __real_3f800000 - (fVar12 * fVar3 + fVar15);
  fVar11 = __real_3f800000 - (fVar13 * fVar2 + fVar15);
  fVar15 = (param_1->field0_0x0)._s_0.Y;
  fVar9 = (this->Origin).field0_0x0._s_0.Y;
  (__return_storage_ptr__->field0_0x0)._s_0.X =
       (fVar13 * fVar1 - fVar6 * fVar12) * (param_1->field0_0x0)._s_0.Y +
       (fVar12 * fVar1 + fVar6 * fVar13) * fVar4 +
       (__real_3f800000 - (fVar12 * fVar3 + fVar13 * fVar2)) * fVar5 +
       (this->Origin).field0_0x0._s_0.X;
  (__return_storage_ptr__->field0_0x0)._s_0.Y =
       (fVar13 * fVar1 + fVar6 * fVar12) * fVar5 + (fVar12 * fVar2 - fVar14) * fVar4 +
       fVar10 * fVar15 + fVar9;
  (__return_storage_ptr__->field0_0x0)._s_0.Z =
       fVar11 * fVar4 + (fVar12 * fVar1 - fVar6 * fVar13) * fVar5 +
       (fVar12 * fVar2 + fVar14) * fVar7 + fVar8;
  return __return_storage_ptr__;
}

// GetAxis @ 1433a26d0

TVector<double> * __thiscall
UE::Geometry::TFrame3<double>::GetAxis
          (TFrame3<double> *this,TVector<double> *__return_storage_ptr__,int param_1)

{
  double dVar1;
  double dVar2;
  double dVar3;
  code *pcVar4;
  undefined8 uVar5;
  bool bVar6;
  TVector<double> *pTVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  
  dVar3 = __real_3ff0000000000000;
  if (param_1 == 0) {
    dVar3 = (this->Rotation).field0_0x0._s_0.Z;
    dVar1 = (this->Rotation).field0_0x0._s_0.Y;
    dVar2 = (this->Rotation).field0_0x0._s_0.X;
    dVar9 = dVar3 + dVar3;
    dVar10 = dVar1 + dVar1;
    dVar8 = (this->Rotation).field0_0x0._s_0.W;
    (__return_storage_ptr__->field0_0x0)._s_0.X =
         __real_3ff0000000000000 - (dVar9 * dVar3 + dVar10 * dVar1);
    (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar8 * dVar9 + dVar2 * dVar10;
    (__return_storage_ptr__->field0_0x0)._s_0.Z = dVar2 * dVar9 - dVar8 * dVar10;
    return __return_storage_ptr__;
  }
  if (param_1 == 1) {
    dVar3 = (this->Rotation).field0_0x0._s_0.Y;
    dVar1 = (this->Rotation).field0_0x0._s_0.X;
    dVar2 = (this->Rotation).field0_0x0._s_0.Z;
    dVar8 = (this->Rotation).field0_0x0._s_0.W;
    dVar10 = dVar2 + dVar2;
    (__return_storage_ptr__->field0_0x0)._s_0.X = (dVar3 + dVar3) * dVar1 - dVar8 * dVar10;
    dVar9 = __real_3ff0000000000000;
    (__return_storage_ptr__->field0_0x0)._s_0.Z = dVar3 * dVar10 + dVar8 * (dVar1 + dVar1);
    (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar9 - (dVar10 * dVar2 + (dVar1 + dVar1) * dVar1)
    ;
    return __return_storage_ptr__;
  }
  if (param_1 == 2) {
    dVar1 = (this->Rotation).field0_0x0._s_0.X;
    dVar2 = (this->Rotation).field0_0x0._s_0.Y;
    dVar8 = (this->Rotation).field0_0x0._s_0.Z;
    dVar9 = (this->Rotation).field0_0x0._s_0.W;
    dVar8 = dVar8 + dVar8;
    (__return_storage_ptr__->field0_0x0)._s_0.X = dVar9 * (dVar2 + dVar2) + dVar8 * dVar1;
    (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar8 * dVar2 - dVar9 * (dVar1 + dVar1);
    (__return_storage_ptr__->field0_0x0)._s_0.Z =
         dVar3 - ((dVar2 + dVar2) * dVar2 + (dVar1 + dVar1) * dVar1);
    return __return_storage_ptr__;
  }
  bVar6 = ::FDebug::CheckVerifyFailedImpl2
                    ("!\"Enclosing block should never be called\"",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryCore\\Public\\FrameTypes.h"
                     ,0x88,L"");
  uVar5 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  if (bVar6) {
    pcVar4 = (code *)swi(3);
    pTVar7 = (TVector<double> *)(*pcVar4)();
    return pTVar7;
  }
  (__return_storage_ptr__->field0_0x0)._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = (double)uVar5;
  (__return_storage_ptr__->field0_0x0)._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  return __return_storage_ptr__;
}

// GetAxes @ 1435b07f0

void __thiscall
UE::Geometry::TFrame3<float>::GetAxes
          (TFrame3<float> *this,TVector<float> *param_1,TVector<float> *param_2,
          TVector<float> *param_3)

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
  
  fVar5 = __real_3f800000;
  fVar1 = (this->Rotation).field0_0x0._s_0.X;
  fVar2 = (this->Rotation).field0_0x0._s_0.Y;
  fVar3 = (this->Rotation).field0_0x0._s_0.Z;
  fVar4 = (this->Rotation).field0_0x0._s_0.W;
  fVar6 = fVar3 + fVar3;
  fVar8 = fVar2 + fVar2;
  fVar7 = fVar4 * (fVar1 + fVar1);
  fVar9 = (fVar1 + fVar1) * fVar1;
  (param_1->field0_0x0)._s_0.X = __real_3f800000 - (fVar6 * fVar3 + fVar8 * fVar2);
  (param_1->field0_0x0)._s_0.Y = fVar8 * fVar1 + fVar4 * fVar6;
  (param_1->field0_0x0)._s_0.Z = fVar6 * fVar1 - fVar4 * fVar8;
  (param_2->field0_0x0)._s_0.X = fVar8 * fVar1 - fVar4 * fVar6;
  (param_2->field0_0x0)._s_0.Y = fVar5 - (fVar6 * fVar3 + fVar9);
  (param_2->field0_0x0)._s_0.Z = fVar6 * fVar2 + fVar7;
  (param_3->field0_0x0)._s_0.X = fVar6 * fVar1 + fVar4 * fVar8;
  (param_3->field0_0x0)._s_0.Y = fVar6 * fVar2 - fVar7;
  (param_3->field0_0x0)._s_0.Z = fVar5 - (fVar8 * fVar2 + fVar9);
  return;
}

// GetAxes @ 1435b0930

void __thiscall
UE::Geometry::TFrame3<double>::GetAxes
          (TFrame3<double> *this,TVector<double> *param_1,TVector<double> *param_2,
          TVector<double> *param_3)

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
  
  dVar9 = __real_3ff0000000000000;
  dVar1 = (this->Rotation).field0_0x0._s_0.X;
  dVar2 = (this->Rotation).field0_0x0._s_0.Y;
  dVar3 = (this->Rotation).field0_0x0._s_0.Z;
  dVar4 = (this->Rotation).field0_0x0._s_0.W;
  dVar5 = dVar3 + dVar3;
  dVar7 = dVar2 + dVar2;
  dVar6 = dVar4 * (dVar1 + dVar1);
  dVar8 = (dVar1 + dVar1) * dVar1;
  (param_1->field0_0x0)._s_0.X = __real_3ff0000000000000 - (dVar5 * dVar3 + dVar7 * dVar2);
  (param_1->field0_0x0)._s_0.Y = dVar7 * dVar1 + dVar4 * dVar5;
  (param_1->field0_0x0)._s_0.Z = dVar5 * dVar1 - dVar4 * dVar7;
  (param_2->field0_0x0)._s_0.X = dVar7 * dVar1 - dVar4 * dVar5;
  (param_2->field0_0x0)._s_0.Y = dVar9 - (dVar5 * dVar3 + dVar8);
  (param_2->field0_0x0)._s_0.Z = dVar5 * dVar2 + dVar6;
  (param_3->field0_0x0)._s_0.X = dVar5 * dVar1 + dVar4 * dVar7;
  (param_3->field0_0x0)._s_0.Y = dVar5 * dVar2 - dVar6;
  (param_3->field0_0x0)._s_0.Z = dVar9 - (dVar7 * dVar2 + dVar8);
  return;
}

// ToPlaneUV @ 1435c87d0

TVector2<double> * __thiscall
UE::Geometry::TFrame3<double>::ToPlaneUV
          (TFrame3<double> *this,TVector2<double> *__return_storage_ptr__,TVector<double> *param_1,
          int param_2)

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
  TVector<double> *pTVar10;
  int iVar11;
  int iVar12;
  TVector<double> local_88 [5];
  
  iVar11 = 1;
  if (param_2 == 0) {
    iVar12 = 2;
  }
  else {
    iVar11 = 1;
    iVar12 = 0;
    if (param_2 == 1) {
      iVar11 = 2;
      iVar12 = 0;
    }
  }
  dVar8 = (param_1->field0_0x0)._s_0.X - (this->Origin).field0_0x0._s_0.X;
  dVar9 = (param_1->field0_0x0)._s_0.Y - (this->Origin).field0_0x0._s_0.Y;
  dVar7 = (param_1->field0_0x0)._s_0.Z - (this->Origin).field0_0x0._s_0.Z;
  pTVar10 = GetAxis(this,local_88,iVar12);
  dVar1 = (pTVar10->field0_0x0)._s_0.Z;
  dVar2 = (pTVar10->field0_0x0)._s_0.X;
  dVar3 = (pTVar10->field0_0x0)._s_0.Y;
  pTVar10 = GetAxis(this,local_88,iVar11);
  dVar4 = (pTVar10->field0_0x0)._s_0.Y;
  dVar5 = (pTVar10->field0_0x0)._s_0.X;
  dVar6 = (pTVar10->field0_0x0)._s_0.Z;
  (__return_storage_ptr__->field0_0x0)._s_0.X = dVar9 * dVar3 + dVar8 * dVar2 + dVar7 * dVar1;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar9 * dVar4 + dVar8 * dVar5 + dVar7 * dVar6;
  return __return_storage_ptr__;
}

// TFrame3<float> @ 1435e2240

TFrame3<float> * __thiscall
UE::Geometry::TFrame3<float>::TFrame3<float>
          (TFrame3<float> *this,TVector<float> *param_1,TVector<float> *param_2,
          TVector<float> *param_3,TVector<float> *param_4)

{
  TQuaternion<float>_u_0 local_48;
  TVector<float>_u_0 local_38;
  float local_2c;
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  
  (this->Rotation).field0_0x0._s_0.W = 1.0;
  *(undefined8 *)((longlong)&(this->Rotation).field0_0x0 + 4) = 0;
  (this->Rotation).field0_0x0._s_0.X = 0.0;
  *(undefined8 *)&(this->Origin).field0_0x0 = *(undefined8 *)&param_1->field0_0x0;
  (this->Origin).field0_0x0._s_0.Z = (param_1->field0_0x0)._s_0.Z;
  local_38._s_0.X = (param_2->field0_0x0)._s_0.X;
  local_38._s_0.Y = (param_3->field0_0x0)._s_0.X;
  local_38._s_0.Z = (param_4->field0_0x0)._s_0.X;
  local_28 = (param_3->field0_0x0)._s_0.Y;
  local_2c = (param_2->field0_0x0)._s_0.Y;
  local_20 = (param_2->field0_0x0)._s_0.Z;
  local_24 = (param_4->field0_0x0)._s_0.Y;
  local_18 = (param_4->field0_0x0)._s_0.Z;
  local_1c = (param_3->field0_0x0)._s_0.Z;
  local_48._s_0.Y = 0.0;
  local_48._s_0.Z = 0.0;
  local_48._s_0.X = 0.0;
  local_48._s_0.W = 1.0;
  TQuaternion<float>::SetFromRotationMatrix
            ((TQuaternion<float> *)&local_48._s_0,(TMatrix3<float> *)&local_38._s_0);
  *(ulonglong *)&(this->Rotation).field0_0x0 = CONCAT44(local_48._s_0.Y,local_48._s_0.X);
  *(ulonglong *)((longlong)&(this->Rotation).field0_0x0 + 8) =
       CONCAT44(local_48._s_0.W,local_48._s_0.Z);
  return this;
}

// PointAt @ 143614090

TVector<float> * __thiscall
UE::Geometry::TFrame3<float>::PointAt
          (TFrame3<float> *this,TVector<float> *__return_storage_ptr__,float param_1,float param_2,
          float param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  TVector<float> *pTVar5;
  TVector<float>_u_0 local_28;
  TVector<float> local_1c;
  
  local_28._s_0.Z = param_3;
  local_28._s_0.X = param_1;
  local_28._s_0.Y = param_2;
  pTVar5 = operator*<float>(&local_1c,&this->Rotation,(TVector<float> *)&local_28._s_0);
  fVar1 = (pTVar5->field0_0x0)._s_0.Y;
  fVar2 = (this->Origin).field0_0x0._s_0.Y;
  (__return_storage_ptr__->field0_0x0)._s_0.X =
       (this->Origin).field0_0x0._s_0.X + (pTVar5->field0_0x0)._s_0.X;
  fVar3 = (pTVar5->field0_0x0)._s_0.Z;
  fVar4 = (this->Origin).field0_0x0._s_0.Z;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = fVar1 + fVar2;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = fVar3 + fVar4;
  return __return_storage_ptr__;
}

// PointAt @ 143614110

TVector<double> * __thiscall
UE::Geometry::TFrame3<double>::PointAt
          (TFrame3<double> *this,TVector<double> *__return_storage_ptr__,double param_1,
          double param_2,double param_3)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  TVector<double> *pTVar5;
  TVector<double>_u_0 local_38;
  TVector<double> local_20;
  
  local_38._s_0.Z = param_3;
  local_38._s_0.X = param_1;
  local_38._s_0.Y = param_2;
  pTVar5 = operator*<double>(&local_20,&this->Rotation,(TVector<double> *)&local_38._s_0);
  dVar1 = (pTVar5->field0_0x0)._s_0.Y;
  dVar2 = (this->Origin).field0_0x0._s_0.Y;
  (__return_storage_ptr__->field0_0x0)._s_0.X =
       (this->Origin).field0_0x0._s_0.X + (pTVar5->field0_0x0)._s_0.X;
  dVar3 = (pTVar5->field0_0x0)._s_0.Z;
  dVar4 = (this->Origin).field0_0x0._s_0.Z;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar1 + dVar2;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = dVar3 + dVar4;
  return __return_storage_ptr__;
}

