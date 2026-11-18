// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: NavigationSystem
// Functions: 2

// ~INavigationQueryFilterInterface @ 146d78b50

void __thiscall
INavigationQueryFilterInterface::~INavigationQueryFilterInterface
          (INavigationQueryFilterInterface *this)

{
  *this = (INavigationQueryFilterInterface)&___7INavigationQueryFilterInterface__6B_;
  return;
}

// GetAdjustedEndLocation @ 146d995b0

TVector<double> * __thiscall
INavigationQueryFilterInterface::GetAdjustedEndLocation
          (INavigationQueryFilterInterface *this,TVector<double> *__return_storage_ptr__,
          TVector<double> *param_1)

{
  double dVar1;
  double dVar2;
  
  dVar2 = (param_1->field0_0x0)._s_0.Y;
  dVar1 = (param_1->field0_0x0)._s_0.Z;
  (__return_storage_ptr__->field0_0x0)._s_0.X = (param_1->field0_0x0)._s_0.X;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar2;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = dVar1;
  return __return_storage_ptr__;
}

