// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OpenSSL
// Functions: 21

// FUN_14f775050 @ 14f775050

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong FUN_14f775050(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  
  lVar2 = CRYPTO_malloc(0x18,"crypto\\conf\\conf_def.c",0x6a);
  if ((lVar2 != 0) && (iVar1 = (**(code **)(param_1 + 0x10))(lVar2), iVar1 == 0)) {
    CRYPTO_free(lVar2,"crypto\\conf\\conf_def.c",0x6d);
    return 0;
  }
  return lVar2;
}

// FUN_14f775140 @ 14f775140

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_14f775140(longlong param_1)

{
  if (param_1 != 0) {
    _CONF_free_data();
    CRYPTO_free(param_1,"crypto\\conf\\conf_def.c",0x8e);
    return 1;
  }
  return 0;
}

// FUN_14f775190 @ 14f775190

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_14f775190(longlong param_1)

{
  if (param_1 == 0) {
    return 0;
  }
  _CONF_free_data();
  return 1;
}

// FUN_14f7751c0 @ 14f7751c0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined4 FUN_14f7751c0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  uint uVar1;
  undefined4 uVar2;
  longlong lVar3;
  undefined8 uVar4;
  
  uVar4 = 0x14f7751d5;
  lVar3 = BIO_new_file(param_2,"rb");
  if (lVar3 != 0) {
    uVar2 = FUN_14f775290(param_1,lVar3,param_3);
    BIO_free(lVar3);
    return uVar2;
  }
  uVar1 = ERR_peek_last_error();
  if ((uVar1 & 0xfff) == 0x80) {
    ERR_put_error(0xe,0x78,0x72,"crypto\\conf\\conf_def.c",0xa8,uVar4);
    return 0;
  }
  ERR_put_error(0xe,0x78,2,"crypto\\conf\\conf_def.c",0xaa,uVar4);
  return 0;
}

// FUN_14f775290 @ 14f775290

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined4 FUN_14f775290(longlong param_1,longlong param_2,undefined4 *param_3)

