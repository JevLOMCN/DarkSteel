// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RigVM
// Functions: 1

// RayPlaneIntersection<double> @ 14a18a6e0

TVector<double> * __cdecl
FMath::RayPlaneIntersection<double>
          (TVector<double> *__return_storage_ptr__,TVector<double> *param_1,TVector<double> *param_2
          ,TPlane<double> *param_3)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  
  dVar1 = param_3->W;
  dVar2 = (double)param_3->_padding_;
  dVar3 = (double)param_3->_padding_;
  dVar4 = (double)param_3->_padding_;
  dVar5 = ((dVar1 * dVar3 - (param_1->field0_0x0)._s_0.Y) * dVar3 +
           (dVar1 * dVar2 - (param_1->field0_0x0)._s_0.X) * dVar2 +
          (dVar1 * dVar4 - (param_1->field0_0x0)._s_0.Z) * dVar4) /
          ((param_2->field0_0x0)._s_0.Y * dVar3 + (param_2->field0_0x0)._s_0.X * dVar2 +
          (param_2->field0_0x0)._s_0.Z * dVar4);
  dVar1 = (param_2->field0_0x0)._s_0.X;
  dVar2 = (param_2->field0_0x0)._s_0.Y;
  dVar3 = (param_1->field0_0x0)._s_0.X;
  dVar4 = (param_1->field0_0x0)._s_0.Y;
  (__return_storage_ptr__->field0_0x0)._s_0.Z =
       dVar5 * (param_2->field0_0x0)._s_0.Z + (param_1->field0_0x0)._s_0.Z;
  (__return_storage_ptr__->field0_0x0)._s_0.X = dVar5 * dVar1 + dVar3;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar5 * dVar2 + dVar4;
  return __return_storage_ptr__;
}

