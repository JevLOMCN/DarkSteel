// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 1

// GetParentSpaceRange @ 147a55d60

TInterval1<float> __thiscall
UE::Geometry::Spline::
TMultiSpline<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>::FChildSpline
::GetParentSpaceRange(FChildSpline *this,TInterval1<float> *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float *in_R8;
  float fVar4;
  
  if (this->MappingRangeSpace == Normalized) {
    fVar1 = in_R8[1];
    fVar4 = __real_3f800000 - (this->MappingRange).Max;
    fVar2 = (this->MappingRange).Max;
    fVar3 = *in_R8;
    param_1->Min = (__real_3f800000 - (this->MappingRange).Min) * *in_R8 +
                   fVar1 * (this->MappingRange).Min;
    param_1->Max = fVar4 * fVar3 + fVar1 * fVar2;
    return (TInterval1<float>)param_1;
  }
  if (this->MappingRangeSpace != Parent) {
    param_1->Min = 3.4028235e+38;
    param_1->Max = -3.4028235e+38;
    return (TInterval1<float>)param_1;
  }
  *param_1 = this->MappingRange;
  return (TInterval1<float>)param_1;
}

