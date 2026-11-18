// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AppFramework
// Functions: 2

// FDeprecateSlateVector2D @ 14305c300

FDeprecateSlateVector2D * __thiscall
FDeprecateSlateVector2D::FDeprecateSlateVector2D
          (FDeprecateSlateVector2D *this,TVector2<float> param_1)

{
  *this = (FDeprecateSlateVector2D)param_1.field0_0x0;
  return this;
}

// TVector2<double> @ 143063760

TVector2<double> * __thiscall
FDeprecateSlateVector2D::operator_UE::Math::TVector2<double>
          (void *this,TVector2<double> *__return_storage_ptr__)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)this;
  (__return_storage_ptr__->field0_0x0)._s_0.X = (double)(float)uVar1;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = (double)(float)((ulonglong)uVar1 >> 0x20);
  return __return_storage_ptr__;
}

