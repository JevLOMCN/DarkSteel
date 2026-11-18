// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OpenSSL
// Functions: 3

// BN_div @ 14f729a70

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

int BN_div(longlong param_1,longlong param_2,undefined8 param_3,longlong *param_4,undefined8 param_5
          )

{
  int iVar1;
  undefined8 in_stack_ffffffffffffffe8;
  undefined4 uVar2;
  undefined8 uVar3;
  
  uVar2 = (undefined4)((ulonglong)in_stack_ffffffffffffffe8 >> 0x20);
  uVar3 = 0x14f729a8a;
  iVar1 = BN_is_zero(param_4);
  if (iVar1 == 0) {
    if (*(longlong *)(*param_4 + (longlong)((int)param_4[1] + -1) * 8) == 0) {
      ERR_put_error(3,0x6b,0x6b,"crypto\\bn\\bn_div.c",CONCAT44(uVar2,0xe1));
      iVar1 = 0;
    }
    else {
      iVar1 = bn_div_fixed_top(param_1,param_2,param_3,param_4,param_5,uVar3);
      if (iVar1 != 0) {
        if (param_1 != 0) {
          bn_correct_top(param_1);
        }
        if (param_2 != 0) {
          bn_correct_top(param_2);
        }
      }
    }
  }
  else {
    ERR_put_error(3,0x6b,0x67,"crypto\\bn\\bn_div.c",CONCAT44(uVar2,0xd7));
    iVar1 = 0;
  }
  return iVar1;
}

// bn_div_fixed_top @ 14f729b60

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
bn_div_fixed_top(longlong *param_1,longlong param_2,longlong param_3,longlong param_4,
                undefined8 param_5)

