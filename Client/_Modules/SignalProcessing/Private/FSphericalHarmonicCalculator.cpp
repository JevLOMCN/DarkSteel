// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SignalProcessing
// Functions: 5

// ComputeSoundfieldChannelGains @ 1444f8430

void __cdecl
FSphericalHarmonicCalculator::ComputeSoundfieldChannelGains
          (int param_1,float param_2,float param_3,float *param_4)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  undefined4 uStack_3c;
  TArrayView<float,int> local_38 [3];
  
  if (param_1 < 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("InOrder >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Public\\DSP\\SphericalHarmonicCalculator.h"
                       ,0x2c,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  iVar3 = (param_1 + 1) * (param_1 + 1);
  if (iVar3 < 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("ArrayNum >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xfe,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  local_38[0]._12_4_ = uStack_3c;
  local_38[0].ArrayNum = iVar3;
  local_38[0].DataPtr = param_4;
  ComputeSoundfieldChannelGains(param_1,param_2,param_3,local_38);
  return;
}

// ComputeSoundfieldChannelGains @ 1444f84f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
FSphericalHarmonicCalculator::ComputeSoundfieldChannelGains
          (int param_1,float param_2,float param_3,TArrayView<float,int> *param_4)

{
  code *pcVar1;
  bool bVar2;
  float *pfVar3;
  int iVar4;
  float extraout_XMM0_Da;
  float extraout_XMM0_Da_00;
  float fVar5;
  float extraout_XMM0_Db;
  float extraout_XMM0_Db_00;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  undefined1 auStack_138 [32];
  float local_118;
  float local_108;
  float local_104;
  undefined4 local_100;
  float local_fc [4];
  float local_ec;
  float local_e8;
  float local_e4;
  undefined4 local_e0;
  float local_dc [4];
  float local_cc;
  float local_c8;
  float local_c4;
  ulonglong local_b8;
  
  local_b8 = __security_cookie.value ^ (ulonglong)auStack_138;
  if (7 < (uint)param_1) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Order >= 0 && Order <= 7",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\SphericalHarmonicCalculator.cpp"
                       ,0x275,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    if ((param_1 < 0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("InOrder >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Public\\DSP\\SphericalHarmonicCalculator.h"
                           ,0x2c,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if ((param_4->ArrayNum < (param_1 + 1) * (param_1 + 1)) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("OutGains.Num() >= OrderToNumChannels(Order)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\SphericalHarmonicCalculator.cpp"
                         ,0x276,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  __libm_sse2_sincosf_();
  local_108 = extraout_XMM0_Da;
  local_104 = extraout_XMM0_Db;
  if ((7 < (uint)param_1) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Order >= 0 && Order <= MaxOrder",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\SphericalHarmonicCalculator.cpp"
                         ,0x3b,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  fVar6 = __real_3f800000;
  iVar4 = 1;
  local_100 = 0;
  local_e0 = 0x3f800000;
  fVar13 = extraout_XMM0_Db;
  fVar14 = extraout_XMM0_Da;
  if (0 < param_1) {
    pfVar3 = local_dc;
    do {
      __libm_sse2_sincosf_();
      pfVar3[-8] = extraout_XMM0_Da_00;
      iVar4 = iVar4 + 1;
      *pfVar3 = extraout_XMM0_Db_00;
      pfVar3 = pfVar3 + 1;
      fVar13 = local_104;
      fVar14 = local_108;
    } while (iVar4 <= param_1);
  }
  fVar5 = local_dc[2];
  fVar7 = local_fc[2];
  fVar8 = local_fc[0];
  switch(param_1) {
  case 0:
switchD_1444f8719_caseD_0:
    pfVar3 = TArrayView<float,int>::operator[](param_4,0);
    *pfVar3 = 1.0;
    return;
  case 1:
    goto switchD_1444f8719_caseD_1;
  case 2:
    fVar6 = __real_40400000;
    break;
  case 4:
switchD_1444f8719_caseD_4:
    pfVar3 = TArrayView<float,int>::operator[](param_4,0x18);
    fVar10 = fVar14 * __real_41700000 * fVar13 * fVar13 * fVar13 * ___real_bed62f5d;
    *pfVar3 = fVar13 * fVar13 * fVar13 * fVar13 * local_dc[3] * ___real_400dfc5d;
    pfVar3 = TArrayView<float,int>::operator[](param_4,0x17);
    fVar5 = fVar14 * fVar14;
    *pfVar3 = local_dc[2] * fVar10;
    pfVar3 = TArrayView<float,int>::operator[](param_4,0x16);
    fVar6 = (fVar14 * ___real_c184d0cf * fVar14 - ___real_c0e3af1a) * fVar14 * fVar13;
    *pfVar3 = (__real_bfd6a99b - (fVar5 * ___real_413bd468 * fVar5 - fVar5 * ___real_4156a99b)) *
              local_dc[1];
    pfVar3 = TArrayView<float,int>::operator[](param_4,0x15);
    *pfVar3 = local_dc[0] * fVar6;
    pfVar3 = TArrayView<float,int>::operator[](param_4,0x14);
    *pfVar3 = (fVar5 * ___real_41520000 * fVar5 - fVar5 * __real_41340000) + ___real_3f900000;
    pfVar3 = TArrayView<float,int>::operator[](param_4,0x13);
    *pfVar3 = fVar8 * fVar6;
    pfVar3 = TArrayView<float,int>::operator[](param_4,0x12);
    *pfVar3 = local_fc[1] * fVar13 * ___real_3d812f32;
    pfVar3 = TArrayView<float,int>::operator[](param_4,0x11);
    *pfVar3 = fVar7 * fVar10;
    pfVar3 = TArrayView<float,int>::operator[](param_4,0x10);
    *pfVar3 = local_fc[3] * fVar13 * ___real_3bc34e9f;
  case 3:
    fVar10 = fVar13 * fVar13 * fVar13 * ___real_c005e3e3;
    pfVar3 = TArrayView<float,int>::operator[](param_4,0xf);
    *pfVar3 = local_dc[2] * fVar10;
    pfVar3 = TArrayView<float,int>::operator[](param_4,0xe);
    fVar6 = __real_40400000;
    fVar5 = fVar14 * __real_40400000 * fVar13 * ___real_bf92a476;
    *pfVar3 = fVar13 * __real_40400000 * fVar13 * local_dc[1] * ___real_3f9a9321;
    pfVar3 = TArrayView<float,int>::operator[](param_4,0xd);
    *pfVar3 = local_dc[0] * fVar5;
    pfVar3 = TArrayView<float,int>::operator[](param_4,0xc);
    *pfVar3 = fVar14 * ___real_40d3a8fb * fVar14 * fVar14 - fVar14 * ___real_407dfdfa;
    pfVar3 = TArrayView<float,int>::operator[](param_4,0xb);
    *pfVar3 = fVar8 * fVar5;
    pfVar3 = TArrayView<float,int>::operator[](param_4,10);
    *pfVar3 = local_fc[1] * fVar13 * ___real_3dc55517;
    pfVar3 = TArrayView<float,int>::operator[](param_4,9);
    *pfVar3 = fVar7 * fVar10;
    break;
  case 5:
    goto switchD_1444f8719_caseD_5;
  case 6:
    fVar5 = __real_45a26c00;
    goto LAB_1444f8b20;
  case 7:
    fVar10 = fVar14 * fVar14;
    fVar6 = fVar6 - fVar10;
    pfVar3 = TArrayView<float,int>::operator[](param_4,0x3f);
    *pfVar3 = SQRT(fVar6) * fVar6 * fVar6 * fVar6 * ___real_c0206fcc * local_c4;
    pfVar3 = TArrayView<float,int>::operator[](param_4,0x3e);
    *pfVar3 = fVar14 * ___real_4803f7c0 * fVar6 * fVar6 * fVar6 * local_c8 * ___real_38919014;
    pfVar3 = TArrayView<float,int>::operator[](param_4,0x3d);
    *pfVar3 = (__real_3feb7500 - fVar14 * ___real_41bf4f10 * fVar14) * fVar13 * fVar13 * fVar13 *
              fVar13 * fVar13 * local_cc;
    pfVar3 = TArrayView<float,int>::operator[](param_4,0x3c);
    fVar8 = fVar13 * fVar13 * fVar13;
    *pfVar3 = (fVar14 * ___real_423f4aad * fVar10 - fVar14 * ___real_413093b3) * fVar6 * fVar6 *
              local_dc[3];
    pfVar3 = TArrayView<float,int>::operator[](param_4,0x3b);
    *pfVar3 = (__real_bfd4f613 - (fVar10 * ___real_429e9c9b * fVar10 + fVar10 * ___real_c212692d)) *
              fVar8 * fVar5;
    pfVar3 = TArrayView<float,int>::operator[](param_4,0x3a);
    fVar7 = fVar10 * ___real_c22ceac3;
    fVar5 = fVar10 * ___real_43095f7c;
    *pfVar3 = ((fVar14 * ___real_42f0044f * fVar10 * fVar10 - fVar14 * ___real_43480397 * fVar10) +
              fVar14 * ___real_428557ba) * fVar6 * local_dc[1];
    fVar5 = ((fVar7 - (fVar10 * fVar10 * fVar5 + fVar10 * ___real_c31e81de * fVar10)) -
            ___real_bfccf050) * fVar13;
    pfVar3 = TArrayView<float,int>::operator[](param_4,0x39);
    *pfVar3 = local_dc[0] * fVar5;
    fVar6 = fVar10 * fVar10 * fVar14;
    pfVar3 = TArrayView<float,int>::operator[](param_4,0x38);
    *pfVar3 = ((fVar10 * fVar6 * ___real_42cfb04f - fVar6 * ___real_4327bfa3) +
              fVar10 * fVar14 * ___real_42987fab) - fVar14 * ___real_41078ded;
    pfVar3 = TArrayView<float,int>::operator[](param_4,0x37);
    *pfVar3 = local_fc[0] * fVar5;
    pfVar3 = TArrayView<float,int>::operator[](param_4,0x36);
    *pfVar3 = local_fc[1] * fVar13 * ___real_3ce62c4f;
    pfVar3 = TArrayView<float,int>::operator[](param_4,0x35);
    *pfVar3 = (__real_bfd4f6b4 - (fVar10 * ___real_429e9d13 * fVar10 + fVar10 * ___real_c212699c)) *
              fVar8 * local_fc[2];
    pfVar3 = TArrayView<float,int>::operator[](param_4,0x34);
    *pfVar3 = local_fc[3] * fVar13 * ___real_3a1d0636;
    pfVar3 = TArrayView<float,int>::operator[](param_4,0x33);
    fVar5 = __real_45a26c00;
    *pfVar3 = (__real_45a26c00 - fVar14 * ___real_4783f7c0 * fVar14) * fVar13 * fVar13 * fVar13 *
              fVar13 * fVar13 * local_ec * ___real_39b98e9b;
    pfVar3 = TArrayView<float,int>::operator[](param_4,0x32);
    *pfVar3 = local_e8 * fVar13 * ___real_37a46aae;
    pfVar3 = TArrayView<float,int>::operator[](param_4,0x31);
    fVar6 = __real_3f800000;
    *pfVar3 = fVar13 * ___real_4803f7c0 * fVar13 * fVar13 * fVar13 * fVar13 * fVar13 * fVar13 *
              local_e4 * ___real_b79b9ce5;
LAB_1444f8b20:
    fVar8 = local_dc[2];
    fVar11 = fVar14 * fVar14;
    fVar6 = fVar6 - fVar11;
    pfVar3 = TArrayView<float,int>::operator[](param_4,0x30);
    fVar7 = fVar14 * ___real_c6226c00;
    *pfVar3 = fVar6 * fVar6 * fVar6 * ___real_401b1f93 * local_c8;
    fVar12 = fVar7 * fVar13 * fVar13 * fVar13 * fVar13 * fVar13;
    pfVar3 = TArrayView<float,int>::operator[](param_4,0x2f);
    *pfVar3 = local_cc * fVar12 * ___real_3a539143;
    pfVar3 = TArrayView<float,int>::operator[](param_4,0x2e);
    fVar7 = __real_411cbf90;
    *pfVar3 = (fVar11 * fVar5 - ___real_43ec4000) * fVar6 * fVar6 * local_dc[3] * ___real_3b780dc3;
    fVar9 = (fVar7 - fVar14 * ___real_420faf99 * fVar14) * fVar14 * fVar6 * fVar13;
    pfVar3 = TArrayView<float,int>::operator[](param_4,0x2d);
    fVar10 = fVar11 * fVar11;
    *pfVar3 = fVar8 * fVar9;
    pfVar3 = TArrayView<float,int>::operator[](param_4,0x2c);
    fVar7 = fVar14 * ___real_c1253a5f;
    fVar6 = fVar14 * ___real_4277d78e;
    fVar5 = fVar14 * ___real_42885028;
    *pfVar3 = (((fVar10 * ___real_42a68b77 - fVar11 * fVar10 * ___real_4257874f) -
               fVar11 * ___real_41f82f34) + ___real_3fd0ff54) * local_dc[1];
    fVar6 = (fVar7 - (fVar5 * fVar11 * fVar11 - fVar6 * fVar11)) * fVar13;
    pfVar3 = TArrayView<float,int>::operator[](param_4,0x2b);
    *pfVar3 = local_dc[0] * fVar6;
    pfVar3 = TArrayView<float,int>::operator[](param_4,0x2a);
    *pfVar3 = ((fVar11 * fVar10 * ___real_42503877 - fVar10 * ___real_428df7f4) +
              fVar11 * ___real_41bd4a9b) - ___real_3f9038d8;
    pfVar3 = TArrayView<float,int>::operator[](param_4,0x29);
    *pfVar3 = local_fc[0] * fVar6;
    pfVar3 = TArrayView<float,int>::operator[](param_4,0x28);
    *pfVar3 = local_fc[1] * fVar13 * ___real_3d0fbe34;
    pfVar3 = TArrayView<float,int>::operator[](param_4,0x27);
    *pfVar3 = local_fc[2] * fVar9;
    pfVar3 = TArrayView<float,int>::operator[](param_4,0x26);
    *pfVar3 = local_fc[3] * fVar13 * ___real_3a8bf8c7;
    pfVar3 = TArrayView<float,int>::operator[](param_4,0x25);
    *pfVar3 = local_ec * fVar12 * ___real_3a538a2b;
    pfVar3 = TArrayView<float,int>::operator[](param_4,0x24);
    fVar6 = __real_3f800000;
    *pfVar3 = local_e8 * fVar13 * ___real_3889c86b;
    fVar8 = local_fc[0];
switchD_1444f8719_caseD_5:
    fVar11 = fVar13 * ___real_c46c4000 * fVar13 * fVar13 * fVar13 * fVar13;
    pfVar3 = TArrayView<float,int>::operator[](param_4,0x23);
    *pfVar3 = local_cc * fVar11 * ___real_3b215c31;
    fVar7 = fVar14 * fVar14;
    fVar6 = fVar6 - fVar7;
    local_118 = fVar6;
    pfVar3 = TArrayView<float,int>::operator[](param_4,0x22);
    fVar9 = fVar7 * ___real_456c4000;
    *pfVar3 = fVar6 * fVar14 * ___real_40eb74f9 * fVar6 * local_dc[3];
    pfVar3 = TArrayView<float,int>::operator[](param_4,0x21);
    fVar5 = __real_43d20000;
    *pfVar3 = fVar13 * fVar13 * fVar13 * (fVar9 - __real_43d20000) * ___real_bb874f0c * local_dc[2];
    pfVar3 = TArrayView<float,int>::operator[](param_4,0x20);
    fVar10 = __real_bfcd8618 - (fVar7 * ___real_4206e000 * fVar7 - fVar7 * ___real_41b3d555);
    *pfVar3 = (fVar7 * ___real_41cbe97f - ___real_4107f100) * fVar14 * fVar6 * local_dc[1];
    fVar10 = fVar10 * SQRT(fVar6);
    pfVar3 = TArrayView<float,int>::operator[](param_4,0x1f);
    *pfVar3 = local_dc[0] * fVar10;
    pfVar3 = TArrayView<float,int>::operator[](param_4,0x1e);
    *pfVar3 = (fVar14 * ___real_41d0f287 * fVar14 * fVar14 * fVar14 * fVar14 -
              fVar14 * ___real_41e829eb * fVar14 * fVar14) + fVar14 * ___real_40c6ff5c;
    pfVar3 = TArrayView<float,int>::operator[](param_4,0x1d);
    *pfVar3 = fVar8 * fVar10;
    pfVar3 = TArrayView<float,int>::operator[](param_4,0x1c);
    *pfVar3 = local_fc[1] * fVar13 * ___real_3d293101;
    pfVar3 = TArrayView<float,int>::operator[](param_4,0x1b);
    *pfVar3 = SQRT(fVar6) * local_118 * (fVar5 - fVar9) * ___real_3b874f0c * local_fc[2];
    pfVar3 = TArrayView<float,int>::operator[](param_4,0x1a);
    *pfVar3 = local_fc[3] * fVar13 * ___real_3aa11666;
    pfVar3 = TArrayView<float,int>::operator[](param_4,0x19);
    *pfVar3 = local_ec * fVar11 * ___real_3b2157d4;
    fVar7 = local_fc[2];
    goto switchD_1444f8719_caseD_4;
  default:
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("!\"Enclosing block should never be called\"",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\SphericalHarmonicCalculator.cpp"
                       ,0x2ce,L"");
    if (!bVar2) {
      return;
    }
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pfVar3 = TArrayView<float,int>::operator[](param_4,8);
  fVar5 = fVar14 * fVar6 * fVar13 * ___real_bfa53f4b;
  *pfVar3 = fVar13 * fVar6 * fVar13 * local_dc[1] * ___real_3f253f4b;
  pfVar3 = TArrayView<float,int>::operator[](param_4,7);
  *pfVar3 = local_dc[0] * fVar5;
  pfVar3 = TArrayView<float,int>::operator[](param_4,6);
  *pfVar3 = fVar14 * ___real_4056a99c * fVar14 - ___real_3f8f1bbd;
  pfVar3 = TArrayView<float,int>::operator[](param_4,5);
  *pfVar3 = fVar8 * fVar5;
  pfVar3 = TArrayView<float,int>::operator[](param_4,4);
  *pfVar3 = local_fc[1] * fVar13 * ___real_3f253f4b;
switchD_1444f8719_caseD_1:
  fVar13 = fVar13 * ___real_bfddb3d7;
  pfVar3 = TArrayView<float,int>::operator[](param_4,3);
  *pfVar3 = local_dc[0] * fVar13;
  pfVar3 = TArrayView<float,int>::operator[](param_4,2);
  *pfVar3 = fVar14 * __real_3fddb3d7;
  pfVar3 = TArrayView<float,int>::operator[](param_4,1);
  *pfVar3 = fVar8 * fVar13;
  goto switchD_1444f8719_caseD_0;
}

// GenerateFirstOrderRotationMatrixGivenDegrees @ 144501280

void __cdecl
FSphericalHarmonicCalculator::GenerateFirstOrderRotationMatrixGivenDegrees
          (float param_1,float param_2,float param_3,TMatrix<double> *param_4)

{
  uint uVar1;
  float fVar2;
  float fVar3;
  undefined8 extraout_XMM0_Qa;
  float fVar4;
  undefined8 extraout_XMM0_Qa_00;
  float fVar5;
  float extraout_XMM0_Dc;
  float extraout_XMM0_Dd;
  
  __libm_sse2_sincosf4_();
  fVar2 = (float)extraout_XMM0_Qa;
  fVar4 = (float)((ulonglong)extraout_XMM0_Qa >> 0x20);
  __libm_sse2_sincosf_();
  uVar1 = __xmm_80000000800000008000000080000000;
  fVar3 = (float)extraout_XMM0_Qa_00;
  fVar5 = (float)((ulonglong)extraout_XMM0_Qa_00 >> 0x20);
  param_4->M[0][0] = 1.0;
  param_4->M[0][1] = 0.0;
  param_4->M[0][2] = 0.0;
  param_4->M[0][3] = 0.0;
  param_4->M[1][0] = 0.0;
  param_4->M[2][0] = 0.0;
  param_4->M[3][0] = 0.0;
  param_4->M[1][1] = (double)(fVar5 * fVar4 + fVar3 * extraout_XMM0_Dc * fVar2);
  param_4->M[1][2] = (double)(float)((uint)(extraout_XMM0_Dd * fVar2) ^ uVar1);
  param_4->M[1][3] = (double)(fVar4 * fVar3 - fVar5 * extraout_XMM0_Dc * fVar2);
  param_4->M[2][1] = (double)(fVar5 * fVar2 - fVar3 * fVar4 * extraout_XMM0_Dc);
  param_4->M[2][2] = (double)(extraout_XMM0_Dd * fVar4);
  param_4->M[2][3] = (double)(fVar3 * fVar2 + fVar5 * fVar4 * extraout_XMM0_Dc);
  param_4->M[3][1] = (double)(float)((uint)(extraout_XMM0_Dd * fVar3) ^ uVar1);
  param_4->M[3][2] = (double)(float)((uint)extraout_XMM0_Dc ^ uVar1);
  param_4->M[3][3] = (double)(fVar5 * extraout_XMM0_Dd);
  return;
}

// GenerateFirstOrderRotationMatrixGivenRadians @ 144501450

void __cdecl
FSphericalHarmonicCalculator::GenerateFirstOrderRotationMatrixGivenRadians
          (float param_1,float param_2,float param_3,TMatrix<double> *param_4)

{
  uint uVar1;
  float fVar2;
  float fVar3;
  undefined8 extraout_XMM0_Qa;
  float fVar4;
  undefined8 extraout_XMM0_Qa_00;
  float fVar5;
  float extraout_XMM0_Dc;
  float extraout_XMM0_Dd;
  
  __libm_sse2_sincosf4_();
  fVar2 = (float)extraout_XMM0_Qa;
  fVar4 = (float)((ulonglong)extraout_XMM0_Qa >> 0x20);
  __libm_sse2_sincosf_();
  uVar1 = __xmm_80000000800000008000000080000000;
  fVar3 = (float)extraout_XMM0_Qa_00;
  fVar5 = (float)((ulonglong)extraout_XMM0_Qa_00 >> 0x20);
  param_4->M[0][0] = 1.0;
  param_4->M[0][1] = 0.0;
  param_4->M[0][2] = 0.0;
  param_4->M[0][3] = 0.0;
  param_4->M[1][0] = 0.0;
  param_4->M[2][0] = 0.0;
  param_4->M[3][0] = 0.0;
  param_4->M[1][1] = (double)(fVar5 * fVar4 + fVar3 * extraout_XMM0_Dc * fVar2);
  param_4->M[1][2] = (double)(float)((uint)(extraout_XMM0_Dd * fVar2) ^ uVar1);
  param_4->M[1][3] = (double)(fVar4 * fVar3 - fVar5 * extraout_XMM0_Dc * fVar2);
  param_4->M[2][1] = (double)(fVar5 * fVar2 - fVar3 * fVar4 * extraout_XMM0_Dc);
  param_4->M[2][2] = (double)(extraout_XMM0_Dd * fVar4);
  param_4->M[2][3] = (double)(fVar3 * fVar2 + fVar5 * fVar4 * extraout_XMM0_Dc);
  param_4->M[3][1] = (double)(float)((uint)(extraout_XMM0_Dd * fVar3) ^ uVar1);
  param_4->M[3][2] = (double)(float)((uint)extraout_XMM0_Dc ^ uVar1);
  param_4->M[3][3] = (double)(fVar5 * extraout_XMM0_Dd);
  return;
}

// NormalizeGains @ 14450af60

void __cdecl FSphericalHarmonicCalculator::NormalizeGains(TArrayView<float,int> *param_1)

{
  float *pfVar1;
  float *pfVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  longlong lVar7;
  uint uVar8;
  float fVar9;
  
  iVar6 = param_1->ArrayNum;
  uVar8 = 0;
  fVar9 = 0.0;
  if (0 < iVar6) {
    lVar7 = 0;
    do {
      uVar5 = 0;
      if ((int)uVar8 < iVar6) {
        uVar5 = ~uVar8 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pfVar2 = param_1->DataPtr;
      uVar5 = 0;
      if ((int)uVar8 < param_1->ArrayNum) {
        uVar5 = ~uVar8 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pfVar2 = pfVar2 + lVar7;
      uVar8 = uVar8 + 1;
      iVar6 = param_1->ArrayNum;
      pfVar1 = param_1->DataPtr + lVar7;
      lVar7 = lVar7 + 1;
      fVar9 = fVar9 + *pfVar2 * *pfVar1;
    } while ((int)uVar8 < iVar6);
  }
  if (__real_322bcc77 < (float)((uint)fVar9 & __xmm_7fffffff7fffffff7fffffff7fffffff)) {
    uVar8 = 0;
    fVar9 = __real_3f800000 / SQRT(fVar9);
    if (0 < iVar6) {
      lVar7 = 0;
      do {
        uVar5 = 0;
        if ((int)uVar8 < iVar6) {
          uVar5 = ~uVar8 >> 0x1f;
        }
        if ((uVar5 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0x14f,L"Array index out of bounds: %lld from an array of size %lld")
           , bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        iVar6 = param_1->ArrayNum;
        uVar8 = uVar8 + 1;
        *(float *)(lVar7 + (longlong)param_1->DataPtr) =
             fVar9 * *(float *)(lVar7 + (longlong)param_1->DataPtr);
        lVar7 = lVar7 + 4;
      } while ((int)uVar8 < iVar6);
    }
  }
  return;
}

