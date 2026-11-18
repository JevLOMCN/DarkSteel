// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: InteractiveToolsFramework
// Functions: 1

// RayPlaneIntersectionParam<double> @ 149638430

double __cdecl
FMath::RayPlaneIntersectionParam<double>
          (TVector<double> *param_1,TVector<double> *param_2,TPlane<double> *param_3)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  
  dVar1 = param_3->W;
  dVar2 = (double)param_3->_padding_;
  dVar3 = (double)param_3->_padding_;
  dVar4 = (double)param_3->_padding_;
  return ((dVar1 * dVar3 - (param_1->field0_0x0)._s_0.Y) * dVar3 +
          (dVar1 * dVar2 - (param_1->field0_0x0)._s_0.X) * dVar2 +
         (dVar1 * dVar4 - (param_1->field0_0x0)._s_0.Z) * dVar4) /
         (dVar3 * (param_2->field0_0x0)._s_0.Y + dVar2 * (param_2->field0_0x0)._s_0.X +
         dVar4 * (param_2->field0_0x0)._s_0.Z);
}

