// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryCache
// Functions: 3

// Denormalize @ 14ca14ac0

TIntVector3<int> * __cdecl
FNormalCoderSmithTest::Denormalize
          (TIntVector3<int> *__return_storage_ptr__,TVector<double> *param_1)

{
  double dVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  fVar3 = __real_42ff0000;
  fVar2 = __real_3f800000;
  fVar4 = ((float)(param_1->field0_0x0)._s_0.Z + __real_3f800000) * __real_42ff0000;
  dVar1 = (param_1->field0_0x0)._s_0.Y;
  (__return_storage_ptr__->field0_0x0)._s_0.X =
       (int)(((float)(param_1->field0_0x0)._s_0.X + __real_3f800000) * __real_42ff0000);
  (__return_storage_ptr__->field0_0x0)._s_0.Y = (int)(((float)dVar1 + fVar2) * fVar3);
  (__return_storage_ptr__->field0_0x0)._s_0.Z = (int)fVar4;
  return __return_storage_ptr__;
}

// Denormalize @ 14ca14b20

int __cdecl FNormalCoderSmithTest::Denormalize(float param_1)

{
  return (int)((param_1 + __real_3f800000) * __real_42ff0000);
}

// Test @ 14ca2bb90

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl FNormalCoderSmithTest::Test(void)