{
  byte bVar1;
  byte bVar2;
  longlong lVar3;
  ulonglong uVar4;
  int iVar5;
  int iVar6;
  byte *pbVar7;
  longlong lVar8;
  longlong lVar9;
  byte *pbVar10;
  longlong lVar11;
  ulonglong uVar12;
  char *pcVar13;
  short *_Dst;
  uint uVar14;
  uint uVar15;
  byte *pbVar16;
  undefined8 uVar17;
  byte *pbVar18;
  ulonglong uVar19;
  ulonglong uVar20;
  bool bVar21;
  undefined1 auStack_f8 [32];
  undefined4 local_d8;
  uint local_c8;
  int local_c0;
  longlong local_b8;
  int local_b0;
  int local_ac;
  longlong local_a8;
  undefined2 local_a0;
  byte *local_98;
  ulonglong local_90;
  longlong local_88;
  longlong local_80;
  byte *local_78;
  ulonglong local_70;
  undefined4 *local_68;
  longlong local_60;
  undefined1 local_58 [16];
  ulonglong local_48;
  undefined8 uStack_40;
  
  uStack_40 = 0x14f7752af;
  local_48 = __security_cookie.value ^ (ulonglong)auStack_f8;
  uVar12 = 0;
  local_c8 = 0;
  local_ac = 1;
  local_60 = *(longlong *)(param_1 + 0x10);
  uVar20 = 0;
  uVar19 = 0;
  local_98 = (byte *)0x0;
  local_80 = 0;
  local_90 = 0;
  local_88 = 0;
  local_b8 = param_2;
  local_68 = param_3;
  local_a8 = BUF_MEM_new();
  if (local_a8 == 0) {
    local_d8 = 0xcb;
    ERR_put_error(0xe,0x79,7,"crypto\\conf\\conf_def.c");
    uVar19 = uVar12;
    uVar20 = uVar12;
    goto LAB_14f775bf4;
  }
  pbVar7 = (byte *)CRYPTO_strdup("default","crypto\\conf\\conf_def.c",0xcf);
  local_98 = pbVar7;
  local_78 = pbVar7;
  if (pbVar7 == (byte *)0x0) {
    local_d8 = 0xd1;
  }
  else {
    iVar6 = _CONF_new_data(param_1);
    if (iVar6 != 0) {
      lVar11 = _CONF_new_section(param_1,pbVar7);
      lVar9 = local_a8;
      if (lVar11 == 0) {
        local_d8 = 0xdc;
        ERR_put_error(0xe,0x79,0x67,"crypto\\conf\\conf_def.c");
        uVar20 = 0;
      }
      else {
        iVar6 = 0;
        local_c0 = 0;
        local_b0 = 0;
        lVar8 = BUF_MEM_grow(local_a8,0x200);
        iVar5 = 1;
        if (lVar8 != 0) {
LAB_14f775400:
          lVar8 = local_80;
          _Dst = (short *)((longlong)iVar6 + *(longlong *)(lVar9 + 8));
          *(undefined1 *)_Dst = 0;
          while( true ) {
            BIO_gets(param_2,_Dst,0x1ff);
            *(undefined1 *)((longlong)_Dst + 0x1ff) = 0;
            uVar19 = 0xffffffffffffffff;
            do {
              uVar20 = uVar19;
              uVar19 = uVar20 + 1;
            } while (*(char *)((longlong)_Dst + uVar19) != '\0');
            lVar9 = param_2;
            if (iVar5 != 0) {
              local_a0 = 0xbbef;
              if (((2 < (int)uVar19) && (*_Dst == -0x4411)) && ((char)_Dst[1] == -0x41)) {
                uVar14 = (int)uVar20 - 2;
                memmove(_Dst,(undefined1 *)((longlong)_Dst + 3),(longlong)(int)uVar14);
                uVar19 = (ulonglong)uVar14;
                *(undefined1 *)((longlong)(int)uVar14 + (longlong)_Dst) = 0;
                param_2 = local_b8;
              }
              local_ac = 0;
              lVar9 = param_2;
            }
            uVar14 = (uint)uVar19;
            if ((uVar14 != 0) || (local_b0 != 0)) break;
            if (local_88 == 0) {
LAB_14f7754dd:
              param_2 = OPENSSL_sk_pop(lVar8);
              if (param_2 == 0) {
                BUF_MEM_free(local_a8);
                CRYPTO_free(local_98,"crypto\\conf\\conf_def.c",0x1bf);
                OPENSSL_sk_free(lVar8);
                return 1;
              }
            }
            else {
              param_2 = FUN_14f776120(uVar12,&local_88);
              if (param_2 == 0) {
                CRYPTO_free(uVar12,"crypto\\conf\\conf_def.c",0x108);
                uVar12 = 0;
                local_90 = 0;
                goto LAB_14f7754dd;
              }
            }
            BIO_vfree(lVar9);
            iVar5 = local_ac;
            local_b8 = param_2;
          }
          bVar21 = false;
          local_b0 = 0;
          uVar19 = uVar19 & 0xffffffff;
          uVar15 = uVar14;
          if (0 < (int)uVar14) {
            pcVar13 = (char *)((longlong)_Dst + (longlong)(int)uVar14 + -1);
            do {
              uVar15 = (uint)uVar19;
              if ((*pcVar13 != '\r') && (*pcVar13 != '\n')) break;
              pcVar13 = pcVar13 + -1;
              uVar15 = uVar15 - 1;
              uVar19 = (ulonglong)uVar15;
            } while (0 < (longlong)(pcVar13 + (1 - (longlong)_Dst)));
          }
          if ((uVar14 == 0) || (uVar15 != uVar14)) {
            local_c8 = local_c8 + 1;
            *(undefined1 *)((longlong)(int)uVar15 + (longlong)_Dst) = 0;
          }
          else {
            bVar21 = true;
            local_b0 = 1;
          }
          uVar20 = 0;
          local_c0 = local_c0 + uVar15;
          param_2 = lVar9;
          lVar9 = local_b8;
          if (local_c0 < 1) {
LAB_14f7755ec:
            iVar6 = local_c0;
            if (!bVar21) {
              pbVar7 = *(byte **)(local_a8 + 8);
              iVar6 = 0;
              local_c0 = 0;
              FUN_14f775dc0(param_1,pbVar7);
              while (((bVar1 = *pbVar7, bVar1 < 0x80 &&
                      ((*(ushort *)(*(longlong *)(param_1 + 8) + (ulonglong)bVar1 * 2) >> 4 & 1) !=
                       0)) && ((0x7f < bVar1 ||
                               ((*(ushort *)(*(longlong *)(param_1 + 8) + (ulonglong)bVar1 * 2) >> 3
                                & 1) == 0))))) {
                pbVar7 = pbVar7 + 1;
              }
              bVar1 = *pbVar7;
              if ((0x7f < bVar1) ||
                 (param_2 = local_b8, lVar9 = local_b8,
                 (*(ushort *)(*(longlong *)(param_1 + 8) + (ulonglong)bVar1 * 2) >> 3 & 1) == 0)) {
                uVar19 = uVar20;
                if (bVar1 == 0x5b) {
                  do {
                    pbVar7 = pbVar7 + 1;
                    bVar1 = *pbVar7;
                    pbVar10 = pbVar7;
                    pbVar18 = pbVar7;
                    if ((0x7f < bVar1) ||
                       ((*(ushort *)(*(longlong *)(param_1 + 8) + (ulonglong)bVar1 * 2) >> 4 & 1) ==
                        0)) break;
                  } while ((0x7f < bVar1) ||
                          ((*(ushort *)(*(longlong *)(param_1 + 8) + (ulonglong)bVar1 * 2) >> 3 & 1)
                           == 0));
LAB_14f7756b3:
                  bVar1 = *pbVar10;
                  pbVar16 = pbVar10;
                  if (bVar1 < 0x80) {
                    if ((*(ushort *)(*(longlong *)(param_1 + 8) + (ulonglong)bVar1 * 2) >> 5 & 1) ==
                        0) {
                      if ((0x7f < bVar1) ||
                         ((*(ushort *)(*(longlong *)(param_1 + 8) + (ulonglong)bVar1 * 2) & 0x307)
                          == 0)) goto LAB_14f775720;
                      pbVar10 = pbVar10 + 1;
                    }
                    else {
                      if ((0x7f < pbVar10[1]) ||
                         (lVar9 = 1,
                         (*(ushort *)(*(longlong *)(param_1 + 8) + (ulonglong)pbVar10[1] * 2) >> 3 &
                         1) == 0)) {
                        lVar9 = 2;
                      }
                      pbVar10 = pbVar10 + lVar9;
                    }
                    goto LAB_14f7756b3;
                  }
LAB_14f775720:
                  while (((bVar1 = *pbVar16, bVar1 < 0x80 &&
                          ((*(ushort *)(*(longlong *)(param_1 + 8) + (ulonglong)bVar1 * 2) >> 4 & 1)
                           != 0)) &&
                         ((0x7f < bVar1 ||
                          ((*(ushort *)(*(longlong *)(param_1 + 8) + (ulonglong)bVar1 * 2) >> 3 & 1)
                           == 0))))) {
                    pbVar16 = pbVar16 + 1;
                  }
                  if (*pbVar16 != 0x5d) {
                    if ((*pbVar16 == 0) ||
                       (bVar21 = pbVar18 == pbVar16, pbVar10 = pbVar16, pbVar18 = pbVar16, bVar21))
                    {
                      local_d8 = 0x152;
                      ERR_put_error(0xe,0x79,100,"crypto\\conf\\conf_def.c");
                      param_2 = local_b8;
                      goto LAB_14f775bf0;
                    }
                    goto LAB_14f7756b3;
                  }
                  *pbVar10 = 0;
                  iVar5 = FUN_14f7765a0(param_1,0,&local_78,pbVar7);
                  pbVar7 = local_78;
                  if (iVar5 == 0) {
                    local_98 = local_78;
                    param_2 = local_b8;
                    goto LAB_14f775bf0;
                  }
                  local_98 = local_78;
                  lVar11 = _CONF_get_section(param_1,local_78);
                  param_2 = local_b8;
                  lVar9 = local_b8;
                  if ((lVar11 != 0) ||
                     (lVar11 = _CONF_new_section(param_1,pbVar7), param_2 = local_b8,
                     lVar9 = local_b8, lVar11 != 0)) goto LAB_14f775aa7;
                  local_d8 = 0x15c;
LAB_14f775afa:
                  uVar17 = 0x67;
                }
                else {
                  pbVar10 = (byte *)FUN_14f776040(param_1,pbVar7);
                  pbVar18 = local_98;
                  pbVar16 = pbVar10;
                  if ((*pbVar10 == 0x3a) && (pbVar10[1] == 0x3a)) {
                    *pbVar10 = 0;
                    pbVar16 = pbVar10 + 2;
                    pbVar10 = (byte *)FUN_14f776040(param_1,pbVar10 + 2);
                    pbVar18 = pbVar7;
                    pbVar7 = pbVar16;
                    pbVar16 = pbVar10;
                  }
                  while (((bVar1 = *pbVar10, bVar1 < 0x80 &&
                          ((*(ushort *)(*(longlong *)(param_1 + 8) + (ulonglong)bVar1 * 2) >> 4 & 1)
                           != 0)) &&
                         ((0x7f < bVar1 ||
                          ((*(ushort *)(*(longlong *)(param_1 + 8) + (ulonglong)bVar1 * 2) >> 3 & 1)
                           == 0))))) {
                    pbVar10 = pbVar10 + 1;
                  }
                  iVar5 = strncmp((char *)pbVar7,".include",8);
                  if (iVar5 == 0) {
                    if ((pbVar10 != pbVar7 + 8) || (*pbVar10 == 0x3d)) {
                      local_70 = 0;
                      pbVar7 = pbVar10;
                      if (*pbVar10 == 0x3d) {
                        do {
                          pbVar10 = pbVar10 + 1;
                          bVar1 = *pbVar10;
                          pbVar7 = pbVar10;
                          if ((0x7f < bVar1) ||
                             ((*(ushort *)(*(longlong *)(param_1 + 8) + (ulonglong)bVar1 * 2) >> 4 &
                              1) == 0)) break;
                        } while ((0x7f < bVar1) ||
                                ((*(ushort *)(*(longlong *)(param_1 + 8) + (ulonglong)bVar1 * 2) >>
                                  3 & 1) == 0));
                      }
                      while ((0x7f < *pbVar10 ||
                             ((*(ushort *)(*(longlong *)(param_1 + 8) + (ulonglong)*pbVar10 * 2) >>
                               3 & 1) == 0))) {
                        pbVar10 = pbVar10 + 1;
                      }
                      do {
                        pbVar16 = pbVar10;
                        pbVar10 = pbVar16 + -1;
                        if ((pbVar10 < pbVar7) || (0x7f < *pbVar10)) break;
                      } while ((*(ushort *)(*(longlong *)(param_1 + 8) + (ulonglong)*pbVar10 * 2) >>
                                4 & 1) != 0);
                      *pbVar16 = 0;
                      iVar5 = FUN_14f7765a0(param_1,pbVar18,&local_70,pbVar7);
                      uVar4 = local_70;
                      param_2 = local_b8;
                      uVar19 = 0;
                      if (iVar5 == 0) goto LAB_14f775bf0;
                      lVar8 = FUN_14f776310(local_70,&local_88,&local_90);
                      uVar12 = local_90;
                      if (uVar4 != local_90) {
                        CRYPTO_free(uVar4,"crypto\\conf\\conf_def.c",0x17e);
                      }
                      param_2 = local_b8;
                      lVar9 = local_b8;
                      if (lVar8 == 0) goto LAB_14f775aa7;
                      if ((local_80 == 0) && (local_80 = OPENSSL_sk_new_null(), local_80 == 0)) {
                        local_d8 = 0x188;
                        ERR_put_error(0xe,0x79,0x41,"crypto\\conf\\conf_def.c");
                        BIO_free(lVar8);
                        param_2 = local_b8;
                        goto LAB_14f775bf0;
                      }
                      lVar3 = local_b8;
                      iVar5 = OPENSSL_sk_push(local_80,local_b8);
                      param_2 = lVar8;
                      lVar9 = lVar8;
                      if (iVar5 == 0) {
                        local_d8 = 0x18e;
                        ERR_put_error(0xe,0x79,0x41,"crypto\\conf\\conf_def.c");
                        BIO_free(lVar8);
                        param_2 = lVar3;
                        uVar19 = uVar20;
                        goto LAB_14f775bf0;
                      }
                      goto LAB_14f775aa7;
                    }
                  }
                  else if (*pbVar10 == 0x3d) {
                    *pbVar16 = 0;
                    uVar17 = FUN_14f7760d0(param_1,pbVar10 + 1);
                    FUN_14f776a90(param_1,uVar17);
                    uVar20 = CRYPTO_malloc(0x18,"crypto\\conf\\conf_def.c",0x19f);
                    if (uVar20 == 0) {
                      local_d8 = 0x1a0;
                      uVar17 = 0x41;
                    }
                    else {
                      lVar9 = CRYPTO_strdup(pbVar7,"crypto\\conf\\conf_def.c",0x1a3);
                      *(undefined8 *)(uVar20 + 0x10) = 0;
                      *(longlong *)(uVar20 + 8) = lVar9;
                      if (lVar9 != 0) {
                        iVar6 = FUN_14f7765a0(param_1,pbVar18,uVar20 + 0x10,uVar17);
                        param_2 = local_b8;
                        uVar19 = uVar20;
                        if (iVar6 != 0) {
                          pbVar7 = pbVar18;
                          do {
                            bVar1 = *pbVar7;
                            bVar2 = pbVar7[(longlong)local_98 - (longlong)pbVar18];
                            if (bVar1 != bVar2) break;
                            pbVar7 = pbVar7 + 1;
                          } while (bVar2 != 0);
                          lVar9 = lVar11;
                          if (((bVar1 != bVar2) &&
                              (lVar9 = _CONF_get_section(param_1,pbVar18), lVar9 == 0)) &&
                             (lVar9 = _CONF_new_section(param_1,pbVar18), lVar9 == 0)) {
                            local_d8 = 0x1b2;
                            goto LAB_14f775afa;
                          }
                          iVar5 = _CONF_add_string(param_1,lVar9,uVar20);
                          param_2 = local_b8;
                          uVar12 = local_90;
                          iVar6 = local_c0;
                          lVar9 = local_b8;
                          if (iVar5 != 0) goto LAB_14f775aa7;
                          local_d8 = 0x1b8;
                          uVar17 = 0x41;
                          goto LAB_14f775b00;
                        }
                        goto LAB_14f775bf0;
                      }
                      local_d8 = 0x1a6;
                      uVar17 = 0x41;
                    }
                    goto LAB_14f775b00;
                  }
                  local_d8 = 0x197;
                  uVar17 = 0x65;
                }
LAB_14f775b00:
                ERR_put_error(0xe,0x79,uVar17,"crypto\\conf\\conf_def.c");
                param_2 = local_b8;
                uVar19 = uVar20;
                goto LAB_14f775bf0;
              }
            }
          }
          else {
            iVar6 = local_c0 + -1;
            pbVar7 = (byte *)((longlong)iVar6 + *(longlong *)(local_a8 + 8));
            bVar1 = *pbVar7;
            if (((0x7f < bVar1) ||
                ((*(ushort *)(*(longlong *)(param_1 + 8) + (ulonglong)bVar1 * 2) >> 5 & 1) == 0)) ||
               ((1 < local_c0 &&
                ((bVar1 = pbVar7[-1], bVar1 < 0x80 &&
                 ((*(ushort *)(*(longlong *)(param_1 + 8) + (ulonglong)bVar1 * 2) >> 5 & 1) != 0))))
               )) goto LAB_14f7755ec;
            local_b0 = 1;
            local_c0 = iVar6;
          }
LAB_14f775aa7:
          local_b8 = lVar9;
          lVar9 = local_a8;
          lVar8 = BUF_MEM_grow(local_a8,(longlong)(iVar6 + 0x200));
          iVar5 = local_ac;
          if (lVar8 == 0) goto LAB_14f775bc9;
          goto LAB_14f775400;
        }
LAB_14f775bc9:
        local_d8 = 0xe4;
        ERR_put_error(0xe,0x79,7,"crypto\\conf\\conf_def.c");
        param_2 = local_b8;
        uVar19 = 0;
LAB_14f775bf0:
        uVar20 = (ulonglong)local_c8;
      }
      goto LAB_14f775bf4;
    }
    local_d8 = 0xd6;
  }
  ERR_put_error(0xe,0x79,0x41,"crypto\\conf\\conf_def.c");
LAB_14f775bf4:
  BUF_MEM_free(local_a8);
  CRYPTO_free(local_98,"crypto\\conf\\conf_def.c",0x1c8);
  lVar9 = local_80;
  iVar6 = OPENSSL_sk_num(local_80);
  while (0 < iVar6) {
    lVar11 = OPENSSL_sk_pop(lVar9);
    BIO_vfree(param_2);
    iVar6 = OPENSSL_sk_num(lVar9);
    param_2 = lVar11;
  }
  OPENSSL_sk_free(lVar9);
  CRYPTO_free(local_90,"crypto\\conf\\conf_def.c",0x1d5);
  if (local_88 != 0) {
    OPENSSL_DIR_end(&local_88);
  }
  if (local_68 != (undefined4 *)0x0) {
    *local_68 = (int)uVar20;
  }
  BIO_snprintf(local_58,0xd,"%ld",uVar20);
  ERR_add_error_data(2,"line ",local_58);
  if (local_60 != *(longlong *)(param_1 + 0x10)) {
    CONF_free();
    *(undefined8 *)(param_1 + 0x10) = 0;
  }
  if (uVar19 != 0) {
    CRYPTO_free(*(undefined8 *)(uVar19 + 8),"crypto\\conf\\conf_def.c",0x1e2);
    CRYPTO_free(*(undefined8 *)(uVar19 + 0x10),"crypto\\conf\\conf_def.c",0x1e3);
    CRYPTO_free(uVar19,"crypto\\conf\\conf_def.c",0x1e4);
  }
  return 0;
}

