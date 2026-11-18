// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MuR
// Functions: 2

// RayPlaneIntersection<float> @ 14a9649c0

TVector<float> * __cdecl
FMath::RayPlaneIntersection<float>
          (TVector<float> *__return_storage_ptr__,TVector<float> *param_1,TVector<float> *param_2,
          TPlane<float> *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  fVar1 = param_3->W;
  fVar2 = *(float *)&param_3->_padding_;
  fVar3 = *(float *)((longlong)&param_3->_padding_ + 4);
  fVar4 = (float)param_3->_padding_;
  fVar5 = ((fVar1 * fVar3 - (param_1->field0_0x0)._s_0.Y) * fVar3 +
           (fVar1 * fVar2 - (param_1->field0_0x0)._s_0.X) * fVar2 +
          (fVar1 * fVar4 - (param_1->field0_0x0)._s_0.Z) * fVar4) /
          ((param_2->field0_0x0)._s_0.Y * fVar3 + (param_2->field0_0x0)._s_0.X * fVar2 +
          (param_2->field0_0x0)._s_0.Z * fVar4);
  fVar1 = (param_2->field0_0x0)._s_0.X;
  fVar2 = (param_2->field0_0x0)._s_0.Y;
  fVar3 = (param_1->field0_0x0)._s_0.X;
  fVar4 = (param_1->field0_0x0)._s_0.Y;
  (__return_storage_ptr__->field0_0x0)._s_0.Z =
       fVar5 * (param_2->field0_0x0)._s_0.Z + (param_1->field0_0x0)._s_0.Z;
  (__return_storage_ptr__->field0_0x0)._s_0.X = fVar5 * fVar1 + fVar3;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = fVar5 * fVar2 + fVar4;
  return __return_storage_ptr__;
}

// RayPlaneIntersectionParam<float> @ 14a964a90

float __cdecl
FMath::RayPlaneIntersectionParam<float>
          (TVector<float> *param_1,TVector<float> *param_2,TPlane<float> *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  fVar1 = param_3->W;
  fVar2 = *(float *)&param_3->_padding_;
  fVar3 = *(float *)((longlong)&param_3->_padding_ + 4);
  fVar4 = (float)param_3->_padding_;
  return ((fVar1 * fVar3 - (param_1->field0_0x0)._s_0.Y) * fVar3 +
          (fVar1 * fVar2 - (param_1->field0_0x0)._s_0.X) * fVar2 +
         (fVar1 * fVar4 - (param_1->field0_0x0)._s_0.Z) * fVar4) /
         (fVar3 * (param_2->field0_0x0)._s_0.Y + fVar2 * (param_2->field0_0x0)._s_0.X +
         fVar4 * (param_2->field0_0x0)._s_0.Z);
}

