// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 1

// Update @ 1484fe120

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FDefaultWorkingColorSpaceUniformBuffer::Update
          (FDefaultWorkingColorSpaceUniformBuffer *this,FRHICommandListBase *param_1,
          FColorSpace *param_2)

{
  undefined8 uVar1;
  float *pfVar2;
  bool bVar3;
  FColorSpace *pFVar4;
  FColorSpaceTransform *pFVar5;
  TMatrix<float> *pTVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  float *pfVar9;
  longlong lVar10;
  undefined1 auStack_448 [32];
  undefined1 local_428 [8];
  float fStack_420;
  float fStack_41c;
  float local_418;
  float fStack_414;
  float fStack_410;
  float fStack_40c;
  float local_408;
  float fStack_404;
  float fStack_400;
  float fStack_3fc;
  float local_3f8;
  float fStack_3f4;
  float fStack_3f0;
  float fStack_3ec;
  float local_3a8;
  float fStack_3a4;
  float fStack_3a0;
  float fStack_39c;
  float local_398;
  float fStack_394;
  float fStack_390;
  float fStack_38c;
  float local_388;
  float fStack_384;
  float fStack_380;
  float fStack_37c;
  float local_378;
  float fStack_374;
  float fStack_370;
  float fStack_36c;
  float local_368;
  float fStack_364;
  float fStack_360;
  float fStack_35c;
  float local_358;
  float fStack_354;
  float fStack_350;
  float fStack_34c;
  float local_348;
  float fStack_344;
  float fStack_340;
  float fStack_33c;
  float local_338;
  float fStack_334;
  float fStack_330;
  float fStack_32c;
  TMatrix<float> local_328;
  undefined8 local_2e8;
  undefined8 uStack_2e0;
  undefined8 local_2d8;
  undefined8 uStack_2d0;
  undefined8 local_2c8;
  undefined8 uStack_2c0;
  undefined8 local_2b8;
  undefined8 uStack_2b0;
  TMatrix<float> local_2a8;
  undefined8 local_268;
  undefined8 uStack_260;
  undefined8 local_258;
  undefined8 uStack_250;
  undefined8 local_248;
  undefined8 uStack_240;
  undefined8 local_238;
  undefined8 uStack_230;
  uint local_228;
  FColorSpace local_218;
  ulonglong local_c8;
  
  local_c8 = __security_cookie.value ^ (ulonglong)auStack_448;
  local_388 = (float)(param_2->RgbToXYZ).M[0][2];
  local_378 = (float)(param_2->RgbToXYZ).M[0][3];
  local_3a8 = (float)(param_2->RgbToXYZ).M[0][0];
  local_398 = (float)(param_2->RgbToXYZ).M[0][1];
  fStack_3a4 = (float)(param_2->RgbToXYZ).M[1][0];
  fStack_394 = (float)(param_2->RgbToXYZ).M[1][1];
  fStack_3a0 = (float)(param_2->RgbToXYZ).M[2][0];
  fStack_390 = (float)(param_2->RgbToXYZ).M[2][1];
  fStack_384 = (float)(param_2->RgbToXYZ).M[1][2];
  fStack_374 = (float)(param_2->RgbToXYZ).M[1][3];
  fStack_39c = (float)(param_2->RgbToXYZ).M[3][0];
  fStack_38c = (float)(param_2->RgbToXYZ).M[3][1];
  fStack_380 = (float)(param_2->RgbToXYZ).M[2][2];
  fStack_370 = (float)(param_2->RgbToXYZ).M[2][3];
  fStack_37c = (float)(param_2->RgbToXYZ).M[3][2];
  fStack_36c = (float)(param_2->RgbToXYZ).M[3][3];
  local_428._0_4_ = (undefined4)(param_2->XYZToRgb).M[0][0];
  local_418 = (float)(param_2->XYZToRgb).M[0][1];
  local_428._4_4_ = (undefined4)(param_2->XYZToRgb).M[1][0];
  fStack_414 = (float)(param_2->XYZToRgb).M[1][1];
  local_408 = (float)(param_2->XYZToRgb).M[0][2];
  local_3f8 = (float)(param_2->XYZToRgb).M[0][3];
  fStack_420 = (float)(param_2->XYZToRgb).M[2][0];
  fStack_410 = (float)(param_2->XYZToRgb).M[2][1];
  fStack_41c = (float)(param_2->XYZToRgb).M[3][0];
  fStack_40c = (float)(param_2->XYZToRgb).M[3][1];
  fStack_404 = (float)(param_2->XYZToRgb).M[1][2];
  fStack_3f4 = (float)(param_2->XYZToRgb).M[1][3];
  fStack_400 = (float)(param_2->XYZToRgb).M[2][2];
  fStack_3f0 = (float)(param_2->XYZToRgb).M[2][3];
  fStack_3fc = (float)(param_2->XYZToRgb).M[3][2];
  fStack_3ec = (float)(param_2->XYZToRgb).M[3][3];
  local_368 = (float)local_428._0_4_;
  fStack_364 = (float)local_428._4_4_;
  fStack_360 = fStack_420;
  fStack_35c = fStack_41c;
  local_358 = local_418;
  fStack_354 = fStack_414;
  fStack_350 = fStack_410;
  fStack_34c = fStack_40c;
  local_348 = local_408;
  fStack_344 = fStack_404;
  fStack_340 = fStack_400;
  fStack_33c = fStack_3fc;
  local_338 = local_3f8;
  fStack_334 = fStack_3f4;
  fStack_330 = fStack_3f0;
  fStack_32c = fStack_3ec;
  pFVar4 = UE::Color::FColorSpace::FColorSpace(&local_218,ACESAP1);
  pFVar5 = UE::Color::FColorSpaceTransform::FColorSpaceTransform
                     ((FColorSpaceTransform *)local_428,param_2,pFVar4,Bradford);
  local_408 = (float)*(double *)&pFVar5->field_0x10;
  local_3f8 = (float)*(double *)&pFVar5->field_0x18;
  local_428._0_4_ = (undefined4)*(double *)pFVar5;
  local_418 = (float)*(double *)&pFVar5->field_0x8;
  local_428._4_4_ = (undefined4)*(double *)&pFVar5->field_0x20;
  fStack_414 = (float)*(double *)&pFVar5->field_0x28;
  fStack_420 = (float)*(double *)&pFVar5->field_0x40;
  fStack_410 = (float)*(double *)&pFVar5->field_0x48;
  fStack_41c = (float)*(double *)&pFVar5->field_0x60;
  fStack_40c = (float)*(double *)&pFVar5->field_0x68;
  fStack_404 = (float)*(double *)&pFVar5->field_0x30;
  fStack_3f4 = (float)*(double *)&pFVar5->field_0x38;
  fStack_400 = (float)*(double *)&pFVar5->field_0x50;
  fStack_3f0 = (float)*(double *)&pFVar5->field_0x58;
  fStack_3fc = (float)*(double *)&pFVar5->field_0x70;
  fStack_3ec = (float)*(double *)&pFVar5->field_0x78;
  local_328.M[0][0] = (float)local_428._0_4_;
  local_328.M[0][1] = (float)local_428._4_4_;
  local_328.M[0][2] = fStack_420;
  local_328.M[0][3] = fStack_41c;
  local_328.M[1][0] = local_418;
  local_328.M[1][1] = fStack_414;
  local_328.M[1][2] = fStack_410;
  local_328.M[1][3] = fStack_40c;
  local_328.M[2][0] = local_408;
  local_328.M[2][1] = fStack_404;
  local_328.M[2][2] = fStack_400;
  local_328.M[2][3] = fStack_3fc;
  local_328.M[3][0] = local_3f8;
  local_328.M[3][1] = fStack_3f4;
  local_328.M[3][2] = fStack_3f0;
  local_328.M[3][3] = fStack_3ec;
  pTVar6 = UE::Math::TMatrix<float>::Inverse(&local_328,(TMatrix<float> *)local_428);
  local_2e8 = *(undefined8 *)pTVar6->M[0];
  uStack_2e0 = *(undefined8 *)(pTVar6->M[0] + 2);
  local_2d8 = *(undefined8 *)pTVar6->M[1];
  uStack_2d0 = *(undefined8 *)(pTVar6->M[1] + 2);
  local_2c8 = *(undefined8 *)pTVar6->M[2];
  uStack_2c0 = *(undefined8 *)(pTVar6->M[2] + 2);
  local_2b8 = *(undefined8 *)pTVar6->M[3];
  uStack_2b0 = *(undefined8 *)(pTVar6->M[3] + 2);
  pFVar4 = UE::Color::FColorSpace::FColorSpace(&local_218,ACESAP0);
  pFVar5 = UE::Color::FColorSpaceTransform::FColorSpaceTransform
                     ((FColorSpaceTransform *)local_428,param_2,pFVar4,Bradford);
  local_408 = (float)*(double *)&pFVar5->field_0x10;
  local_3f8 = (float)*(double *)&pFVar5->field_0x18;
  local_428._0_4_ = (undefined4)*(double *)pFVar5;
  local_418 = (float)*(double *)&pFVar5->field_0x8;
  local_428._4_4_ = (undefined4)*(double *)&pFVar5->field_0x20;
  fStack_414 = (float)*(double *)&pFVar5->field_0x28;
  fStack_420 = (float)*(double *)&pFVar5->field_0x40;
  fStack_410 = (float)*(double *)&pFVar5->field_0x48;
  fStack_41c = (float)*(double *)&pFVar5->field_0x60;
  fStack_40c = (float)*(double *)&pFVar5->field_0x68;
  fStack_404 = (float)*(double *)&pFVar5->field_0x30;
  fStack_3f4 = (float)*(double *)&pFVar5->field_0x38;
  fStack_400 = (float)*(double *)&pFVar5->field_0x50;
  fStack_3f0 = (float)*(double *)&pFVar5->field_0x58;
  fStack_3fc = (float)*(double *)&pFVar5->field_0x70;
  fStack_3ec = (float)*(double *)&pFVar5->field_0x78;
  local_2a8.M[0][0] = (float)local_428._0_4_;
  local_2a8.M[0][1] = (float)local_428._4_4_;
  local_2a8.M[0][2] = fStack_420;
  local_2a8.M[0][3] = fStack_41c;
  local_2a8.M[1][0] = local_418;
  local_2a8.M[1][1] = fStack_414;
  local_2a8.M[1][2] = fStack_410;
  local_2a8.M[1][3] = fStack_40c;
  local_2a8.M[2][0] = local_408;
  local_2a8.M[2][1] = fStack_404;
  local_2a8.M[2][2] = fStack_400;
  local_2a8.M[2][3] = fStack_3fc;
  local_2a8.M[3][0] = local_3f8;
  local_2a8.M[3][1] = fStack_3f4;
  local_2a8.M[3][2] = fStack_3f0;
  local_2a8.M[3][3] = fStack_3ec;
  pTVar6 = UE::Math::TMatrix<float>::Inverse(&local_2a8,(TMatrix<float> *)local_428);
  local_268 = *(undefined8 *)pTVar6->M[0];
  uStack_260 = *(undefined8 *)(pTVar6->M[0] + 2);
  local_258 = *(undefined8 *)pTVar6->M[1];
  uStack_250 = *(undefined8 *)(pTVar6->M[1] + 2);
  local_248 = *(undefined8 *)pTVar6->M[2];
  uStack_240 = *(undefined8 *)(pTVar6->M[2] + 2);
  local_238 = *(undefined8 *)pTVar6->M[3];
  uStack_230 = *(undefined8 *)(pTVar6->M[3] + 2);
  bVar3 = UE::Color::FColorSpace::IsSRGB(param_2);
  local_228 = (uint)bVar3;
  puVar7 = *(undefined8 **)&this->field_0x30;
  if (puVar7 == (undefined8 *)0x0) {
    puVar7 = FMemory::Malloc(400,0x10);
    *(undefined8 **)&this->field_0x30 = puVar7;
  }
  lVar10 = 3;
  pfVar2 = &local_3a8;
  do {
    pfVar9 = pfVar2;
    puVar8 = puVar7;
    uVar1 = *(undefined8 *)(pfVar9 + 2);
    *puVar8 = *(undefined8 *)pfVar9;
    puVar8[1] = uVar1;
    uVar1 = *(undefined8 *)(pfVar9 + 6);
    puVar8[2] = *(undefined8 *)(pfVar9 + 4);
    puVar8[3] = uVar1;
    uVar1 = *(undefined8 *)(pfVar9 + 10);
    puVar8[4] = *(undefined8 *)(pfVar9 + 8);
    puVar8[5] = uVar1;
    uVar1 = *(undefined8 *)(pfVar9 + 0xe);
    puVar8[6] = *(undefined8 *)(pfVar9 + 0xc);
    puVar8[7] = uVar1;
    uVar1 = *(undefined8 *)(pfVar9 + 0x12);
    puVar8[8] = *(undefined8 *)(pfVar9 + 0x10);
    puVar8[9] = uVar1;
    uVar1 = *(undefined8 *)(pfVar9 + 0x16);
    puVar8[10] = *(undefined8 *)(pfVar9 + 0x14);
    puVar8[0xb] = uVar1;
    uVar1 = *(undefined8 *)(pfVar9 + 0x1a);
    puVar8[0xc] = *(undefined8 *)(pfVar9 + 0x18);
    puVar8[0xd] = uVar1;
    uVar1 = *(undefined8 *)(pfVar9 + 0x1e);
    puVar8[0xe] = *(undefined8 *)(pfVar9 + 0x1c);
    puVar8[0xf] = uVar1;
    lVar10 = lVar10 + -1;
    puVar7 = puVar8 + 0x10;
    pfVar2 = pfVar9 + 0x20;
  } while (lVar10 != 0);
  uVar1 = *(undefined8 *)(pfVar9 + 0x22);
  puVar8[0x10] = *(undefined8 *)(pfVar9 + 0x20);
  puVar8[0x11] = uVar1;
  FRenderResource::UpdateRHI((FRenderResource *)this,param_1);
  return;
}