// FUN_14f775d40 @ 14f775d40

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_14f775d40(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  OPENSSL_LH_doall_arg(*(undefined8 *)(param_1 + 0x10),FUN_14f775fe0,param_2,param_4,0x14f775d4a);
  return 1;
}

// NCONF_default @ 14f775db0

undefined ** NCONF_default(void)

{
  return &PTR_s_OpenSSL_default_154df9a30;
}

// FUN_14f775dc0 @ 14f775dc0

void FUN_14f775dc0(longlong param_1,byte *param_2)

{
  byte bVar1;
  byte bVar2;
  longlong lVar3;
  byte *pbVar4;
  byte *pbVar5;
  
  for (; bVar1 = *param_2, bVar1 < 0x80; param_2 = param_2 + 1) {
    if ((*(ushort *)(*(longlong *)(param_1 + 8) + (ulonglong)bVar1 * 2) >> 0xb & 1) != 0)
    goto LAB_14f775fc2;
    if ((0x7f < bVar1) ||
       ((*(ushort *)(*(longlong *)(param_1 + 8) + (ulonglong)bVar1 * 2) >> 4 & 1) == 0)) break;
  }
LAB_14f775e20:
  bVar1 = *param_2;
  if (bVar1 < 0x80) {
    if ((*(ushort *)(*(longlong *)(param_1 + 8) + (ulonglong)bVar1 * 2) >> 7 & 1) != 0) {
LAB_14f775fc2:
      *param_2 = 0;
      return;
    }
    if (0x7f < bVar1) goto LAB_14f775fba;
    if ((*(ushort *)(*(longlong *)(param_1 + 8) + (ulonglong)bVar1 * 2) >> 10 & 1) != 0) {
      while( true ) {
        do {
          pbVar4 = param_2;
          pbVar5 = pbVar4 + 1;
          bVar2 = *pbVar5;
          if ((bVar2 < 0x80) &&
             ((*(ushort *)(*(longlong *)(param_1 + 8) + (ulonglong)bVar2 * 2) >> 3 & 1) != 0))
          goto LAB_14f775ea9;
          param_2 = pbVar5;
        } while (bVar2 != bVar1);
        if (pbVar4[2] != bVar1) break;
        param_2 = pbVar4 + 2;
      }
LAB_14f775ea9:
      param_2 = pbVar4 + 2;
      if (*pbVar5 != bVar1) {
        param_2 = pbVar5;
      }
      goto LAB_14f775e20;
    }
    if (bVar1 < 0x80) {
      lVar3 = *(longlong *)(param_1 + 8);
      if ((*(ushort *)(lVar3 + (ulonglong)bVar1 * 2) >> 6 & 1) != 0) {
        do {
          do {
            pbVar5 = param_2;
            pbVar4 = pbVar5 + 1;
            bVar2 = *pbVar4;
            param_2 = pbVar4;
            if (((bVar2 < 0x80) && ((*(ushort *)(lVar3 + (ulonglong)bVar2 * 2) >> 3 & 1) != 0)) ||
               (bVar2 == bVar1)) {
              param_2 = pbVar5 + 2;
              if (*pbVar4 != bVar1) {
                param_2 = pbVar4;
              }
              goto LAB_14f775e20;
            }
          } while ((0x7f < bVar2) || ((*(ushort *)(lVar3 + (ulonglong)bVar2 * 2) >> 5 & 1) == 0));
          param_2 = pbVar5 + 2;
        } while ((0x7f < pbVar5[2]) ||
                ((*(ushort *)(lVar3 + (ulonglong)pbVar5[2] * 2) >> 3 & 1) == 0));
        goto LAB_14f775e20;
      }
      if (0x7f < bVar1) goto LAB_14f775fba;
      if ((*(ushort *)(*(longlong *)(param_1 + 8) + (ulonglong)bVar1 * 2) >> 5 & 1) != 0) {
        if ((0x7f < param_2[1]) ||
           (lVar3 = 1,
           (*(ushort *)(*(longlong *)(param_1 + 8) + (ulonglong)param_2[1] * 2) >> 3 & 1) == 0)) {
          lVar3 = 2;
        }
        param_2 = param_2 + lVar3;
        goto LAB_14f775e20;
      }
      if ((bVar1 < 0x80) &&
         ((*(ushort *)(*(longlong *)(param_1 + 8) + (ulonglong)bVar1 * 2) >> 3 & 1) != 0)) {
        return;
      }
    }
  }
LAB_14f775fba:
  param_2 = param_2 + 1;
  goto LAB_14f775e20;
}

