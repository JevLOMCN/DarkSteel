// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: DynamicMesh
// Functions: 6

// FBCSplineFilter<2,0> @ 14c8959e0

FBCSplineFilter<2,0> * __thiscall
UE::Geometry::FBCSplineFilter<2,0>::FBCSplineFilter<2,0>(FBCSplineFilter<2,0> *this,float param_1)

{
  float fVar1;
  
  fVar1 = __real_3f800000 / param_1;
  this->Coeff1[0] = 1.1666667;
  this->Coeff1[1] = -1.9999999;
  this->Coeff1[2] = 0.88888896;
  this->Coeff2[0] = -0.3888889;
  this->Coeff2[1] = 2.0;
  this->Coeff2[2] = -3.3333335;
  this->Coeff2[3] = 1.7777779;
  this->InvRadius = fVar1;
  return this;
}

// FBCSplineFilter<0,0> @ 14c895a30

FBCSplineFilter<0,0> * __thiscall
UE::Geometry::FBCSplineFilter<0,0>::FBCSplineFilter<0,0>(FBCSplineFilter<0,0> *this,float param_1)

{
  float fVar1;
  
  fVar1 = __real_3f800000 / param_1;
  this->Coeff1[0] = 0.5;
  this->Coeff1[1] = -1.0;
  this->Coeff1[2] = 0.6666667;
  this->Coeff2[0] = -0.16666667;
  this->Coeff2[1] = 1.0;
  this->Coeff2[2] = -2.0;
  this->Coeff2[3] = 1.3333334;
  this->InvRadius = fVar1;
  return this;
}

// GetWeight @ 14c8fa150

float __thiscall
UE::Geometry::FBCSplineFilter<2,0>::GetWeight(FBCSplineFilter<2,0> *this,TVector2<double> *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  fVar1 = 0.0;
  fVar2 = 0.0;
  fVar3 = (float)((uint)((float)(param_1->field0_0x0)._s_0.X * this->InvRadius) &
                 __xmm_7fffffff7fffffff7fffffff7fffffff);
  fVar4 = fVar3 * fVar3;
  if (__real_3f800000 <= fVar3) {
    if (fVar3 < __real_40000000) {
      fVar2 = fVar4 * fVar3 * this->Coeff2[0] + fVar4 * this->Coeff2[1] +
              fVar3 * this->Coeff2[2] + this->Coeff2[3];
    }
  }
  else {
    fVar2 = fVar4 * fVar3 * this->Coeff1[0] + fVar4 * this->Coeff1[1] + this->Coeff1[2];
  }
  fVar3 = (float)((uint)((float)(param_1->field0_0x0)._s_0.Y * this->InvRadius) &
                 __xmm_7fffffff7fffffff7fffffff7fffffff);
  fVar4 = fVar3 * fVar3;
  if (fVar3 < __real_3f800000) {
    return (fVar4 * fVar3 * this->Coeff1[0] + fVar4 * this->Coeff1[1] + this->Coeff1[2]) * fVar2;
  }
  if (fVar3 < __real_40000000) {
    fVar1 = fVar4 * fVar3 * this->Coeff2[0] + fVar4 * this->Coeff2[1] +
            fVar3 * this->Coeff2[2] + this->Coeff2[3];
  }
  return fVar1 * fVar2;
}

// GetWeight @ 14c8fa240

float __thiscall
UE::Geometry::FBCSplineFilter<0,0>::GetWeight(FBCSplineFilter<0,0> *this,TVector2<double> *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  fVar1 = 0.0;
  fVar2 = 0.0;
  fVar3 = (float)((uint)((float)(param_1->field0_0x0)._s_0.X * this->InvRadius) &
                 __xmm_7fffffff7fffffff7fffffff7fffffff);
  fVar4 = fVar3 * fVar3;
  if (__real_3f800000 <= fVar3) {
    if (fVar3 < __real_40000000) {
      fVar2 = fVar4 * fVar3 * this->Coeff2[0] + fVar4 * this->Coeff2[1] +
              fVar3 * this->Coeff2[2] + this->Coeff2[3];
    }
  }
  else {
    fVar2 = fVar4 * fVar3 * this->Coeff1[0] + fVar4 * this->Coeff1[1] + this->Coeff1[2];
  }
  fVar3 = (float)((uint)((float)(param_1->field0_0x0)._s_0.Y * this->InvRadius) &
                 __xmm_7fffffff7fffffff7fffffff7fffffff);
  fVar4 = fVar3 * fVar3;
  if (fVar3 < __real_3f800000) {
    return (fVar4 * fVar3 * this->Coeff1[0] + fVar4 * this->Coeff1[1] + this->Coeff1[2]) * fVar2;
  }
  if (fVar3 < __real_40000000) {
    fVar1 = fVar4 * fVar3 * this->Coeff2[0] + fVar4 * this->Coeff2[1] +
            fVar3 * this->Coeff2[2] + this->Coeff2[3];
  }
  return fVar1 * fVar2;
}

// IsInFilterRegion @ 14c901f40

bool __thiscall
UE::Geometry::FBCSplineFilter<2,0>::IsInFilterRegion
          (FBCSplineFilter<2,0> *this,TVector2<double> *param_1)

{
  if (((float)((uint)((float)(param_1->field0_0x0)._s_0.X * this->InvRadius) &
              __xmm_7fffffff7fffffff7fffffff7fffffff) < __real_40000000) &&
     ((float)((uint)((float)(param_1->field0_0x0)._s_0.Y * this->InvRadius) &
             __xmm_7fffffff7fffffff7fffffff7fffffff) < __real_40000000)) {
    return true;
  }
  return false;
}

// IsInFilterRegion @ 14c901f90

bool __thiscall
UE::Geometry::FBCSplineFilter<0,0>::IsInFilterRegion
          (FBCSplineFilter<0,0> *this,TVector2<double> *param_1)

{
  if (((float)((uint)((float)(param_1->field0_0x0)._s_0.X * this->InvRadius) &
              __xmm_7fffffff7fffffff7fffffff7fffffff) < __real_40000000) &&
     ((float)((uint)((float)(param_1->field0_0x0)._s_0.Y * this->InvRadius) &
             __xmm_7fffffff7fffffff7fffffff7fffffff) < __real_40000000)) {
    return true;
  }
  return false;
}

