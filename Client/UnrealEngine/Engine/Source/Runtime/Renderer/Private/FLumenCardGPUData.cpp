// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 1

// FillData @ 144c408a0

void __cdecl
FLumenCardGPUData::FillData
          (FLumenCard *param_1,FLumenPrimitiveGroup *param_2,TVector4<float> *param_3)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  byte bVar6;
  byte bVar7;
  byte bVar8;
  code *pcVar9;
  bool bVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  ulonglong uVar15;
  float fVar16;
  uint uVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  TIntPoint<int>_u_0 local_80 [11];
  
  dVar1 = (param_1->WorldOBB).Origin.field0_0x0._s_0.X;
  dVar2 = (param_1->WorldOBB).Origin.field0_0x0._s_0.Y;
  uVar14 = 0;
  fVar22 = (float)dVar1;
  fVar20 = (float)dVar2;
  dVar3 = (param_1->WorldOBB).Origin.field0_0x0._s_0.Z;
  fVar19 = (float)dVar3;
  (param_3->field0_0x0)._s_0.X = fVar22;
  (param_3->field0_0x0)._s_0.Y = fVar20;
  (param_3->field0_0x0)._s_0.Z = fVar19;
  (param_3->field0_0x0)._s_0.W = 1.0;
  dVar4 = (param_1->WorldOBB).AxisY.field0_0x0._s_0.X;
  dVar5 = (param_1->WorldOBB).AxisZ.field0_0x0._s_0.X;
  param_3[1].field0_0x0._s_0.X = (float)(param_1->WorldOBB).AxisX.field0_0x0._s_0.X;
  param_3[1].field0_0x0._s_0.Y = (float)dVar4;
  param_3[1].field0_0x0._s_0.Z = (float)dVar5;
  param_3[1].field0_0x0._s_0.W = (float)(dVar1 - (double)fVar22);
  dVar1 = (param_1->WorldOBB).AxisY.field0_0x0._s_0.Y;
  dVar4 = (param_1->WorldOBB).AxisZ.field0_0x0._s_0.Y;
  param_3[2].field0_0x0._s_0.X = (float)(param_1->WorldOBB).AxisX.field0_0x0._s_0.Y;
  param_3[2].field0_0x0._s_0.Y = (float)dVar1;
  param_3[2].field0_0x0._s_0.Z = (float)dVar4;
  param_3[2].field0_0x0._s_0.W = (float)(dVar2 - (double)fVar20);
  dVar1 = (param_1->WorldOBB).AxisY.field0_0x0._s_0.Z;
  dVar2 = (param_1->WorldOBB).AxisZ.field0_0x0._s_0.Z;
  param_3[3].field0_0x0._s_0.X = (float)(param_1->WorldOBB).AxisX.field0_0x0._s_0.Z;
  param_3[3].field0_0x0._s_0.Y = (float)dVar1;
  param_3[3].field0_0x0._s_0.Z = (float)dVar2;
  param_3[3].field0_0x0._s_0.W = (float)(dVar3 - (double)fVar19);
  fVar20 = __real_3f000000;
  fVar19 = param_1->CardAspect;
  if (fVar19 < __real_3f800000) {
    uVar11 = (int)ROUND(__real_40000000 / fVar19 + __real_3f000000) >> 1;
    uVar12 = 0x1f;
    if (uVar11 != 0) {
      for (; uVar11 >> uVar12 == 0; uVar12 = uVar12 - 1) {
      }
    }
    uVar14 = 0;
    uVar17 = 0;
    if (uVar11 != 0) {
      uVar14 = uVar12;
      uVar17 = 0;
    }
  }
  else {
    uVar11 = (int)ROUND(fVar19 + fVar19 + __real_3f000000) >> 1;
    uVar12 = 0x1f;
    if (uVar11 != 0) {
      for (; uVar11 >> uVar12 == 0; uVar12 = uVar12 - 1) {
      }
    }
    uVar17 = 0;
    if (uVar11 != 0) {
      uVar17 = uVar12;
    }
  }
  uVar12 = 8;
  if ((int)uVar14 < 8) {
    uVar12 = uVar14;
  }
  uVar14 = 0;
  if (0 < (int)uVar12) {
    uVar14 = uVar12;
  }
  uVar12 = 8;
  if ((int)uVar17 < 8) {
    uVar12 = uVar17;
  }
  uVar11 = 0;
  if (0 < (int)uVar12) {
    uVar11 = uVar12;
  }
  if (param_2 == (FLumenPrimitiveGroup *)0x0) {
    uVar12 = 0xff;
  }
  else {
    uVar12 = (uint)param_2->LightingChannelMask;
  }
  bVar6 = param_1->AxisAlignedDirectionIndex;
  bVar7 = param_1->MaxAllocatedResLevel;
  bVar8 = param_1->MinAllocatedResLevel;
  uVar15 = (ulonglong)bVar8;
  if ((param_1->bVisible == false) || (uVar17 = 0x1000000, bVar7 < bVar8)) {
    uVar17 = 0;
  }
  if ((param_1->bHeightfield == false) || (uVar13 = 0x2000000, bVar7 < bVar8)) {
    uVar13 = 0;
  }
  dVar1 = (param_1->WorldOBB).Extent.field0_0x0._s_0.Y;
  dVar2 = (param_1->WorldOBB).Extent.field0_0x0._s_0.Z;
  fVar19 = 0.0;
  param_3[4].field0_0x0._s_0.X = (float)(param_1->WorldOBB).Extent.field0_0x0._s_0.X;
  param_3[4].field0_0x0._s_0.Y = (float)dVar1;
  param_3[4].field0_0x0._s_0.Z = (float)dVar2;
  param_3[4].field0_0x0._s_0.W =
       (float)(uVar17 | ((bVar6 & 0xf) << 8 | uVar11 & 0xff) << 8 | (uVar12 & 0xf) << 0x14 |
                        uVar14 & 0xff | uVar13);
  fVar22 = 0.0;
  if (bVar8 <= bVar7) {
    if (((bVar8 < 3) || (8 < uVar15 - 3)) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("MipIndex >= 0 && MipIndex < (sizeof(UEArrayCountHelper(SurfaceMipMaps)) - 1)"
                            ,
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\Lumen\\LumenSceneData.h"
                            ,0x162,L""), bVar10)) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
    fVar22 = 0.0;
    if (param_1->SurfaceMipMaps[uVar15 - 3].PageTableSpanSize != 0) {
      fVar19 = (float)param_1->SurfaceMipMaps[uVar15 - 3].PageTableSpanOffset;
      fVar22 = (float)((uint)param_1->SurfaceMipMaps[uVar15 - 3].SizeInPagesY << 0x10 |
                      (uint)param_1->SurfaceMipMaps[uVar15 - 3].SizeInPagesX);
    }
  }
  bVar6 = param_1->MaxAllocatedResLevel;
  fVar16 = 0.0;
  fVar18 = 0.0;
  if (param_1->MinAllocatedResLevel <= bVar6) {
    uVar15 = (ulonglong)bVar6;
    if (((bVar6 < 3) || (8 < uVar15 - 3)) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("MipIndex >= 0 && MipIndex < (sizeof(UEArrayCountHelper(SurfaceMipMaps)) - 1)"
                            ,
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\Lumen\\LumenSceneData.h"
                            ,0x162,L""), bVar10)) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
    fVar16 = 0.0;
    fVar18 = 0.0;
    if (param_1->SurfaceMipMaps[uVar15 - 3].PageTableSpanSize != 0) {
      fVar18 = (float)param_1->SurfaceMipMaps[uVar15 - 3].PageTableSpanOffset;
      fVar16 = (float)((uint)param_1->SurfaceMipMaps[uVar15 - 3].SizeInPagesY << 0x10 |
                      (uint)param_1->SurfaceMipMaps[uVar15 - 3].SizeInPagesX);
    }
  }
  fVar21 = __real_42c80000;
  bVar6 = param_1->MinAllocatedResLevel;
  param_3[5].field0_0x0._s_0.X = fVar22;
  param_3[5].field0_0x0._s_0.Y = fVar19;
  param_3[5].field0_0x0._s_0.Z = fVar16;
  param_3[5].field0_0x0._s_0.W = fVar18;
  if (bVar6 <= param_1->MaxAllocatedResLevel) {
    FLumenCard::GetMipMapDesc(param_1,(uint)bVar6,(FLumenMipMapDesc *)&local_80[0]._s_0);
    fVar21 = ((param_1->MeshCardsOBB).Extent.field0_0x0._s_0.Y / (float)(int)local_80[0]._4_4_ +
             (param_1->MeshCardsOBB).Extent.field0_0x0._s_0.X / (float)(int)local_80[0]._0_4_) *
             fVar20;
  }
  fVar19 = (param_1->MeshCardsOBB).Origin.field0_0x0._s_0.X;
  fVar20 = (param_1->MeshCardsOBB).AxisZ.field0_0x0._s_0.X;
  fVar22 = (param_1->MeshCardsOBB).AxisY.field0_0x0._s_0.X;
  param_3[6].field0_0x0._s_0.X = (param_1->MeshCardsOBB).AxisX.field0_0x0._s_0.X;
  param_3[6].field0_0x0._s_0.Y = fVar22;
  param_3[6].field0_0x0._s_0.Z = fVar20;
  param_3[6].field0_0x0._s_0.W = fVar19;
  fVar19 = (param_1->MeshCardsOBB).AxisZ.field0_0x0._s_0.Y;
  fVar20 = (param_1->MeshCardsOBB).AxisY.field0_0x0._s_0.Y;
  fVar22 = (param_1->MeshCardsOBB).Origin.field0_0x0._s_0.Y;
  param_3[7].field0_0x0._s_0.X = (param_1->MeshCardsOBB).AxisX.field0_0x0._s_0.Y;
  param_3[7].field0_0x0._s_0.Y = fVar20;
  param_3[7].field0_0x0._s_0.Z = fVar19;
  param_3[7].field0_0x0._s_0.W = fVar22;
  fVar19 = (param_1->MeshCardsOBB).AxisZ.field0_0x0._s_0.Z;
  fVar20 = (param_1->MeshCardsOBB).AxisY.field0_0x0._s_0.Z;
  fVar22 = (param_1->MeshCardsOBB).Origin.field0_0x0._s_0.Z;
  param_3[8].field0_0x0._s_0.X = (param_1->MeshCardsOBB).AxisX.field0_0x0._s_0.Z;
  param_3[8].field0_0x0._s_0.Y = fVar20;
  param_3[8].field0_0x0._s_0.Z = fVar19;
  param_3[8].field0_0x0._s_0.W = fVar22;
  fVar19 = (param_1->MeshCardsOBB).Extent.field0_0x0._s_0.Y;
  fVar20 = (param_1->MeshCardsOBB).Extent.field0_0x0._s_0.Z;
  param_3[9].field0_0x0._s_0.X = (param_1->MeshCardsOBB).Extent.field0_0x0._s_0.X;
  param_3[9].field0_0x0._s_0.Y = fVar19;
  param_3[9].field0_0x0._s_0.Z = fVar20;
  param_3[9].field0_0x0._s_0.W = fVar21;
  return;
}

