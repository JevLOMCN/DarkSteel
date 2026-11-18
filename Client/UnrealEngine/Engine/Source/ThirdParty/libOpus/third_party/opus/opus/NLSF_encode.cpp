// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: libOpus
// Functions: 1

// silk_NLSF_encode @ 14f894388

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

int silk_NLSF_encode(undefined1 *param_1,longlong param_2,short *param_3,longlong param_4,
                    int param_5,uint param_6,uint param_7)

{
  undefined1 *_Dst;
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 *puVar8;
  short sVar9;
  uint uVar10;
  byte bVar11;
  ulonglong uVar12;
  longlong lVar13;
  longlong lVar14;
  void *_Src;
  int *piVar15;
  ulonglong uVar16;
  short *psVar17;
  undefined2 uVar18;
  int iVar19;
  uint uVar20;
  int iVar21;
  int iVar22;
  uint uVar23;
  int iVar24;
  int iVar25;
  longlong lVar26;
  ulonglong uVar27;
  longlong lVar28;
  undefined8 auStack_1c0 [5];
  longlong lStack_198;
  int aiStack_190 [4];
  short local_180 [4];
  int aiStack_178 [2];
  short asStack_170 [4];
  int local_168 [2];
  longlong local_160;
  int local_158;
  int iStack_154;
  int local_150;
  uint uStack_14c;
  int local_148 [2];
  byte *local_140;
  ulonglong local_138;
  ulonglong local_130;
  longlong local_128;
  longlong local_120;
  longlong local_118;
  short *local_108;
  longlong local_100;
  longlong local_f8;
  int *local_f0;
  undefined1 *local_e8;
  undefined1 local_e0 [16];
  undefined1 local_d0 [32];
  undefined2 local_b0 [16];
  undefined2 local_90 [32];
  ulonglong local_50;
  
  local_50 = __security_cookie.value ^ (ulonglong)local_168;
  uVar27 = (ulonglong)(int)param_6;
  uStack_14c = param_6;
  local_118 = param_4;
  local_108 = param_3;
  local_100 = param_2;
  local_e8 = param_1;
  if (2 < param_7) {
    auStack_1c0[0] = 0x14f8943fc;
    celt_fatal("assertion failed: signalType >= 0 && signalType <= 2",
               "../../../third_party/opus/src/silk/NLSF_encode.c",0x3f);
  }
  auStack_1c0[0] = 0x14f89440d;
  silk_NLSF_stabilize(param_2,*(undefined8 *)(param_3 + 0x20),(int)param_3[1]);
  uVar12 = (longlong)*param_3 * 4 + 0xf;
  if (uVar12 <= (ulonglong)((longlong)*param_3 * 4)) {
    uVar12 = 0xffffffffffffff0;
  }
  auStack_1c0[0] = 0x14f894437;
  lVar4 = -(uVar12 & 0xfffffffffffffff0);
  sVar9 = *param_3;
  uVar2 = *(undefined8 *)(param_3 + 8);
  uVar3 = *(undefined8 *)(param_3 + 4);
  *(int *)((longlong)aiStack_190 + lVar4) = (int)param_3[1];
  *(int *)((longlong)&lStack_198 + lVar4) = (int)sVar9;
  *(undefined8 *)((longlong)auStack_1c0 + lVar4) = 0x14f894461;
  silk_NLSF_VQ((longlong)local_168 + lVar4,param_2,uVar3,uVar2);
  uVar16 = uVar27 * 4;
  uVar12 = uVar16 + 0xf;
  if (uVar12 <= uVar16) {
    uVar12 = 0xffffffffffffff0;
  }
  local_130 = uVar27;
  *(undefined8 *)((longlong)auStack_1c0 + lVar4) = 0x14f89448b;
  sVar9 = *param_3;
  lVar5 = -(uVar12 & 0xfffffffffffffff0);
  lVar6 = (longlong)local_168 + lVar5 + lVar4;
  local_128 = lVar6;
  *(undefined8 *)((longlong)auStack_1c0 + lVar5 + lVar4) = 0x14f8944a9;
  silk_insertion_sort_increasing((longlong)local_168 + lVar4,lVar6,(int)sVar9,param_6);
  uVar12 = uVar16 + 0xf;
  if (uVar12 <= uVar16) {
    uVar12 = 0xffffffffffffff0;
  }
  *(undefined8 *)((longlong)auStack_1c0 + lVar5 + lVar4) = 0x14f8944c8;
  lVar6 = -(uVar12 & 0xfffffffffffffff0);
  piVar15 = (int *)((longlong)local_168 + lVar6 + lVar5 + lVar4);
  local_f0 = piVar15;
  uVar12 = (longlong)(int)(param_6 << 4) + 0xf;
  if (uVar12 <= (ulonglong)(longlong)(int)(param_6 << 4)) {
    uVar12 = 0xffffffffffffff0;
  }
  *(undefined8 *)((longlong)auStack_1c0 + lVar6 + lVar5 + lVar4) = 0x14f8944f2;
  lVar7 = -(uVar12 & 0xfffffffffffffff0);
  local_120 = (longlong)local_168 + lVar7 + lVar6 + lVar5 + lVar4;
  if (0 < (int)param_6) {
    local_168[0] = 0;
    iVar22 = (int)param_7 >> 1;
    lVar28 = local_128 - (longlong)piVar15;
    local_150 = (int)(short)(param_5 >> 2);
    local_f8 = lVar28;
    local_158 = iVar22;
    do {
      sVar9 = param_3[1];
      iVar1 = *(int *)(lVar28 + (longlong)piVar15);
      lVar13 = (longlong)(sVar9 * iVar1);
      local_140 = (byte *)(*(longlong *)(param_3 + 4) + lVar13);
      psVar17 = (short *)(*(longlong *)(param_3 + 8) + lVar13 * 2);
      if (0 < sVar9) {
        param_2 = param_2 - (longlong)psVar17;
        lVar13 = (longlong)local_90 - (longlong)psVar17;
        lVar26 = local_118 - (longlong)psVar17;
        lVar28 = (longlong)local_b0 - (longlong)psVar17;
        local_138 = (ulonglong)(uint)(int)sVar9;
        local_160 = lVar28;
        do {
          iVar22 = (int)*psVar17;
          uVar23 = (uint)*(short *)((longlong)psVar17 + lVar26);
          uVar20 = iVar22 * iVar22;
          *(short *)(lVar13 + (longlong)psVar17) =
               (short)((short)(*(short *)(param_2 + (longlong)psVar17) + (ushort)*local_140 * -0x80)
                       * iVar22 >> 0xe);
          uVar10 = (uVar23 ^ (int)uVar23 >> 0x1f) - ((int)uVar23 >> 0x1f);
          if (uVar10 == 0) {
            iVar22 = 0x1f;
          }
          else {
            iVar22 = 0x1f;
            if (uVar10 != 0) {
              for (; uVar10 >> iVar22 == 0; iVar22 = iVar22 + -1) {
              }
            }
            iVar22 = 0x1e - iVar22;
          }
          iVar24 = uVar23 << ((byte)iVar22 & 0x1f);
          local_160 = CONCAT44(local_160._4_4_,iVar24);
          uVar10 = (uVar20 ^ (int)uVar20 >> 0x1f) - ((int)uVar20 >> 0x1f);
          if (uVar10 == 0) {
            iVar19 = 0x1f;
          }
          else {
            iVar19 = 0x1f;
            if (uVar10 != 0) {
              for (; uVar10 >> iVar19 == 0; iVar19 = iVar19 + -1) {
              }
            }
            iVar19 = 0x1e - iVar19;
          }
          iVar21 = uVar20 << ((byte)iVar19 & 0x1f);
          lVar14 = (longlong)(short)(0x1fffffff / (longlong)(iVar21 >> 0x10));
          iVar25 = (int)((ulonglong)(iVar24 * lVar14) >> 0x10);
          iVar22 = (iVar22 - iVar19) + 8;
          iVar25 = iVar25 + (int)((ulonglong)
                                  ((iVar24 + (int)((ulonglong)((longlong)iVar25 * (longlong)iVar21)
                                                  >> 0x20) * -8) * lVar14) >> 0x10);
          if (iVar22 < 0) {
            bVar11 = -(byte)iVar22;
            iVar19 = -0x80000000 >> (bVar11 & 0x1f);
            iVar24 = 0x7fffffff >> (bVar11 & 0x1f);
            iVar22 = iVar25;
            if (iVar25 < iVar24) {
              iVar22 = iVar24;
            }
            iVar21 = iVar25;
            if (iVar25 < iVar19) {
              iVar21 = iVar19;
            }
            if (iVar19 < iVar25) {
              iVar22 = iVar19;
            }
            if (iVar24 < iVar25) {
              iVar21 = iVar24;
            }
            if (iVar24 < iVar19) {
              iVar21 = iVar22;
            }
            uVar18 = (undefined2)(iVar21 << (bVar11 & 0x1f));
          }
          else if (iVar22 < 0x20) {
            uVar18 = (undefined2)(iVar25 >> ((byte)iVar22 & 0x1f));
          }
          else {
            uVar18 = 0;
          }
          local_140 = local_140 + 1;
          *(undefined2 *)(lVar28 + (longlong)psVar17) = uVar18;
          psVar17 = psVar17 + 1;
          local_138 = local_138 - 1;
        } while (local_138 != 0);
        local_138 = 0;
        param_3 = local_108;
        uVar27 = local_130;
        lVar28 = local_f8;
        param_2 = local_100;
        iVar22 = local_158;
      }
      iStack_154 = iVar1;
      *(undefined8 *)((longlong)auStack_1c0 + lVar7 + lVar6 + lVar5 + lVar4) = 0x14f8946e8;
      silk_NLSF_unpack(local_d0,local_e0,param_3,iVar1);
      sVar9 = param_3[2];
      lVar13 = local_168[0] + local_120;
      *(short *)((longlong)asStack_170 + lVar7 + lVar6 + lVar5 + lVar4) = param_3[1];
      *(int *)((longlong)aiStack_178 + lVar7 + lVar6 + lVar5 + lVar4) = param_5;
      *(short *)((longlong)local_180 + lVar7 + lVar6 + lVar5 + lVar4) = param_3[3];
      uVar2 = *(undefined8 *)(param_3 + 0x1c);
      *(int *)((longlong)aiStack_190 + lVar7 + lVar6 + lVar5 + lVar4 + 8) = (int)sVar9;
      *(undefined8 *)((longlong)aiStack_190 + lVar7 + lVar6 + lVar5 + lVar4) = uVar2;
      *(undefined1 **)((longlong)&lStack_198 + lVar7 + lVar6 + lVar5 + lVar4) = local_d0;
      *(undefined8 *)((longlong)auStack_1c0 + lVar7 + lVar6 + lVar5 + lVar4) = 0x14f894746;
      iVar24 = silk_NLSF_del_dec_quant(lVar13,local_90,local_b0,local_e0);
      *piVar15 = iVar24;
      uVar10 = 0x100;
      lVar13 = (longlong)(*param_3 * iVar22) + *(longlong *)(param_3 + 0xc);
      if (iVar1 != 0) {
        uVar10 = (uint)*(byte *)(lVar13 + -1 + (longlong)iVar1);
      }
      bVar11 = *(byte *)(iVar1 + lVar13);
      *(undefined8 *)((longlong)auStack_1c0 + lVar7 + lVar6 + lVar5 + lVar4) = 0x14f894772;
      sVar9 = silk_lin2log(uVar10 - bVar11);
      local_168[0] = local_168[0] + 0x10;
      *piVar15 = *piVar15 + (short)(0x400 - sVar9) * local_150;
      piVar15 = piVar15 + 1;
      uVar27 = uVar27 - 1;
      local_130 = uVar27;
    } while (uVar27 != 0);
    uVar27 = (ulonglong)uStack_14c;
    piVar15 = local_f0;
  }
  *(undefined8 *)((longlong)auStack_1c0 + lVar7 + lVar6 + lVar5 + lVar4) = 0x14f8947b5;
  silk_insertion_sort_increasing(piVar15,local_148,uVar27 & 0xffffffff,1);
  puVar8 = local_e8;
  _Dst = local_e8 + 1;
  _Src = (void *)((local_148[0] << 4) + local_120);
  *local_e8 = *(undefined1 *)(local_128 + (longlong)local_148[0] * 4);
  sVar9 = param_3[1];
  *(undefined8 *)((longlong)auStack_1c0 + lVar7 + lVar6 + lVar5 + lVar4) = 0x14f8947e4;
  memcpy(_Dst,_Src,(longlong)sVar9);
  *(undefined8 *)((longlong)auStack_1c0 + lVar7 + lVar6 + lVar5 + lVar4) = 0x14f8947f2;
  silk_NLSF_decode(param_2,puVar8,param_3);
  iVar22 = *piVar15;
  *(undefined8 *)((longlong)auStack_1c0 + lVar7 + lVar6 + lVar5 + lVar4) = 0x14f894803;
  return iVar22;
}

