// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Slate
// Functions: 1

// GetMaxTabSizeFor @ 14273fa60

TVector2<double> * __cdecl
FDockingConstants::GetMaxTabSizeFor(TVector2<double> *__return_storage_ptr__,ETabRole param_1)

{
  double dVar1;
  TVector2<double> *pTVar2;
  
  pTVar2 = &MaxMinorTabSize;
  if (param_1 == MajorTab) {
    pTVar2 = &MaxMajorTabSize;
  }
  dVar1 = (pTVar2->field0_0x0)._s_0.Y;
  (__return_storage_ptr__->field0_0x0)._s_0.X = (pTVar2->field0_0x0)._s_0.X;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar1;
  return __return_storage_ptr__;
}

