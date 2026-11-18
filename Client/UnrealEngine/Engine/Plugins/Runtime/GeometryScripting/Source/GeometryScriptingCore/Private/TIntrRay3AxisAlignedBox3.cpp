// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryScriptingCore
// Functions: 1

// FindIntersection @ 14ceb9970

bool __cdecl
UE::Geometry::TIntrRay3AxisAlignedBox3<double>::FindIntersection
          (TVector<double> *param_1,TVector<double> *param_2,TAxisAlignedBox3<double> *param_3,
          double *param_4)

{
  EIntersectionType local_58;
  int local_54;
  double local_50;
  double local_48;
  TVector<double> local_40;
  TVector<double> local_28;
  
  local_48 = __real_7fefffffffffffff;
  local_50 = 0.0;
  local_58 = Empty;
  DoClipping(&local_50,&local_48,param_1,param_2,param_3,true,&local_54,&local_28,&local_40,
             &local_58);
  if (local_58 != Empty) {
    *param_4 = local_50;
    return true;
  }
  *param_4 = 1.7976931348623157e+308;
  return false;
}