// FUN_14f775fe0 @ 14f775fe0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f775fe0(undefined8 *param_1,undefined8 param_2)

{
  if (param_1[1] != 0) {
    BIO_printf(param_2,"[%s] %s=%s\n",*param_1,param_1[1],param_1[2]);
    return;
  }
  BIO_printf(param_2,"[[%s]]\n",*param_1);
  return;
}

// FUN_14f776040 @ 14f776040

byte * FUN_14f776040(longlong param_1,byte *param_2)

{
  byte bVar1;
  longlong lVar2;
  
  while( true ) {
    while( true ) {
      bVar1 = *param_2;
      if (0x7f < bVar1) {
        return param_2;
      }
      if ((*(ushort *)(*(longlong *)(param_1 + 8) + (ulonglong)bVar1 * 2) >> 5 & 1) == 0) break;
      if ((0x7f < param_2[1]) ||
         (lVar2 = 1,
         (*(ushort *)(*(longlong *)(param_1 + 8) + (ulonglong)param_2[1] * 2) >> 3 & 1) == 0)) {
        lVar2 = 2;
      }
      param_2 = param_2 + lVar2;
    }
    if (0x7f < bVar1) break;
    if ((*(ushort *)(*(longlong *)(param_1 + 8) + (ulonglong)bVar1 * 2) & 0x307) == 0) {
      return param_2;
    }
    param_2 = param_2 + 1;
  }
  return param_2;
}

