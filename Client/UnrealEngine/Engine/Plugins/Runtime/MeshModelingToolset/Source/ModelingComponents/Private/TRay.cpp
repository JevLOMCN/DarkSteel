// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ModelingComponents
// Functions: 1

// ClosestPoint @ 14cb7a8d0

TVector<double> * __thiscall
UE::Math::TRay<double>::ClosestPoint
          (TRay<double> *this,TVector<double> *__return_storage_ptr__,TVector<double> *param_1)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  
  dVar1 = (this->Direction).field0_0x0._s_0.X;
  dVar2 = (this->Direction).field0_0x0._s_0.Y;
  dVar3 = (this->Direction).field0_0x0._s_0.Z;
  dVar6 = ((param_1->field0_0x0)._s_0.Y - (this->Origin).field0_0x0._s_0.Y) * dVar2 +
          ((param_1->field0_0x0)._s_0.X - (this->Origin).field0_0x0._s_0.X) * dVar1 +
          ((param_1->field0_0x0)._s_0.Z - (this->Origin).field0_0x0._s_0.Z) * dVar3;
  if (dVar6 < 0.0) {
    dVar2 = (this->Origin).field0_0x0._s_0.Y;
    dVar1 = (this->Origin).field0_0x0._s_0.Z;
    (__return_storage_ptr__->field0_0x0)._s_0.X = (this->Origin).field0_0x0._s_0.X;
    (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar2;
    (__return_storage_ptr__->field0_0x0)._s_0.Z = dVar1;
    return __return_storage_ptr__;
  }
  dVar4 = (this->Origin).field0_0x0._s_0.Y;
  dVar5 = (this->Origin).field0_0x0._s_0.Z;
  (__return_storage_ptr__->field0_0x0)._s_0.X = dVar1 * dVar6 + (this->Origin).field0_0x0._s_0.X;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar2 * dVar6 + dVar4;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = dVar3 * dVar6 + dVar5;
  return __return_storage_ptr__;
}