{
  undefined8 uVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  double extraout_XMM0_Qa;
  double dVar15;
  undefined1 extraout_XMM0 [16];
  double extraout_XMM0_Qb;
  undefined1 auVar16 [16];
  double dVar17;
  undefined1 auVar18 [16];
  double dVar19;
  double dVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  float fVar25;
  float fVar26;
  undefined1 auStack_2f8 [32];
  int local_2d8;
  undefined4 local_2d0;
  undefined4 local_2c8;
  int local_2c0;
  int local_2b8;
  int local_2b0;
  uint local_2a8;
  int local_2a0;
  int local_298;
  int local_288;
  int local_284;
  float local_280;
  int local_27c;
  int local_278;
  undefined1 local_270 [24];
  double dStack_258;
  double local_250;
  double local_248;
  double local_240;
  TVector<double>_u_0 local_230;
  undefined1 local_218 [16];
  undefined1 local_208 [16];
  FNormalCoderSmith local_1f8;
  ulonglong local_d8;
  
  local_d8 = __security_cookie.value ^ (ulonglong)auStack_2f8;
  local_1f8.NPhiValue = 0x78;
  local_270._8_8_ = 0.0;
  local_1f8.NThetaTable.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_1f8.NThetaTable.ArrayNum = 0;
  local_1f8.NThetaTable.ArrayMax = 0;
  FNormalCoderSmith::GenerateNThetaTable(&local_1f8,0x78,__real_3c9d466e,&local_1f8.NThetaTable);
  dVar5 = __real_bff0000000000000;
  dVar4 = __real_3ff0000000000000;
  local_248 = 0.0;
  local_240 = 0.0;
  local_280 = 0.0;
  local_1f8.MoveFrameEncoded.M[0][0] = ___xmm_00000000000000003ff0000000000000;
  local_1f8.MoveFrameEncoded.M[0][1] = _UNK_150689518;
  local_1f8.MoveFrameEncoded.M[0][2] = 0.0;
  local_1f8.MoveFrameEncoded.M[0][3] = 0.0;
  local_1f8.MoveFrameEncoded.M[1][0] = ___xmm_3ff00000000000000000000000000000;
  local_1f8.MoveFrameEncoded.M[1][1] = _UNK_15061cbc8;
  local_1f8.MoveFrameEncoded.M[1][2] = 0.0;
  local_1f8.MoveFrameEncoded.M[1][3] = 0.0;
  local_1f8.MoveFrameEncoded.M[2][0] = 0.0;
  local_1f8.MoveFrameEncoded.M[2][1] = 0.0;
  local_1f8.MoveFrameEncoded.M[2][2] = ___xmm_00000000000000003ff0000000000000;
  local_1f8.MoveFrameEncoded.M[2][3] = _UNK_150689518;
  local_1f8.MoveFrameEncoded.M[3][0] = 0.0;
  local_1f8.MoveFrameEncoded.M[3][1] = 0.0;
  local_1f8.MoveFrameEncoded.M[3][2] = ___xmm_3ff00000000000000000000000000000;
  local_1f8.MoveFrameEncoded.M[3][3] = _UNK_15061cbc8;
  local_1f8.MoveFrameDecoded.M[0][0] = ___xmm_00000000000000003ff0000000000000;
  local_1f8.MoveFrameDecoded.M[0][1] = _UNK_150689518;
  local_1f8.MoveFrameDecoded.M[0][2] = 0.0;
  local_1f8.MoveFrameDecoded.M[0][3] = 0.0;
  local_1f8.MoveFrameDecoded.M[1][0] = ___xmm_3ff00000000000000000000000000000;
  local_1f8.MoveFrameDecoded.M[1][1] = _UNK_15061cbc8;
  local_1f8.MoveFrameDecoded.M[1][2] = 0.0;
  local_1f8.MoveFrameDecoded.M[1][3] = 0.0;
  local_1f8.MoveFrameDecoded.M[2][0] = 0.0;
  local_1f8.MoveFrameDecoded.M[2][1] = 0.0;
  local_1f8.MoveFrameDecoded.M[2][2] = ___xmm_00000000000000003ff0000000000000;
  local_1f8.MoveFrameDecoded.M[2][3] = _UNK_150689518;
  local_1f8.MoveFrameDecoded.M[3][0] = 0.0;
  local_1f8.MoveFrameDecoded.M[3][1] = 0.0;
  local_1f8.MoveFrameDecoded.M[3][2] = ___xmm_3ff00000000000000000000000000000;
  local_1f8.MoveFrameDecoded.M[3][3] = _UNK_15061cbc8;
  local_284 = 0;
  local_288 = 0;
  do {
    fVar26 = __real_3f800000;
    fVar25 = 0.0;
    __libm_sse2_sincos_();
    local_208._8_4_ = extraout_XMM0._0_4_;
    local_208._0_8_ = extraout_XMM0._8_8_;
    local_208._12_4_ = extraout_XMM0._4_4_;
    uVar21 = extraout_XMM0._0_4_;
    uVar22 = extraout_XMM0._4_4_;
    uVar23 = extraout_XMM0._8_4_;
    uVar24 = extraout_XMM0._12_4_;
    local_218 = extraout_XMM0;
    do {
      __libm_sse2_sincos_();
      dVar20 = (double)CONCAT44(uVar24,uVar23) * extraout_XMM0_Qa;
      dVar15 = (double)CONCAT44(uVar22,uVar21) * extraout_XMM0_Qa;
      local_270._16_8_ = dVar20;
      dStack_258 = dVar15;
      FNormalCoderSmith::Encode(&local_1f8,(TVector<double> *)local_270);
      FNormalCoderSmith::Decode
                (&local_1f8,(TVector<double> *)&local_230._s_0,(FEncodedNormal *)local_270);
      uVar1 = local_230._s_0.Z;
      uVar24 = local_230._12_4_;
      uVar23 = local_230._8_4_;
      uVar22 = local_230._4_4_;
      uVar21 = local_230._0_4_;
      dVar2 = (double)CONCAT44(local_230._4_4_,local_230._0_4_);
      dVar3 = (double)CONCAT44(local_230._12_4_,local_230._8_4_);
      iVar13 = (int)(((float)dVar2 + fVar26) * __real_42ff0000);
      uVar9 = iVar13 - (int)(((float)dVar20 + fVar26) * __real_42ff0000);
      iVar14 = (int)(((float)dVar3 + fVar26) * __real_42ff0000);
      local_27c = (int)(((float)extraout_XMM0_Qb + fVar26) * __real_42ff0000);
      iVar12 = (int)(((float)local_230._s_0.Z + fVar26) * __real_42ff0000);
      iVar10 = iVar12 - local_27c;
      local_278 = (int)(((float)dVar15 + fVar26) * __real_42ff0000);
      iVar11 = iVar14 - local_278;
      uVar6 = -uVar9;
      if ((int)-uVar9 < 0) {
        uVar6 = uVar9;
      }
      if ((int)uVar6 < (int)(uint)local_270._8_8_) {
        uVar6 = (uint)local_270._8_8_;
      }
      local_270._8_8_ = ZEXT48(uVar6);
      iVar7 = -iVar11;
      if (-iVar11 < 0) {
        iVar7 = iVar11;
      }
      if (iVar7 < local_284) {
        iVar7 = local_284;
      }
      iVar8 = -iVar10;
      if (-iVar10 < 0) {
        iVar8 = iVar10;
      }
      if (iVar8 < local_288) {
        iVar8 = local_288;
      }
      dVar17 = dVar15 * dVar15 + dVar20 * dVar20 + extraout_XMM0_Qb * extraout_XMM0_Qb;
      dVar19 = extraout_XMM0_Qb;
      if (__real_3e45798ee0000000 < dVar17) {
        dVar19 = dVar4 / SQRT(dVar17);
        dVar20 = dVar20 * dVar19;
        dVar15 = dVar15 * dVar19;
        dVar19 = extraout_XMM0_Qb * dVar19;
      }
      dVar19 = dVar19 / SQRT(dVar20 * dVar20 + dVar15 * dVar15 + dVar19 * dVar19);
      dVar17 = dVar5;
      if ((dVar5 <= dVar19) && (dVar17 = dVar19, dVar4 <= dVar19)) {
        dVar17 = dVar4;
      }
      local_288 = iVar8;
      local_284 = iVar7;
      dVar19 = acos(dVar17);
      dVar15 = FGenericPlatformMath::Atan2(dVar15,dVar20);
      local_250 = (double)uVar1;
      local_270._20_4_ = uVar22;
      local_270._16_4_ = uVar21;
      dStack_258 = (double)CONCAT44(uVar24,uVar23);
      dVar20 = dVar2 * dVar2 + dVar3 * dVar3 + (double)uVar1 * (double)uVar1;
      if (__real_3e45798ee0000000 < dVar20) {
        dVar20 = dVar4 / SQRT(dVar20);
        dStack_258 = dStack_258 * dVar20;
        local_270._16_8_ = dVar20 * dVar2;
        uVar1 = (double)uVar1 * dVar20;
      }
      auVar16._0_8_ = (double)local_270._16_8_ * (double)local_270._16_8_;
      auVar16._8_8_ = 0;
      auVar18._0_8_ = dStack_258 * dStack_258 + auVar16._0_8_ + (double)uVar1 * (double)uVar1;
      auVar18._8_8_ = 0;
      auVar16 = sqrtpd(auVar16,auVar18);
      dVar20 = (double)uVar1 / auVar16._0_8_;
      dVar2 = dVar5;
      if ((dVar5 <= dVar20) && (dVar2 = dVar20, dVar4 <= dVar20)) {
        dVar2 = dVar4;
      }
      dVar20 = FGenericPlatformMath::Atan2(dStack_258,(double)local_270._16_8_);
      dVar20 = (double)(float)((uint)((float)dVar15 - (float)dVar20) &
                              __xmm_7fffffff7fffffff7fffffff7fffffff);
      if (dVar20 <= local_248) {
        dVar20 = local_248;
      }
      local_248 = dVar20;
      dVar20 = acos(dVar2);
      dVar20 = (double)(float)((uint)((float)dVar19 - (float)dVar20) &
                              __xmm_7fffffff7fffffff7fffffff7fffffff);
      if (dVar20 <= local_240) {
        dVar20 = local_240;
      }
      local_240 = dVar20;
      if (4 < (byte)LogGeoCaStreamingNormalCompression._0_1_) {
        local_2c8 = local_270._4_4_;
        local_2d0 = local_270._0_4_;
        local_2d8 = local_27c;
        local_2c0 = iVar13;
        local_2b8 = iVar14;
        local_2b0 = iVar12;
        local_2a8 = uVar9;
        local_2a0 = iVar11;
        local_298 = iVar10;
        UE::Logging::Private::BasicLog<5>
                  (&::LOG_Static,(FLogCategoryBase *)&LogGeoCaStreamingNormalCompression);
      }
      fVar25 = fVar25 + __real_3c23d70a;
      uVar21 = local_218._0_4_;
      uVar22 = local_218._4_4_;
      uVar23 = local_208._0_4_;
      uVar24 = local_208._4_4_;
      fVar26 = __real_3f800000;
    } while (fVar25 < __real_3fc90fdb);
    local_280 = local_280 + __real_3c23d70a;
  } while (local_280 < __real_40c90fdb);
  if (4 < (byte)LogGeoCaStreamingNormalCompression._0_1_) {
    local_2d8 = local_288;
    UE::Logging::Private::BasicLog<5>
              (&::LOG_Static,(FLogCategoryBase *)&LogGeoCaStreamingNormalCompression);
    if (4 < (byte)LogGeoCaStreamingNormalCompression._0_1_) {
      UE::Logging::Private::BasicLog<5>
                (&::LOG_Static,(FLogCategoryBase *)&LogGeoCaStreamingNormalCompression);
    }
  }
  if (local_1f8.NThetaTable.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1f8.NThetaTable.AllocatorInstance.Data);
  }
  return;
}