// FUN_14f7760d0 @ 14f7760d0

byte * FUN_14f7760d0(longlong param_1,byte *param_2)

{
  byte bVar1;
  
  while (((bVar1 = *param_2, bVar1 < 0x80 &&
          ((*(ushort *)(*(longlong *)(param_1 + 8) + (ulonglong)bVar1 * 2) >> 4 & 1) != 0)) &&
         ((0x7f < bVar1 ||
          ((*(ushort *)(*(longlong *)(param_1 + 8) + (ulonglong)bVar1 * 2) >> 3 & 1) == 0))))) {
    param_2 = param_2 + 1;
  }
  return param_2;
}

// FUN_14f776120 @ 14f776120

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong FUN_14f776120(longlong param_1,undefined8 *param_2)

{
  int iVar1;
  longlong lVar2;
  char *pcVar3;
  ulonglong uVar4;
  longlong lVar6;
  longlong lVar7;
  ulonglong uVar5;
  
  lVar7 = -1;
  do {
    lVar7 = lVar7 + 1;
  } while (*(char *)(param_1 + lVar7) != '\0');
  lVar2 = OPENSSL_DIR_read(param_2,param_1);
  do {
    if (lVar2 == 0) {
LAB_14f776282:
      OPENSSL_DIR_end(param_2);
      *param_2 = 0;
      return 0;
    }
    uVar4 = 0xffffffffffffffff;
    do {
      uVar5 = uVar4;
      uVar4 = uVar5 + 1;
    } while (*(char *)(lVar2 + uVar4) != '\0');
    if (((5 < uVar4) && (iVar1 = _stricmp((char *)(lVar2 + -5 + uVar4),".conf"), iVar1 == 0)) ||
       ((4 < uVar4 && (iVar1 = _stricmp((char *)(lVar2 + -4 + uVar4),".cnf"), iVar1 == 0)))) {
      lVar6 = uVar5 + 3 + lVar7;
      pcVar3 = (char *)CRYPTO_zalloc(lVar6,"crypto\\conf\\conf_def.c",0x2e2);
      if (pcVar3 == (char *)0x0) {
        ERR_put_error(0xe,0x6b,0x41,"crypto\\conf\\conf_def.c",0x2e4);
        goto LAB_14f776282;
      }
      if (*pcVar3 == '\0') {
        OPENSSL_strlcpy(pcVar3,param_1,lVar6);
        OPENSSL_strlcat(pcVar3,"/",lVar6);
      }
      OPENSSL_strlcat(pcVar3,lVar2,lVar6);
      lVar2 = BIO_new_file(pcVar3,&s_r);
      CRYPTO_free(pcVar3,"crypto\\conf\\conf_def.c",0x2fa);
      if (lVar2 != 0) {
        return lVar2;
      }
    }
    lVar2 = OPENSSL_DIR_read(param_2,param_1);
  } while( true );
}

