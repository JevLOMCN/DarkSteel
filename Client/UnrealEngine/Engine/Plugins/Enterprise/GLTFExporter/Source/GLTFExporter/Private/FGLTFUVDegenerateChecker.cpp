// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GLTFExporter
// Functions: 3

// Convert @ 14e5ec880

float __thiscall
FGLTFUVDegenerateChecker::Convert
          (FGLTFUVDegenerateChecker *this,FMeshDescription *param_1,
          FMeshAttributesArray<int> *param_2,int param_3)

{
  if (*(void **)param_2 != (void *)0x0) {
    FMemory::Free(*(void **)param_2);
  }
  return __real_bf800000;
}

// IsDegenerateTriangle @ 14e6018f0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __cdecl
FGLTFUVDegenerateChecker::IsDegenerateTriangle
          (TStaticArray<UE::Math::TVector2<float>,3,4294967295> *param_1)

{
  return (float)((uint)((param_1->Elements[2].field0_0x0._s_0.Y -
                        param_1->Elements[0].field0_0x0._s_0.Y) *
                        (param_1->Elements[1].field0_0x0._s_0.X -
                        param_1->Elements[0].field0_0x0._s_0.X) -
                       (param_1->Elements[1].field0_0x0._s_0.Y -
                       param_1->Elements[0].field0_0x0._s_0.Y) *
                       (param_1->Elements[2].field0_0x0._s_0.X -
                       param_1->Elements[0].field0_0x0._s_0.X)) &
                __xmm_7fffffff7fffffff7fffffff7fffffff) < ___real_32abcc77;
}

// IsDegenerateTriangle @ 14e601940

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __cdecl
FGLTFUVDegenerateChecker::IsDegenerateTriangle
          (TStaticArray<UE::Math::TVector<float>,3,4294967295> *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  
  fVar4 = param_1->Elements[2].field0_0x0._s_0.X - param_1->Elements[0].field0_0x0._s_0.X;
  fVar2 = param_1->Elements[2].field0_0x0._s_0.Z - param_1->Elements[0].field0_0x0._s_0.Z;
  fVar3 = param_1->Elements[1].field0_0x0._s_0.Z - param_1->Elements[0].field0_0x0._s_0.Z;
  fVar5 = param_1->Elements[1].field0_0x0._s_0.Y - param_1->Elements[0].field0_0x0._s_0.Y;
  fVar6 = param_1->Elements[1].field0_0x0._s_0.X - param_1->Elements[0].field0_0x0._s_0.X;
  fVar7 = param_1->Elements[2].field0_0x0._s_0.Y - param_1->Elements[0].field0_0x0._s_0.Y;
  fVar1 = fVar4 * fVar3 - fVar2 * fVar6;
  fVar4 = fVar7 * fVar6 - fVar4 * fVar5;
  fVar2 = fVar2 * fVar5 - fVar7 * fVar3;
  return fVar2 * fVar2 + fVar1 * fVar1 + fVar4 * fVar4 < ___real_25669595;
}

