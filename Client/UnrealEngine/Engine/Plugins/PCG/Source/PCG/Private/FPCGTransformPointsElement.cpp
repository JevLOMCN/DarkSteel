// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 4

// operator() @ 149c56130

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

int __thiscall
`FPCGTransformPointsElement::ExecuteInternal'::__l13::<lambda_1>::operator()
          (void *this,int param_1,int param_2,int param_3)

{
  TMap<__int64,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<__int64,int,0>_> *pTVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  double *pdVar8;
  double *pdVar9;
  double *pdVar10;
  double *pdVar11;
  FPCGMetadataAttribute<UE::Math::TTransform<double>_> *this_00;
  FPCGMetadataAttributeBase *this_01;
  code *pcVar12;
  double dVar13;
  undefined1 auVar14 [16];
  double dVar15;
  undefined1 auVar16 [16];
  double dVar17;
  double dVar18;
  undefined1 auVar19 [12];
  double dVar20;
  float fVar21;
  char cVar22;
  bool bVar23;
  int iVar24;
  uint uVar25;
  uint uVar26;
  longlong *plVar27;
  long64 lVar28;
  longlong lVar29;
  undefined1 (*pauVar30) [16];
  long64 *plVar31;
  uint uVar32;
  uint uVar33;
  undefined1 *puVar34;
  uint uVar35;
  longlong lVar36;
  undefined1 *puVar37;
  int iVar38;
  uint uVar39;
  undefined8 *puVar40;
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  double dVar54;
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  undefined4 uVar57;
  undefined4 uVar58;
  double dVar59;
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  double dVar63;
  undefined4 uVar64;
  undefined4 uVar65;
  undefined4 uVar66;
  undefined4 uVar67;
  undefined4 uVar68;
  undefined4 uVar69;
  undefined4 uVar70;
  undefined4 uVar71;
  undefined4 uVar72;
  undefined4 uVar73;
  undefined4 uVar74;
  undefined4 uVar75;
  undefined4 uVar76;
  undefined4 uVar77;
  undefined4 uVar78;
  undefined4 uVar79;
  undefined4 uVar80;
  undefined4 uVar81;
  undefined1 auStack_6c8 [32];
  undefined1 *local_6a8;
  undefined8 local_6a0;
  longlong local_698;
  longlong local_690;
  undefined8 local_688;
  uint local_678;
  undefined1 local_668 [8];
  double dStack_660;
  longlong local_658;
  undefined8 uStack_650;
  longlong local_648;
  longlong lStack_640;
  int local_638;
  int local_634;
  int local_630;
  longlong local_628;
  double local_620;
  double dStack_618;
  double local_610;
  double local_608;
  double dStack_600;
  double local_5f8;
  longlong local_5f0;
  undefined8 uStack_5e8;
  undefined8 local_5e0;
  longlong local_5d8;
  int local_5d0;
  int local_5cc;
  int local_5c8;
  longlong local_5b8;
  longlong local_5b0 [2];
  undefined4 local_5a0;
  longlong local_598;
  int local_590;
  int local_58c;
  int local_588;
  undefined8 local_578;
  undefined8 uStack_570;
  undefined8 local_568;
  undefined8 uStack_560;
  undefined8 local_558;
  undefined8 uStack_550;
  undefined8 local_548;
  undefined8 uStack_540;
  undefined1 local_538 [16];
  undefined8 local_528;
  undefined8 uStack_520;
  TRotator<double> local_518;
  longlong local_500 [2];
  undefined4 local_4f0;
  TQuat<double> local_4d8;
  undefined1 local_4b8 [16];
  double local_4a8;
  longlong local_498;
  undefined8 uStack_490;
  longlong local_488;
  longlong lStack_480;
  longlong local_478;
  longlong lStack_470;
  longlong local_468;
  longlong lStack_460;
  longlong local_458;
  longlong lStack_450;
  longlong local_448;
  longlong lStack_440;
  longlong local_438;
  longlong lStack_430;
  longlong local_428;
  longlong lStack_420;
  longlong local_418 [2];
  undefined4 local_408;
  double local_3f8;
  double dStack_3f0;
  double local_3e8;
  double dStack_3e0;
  double local_3d8;
  double dStack_3d0;
  double local_3c8;
  double dStack_3c0;
  double local_3b8;
  double dStack_3b0;
  double local_3a8;
  double dStack_3a0;
  undefined4 local_398;
  undefined4 uStack_394;
  undefined4 uStack_390;
  undefined4 uStack_38c;
  undefined8 local_388;
  double local_380;
  double dStack_378;
  double local_370;
  undefined4 local_368;
  undefined4 uStack_364;
  undefined4 uStack_360;
  undefined4 uStack_35c;
  undefined8 local_358;
  undefined1 local_350 [16];
  double local_340;
  double local_338;
  double dStack_330;
  double local_328;
  undefined4 local_320;
  undefined4 uStack_31c;
  undefined4 uStack_318;
  undefined4 uStack_314;
  undefined8 local_310;
  undefined1 local_308 [16];
  double local_2f8;
  undefined1 local_2f0 [24];
  undefined1 local_2d8 [32];
  undefined1 local_2b8 [16];
  double local_2a8;
  double dStack_2a0;
  undefined4 local_298;
  undefined4 uStack_294;
  undefined4 uStack_290;
  undefined4 uStack_28c;
  double local_288;
  double dStack_280;
  undefined1 local_278 [16];
  double local_268;
  double dStack_260;
  TTransform<double> local_258;
  longlong local_1f8;
  int local_1f0;
  int local_1ec;
  int local_1e8;
  undefined1 local_178 [128];
  ulonglong local_f8;
  
  local_f8 = __security_cookie.value ^ (ulonglong)auStack_6c8;
  puVar34 = (undefined1 *)(longlong)param_1;
  local_678 = param_1;
  local_630 = param_3;
  cVar22 = (**(code **)(*(longlong *)**(undefined8 **)this + 0x440))();
  if (cVar22 == '\0') {
    local_6a0 = (undefined1 *)
                (CONCAT44(local_6a0._4_4_,~**(uint **)((longlong)this + 0x10)) & 0xffffffff000000ff)
    ;
    local_6a8 = (undefined1 *)CONCAT44(local_6a8._4_4_,param_3);
    (**(code **)(*(longlong *)**(undefined8 **)((longlong)this + 8) + 0x628))
              ((longlong *)**(undefined8 **)((longlong)this + 8),**(undefined8 **)this,param_1,
               param_2);
  }
  (**(code **)(*(longlong *)**(undefined8 **)((longlong)this + 8) + 0x500))
            ((longlong *)**(undefined8 **)((longlong)this + 8),&local_1f8);
  (**(code **)(*(longlong *)**(undefined8 **)((longlong)this + 8) + 0x530))
            ((longlong *)**(undefined8 **)((longlong)this + 8),&local_598);
  (**(code **)(*(longlong *)**(undefined8 **)((longlong)this + 8) + 0x538))
            ((longlong *)**(undefined8 **)((longlong)this + 8),&local_5d8);
  if (**(char **)((longlong)this + 0x18) == '\0') {
    plVar27 = (longlong *)
              (**(code **)(*(longlong *)**(undefined8 **)this + 0x4c0))
                        ((longlong *)**(undefined8 **)this,local_178);
  }
  else {
    plVar27 = local_418;
    local_418[0] = 0;
    local_418[1] = 0;
    local_408 = 0;
    local_3f8 = (double)GlobalVectorConstants::Float0001.m128_f32[0];
    dStack_3f0 = (double)GlobalVectorConstants::Float0001.m128_f32[1];
    local_3e8 = (double)GlobalVectorConstants::Float0001.m128_f32[2];
    dStack_3e0 = (double)GlobalVectorConstants::Float0001.m128_f32[3];
    local_3d8 = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
    dStack_3d0 = (double)GlobalVectorConstants::FloatZero.m128_f32[1];
    local_3c8 = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
    dStack_3c0 = (double)GlobalVectorConstants::FloatZero.m128_f32[3];
    local_3b8 = (double)GlobalVectorConstants::Float1110.m128_f32[0];
    dStack_3b0 = (double)GlobalVectorConstants::Float1110.m128_f32[1];
    local_3a8 = (double)GlobalVectorConstants::Float1110.m128_f32[2];
    dStack_3a0 = (double)GlobalVectorConstants::Float1110.m128_f32[3];
  }
  local_498 = *plVar27;
  uStack_490 = plVar27[1];
  local_488 = plVar27[2];
  lStack_480 = plVar27[3];
  local_478 = plVar27[4];
  lStack_470 = plVar27[5];
  local_468 = plVar27[6];
  lStack_460 = plVar27[7];
  local_458 = plVar27[8];
  lStack_450 = plVar27[9];
  local_448 = plVar27[10];
  lStack_440 = plVar27[0xb];
  local_438 = plVar27[0xc];
  lStack_430 = plVar27[0xd];
  local_428 = plVar27[0xe];
  lStack_420 = plVar27[0xf];
  if ((**(char **)((longlong)this + 0x18) == '\0') && (**(char **)((longlong)this + 0x20) != '\0'))
  {
    plVar27 = (longlong *)
              (**(code **)(*(longlong *)**(undefined8 **)this + 0x4f0))
                        ((longlong *)**(undefined8 **)this,local_2f0);
  }
  else {
    local_5b0[0] = 0;
    plVar27 = local_5b0;
    local_5b0[1] = 0;
    local_5a0 = 0;
  }
  local_5f0 = *plVar27;
  uStack_5e8 = plVar27[1];
  local_5e0 = plVar27[2];
  if (**(char **)((longlong)this + 0x18) == '\0') {
    local_500[0] = 0;
    plVar27 = local_500;
    local_500[1] = 0;
    local_4f0 = 0;
  }
  else {
    plVar27 = (longlong *)
              (**(code **)(*(longlong *)**(undefined8 **)this + 0x4f8))
                        ((longlong *)**(undefined8 **)this,local_2d8);
  }
  local_658 = *plVar27;
  uStack_650 = plVar27[1];
  local_638 = param_3 + param_1;
  local_648 = plVar27[2];
  lStack_640 = plVar27[3];
  iVar24 = 0;
  if (param_1 < local_638) {
    iVar38 = param_1 - param_2;
    local_628 = (longlong)puVar34 << 4;
    local_634 = local_638 - param_1;
    puVar37 = puVar34;
    do {
      fVar21 = __real_3f800000;
      uVar39 = param_2 + iVar38;
      uVar33 = ~uVar39 >> 0x1f;
      uVar25 = 0;
      if ((int)puVar34 < local_588) {
        uVar25 = uVar33;
      }
      if ((uVar25 == 0) &&
         (local_6a8 = puVar37, local_6a0 = (undefined1 *)(longlong)local_588,
         bVar23 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < NumElements)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Utils\\PCGValueRange.h"
                             ,0x8b,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar23)) {
        pcVar12 = (code *)swi(3);
        iVar24 = (*pcVar12)();
        return iVar24;
      }
      iVar24 = PCGHelpers::ComputeSeed
                         (**(int **)((longlong)this + 0x28),
                          *(int *)((longlong)((int)uVar39 % local_58c) * (longlong)local_590 +
                                  local_598));
      pdVar8 = *(double **)((longlong)this + 0x30);
      uVar25 = iVar24 * 0xbb38435 + 0x3619636b;
      uVar26 = uVar25 * 0xbb38435 + 0x3619636b;
      pdVar9 = *(double **)((longlong)this + 0x38);
      uVar35 = uVar26 * 0xbb38435 + 0x3619636b;
      local_608 = (double)(float)((*pdVar9 - *pdVar8) *
                                  (double)((float)(uVar25 >> 9 | 0x3f800000) - fVar21) + *pdVar8);
      dStack_600 = (double)(float)((pdVar9[1] - pdVar8[1]) *
                                   (double)((float)(uVar26 >> 9 | 0x3f800000) - fVar21) + pdVar8[1])
      ;
      pdVar10 = *(double **)((longlong)this + 0x40);
      uVar25 = uVar35 * 0xbb38435 + 0x3619636b;
      uVar26 = uVar25 * 0xbb38435 + 0x3619636b;
      pdVar11 = *(double **)((longlong)this + 0x48);
      uVar32 = uVar26 * 0xbb38435 + 0x3619636b;
      local_5f8 = (double)(float)((pdVar9[2] - pdVar8[2]) *
                                  (double)((float)(uVar35 >> 9 | 0x3f800000) - fVar21) + pdVar8[2]);
      local_518.Pitch =
           (double)(float)((*pdVar11 - *pdVar10) *
                           (double)((float)(uVar25 >> 9 | 0x3f800000) - fVar21) + *pdVar10);
      local_518.Yaw =
           (double)(float)((pdVar11[1] - pdVar10[1]) *
                           (double)((float)(uVar26 >> 9 | 0x3f800000) - fVar21) + pdVar10[1]);
      local_518.Roll =
           (double)(float)((pdVar11[2] - pdVar10[2]) *
                           (double)((float)(uVar32 >> 9 | 0x3f800000) - fVar21) + pdVar10[2]);
      UE::Math::TRotator<double>::Quaternion(&local_518,&local_4d8);
      pdVar8 = *(double **)((longlong)this + 0x58);
      pdVar9 = *(double **)((longlong)this + 0x60);
      uVar25 = uVar32 * 0xbb38435 + 0x3619636b;
      local_620 = (double)((float)(uVar25 >> 9 | 0x3f800000) - fVar21) * (*pdVar9 - *pdVar8) +
                  *pdVar8;
      local_610 = local_620;
      dStack_618 = local_620;
      if (**(char **)((longlong)this + 0x50) == '\0') {
        uVar25 = uVar25 * 0xbb38435 + 0x3619636b;
        dStack_618 = (pdVar9[1] - pdVar8[1]) * (double)((float)(uVar25 >> 9 | 0x3f800000) - fVar21)
                     + pdVar8[1];
        local_610 = (pdVar9[2] - pdVar8[2]) *
                    (double)((float)(uVar25 * 0xbb38435 + 0x3619636b >> 9 | 0x3f800000) - fVar21) +
                    pdVar8[2];
      }
      local_578 = (double)GlobalVectorConstants::Float0001.m128_f32[0];
      uStack_570 = (double)GlobalVectorConstants::Float0001.m128_f32[1];
      local_568 = (double)GlobalVectorConstants::Float0001.m128_f32[2];
      uStack_560 = (double)GlobalVectorConstants::Float0001.m128_f32[3];
      local_558 = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
      uStack_550 = (double)GlobalVectorConstants::FloatZero.m128_f32[1];
      local_548 = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
      uStack_540 = (double)GlobalVectorConstants::FloatZero.m128_f32[3];
      _local_668 = GlobalVectorConstants::FloatZero;
      local_528 = (double)GlobalVectorConstants::Float1110.m128_f32[2];
      uStack_520 = (double)GlobalVectorConstants::Float1110.m128_f32[3];
      auVar47._0_8_ = (double)GlobalVectorConstants::Float1110.m128_f32[0];
      auVar47._8_8_ = (double)GlobalVectorConstants::Float1110.m128_f32[1];
      local_538 = auVar47;
      if (**(char **)((longlong)this + 0x18) == '\0') {
        uVar25 = 0;
        if ((int)uVar39 < local_1e8) {
          uVar25 = uVar33;
        }
        if ((uVar25 == 0) &&
           (local_6a8 = puVar37, local_6a0 = (undefined1 *)(longlong)local_1e8,
           bVar23 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < NumElements)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Utils\\PCGValueRange.h"
                               ,0x8b,L"Array index out of bounds: %lld from an array of size %lld"),
           bVar23)) {
          pcVar12 = (code *)swi(3);
          iVar24 = (*pcVar12)();
          return iVar24;
        }
        lVar29 = (longlong)((param_2 + iVar38) % local_1ec) * (longlong)local_1f0;
        puVar2 = (undefined4 *)(lVar29 + local_1f8);
        puVar3 = (undefined4 *)(lVar29 + 0x10 + local_1f8);
        puVar4 = (undefined4 *)(lVar29 + 0x20 + local_1f8);
        puVar5 = (undefined4 *)(lVar29 + 0x30 + local_1f8);
        puVar6 = (undefined4 *)(lVar29 + 0x40 + local_1f8);
        puVar7 = (undefined4 *)(lVar29 + 0x50 + local_1f8);
        uVar64 = *puVar4;
        uVar65 = puVar4[1];
        uVar66 = puVar4[2];
        uVar67 = puVar4[3];
        local_538._0_4_ = *puVar6;
        local_538._4_4_ = puVar6[1];
        local_538._8_4_ = puVar6[2];
        local_538._12_4_ = puVar6[3];
        uVar68 = *puVar3;
        uVar69 = puVar3[1];
        uVar70 = puVar3[2];
        uVar71 = puVar3[3];
        uVar72 = *puVar5;
        uVar73 = puVar5[1];
        uVar57 = puVar5[2];
        uVar58 = puVar5[3];
        uVar74 = *puVar7;
        uVar75 = puVar7[1];
        uVar76 = puVar7[2];
        uVar77 = puVar7[3];
        uVar78 = *puVar2;
        uVar79 = puVar2[1];
        uVar80 = puVar2[2];
        uVar81 = puVar2[3];
        _local_668 = GlobalVectorConstants::FloatZero._0_12_;
      }
      else {
        this_00 = (FPCGMetadataAttribute<UE::Math::TTransform<double>_> *)
                  **(undefined8 **)((longlong)this + 0x68);
        uVar25 = 0;
        if ((int)uVar39 < local_5c8) {
          uVar25 = uVar33;
        }
        if ((uVar25 == 0) &&
           (local_6a8 = puVar37, local_6a0 = (undefined1 *)(longlong)local_5c8,
           bVar23 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < NumElements)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Utils\\PCGValueRange.h"
                               ,0x8b,L"Array index out of bounds: %lld from an array of size %lld"),
           bVar23)) {
          pcVar12 = (code *)swi(3);
          iVar24 = (*pcVar12)();
          return iVar24;
        }
        iVar24 = FPCGMetadataAttributeBase::GetValueKey
                           ((FPCGMetadataAttributeBase *)this_00,
                            *(long64 *)
                             ((longlong)((param_2 + iVar38) % local_5cc) * (longlong)local_5d0 +
                             local_5d8));
        FPCGMetadataAttribute<UE::Math::TTransform<double>_>::GetValue(this_00,&local_258,iVar24);
        _local_668 = GlobalVectorConstants::FloatZero._0_12_;
        uVar64 = local_258.Translation.XY.m128d_f64[0]._0_4_;
        uVar65 = local_258.Translation.XY.m128d_f64[0]._4_4_;
        uVar66 = local_258.Translation.XY.m128d_f64[1]._0_4_;
        uVar67 = local_258.Translation.XY.m128d_f64[1]._4_4_;
        local_538._0_4_ = local_258.Scale3D.XY.m128d_f64[0]._0_4_;
        local_538._4_4_ = local_258.Scale3D.XY.m128d_f64[0]._4_4_;
        local_538._8_4_ = local_258.Scale3D.XY.m128d_f64[1]._0_4_;
        local_538._12_4_ = local_258.Scale3D.XY.m128d_f64[1]._4_4_;
        uVar68 = local_258.Rotation.ZW.m128d_f64[0]._0_4_;
        uVar69 = local_258.Rotation.ZW.m128d_f64[0]._4_4_;
        uVar70 = local_258.Rotation.ZW.m128d_f64[1]._0_4_;
        uVar71 = local_258.Rotation.ZW.m128d_f64[1]._4_4_;
        uVar72 = local_258.Translation.ZW.m128d_f64[0]._0_4_;
        uVar73 = local_258.Translation.ZW.m128d_f64[0]._4_4_;
        uVar57 = local_258.Translation.ZW.m128d_f64[1]._0_4_;
        uVar58 = local_258.Translation.ZW.m128d_f64[1]._4_4_;
        uVar74 = local_258.Scale3D.ZW.m128d_f64[0]._0_4_;
        uVar75 = local_258.Scale3D.ZW.m128d_f64[0]._4_4_;
        uVar76 = local_258.Scale3D.ZW.m128d_f64[1]._0_4_;
        uVar77 = local_258.Scale3D.ZW.m128d_f64[1]._4_4_;
        uVar78 = local_258.Rotation.XY.m128d_f64[0]._0_4_;
        uVar79 = local_258.Rotation.XY.m128d_f64[0]._4_4_;
        uVar80 = local_258.Rotation.XY.m128d_f64[1]._0_4_;
        uVar81 = local_258.Rotation.XY.m128d_f64[1]._4_4_;
      }
      local_528 = (double)CONCAT44(uVar75,uVar74);
      uStack_520 = (double)CONCAT44(uVar77,uVar76);
      local_548 = (double)CONCAT44(uVar73,uVar72);
      uStack_540 = (double)CONCAT44(uVar58,uVar57);
      local_558 = (double)CONCAT44(uVar65,uVar64);
      uStack_550 = (double)CONCAT44(uVar67,uVar66);
      local_568 = (double)CONCAT44(uVar69,uVar68);
      uStack_560 = (double)CONCAT44(uVar71,uVar70);
      local_578 = (double)CONCAT44(uVar79,uVar78);
      uStack_570 = (double)CONCAT44(uVar81,uVar80);
      if (**(char **)((longlong)this + 0x70) == '\0') {
        dVar54 = (double)CONCAT44(uVar81,uVar80);
        dVar15 = (double)GlobalVectorConstants::Float1110.m128_f32[0] * local_608;
        dVar59 = (double)GlobalVectorConstants::Float1110.m128_f32[1] * dStack_600;
        uVar57 = (undefined4)((ulonglong)dVar59 >> 0x20);
        auVar55._4_4_ = uVar79;
        auVar55._0_4_ = uVar78;
        auVar55._8_4_ = uVar80;
        auVar55._12_4_ = uVar81;
        auVar60._8_4_ = SUB84(dVar59,0);
        auVar60._0_8_ = dVar15;
        auVar60._12_4_ = uVar57;
        dVar63 = (double)GlobalVectorConstants::Float1110.m128_f32[2] * local_5f8;
        dVar18 = (double)GlobalVectorConstants::Float1110.m128_f32[3] * 0.0;
        auVar41._8_4_ = uVar68;
        auVar41._0_8_ = dVar54;
        auVar41._12_4_ = uVar69;
        local_358 = CONCAT44(uVar73,uVar72);
        auVar46._8_4_ = SUB84(dVar59,0);
        auVar46._0_8_ = dVar15;
        auVar46._12_4_ = uVar57;
        auVar50._8_4_ = SUB84(dVar18,0);
        auVar50._0_8_ = dVar63;
        auVar50._12_4_ = (int)((ulonglong)dVar18 >> 0x20);
        auVar47 = blendpd(auVar46,auVar50,2);
        auVar61._0_8_ = auVar60._8_8_ * (double)CONCAT44(uVar79,uVar78) - dVar54 * dVar15;
        auVar61._8_8_ = dVar63 * (double)CONCAT44(uVar81,uVar80) - auVar41._8_8_ * dVar59;
        auVar56._4_4_ = uVar69;
        auVar56._0_4_ = uVar68;
        auVar56._8_4_ = uVar70;
        auVar56._12_4_ = uVar71;
        auVar56 = blendpd(auVar55,auVar56,2);
        auVar48._0_8_ = auVar47._0_8_ * (double)CONCAT44(uVar69,uVar68) - auVar56._0_8_ * dVar63;
        auVar48._8_8_ = auVar47._8_8_ * (double)CONCAT44(uVar71,uVar70) - auVar56._8_8_ * dVar18;
        auVar47 = blendpd(auVar61,auVar48,2);
        dVar18 = auVar61._8_8_ + auVar61._8_8_;
        dVar13 = auVar48._0_8_ + auVar48._0_8_;
        uVar57 = SUB84(dVar13,0);
        uVar58 = (undefined4)((ulonglong)dVar13 >> 0x20);
        auVar62._0_8_ = auVar47._0_8_ + auVar47._0_8_;
        auVar62._8_8_ = auVar47._8_8_ + auVar47._8_8_;
        auVar52._8_4_ = uVar57;
        auVar52._0_8_ = dVar18;
        auVar52._12_4_ = uVar58;
        auVar42._8_4_ = uVar57;
        auVar42._0_8_ = dVar18;
        auVar42._12_4_ = uVar58;
        auVar49._8_4_ = uVar57;
        auVar49._0_8_ = dVar18;
        auVar49._12_4_ = uVar58;
        auVar50 = blendpd(auVar49,auVar62,2);
        auVar53._0_8_ = auVar52._8_8_ * (double)CONCAT44(uVar79,uVar78) - dVar18 * dVar54;
        auVar53._8_8_ =
             auVar62._0_8_ * (double)CONCAT44(uVar81,uVar80) -
             auVar42._8_8_ * (double)CONCAT44(uVar69,uVar68);
        auVar43._8_4_ = SUB84(auVar62._8_8_,0);
        auVar43._0_8_ = auVar62._0_8_;
        auVar43._12_4_ = (int)((ulonglong)auVar62._8_8_ >> 0x20);
        auVar47._0_8_ =
             auVar50._0_8_ * (double)CONCAT44(uVar69,uVar68) - auVar62._0_8_ * auVar56._0_8_;
        auVar47._8_8_ =
             auVar50._8_8_ * (double)CONCAT44(uVar71,uVar70) - auVar43._8_8_ * auVar56._8_8_;
        auVar44._8_4_ = SUB84(auVar53._8_8_,0);
        auVar44._0_8_ = auVar53._0_8_;
        auVar44._12_4_ = (int)((ulonglong)auVar53._8_8_ >> 0x20);
        dVar18 = dVar18 * (double)CONCAT44(uVar71,uVar70) + dVar15 + auVar44._8_8_ +
                 (double)(float)local_668._0_4_;
        dVar13 = dVar13 * (double)CONCAT44(uVar71,uVar70) + dVar59 + auVar47._0_8_ +
                 (double)(float)local_668._4_4_;
        auVar50 = blendpd(auVar53,auVar47,2);
        local_350._8_4_ = SUB84(dVar13,0);
        local_350._0_8_ = dVar18;
        local_350._12_4_ = (int)((ulonglong)dVar13 >> 0x20);
        local_340 = auVar62._0_8_ * (double)CONCAT44(uVar71,uVar70) + dVar63 + auVar50._0_8_ +
                    (double)dStack_660._0_4_;
        local_668 = (undefined1  [8])((double)CONCAT44(uVar65,uVar64) + dVar18);
        dVar18 = (double)CONCAT44(uVar73,uVar72) + local_340;
        dStack_660 = (double)CONCAT44(uVar67,uVar66) + dVar13;
        local_368 = uVar64;
        uStack_364 = uVar65;
        uStack_360 = uVar66;
        uStack_35c = uVar67;
        local_338 = (double)local_668;
        dStack_330 = dStack_660;
        local_328 = dVar18;
      }
      else {
        local_388 = CONCAT44(uVar73,uVar72);
        local_668 = (undefined1  [8])((double)CONCAT44(uVar65,uVar64) + local_608);
        dVar18 = (double)CONCAT44(uVar73,uVar72) + local_5f8;
        dStack_660 = (double)CONCAT44(uVar67,uVar66) + dStack_600;
        local_398 = uVar64;
        uStack_394 = uVar65;
        uStack_390 = uVar66;
        uStack_38c = uVar67;
        local_380 = (double)local_668;
        dStack_378 = dStack_660;
        local_370 = dVar18;
      }
      local_298 = SUB84(local_668,0);
      uStack_294 = (undefined4)((ulonglong)local_668 >> 0x20);
      uStack_290 = SUB84(dStack_660,0);
      uStack_28c = (undefined4)((ulonglong)dStack_660 >> 0x20);
      dStack_280 = 0.0;
      dVar13 = local_4d8.X;
      dVar15 = local_4d8.Y;
      dVar59 = local_4d8.Z;
      dVar63 = local_4d8.W;
      if (**(char **)((longlong)this + 0x78) == '\0') {
        dVar59 = (double)CONCAT44(uVar69,uVar68);
        auVar47._0_8_ =
             local_4d8.Z * (double)CONCAT44(uVar81,uVar80) *
             GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[0];
        auVar47._8_8_ =
             local_4d8.W * (double)CONCAT44(uVar81,uVar80) *
             GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[1];
        auVar45._8_4_ = uVar68;
        auVar45._0_8_ = dVar59;
        auVar45._12_4_ = uVar69;
        dVar13 = (double)CONCAT44(uVar79,uVar78) * local_4d8.W *
                 GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[0] +
                 local_4d8.X * (double)CONCAT44(uVar71,uVar70) + auVar47._0_8_ +
                 dVar59 * local_4d8.Y *
                 GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[0];
        dVar15 = (double)CONCAT44(uVar79,uVar78) * local_4d8.Z *
                 GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[1] +
                 local_4d8.Y * (double)CONCAT44(uVar71,uVar70) + auVar47._8_8_ +
                 auVar45._8_8_ * local_4d8.X *
                 GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[1];
        dVar59 = (double)CONCAT44(uVar79,uVar78) * local_4d8.Y *
                 GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[0] +
                 local_4d8.Z * (double)CONCAT44(uVar71,uVar70) +
                 local_4d8.X * (double)CONCAT44(uVar81,uVar80) *
                 GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[0] +
                 dVar59 * local_4d8.W *
                 GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[0];
        dVar63 = (double)CONCAT44(uVar79,uVar78) * local_4d8.X *
                 GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[1] +
                 local_4d8.W * (double)CONCAT44(uVar71,uVar70) +
                 local_4d8.Y * (double)CONCAT44(uVar81,uVar80) *
                 GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[1] +
                 (double)CONCAT44(uVar69,uVar68) * local_4d8.Z *
                 GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[1];
      }
      uVar64 = (undefined4)((ulonglong)dVar15 >> 0x20);
      local_2b8._8_4_ = SUB84(dVar15,0);
      local_2b8._0_8_ = dVar13;
      local_2b8._12_4_ = uVar64;
      dVar20 = local_610;
      dVar54 = local_620;
      dVar17 = dStack_618;
      if (**(char **)((longlong)this + 0x80) == '\0') {
        local_310 = CONCAT44(uVar75,uVar74);
        local_2f8 = (double)CONCAT44(uVar75,uVar74) * local_610;
        dVar54 = (double)CONCAT44(local_538._4_4_,local_538._0_4_) * local_620;
        dVar17 = (double)CONCAT44(local_538._12_4_,local_538._8_4_) * dStack_618;
        local_308._8_4_ = SUB84(dVar17,0);
        local_308._0_8_ = dVar54;
        local_308._12_4_ = (int)((ulonglong)dVar17 >> 0x20);
        dVar20 = local_2f8;
        local_320 = local_538._0_4_;
        uStack_31c = local_538._4_4_;
        uStack_318 = local_538._8_4_;
        uStack_314 = local_538._12_4_;
      }
      dStack_260 = 0.0;
      uVar65 = (undefined4)((ulonglong)dVar17 >> 0x20);
      local_278._8_4_ = SUB84(dVar17,0);
      local_278._0_8_ = dVar54;
      local_278._12_4_ = uVar65;
      uVar25 = (uint)~param_2 >> 0x1f;
      local_2a8 = dVar59;
      dStack_2a0 = dVar63;
      local_288 = dVar18;
      local_268 = dVar20;
      if (**(char **)((longlong)this + 0x18) == '\0') {
        uVar33 = 0;
        if (param_2 < (int)local_488) {
          uVar33 = uVar25;
        }
        if (uVar33 == 0) {
          local_6a8 = (undefined1 *)(longlong)param_2;
          local_6a0 = (undefined1 *)(longlong)(int)local_488;
          bVar23 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < NumElements)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Utils\\PCGValueRange.h"
                              ,0x8b,L"Array index out of bounds: %lld from an array of size %lld");
          if (bVar23) {
            pcVar12 = (code *)swi(3);
            iVar24 = (*pcVar12)();
            return iVar24;
          }
        }
        if (param_2 == param_2 % uStack_490._4_4_) {
          pauVar30 = (undefined1 (*) [16])
                     ((longlong)(int)uStack_490 * (longlong)(param_2 % uStack_490._4_4_) + local_498
                     );
        }
        else {
          pauVar30 = (undefined1 (*) [16])&local_478;
        }
        auVar14._8_4_ = SUB84(dVar15,0);
        auVar14._0_8_ = dVar13;
        auVar14._12_4_ = uVar64;
        *pauVar30 = auVar14;
        *(double *)pauVar30[1] = dVar59;
        *(double *)(pauVar30[1] + 8) = dVar63;
        *(undefined1 (*) [8])pauVar30[2] = local_668;
        *(double *)(pauVar30[2] + 8) = dStack_660;
        *(double *)pauVar30[3] = dVar18;
        *(undefined8 *)(pauVar30[3] + 8) = 0;
        auVar16._8_4_ = SUB84(dVar17,0);
        auVar16._0_8_ = dVar54;
        auVar16._12_4_ = uVar65;
        pauVar30[4] = auVar16;
        *(double *)pauVar30[5] = dVar20;
        *(undefined8 *)(pauVar30[5] + 8) = 0;
        if (**(char **)((longlong)this + 0x20) != '\0') {
          local_4b8._8_4_ = uStack_290;
          local_4b8._0_8_ = CONCAT44(uStack_294,local_298);
          local_4b8._12_4_ = uStack_28c;
          auVar19._4_8_ = auVar47._8_8_;
          auVar19._0_4_ = uStack_294;
          auVar51._0_8_ = auVar19._0_8_ << 0x20;
          auVar51._8_4_ = uStack_290;
          auVar51._12_4_ = uStack_28c;
          local_4a8 = local_288;
          iVar24 = PCGHelpers::ComputeSeed
                             ((int)(double)CONCAT44(uStack_294,local_298),(int)auVar51._8_8_,
                              (int)local_288);
          uVar33 = 0;
          if (param_2 < (int)local_5e0) {
            uVar33 = uVar25;
          }
          if (uVar33 == 0) {
            local_6a8 = (undefined1 *)(longlong)param_2;
            local_6a0 = (undefined1 *)(longlong)(int)local_5e0;
            bVar23 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < NumElements)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Utils\\PCGValueRange.h"
                                ,0x8b,L"Array index out of bounds: %lld from an array of size %lld")
            ;
            if (bVar23) {
              pcVar12 = (code *)swi(3);
              iVar24 = (*pcVar12)();
              return iVar24;
            }
          }
          if (param_2 == param_2 % uStack_5e8._4_4_) {
            *(int *)((longlong)(int)uStack_5e8 * (longlong)(param_2 % uStack_5e8._4_4_) + local_5f0)
                 = iVar24;
          }
          else {
            local_5e0 = CONCAT44(iVar24,(int)local_5e0);
          }
        }
      }
      else {
        lVar28 = UPCGMetadata::AddEntryPlaceholder(*(UPCGMetadata **)(**(longlong **)this + 0x38));
        uVar39 = 0;
        if (param_2 < (int)local_648) {
          uVar39 = uVar25;
        }
        if (uVar39 == 0) {
          local_6a8 = (undefined1 *)(longlong)param_2;
          local_6a0 = (undefined1 *)(longlong)(int)local_648;
          bVar23 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < NumElements)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Utils\\PCGValueRange.h"
                              ,0x8b,L"Array index out of bounds: %lld from an array of size %lld");
          if (bVar23) {
            pcVar12 = (code *)swi(3);
            iVar24 = (*pcVar12)();
            return iVar24;
          }
        }
        if (param_2 == param_2 % uStack_650._4_4_) {
          plVar31 = (long64 *)
                    ((longlong)(int)uStack_650 * (longlong)(param_2 % uStack_650._4_4_) + local_658)
          ;
        }
        else {
          plVar31 = &lStack_640;
        }
        *plVar31 = lVar28;
        uVar39 = 0;
        if (param_2 + iVar38 < local_5c8) {
          uVar39 = uVar33;
        }
        if ((uVar39 == 0) &&
           (local_6a8 = puVar37, local_6a0 = (undefined1 *)(longlong)local_5c8,
           bVar23 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < NumElements)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Utils\\PCGValueRange.h"
                               ,0x8b,L"Array index out of bounds: %lld from an array of size %lld"),
           bVar23)) {
          pcVar12 = (code *)swi(3);
          iVar24 = (*pcVar12)();
          return iVar24;
        }
        puVar40 = (undefined8 *)
                  ((longlong)((param_2 + iVar38) % local_5cc) * (longlong)local_5d0 + local_5d8);
        uVar39 = 0;
        if (param_2 < (int)local_648) {
          uVar39 = uVar25;
        }
        if (uVar39 == 0) {
          local_6a8 = (undefined1 *)(longlong)param_2;
          local_6a0 = (undefined1 *)(longlong)(int)local_648;
          bVar23 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < NumElements)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Utils\\PCGValueRange.h"
                              ,0x8b,L"Array index out of bounds: %lld from an array of size %lld");
          if (bVar23) {
            pcVar12 = (code *)swi(3);
            iVar24 = (*pcVar12)();
            return iVar24;
          }
        }
        if (param_2 == param_2 % uStack_650._4_4_) {
          plVar27 = (longlong *)
                    ((longlong)(int)uStack_650 * (longlong)(param_2 % uStack_650._4_4_) + local_658)
          ;
        }
        else {
          plVar27 = &lStack_640;
        }
        local_5b8 = *plVar27;
        plVar27 = *(longlong **)((longlong)this + 0x88);
        local_668 = (undefined1  [8])*puVar40;
        iVar24 = (int)plVar27[1];
        uVar39 = 0;
        if (param_2 + iVar38 < iVar24) {
          uVar39 = uVar33;
        }
        if ((uVar39 == 0) &&
           (local_6a8 = puVar37, local_6a0 = (undefined1 *)(longlong)iVar24,
           bVar23 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar23)) {
          pcVar12 = (code *)swi(3);
          iVar24 = (*pcVar12)();
          return iVar24;
        }
        lVar29 = *plVar27;
        *(longlong *)(local_628 + lVar29) = local_5b8;
        *(undefined1 (*) [8])(local_628 + 8 + lVar29) = local_668;
        this_01 = (FPCGMetadataAttributeBase *)**(undefined8 **)((longlong)this + 0x90);
        uVar33 = 0;
        if (param_2 < (int)local_648) {
          uVar33 = uVar25;
        }
        if (uVar33 == 0) {
          local_6a8 = (undefined1 *)(longlong)param_2;
          local_6a0 = (undefined1 *)(longlong)(int)local_648;
          bVar23 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < NumElements)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Utils\\PCGValueRange.h"
                              ,0x8b,L"Array index out of bounds: %lld from an array of size %lld");
          if (bVar23) {
            pcVar12 = (code *)swi(3);
            iVar24 = (*pcVar12)();
            return iVar24;
          }
        }
        if (param_2 == param_2 % uStack_650._4_4_) {
          plVar27 = (longlong *)
                    ((longlong)(int)uStack_650 * (longlong)(param_2 % uStack_650._4_4_) + local_658)
          ;
        }
        else {
          plVar27 = &lStack_640;
        }
        local_668 = (undefined1  [8])*plVar27;
        if ((*plVar27 == -1) &&
           (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                               ("ItemKey != PCGInvalidEntryKey",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Metadata\\PCGMetadataAttributeTpl.h"
                                ,0x24b,L""), bVar23)) {
          pcVar12 = (code *)swi(3);
          iVar24 = (*pcVar12)();
          return iVar24;
        }
        AcquireSRWLockExclusive((PSRWLOCK)(this_01 + 1));
        pTVar1 = &this_01[1].EntryToValueKeyMap;
        puVar34 = *(undefined1 **)pTVar1;
        if ((puVar34 <= local_2b8) &&
           (lVar29 = (longlong)*(int *)&this_01[1].EntryToValueKeyMap.field_0xc,
           local_2b8 < puVar34 + lVar29 * 0x60)) {
          local_690 = (longlong)*(int *)&this_01[1].EntryToValueKeyMap.field_0x8;
          local_688 = 0x60;
          local_6a8 = local_2b8;
          local_6a0 = puVar34;
          local_698 = lVar29;
          bVar23 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             );
          if (bVar23) {
            pcVar12 = (code *)swi(3);
            iVar24 = (*pcVar12)();
            return iVar24;
          }
        }
        iVar24 = *(int *)&this_01[1].EntryToValueKeyMap.field_0x8;
        puVar34 = &this_01[1].EntryToValueKeyMap.field_0xc;
        if (iVar24 == *(int *)puVar34) {
          iVar24 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x1060,(ForAnyElementType *)pTVar1,(int *)puVar34);
        }
        lVar29 = *(longlong *)pTVar1;
        *(int *)&this_01[1].EntryToValueKeyMap.field_0x8 = iVar24 + 1;
        lVar36 = (longlong)iVar24 * 0x60;
        *(undefined8 *)(lVar29 + lVar36) = local_2b8._0_8_;
        ((undefined8 *)(lVar29 + lVar36))[1] = local_2b8._8_8_;
        pdVar8 = (double *)(lVar29 + lVar36 + 0x10);
        *pdVar8 = local_2a8;
        pdVar8[1] = dStack_2a0;
        puVar40 = (undefined8 *)(lVar29 + lVar36 + 0x20);
        *puVar40 = CONCAT44(uStack_294,local_298);
        puVar40[1] = CONCAT44(uStack_28c,uStack_290);
        pdVar8 = (double *)(lVar29 + lVar36 + 0x30);
        *pdVar8 = local_288;
        pdVar8[1] = dStack_280;
        puVar40 = (undefined8 *)(lVar29 + lVar36 + 0x40);
        *puVar40 = local_278._0_8_;
        puVar40[1] = local_278._8_8_;
        pdVar8 = (double *)(lVar29 + lVar36 + 0x50);
        *pdVar8 = local_268;
        pdVar8[1] = dStack_260;
        lVar29 = this_01[2]._padding_;
        ReleaseSRWLockExclusive((PSRWLOCK)(this_01 + 1));
        FPCGMetadataAttributeBase::SetValueFromValueKey
                  (this_01,(long64)local_668,(int)lVar29 + iVar24,false);
      }
      local_628 = local_628 + 0x10;
      param_2 = param_2 + 1;
      puVar37 = puVar37 + 1;
      local_678 = local_678 + 1;
      puVar34 = (undefined1 *)(ulonglong)local_678;
      param_3 = local_630;
      iVar24 = local_634;
    } while (param_2 + iVar38 < local_638);
  }
  if ((iVar24 != param_3) &&
     (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                         ("NumWritten == Count",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\PCGTransformPoints.cpp"
                          ,0xff,L""), bVar23)) {
    pcVar12 = (code *)swi(3);
    iVar24 = (*pcVar12)();
    return iVar24;
  }
  return iVar24;
}

// ExecuteInternal @ 149c70620

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

bool __thiscall
FPCGTransformPointsElement::ExecuteInternal(FPCGTransformPointsElement *this,FPCGContext *param_1)

{
  int *piVar1;
  UPCGNode *this_00;
  FName FVar2;
  FObjectPtr_u_0 *pFVar3;
  code *pcVar4;
  FPCGContext *this_01;
  EPCGPointNativeProperties EVar5;
  FPCGMetadataDomainID FVar6;
  bool bVar7;
  undefined1 uVar8;
  bool bVar9;
  char cVar10;
  int iVar11;
  undefined4 uVar12;
  EPCGPointNativeProperties EVar13;
  uint uVar14;
  uint uVar15;
  UClass *pUVar16;
  UPCGSettings *pUVar17;
  TObjectPtr<UPCGSettings>_u_0 TVar18;
  FPCGTaggedData *pFVar19;
  FText *pFVar20;
  UPCGMetadata *this_02;
  FPCGMetadataAttribute<UE::Math::TTransform<double>_> *pFVar21;
  FText *pFVar22;
  FTextFormat *pFVar23;
  ulonglong uVar24;
  TRefCountPtr<ITextData> TVar25;
  ForAnyElementType FVar26;
  int iVar27;
  uint uVar28;
  bool bVar29;
  undefined1 auStackY_348 [32];
  bool local_2f8;
  <lambda_1> local_2f7;
  undefined1 local_2f6;
  bool local_2f5;
  bool local_2f4;
  bool local_2f3;
  bool local_2f2 [2];
  UPCGBasePointData *local_2f0;
  FPCGContext *local_2e8;
  TArray<TTuple<__int64,__int64>,TSizedDefaultAllocator<32>_> local_2e0;
  <lambda_2> local_2d0 [4];
  EPCGPointNativeProperties local_2cc;
  TObjectPtr<UPCGSettings>_u_0 local_2c8;
  UPCGBasePointData *local_2c0;
  uint local_2b8;
  FName local_2b0;
  int local_2a8 [2];
  TObjectPtr<UPCGSettings>_u_0 local_2a0;
  FObjectPtr_u_0 local_298;
  FPCGMetadataAttribute<UE::Math::TTransform<double>_> *local_290;
  FObjectPtr_u_0 *local_288;
  FPCGMetadataAttribute<UE::Math::TTransform<double>_> *local_280;
  TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_> local_278;
  undefined8 local_268;
  longlong *local_260;
  longlong *local_258;
  TRotator<double> *local_250;
  long *local_248;
  void **local_240;
  FObjectPtr_u_0 *local_238;
  TRotator<double> *local_230;
  FPCGAttributeIdentifier local_228;
  <lambda_1> local_208;
  FString local_160;
  FString local_150;
  FText local_140;
  FString local_130;
  FText local_120;
  FText local_110;
  FString local_100;
  FString local_f0;
  FText local_e0;
  FString local_d0;
  FName local_c0;
  FPCGMetadataDomainID FStack_b8;
  FPCGAttributeIdentifier local_a8;
  FTextFormat local_88;
  FText local_78;
  TVector<double>_u_0 local_68;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined1 local_38;
  undefined4 local_37;
  undefined2 local_33;
  undefined1 local_31;
  ulonglong local_30;
  
  local_30 = __security_cookie.value ^ (ulonglong)auStackY_348;
  local_2b8 = 0;
  bVar29 = -1 < CpuChannel->Enabled;
  local_2e8 = param_1;
  if (bVar29) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId48,"FPCGTransformPointsElement::Execute",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\PCGTransformPoints.cpp"
               ,0x30);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId48);
  }
  if ((param_1->SettingsWithOverride).field0_0x0.DebugPtr != (UPCGSettings *)0x0) {
    pUVar16 = UPCGTransformPointsSettings::StaticClass();
    bVar7 = FObjectPtr::IsA((FObjectPtr *)&param_1->SettingsWithOverride,pUVar16);
    if (bVar7) {
      local_2c8 = (TObjectPtr<UPCGSettings>_u_0)(param_1->SettingsWithOverride).field0_0x0.DebugPtr;
      TVar18 = local_2c8;
    }
    else {
      local_2c8.DebugPtr = (UPCGSettings *)0x0;
      TVar18.DebugPtr = local_2c8.DebugPtr;
    }
    goto LAB_149c7074a;
  }
  this_00 = param_1->Node;
  if ((this_00 == (UPCGNode *)0x0) ||
     (pUVar17 = UPCGNode::GetSettings(this_00), pUVar17 == (UPCGSettings *)0x0)) {
    pFVar19 = TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_>::
              FindByPredicate<_FPCGDataCollection::GetSettings<UPCGTransformPointsSettings>_::__l2::<lambda_1>_>
                        (&(param_1->InputData).TaggedData,local_2f7);
    if (pFVar19 != (FPCGTaggedData *)0x0) {
      local_2a0.ObjectPtr.field0_0x0 = (FObjectPtr)(pFVar19->Data).Data.field0_0x0.DebugPtr;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        if (local_2a0.DebugPtr == (UPCGSettings *)0x0) goto LAB_149c70743;
        UE::GC::MarkAsReachable((UObject *)local_2a0.DebugPtr);
      }
      if (local_2a0.DebugPtr != (UPCGSettings *)0x0) {
        pUVar16 = UPCGTransformPointsSettings::StaticClass();
        bVar7 = FObjectPtr::IsA(&local_2a0.ObjectPtr,pUVar16);
        TVar18 = local_2a0;
        local_2c8 = local_2a0;
        if (bVar7) goto LAB_149c7074a;
      }
    }
  }
  else {
    pUVar17 = UPCGNode::GetSettings(this_00);
    TVar18.DebugPtr = FPCGDataCollection::GetSettings(&param_1->InputData,pUVar17);
    if (TVar18.DebugPtr != (UPCGSettings *)0x0) {
      local_2c8.DebugPtr = TVar18.DebugPtr;
      pUVar16 = UPCGTransformPointsSettings::StaticClass();
      iVar11 = (int)pUVar16->_padding_;
      if ((iVar11 <= *(int *)((TVar18.DebugPtr)->_padding_ + 0x38)) &&
         ((longlong *)
          *(undefined1 **)
           (*(longlong *)((TVar18.DebugPtr)->_padding_ + 0x30) + (longlong)iVar11 * 8) ==
          &pUVar16->_padding_)) goto LAB_149c7074a;
    }
  }
LAB_149c70743:
  local_2c8.DebugPtr = (UPCGSettings *)0x0;
  TVar18.DebugPtr = local_2c8.DebugPtr;
LAB_149c7074a:
  if ((TVar18.DebugPtr == (UPCGSettings *)0x0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("Settings",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\PCGTransformPoints.cpp"
                         ,0x33,L""), bVar7)) {
    pcVar4 = (code *)swi(3);
    uVar8 = (*pcVar4)();
    return (bool)uVar8;
  }
  FPCGDataCollection::GetInputsByPin
            (&param_1->InputData,&local_278,&PCGPinConstants::DefaultInputLabel);
  local_2f8 = SUB81(TVar18.DebugPtr[1]._padding_,0);
  local_260 = &TVar18.DebugPtr[1]._padding_;
  FVar2 = *(FName *)((longlong)&TVar18.DebugPtr[1]._padding_ + 4);
  local_258 = &TVar18.DebugPtr[1]._padding_;
  local_2f3 = SUB81(TVar18.DebugPtr[1]._padding_,0);
  local_230 = (TRotator<double> *)&TVar18.DebugPtr[1]._padding_;
  local_250 = (TRotator<double> *)&TVar18.DebugPtr[1].bUseSeed;
  local_2f2[0] = *(bool *)TVar18.DebugPtr[1].CacheLock.CriticalSection.Opaque1;
  local_248 = TVar18.DebugPtr[1].CacheLock.CriticalSection.Opaque2;
  local_240 = TVar18.DebugPtr[1].CacheLock.CriticalSection.Opaque3 + 2;
  local_2f7 = *(<lambda_1> *)&TVar18.DebugPtr[1].OverriddenSettingsPropertyBag.field0_0x0;
  local_2f4 = *(bool *)((longlong)&TVar18.DebugPtr[1].OverriddenSettingsPropertyBag.field0_0x0 + 1);
  local_2f5 = *(bool *)((longlong)&TVar18.DebugPtr[1].OverriddenSettingsPropertyBag.field0_0x0 + 2);
  local_2a8[0] = FPCGContext::GetSeed(param_1);
  uVar24 = (ulonglong)local_278.ArrayNum;
  local_238 = (FObjectPtr_u_0 *)(local_278.AllocatorInstance.Data + uVar24 * 0x78);
  local_2b8 = local_278.ArrayNum;
  FVar26.Data = local_278.AllocatorInstance.Data;
  do {
    pFVar3 = local_238;
    local_288 = (FObjectPtr_u_0 *)FVar26.Data;
    if (local_278.ArrayNum != (uint)uVar24) {
      local_2f6 = 0;
      `TCheckedPointerIterator<FPCGTaggedData_const_,int,0>::operator!='::__l2::<lambda_1>::
      operator()(&local_2f6);
    }
    if ((FObjectPtr_u_0 *)FVar26.Data == pFVar3) {
      DestructItems<FPCGTaggedData,int>
                ((FPCGTaggedData *)local_278.AllocatorInstance.Data,local_278.ArrayNum);
      if ((FPCGTaggedData *)local_278.AllocatorInstance.Data != (FPCGTaggedData *)0x0) {
        FMemory::Free(local_278.AllocatorInstance.Data);
      }
      if (bVar29) {
        FCpuProfilerTrace::OutputEndEvent();
      }
      return true;
    }
    bVar7 = -1 < CpuChannel->Enabled;
    if (bVar7) {
      FCpuProfilerTrace::GetOrCreateSpecId
                (&__CpuProfilerEventSpecId76,"FPCGTransformPointsElement::Execute::InputLoop",
                 "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\PCGTransformPoints.cpp"
                 ,0x4c);
      FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId76);
    }
    pFVar3 = (FObjectPtr_u_0 *)(param_1->OutputData).TaggedData.AllocatorInstance.Data;
    if (((pFVar3 <= FVar26.Data) &&
        (FVar26.Data < pFVar3 + (longlong)(param_1->OutputData).TaggedData.ArrayMax * 0xf)) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar9)) {
      pcVar4 = (code *)swi(3);
      uVar8 = (*pcVar4)();
      return (bool)uVar8;
    }
    iVar11 = (param_1->OutputData).TaggedData.ArrayNum;
    piVar1 = &(param_1->OutputData).TaggedData.ArrayMax;
    if (iVar11 == *piVar1) {
      iVar11 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x878,(ForAnyElementType *)&param_1->OutputData,piVar1);
    }
    (param_1->OutputData).TaggedData.ArrayNum = iVar11 + 1;
    pFVar19 = FPCGTaggedData::FPCGTaggedData
                        ((FPCGTaggedData *)
                         ((param_1->OutputData).TaggedData.AllocatorInstance.Data +
                         (longlong)iVar11 * 0x78),(FPCGTaggedData *)FVar26.Data);
    local_298 = (FObjectPtr_u_0)local_288->Handle;
    if (UE::GC::GIsIncrementalReachabilityPending == false) {
LAB_149c709cb:
      if ((UPCGSpatialData *)local_298.Handle == (UPCGSpatialData *)0x0) goto LAB_149c7115e;
      pUVar16 = Z_Construct_UClass_UPCGSpatialData_NoRegister();
      bVar9 = FObjectPtr::IsA((FObjectPtr *)&local_298,pUVar16);
      if ((!bVar9) || ((UPCGSpatialData *)local_298.Handle == (UPCGSpatialData *)0x0))
      goto LAB_149c7115e;
      local_38 = 0;
      local_37 = 0;
      local_33 = 0;
      local_31 = 0;
      local_68._s_0.X = 0.0;
      local_68._s_0.Y = 0.0;
      local_68._s_0.Z = 0.0;
      uStack_50 = 0;
      local_48 = 0;
      uStack_40 = 0;
      local_2c0 = UPCGSpatialData::ToBasePointData
                            ((UPCGSpatialData *)local_298.Handle,param_1,
                             (TBox<double> *)&local_68._s_0);
      if (local_2c0 == (UPCGBasePointData *)0x0) {
        if (1 < (byte)LogPCG._0_1_) {
          pFVar20 = FText::AsLocalizable_Advanced_LocText
                              (&local_140,L"PCGTransformPointsElement",L"InputMissingPointData",
                               L"Unable to get Point data from input");
          FText::ToString(pFVar20);
          FPCGContext::GetTaskName(param_1,&local_150);
          FPCGContext::GetExecutionSourceName(local_2e8,&local_160);
          UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogPCG);
          if (local_160.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_160.Data.AllocatorInstance.Data);
          }
          TVar25.Reference = local_140.TextData.Reference;
          if (local_150.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_150.Data.AllocatorInstance.Data);
            TVar25.Reference = local_140.TextData.Reference;
          }
          goto LAB_149c70b30;
        }
        goto LAB_149c70b40;
      }
      local_280 = (FPCGMetadataAttribute<UE::Math::TTransform<double>_> *)0x0;
      local_2b0 = FVar2;
      pFVar21 = local_280;
      if (local_2f8 == false) {
LAB_149c70c19:
        local_280 = pFVar21;
        local_2f0 = FPCGContext::NewPointData_AnyThread(param_1);
        UPCGSpatialData::InitializeFromData
                  ((UPCGSpatialData *)local_2f0,(UPCGSpatialData *)local_2c0,(UPCGMetadata *)0x0,
                   true,true);
        pcVar4 = *(code **)(local_2f0->_padding_ + 0x490);
        uVar12 = (**(code **)(local_2c0->_padding_ + 0x488))();
        (*pcVar4)(local_2f0,uVar12,0);
        if ((char)TVar18.DebugPtr[1]._padding_ == '\0') {
          local_2cc = Transform;
          if (*(char *)((longlong)&TVar18.DebugPtr[1].OverriddenSettingsPropertyBag.field0_0x0 + 2)
              != '\0') {
            local_2cc = Seed|Transform;
          }
        }
        else {
          local_2cc = MetadataEntry;
        }
        cVar10 = (**(code **)(local_2f0->_padding_ + 0x440))();
        EVar5 = local_2cc;
        if (cVar10 == '\0') {
          pcVar4 = *(code **)(local_2f0->_padding_ + 0x498);
          EVar13 = (**(code **)(local_2c0->_padding_ + 0x640))(local_2c0,1);
          (*pcVar4)(local_2f0,EVar13 | EVar5);
        }
        else {
          (**(code **)(local_2f0->_padding_ + 0x498))(local_2f0,local_2cc);
        }
        FPCGDataPtrWrapper::operator=(&pFVar19->Data,(UPCGData *)local_2f0);
        local_290 = (FPCGMetadataAttribute<UE::Math::TTransform<double>_> *)0x0;
        local_2e0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_2e0.ArrayNum = 0;
        local_2e0.ArrayMax = 0;
        if (local_2f8 != false) {
          if ((((local_280 == (FPCGMetadataAttribute<UE::Math::TTransform<double>_> *)0x0) ||
               (local_2f0 == (UPCGBasePointData *)0x0)) || (local_2f0->_padding_ == 0)) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("SourceAttribute && OutputData && OutputData->Metadata",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\PCGTransformPoints.cpp"
                                 ,0x8f,L""), bVar9)) {
            pcVar4 = (code *)swi(3);
            uVar8 = (*pcVar4)();
            return (bool)uVar8;
          }
          local_228.Name = local_2b0;
          local_228.MetadataDomain = PCGMetadataDomainID::Default;
          local_290 = (FPCGMetadataAttribute<UE::Math::TTransform<double>_> *)
                      UPCGMetadata::GetMutableAttribute
                                ((UPCGMetadata *)local_2f0->_padding_,&local_228);
          if ((local_290 == (FPCGMetadataAttribute<UE::Math::TTransform<double>_> *)0x0) ||
             (*(short *)&local_290->field_0x70 != 8)) {
            local_290 = (FPCGMetadataAttribute<UE::Math::TTransform<double>_> *)0x0;
          }
          uVar14 = (**(code **)(local_2c0->_padding_ + 0x488))();
          if (local_2e0.ArrayNum < (int)uVar14) {
            iVar27 = uVar14 - local_2e0.ArrayNum;
            iVar11 = UE::Core::Private::
                     ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x10,8,iVar27,&local_2e0.AllocatorInstance,&local_2e0.ArrayNum,
                                &local_2e0.ArrayMax);
            DefaultConstructItems<TTuple<__int64,__int64>,int>
                      (local_2e0.AllocatorInstance.Data + (longlong)iVar11 * 0x10,iVar27);
          }
          else {
            if ((int)uVar14 < 0) {
                    /* WARNING: Subroutine does not return */
              UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar14);
            }
            if ((int)uVar14 < local_2e0.ArrayNum) {
              uVar28 = local_2e0.ArrayNum - uVar14;
              uVar15 = 0;
              if ((int)(uVar14 + uVar28) <= local_2e0.ArrayNum) {
                uVar15 = ~uVar28 >> 0x1f;
              }
              if (uVar15 == 0) {
                bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x458,
                                   L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                                  );
                if (bVar9) {
                  pcVar4 = (code *)swi(3);
                  uVar8 = (*pcVar4)();
                  return (bool)uVar8;
                }
              }
              if (uVar28 != 0) {
                iVar27 = (local_2e0.ArrayNum - uVar28) - uVar14;
                iVar11 = local_2e0.ArrayNum;
                if (iVar27 != 0) {
                  memmove(local_2e0.AllocatorInstance.Data + (longlong)(int)uVar14 * 0x10,
                          local_2e0.AllocatorInstance.Data + (longlong)(int)uVar14 * 0x10 +
                          (longlong)(int)uVar28 * 0x10,(longlong)iVar27 << 4);
                  iVar11 = local_2e0.ArrayNum;
                }
                local_2e0.ArrayNum = iVar11 - uVar28;
                UE::Core::Private::
                ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x10,8,&local_2e0.AllocatorInstance,iVar11 - uVar28,&local_2e0.ArrayMax);
              }
            }
          }
        }
        local_208.OutputData = &local_2f0;
        local_208.PointData = &local_2c0;
        local_208.PropertiesToAllocate = &local_2cc;
        local_208.bApplyToAttribute = &local_2f8;
        local_208.bRecomputeSeed = &local_2f5;
        local_208.Seed = local_2a8;
        local_208.OffsetMin = (TVector<double> *)local_260;
        local_208.OffsetMax = (TVector<double> *)local_258;
        local_208.RotationMin = local_230;
        local_208.RotationMax = local_250;
        local_208.bUniformScale = &local_2f4;
        local_208.ScaleMin = (TVector<double> *)local_248;
        local_208.ScaleMax = (TVector<double> *)local_240;
        local_208.SourceAttribute = &local_280;
        local_208.bAbsoluteOffset = &local_2f3;
        local_208.bAbsoluteRotation = local_2f2;
        local_208.bAbsoluteScale = (bool *)&local_2f7;
        local_208.AllMetadataEntries = &local_2e0;
        local_208.TargetAttribute = &local_290;
        iVar11 = (**(code **)(local_2c0->_padding_ + 0x488))();
        param_1 = local_2e8;
        FPCGAsync::
        AsyncProcessingOneToOneRangeEx<_FPCGTransformPointsElement::ExecuteInternal_::__l13::<lambda_2>,_FPCGTransformPointsElement::ExecuteInternal_::__l13::<lambda_1>_&>
                  (&local_2e8->AsyncState,iVar11,local_2d0,&local_208,false,0x40,true);
        if (local_290 != (FPCGMetadataAttribute<UE::Math::TTransform<double>_> *)0x0) {
          UPCGMetadata::AddDelayedEntries((UPCGMetadata *)local_2f0->_padding_,&local_2e0);
        }
        if (local_2e0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_2e0.AllocatorInstance.Data);
        }
        if (bVar7) {
          FCpuProfilerTrace::OutputEndEvent();
        }
      }
      else {
        this_02 = (UPCGMetadata *)(**(code **)(local_2c0->_padding_ + 800))(local_2c0);
        if ((this_02 == (UPCGMetadata *)0x0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("PointMetadata",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\PCGTransformPoints.cpp"
                               ,0x65,L""), bVar9)) {
          pcVar4 = (code *)swi(3);
          uVar8 = (*pcVar4)();
          return (bool)uVar8;
        }
        local_268 = 0;
        if (local_2b0 == (FName)0x0) {
          local_2b0 = UPCGMetadata::GetLatestAttributeNameOrNone(this_02);
          local_2b0 = *(FName *)local_2b0;
        }
        FStack_b8 = PCGMetadataDomainID::Default;
        FVar6 = FStack_b8;
        FStack_b8._0_8_ = PCGMetadataDomainID::Default._0_8_;
        local_a8.MetadataDomain.Flag = FStack_b8.Flag;
        local_a8.MetadataDomain._1_3_ = FStack_b8._1_3_;
        local_a8.MetadataDomain.CustomFlag = FStack_b8.CustomFlag;
        local_a8.MetadataDomain.DebugName = PCGMetadataDomainID::Default.DebugName;
        local_c0 = local_2b0;
        FStack_b8 = FVar6;
        local_a8.Name = local_2b0;
        pFVar21 = (FPCGMetadataAttribute<UE::Math::TTransform<double>_> *)
                  UPCGMetadata::GetConstAttribute(this_02,&local_a8);
        if ((pFVar21 != (FPCGMetadataAttribute<UE::Math::TTransform<double>_> *)0x0) &&
           (param_1 = local_2e8, *(short *)&pFVar21->field_0x70 == 8)) goto LAB_149c70c19;
        if (1 < (byte)LogPCG._0_1_) {
          pFVar20 = FText::FromName(&local_78,&local_2b0);
          pFVar22 = FText::AsLocalizable_Advanced_LocText
                              (&local_110,L"PCGTransformPointsElement",L"AttributeMissing",
                               L"Attribute \'{0}\' does not exist or is not a transform");
          pFVar23 = FTextFormat::FTextFormat(&local_88,pFVar22,Default);
          pFVar20 = FText::Format<FText>(&local_120,pFVar23,pFVar20);
          FText::ToString(pFVar20);
          this_01 = local_2e8;
          FPCGContext::GetTaskName(local_2e8,&local_d0);
          FPCGContext::GetExecutionSourceName(this_01,&local_130);
          UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogPCG);
          if (local_130.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_130.Data.AllocatorInstance.Data);
          }
          if (local_d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_d0.Data.AllocatorInstance.Data);
          }
          if (local_120.TextData.Reference != (ITextData *)0x0) {
            (**(code **)((longlong)*local_120.TextData.Reference + 0x10))();
          }
          if (local_110.TextData.Reference != (ITextData *)0x0) {
            (**(code **)((longlong)*local_110.TextData.Reference + 0x10))();
          }
        }
        param_1 = local_2e8;
        if (bVar7) {
          FCpuProfilerTrace::OutputEndEvent();
          param_1 = local_2e8;
        }
      }
    }
    else {
      if ((UPCGSpatialData *)local_298.Handle != (UPCGSpatialData *)0x0) {
        UE::GC::MarkAsReachable(local_298.Handle);
        goto LAB_149c709cb;
      }
LAB_149c7115e:
      if (1 < (byte)LogPCG._0_1_) {
        pFVar20 = FText::AsLocalizable_Advanced_LocText
                            (&local_e0,L"PCGTransformPointsElement",L"InputMissingSpatialData",
                             L"Unable to get Spatial data from input");
        FText::ToString(pFVar20);
        FPCGContext::GetTaskName(param_1,&local_f0);
        FPCGContext::GetExecutionSourceName(local_2e8,&local_100);
        UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogPCG);
        if (local_100.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_100.Data.AllocatorInstance.Data);
        }
        TVar25.Reference = local_e0.TextData.Reference;
        if (local_f0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_f0.Data.AllocatorInstance.Data);
          TVar25.Reference = local_e0.TextData.Reference;
        }
LAB_149c70b30:
        param_1 = local_2e8;
        if (TVar25.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*TVar25.Reference + 0x10))();
          param_1 = local_2e8;
        }
      }
LAB_149c70b40:
      if (bVar7) {
        FCpuProfilerTrace::OutputEndEvent();
      }
    }
    FVar26.Data = (FScriptContainerElement *)(local_288 + 0xf);
    uVar24 = (ulonglong)local_2b8;
    TVar18 = local_2c8;
  } while( true );
}

// ExecutionLoopMode @ 149c75bc0

EPCGElementExecutionLoopMode __thiscall
FPCGTransformPointsElement::ExecutionLoopMode
          (FPCGTransformPointsElement *this,UPCGSettings *param_1)

{
  return SinglePrimaryPin;
}

// SupportsBasePointDataInputs @ 149c92920

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall
FPCGTransformPointsElement::SupportsBasePointDataInputs
          (FPCGTransformPointsElement *this,FPCGContext *param_1)

{
  return true;
}