// FUN_14f7762f0 @ 14f7762f0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f7762f0(void)

{
  OPENSSL_LH_doall_arg();
  return;
}

// FUN_14f776310 @ 14f776310

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong FUN_14f776310(undefined8 param_1,longlong *param_2,undefined8 *param_3)

{
  int iVar1;
  int *piVar2;
  longlong lVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  ulonglong local_28;
  undefined8 uStack_20;
  
  uStack_20 = 0x14f77631e;
  local_28 = __security_cookie.value ^ (ulonglong)auStack_88;
  local_58 = 0;
  local_50 = 0;
  local_48 = 0;
  local_40 = 0;
  local_38 = 0;
  local_30 = 0;
  iVar1 = _stat64i32(param_1,&local_58);
  if (iVar1 < 0) {
    piVar2 = _errno();
    uVar5 = 0x16;
    local_68 = 0x2b4;
    iVar1 = *piVar2;
    uVar4 = 2;
  }
  else {
    if ((local_58._6_2_ & 0xf000) != 0x4000) {
      lVar3 = BIO_new_file(param_1,&s_r);
      return lVar3;
    }
    if (*param_2 == 0) {
      lVar3 = FUN_14f776120(param_1,param_2);
      if (lVar3 == 0) {
        return 0;
      }
      *param_3 = param_1;
      return lVar3;
    }
    uVar5 = 0x74;
    local_68 = 0x2bd;
    uVar4 = 0xe;
    iVar1 = 0x6f;
  }
  ERR_put_error(uVar4,uVar5,iVar1,"crypto\\conf\\conf_def.c");
  ERR_add_error_data(1,param_1);
  return 0;
}

