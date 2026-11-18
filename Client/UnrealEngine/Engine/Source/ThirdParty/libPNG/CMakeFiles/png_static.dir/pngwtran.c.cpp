// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: libPNG
// Functions: 1

// png_do_write_transformations @ 140dd91f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
png_do_write_transformations(png_struct_def_conflict *param_1,png_row_info_struct *param_2)

{
  byte bVar1;
  uchar uVar2;
  int iVar3;
  uchar *puVar4;
  bool bVar5;
  code *pcVar6;
  byte bVar7;
  byte bVar8;
  int iVar9;
  byte *pbVar10;
  ulonglong *puVar11;
  uchar *puVar12;
  ushort uVar13;
  ulonglong uVar14;
  int iVar15;
  longlong lVar16;
  uint uVar17;
  ushort uVar18;
  uint uVar19;
  uint uVar20;
  byte *pbVar21;
  ushort *puVar22;
  uint uVar23;
  longlong lVar24;
  uint uVar25;
  ulonglong uVar26;
  uint uVar27;
  uint uVar28;
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auStack_a8 [32];
  ulonglong local_88;
  png_struct_def_conflict *local_80;
  png_row_info_struct *local_78;
  ulonglong local_70;
  uint local_68 [4];
  int local_58 [4];
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_a8;
  if (param_1 != (png_struct_def_conflict *)0x0) {
    uVar20 = param_1->transformations;
    if (((uVar20 & 0x100000) != 0) &&
       (param_1->write_user_transform_fn !=
        (_func___cdecl_void_png_struct_def_ptr_png_row_info_struct_ptr_uchar_ptr_conflict *)0x0)) {
      (*param_1->write_user_transform_fn)(param_1,param_2,param_1->row_buf + 1);
      uVar20 = param_1->transformations;
    }
    if ((short)uVar20 < 0) {
      png_do_strip_channel(param_2,param_1->row_buf + 1,(uint)(-1 < (char)param_1->flags));
      uVar20 = param_1->transformations;
    }
    if ((uVar20 & 0x10000) != 0) {
      png_do_packswap(param_2,param_1->row_buf + 1);
      uVar20 = param_1->transformations;
    }
    if ((((uVar20 & 4) != 0) && (param_2->bit_depth == '\b')) && (param_2->channels == '\x01')) {
      uVar2 = param_1->bit_depth;
      puVar12 = param_1->row_buf;
      pbVar10 = puVar12 + 1;
      if (uVar2 == '\x04') {
        uVar20 = param_2->width;
        if (uVar20 != 0) {
          lVar16 = 1;
          do {
            bVar7 = puVar12[lVar16] << 4;
            if ((uint)lVar16 == uVar20) goto LAB_140dd94f1;
            *pbVar10 = bVar7 | puVar12[lVar16 + 1] & 0xf;
            pbVar10 = pbVar10 + 1;
            lVar16 = lVar16 + 2;
          } while ((int)lVar16 - uVar20 != 1);
        }
      }
      else if (uVar2 == '\x02') {
        uVar20 = param_2->width;
        if (uVar20 != 0) {
          iVar9 = -uVar20;
          lVar16 = 0;
          pbVar21 = pbVar10;
          do {
            bVar7 = pbVar10[lVar16] << 6;
            iVar3 = (int)lVar16;
            if (((iVar9 + iVar3 == -1) ||
                (bVar7 = bVar7 | (puVar12[lVar16 + 2] & 3) << 4, iVar9 + iVar3 == -2)) ||
               (bVar7 = bVar7 | (puVar12[lVar16 + 3] & 3) << 2, iVar9 + iVar3 == -3)) {
              *pbVar21 = bVar7;
              break;
            }
            *pbVar21 = bVar7 | puVar12[lVar16 + 4] & 3;
            pbVar21 = pbVar21 + 1;
            lVar16 = lVar16 + 4;
          } while ((uint)lVar16 != uVar20);
        }
      }
      else if ((uVar2 == '\x01') && (uVar20 = param_2->width, uVar20 != 0)) {
        iVar9 = -uVar20;
        lVar16 = 0;
        lVar24 = 0;
LAB_140dd9315:
        bVar7 = (pbVar10[lVar24] != 0) << 7;
        iVar3 = (int)lVar24;
        if (((((iVar9 + iVar3 != -1) &&
              (bVar7 = (pbVar10[lVar24] != 0) << 7 | (puVar12[lVar24 + 2] != '\0') << 6,
              iVar9 + iVar3 != -2)) &&
             (bVar7 = bVar7 | (puVar12[lVar24 + 3] != '\0') << 5, iVar9 + iVar3 != -3)) &&
            ((bVar7 = (puVar12[lVar24 + 4] != '\0') << 4 | bVar7, iVar9 + iVar3 != -4 &&
             (bVar7 = bVar7 + (puVar12[lVar24 + 5] != '\0') * '\b', iVar9 + iVar3 != -5)))) &&
           ((bVar7 = bVar7 + (puVar12[lVar24 + 6] != '\0') * '\x04', iVar9 + iVar3 != -6 &&
            (bVar7 = (puVar12[lVar24 + 7] != '\0') * '\x02' | bVar7, iVar9 + iVar3 != -7))))
        goto code_r0x000140dd93f1;
        pbVar10 = pbVar10 + lVar16;
LAB_140dd94f1:
        *pbVar10 = bVar7;
      }
LAB_140dd94f3:
      param_2->bit_depth = uVar2;
      bVar7 = param_2->channels * uVar2;
      param_2->pixel_depth = bVar7;
      if (bVar7 < 8) {
        uVar14 = (ulonglong)param_2->width * (ulonglong)bVar7 + 7 >> 3;
      }
      else {
        uVar14 = (ulonglong)param_2->width * (ulonglong)(bVar7 >> 3);
      }
      param_2->rowbytes = uVar14;
      uVar20 = param_1->transformations;
    }
    if ((uVar20 & 0x10) != 0) {
      png_do_swap(param_2,param_1->row_buf + 1);
      uVar20 = param_1->transformations;
    }
    if (((uVar20 & 8) != 0) && (bVar7 = param_2->color_type, bVar7 != 3)) {
      bVar1 = param_2->bit_depth;
      uVar20 = (uint)bVar1;
      if ((bVar7 & 2) == 0) {
        bVar8 = (param_1->shift).gray;
        uVar17 = 1;
      }
      else {
        bVar8 = (param_1->shift).red;
        local_68[1] = (uint)(param_1->shift).green;
        local_58[1] = bVar1 - local_68[1];
        local_68[2] = (uint)(param_1->shift).blue;
        local_58[2] = bVar1 - local_68[2];
        uVar17 = 3;
      }
      puVar12 = param_1->row_buf;
      uVar25 = (uint)bVar8;
      local_58[0] = uVar20 - bVar8;
      local_68[0] = (uint)bVar8;
      if ((bVar7 & 4) != 0) {
        uVar19 = (uint)(param_1->shift).alpha;
        *(uint *)((longlong)local_58 + (ulonglong)(uVar17 * 4)) = bVar1 - uVar19;
        *(uint *)((longlong)local_68 + (ulonglong)(uVar17 * 4)) = uVar19;
        uVar17 = uVar17 + 1;
      }
      puVar22 = (ushort *)(puVar12 + 1);
      if (bVar1 < 8) {
        uVar14 = param_2->rowbytes;
        uVar2 = (param_1->shift).gray;
        uVar17 = 0xff;
        if (uVar2 == '\x03' && bVar1 == 4) {
          uVar17 = 0x11;
        }
        uVar19 = 0x55;
        if (bVar1 != 2 || uVar2 != '\x01') {
          uVar19 = uVar17;
        }
        if (uVar14 != 0) {
          if (bVar1 == 0) {
            memset(puVar22,0,uVar14);
          }
          else {
            if (uVar14 != 1) {
              local_70 = uVar14 & 0xfffffffffffffffe;
              uVar17 = (uint)bVar8;
              uVar26 = 0;
              do {
                uVar27 = 0;
                uVar23 = uVar20;
                iVar9 = uVar25 - uVar20;
                do {
                  iVar3 = -uVar17 + uVar23;
                  uVar28 = (byte)((byte)*puVar22 >> ((byte)iVar9 & 0x1f)) & uVar19;
                  if (0 < iVar3) {
                    uVar28 = (uint)(byte)*puVar22 << ((byte)iVar3 & 0x1f);
                  }
                  uVar27 = uVar27 | uVar28;
                  iVar9 = iVar9 + uVar17;
                  uVar23 = uVar23 - uVar17;
                } while (0 < (int)uVar23);
                *(byte *)puVar22 = (byte)uVar27;
                uVar27 = 0;
                uVar23 = uVar20;
                iVar9 = uVar25 - uVar20;
                do {
                  iVar3 = -uVar17 + uVar23;
                  uVar28 = *(byte *)((longlong)puVar22 + 1) >> ((byte)iVar9 & 0x1f) & uVar19;
                  if (0 < iVar3) {
                    uVar28 = (uint)*(byte *)((longlong)puVar22 + 1) << ((byte)iVar3 & 0x1f);
                  }
                  uVar27 = uVar27 | uVar28;
                  iVar9 = iVar9 + uVar25;
                  uVar23 = uVar23 - uVar25;
                } while (0 < (int)uVar23);
                *(byte *)((longlong)puVar22 + 1) = (byte)uVar27;
                puVar22 = puVar22 + 1;
                uVar26 = uVar26 + 2;
              } while (uVar26 != local_70);
            }
            local_88 = uVar14;
            local_80 = param_1;
            local_78 = param_2;
            if ((uVar14 & 1) != 0) {
              iVar9 = -uVar20;
              uVar17 = 0;
              do {
                iVar9 = uVar25 + iVar9;
                uVar23 = (byte)((byte)*puVar22 >> ((byte)iVar9 & 0x1f)) & uVar19;
                if (0 < (int)(uVar20 - uVar25)) {
                  uVar23 = (uint)(byte)*puVar22 << ((byte)(uVar20 - uVar25) & 0x1f);
                }
                uVar17 = uVar17 | uVar23;
                uVar20 = uVar20 - uVar25;
              } while (0 < (int)uVar20);
              *(byte *)puVar22 = (byte)uVar17;
            }
          }
        }
      }
      else {
        uVar25 = param_2->width * uVar17;
        if (uVar20 == 8) {
          if (uVar25 != 0) {
            uVar20 = 0;
            do {
              uVar14 = (ulonglong)(uVar20 % uVar17 << 2);
              iVar9 = *(int *)((longlong)local_58 + uVar14);
              iVar3 = *(int *)((longlong)local_68 + uVar14);
              bVar7 = 0;
              if (-iVar3 < iVar9) {
                iVar15 = -iVar9;
                uVar19 = 0;
                do {
                  uVar23 = (uint)(byte)((byte)*puVar22 >> ((byte)iVar15 & 0x1f));
                  if (0 < iVar9) {
                    uVar23 = (uint)(byte)*puVar22 << ((byte)iVar9 & 0x1f);
                  }
                  uVar19 = uVar19 | uVar23;
                  bVar7 = (byte)uVar19;
                  iVar15 = iVar15 + iVar3;
                  bVar5 = 0 < iVar9;
                  iVar9 = iVar9 - iVar3;
                } while (bVar5);
              }
              *(byte *)puVar22 = bVar7;
              uVar20 = uVar20 + 1;
              puVar22 = (ushort *)((longlong)puVar22 + 1);
            } while (uVar20 != uVar25);
          }
        }
        else if (uVar25 != 0) {
          uVar20 = 0;
          do {
            uVar14 = (ulonglong)(uVar20 % uVar17 << 2);
            iVar9 = *(int *)((longlong)local_58 + uVar14);
            iVar3 = *(int *)((longlong)local_68 + uVar14);
            uVar18 = 0;
            if (-iVar3 < iVar9) {
              uVar13 = *puVar22 << 8 | *puVar22 >> 8;
              iVar15 = -iVar9;
              uVar19 = 0;
              do {
                uVar23 = (uint)(uVar13 >> ((byte)iVar15 & 0x1f));
                if (0 < iVar9) {
                  uVar23 = (uint)uVar13 << ((byte)iVar9 & 0x1f);
                }
                uVar19 = uVar19 | uVar23;
                uVar18 = (ushort)uVar19;
                iVar15 = iVar15 + iVar3;
                bVar5 = 0 < iVar9;
                iVar9 = iVar9 - iVar3;
              } while (bVar5);
            }
            *puVar22 = uVar18 << 8 | uVar18 >> 8;
            puVar22 = puVar22 + 1;
            uVar20 = uVar20 + 1;
          } while (uVar20 != uVar25);
        }
      }
      uVar20 = param_1->transformations;
    }
    if ((uVar20 & 0x20000) != 0) {
      puVar11 = (ulonglong *)(param_1->row_buf + 1);
      if (param_2->color_type == '\x04') {
        uVar20 = param_2->width;
        if (param_2->bit_depth == '\b') {
          if (uVar20 != 0) {
            if (3 < uVar20) {
              uVar17 = uVar20 & 0xfffffffc;
              do {
                *(ushort *)puVar11 = (short)*puVar11 << 8 | (ushort)*puVar11 >> 8;
                puVar22 = (ushort *)((longlong)puVar11 + 2);
                *puVar22 = *puVar22 << 8 | *puVar22 >> 8;
                puVar22 = (ushort *)((longlong)puVar11 + 4);
                *puVar22 = *puVar22 << 8 | *puVar22 >> 8;
                puVar22 = (ushort *)((longlong)puVar11 + 6);
                *puVar22 = *puVar22 << 8 | *puVar22 >> 8;
                puVar11 = puVar11 + 1;
                uVar17 = uVar17 - 4;
              } while (uVar17 != 0);
            }
            if ((uVar20 & 3) != 0) {
              lVar16 = 0;
              do {
                puVar22 = (ushort *)((longlong)puVar11 + lVar16 * 2);
                *puVar22 = *puVar22 << 8 | *puVar22 >> 8;
                lVar16 = lVar16 + 1;
              } while ((uVar20 & 3) != (uint)lVar16);
            }
          }
        }
        else if (uVar20 != 0) {
          if (3 < uVar20) {
            uVar17 = uVar20 & 0xfffffffc;
            do {
              auVar29 = pshuflw(ZEXT416((uint)*puVar11),ZEXT416((uint)*puVar11),0xe1);
              auVar31 = pshuflw(ZEXT416((uint)puVar11[1]),ZEXT416((uint)puVar11[1]),0xe1);
              auVar30 = pshuflw(ZEXT416(*(uint *)((longlong)puVar11 + 0xc)),
                                ZEXT416(*(uint *)((longlong)puVar11 + 0xc)),0xe1);
              auVar32 = pshuflw(ZEXT416(*(uint *)((longlong)puVar11 + 4)),
                                ZEXT416(*(uint *)((longlong)puVar11 + 4)),0xe1);
              *puVar11 = CONCAT44(auVar32._0_4_,auVar29._0_4_);
              puVar11[1] = CONCAT44(auVar30._0_4_,auVar31._0_4_);
              puVar11 = puVar11 + 2;
              uVar17 = uVar17 - 4;
            } while (uVar17 != 0);
          }
          if ((uVar20 & 3) != 0) {
            lVar16 = 0;
            do {
              auVar29 = ZEXT416(*(uint *)((longlong)puVar11 + lVar16 * 4));
              auVar29 = pshuflw(auVar29,auVar29,0xe1);
              *(int *)((longlong)puVar11 + lVar16 * 4) = auVar29._0_4_;
              lVar16 = lVar16 + 1;
            } while ((uVar20 & 3) != (uint)lVar16);
          }
        }
      }
      else if (param_2->color_type == '\x06') {
        uVar20 = param_2->width;
        if (param_2->bit_depth == '\b') {
          if (uVar20 != 0) {
            if (3 < uVar20) {
              uVar17 = uVar20 & 0xfffffffc;
              do {
                *puVar11 = CONCAT44(*(uint *)((longlong)puVar11 + 4) << 0x18 |
                                    *(uint *)((longlong)puVar11 + 4) >> 8,
                                    (uint)*puVar11 << 0x18 | (uint)*puVar11 >> 8);
                puVar11[1] = CONCAT44(*(uint *)((longlong)puVar11 + 0xc) << 0x18 |
                                      *(uint *)((longlong)puVar11 + 0xc) >> 8,
                                      (uint)puVar11[1] << 0x18 | (uint)puVar11[1] >> 8);
                puVar11 = puVar11 + 2;
                uVar17 = uVar17 - 4;
              } while (uVar17 != 0);
            }
            if ((uVar20 & 3) != 0) {
              lVar16 = 0;
              do {
                uVar17 = *(uint *)((longlong)puVar11 + lVar16 * 4);
                *(uint *)((longlong)puVar11 + lVar16 * 4) = uVar17 << 0x18 | uVar17 >> 8;
                lVar16 = lVar16 + 1;
              } while ((uVar20 & 3) != (uint)lVar16);
            }
          }
        }
        else if (uVar20 != 0) {
          if (uVar20 != 1) {
            uVar17 = uVar20 & 0xfffffffe;
            do {
              auVar29._8_8_ = 0;
              auVar29._0_8_ = *puVar11;
              auVar29 = pshuflw(auVar29,auVar29,0x39);
              auVar31._8_8_ = 0;
              auVar31._0_8_ = puVar11[1];
              auVar31 = pshuflw(auVar31,auVar31,0x39);
              *puVar11 = auVar29._0_8_;
              puVar11[1] = auVar31._0_8_;
              puVar11 = puVar11 + 2;
              uVar17 = uVar17 - 2;
            } while (uVar17 != 0);
          }
          if ((uVar20 & 1) != 0) {
            auVar30._8_8_ = 0;
            auVar30._0_8_ = *puVar11;
            auVar29 = pshuflw(auVar30,auVar30,0x39);
            *puVar11 = auVar29._0_8_;
          }
        }
      }
    }
    if ((param_1->transformations & 0x80000) != 0) {
      puVar4 = param_1->row_buf;
      puVar12 = puVar4 + 1;
      if (param_2->color_type == '\x04') {
        uVar20 = param_2->width;
        if (param_2->bit_depth == '\b') {
          if (uVar20 != 0) {
            if (3 < uVar20) {
              lVar16 = 0;
              do {
                puVar4[lVar16 * 2 + 2] = ~puVar4[lVar16 * 2 + 2];
                puVar4[lVar16 * 2 + 4] = ~puVar4[lVar16 * 2 + 4];
                puVar4[lVar16 * 2 + 6] = ~puVar4[lVar16 * 2 + 6];
                puVar4[lVar16 * 2 + 8] = ~puVar4[lVar16 * 2 + 8];
                puVar12 = puVar12 + 8;
                lVar16 = lVar16 + 4;
              } while ((uVar20 & 0xfffffffc) != (uint)lVar16);
            }
            if ((uVar20 & 3) != 0) {
              lVar16 = 0;
              do {
                puVar12[lVar16 * 2 + 1] = ~puVar12[lVar16 * 2 + 1];
                lVar16 = lVar16 + 1;
              } while ((uVar20 & 3) != (uint)lVar16);
            }
          }
        }
        else if (uVar20 != 0) {
          if (uVar20 != 1) {
            lVar16 = 0;
            do {
              puVar4[lVar16 * 4 + 3] = ~puVar4[lVar16 * 4 + 3];
              puVar4[lVar16 * 4 + 4] = ~puVar4[lVar16 * 4 + 4];
              puVar4[lVar16 * 4 + 7] = ~puVar4[lVar16 * 4 + 7];
              puVar4[lVar16 * 4 + 8] = ~puVar4[lVar16 * 4 + 8];
              puVar12 = puVar12 + 8;
              lVar16 = lVar16 + 2;
            } while ((uVar20 & 0xfffffffe) != (uint)lVar16);
          }
          if ((uVar20 & 1) != 0) {
            puVar12[2] = ~puVar12[2];
            puVar12[3] = ~puVar12[3];
          }
        }
      }
      else if (param_2->color_type == '\x06') {
        uVar20 = param_2->width;
        if (param_2->bit_depth == '\b') {
          if (uVar20 != 0) {
            if (3 < uVar20) {
              lVar16 = 0;
              do {
                puVar4[lVar16 * 4 + 4] = ~puVar4[lVar16 * 4 + 4];
                puVar4[lVar16 * 4 + 8] = ~puVar4[lVar16 * 4 + 8];
                puVar4[lVar16 * 4 + 0xc] = ~puVar4[lVar16 * 4 + 0xc];
                puVar4[lVar16 * 4 + 0x10] = ~puVar4[lVar16 * 4 + 0x10];
                puVar12 = puVar12 + 0x10;
                lVar16 = lVar16 + 4;
              } while ((uVar20 & 0xfffffffc) != (uint)lVar16);
            }
            if ((uVar20 & 3) != 0) {
              lVar16 = 0;
              do {
                puVar12[lVar16 * 4 + 3] = ~puVar12[lVar16 * 4 + 3];
                lVar16 = lVar16 + 1;
              } while ((uVar20 & 3) != (uint)lVar16);
            }
          }
        }
        else if (uVar20 != 0) {
          if (uVar20 != 1) {
            lVar16 = 0;
            do {
              puVar4[lVar16 * 8 + 7] = ~puVar4[lVar16 * 8 + 7];
              puVar4[lVar16 * 8 + 8] = ~puVar4[lVar16 * 8 + 8];
              puVar4[lVar16 * 8 + 0xf] = ~puVar4[lVar16 * 8 + 0xf];
              puVar4[lVar16 * 8 + 0x10] = ~puVar4[lVar16 * 8 + 0x10];
              puVar12 = puVar12 + 0x10;
              lVar16 = lVar16 + 2;
            } while ((uVar20 & 0xfffffffe) != (uint)lVar16);
          }
          if ((uVar20 & 1) != 0) {
            puVar12[6] = ~puVar12[6];
            puVar12[7] = ~puVar12[7];
          }
        }
      }
    }
    uVar20 = param_1->transformations;
    if ((uVar20 & 1) != 0) {
      png_do_bgr(param_2,param_1->row_buf + 1);
      uVar20 = param_1->transformations;
    }
    if ((uVar20 & 0x20) != 0) {
      png_do_invert(param_2,param_1->row_buf + 1);
      return;
    }
  }
  if ((local_48 ^ (ulonglong)auStack_a8) != __security_cookie.value) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  return;
code_r0x000140dd93f1:
  pbVar10[lVar16] = bVar7 | puVar12[lVar24 + 8] != '\0';
  lVar24 = lVar24 + 8;
  lVar16 = lVar16 + 1;
  if ((uint)lVar24 == uVar20) goto LAB_140dd94f3;
  goto LAB_140dd9315;
}

