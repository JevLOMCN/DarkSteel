// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 1

// FillData @ 144d797e0

void __cdecl
FLumenCardPageGPUData::FillData
          (FLumenPageTableEntry *param_1,uint param_2,TIntPoint<int> param_3,
          TVector2<double> *param_4,TVector4<float> *param_5)

{
  double dVar1;
  double dVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float local_res18;
  float fStackX_1c;
  
  iVar3 = *(int *)&(param_1->PhysicalAtlasRect).field0_0x0;
  iVar4 = *(int *)((longlong)&(param_1->PhysicalAtlasRect).field0_0x0 + 0xc);
  iVar5 = *(int *)((longlong)&(param_1->PhysicalAtlasRect).field0_0x0 + 4);
  uVar7 = *(undefined8 *)&(param_1->CardUVRect).field0_0x0;
  uVar8 = *(undefined8 *)((longlong)&(param_1->CardUVRect).field0_0x0 + 8);
  iVar6 = *(int *)((longlong)&(param_1->PhysicalAtlasRect).field0_0x0 + 8);
  dVar1 = (param_4->field0_0x0)._s_0.X;
  dVar2 = (param_4->field0_0x0)._s_0.X;
  fVar11 = (float)(*(int *)((longlong)&(param_1->PhysicalAtlasRect).field0_0x0 + 8) - iVar3);
  (param_5->field0_0x0)._s_0.X = (float)param_1->CardIndex;
  (param_5->field0_0x0)._s_0.Y = (float)param_2;
  *(undefined8 *)&param_5[1].field0_0x0 = uVar7;
  *(undefined8 *)((longlong)&param_5[1].field0_0x0 + 8) = uVar8;
  param_5[2].field0_0x0._s_0.X = (float)((double)iVar3 * dVar2);
  fVar10 = (float)(iVar4 - iVar5);
  param_5[2].field0_0x0._s_0.Y = (float)((double)iVar5 * (param_4->field0_0x0)._s_0.Y);
  dVar2 = (param_4->field0_0x0)._s_0.Y;
  fVar9 = 0.0;
  (param_5->field0_0x0)._s_0.Z = fVar11;
  param_5[2].field0_0x0._s_0.Z = (float)((double)iVar6 * dVar1);
  (param_5->field0_0x0)._s_0.W = fVar10;
  param_5[2].field0_0x0._s_0.W = (float)((double)iVar4 * dVar2);
  if (fVar11 <= 0.0) {
    fVar11 = 0.0;
  }
  else {
    fVar11 = ((param_1->CardUVRect).field0_0x0._s_0.Z - (param_1->CardUVRect).field0_0x0._s_0.X) /
             fVar11;
  }
  param_5[3].field0_0x0._s_0.X = fVar11;
  if (0.0 < fVar10) {
    fVar9 = ((param_1->CardUVRect).field0_0x0._s_0.W - (param_1->CardUVRect).field0_0x0._s_0.Y) /
            fVar10;
  }
  local_res18 = param_3.field0_0x0._0_4_;
  fStackX_1c = param_3.field0_0x0._4_4_;
  param_5[3].field0_0x0._s_0.Z = local_res18;
  param_5[3].field0_0x0._s_0.W = fStackX_1c;
  *(undefined8 *)&param_5[4].field0_0x0 = 0;
  *(undefined8 *)((longlong)&param_5[4].field0_0x0 + 8) = 0;
  param_5[3].field0_0x0._s_0.Y = fVar9;
  return;
}