{
  longlong *plVar1;
  uint uVar2;
  uint uVar3;
  ulonglong uVar4;
  longlong *plVar5;
  longlong *plVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined4 uVar10;
  int iVar11;
  longlong *plVar12;
  longlong *plVar13;
  longlong *plVar14;
  longlong lVar15;
  longlong lVar16;
  ulonglong uVar17;
  undefined8 uVar18;
  longlong lVar19;
  ulonglong uVar20;
  longlong lVar21;
  uint uVar22;
  ulonglong *puVar23;
  ulonglong uVar24;
  ulonglong uVar25;
  ulonglong uVar26;
  ulonglong uVar27;
  bool bVar28;
  ulonglong local_res8;
  ulonglong *local_78;
  longlong *local_60;
  
  BN_CTX_start(param_5);
  if (param_1 == (longlong *)0x0) {
    param_1 = (longlong *)BN_CTX_get(param_5);
  }
  plVar12 = (longlong *)BN_CTX_get(param_5);
  plVar13 = (longlong *)BN_CTX_get(param_5);
  plVar14 = (longlong *)BN_CTX_get(param_5);
  if ((plVar14 != (longlong *)0x0) && (lVar15 = BN_copy(plVar14,param_4), lVar15 != 0)) {
    uVar10 = FUN_14f729f60(plVar14);
    *(undefined4 *)(plVar14 + 2) = 0;
    iVar11 = bn_lshift_fixed_top(plVar13,param_3,uVar10);
    if (iVar11 != 0) {
      uVar2 = *(uint *)(plVar14 + 1);
      iVar11 = (int)plVar13[1];
      if (iVar11 <= (int)uVar2) {
        lVar15 = bn_wexpand(plVar13);
        if (lVar15 == 0) goto LAB_14f729f29;
        memset((void *)(*plVar13 + (longlong)iVar11 * 8),0,
               (longlong)(int)((uVar2 - iVar11) + 1) << 3);
        iVar11 = uVar2 + 1;
        *(int *)(plVar13 + 1) = iVar11;
      }
      uVar22 = iVar11 - uVar2;
      local_78 = (ulonglong *)((longlong)(int)uVar22 * 8 + *plVar13);
      puVar23 = (ulonglong *)(*plVar13 + (longlong)(iVar11 + -1) * 8);
      lVar15 = (longlong)(int)(uVar2 - 1);
      uVar4 = *(ulonglong *)(*plVar14 + lVar15 * 8);
      if (uVar2 == 1) {
        uVar27 = 0;
      }
      else {
        uVar27 = *(ulonglong *)(*plVar14 + (longlong)(int)(uVar2 - 2) * 8);
      }
      lVar16 = bn_wexpand(param_1,uVar22);
      if (lVar16 != 0) {
        uVar3 = *(uint *)(param_3 + 0x10);
        local_60 = (longlong *)(*param_1 + (longlong)(int)uVar22 * 8);
        *(uint *)(param_1 + 2) = *(uint *)(param_4 + 0x10) ^ uVar3;
        *(uint *)(param_1 + 1) = uVar22;
        lVar16 = bn_wexpand(plVar12,uVar2 + 1);
        if (lVar16 != 0) {
          if (0 < (int)uVar22) {
            local_res8 = (ulonglong)uVar22;
            do {
              uVar26 = puVar23[-1];
              if (*puVar23 == uVar4) {
                uVar25 = 0xffffffffffffffff;
              }
              else {
                if (puVar23 == local_78) {
                  uVar24 = 0;
                }
                else {
                  uVar24 = puVar23[-2];
                }
                uVar25 = bn_div_words(*puVar23,uVar26,uVar4);
                auVar7._8_8_ = 0;
                auVar7._0_8_ = uVar25;
                auVar8._8_8_ = 0;
                auVar8._0_8_ = uVar27;
                auVar9 = auVar7 * auVar8;
                uVar26 = uVar26 - uVar25 * uVar4;
                bVar28 = auVar9._8_8_ == uVar26;
                if (uVar26 <= auVar9._8_8_) {
                  do {
                    uVar20 = auVar9._8_8_;
                    uVar17 = auVar9._0_8_;
                    if ((bVar28) && (uVar17 <= uVar24)) break;
                    uVar25 = uVar25 - 1;
                    uVar26 = uVar26 + uVar4;
                    if (uVar26 < uVar4) break;
                    if (uVar17 < uVar27) {
                      uVar20 = uVar20 - 1;
                    }
                    auVar9._8_8_ = uVar20;
                    auVar9._0_8_ = uVar17 - uVar27;
                    bVar28 = uVar20 == uVar26;
                  } while (uVar26 <= uVar20);
                }
              }
              uVar18 = bn_mul_words(*plVar12,*plVar14,uVar2,uVar25);
              *(undefined8 *)(*plVar12 + (longlong)(int)uVar2 * 8) = uVar18;
              local_78 = local_78 + -1;
              lVar19 = bn_sub_words(local_78,local_78,*plVar12,uVar2 + 1);
              uVar26 = -lVar19;
              lVar21 = 0;
              lVar16 = lVar21;
              if ((0 < (int)uVar2) && (3 < uVar2)) {
                plVar5 = (longlong *)*plVar12;
                plVar6 = (longlong *)*plVar14;
                plVar1 = plVar5 + lVar15;
                if ((((plVar6 + lVar15 < plVar5) || (plVar1 < plVar6)) &&
                    ((lVar16 = 0, plVar12 < plVar5 || (plVar1 < plVar12)))) &&
                   ((plVar14 < plVar5 || (plVar1 < plVar14)))) {
                  uVar22 = uVar2 & 0x80000003;
                  if ((int)uVar22 < 0) {
                    uVar22 = (uVar22 - 1 | 0xfffffffc) + 1;
                  }
                  do {
                    uVar24 = (plVar6 + lVar21)[1];
                    plVar5[lVar21] = plVar6[lVar21] & uVar26;
                    (plVar5 + lVar21)[1] = uVar24 & uVar26;
                    uVar24 = (plVar6 + lVar21 + 2)[1];
                    plVar5[lVar21 + 2] = plVar6[lVar21 + 2] & uVar26;
                    (plVar5 + lVar21 + 2)[1] = uVar24 & uVar26;
                    lVar21 = lVar21 + 4;
                    lVar16 = lVar21;
                  } while (lVar21 < (int)(uVar2 - uVar22));
                }
              }
              for (; lVar16 < (int)uVar2; lVar16 = lVar16 + 1) {
                *(ulonglong *)(*plVar12 + lVar16 * 8) =
                     *(ulonglong *)(*plVar14 + lVar16 * 8) & uVar26;
              }
              lVar16 = bn_add_words(local_78,local_78,*plVar12,uVar2);
              *puVar23 = *puVar23 + lVar16;
              puVar23 = puVar23 + -1;
              local_60 = local_60 + -1;
              local_res8 = local_res8 - 1;
              *local_60 = uVar25 - lVar19;
            } while (local_res8 != 0);
          }
          *(uint *)(plVar13 + 2) = uVar3;
          *(uint *)(plVar13 + 1) = uVar2;
          if ((param_2 == 0) || (iVar11 = bn_rshift_fixed_top(param_2,plVar13,uVar10), iVar11 != 0))
          {
            BN_CTX_end(param_5);
            return 1;
          }
        }
      }
    }
  }
LAB_14f729f29:
  BN_CTX_end(param_5);
  return 0;
}

// FUN_14f729f60 @ 14f729f60

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

int FUN_14f729f60(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  ulonglong uVar3;
  uint uVar4;
  uint uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  
  iVar1 = (int)param_1[1];
  lVar2 = *param_1;
  uVar4 = BN_num_bits_word(*(undefined8 *)(lVar2 + (longlong)(iVar1 + -1) * 8));
  uVar5 = uVar4 & 0x8000003f;
  if ((int)uVar5 < 0) {
    uVar5 = (uVar5 - 1 | 0xffffffc0) + 1;
  }
  uVar6 = 0;
  uVar7 = uVar6;
  if (0 < (longlong)iVar1) {
    do {
      uVar3 = *(ulonglong *)(lVar2 + uVar7 * 8);
      *(ulonglong *)(lVar2 + uVar7 * 8) = uVar3 << ((byte)(0x40 - uVar4) & 0x3f) | uVar6;
      uVar6 = uVar3 >> ((byte)uVar5 & 0x3f) &
              (-(longlong)(int)uVar5 | (ulonglong)-(longlong)(int)uVar5 >> 8);
      uVar7 = uVar7 + 1;
    } while ((longlong)uVar7 < (longlong)iVar1);
  }
  return 0x40 - uVar4;
}

