// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 2

// FPCGPointRef @ 14988cc10

FPCGPointRef * __thiscall FPCGPointRef::FPCGPointRef(FPCGPointRef *this,FPCGPoint *param_1)

{
  TVector<double>_u_0 local_48;
  double dStack_30;
  double local_28;
  double dStack_20;
  double local_18;
  
  this->Point = param_1;
  PCGPointHelpers::GetDensityBounds
            ((TBoxSphereBounds<double,double> *)&local_48._s_0,&param_1->Transform,
             param_1->Steepness,&param_1->BoundsMin,&param_1->BoundsMax);
  (this->Bounds).Origin.field0_0x0._s_0.X = local_48._s_0.X;
  (this->Bounds).Origin.field0_0x0._s_0.Y = local_48._s_0.Y;
  (this->Bounds).Origin.field0_0x0._s_0.Z = local_48._s_0.Z;
  (this->Bounds).BoxExtent.field0_0x0._s_0.X = dStack_30;
  (this->Bounds).BoxExtent.field0_0x0._s_0.Y = local_28;
  (this->Bounds).BoxExtent.field0_0x0._s_0.Z = dStack_20;
  (this->Bounds).SphereRadius = local_18;
  return this;
}

// FPCGPointRef @ 14988cc80

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FPCGPointRef * __thiscall
FPCGPointRef::FPCGPointRef(FPCGPointRef *this,FPCGPoint *param_1,TBox<double> *param_2)

{
  double dVar1;
  TMatrix<double> *pTVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  double dVar5;
  double dVar6;
  undefined1 auStack_138 [32];
  TVector<double>_u_0 local_118;
  double local_100;
  double local_f8;
  double local_f0;
  TMatrix<double> local_d8;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStack_138;
  this->Point = param_1;
  pTVar2 = UE::Math::TTransform<double>::ToMatrixWithScale(&param_1->Transform,&local_d8);
  UE::Math::TBox<double>::TransformBy(param_2,(TBox<double> *)&local_118._s_0,pTVar2);
  local_f8 = local_f8 - local_118._s_0.Y;
  local_100 = local_100 - local_118._s_0.X;
  local_f0 = local_f0 - local_118._s_0.Z;
  dVar6 = local_f8 * __real_3fe0000000000000;
  dVar1 = local_100 * __real_3fe0000000000000;
  dVar5 = local_f0 * __real_3fe0000000000000;
  auVar3._0_8_ = dVar1 + local_118._s_0.X;
  auVar3._8_8_ = 0;
  (this->Bounds).Origin.field0_0x0._s_0.X = auVar3._0_8_;
  (this->Bounds).Origin.field0_0x0._s_0.Y = dVar6 + local_118._s_0.Y;
  (this->Bounds).Origin.field0_0x0._s_0.Z = dVar5 + local_118._s_0.Z;
  (this->Bounds).BoxExtent.field0_0x0._s_0.X = dVar1;
  (this->Bounds).BoxExtent.field0_0x0._s_0.Y = dVar6;
  (this->Bounds).BoxExtent.field0_0x0._s_0.Z = dVar5;
  auVar4._8_8_ = 0;
  auVar4._0_8_ = (local_f8 * local_f8 + local_100 * local_100 + local_f0 * local_f0) *
                 __real_3fd0000000000000;
  auVar4 = sqrtpd(auVar3,auVar4);
  (this->Bounds).SphereRadius = auVar4._0_8_;
  return this;
}

