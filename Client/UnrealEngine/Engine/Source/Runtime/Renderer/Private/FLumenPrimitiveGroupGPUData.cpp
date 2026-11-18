// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 1

// FillData @ 144c41210

void __cdecl
FLumenPrimitiveGroupGPUData::FillData
          (FLumenPrimitiveGroup *param_1,FLumenPrimitiveGroupCullingInfo *param_2,
          TVector4<float> *param_3)

{
  byte bVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  
  if (param_2 == (FLumenPrimitiveGroupCullingInfo *)0x0) {
    *(undefined8 *)&param_3->field0_0x0 = 0;
    *(undefined8 *)((longlong)&param_3->field0_0x0 + 8) = 0;
    *(undefined8 *)&param_3[1].field0_0x0 = 0;
    param_3[1].field0_0x0._s_0.Z = 0.0;
  }
  else {
    fVar2 = (param_2->WorldSpaceBoundingBox).Max.field0_0x0._s_0.X;
    fVar3 = (param_2->WorldSpaceBoundingBox).Max.field0_0x0._s_0.Y;
    fVar4 = (param_2->WorldSpaceBoundingBox).Max.field0_0x0._s_0.Z;
    fVar5 = (fVar2 - (param_2->WorldSpaceBoundingBox).Min.field0_0x0._s_0.X) * __real_3f000000;
    fVar6 = (fVar3 - (param_2->WorldSpaceBoundingBox).Min.field0_0x0._s_0.Y) * __real_3f000000;
    fVar7 = (fVar4 - (param_2->WorldSpaceBoundingBox).Min.field0_0x0._s_0.Z) * __real_3f000000;
    fVar3 = (fVar3 + (param_2->WorldSpaceBoundingBox).Min.field0_0x0._s_0.Y) * __real_3f000000;
    fVar4 = (fVar4 + (param_2->WorldSpaceBoundingBox).Min.field0_0x0._s_0.Z) * __real_3f000000;
    (param_3->field0_0x0)._s_0.X =
         (fVar2 + (param_2->WorldSpaceBoundingBox).Min.field0_0x0._s_0.X) * __real_3f000000;
    (param_3->field0_0x0)._s_0.Y = fVar3;
    (param_3->field0_0x0)._s_0.Z = fVar4;
    (param_3->field0_0x0)._s_0.W = 1.0;
    param_3[1].field0_0x0._s_0.X = fVar5;
    param_3[1].field0_0x0._s_0.Y = fVar6;
    param_3[1].field0_0x0._s_0.Z = fVar7;
    param_3[1].field0_0x0._s_0.W = 1.0;
  }
  fVar2 = -NAN;
  if (-1 < param_1->MeshCardsIndex) {
    fVar2 = (float)param_1->MeshCardsIndex;
  }
  bVar1 = param_1->field_0x38;
  (param_3->field0_0x0)._s_0.W = fVar2;
  param_3[1].field0_0x0._s_0.W = (float)(bVar1 & 0xf);
  return;
}

