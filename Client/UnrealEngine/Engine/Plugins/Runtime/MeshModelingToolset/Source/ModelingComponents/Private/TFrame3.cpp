// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ModelingComponents
// Functions: 3

// AlignAxis @ 14cae95c0

void __thiscall
UE::Geometry::TFrame3<double>::AlignAxis(TFrame3<double> *this,int param_1,TVector<double> *param_2)

{
  TVector<double> *pTVar1;
  TVector<double> local_48;
  TQuaternion<double>_u_0 local_30;
  
  pTVar1 = GetAxis(this,&local_48,param_1);
  local_30._s_0.X = 0.0;
  local_30._s_0.Y = 0.0;
  local_30._s_0.Z = 0.0;
  local_30._s_0.W = __real_3ff0000000000000;
  TQuaternion<double>::SetFromTo((TQuaternion<double> *)&local_30._s_0,pTVar1,param_2);
  Rotate(this,(TQuaternion<double> *)&local_30._s_0);
  return;
}

// ToFrame @ 14cb40ef0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TFrame3<double> * __thiscall
UE::Geometry::TFrame3<double>::ToFrame
          (TFrame3<double> *this,TFrame3<double> *__return_storage_ptr__,TFrame3<double> *param_1)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  TVector<double>_u_0 local_68;
  TQuaternion<double>_u_0 local_50;
  TQuaternion<double>_u_0 local_30;
  
  dVar5 = (this->Rotation).field0_0x0._s_0.X;
  dVar1 = (this->Rotation).field0_0x0._s_0.W;
  dVar2 = (this->Rotation).field0_0x0._s_0.Z;
  dVar3 = (this->Rotation).field0_0x0._s_0.Y;
  local_50._0_4_ = 0;
  local_50._4_4_ = 0;
  local_50._8_4_ = 0;
  local_50._12_4_ = 0;
  dVar5 = dVar3 * dVar3 + dVar5 * dVar5 + dVar2 * dVar2 + dVar1 * dVar1;
  if (dVar5 <= 0.0) {
    local_50._s_0.Z = 0.0;
    local_50._s_0.W = 0.0;
  }
  else {
    dVar5 = __real_3ff0000000000000 / dVar5;
    dVar3 = (this->Rotation).field0_0x0._s_0.X * dVar5;
    dVar4 = (this->Rotation).field0_0x0._s_0.Y * dVar5;
    local_50._s_0.W = dVar5 * dVar1;
    local_50._0_4_ = SUB84(dVar3,0) ^ (uint)__xmm_80000000000000008000000000000000;
    local_50._4_4_ = (uint)((ulonglong)dVar3 >> 0x20) ^ __xmm_80000000000000008000000000000000._4_4_
    ;
    local_50._8_4_ = SUB84(dVar4,0) ^ _UNK_15066df78;
    local_50._12_4_ = (uint)((ulonglong)dVar4 >> 0x20) ^ _UNK_15066df7c;
    local_50._s_0.Z =
         (double)CONCAT44((uint)((ulonglong)(dVar5 * dVar2) >> 0x20) ^
                          __xmm_80000000000000008000000000000000._4_4_,
                          SUB84(dVar5 * dVar2,0) ^ (uint)__xmm_80000000000000008000000000000000);
  }
  operator*<double>((TQuaternion<double> *)&local_30._s_0,(TQuaternion<double> *)&local_50._s_0,
                    &param_1->Rotation);
  dVar5 = (param_1->Origin).field0_0x0._s_0.Y - (this->Origin).field0_0x0._s_0.Y;
  local_68._s_0.Z = (param_1->Origin).field0_0x0._s_0.Z - (this->Origin).field0_0x0._s_0.Z;
  local_68._8_4_ = SUB84(dVar5,0);
  local_68._0_8_ = (param_1->Origin).field0_0x0._s_0.X - (this->Origin).field0_0x0._s_0.X;
  local_68._12_4_ = (int)((ulonglong)dVar5 >> 0x20);
  TQuaternion<double>::InverseMultiply
            (&this->Rotation,(TVector<double> *)&local_50._s_0,(TVector<double> *)&local_68._s_0);
  (__return_storage_ptr__->Origin).field0_0x0._s_0.X =
       (double)CONCAT44(local_50._4_4_,local_50._0_4_);
  (__return_storage_ptr__->Origin).field0_0x0._s_0.Y =
       (double)CONCAT44(local_50._12_4_,local_50._8_4_);
  (__return_storage_ptr__->Origin).field0_0x0._s_0.Z = local_50._s_0.Z;
  (__return_storage_ptr__->Rotation).field0_0x0._s_0.X = local_30._s_0.X;
  (__return_storage_ptr__->Rotation).field0_0x0._s_0.Y = local_30._s_0.Y;
  (__return_storage_ptr__->Rotation).field0_0x0._s_0.Z = local_30._s_0.Z;
  (__return_storage_ptr__->Rotation).field0_0x0._s_0.W = local_30._s_0.W;
  return __return_storage_ptr__;
}

// TFrame3<double> @ 14cbc1660

TFrame3<double> * __thiscall
UE::Geometry::TFrame3<double>::TFrame3<double>
          (TFrame3<double> *this,TVector<double> *param_1,TVector<double> *param_2)

{
  double dVar1;
  TVector<double>_u_0 local_28;
  
  (this->Rotation).field0_0x0._s_0.Z = 0.0;
  (this->Rotation).field0_0x0._s_0.Y = 0.0;
  (this->Rotation).field0_0x0._s_0.X = 0.0;
  (this->Rotation).field0_0x0._s_0.W = 1.0;
  dVar1 = (param_1->field0_0x0)._s_0.Y;
  (this->Origin).field0_0x0._s_0.X = (param_1->field0_0x0)._s_0.X;
  (this->Origin).field0_0x0._s_0.Y = dVar1;
  (this->Origin).field0_0x0._s_0.Z = (param_1->field0_0x0)._s_0.Z;
  local_28._s_0.X = UE::Math::TVector<double>::ZAxisVector.field0_0x0._s_0.X;
  local_28._s_0.Y = UE::Math::TVector<double>::ZAxisVector.field0_0x0._s_0.Y;
  local_28._s_0.Z = UE::Math::TVector<double>::ZAxisVector.field0_0x0._s_0.Z;
  TQuaternion<double>::SetFromTo(&this->Rotation,(TVector<double> *)&local_28._s_0,param_2);
  return this;
}