// FUN_14f776500 @ 14f776500

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f776500(void)

{
  OPENSSL_sk_free();
  return;
}

// FUN_14f776520 @ 14f776520

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f776520(void)

{
  OPENSSL_sk_new_null();
  return;
}

// FUN_14f776540 @ 14f776540

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f776540(void)

{
  OPENSSL_sk_num();
  return;
}

// FUN_14f776560 @ 14f776560

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f776560(void)

{
  OPENSSL_sk_pop();
  return;
}

// FUN_14f776580 @ 14f776580

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f776580(void)

{
  OPENSSL_sk_push();
  return;
}

// FUN_14f7765a0 @ 14f7765a0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_14f7765a0(longlong param_1,byte *param_2,longlong *param_3,byte *param_4)

{
  char cVar1;
  byte bVar2;
  longlong *plVar3;
  longlong lVar4;
  char *pcVar5;
  byte bVar6;
  longlong lVar7;
  byte *pbVar8;
  byte *pbVar9;
  int iVar10;
  byte *pbVar11;
  byte *pbVar12;
  byte bVar13;
  byte *pbVar14;
  undefined8 uVar15;
  byte *pbVar16;
  byte *pbVar17;
  undefined4 uVar18;
  
  bVar2 = 0;
  iVar10 = 0;
  plVar3 = (longlong *)BUF_MEM_new();
  if (plVar3 == (longlong *)0x0) {
    return 0;
  }
  lVar4 = -1;
  do {
    lVar4 = lVar4 + 1;
  } while (param_4[lVar4] != 0);
  lVar4 = BUF_MEM_grow(plVar3);
  if (lVar4 != 0) {
    do {
      pbVar9 = param_4;
LAB_14f776640:
      bVar6 = *pbVar9;
      lVar4 = (longlong)iVar10;
      if (bVar6 < 0x80) {
        if ((*(ushort *)(*(longlong *)(param_1 + 8) + (ulonglong)bVar6 * 2) >> 6 & 1) != 0) {
          while( true ) {
            bVar13 = pbVar9[1];
            pbVar8 = pbVar9 + 1;
            if (((bVar13 < 0x80) &&
                ((*(ushort *)(*(longlong *)(param_1 + 8) + (ulonglong)bVar13 * 2) >> 3 & 1) != 0))
               || (bVar13 == bVar6)) break;
            if ((bVar13 < 0x80) &&
               ((*(ushort *)(*(longlong *)(param_1 + 8) + (ulonglong)bVar13 * 2) >> 5 & 1) != 0)) {
              bVar13 = pbVar9[2];
              pbVar8 = pbVar9 + 2;
              if ((bVar13 < 0x80) &&
                 ((*(ushort *)(*(longlong *)(param_1 + 8) + (ulonglong)bVar13 * 2) >> 3 & 1) != 0))
              break;
            }
            iVar10 = iVar10 + 1;
            *(byte *)(lVar4 + plVar3[1]) = bVar13;
            lVar4 = lVar4 + 1;
            pbVar9 = pbVar8;
          }
LAB_14f776751:
          pbVar9 = pbVar8;
          if (*pbVar8 == bVar6) {
            pbVar9 = pbVar8 + 1;
          }
          goto LAB_14f776640;
        }
        if (0x7f < bVar6) goto LAB_14f776824;
        if ((*(ushort *)(*(longlong *)(param_1 + 8) + (ulonglong)bVar6 * 2) >> 10 & 1) != 0) {
          do {
            bVar13 = pbVar9[1];
            pbVar8 = pbVar9 + 1;
            if ((bVar13 < 0x80) &&
               ((*(ushort *)(*(longlong *)(param_1 + 8) + (ulonglong)bVar13 * 2) >> 3 & 1) != 0))
            goto LAB_14f776751;
            if (bVar13 == bVar6) {
              if (pbVar9[2] != bVar6) goto LAB_14f776751;
              pbVar8 = pbVar9 + 2;
            }
            iVar10 = iVar10 + 1;
            *(byte *)(lVar4 + plVar3[1]) = *pbVar8;
            lVar4 = lVar4 + 1;
            pbVar9 = pbVar8;
          } while( true );
        }
        if (bVar6 < 0x80) {
          if ((*(ushort *)(*(longlong *)(param_1 + 8) + (ulonglong)bVar6 * 2) >> 5 & 1) != 0) {
            bVar6 = pbVar9[1];
            pbVar9 = pbVar9 + 2;
            if ((bVar6 < 0x80) &&
               ((*(ushort *)(*(longlong *)(param_1 + 8) + (ulonglong)bVar6 * 2) >> 3 & 1) != 0)) {
LAB_14f776998:
              *(undefined1 *)((longlong)iVar10 + plVar3[1]) = 0;
              CRYPTO_free(*param_3,"crypto\\conf\\conf_def.c",0x29e);
              *param_3 = plVar3[1];
              CRYPTO_free(plVar3,"crypto\\conf\\conf_def.c",0x2a0);
              return 1;
            }
            if (bVar6 == 0x72) {
              iVar10 = iVar10 + 1;
              *(undefined1 *)(lVar4 + plVar3[1]) = 0xd;
            }
            else if (bVar6 == 0x6e) {
              iVar10 = iVar10 + 1;
              *(undefined1 *)(lVar4 + plVar3[1]) = 10;
            }
            else if (bVar6 == 0x62) {
              iVar10 = iVar10 + 1;
              *(undefined1 *)(lVar4 + plVar3[1]) = 8;
            }
            else {
              if (bVar6 == 0x74) {
                bVar6 = 9;
              }
              iVar10 = iVar10 + 1;
              *(byte *)(lVar4 + plVar3[1]) = bVar6;
            }
            goto LAB_14f776640;
          }
          if ((bVar6 < 0x80) &&
             ((*(ushort *)(*(longlong *)(param_1 + 8) + (ulonglong)bVar6 * 2) >> 3 & 1) != 0))
          goto LAB_14f776998;
        }
      }
LAB_14f776824:
      if (bVar6 != 0x24) {
        iVar10 = iVar10 + 1;
        *(byte *)(lVar4 + plVar3[1]) = bVar6;
        pbVar9 = pbVar9 + 1;
        goto LAB_14f776640;
      }
      pbVar8 = pbVar9 + 1;
      if (pbVar9[1] == 0x7b) {
        bVar6 = 0x7d;
        pbVar8 = pbVar9 + 2;
        pbVar14 = pbVar8;
      }
      else if (pbVar9[1] == 0x28) {
        bVar6 = 0x29;
        pbVar8 = pbVar9 + 2;
        pbVar14 = pbVar8;
      }
      else {
        bVar6 = 0;
        pbVar14 = pbVar8;
      }
      while ((*pbVar8 < 0x80 &&
             ((*(ushort *)(*(longlong *)(param_1 + 8) + (ulonglong)*pbVar8 * 2) & 0x107) != 0))) {
        pbVar8 = pbVar8 + 1;
      }
      pbVar12 = pbVar8;
      pbVar11 = pbVar14;
      pbVar16 = param_2;
      pbVar17 = (byte *)0x0;
      if ((*pbVar8 == 0x3a) && (pbVar8[1] == 0x3a)) {
        *pbVar8 = 0;
        pbVar11 = pbVar8 + 2;
        bVar2 = 0x3a;
        pbVar12 = pbVar11;
        while ((pbVar16 = pbVar14, pbVar17 = pbVar8, *pbVar12 < 0x80 &&
               ((*(ushort *)(*(longlong *)(param_1 + 8) + (ulonglong)*pbVar12 * 2) & 0x107) != 0)))
        {
          pbVar12 = pbVar12 + 1;
        }
      }
      bVar13 = *pbVar12;
      *pbVar12 = 0;
      param_4 = pbVar12;
      if (bVar6 != 0) {
        if (bVar13 == bVar6) {
          param_4 = pbVar12 + 1;
          goto LAB_14f7768e3;
        }
        uVar18 = 0x26a;
        uVar15 = 0x66;
LAB_14f776a48:
        ERR_put_error(0xe,0x65,uVar15,"crypto\\conf\\conf_def.c",uVar18);
        break;
      }
LAB_14f7768e3:
      pcVar5 = (char *)_CONF_get_string(param_1,pbVar16,pbVar11);
      if (pbVar17 != (byte *)0x0) {
        *pbVar17 = bVar2;
      }
      *pbVar12 = bVar13;
      if (pcVar5 == (char *)0x0) {
        uVar18 = 0x27e;
        uVar15 = 0x68;
        goto LAB_14f776a48;
      }
      lVar7 = -1;
      do {
        lVar7 = lVar7 + 1;
      } while (pcVar5[lVar7] != '\0');
      if ((byte *)0x10000 < pbVar9 + *plVar3 + (lVar7 - (longlong)param_4)) {
        ERR_put_error(0xe,0x65,0x74,"crypto\\conf\\conf_def.c",0x283);
        break;
      }
      lVar7 = BUF_MEM_grow_clean(plVar3);
      if (lVar7 == 0) goto LAB_14f7769f6;
      cVar1 = *pcVar5;
      while (cVar1 != '\0') {
        pcVar5 = pcVar5 + 1;
        iVar10 = iVar10 + 1;
        *(char *)(lVar4 + plVar3[1]) = cVar1;
        lVar4 = lVar4 + 1;
        cVar1 = *pcVar5;
      }
      *pbVar12 = bVar13;
    } while( true );
  }
LAB_14f776a61:
  BUF_MEM_free(plVar3);
  return 0;
LAB_14f7769f6:
  ERR_put_error(0xe,0x65,0x41,"crypto\\conf\\conf_def.c",0x287);
  goto LAB_14f776a61;
}

// FUN_14f776a90 @ 14f776a90

void FUN_14f776a90(longlong param_1,byte *param_2)

{
  byte *pbVar1;
  byte *pbVar2;
  
  pbVar2 = param_2;
  while ((0x7f < *pbVar2 ||
         ((*(ushort *)(*(longlong *)(param_1 + 8) + (ulonglong)*pbVar2 * 2) >> 3 & 1) == 0))) {
    pbVar2 = pbVar2 + 1;
  }
  do {
    pbVar1 = pbVar2;
    pbVar2 = pbVar1 + -1;
    if ((pbVar2 < param_2) || (0x7f < *pbVar2)) break;
  } while ((*(ushort *)(*(longlong *)(param_1 + 8) + (ulonglong)*pbVar2 * 2) >> 4 & 1) != 0);
  *pbVar1 = 0;
  return;
}

