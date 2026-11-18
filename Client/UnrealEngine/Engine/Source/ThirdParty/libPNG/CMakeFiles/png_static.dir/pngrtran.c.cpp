// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: libPNG
// Functions: 25

// png_set_crc_action @ 140dbe4c0

void __cdecl png_set_crc_action(png_struct_def_conflict *param_1,int param_2,int param_3)

{
  byte *pbVar1;
  
  if (param_1 == (png_struct_def_conflict *)0x0) {
    return;
  }
  switch(param_2) {
  case 2:
    png_warning(param_1,"Can\'t discard critical data on CRC error");
  default:
    pbVar1 = (byte *)((longlong)&param_1->flags + 1);
    *pbVar1 = *pbVar1 & 0xf3;
    break;
  case 3:
    param_1->flags = param_1->flags & 0xfffff3ff | 0x400;
  case 5:
    break;
  case 4:
    pbVar1 = (byte *)((longlong)&param_1->flags + 1);
    *pbVar1 = *pbVar1 | 0xc;
  }
  if (param_3 - 1U < 5) {
    switch((longlong)&switchD_140dbe537::switchdataD_1531f1f28 +
           (longlong)(int)(&switchD_140dbe537::switchdataD_1531f1f28)[param_3 - 1]) {
    case 0x140dbe539:
      param_1->flags = param_1->flags & 0xfffffcff | 0x200;
      break;
    case 0x140dbe551:
      param_1->flags = param_1->flags & 0xfffffcff | 0x100;
      break;
    case 0x140dbe577:
      goto switchD_140dbe537_caseD_40dbe577;
    case 0x140dbe580:
      pbVar1 = (byte *)((longlong)&param_1->flags + 1);
      *pbVar1 = *pbVar1 | 3;
    }
  }
  else {
switchD_140dbe537_caseD_40dbe577:
    pbVar1 = (byte *)((longlong)&param_1->flags + 1);
    *pbVar1 = *pbVar1 & 0xfc;
  }
  return;
}

// png_set_background_fixed @ 140dbe5a0

void __cdecl
png_set_background_fixed
          (png_struct_def_conflict *param_1,png_color_16_struct *param_2,int param_3,int param_4,
          int param_5)

{
  undefined1 uVar1;
  ushort uVar2;
  ushort uVar3;
  ushort uVar4;
  uint uVar5;
  
  if (param_1 != (png_struct_def_conflict *)0x0) {
    uVar5 = param_1->flags;
    if ((uVar5 & 0x40) != 0) {
      png_app_error(param_1,"invalid after png_start_read_image or png_read_update_info");
      return;
    }
    param_1->flags = uVar5 | 0x4000;
    if (param_2 != (png_color_16_struct *)0x0) {
      if (param_3 == 0) {
        png_warning(param_1,"Application must supply a known background gamma");
        return;
      }
      param_1->flags = uVar5 & 0xffffdfbf | 0x4000;
      uVar1 = param_2->field_0x1;
      uVar2 = param_2->red;
      uVar3 = param_2->green;
      uVar4 = param_2->blue;
      (param_1->background).index = param_2->index;
      (param_1->background).field_0x1 = uVar1;
      (param_1->background).red = uVar2;
      (param_1->background).green = uVar3;
      (param_1->background).blue = uVar4;
      (param_1->background).gray = param_2->gray;
      param_1->background_gamma = param_5;
      param_1->background_gamma_type = (uchar)param_3;
      uVar5 = param_1->transformations & 0xff7bfe7f;
      if (param_4 == 0) {
        uVar5 = uVar5 | 0x40080;
      }
      else {
        uVar5 = uVar5 | 0x40180;
      }
      param_1->transformations = uVar5;
    }
  }
  return;
}

// png_set_background @ 140dbe640

void __cdecl
png_set_background(png_struct_def_conflict *param_1,png_color_16_struct *param_2,int param_3,
                  int param_4,double param_5)

{
  undefined1 uVar1;
  ushort uVar2;
  ushort uVar3;
  ushort uVar4;
  int iVar5;
  uint uVar6;
  
  iVar5 = png_fixed(param_1,param_5,"png_set_background");
  if (param_1 != (png_struct_def_conflict *)0x0) {
    uVar6 = param_1->flags;
    if ((uVar6 & 0x40) != 0) {
      png_app_error(param_1,"invalid after png_start_read_image or png_read_update_info");
      return;
    }
    param_1->flags = uVar6 | 0x4000;
    if (param_2 != (png_color_16_struct *)0x0) {
      if (param_3 == 0) {
        png_warning(param_1,"Application must supply a known background gamma");
        return;
      }
      param_1->flags = uVar6 & 0xffffdfbf | 0x4000;
      uVar1 = param_2->field_0x1;
      uVar2 = param_2->red;
      uVar3 = param_2->green;
      uVar4 = param_2->blue;
      (param_1->background).index = param_2->index;
      (param_1->background).field_0x1 = uVar1;
      (param_1->background).red = uVar2;
      (param_1->background).green = uVar3;
      (param_1->background).blue = uVar4;
      (param_1->background).gray = param_2->gray;
      param_1->background_gamma = iVar5;
      param_1->background_gamma_type = (uchar)param_3;
      uVar6 = param_1->transformations & 0xff7bfe7f;
      if (param_4 == 0) {
        uVar6 = uVar6 | 0x40080;
      }
      else {
        uVar6 = uVar6 | 0x40180;
      }
      param_1->transformations = uVar6;
    }
  }
  return;
}

// png_set_scale_16 @ 140dbe730

void __cdecl png_set_scale_16(png_struct_def_conflict *param_1)

{
  byte *pbVar1;
  
  if (param_1 != (png_struct_def_conflict *)0x0) {
    if ((param_1->flags & 0x40) != 0) {
      png_app_error(param_1,"invalid after png_start_read_image or png_read_update_info");
      return;
    }
    param_1->flags = param_1->flags | 0x4000;
    pbVar1 = (byte *)((longlong)&param_1->transformations + 3);
    *pbVar1 = *pbVar1 | 4;
  }
  return;
}

// png_set_strip_16 @ 140dbe770

void __cdecl png_set_strip_16(png_struct_def_conflict *param_1)

{
  byte *pbVar1;
  
  if (param_1 != (png_struct_def_conflict *)0x0) {
    if ((param_1->flags & 0x40) != 0) {
      png_app_error(param_1,"invalid after png_start_read_image or png_read_update_info");
      return;
    }
    param_1->flags = param_1->flags | 0x4000;
    pbVar1 = (byte *)((longlong)&param_1->transformations + 1);
    *pbVar1 = *pbVar1 | 4;
  }
  return;
}

// png_set_strip_alpha @ 140dbe7b0

void __cdecl png_set_strip_alpha(png_struct_def_conflict *param_1)

{
  byte *pbVar1;
  
  if (param_1 != (png_struct_def_conflict *)0x0) {
    if ((param_1->flags & 0x40) != 0) {
      png_app_error(param_1,"invalid after png_start_read_image or png_read_update_info");
      return;
    }
    param_1->flags = param_1->flags | 0x4000;
    pbVar1 = (byte *)((longlong)&param_1->transformations + 2);
    *pbVar1 = *pbVar1 | 4;
  }
  return;
}

// png_set_alpha_mode_fixed @ 140dbe7f0

void __cdecl png_set_alpha_mode_fixed(png_struct_def_conflict *param_1,int param_2,int param_3)

{
  ushort *puVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  
  if (param_1 == (png_struct_def_conflict *)0x0) {
    return;
  }
  uVar4 = param_1->flags;
  if ((uVar4 & 0x40) != 0) {
    png_app_error(param_1,"invalid after png_start_read_image or png_read_update_info");
    return;
  }
  param_1->flags = uVar4 | 0x4000;
  iVar5 = 0x250ac;
  if (param_3 < -2) {
    if (param_3 == -100000) {
LAB_140dbe85b:
      param_1->flags = uVar4 | 0x5000;
      iVar5 = 220000;
    }
    else if (param_3 != -50000) {
LAB_140dbe86d:
      iVar5 = param_3;
      if (param_3 - 0x989681U < 0xff676d67) {
                    /* WARNING: Subroutine does not return */
        png_error(param_1,"output gamma out of expected range");
      }
    }
  }
  else if (param_3 != -2) {
    if (param_3 != -1) goto LAB_140dbe86d;
    goto LAB_140dbe85b;
  }
  iVar3 = png_reciprocal(iVar5);
  switch(param_2) {
  case 0:
    uVar4 = param_1->transformations & 0xff7fffff;
    param_1->transformations = uVar4;
    bVar2 = true;
    param_1->flags = param_1->flags & 0xffffdfff;
    iVar7 = (param_1->colorspace).gamma;
    if (iVar7 != 0) goto LAB_140dbe95a;
    goto LAB_140dbe967;
  case 1:
    uVar4 = param_1->transformations & 0xff7fffff;
    param_1->transformations = uVar4;
    uVar6 = param_1->flags & 0xffffdfff;
    iVar5 = 100000;
    break;
  case 2:
    uVar4 = param_1->transformations & 0xff7fffff;
    param_1->transformations = uVar4;
    uVar6 = param_1->flags | 0x2000;
    break;
  case 3:
    uVar4 = param_1->transformations | 0x800000;
    param_1->transformations = uVar4;
    uVar6 = param_1->flags & 0xffffdfff;
    break;
  default:
                    /* WARNING: Subroutine does not return */
    png_error(param_1,"invalid alpha mode");
  }
  bVar2 = false;
  param_1->flags = uVar6;
  iVar7 = (param_1->colorspace).gamma;
  if (iVar7 == 0) {
LAB_140dbe967:
    (param_1->colorspace).gamma = iVar3;
    puVar1 = &(param_1->colorspace).flags;
    *(byte *)puVar1 = (byte)*puVar1 | 1;
    param_1->screen_gamma = iVar5;
    iVar7 = iVar3;
    if (bVar2) {
      return;
    }
  }
  else {
LAB_140dbe95a:
    param_1->screen_gamma = iVar5;
    if (bVar2) {
      return;
    }
  }
  (param_1->background).gray = 0;
  (param_1->background).index = '\0';
  (param_1->background).field_0x1 = 0;
  (param_1->background).red = 0;
  (param_1->background).green = 0;
  (param_1->background).blue = 0;
  param_1->background_gamma = iVar7;
  param_1->background_gamma_type = '\x02';
  param_1->transformations = uVar4 & 0xfffffeff;
  if (-1 < (char)uVar4) {
    param_1->transformations = uVar4 & 0xfffffeff | 0x80;
    return;
  }
                    /* WARNING: Subroutine does not return */
  png_error(param_1,"conflicting calls to set alpha mode and background");
}

// png_set_alpha_mode @ 140dbea00

void __cdecl png_set_alpha_mode(png_struct_def_conflict *param_1,int param_2,double param_3)

{
  double dVar1;
  
  dVar1 = floor((double)(~-(ulonglong)(0.0 < param_3) & (ulonglong)param_3 |
                        (~-(ulonglong)(param_3 < __real_4060000000000000) & (ulonglong)param_3 |
                        (ulonglong)(__real_40f86a0000000000 * param_3) &
                        -(ulonglong)(param_3 < __real_4060000000000000)) &
                        -(ulonglong)(0.0 < param_3)) + __real_3fe0000000000000);
  if ((double)(__xmm_7fffffffffffffff7fffffffffffffff & (ulonglong)dVar1) <= __real_41dfffffffc00000
     ) {
    png_set_alpha_mode_fixed(param_1,param_2,(int)dVar1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  png_fixed_error(param_1,"gamma value");
}

// png_set_quantize @ 140dbeaa0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
png_set_quantize(png_struct_def_conflict *param_1,png_color_struct *param_2,int param_3,int param_4,
                ushort *param_5,int param_6)

{
  byte bVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  code *pcVar4;
  longlong lVar5;
  uchar **ppuVar6;
  uchar *puVar7;
  ulonglong uVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  uchar uVar11;
  uint uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  uint uVar15;
  uint uVar16;
  undefined8 uVar17;
  longlong *plVar18;
  int iVar19;
  uint uVar20;
  int iVar21;
  longlong lVar22;
  uint uVar23;
  undefined4 in_register_00000084;
  longlong lVar24;
  byte bVar25;
  uint uVar26;
  png_color_struct *ppVar27;
  png_color_struct *ppVar28;
  byte *pbVar29;
  ulonglong uVar30;
  int iVar31;
  uint uVar32;
  int iVar33;
  int iVar34;
  uint uVar35;
  bool bVar36;
  undefined1 auStack_e8 [40];
  png_color_struct *local_c0;
  undefined4 local_b8;
  uint uStack_b4;
  uchar *local_b0;
  int local_a4;
  ulonglong local_a0;
  uchar **local_98;
  ulonglong local_90;
  ulonglong local_88;
  byte *local_80;
  uchar *local_78;
  ulonglong local_70;
  ulonglong local_68;
  uchar *local_60;
  byte *local_58;
  undefined2 local_4c;
  uchar local_4a;
  ulonglong local_48;
  
  uVar14 = CONCAT44(in_register_00000084,param_3);
  local_48 = __security_cookie.value ^ (ulonglong)auStack_e8;
  local_c0 = param_2;
  if (param_1 != (png_struct_def_conflict *)0x0) {
    if ((param_1->flags & 0x40) != 0) {
      png_app_error(param_1,"invalid after png_start_read_image or png_read_update_info");
      return;
    }
    param_1->flags = param_1->flags | 0x4000;
    *(byte *)&param_1->transformations = (byte)param_1->transformations | 0x40;
    local_a4 = param_6;
    if (param_6 == 0) {
      puVar7 = png_malloc(param_1,(longlong)param_3);
      param_1->quantize_index = puVar7;
      if (0 < param_3) {
        uVar8 = (ulonglong)(param_3 & 3);
        if ((uint)param_3 < 4) {
          uVar13 = 0;
        }
        else {
          uVar13 = 0;
          do {
            uVar11 = (uchar)uVar13;
            param_1->quantize_index[uVar13] = uVar11;
            param_1->quantize_index[uVar13 + 1] = uVar11 + '\x01';
            param_1->quantize_index[uVar13 + 2] = uVar11 + '\x02';
            param_1->quantize_index[uVar13 + 3] = uVar11 + '\x03';
            uVar13 = uVar13 + 4;
          } while (uVar13 != (param_3 & 0x7ffffffc));
        }
        for (; uVar8 != 0; uVar8 = uVar8 - 1) {
          param_1->quantize_index[uVar13] = (uchar)uVar13;
          uVar13 = uVar13 + 1;
        }
      }
    }
    if (param_4 < param_3) {
      puVar7 = png_malloc(param_1,(longlong)param_3);
      uStack_b4 = param_4;
      if (param_5 == (ushort *)0x0) {
        param_1->index_to_palette = puVar7;
        puVar7 = png_malloc(param_1,(longlong)param_3);
        param_1->palette_to_index = puVar7;
        if (0 < param_3) {
          if (param_3 == 1) {
            uVar8 = 0;
          }
          else {
            uVar8 = 0;
            do {
              uVar11 = (uchar)uVar8;
              param_1->index_to_palette[uVar8] = uVar11;
              param_1->palette_to_index[uVar8] = uVar11;
              param_1->index_to_palette[uVar8 + 1] = uVar11 + '\x01';
              param_1->palette_to_index[uVar8 + 1] = uVar11 + '\x01';
              uVar8 = uVar8 + 2;
            } while (uVar8 != (param_3 & 0x7ffffffe));
          }
          if ((param_3 & 1U) != 0) {
            param_1->index_to_palette[uVar8] = (uchar)uVar8;
            param_1->palette_to_index[uVar8] = (uchar)uVar8;
          }
        }
        puVar9 = png_calloc(param_1,0x1808);
        local_70 = (ulonglong)(uint)param_3;
        local_60 = &local_c0[1].blue;
        local_b0 = (uchar *)CONCAT44(local_b0._4_4_,0x60);
        local_90 = 0x61;
        puVar10 = (undefined8 *)0x0;
        uVar8 = (ulonglong)(uint)param_3;
        local_98 = &param_1->index_to_palette;
        local_68 = uVar14;
        do {
          iVar21 = 1;
          if (1 < (int)uVar8) {
            iVar21 = (int)uVar8;
          }
          local_58 = (byte *)(ulonglong)(iVar21 - 1);
          uVar14 = 1;
          puVar7 = local_60;
          pbVar29 = (byte *)0x0;
          local_88 = uVar8;
LAB_140dbf33c:
          if (pbVar29 != local_58) goto code_r0x000140dbf345;
          if (puVar10 != (undefined8 *)0x0) {
            uVar8 = local_88;
            if (local_a4 != 0) {
              uVar14 = 0;
              puVar2 = (undefined8 *)*puVar9;
              goto joined_r0x000140dbf425;
            }
            if (0 < (int)local_68) {
              uVar14 = 0;
              do {
                local_a0 = uVar14;
                for (puVar2 = (undefined8 *)puVar9[local_a0]; puVar2 != (undefined8 *)0x0;
                    puVar2 = (undefined8 *)*puVar2) {
                  puVar7 = *local_98;
                  bVar25 = *(byte *)(puVar2 + 1);
                  uVar23 = (uint)uVar8;
                  if (((int)(uint)puVar7[bVar25] < (int)uVar23) &&
                     (bVar1 = *(byte *)((longlong)puVar2 + 9), puVar7[bVar1] < uVar23)) {
                    bVar36 = (uVar8 & 1) == 0;
                    uVar26 = (uint)bVar1;
                    if (bVar36) {
                      uVar26 = (uint)bVar25;
                    }
                    uVar16 = (uint)bVar25;
                    if (bVar36) {
                      uVar16 = (uint)bVar1;
                    }
                    uVar23 = uVar23 - 1;
                    uVar8 = (ulonglong)uVar23;
                    bVar25 = puVar7[uVar16];
                    local_c0[bVar25].blue = local_c0[uVar8].blue;
                    uVar11 = local_c0[uVar8].green;
                    local_c0[bVar25].red = local_c0[uVar8].red;
                    local_c0[bVar25].green = uVar11;
                    uVar14 = 0;
                    do {
                      puVar7 = param_1->quantize_index;
                      bVar25 = puVar7[uVar14];
                      if (bVar25 == param_1->index_to_palette[uVar16]) {
                        puVar7[uVar14] = param_1->index_to_palette[uVar26];
                        puVar7 = param_1->quantize_index;
                        bVar25 = puVar7[uVar14];
                      }
                      if (uVar23 == bVar25) {
                        puVar7[uVar14] = (*local_98)[uVar16];
                      }
                      uVar14 = uVar14 + 1;
                    } while (local_70 != uVar14);
                    param_1->index_to_palette[param_1->palette_to_index[uVar8]] =
                         param_1->index_to_palette[uVar16];
                    param_1->palette_to_index[param_1->index_to_palette[uVar16]] =
                         param_1->palette_to_index[uVar8];
                    param_1->index_to_palette[uVar16] = (uchar)uVar23;
                    param_1->palette_to_index[uVar8] = (uchar)uVar16;
                  }
                  if ((int)uVar8 <= (int)uStack_b4) goto LAB_140dbf51e;
                }
                uVar14 = local_a0 + 1;
              } while (local_a0 + 1 != local_90);
              goto LAB_140dbf51e;
            }
            uVar14 = 0;
            puVar2 = (undefined8 *)*puVar9;
            goto joined_r0x000140dbf713;
          }
LAB_140dbf510:
          puVar10 = (undefined8 *)0x0;
          uVar8 = uVar8 & 0xffffffff;
LAB_140dbf51e:
          ppuVar6 = local_98;
          param_3 = uStack_b4;
          lVar22 = 0;
          do {
            plVar18 = (longlong *)puVar9[lVar22];
            if (plVar18 != (longlong *)0x0) {
              do {
                plVar3 = (longlong *)*plVar18;
                png_free(param_1,plVar18);
                plVar18 = plVar3;
              } while (plVar3 != (longlong *)0x0);
              puVar10 = (undefined8 *)0x0;
            }
            puVar9[lVar22] = 0;
            lVar22 = lVar22 + 1;
          } while (lVar22 != 0x301);
          local_b0 = (uchar *)CONCAT44(local_b0._4_4_,(uint)local_b0 + 0x60);
          local_90 = local_90 + 0x60;
        } while (param_3 < (int)uVar8);
        png_free(param_1,puVar9);
        png_free(param_1,param_1->palette_to_index);
        png_free(param_1,param_1->index_to_palette);
        *ppuVar6 = (uchar *)0x0;
        ppuVar6[1] = (uchar *)0x0;
        ppVar27 = param_1->palette;
      }
      else {
        param_1->quantize_sort = puVar7;
        if (0 < param_3) {
          uVar8 = (ulonglong)(param_3 & 3);
          if ((uint)param_3 < 4) {
            uVar13 = 0;
          }
          else {
            uVar13 = 0;
            do {
              uVar11 = (uchar)uVar13;
              param_1->quantize_sort[uVar13] = uVar11;
              param_1->quantize_sort[uVar13 + 1] = uVar11 + '\x01';
              param_1->quantize_sort[uVar13 + 2] = uVar11 + '\x02';
              param_1->quantize_sort[uVar13 + 3] = uVar11 + '\x03';
              uVar13 = uVar13 + 4;
            } while (uVar13 != (param_3 & 0x7ffffffc));
          }
          for (; uVar8 != 0; uVar8 = uVar8 - 1) {
            param_1->quantize_sort[uVar13] = (uchar)uVar13;
            uVar13 = uVar13 + 1;
          }
        }
        uVar23 = param_3;
        iVar21 = param_3;
        iVar19 = 1;
        if (1 < param_4) {
          iVar19 = param_4;
        }
        do {
          if (iVar21 <= iVar19) break;
          bVar36 = true;
          uVar8 = 0;
          do {
            puVar7 = param_1->quantize_sort;
            bVar25 = puVar7[uVar8];
            if (param_5[bVar25] < param_5[puVar7[uVar8 + 1]]) {
              puVar7[uVar8] = puVar7[uVar8 + 1];
              param_1->quantize_sort[uVar8 + 1] = bVar25;
              bVar36 = false;
            }
            uVar8 = uVar8 + 1;
          } while (uVar23 - 1 != uVar8);
          uVar23 = uVar23 - 1;
          iVar21 = iVar21 + -1;
        } while (!bVar36);
        if (local_a4 == 0) {
          if (0 < param_4) {
            uVar14 = 0;
            iVar21 = param_3;
            do {
              if (param_4 <= (int)(uint)param_1->quantize_sort[uVar14]) {
                lVar22 = (longlong)iVar21;
                ppVar27 = local_c0 + iVar21;
                do {
                  ppVar28 = ppVar27;
                  lVar24 = lVar22 + -1;
                  iVar21 = iVar21 + -1;
                  ppVar27 = ppVar28 + -1;
                  lVar5 = lVar22 + -1;
                  lVar22 = lVar24;
                } while ((byte)param_4 <= param_1->quantize_sort[lVar5]);
                local_4a = ppVar28[-1].blue;
                local_4c._0_1_ = ppVar27->red;
                local_4c._1_1_ = ppVar27->green;
                ppVar28[-1].blue = local_c0[uVar14].blue;
                uVar11 = local_c0[uVar14].green;
                ppVar27->red = local_c0[uVar14].red;
                ppVar27->green = uVar11;
                local_c0[uVar14].red = (undefined1)local_4c;
                local_c0[uVar14].green = local_4c._1_1_;
                local_c0[uVar14].blue = local_4a;
                param_1->quantize_index[lVar24] = (uchar)uVar14;
                param_1->quantize_index[uVar14] = (uchar)iVar21;
              }
              uVar14 = uVar14 + 1;
            } while (uVar14 != (uint)param_4);
          }
          if (0 < param_3) {
            local_b0 = &local_c0[1].blue;
            uVar14 = 0;
            do {
              bVar25 = param_1->quantize_index[uVar14];
              if (param_4 <= (int)(uint)bVar25) {
                uVar11 = '\0';
                if (1 < param_4) {
                  iVar19 = (uint)local_c0[bVar25].green - (uint)local_c0->green;
                  iVar21 = -iVar19;
                  if (iVar21 < 0) {
                    iVar21 = iVar19;
                  }
                  iVar33 = (uint)local_c0[bVar25].red - (uint)local_c0->red;
                  iVar19 = -iVar33;
                  if (iVar19 < 0) {
                    iVar19 = iVar33;
                  }
                  iVar34 = (uint)local_c0[bVar25].blue - (uint)local_c0->blue;
                  iVar33 = -iVar34;
                  if (iVar33 < 0) {
                    iVar33 = iVar34;
                  }
                  iVar33 = iVar33 + iVar19 + iVar21;
                  uVar8 = 0;
                  uVar13 = 1;
                  puVar7 = local_b0;
                  do {
                    iVar19 = (uint)local_c0[bVar25].red -
                             (uint)((png_color_struct *)(puVar7 + -2))->red;
                    iVar21 = -iVar19;
                    if (iVar21 < 0) {
                      iVar21 = iVar19;
                    }
                    iVar34 = (uint)local_c0[bVar25].green - (uint)puVar7[-1];
                    iVar19 = -iVar34;
                    if (iVar19 < 0) {
                      iVar19 = iVar34;
                    }
                    iVar31 = (uint)local_c0[bVar25].blue - (uint)*puVar7;
                    iVar34 = -iVar31;
                    if (iVar34 < 0) {
                      iVar34 = iVar31;
                    }
                    iVar34 = iVar34 + iVar19 + iVar21;
                    if (iVar34 < iVar33) {
                      uVar8 = uVar13 & 0xffffffff;
                      iVar33 = iVar34;
                    }
                    uVar11 = (uchar)uVar8;
                    uVar13 = uVar13 + 1;
                    puVar7 = puVar7 + 3;
                  } while ((uint)param_4 != uVar13);
                }
                param_1->quantize_index[uVar14] = uVar11;
              }
              uVar14 = uVar14 + 1;
            } while (uVar14 != (uint)param_3);
          }
        }
        else if (0 < param_4) {
          puVar7 = param_1->quantize_sort;
          uVar8 = 0;
          do {
            if (param_4 <= (int)(uint)puVar7[uVar8]) {
              ppVar27 = local_c0 + (int)uVar14;
              pbVar29 = puVar7 + (longlong)(int)uVar14 + -1;
              do {
                ppVar28 = ppVar27;
                uVar14 = (ulonglong)((int)uVar14 - 1);
                ppVar27 = ppVar28 + -1;
                bVar25 = *pbVar29;
                pbVar29 = pbVar29 + -1;
              } while ((byte)param_4 <= bVar25);
              local_c0[uVar8].blue = ppVar28[-1].blue;
              uVar11 = ppVar27->green;
              local_c0[uVar8].red = ppVar27->red;
              local_c0[uVar8].green = uVar11;
            }
            uVar8 = uVar8 + 1;
          } while (uVar8 != (uint)param_4);
        }
        png_free(param_1,param_1->quantize_sort);
        param_1->quantize_sort = (uchar *)0x0;
        ppVar27 = param_1->palette;
        param_3 = param_4;
      }
    }
    else {
      ppVar27 = param_1->palette;
    }
    if (ppVar27 == (png_color_struct *)0x0) {
      param_1->palette = local_c0;
    }
    param_1->num_palette = (ushort)param_3;
    if (local_a4 != 0) {
      puVar7 = png_calloc(param_1,0x8000);
      param_1->palette_lookup = puVar7;
      uVar17 = 0x8000;
      local_b0 = png_malloc(param_1,0x8000);
      memset(local_b0,(int)CONCAT71((int7)((ulonglong)uVar17 >> 8),0xff),0x8000);
      if (0 < param_3) {
        local_88 = (ulonglong)(uint)param_3;
        uVar14 = 0;
        do {
          bVar25 = local_c0[uVar14].red >> 3;
          local_80 = (byte *)(ulonglong)bVar25;
          uVar23 = (uint)(local_c0[uVar14].green >> 3);
          uVar26 = (uint)(local_c0[uVar14].blue >> 3);
          puVar7 = (uchar *)0x0;
          uVar8 = 0;
          do {
            local_a0 = uVar8;
            local_78 = puVar7;
            uVar16 = (uint)bVar25 - (int)local_78;
            if (local_80 < local_78) {
              uVar16 = (int)local_78 - (uint)bVar25;
            }
            uVar13 = 0;
            uVar8 = local_a0;
            do {
              uVar12 = uVar23 - (int)uVar13;
              if (uVar23 < uVar13) {
                uVar12 = (int)uVar13 - uVar23;
              }
              uVar32 = uVar12;
              if ((int)uVar12 < (int)uVar16) {
                uVar32 = uVar16;
              }
              uVar30 = 0;
              uVar15 = uVar26;
              do {
                uVar20 = (int)uVar30 - uVar26;
                if (uVar30 <= uVar26) {
                  uVar20 = uVar15;
                }
                uVar35 = uVar20;
                if ((int)uVar20 < (int)uVar32) {
                  uVar35 = uVar32;
                }
                iVar21 = uVar20 + uVar16 + uVar12 + uVar35;
                if (iVar21 < (int)(uint)*(byte *)((longlong)local_b0 + uVar30 + uVar8)) {
                  *(char *)((longlong)local_b0 + uVar30 + uVar8) = (char)iVar21;
                  param_1->palette_lookup[uVar30 + uVar8] = (uchar)uVar14;
                }
                uVar30 = uVar30 + 1;
                uVar15 = uVar15 - 1;
              } while (uVar30 != 0x20);
              uVar13 = uVar13 + 1;
              uVar8 = uVar8 + 0x20;
            } while (uVar13 != 0x20);
            puVar7 = local_78 + 1;
            uVar8 = local_a0 + 0x400;
          } while (local_78 + 1 != &DAT_00000020);
          uVar14 = uVar14 + 1;
        } while (uVar14 != local_88);
      }
      png_free(param_1,(void *)CONCAT44(uStack_b4,local_b8));
      return;
    }
  }
  if ((local_48 ^ (ulonglong)auStack_e8) == __security_cookie.value) {
    return;
  }
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
code_r0x000140dbf345:
  local_80 = pbVar29 + 1;
  ppVar27 = local_c0 + (longlong)pbVar29;
  local_a0 = uVar14;
  local_78 = puVar7;
  do {
    uVar26 = (uint)ppVar27->red - (uint)((png_color_struct *)(puVar7 + -2))->red;
    uVar23 = -uVar26;
    if ((int)uVar23 < 0) {
      uVar23 = uVar26;
    }
    uVar16 = (uint)ppVar27->green - (uint)puVar7[-1];
    uVar26 = -uVar16;
    if ((int)uVar26 < 0) {
      uVar26 = uVar16;
    }
    uVar12 = (uint)ppVar27->blue - (uint)*puVar7;
    uVar16 = -uVar12;
    if ((int)uVar16 < 0) {
      uVar16 = uVar12;
    }
    uVar23 = (uVar16 & 0xff) + (uVar26 & 0xff) + (uVar23 & 0xff);
    if (uVar23 <= (uint)local_b0) {
      puVar10 = png_malloc_warn(param_1,0x10);
      if (puVar10 == (undefined8 *)0x0) goto LAB_140dbf510;
      *puVar10 = puVar9[uVar23];
      *(char *)(puVar10 + 1) = (char)pbVar29;
      *(char *)((longlong)puVar10 + 9) = (char)uVar14;
      puVar9[uVar23] = puVar10;
    }
    uVar14 = uVar14 + 1;
    puVar7 = puVar7 + 3;
  } while ((uVar8 & 0xffffffff) != uVar14);
  uVar14 = local_a0 + 1;
  puVar7 = local_78 + 3;
  pbVar29 = local_80;
  if (puVar10 == (undefined8 *)0x0) goto LAB_140dbf510;
  goto LAB_140dbf33c;
joined_r0x000140dbf713:
  if (puVar2 == (undefined8 *)0x0) {
    uVar14 = uVar14 + 1;
    if (uVar14 != local_90) {
      puVar2 = (undefined8 *)puVar9[uVar14];
      goto joined_r0x000140dbf713;
    }
    goto LAB_140dbf51e;
  }
  puVar7 = *local_98;
  uVar23 = (uint)uVar8;
  if (((int)(uint)puVar7[*(byte *)(puVar2 + 1)] < (int)uVar23) &&
     (puVar7[*(byte *)((longlong)puVar2 + 9)] < uVar23)) {
    bVar25 = *(byte *)(puVar2 + 1);
    if ((uVar8 & 1) == 0) {
      bVar25 = *(byte *)((longlong)puVar2 + 9);
    }
    uVar8 = (ulonglong)(uVar23 - 1);
    bVar1 = puVar7[bVar25];
    local_c0[bVar1].blue = local_c0[uVar8].blue;
    uVar11 = local_c0[uVar8].green;
    local_c0[bVar1].red = local_c0[uVar8].red;
    local_c0[bVar1].green = uVar11;
    puVar7[param_1->palette_to_index[uVar8]] = puVar7[bVar25];
    param_1->palette_to_index[param_1->index_to_palette[bVar25]] = param_1->palette_to_index[uVar8];
    param_1->index_to_palette[bVar25] = (uchar)(uVar23 - 1);
    param_1->palette_to_index[uVar8] = bVar25;
  }
  if ((int)uVar8 <= (int)uStack_b4) goto LAB_140dbf51e;
  puVar2 = (undefined8 *)*puVar2;
  goto joined_r0x000140dbf713;
joined_r0x000140dbf425:
  if (puVar2 == (undefined8 *)0x0) {
    uVar14 = uVar14 + 1;
    if (uVar14 != local_90) {
      puVar2 = (undefined8 *)puVar9[uVar14];
      goto joined_r0x000140dbf425;
    }
    goto LAB_140dbf51e;
  }
  puVar7 = *local_98;
  uVar23 = (uint)uVar8;
  if (((int)(uint)puVar7[*(byte *)(puVar2 + 1)] < (int)uVar23) &&
     (puVar7[*(byte *)((longlong)puVar2 + 9)] < uVar23)) {
    bVar25 = *(byte *)(puVar2 + 1);
    if ((uVar8 & 1) == 0) {
      bVar25 = *(byte *)((longlong)puVar2 + 9);
    }
    uVar8 = (ulonglong)(uVar23 - 1);
    bVar1 = puVar7[bVar25];
    local_c0[bVar1].blue = local_c0[uVar8].blue;
    uVar11 = local_c0[uVar8].green;
    local_c0[bVar1].red = local_c0[uVar8].red;
    local_c0[bVar1].green = uVar11;
    puVar7[param_1->palette_to_index[uVar8]] = puVar7[bVar25];
    param_1->palette_to_index[param_1->index_to_palette[bVar25]] = param_1->palette_to_index[uVar8];
    param_1->index_to_palette[bVar25] = (uchar)(uVar23 - 1);
    param_1->palette_to_index[uVar8] = bVar25;
  }
  if ((int)uVar8 <= (int)uStack_b4) goto LAB_140dbf51e;
  puVar2 = (undefined8 *)*puVar2;
  goto joined_r0x000140dbf425;
}

// png_set_gamma_fixed @ 140dbf850

void __cdecl png_set_gamma_fixed(png_struct_def_conflict *param_1,int param_2,int param_3)

{
  ushort *puVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  
  if (param_1 == (png_struct_def_conflict *)0x0) {
    return;
  }
  uVar2 = param_1->flags;
  if ((uVar2 & 0x40) != 0) {
    png_app_error(param_1,"invalid after png_start_read_image or png_read_update_info");
    return;
  }
  uVar3 = uVar2 | 0x4000;
  param_1->flags = uVar3;
  if (param_2 < -2) {
    if (param_2 == -100000) {
LAB_140dbf8a9:
      uVar3 = uVar2 | 0x5000;
      param_1->flags = uVar3;
      param_2 = 220000;
    }
    else if (param_2 == -50000) goto LAB_140dbf8df;
LAB_140dbf8bf:
    if (param_3 < -2) goto LAB_140dbf8cb;
LAB_140dbf8f0:
    iVar4 = 0x10175;
    if (param_3 == -2) goto LAB_140dbf917;
    if (param_3 == -1) goto LAB_140dbf8fc;
  }
  else {
    if (param_2 != -2) {
      if (param_2 != -1) goto LAB_140dbf8bf;
      goto LAB_140dbf8a9;
    }
LAB_140dbf8df:
    param_2 = 0x250ac;
    if (-3 < param_3) goto LAB_140dbf8f0;
LAB_140dbf8cb:
    if (param_3 == -100000) {
LAB_140dbf8fc:
      param_1->flags = uVar3 | 0x1000;
      iVar4 = 0xb18f;
      goto LAB_140dbf917;
    }
    iVar4 = 0x10175;
    if (param_3 == -50000) goto LAB_140dbf917;
  }
  iVar4 = param_3;
  if (param_3 < 1) {
                    /* WARNING: Subroutine does not return */
    png_error(param_1,"invalid file gamma in png_set_gamma");
  }
LAB_140dbf917:
  if (0 < param_2) {
    (param_1->colorspace).gamma = iVar4;
    puVar1 = &(param_1->colorspace).flags;
    *(byte *)puVar1 = (byte)*puVar1 | 1;
    param_1->screen_gamma = param_2;
    return;
  }
                    /* WARNING: Subroutine does not return */
  png_error(param_1,"invalid screen gamma in png_set_gamma");
}

// png_set_gamma @ 140dbf960

void __cdecl png_set_gamma(png_struct_def_conflict *param_1,double param_2,double param_3)

{
  double dVar1;
  double dVar2;
  
  dVar1 = floor((double)(~-(ulonglong)(0.0 < param_3) & (ulonglong)param_3 |
                        (~-(ulonglong)(param_3 < __real_4060000000000000) & (ulonglong)param_3 |
                        (ulonglong)(__real_40f86a0000000000 * param_3) &
                        -(ulonglong)(param_3 < __real_4060000000000000)) &
                        -(ulonglong)(0.0 < param_3)) + __real_3fe0000000000000);
  if ((double)(__xmm_7fffffffffffffff7fffffffffffffff & (ulonglong)dVar1) <= __real_41dfffffffc00000
     ) {
    dVar2 = floor((double)(~-(ulonglong)(0.0 < param_2) & (ulonglong)param_2 |
                          (~-(ulonglong)(param_2 < __real_4060000000000000) & (ulonglong)param_2 |
                          (ulonglong)(__real_40f86a0000000000 * param_2) &
                          -(ulonglong)(param_2 < __real_4060000000000000)) &
                          -(ulonglong)(0.0 < param_2)) + __real_3fe0000000000000);
    if ((double)(__xmm_7fffffffffffffff7fffffffffffffff & (ulonglong)dVar2) <=
        __real_41dfffffffc00000) {
      png_set_gamma_fixed(param_1,(int)dVar2,(int)dVar1);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  png_fixed_error(param_1,"gamma value");
}

// png_set_expand @ 140dbfa90

void __cdecl png_set_expand(png_struct_def_conflict *param_1)

{
  if (param_1 != (png_struct_def_conflict *)0x0) {
    if ((param_1->flags & 0x40) != 0) {
      png_app_error(param_1,"invalid after png_start_read_image or png_read_update_info");
      return;
    }
    param_1->flags = param_1->flags | 0x4000;
    param_1->transformations = param_1->transformations | 0x2001000;
  }
  return;
}

// png_set_palette_to_rgb @ 140dbfad0

void __cdecl png_set_palette_to_rgb(png_struct_def_conflict *param_1)

{
  if (param_1 != (png_struct_def_conflict *)0x0) {
    if ((param_1->flags & 0x40) != 0) {
      png_app_error(param_1,"invalid after png_start_read_image or png_read_update_info");
      return;
    }
    param_1->flags = param_1->flags | 0x4000;
    param_1->transformations = param_1->transformations | 0x2001000;
  }
  return;
}

// png_set_expand_gray_1_2_4_to_8 @ 140dbfb10

void __cdecl png_set_expand_gray_1_2_4_to_8(png_struct_def_conflict *param_1)

{
  byte *pbVar1;
  
  if (param_1 != (png_struct_def_conflict *)0x0) {
    if ((param_1->flags & 0x40) != 0) {
      png_app_error(param_1,"invalid after png_start_read_image or png_read_update_info");
      return;
    }
    param_1->flags = param_1->flags | 0x4000;
    pbVar1 = (byte *)((longlong)&param_1->transformations + 1);
    *pbVar1 = *pbVar1 | 0x10;
  }
  return;
}

// png_set_tRNS_to_alpha @ 140dbfb50

void __cdecl png_set_tRNS_to_alpha(png_struct_def_conflict *param_1)

{
  if (param_1 != (png_struct_def_conflict *)0x0) {
    if ((param_1->flags & 0x40) != 0) {
      png_app_error(param_1,"invalid after png_start_read_image or png_read_update_info");
      return;
    }
    param_1->flags = param_1->flags | 0x4000;
    param_1->transformations = param_1->transformations | 0x2001000;
  }
  return;
}

// png_set_expand_16 @ 140dbfb90

void __cdecl png_set_expand_16(png_struct_def_conflict *param_1)

{
  if (param_1 != (png_struct_def_conflict *)0x0) {
    if ((param_1->flags & 0x40) != 0) {
      png_app_error(param_1,"invalid after png_start_read_image or png_read_update_info");
      return;
    }
    param_1->flags = param_1->flags | 0x4000;
    param_1->transformations = param_1->transformations | 0x2001200;
  }
  return;
}

// png_set_gray_to_rgb @ 140dbfbd0

void __cdecl png_set_gray_to_rgb(png_struct_def_conflict *param_1)

{
  byte *pbVar1;
  
  if (param_1 != (png_struct_def_conflict *)0x0) {
    if ((param_1->flags & 0x40) != 0) {
      png_app_error(param_1,"invalid after png_start_read_image or png_read_update_info");
      return;
    }
    param_1->flags = param_1->flags | 0x4000;
    pbVar1 = (byte *)((longlong)&param_1->transformations + 1);
    *pbVar1 = *pbVar1 | 0x50;
  }
  return;
}

// png_set_rgb_to_gray_fixed @ 140dbfc10

void __cdecl
png_set_rgb_to_gray_fixed(png_struct_def_conflict *param_1,int param_2,int param_3,int param_4)

{
  uint uVar1;
  
  if (param_1 != (png_struct_def_conflict *)0x0) {
    if ((param_1->flags & 0x40) != 0) {
      png_app_error(param_1,"invalid after png_start_read_image or png_read_update_info");
      return;
    }
    if ((param_1->mode & 1) == 0) {
      png_app_error(param_1,"invalid before the PNG header has been read");
      return;
    }
    param_1->flags = param_1->flags | 0x4000;
    if (2 < param_2 - 1U) {
                    /* WARNING: Subroutine does not return */
      png_error(param_1,"invalid error action to rgb_to_gray");
    }
    uVar1 = (param_2 - 1U) * -0x200000 + 0x600000 | param_1->transformations;
    param_1->transformations = uVar1;
    if (param_1->color_type == '\x03') {
      param_1->transformations = uVar1 | 0x1000;
    }
    if (param_4 + param_3 < 0x186a1 && -1 < (param_4 | param_3)) {
      param_1->rgb_to_gray_red_coeff = (ushort)(((param_3 & 0x1ffffU) << 10) / 0xc35);
      param_1->rgb_to_gray_green_coeff = (ushort)(((param_4 & 0x1ffffU) << 10) / 0xc35);
      param_1->rgb_to_gray_coefficients_set = '\x01';
    }
    else {
      if (-1 < (param_4 | param_3)) {
        png_app_warning(param_1,"ignoring out of range rgb_to_gray coefficients");
      }
      if ((param_1->rgb_to_gray_red_coeff == 0) && (param_1->rgb_to_gray_green_coeff == 0)) {
        param_1->rgb_to_gray_red_coeff = 0x1b38;
        param_1->rgb_to_gray_green_coeff = 0x5b8a;
        return;
      }
    }
  }
  return;
}

// png_set_rgb_to_gray @ 140dbfd50

void __cdecl
png_set_rgb_to_gray(png_struct_def_conflict *param_1,int param_2,double param_3,double param_4)

{
  int iVar1;
  int iVar2;
  
  iVar1 = png_fixed(param_1,param_4,"rgb to gray green coefficient");
  iVar2 = png_fixed(param_1,param_3,"rgb to gray red coefficient");
  png_set_rgb_to_gray_fixed(param_1,param_2,iVar2,iVar1);
  return;
}

// png_set_read_user_transform_fn @ 140dbfdb0

void __cdecl
png_set_read_user_transform_fn
          (png_struct_def_conflict *param_1,
          _func___cdecl_void_png_struct_def_ptr_png_row_info_struct_ptr_uchar_ptr_conflict *param_2)

{
  byte *pbVar1;
  
  pbVar1 = (byte *)((longlong)&param_1->transformations + 2);
  *pbVar1 = *pbVar1 | 0x10;
  param_1->read_user_transform_fn = param_2;
  return;
}

// png_init_read_transformations @ 140dbfdd0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl png_init_read_transformations(png_struct_def_conflict *param_1)

{
  ushort *puVar1;
  byte *pbVar2;
  uint *puVar3;
  uint *puVar4;
  byte bVar5;
  uchar uVar6;
  ushort uVar7;
  ushort uVar8;
  png_color_struct *ppVar9;
  code *pcVar10;
  undefined1 auVar11 [14];
  undefined1 auVar12 [14];
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  bool bVar18;
  undefined1 auVar19 [14];
  undefined1 uVar20;
  byte bVar21;
  byte bVar22;
  ushort uVar23;
  int iVar24;
  uint uVar25;
  int iVar26;
  int iVar27;
  byte bVar28;
  ushort uVar29;
  uint uVar30;
  uchar *puVar31;
  uchar *puVar32;
  ushort uVar33;
  byte bVar34;
  ulonglong uVar35;
  ulonglong uVar36;
  longlong lVar37;
  ulonglong uVar38;
  int iVar39;
  undefined1 auVar40 [16];
  undefined8 uVar41;
  undefined1 auVar42 [16];
  undefined1 auStack_78 [43];
  byte local_4d;
  int local_4c;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_78;
  iVar24 = param_1->screen_gamma;
  iVar39 = (param_1->colorspace).gamma;
  if (iVar39 == 0) {
    if (iVar24 == 0) {
      (param_1->colorspace).gamma = 100000;
      param_1->screen_gamma = 100000;
    }
    else {
      iVar24 = png_reciprocal(iVar24);
      (param_1->colorspace).gamma = iVar24;
    }
LAB_140dbfe7e:
    puVar1 = &(param_1->colorspace).flags;
    *(byte *)puVar1 = (byte)*puVar1 | 1;
LAB_140dbfe85:
    uVar25 = param_1->transformations & 0xffffdfff;
  }
  else {
    if (iVar24 == 0) {
      iVar24 = png_reciprocal(iVar39);
      param_1->screen_gamma = iVar24;
      goto LAB_140dbfe7e;
    }
    iVar24 = png_muldiv(&local_4c,iVar39,iVar24,100000);
    if (iVar24 != 0) {
      iVar24 = png_gamma_significant(local_4c);
      puVar1 = &(param_1->colorspace).flags;
      *(byte *)puVar1 = (byte)*puVar1 | 1;
      if (iVar24 != 0) goto LAB_140dbfe5d;
      goto LAB_140dbfe85;
    }
    puVar1 = &(param_1->colorspace).flags;
    *(byte *)puVar1 = (byte)*puVar1 | 1;
LAB_140dbfe5d:
    uVar25 = param_1->transformations | 0x2000;
  }
  param_1->transformations = uVar25;
  if ((uVar25 & 0x40080) == 0x40000) {
    param_1->transformations = uVar25 & 0xfd7ffe7f;
    pbVar2 = (byte *)((longlong)&param_1->flags + 1);
    *pbVar2 = *pbVar2 & 0xdf;
    param_1->num_trans = 0;
  }
  iVar24 = png_gamma_significant(param_1->screen_gamma);
  uVar25 = param_1->transformations;
  if (iVar24 == 0) {
    uVar25 = uVar25 & 0xff7fffff;
    param_1->transformations = uVar25;
    pbVar2 = (byte *)((longlong)&param_1->flags + 1);
    *pbVar2 = *pbVar2 & 0xdf;
  }
  if ((uVar25 & 0x600000) != 0) {
    png_colorspace_set_rgb_coefficients(param_1);
    uVar25 = param_1->transformations;
  }
  if ((uVar25 & 0x100) == 0) {
    if ((((~uVar25 & 0x4080) == 0) &&
        (uVar23 = (param_1->background).red, uVar23 == (param_1->background).green)) &&
       (uVar23 == (param_1->background).blue)) {
      pbVar2 = (byte *)((longlong)&param_1->mode + 1);
      *pbVar2 = *pbVar2 | 8;
      (param_1->background).gray = uVar23;
    }
  }
  else if ((param_1->color_type & 2) == 0) {
    pbVar2 = (byte *)((longlong)&param_1->mode + 1);
    *pbVar2 = *pbVar2 | 8;
  }
  bVar28 = param_1->color_type;
  if (bVar28 == 3) {
    uVar23 = param_1->num_trans;
    uVar38 = (ulonglong)uVar23;
    if (uVar38 == 0) {
      pbVar2 = (byte *)((longlong)&param_1->flags + 1);
      *pbVar2 = *pbVar2 & 0xdf;
LAB_140dc0067:
      uVar25 = uVar25 & 0xff7ffe7f;
      param_1->transformations = uVar25;
    }
    else {
      uVar35 = 0;
      bVar18 = false;
      do {
        if (param_1->trans_alpha[uVar35] != 0xff) {
          if (param_1->trans_alpha[uVar35] != '\0') goto LAB_140dc0073;
          bVar18 = true;
        }
        uVar35 = uVar35 + 1;
      } while (uVar38 != uVar35);
      pbVar2 = (byte *)((longlong)&param_1->flags + 1);
      *pbVar2 = *pbVar2 & 0xdf;
      uVar25 = uVar25 & 0xff7fffff;
      param_1->transformations = uVar25;
      if (!bVar18) goto LAB_140dc0067;
    }
LAB_140dc0073:
    uVar30 = uVar25;
    if ((~uVar25 & 0x1100) == 0) {
      ppVar9 = param_1->palette;
      bVar28 = (param_1->background).index;
      (param_1->background).red = (ushort)ppVar9[bVar28].red;
      (param_1->background).green = (ushort)ppVar9[bVar28].green;
      (param_1->background).blue = (ushort)ppVar9[bVar28].blue;
      if ((uVar38 != 0) && ((uVar25 & 0x2080000) == 0x80000)) {
        puVar31 = param_1->trans_alpha;
        if (uVar23 < 8) {
          uVar35 = 0;
LAB_140dc0c30:
          do {
            puVar31[uVar35] = ~puVar31[uVar35];
            uVar35 = uVar35 + 1;
          } while (uVar38 != uVar35);
        }
        else if (uVar23 < 0x20) {
          uVar36 = 0;
LAB_140dc0c03:
          uVar35 = (ulonglong)(uVar23 & 0xfffffff8);
          do {
            *(ulonglong *)(puVar31 + uVar36) = ~*(ulonglong *)(puVar31 + uVar36);
            uVar36 = uVar36 + 8;
          } while (uVar35 != uVar36);
          if ((uVar23 & 0xfffffff8) != (uint)uVar23) goto LAB_140dc0c30;
        }
        else {
          uVar35 = (ulonglong)(uVar23 & 0xffffffe0);
          uVar36 = 0;
          do {
            puVar3 = (uint *)(puVar31 + uVar36);
            uVar15 = puVar3[1];
            uVar16 = puVar3[2];
            uVar17 = puVar3[3];
            puVar4 = (uint *)(puVar31 + uVar36 + 0x10);
            uVar25 = *puVar4;
            uVar30 = puVar4[1];
            uVar13 = puVar4[2];
            uVar14 = puVar4[3];
            puVar4 = (uint *)(puVar31 + uVar36);
            *puVar4 = *puVar3 ^ 0xffffffff;
            puVar4[1] = uVar15 ^ 0xffffffff;
            puVar4[2] = uVar16 ^ 0xffffffff;
            puVar4[3] = uVar17 ^ 0xffffffff;
            puVar3 = (uint *)(puVar31 + uVar36 + 0x10);
            *puVar3 = uVar25 ^ 0xffffffff;
            puVar3[1] = uVar30 ^ 0xffffffff;
            puVar3[2] = uVar13 ^ 0xffffffff;
            puVar3[3] = uVar14 ^ 0xffffffff;
            uVar36 = uVar36 + 0x20;
          } while (uVar35 != uVar36);
          if ((uVar23 & 0xffffffe0) != (uint)uVar23) {
            uVar36 = uVar35;
            if ((uVar23 & 0x18) == 0) goto LAB_140dc0c30;
            goto LAB_140dc0c03;
          }
        }
        uVar30 = param_1->transformations;
      }
    }
  }
  else {
    uVar30 = uVar25;
    if ((bVar28 & 4) == 0) {
      pbVar2 = (byte *)((longlong)&param_1->flags + 1);
      *pbVar2 = *pbVar2 & 0xdf;
      param_1->transformations = uVar25 & 0xff7fffff;
      uVar30 = uVar25 & 0xff7fffff;
      if (param_1->num_trans == 0) {
        uVar30 = uVar25 & 0xff7ffe7f;
        param_1->transformations = uVar30;
      }
    }
    if (((bVar28 & 2) == 0) && ((uVar30 & 0x1100) == 0x1100)) {
      uVar23 = (param_1->background).gray;
      uVar29 = (param_1->trans_color).gray;
      uVar6 = param_1->bit_depth;
      if (uVar6 == '\x04') {
        uVar23 = uVar23 * 0x11;
        uVar29 = uVar29 * 0x11;
      }
      else if (uVar6 == '\x02') {
        uVar23 = uVar23 * 0x55;
        uVar29 = uVar29 * 0x55;
      }
      else if (uVar6 == '\x01') {
        uVar23 = uVar23 * 0xff;
        uVar29 = uVar29 * 0xff;
      }
      (param_1->background).blue = uVar23;
      (param_1->background).green = uVar23;
      (param_1->background).red = uVar23;
      if ((uVar30 & 0x2000000) == 0) {
        (param_1->trans_color).blue = uVar29;
        (param_1->trans_color).green = uVar29;
        (param_1->trans_color).red = uVar29;
      }
    }
  }
  if (((uVar30 & 0x380) == 0x280) && (param_1->bit_depth != '\x10')) {
    uVar38._0_2_ = (param_1->background).red;
    uVar38._2_2_ = (param_1->background).green;
    uVar38._4_2_ = (param_1->background).blue;
    uVar38._6_2_ = (param_1->background).gray;
    auVar11._8_4_ = 0;
    auVar11._0_8_ = uVar38;
    auVar11._12_2_ = uVar38._6_2_;
    auVar12._8_2_ = uVar38._4_2_;
    auVar12._0_8_ = uVar38;
    auVar12._10_4_ = auVar11._10_4_;
    auVar19._6_8_ = 0;
    auVar19._0_6_ = auVar12._8_6_;
    auVar42._0_4_ =
         (int)((uint)(ushort)(undefined2)uVar38 * 0xff + ___xmm_0000807f0000807f0000807f0000807f) >>
         0x10;
    auVar42._4_4_ =
         (int)CONCAT82(SUB148(auVar19 << 0x40,6),uVar38._2_2_) * 0xff + _UNK_1531f1bd4 >> 0x10;
    auVar42._8_4_ = auVar12._8_4_ * 0xff + _UNK_1531f1bd8 >> 0x10;
    auVar42._12_4_ = (int)((auVar11._10_4_ >> 0x10) * 0xff + _UNK_1531f1bdc) >> 0x10;
    auVar42 = packssdw(auVar42,auVar42);
    uVar41 = auVar42._0_8_;
    (param_1->background).red = (short)uVar41;
    (param_1->background).green = (short)((ulonglong)uVar41 >> 0x10);
    (param_1->background).blue = (short)((ulonglong)uVar41 >> 0x20);
    (param_1->background).gray = (short)((ulonglong)uVar41 >> 0x30);
  }
  if (((uVar30 & 0x180) == 0x80 && (uVar30 & 0x4000400) != 0) && (param_1->bit_depth == '\x10')) {
    uVar35._0_2_ = (param_1->background).red;
    uVar35._2_2_ = (param_1->background).green;
    uVar35._4_2_ = (param_1->background).blue;
    uVar35._6_2_ = (param_1->background).gray;
    auVar40._8_8_ = 0;
    auVar40._0_8_ = uVar35;
    auVar42 = psllw(auVar40,8);
    (param_1->background).red = auVar42._0_2_ + (undefined2)uVar35;
    (param_1->background).green = auVar42._2_2_ + uVar35._2_2_;
    (param_1->background).blue = auVar42._4_2_ + uVar35._4_2_;
    (param_1->background).gray = auVar42._6_2_ + uVar35._6_2_;
  }
  (param_1->background_1).gray = (param_1->background).gray;
  uVar20 = (param_1->background).field_0x1;
  uVar23 = (param_1->background).red;
  uVar29 = (param_1->background).green;
  uVar7 = (param_1->background).blue;
  (param_1->background_1).index = (param_1->background).index;
  (param_1->background_1).field_0x1 = uVar20;
  (param_1->background_1).red = uVar23;
  (param_1->background_1).green = uVar29;
  (param_1->background_1).blue = uVar7;
  if ((uVar30 & 0x2000) == 0) {
    if ((uVar30 & 0x600000) != 0) {
      iVar24 = png_gamma_significant((param_1->colorspace).gamma);
      if ((iVar24 != 0) || (iVar24 = png_gamma_significant(param_1->screen_gamma), iVar24 != 0))
      goto LAB_140dc03b0;
      uVar30 = param_1->transformations;
    }
    if (((char)uVar30 < '\0') &&
       (((iVar24 = png_gamma_significant((param_1->colorspace).gamma), iVar24 != 0 ||
         (iVar24 = png_gamma_significant(param_1->screen_gamma), iVar24 != 0)) ||
        ((param_1->background_gamma_type == '\x03' &&
         (iVar24 = png_gamma_significant(param_1->background_gamma), iVar24 != 0))))))
    goto LAB_140dc03b0;
    uVar25 = param_1->transformations;
    if ((uVar25 & 0x800000) != 0) {
      iVar24 = png_gamma_significant(param_1->screen_gamma);
      if (iVar24 != 0) goto LAB_140dc03b0;
      uVar25 = param_1->transformations;
    }
    if ((-1 < (char)uVar25) || (param_1->color_type != '\x03')) goto joined_r0x000140dc0997;
    uVar23 = param_1->num_trans;
    if ((ulonglong)uVar23 != 0) {
      uVar29 = (param_1->background).red;
      uVar7 = (param_1->background).green;
      uVar8 = (param_1->background).blue;
      puVar31 = &param_1->palette->blue;
      uVar38 = 0;
      do {
        bVar28 = param_1->trans_alpha[uVar38];
        if (bVar28 != 0xff) {
          if (bVar28 == 0) {
            ((png_color_struct *)(puVar31 + -2))->red = (byte)uVar29;
            puVar31[-1] = (byte)uVar7;
            *puVar31 = (byte)uVar8;
          }
          else {
            uVar33 = (ushort)(byte)~bVar28 * (uVar29 & 0xff) +
                     (ushort)((png_color_struct *)(puVar31 + -2))->red * (ushort)bVar28 + 0x80;
            ((png_color_struct *)(puVar31 + -2))->red =
                 (byte)((uint)(uVar33 >> 8) + (uint)uVar33 >> 8);
            uVar33 = (ushort)puVar31[-1] * (ushort)param_1->trans_alpha[uVar38] +
                     (param_1->trans_alpha[uVar38] ^ 0xff) * (uVar7 & 0xff) + 0x80;
            puVar31[-1] = (byte)((uint)(uVar33 >> 8) + (uint)uVar33 >> 8);
            uVar33 = (ushort)*puVar31 * (ushort)param_1->trans_alpha[uVar38] +
                     (param_1->trans_alpha[uVar38] ^ 0xff) * (uVar8 & 0xff) + 0x80;
            *puVar31 = (byte)((uint)(uVar33 >> 8) + (uint)uVar33 >> 8);
          }
        }
        uVar38 = uVar38 + 1;
        puVar31 = puVar31 + 3;
      } while (uVar23 != uVar38);
      uVar25 = param_1->transformations;
    }
    uVar25 = uVar25 & 0xffffff7f;
  }
  else {
LAB_140dc03b0:
    png_build_gamma_table(param_1,(uint)param_1->bit_depth);
    uVar25 = param_1->transformations;
    if ((char)uVar25 < '\0') {
      if ((uVar25 & 0x600000) != 0) {
        png_warning(param_1,"libpng does not support gamma+background+rgb_to_gray");
      }
      if (param_1->color_type != '\x03') {
        uVar6 = param_1->background_gamma_type;
        if (uVar6 == '\x03') {
          iVar24 = png_reciprocal(param_1->background_gamma);
          iVar27 = param_1->background_gamma;
          iVar39 = param_1->screen_gamma;
LAB_140dc057c:
          iVar39 = png_reciprocal2(iVar27,iVar39);
        }
        else {
          if (uVar6 == '\x02') {
            iVar24 = png_reciprocal((param_1->colorspace).gamma);
            iVar39 = param_1->screen_gamma;
            iVar27 = (param_1->colorspace).gamma;
            goto LAB_140dc057c;
          }
          if (uVar6 != '\x01') {
                    /* WARNING: Subroutine does not return */
            png_error(param_1,"invalid background gamma type");
          }
          iVar24 = param_1->screen_gamma;
          iVar39 = 100000;
        }
        iVar27 = png_gamma_significant(iVar24);
        iVar26 = png_gamma_significant(iVar39);
        if (iVar27 != 0) {
          uVar23 = png_gamma_correct(param_1,(uint)(param_1->background).gray,iVar24);
          (param_1->background_1).gray = uVar23;
        }
        if (iVar26 != 0) {
          uVar23 = png_gamma_correct(param_1,(uint)(param_1->background).gray,iVar39);
          (param_1->background).gray = uVar23;
        }
        uVar23 = (param_1->background).red;
        if (((uVar23 == (param_1->background).green) && (uVar23 == (param_1->background).blue)) &&
           (uVar23 == (param_1->background).gray)) {
          uVar29 = (param_1->background_1).gray;
          (param_1->background_1).blue = uVar29;
          (param_1->background_1).green = uVar29;
          (param_1->background_1).red = uVar29;
          (param_1->background).blue = uVar23;
          (param_1->background).green = uVar23;
          (param_1->background).red = uVar23;
        }
        else {
          if (iVar27 != 0) {
            uVar23 = png_gamma_correct(param_1,(uint)uVar23,iVar24);
            (param_1->background_1).red = uVar23;
            uVar23 = png_gamma_correct(param_1,(uint)(param_1->background).green,iVar24);
            (param_1->background_1).green = uVar23;
            uVar23 = png_gamma_correct(param_1,(uint)(param_1->background).blue,iVar24);
            (param_1->background_1).blue = uVar23;
          }
          if (iVar26 != 0) {
            uVar23 = png_gamma_correct(param_1,(uint)(param_1->background).red,iVar39);
            (param_1->background).red = uVar23;
            uVar23 = png_gamma_correct(param_1,(uint)(param_1->background).green,iVar39);
            (param_1->background).green = uVar23;
            uVar23 = png_gamma_correct(param_1,(uint)(param_1->background).blue,iVar39);
            (param_1->background).blue = uVar23;
          }
        }
        param_1->background_gamma_type = '\x01';
        uVar25 = param_1->transformations;
        goto joined_r0x000140dc0997;
      }
      ppVar9 = param_1->palette;
      uVar38 = (ulonglong)param_1->num_palette;
      uVar6 = param_1->background_gamma_type;
      iVar24 = 100000;
      if (uVar6 == '\x01') {
        iVar39 = param_1->screen_gamma;
LAB_140dc0721:
        iVar27 = png_gamma_significant(iVar24);
        uVar25 = (uint)(param_1->background).red;
        if (iVar27 == 0) {
          local_4d = (byte)(param_1->background).green;
          bVar28 = (byte)(param_1->background).blue;
        }
        else {
          bVar28 = png_gamma_8bit_correct(uVar25,iVar24);
          uVar25 = (uint)bVar28;
          local_4d = png_gamma_8bit_correct((uint)(param_1->background).green,iVar24);
          bVar28 = png_gamma_8bit_correct((uint)(param_1->background).blue,iVar24);
        }
        bVar34 = (byte)uVar25;
        iVar24 = png_gamma_significant(iVar39);
        uVar25 = (uint)(param_1->background).red;
        if (iVar24 == 0) {
          bVar21 = (byte)(param_1->background).green;
          bVar22 = (byte)(param_1->background).blue;
        }
        else {
          bVar21 = png_gamma_8bit_correct(uVar25,iVar39);
          uVar25 = (uint)bVar21;
          bVar21 = png_gamma_8bit_correct((uint)(param_1->background).green,iVar39);
          bVar22 = png_gamma_8bit_correct((uint)(param_1->background).blue,iVar39);
        }
      }
      else {
        if (uVar6 == '\x03') {
          iVar39 = png_reciprocal(param_1->background_gamma);
          iVar24 = png_reciprocal2(param_1->background_gamma,param_1->screen_gamma);
          goto LAB_140dc0721;
        }
        iVar39 = 100000;
        if (uVar6 != '\x02') goto LAB_140dc0721;
        uVar23 = (param_1->background).red;
        puVar31 = param_1->gamma_table;
        puVar32 = param_1->gamma_to_1;
        bVar34 = puVar31[uVar23];
        uVar29 = (param_1->background).green;
        local_4d = puVar31[uVar29];
        uVar7 = (param_1->background).blue;
        bVar28 = puVar31[uVar7];
        uVar25 = (uint)puVar32[uVar23];
        bVar21 = puVar32[uVar29];
        bVar22 = puVar32[uVar7];
      }
      if (uVar38 != 0) {
        puVar31 = &ppVar9->blue;
        uVar35 = 0;
LAB_140dc083c:
        do {
          if ((uVar35 < param_1->num_trans) && (bVar5 = param_1->trans_alpha[uVar35], bVar5 != 0xff)
             ) {
            if (bVar5 == 0) {
              ((png_color_struct *)(puVar31 + -2))->red = bVar34;
              puVar31[-1] = local_4d;
              *puVar31 = bVar28;
              uVar35 = uVar35 + 1;
              puVar31 = puVar31 + 3;
              if (uVar38 == uVar35) break;
              goto LAB_140dc083c;
            }
            iVar39 = (uint)param_1->gamma_to_1[((png_color_struct *)(puVar31 + -2))->red] *
                     (uint)bVar5;
            iVar24 = (uint)(byte)~bVar5 * (uVar25 & 0xff);
            ((png_color_struct *)(puVar31 + -2))->red =
                 param_1->gamma_from_1
                 [(iVar24 + iVar39 + 0x80U >> 8 & 0xff) + 0x80 + iVar24 + iVar39 >> 8 & 0xff];
            iVar24 = (uint)param_1->gamma_to_1[puVar31[-1]] * (uint)param_1->trans_alpha[uVar35];
            iVar39 = (param_1->trans_alpha[uVar35] ^ 0xff) * (uint)bVar21;
            puVar31[-1] = param_1->gamma_from_1
                          [(iVar39 + iVar24 + 0x80U >> 8 & 0xff) + 0x80 + iVar39 + iVar24 >> 8 &
                           0xff];
            puVar32 = param_1->gamma_from_1;
            iVar24 = (uint)param_1->gamma_to_1[*puVar31] * (uint)param_1->trans_alpha[uVar35];
            iVar39 = (param_1->trans_alpha[uVar35] ^ 0xff) * (uint)bVar22;
            uVar36 = (ulonglong)
                     ((iVar24 + iVar39 + 0x80U >> 8 & 0xff) + iVar39 + iVar24 + 0x80 >> 8 & 0xff);
          }
          else {
            ((png_color_struct *)(puVar31 + -2))->red =
                 param_1->gamma_table[((png_color_struct *)(puVar31 + -2))->red];
            puVar31[-1] = param_1->gamma_table[puVar31[-1]];
            puVar32 = param_1->gamma_table;
            uVar36 = (ulonglong)*puVar31;
          }
          *puVar31 = puVar32[uVar36];
          uVar35 = uVar35 + 1;
          puVar31 = puVar31 + 3;
        } while (uVar38 != uVar35);
      }
      uVar25 = param_1->transformations & 0xffffdf7f;
    }
    else {
      if ((param_1->color_type != '\x03') ||
         (((byte)(uVar25 >> 0xc) & (uVar25 & 0x600000) != 0) != 0)) goto joined_r0x000140dc0997;
      uVar23 = param_1->num_palette;
      if ((ulonglong)uVar23 != 0) {
        ppVar9 = param_1->palette;
        lVar37 = 0;
        do {
          (&ppVar9->red)[lVar37] = param_1->gamma_table[(&ppVar9->red)[lVar37]];
          (&ppVar9->green)[lVar37] = param_1->gamma_table[(&ppVar9->green)[lVar37]];
          (&ppVar9->blue)[lVar37] = param_1->gamma_table[(&ppVar9->blue)[lVar37]];
          lVar37 = lVar37 + 3;
        } while ((ulonglong)uVar23 * 3 != lVar37);
        uVar25 = param_1->transformations;
      }
      uVar25 = uVar25 & 0xffffdfff;
    }
  }
  param_1->transformations = uVar25;
joined_r0x000140dc0997:
  if (((uVar25 & 0x1008) == 8) && (param_1->color_type == '\x03')) {
    uVar23 = param_1->num_palette;
    uVar6 = (param_1->sig_bit).red;
    param_1->transformations = uVar25 & 0xffffeff7;
    uVar25 = (uint)uVar23;
    if (uVar23 != 0 && (byte)(uVar6 - 1) < 7) {
      bVar28 = 8 - uVar6;
      if (uVar25 == 1) {
        uVar38 = 0;
      }
      else {
        lVar37 = 0;
        uVar38 = 0;
        do {
          (&param_1->palette->red)[lVar37] = (&param_1->palette->red)[lVar37] >> (bVar28 & 0x1f);
          (&param_1->palette[1].red)[lVar37] = (&param_1->palette[1].red)[lVar37] >> (bVar28 & 0x1f)
          ;
          uVar38 = uVar38 + 2;
          lVar37 = lVar37 + 6;
        } while ((uVar25 & 0xfffffffe) != uVar38);
      }
      if ((uVar23 & 1) != 0) {
        param_1->palette[uVar38].red = param_1->palette[uVar38].red >> (bVar28 & 0x1f);
      }
    }
    uVar6 = (param_1->sig_bit).green;
    if ((byte)(uVar6 - 1) < 7 && uVar23 != 0) {
      bVar28 = 8 - uVar6;
      if (uVar25 == 1) {
        uVar38 = 0;
      }
      else {
        lVar37 = 0;
        uVar38 = 0;
        do {
          (&param_1->palette->green)[lVar37] = (&param_1->palette->green)[lVar37] >> (bVar28 & 0x1f)
          ;
          (&param_1->palette[1].green)[lVar37] =
               (&param_1->palette[1].green)[lVar37] >> (bVar28 & 0x1f);
          uVar38 = uVar38 + 2;
          lVar37 = lVar37 + 6;
        } while ((uVar25 & 0xfffffffe) != uVar38);
      }
      if ((uVar23 & 1) != 0) {
        param_1->palette[uVar38].green = param_1->palette[uVar38].green >> (bVar28 & 0x1f);
      }
    }
    uVar6 = (param_1->sig_bit).blue;
    if ((byte)(uVar6 - 1) < 7 && uVar23 != 0) {
      bVar28 = 8 - uVar6;
      if (uVar25 == 1) {
        uVar38 = 0;
      }
      else {
        lVar37 = 0;
        uVar38 = 0;
        do {
          (&param_1->palette->blue)[lVar37] = (&param_1->palette->blue)[lVar37] >> (bVar28 & 0x1f);
          (&param_1->palette[1].blue)[lVar37] =
               (&param_1->palette[1].blue)[lVar37] >> (bVar28 & 0x1f);
          uVar38 = uVar38 + 2;
          lVar37 = lVar37 + 6;
        } while ((uVar25 & 0xfffffffe) != uVar38);
      }
      if ((uVar23 & 1) != 0) {
        param_1->palette[uVar38].blue = param_1->palette[uVar38].blue >> (bVar28 & 0x1f);
      }
    }
  }
  if ((local_48 ^ (ulonglong)auStack_78) == __security_cookie.value) {
    return;
  }
  pcVar10 = (code *)swi(3);
  (*pcVar10)();
  return;
}

// png_read_transform_info @ 140dc0cb0

void __cdecl png_read_transform_info(png_struct_def_conflict *param_1,png_info_def *param_2)

{
  uchar uVar1;
  uint uVar2;
  undefined1 uVar3;
  ushort uVar4;
  ushort uVar5;
  ushort uVar6;
  byte bVar7;
  ulong64 uVar8;
  uchar uVar9;
  byte bVar10;
  
  uVar2 = param_1->transformations;
  if ((uVar2 & 0x1000) != 0) {
    if (param_2->color_type == 3) {
      param_2->color_type = (param_1->num_trans != 0) << 2 | 2;
      param_2->bit_depth = '\b';
      param_2->num_trans = 0;
      if (param_1->palette == (png_color_struct *)0x0) {
                    /* WARNING: Subroutine does not return */
        png_error(param_1,"Palette is NULL in indexed image");
      }
    }
    else {
      if ((uVar2 & 0x2000000) != 0 && param_1->num_trans != 0) {
        param_2->color_type = param_2->color_type | 4;
      }
      if (param_2->bit_depth < 8) {
        param_2->bit_depth = '\b';
      }
      param_2->num_trans = 0;
    }
  }
  if ((char)uVar2 < '\0') {
    (param_2->background).gray = (param_1->background).gray;
    uVar3 = (param_1->background).field_0x1;
    uVar4 = (param_1->background).red;
    uVar5 = (param_1->background).green;
    uVar6 = (param_1->background).blue;
    (param_2->background).index = (param_1->background).index;
    (param_2->background).field_0x1 = uVar3;
    (param_2->background).red = uVar4;
    (param_2->background).green = uVar5;
    (param_2->background).blue = uVar6;
  }
  (param_2->colorspace).gamma = (param_1->colorspace).gamma;
  bVar7 = param_2->bit_depth;
  if ((uVar2 & 0x4000400) != 0 && bVar7 == 0x10) {
    param_2->bit_depth = '\b';
    bVar7 = 8;
  }
  if ((uVar2 & 0x4000) != 0) {
    param_2->color_type = param_2->color_type | 2;
  }
  if ((uVar2 & 0x600000) != 0) {
    param_2->color_type = param_2->color_type & 0xfd;
  }
  if ((((uVar2 & 0x40) == 0) || ((param_2->color_type | 4) != 6)) ||
     (param_1->palette_lookup == (uchar *)0x0 || bVar7 != 8)) {
    if (((byte)(uVar2 >> 9) & bVar7 == 8) == 0) goto LAB_140dc0dbe;
  }
  else {
    param_2->color_type = '\x03';
    bVar7 = 8;
    if ((uVar2 & 0x200) == 0) goto LAB_140dc0dbe;
  }
  bVar7 = 8;
  if (param_2->color_type != '\x03') {
    param_2->bit_depth = '\x10';
    bVar7 = 0x10;
  }
LAB_140dc0dbe:
  if (bVar7 < 8 && (uVar2 & 4) != 0) {
    param_2->bit_depth = '\b';
    bVar7 = 8;
  }
  bVar10 = param_2->color_type;
  if ((bVar10 == 3) || ((bVar10 & 2) == 0)) {
    param_2->channels = '\x01';
    uVar9 = '\x01';
  }
  else {
    param_2->channels = '\x03';
    uVar9 = '\x03';
  }
  if ((uVar2 & 0x40000) != 0) {
    bVar10 = bVar10 & 0xfb;
    param_2->color_type = bVar10;
    param_2->num_trans = 0;
  }
  if ((bVar10 & 4) != 0) {
    uVar9 = uVar9 + '\x01';
    param_2->channels = uVar9;
  }
  if (((short)uVar2 < 0) && ((bVar10 & 0xfd) == 0)) {
    uVar9 = uVar9 + '\x01';
    param_2->channels = uVar9;
    if ((uVar2 & 0x1000000) != 0) {
      param_2->color_type = bVar10 | 4;
    }
  }
  if ((uVar2 & 0x100000) != 0) {
    bVar10 = param_1->user_transform_depth;
    if (bVar10 != 0) {
      param_2->bit_depth = bVar10;
      bVar7 = bVar10;
    }
    uVar1 = param_1->user_transform_channels;
    if (uVar1 != '\0') {
      param_2->channels = uVar1;
      uVar9 = uVar1;
    }
  }
  bVar7 = bVar7 * uVar9;
  param_2->pixel_depth = bVar7;
  if (bVar7 < 8) {
    uVar8 = (ulonglong)param_2->width * (ulonglong)bVar7 + 7 >> 3;
  }
  else {
    uVar8 = (ulonglong)param_2->width * (ulonglong)(bVar7 >> 3);
  }
  param_2->rowbytes = uVar8;
  param_1->info_rowbytes = uVar8;
  return;
}

// png_do_read_transformations @ 140dc0f40

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
png_do_read_transformations(png_struct_def_conflict *param_1,png_row_info_struct *param_2)

{
  undefined8 uVar1;
  ushort uVar2;
  png_color_struct *ppVar3;
  ushort **ppuVar4;
  ushort **ppuVar5;
  ushort **ppuVar6;
  bool bVar7;
  bool bVar8;
  code *pcVar9;
  short sVar10;
  short sVar11;
  short sVar12;
  short sVar13;
  short sVar14;
  short sVar15;
  short sVar16;
  short sVar17;
  short sVar18;
  char cVar19;
  char cVar23;
  char cVar24;
  undefined1 auVar31 [15];
  undefined1 auVar32 [14];
  undefined1 auVar33 [15];
  undefined1 auVar34 [14];
  undefined1 auVar35 [15];
  undefined1 auVar36 [15];
  undefined1 auVar37 [15];
  undefined1 auVar38 [15];
  undefined1 auVar39 [15];
  undefined1 auVar40 [14];
  undefined1 auVar41 [13];
  undefined1 auVar42 [13];
  undefined1 auVar43 [13];
  undefined1 auVar44 [15];
  undefined1 auVar45 [15];
  undefined1 auVar46 [15];
  undefined1 auVar47 [15];
  undefined1 auVar48 [15];
  undefined1 auVar49 [15];
  undefined1 auVar50 [15];
  ushort uVar51;
  ushort uVar52;
  ushort uVar53;
  ushort uVar54;
  ushort uVar55;
  ushort uVar56;
  ushort uVar57;
  ushort uVar58;
  ushort uVar59;
  ushort uVar60;
  ushort uVar61;
  ushort uVar62;
  ushort uVar63;
  ushort uVar64;
  ushort uVar65;
  undefined1 auVar66 [15];
  unkuint9 Var67;
  undefined1 auVar68 [11];
  undefined1 auVar69 [13];
  undefined1 auVar70 [14];
  undefined1 auVar71 [15];
  undefined1 auVar72 [11];
  undefined1 auVar73 [14];
  undefined1 auVar74 [13];
  undefined1 auVar75 [15];
  undefined1 auVar76 [15];
  undefined1 auVar77 [15];
  undefined1 auVar78 [15];
  uint6 uVar79;
  ushort uVar80;
  ushort uVar81;
  ushort uVar82;
  undefined8 uVar83;
  byte bVar84;
  uint uVar85;
  ulonglong uVar86;
  ushort *puVar87;
  ulonglong uVar88;
  longlong lVar89;
  uchar *puVar90;
  uint *puVar91;
  uint *puVar92;
  uchar uVar93;
  byte bVar94;
  sbyte sVar95;
  ushort uVar96;
  short sVar97;
  uchar *puVar98;
  ulong64 uVar99;
  ushort uVar100;
  bool bVar101;
  uint uVar102;
  uint uVar103;
  ushort uVar104;
  int iVar105;
  ushort *puVar106;
  ushort uVar107;
  png_color_16_struct *ppVar108;
  char cVar109;
  uchar uVar110;
  byte *pbVar111;
  byte bVar112;
  uchar uVar113;
  int iVar114;
  uchar *puVar115;
  uchar *puVar116;
  uchar uVar117;
  longlong lVar118;
  byte *pbVar119;
  uint uVar120;
  uint uVar121;
  ushort *puVar122;
  undefined4 uVar123;
  undefined1 auVar126 [16];
  undefined1 auVar128 [16];
  undefined1 auVar129 [16];
  undefined1 auVar130 [16];
  undefined1 auVar131 [16];
  undefined1 auVar132 [16];
  undefined1 auVar133 [16];
  undefined1 auVar134 [16];
  undefined1 auVar135 [16];
  undefined1 auVar136 [16];
  undefined1 auVar137 [16];
  short sVar138;
  short sVar140;
  undefined1 auVar145 [16];
  undefined1 auVar146 [16];
  undefined1 auStack_d8 [32];
  png_struct_def_conflict *local_b8;
  png_row_info_struct *local_b0;
  ulonglong local_a8;
  ushort **local_a0;
  uint local_98 [6];
  ulonglong local_80;
  char cVar20;
  char cVar21;
  char cVar22;
  char cVar25;
  char cVar26;
  char cVar27;
  byte bVar28;
  char cVar29;
  char cVar30;
  undefined6 uVar124;
  undefined1 auVar125 [14];
  undefined1 auVar127 [16];
  undefined1 auVar139 [14];
  undefined4 uVar141;
  undefined6 uVar142;
  undefined1 auVar143 [14];
  undefined1 auVar144 [16];
  
  local_80 = __security_cookie.value ^ (ulonglong)auStack_d8;
  puVar115 = param_1->row_buf;
  if (puVar115 == (uchar *)0x0) {
                    /* WARNING: Subroutine does not return */
    png_error(param_1,"NULL row buffer");
  }
  if ((param_1->flags & 0x4040) == 0x4000) {
                    /* WARNING: Subroutine does not return */
    png_error(param_1,"Uninitialized row");
  }
  local_b0 = param_2;
  if ((param_1->transformations & 0x1000) != 0) {
    uVar100 = param_1->num_trans;
    if (param_2->color_type == '\x03') {
      ppVar3 = param_1->palette;
      puVar98 = param_1->trans_alpha;
      uVar103 = param_2->width;
      uVar88 = (ulonglong)uVar103;
      bVar84 = param_2->bit_depth;
      if (bVar84 < 8) {
        uVar99 = uVar88;
        if (bVar84 == 4) {
          if (uVar88 == 0) {
LAB_140dc12b6:
            uVar99 = 0;
          }
          else {
            uVar85 = uVar103 * 4 & 4;
            puVar90 = puVar115 + uVar88 + 1;
            pbVar119 = puVar115 + (ulonglong)(uVar103 - 1 >> 1) + 1;
            if (uVar103 - 1 != 0) {
              uVar102 = uVar103 & 0xfffffffe;
              do {
                puVar90[-1] = *pbVar119 >> ((byte)uVar85 & 0x1f) & 0xf;
                iVar114 = uVar85 + 4;
                if (uVar85 == 4) {
                  iVar114 = 0;
                }
                uVar86 = (ulonglong)(uVar85 == 4);
                puVar90[-2] = pbVar119[-uVar86] >> ((byte)iVar114 & 0x1f) & 0xf;
                puVar90 = puVar90 + -2;
                uVar85 = iVar114 + 4;
                if (iVar114 == 4) {
                  uVar85 = 0;
                }
                pbVar119 = pbVar119 + (-(ulonglong)(iVar114 == 4) - uVar86);
                uVar102 = uVar102 - 2;
              } while (uVar102 != 0);
            }
            if ((uVar103 & 1) != 0) {
              bVar84 = *pbVar119 >> ((byte)uVar85 & 0x1f) & 0xf;
LAB_140dc12e5:
              puVar90[-1] = bVar84;
            }
          }
        }
        else if (bVar84 == 2) {
          if (uVar88 == 0) goto LAB_140dc12b6;
          uVar85 = ~(uVar103 * 2 + 6) & 6;
          puVar90 = puVar115 + uVar88 + 1;
          pbVar119 = puVar115 + (ulonglong)(uVar103 - 1 >> 2) + 1;
          if (uVar103 - 1 != 0) {
            uVar102 = uVar103 & 0xfffffffe;
            do {
              puVar90[-1] = *pbVar119 >> ((byte)uVar85 & 0x1f) & 3;
              iVar114 = uVar85 + 2;
              if (uVar85 == 6) {
                iVar114 = 0;
              }
              uVar86 = (ulonglong)(uVar85 == 6);
              puVar90[-2] = pbVar119[-uVar86] >> ((byte)iVar114 & 0x1f) & 3;
              puVar90 = puVar90 + -2;
              uVar85 = iVar114 + 2;
              if (iVar114 == 6) {
                uVar85 = 0;
              }
              pbVar119 = pbVar119 + (-(ulonglong)(iVar114 == 6) - uVar86);
              uVar102 = uVar102 - 2;
            } while (uVar102 != 0);
          }
          if ((uVar103 & 1) != 0) {
            bVar84 = *pbVar119 >> ((byte)uVar85 & 0x1f) & 3;
            goto LAB_140dc12e5;
          }
        }
        else if (bVar84 == 1) {
          if (uVar88 == 0) goto LAB_140dc12b6;
          uVar85 = -uVar103 & 7;
          puVar90 = puVar115 + uVar88 + 1;
          pbVar119 = puVar115 + (ulonglong)(uVar103 - 1 >> 3) + 1;
          if (uVar103 - 1 != 0) {
            uVar102 = uVar103 & 0xfffffffe;
            do {
              puVar90[-1] = (*pbVar119 >> (uVar85 & 0x1f) & 1) != 0;
              uVar120 = uVar85 + 1;
              if (uVar85 == 7) {
                uVar120 = 0;
              }
              uVar86 = (ulonglong)(uVar85 == 7);
              puVar90[-2] = (pbVar119[-uVar86] >> (uVar120 & 0x1f) & 1) != 0;
              puVar90 = puVar90 + -2;
              uVar85 = uVar120 + 1;
              if (uVar120 == 7) {
                uVar85 = 0;
              }
              pbVar119 = pbVar119 + (-(ulonglong)(uVar120 == 7) - uVar86);
              uVar102 = uVar102 - 2;
            } while (uVar102 != 0);
          }
          if ((uVar103 & 1) != 0) {
            puVar90[-1] = (*pbVar119 >> (uVar85 & 0x1f) & 1) != 0;
          }
        }
        param_2->bit_depth = '\b';
        param_2->pixel_depth = '\b';
        param_2->rowbytes = uVar99;
      }
      else if (bVar84 != 8) goto LAB_140dc1421;
      if (uVar100 == 0) {
        uVar86 = (ulonglong)(uVar103 * 3);
        if (uVar88 != 0) {
          puVar98 = puVar115 + uVar86;
          puVar115 = puVar115 + uVar88 + 1;
          if (uVar103 != 1) {
            uVar85 = uVar103 & 0xfffffffe;
            puVar90 = puVar115;
            do {
              *puVar98 = ppVar3[puVar90[-1]].blue;
              puVar98[-1] = ppVar3[puVar90[-1]].green;
              puVar98[-2] = ppVar3[puVar90[-1]].red;
              puVar115 = puVar90 + -2;
              puVar98[-3] = ppVar3[puVar90[-2]].blue;
              puVar98[-4] = ppVar3[puVar90[-2]].green;
              puVar98[-5] = ppVar3[puVar90[-2]].red;
              puVar98 = puVar98 + -6;
              uVar85 = uVar85 - 2;
              puVar90 = puVar115;
            } while (uVar85 != 0);
          }
          if ((uVar103 & 1) != 0) {
            *puVar98 = ppVar3[puVar115[-1]].blue;
            puVar98[-1] = ppVar3[puVar115[-1]].green;
            puVar98[-2] = ppVar3[puVar115[-1]].red;
          }
        }
        param_2->bit_depth = '\b';
        param_2->pixel_depth = '\x18';
        uVar93 = '\x03';
        uVar117 = '\x02';
      }
      else {
        if (uVar88 != 0) {
          do {
            uVar93 = 0xff;
            if (puVar115[uVar88] < uVar100) {
              uVar93 = puVar98[puVar115[uVar88]];
            }
            puVar115[uVar88 * 4] = uVar93;
            puVar115[uVar88 * 4 + -1] = ppVar3[puVar115[uVar88]].blue;
            puVar115[uVar88 * 4 + -2] = ppVar3[puVar115[uVar88]].green;
            puVar115[uVar88 * 4 + -3] = ppVar3[puVar115[uVar88]].red;
            uVar88 = uVar88 - 1;
          } while ((int)uVar88 != 0);
        }
        param_2->bit_depth = '\b';
        param_2->pixel_depth = ' ';
        uVar86 = (ulonglong)(uVar103 << 2);
        uVar93 = '\x04';
        uVar117 = '\x06';
      }
      param_2->rowbytes = uVar86;
      param_2->color_type = uVar117;
      param_2->channels = uVar93;
    }
    else {
      if ((param_1->transformations & 0x2000000) == 0 || uVar100 == 0) {
        ppVar108 = (png_color_16_struct *)0x0;
      }
      else {
        ppVar108 = &param_1->trans_color;
      }
      png_do_expand(param_2,puVar115 + 1,ppVar108);
    }
  }
LAB_140dc1421:
  uVar103 = param_1->transformations;
  if (((uVar103 & 0x40080) == 0x40000) && ((param_2->color_type | 2) == 6)) {
    png_do_strip_channel(param_2,param_1->row_buf + 1,0);
    uVar103 = param_1->transformations;
  }
  local_b8 = param_1;
  if (((uVar103 & 0x600000) != 0) && (bVar84 = param_2->color_type, (bVar84 & 3) == 2)) {
    puVar115 = param_1->row_buf;
    puVar87 = (ushort *)(puVar115 + 1);
    uVar100 = param_1->rgb_to_gray_red_coeff;
    uVar104 = param_1->rgb_to_gray_green_coeff;
    iVar114 = (0x8000 - (uint)uVar100) - (uint)uVar104;
    uVar103 = param_2->width;
    local_a8 = (ulonglong)uVar103;
    uVar85 = (uint)uVar100;
    uVar102 = (uint)uVar104;
    if (param_2->bit_depth == '\b') {
      local_a0 = (ushort **)param_1->gamma_from_1;
      if ((local_a0 != (ushort **)0x0) && (puVar98 = param_1->gamma_to_1, puVar98 != (uchar *)0x0))
      {
        bVar101 = false;
        puVar122 = puVar87;
        uVar88 = local_a8;
joined_r0x000140dc14e6:
        if (uVar103 != 0) {
          do {
            bVar94 = (byte)*puVar87;
            if (bVar94 == (byte)puVar87[1] && *(byte *)((longlong)puVar87 + 1) == bVar94) {
              if (param_1->gamma_table != (uchar *)0x0) {
                pbVar119 = param_1->gamma_table + bVar94;
                goto LAB_140dc158a;
              }
              *(byte *)puVar122 = bVar94;
            }
            else {
              pbVar119 = (byte *)((ulonglong)
                                  ((uint)puVar98[(byte)puVar87[1]] * iVar114 +
                                   puVar98[*(byte *)((longlong)puVar87 + 1)] * uVar102 +
                                   puVar98[bVar94] * uVar85 + 0x4000 >> 0xf) + (longlong)local_a0);
              bVar101 = true;
LAB_140dc158a:
              *(byte *)puVar122 = *pbVar119;
            }
            if ((bVar84 & 4) != 0) goto LAB_140dc1500;
            puVar87 = (ushort *)((longlong)puVar87 + 3);
            puVar122 = (ushort *)((longlong)puVar122 + 1);
            uVar103 = (int)uVar88 - 1;
            uVar88 = (ulonglong)uVar103;
            param_2 = local_b0;
            if (uVar103 == 0) break;
          } while( true );
        }
        goto LAB_140dc189c;
      }
      if (uVar103 == 0) {
        bVar101 = false;
      }
      else {
        lVar89 = 0;
        bVar101 = false;
        puVar122 = puVar87;
        if ((bVar84 & 4) == 0) {
          do {
            bVar84 = (byte)*puVar122;
            if (bVar84 != (byte)puVar122[1] || *(byte *)((longlong)puVar122 + 1) != bVar84) {
              bVar84 = (byte)((uint)(byte)puVar122[1] * iVar114 +
                              *(byte *)((longlong)puVar122 + 1) * uVar102 + bVar84 * uVar85 >> 0xf);
              bVar101 = true;
            }
            *(byte *)((longlong)puVar87 + lVar89) = bVar84;
            lVar89 = lVar89 + 1;
            puVar122 = (ushort *)((longlong)puVar122 + 3);
          } while (uVar103 != (uint)lVar89);
        }
        else {
          do {
            bVar84 = (byte)puVar87[lVar89 * 2];
            if (bVar84 != puVar115[lVar89 * 4 + 3] || puVar115[lVar89 * 4 + 2] != bVar84) {
              bVar84 = (byte)((uint)puVar115[lVar89 * 4 + 3] * iVar114 +
                              puVar115[lVar89 * 4 + 2] * uVar102 + bVar84 * uVar85 >> 0xf);
              bVar101 = true;
            }
            *(byte *)(puVar87 + lVar89) = bVar84;
            puVar115[lVar89 * 2 + 2] = puVar115[lVar89 * 4 + 4];
            lVar89 = lVar89 + 1;
          } while (uVar103 != (uint)lVar89);
        }
      }
    }
    else {
      ppuVar4 = param_1->gamma_16_to_1;
      if ((ppuVar4 != (ushort **)0x0) &&
         (local_a0 = param_1->gamma_16_from_1, local_a0 != (ushort **)0x0)) {
        bVar101 = false;
        puVar122 = puVar87;
        uVar88 = local_a8;
joined_r0x000140dc15f1:
        if (uVar103 != 0) {
          do {
            uVar107 = *puVar87;
            uVar2 = puVar87[2];
            uVar96 = uVar107 << 8 | uVar107 >> 8;
            bVar94 = (byte)puVar87[1];
            bVar112 = *(byte *)((longlong)puVar87 + 3);
            if ((CONCAT11(bVar94,bVar112) == uVar96) &&
               (uVar96 == (ushort)(uVar2 << 8 | uVar2 >> 8))) {
              if (param_1->gamma_16_table != (ushort **)0x0) {
                puVar106 = (ushort *)
                           ((ulonglong)((uint)bVar94 + (uint)bVar94) +
                           (longlong)
                           param_1->gamma_16_table[bVar112 >> ((byte)param_1->gamma_shift & 0x1f)]);
                goto LAB_140dc16f4;
              }
            }
            else {
              bVar28 = (byte)param_1->gamma_shift;
              uVar103 = (uint)ppuVar4[(byte)((byte)(uVar2 >> 8) >> (bVar28 & 0x1f))][uVar2 & 0xff] *
                        iVar114 + (uint)ppuVar4[bVar112 >> (bVar28 & 0x1f)][bVar94] * (uint)uVar104
                                  + (uint)ppuVar4[(byte)((byte)(uVar107 >> 8) >> (bVar28 & 0x1f))]
                                          [uVar107 & 0xff] * (uint)uVar100 + 0x4000;
              puVar106 = (ushort *)
                         ((ulonglong)(uVar103 >> 0x16 & 0x1fe) +
                         (longlong)local_a0[(uVar103 >> 0xf & 0xff) >> (bVar28 & 0x1f)]);
              bVar101 = true;
LAB_140dc16f4:
              uVar96 = *puVar106;
            }
            *puVar122 = uVar96 << 8 | uVar96 >> 8;
            if ((bVar84 & 4) == 0) goto code_r0x000140dc170f;
            *(byte *)(puVar122 + 1) = (byte)puVar87[3];
            pbVar119 = (byte *)((longlong)puVar87 + 7);
            puVar87 = puVar87 + 4;
            *(byte *)((longlong)puVar122 + 3) = *pbVar119;
            puVar122 = puVar122 + 2;
            uVar103 = (int)uVar88 - 1;
            uVar88 = (ulonglong)uVar103;
            param_2 = local_b0;
            if (uVar103 == 0) break;
          } while( true );
        }
        goto LAB_140dc189c;
      }
      bVar101 = false;
      puVar122 = puVar87;
      uVar88 = local_a8;
      while (uVar103 != 0) {
        while( true ) {
          uVar100 = *puVar87 << 8 | *puVar87 >> 8;
          uVar104 = puVar87[1] << 8 | puVar87[1] >> 8;
          uVar107 = puVar87[2] << 8 | puVar87[2] >> 8;
          if (uVar100 != uVar107 || uVar100 != uVar104) {
            bVar101 = true;
          }
          uVar103 = (uint)uVar107 * iVar114 + uVar104 * uVar102 + uVar100 * uVar85 + 0x4000;
          *(byte *)puVar122 = (byte)(uVar103 >> 0x17);
          *(byte *)((longlong)puVar122 + 1) = (byte)(uVar103 >> 0xf);
          if ((bVar84 & 4) != 0) break;
          puVar87 = puVar87 + 3;
          puVar122 = puVar122 + 1;
          uVar103 = (int)uVar88 - 1;
          uVar88 = (ulonglong)uVar103;
          if (uVar103 == 0) goto LAB_140dc189c;
        }
        *(byte *)(puVar122 + 1) = (byte)puVar87[3];
        pbVar119 = (byte *)((longlong)puVar87 + 7);
        puVar87 = puVar87 + 4;
        *(byte *)((longlong)puVar122 + 3) = *pbVar119;
        puVar122 = puVar122 + 2;
        uVar103 = (int)uVar88 - 1;
        uVar88 = (ulonglong)uVar103;
      }
    }
LAB_140dc189c:
    uVar93 = param_2->channels + 0xfe;
    param_2->channels = uVar93;
    param_2->color_type = param_2->color_type & 0xfd;
    bVar84 = param_2->bit_depth * uVar93;
    param_2->pixel_depth = bVar84;
    if (bVar84 < 8) {
      uVar88 = bVar84 * local_a8 + 7 >> 3;
    }
    else {
      uVar88 = (bVar84 >> 3) * local_a8;
    }
    param_2->rowbytes = uVar88;
    uVar103 = param_1->transformations;
    if (bVar101) {
      param_1->rgb_to_gray_status = '\x01';
      if ((uVar103 & 0x600000) == 0x400000) {
        png_warning(param_1,"png_do_rgb_to_gray found nongray pixel");
        uVar103 = param_1->transformations;
      }
      if ((uVar103 & 0x600000) == 0x200000) {
                    /* WARNING: Subroutine does not return */
        png_error(param_1,"png_do_rgb_to_gray found nongray pixel");
      }
    }
  }
  if (((uVar103 & 0x4000) != 0) && ((param_1->mode & 0x800) == 0)) {
    png_do_gray_to_rgb(param_2,param_1->row_buf + 1);
    uVar103 = param_1->transformations;
  }
  if (((char)uVar103 < '\0') && (param_2->color_type < 7)) {
    pbVar119 = param_1->row_buf;
    puVar87 = (ushort *)(pbVar119 + 1);
    puVar115 = param_1->gamma_table;
    puVar98 = param_1->gamma_from_1;
    puVar90 = param_1->gamma_to_1;
    ppuVar4 = param_1->gamma_16_table;
    ppuVar5 = param_1->gamma_16_from_1;
    ppuVar6 = param_1->gamma_16_to_1;
    uVar103 = param_1->flags;
    uVar85 = param_2->width;
    bVar84 = (byte)param_1->gamma_shift;
    param_1 = local_b8;
    switch(param_2->color_type) {
    case '\0':
      switch(param_2->bit_depth) {
      case '\x01':
        if (uVar85 != 0) {
          uVar100 = (local_b8->trans_color).gray;
          uVar103 = 7;
          do {
            if ((((byte)*puVar87 >> (uVar103 & 0x1f) & 1) != 0) == uVar100) {
              *(byte *)puVar87 =
                   (byte)(*(int *)&(local_b8->background).gray << ((byte)uVar103 & 0x1f)) |
                   (byte)(0x7f7f >> (7 - (byte)uVar103 & 0x1f)) & (byte)*puVar87;
            }
            bVar101 = uVar103 == 0;
            uVar103 = uVar103 - 1;
            if (bVar101) {
              uVar103 = 7;
            }
            puVar87 = (ushort *)((longlong)puVar87 + (ulonglong)bVar101);
            uVar85 = uVar85 - 1;
          } while (uVar85 != 0);
        }
        break;
      case '\x02':
        if (puVar115 == (uchar *)0x0) {
          if (uVar85 != 0) {
            uVar100 = (local_b8->trans_color).gray;
            iVar114 = 6;
            do {
              bVar84 = (byte)iVar114;
              if (((byte)((byte)*puVar87 >> (bVar84 & 0x1f)) & 3) == uVar100) {
                *(byte *)puVar87 =
                     (byte)(*(int *)&(local_b8->background).gray << (bVar84 & 0x1f)) |
                     (byte)(0x3f3f >> (6 - bVar84 & 0x1f)) & (byte)*puVar87;
              }
              bVar101 = iVar114 == 0;
              iVar114 = iVar114 + -2;
              if (bVar101) {
                iVar114 = 6;
              }
              puVar87 = (ushort *)((longlong)puVar87 + (ulonglong)bVar101);
              uVar85 = uVar85 - 1;
            } while (uVar85 != 0);
          }
        }
        else if (uVar85 != 0) {
          uVar100 = (local_b8->trans_color).gray;
          iVar114 = 6;
          do {
            bVar84 = (byte)iVar114;
            uVar103 = (byte)((byte)*puVar87 >> (bVar84 & 0x1f)) & 3;
            if (uVar103 == uVar100) {
              uVar103 = (uint)(local_b8->background).gray;
            }
            else {
              uVar103 = (uint)(puVar115[(ulonglong)uVar103 * 0x55] >> 6);
            }
            *(byte *)puVar87 =
                 (byte)(uVar103 << (bVar84 & 0x1f)) |
                 (byte)(0x3f3f >> (6 - bVar84 & 0x1f)) & (byte)*puVar87;
            bVar101 = iVar114 == 0;
            iVar114 = iVar114 + -2;
            if (bVar101) {
              iVar114 = 6;
            }
            puVar87 = (ushort *)((longlong)puVar87 + (ulonglong)bVar101);
            uVar85 = uVar85 - 1;
          } while (uVar85 != 0);
        }
        break;
      case '\x04':
        if (puVar115 == (uchar *)0x0) {
          if (uVar85 != 0) {
            uVar100 = (local_b8->trans_color).gray;
            iVar114 = 4;
            do {
              bVar84 = (byte)iVar114;
              if (((byte)((byte)*puVar87 >> (bVar84 & 0x1f)) & 0xf) == uVar100) {
                *(byte *)puVar87 =
                     (byte)(*(int *)&(local_b8->background).gray << (bVar84 & 0x1f)) |
                     (byte)(0xf0f >> (4 - bVar84 & 0x1f)) & (byte)*puVar87;
              }
              bVar101 = iVar114 == 0;
              iVar114 = iVar114 + -4;
              if (bVar101) {
                iVar114 = 4;
              }
              puVar87 = (ushort *)((longlong)puVar87 + (ulonglong)bVar101);
              uVar85 = uVar85 - 1;
            } while (uVar85 != 0);
          }
        }
        else if (uVar85 != 0) {
          uVar100 = (local_b8->trans_color).gray;
          iVar114 = 4;
          do {
            bVar84 = (byte)iVar114;
            uVar103 = (byte)((byte)*puVar87 >> (bVar84 & 0x1f)) & 0xf;
            if (uVar103 == uVar100) {
              uVar103 = (uint)(local_b8->background).gray;
            }
            else {
              uVar103 = (uint)(puVar115[uVar103 << 4 | uVar103] >> 4);
            }
            *(byte *)puVar87 =
                 (byte)(uVar103 << (bVar84 & 0x1f)) |
                 (byte)(0xf0f >> (4 - bVar84 & 0x1f)) & (byte)*puVar87;
            bVar101 = iVar114 == 0;
            iVar114 = iVar114 + -4;
            if (bVar101) {
              iVar114 = 4;
            }
            puVar87 = (ushort *)((longlong)puVar87 + (ulonglong)bVar101);
            uVar85 = uVar85 - 1;
          } while (uVar85 != 0);
        }
        break;
      case '\b':
        if (puVar115 == (uchar *)0x0) {
          if (uVar85 != 0) {
            uVar100 = (local_b8->trans_color).gray;
            if (uVar85 != 1) {
              uVar103 = uVar85 & 0xfffffffe;
              do {
                if (uVar100 == (byte)*puVar87) {
                  *(byte *)puVar87 = (byte)(local_b8->background).gray;
                  bVar84 = *(byte *)((longlong)puVar87 + 1);
                }
                else {
                  bVar84 = *(byte *)((longlong)puVar87 + 1);
                }
                if (uVar100 == bVar84) {
                  *(byte *)((longlong)puVar87 + 1) = (byte)(local_b8->background).gray;
                }
                puVar87 = puVar87 + 1;
                uVar103 = uVar103 - 2;
              } while (uVar103 != 0);
            }
            if (((uVar85 & 1) != 0) && (uVar100 == (byte)*puVar87)) {
LAB_140dc387c:
              *(byte *)puVar87 = (byte)(local_b8->background).gray;
            }
          }
        }
        else if (uVar85 != 0) {
          uVar100 = (local_b8->trans_color).gray;
          if (uVar85 != 1) {
            uVar103 = uVar85 & 0xfffffffe;
            do {
              while (uVar100 != (byte)*puVar87) {
                *(uchar *)puVar87 = puVar115[(ushort)(byte)*puVar87];
                bVar84 = *(byte *)((longlong)puVar87 + 1);
                if (uVar100 != bVar84) goto LAB_140dc3467;
LAB_140dc3419:
                *(byte *)((longlong)puVar87 + 1) = (byte)(local_b8->background).gray;
                puVar87 = puVar87 + 1;
                uVar103 = uVar103 - 2;
                if (uVar103 == 0) goto LAB_140dc347d;
              }
              *(byte *)puVar87 = (byte)(local_b8->background).gray;
              bVar84 = *(byte *)((longlong)puVar87 + 1);
              if (uVar100 == bVar84) goto LAB_140dc3419;
LAB_140dc3467:
              *(uchar *)((longlong)puVar87 + 1) = puVar115[bVar84];
              puVar87 = puVar87 + 1;
              uVar103 = uVar103 - 2;
            } while (uVar103 != 0);
          }
LAB_140dc347d:
          if ((uVar85 & 1) != 0) {
            if (uVar100 == (byte)*puVar87) goto LAB_140dc387c;
            *(uchar *)puVar87 = puVar115[(ushort)(byte)*puVar87];
          }
        }
        break;
      case '\x10':
        if (ppuVar4 == (ushort **)0x0) {
          if (uVar85 != 0) {
            uVar100 = (local_b8->trans_color).gray;
            if (uVar85 != 1) {
              uVar103 = uVar85 & 0xfffffffe;
              do {
                if ((ushort)(*puVar87 << 8 | *puVar87 >> 8) == uVar100) {
                  uVar104 = (local_b8->background).gray;
                  *puVar87 = uVar104 << 8 | uVar104 >> 8;
                }
                if ((ushort)(puVar87[1] << 8 | puVar87[1] >> 8) == uVar100) {
                  uVar104 = (local_b8->background).gray;
                  puVar87[1] = uVar104 << 8 | uVar104 >> 8;
                }
                puVar87 = puVar87 + 2;
                uVar103 = uVar103 - 2;
              } while (uVar103 != 0);
            }
            if (((uVar85 & 1) != 0) && ((ushort)(*puVar87 << 8 | *puVar87 >> 8) == uVar100)) {
              uVar100 = (local_b8->background).gray;
              *puVar87 = uVar100 << 8 | uVar100 >> 8;
            }
          }
        }
        else if (uVar85 != 0) {
          uVar100 = (local_b8->trans_color).gray;
          lVar89 = 0;
          do {
            bVar94 = (byte)puVar87[lVar89];
            puVar122 = &(local_b8->background).gray;
            if (CONCAT11(bVar94,pbVar119[lVar89 * 2 + 2]) != uVar100) {
              puVar122 = (ushort *)
                         ((ulonglong)((uint)bVar94 + (uint)bVar94) +
                         (longlong)ppuVar4[pbVar119[lVar89 * 2 + 2] >> (bVar84 & 0x1f)]);
            }
            puVar87[lVar89] = *puVar122 << 8 | *puVar122 >> 8;
            lVar89 = lVar89 + 1;
          } while (uVar85 != (uint)lVar89);
        }
      }
      break;
    case '\x02':
      if (param_2->bit_depth == '\b') {
        if (puVar115 == (uchar *)0x0) {
          if (uVar85 != 0) {
            uVar100 = (local_b8->trans_color).red;
            do {
              pbVar111 = pbVar119 + 3;
              if (((uVar100 == pbVar119[1]) &&
                  ((local_b8->trans_color).green == (ushort)pbVar119[2])) &&
                 ((local_b8->trans_color).blue == (ushort)*pbVar111)) {
                pbVar119[1] = (byte)(local_b8->background).red;
                pbVar119[2] = (byte)(local_b8->background).green;
                *pbVar111 = (byte)(local_b8->background).blue;
              }
              uVar85 = uVar85 - 1;
              pbVar119 = pbVar111;
            } while (uVar85 != 0);
          }
        }
        else if (uVar85 != 0) {
          uVar100 = (local_b8->trans_color).red;
          pbVar119 = pbVar119 + 3;
          do {
            while( true ) {
              if (((uVar100 != pbVar119[-2]) ||
                  ((local_b8->trans_color).green != (ushort)pbVar119[-1])) ||
                 ((local_b8->trans_color).blue != (ushort)*pbVar119)) break;
              pbVar119[-2] = (byte)(local_b8->background).red;
              pbVar119[-1] = (byte)(local_b8->background).green;
              *pbVar119 = (byte)(local_b8->background).blue;
              pbVar119 = pbVar119 + 3;
              uVar85 = uVar85 - 1;
              if (uVar85 == 0) goto switchD_140dc1bd6_caseD_1;
            }
            pbVar119[-2] = puVar115[pbVar119[-2]];
            pbVar119[-1] = puVar115[pbVar119[-1]];
            *pbVar119 = puVar115[*pbVar119];
            pbVar119 = pbVar119 + 3;
            uVar85 = uVar85 - 1;
          } while (uVar85 != 0);
        }
      }
      else if (ppuVar4 == (ushort **)0x0) {
        if (uVar85 != 0) {
          uVar100 = (local_b8->trans_color).red;
          do {
            if ((((ushort)(*(ushort *)(pbVar119 + 1) << 8 | *(ushort *)(pbVar119 + 1) >> 8) ==
                  uVar100) &&
                ((ushort)(*(ushort *)(pbVar119 + 3) << 8 | *(ushort *)(pbVar119 + 3) >> 8) ==
                 (local_b8->trans_color).green)) &&
               ((ushort)(*(ushort *)(pbVar119 + 5) << 8 | *(ushort *)(pbVar119 + 5) >> 8) ==
                (local_b8->trans_color).blue)) {
              uVar104 = (local_b8->background).red;
              *(ushort *)(pbVar119 + 1) = uVar104 << 8 | uVar104 >> 8;
              uVar104 = (local_b8->background).green;
              *(ushort *)(pbVar119 + 3) = uVar104 << 8 | uVar104 >> 8;
              uVar104 = (local_b8->background).blue;
              *(ushort *)(pbVar119 + 5) = uVar104 << 8 | uVar104 >> 8;
            }
            uVar85 = uVar85 - 1;
            pbVar119 = pbVar119 + 6;
          } while (uVar85 != 0);
        }
      }
      else if (uVar85 != 0) {
        uVar100 = (local_b8->trans_color).red;
        do {
          bVar94 = pbVar119[6];
          if (((CONCAT11(pbVar119[1],pbVar119[2]) == uVar100) &&
              (CONCAT11(pbVar119[3],pbVar119[4]) == (local_b8->trans_color).green)) &&
             (CONCAT11(pbVar119[5],bVar94) == (local_b8->trans_color).blue)) {
            uVar104 = (local_b8->background).red;
            *(ushort *)(pbVar119 + 1) = uVar104 << 8 | uVar104 >> 8;
            uVar104 = (local_b8->background).green;
            *(ushort *)(pbVar119 + 3) = uVar104 << 8 | uVar104 >> 8;
            puVar87 = &(local_b8->background).blue;
          }
          else {
            *(ushort *)(pbVar119 + 1) =
                 ppuVar4[pbVar119[2] >> (bVar84 & 0x1f)][pbVar119[1]] << 8 |
                 ppuVar4[pbVar119[2] >> (bVar84 & 0x1f)][pbVar119[1]] >> 8;
            *(ushort *)(pbVar119 + 3) =
                 ppuVar4[pbVar119[4] >> (bVar84 & 0x1f)][pbVar119[3]] << 8 |
                 ppuVar4[pbVar119[4] >> (bVar84 & 0x1f)][pbVar119[3]] >> 8;
            puVar87 = (ushort *)
                      ((ulonglong)((uint)pbVar119[5] * 2) +
                      (longlong)ppuVar4[bVar94 >> (bVar84 & 0x1f)]);
          }
          *(ushort *)(pbVar119 + 5) = *puVar87 << 8 | *puVar87 >> 8;
          uVar85 = uVar85 - 1;
          pbVar119 = pbVar119 + 6;
        } while (uVar85 != 0);
      }
      break;
    case '\x04':
      if (param_2->bit_depth == '\b') {
        if ((puVar98 == (uchar *)0x0 || puVar90 == (uchar *)0x0) || puVar115 == (uchar *)0x0) {
          if (uVar85 != 0) {
            lVar89 = 0;
            do {
              bVar84 = pbVar119[lVar89 * 2 + 2];
              if (bVar84 != 0xff) {
                if (bVar84 == 0) {
                  bVar84 = (byte)(local_b8->background).gray;
                }
                else {
                  uVar100 = (ushort)(byte)~bVar84 * (local_b8->background).gray +
                            (ushort)pbVar119[lVar89 * 2 + 1] * (ushort)bVar84 + 0x80;
                  bVar84 = (byte)((uint)(uVar100 >> 8) + (uint)uVar100 >> 8);
                }
                pbVar119[lVar89 * 2 + 1] = bVar84;
              }
              lVar89 = lVar89 + 1;
            } while (uVar85 != (uint)lVar89);
          }
        }
        else if (uVar85 != 0) {
          lVar89 = 0;
          do {
            bVar84 = pbVar119[lVar89 * 2 + 2];
            if (bVar84 == 0) {
              bVar84 = (byte)(local_b8->background).gray;
            }
            else if (bVar84 == 0xff) {
              bVar84 = puVar115[(byte)puVar87[lVar89]];
            }
            else {
              uVar102 = (uint)(ushort)((ushort)(byte)~bVar84 * (local_b8->background_1).gray) +
                        (uint)puVar90[(byte)puVar87[lVar89]] * (uint)bVar84 + 0x80 & 0xffff;
              uVar102 = (uVar102 >> 8) + uVar102;
              bVar84 = (byte)(uVar102 >> 8);
              if ((uVar103 & 0x2000) == 0) {
                bVar84 = puVar98[uVar102 >> 8 & 0xff];
              }
            }
            *(byte *)(puVar87 + lVar89) = bVar84;
            lVar89 = lVar89 + 1;
          } while (uVar85 != (uint)lVar89);
        }
      }
      else if ((ppuVar5 == (ushort **)0x0 || ppuVar4 == (ushort **)0x0) || ppuVar6 == (ushort **)0x0
              ) {
        if (uVar85 != 0) {
          lVar89 = 0;
          do {
            uVar100 = *(ushort *)(pbVar119 + lVar89 * 4 + 3) << 8 |
                      *(ushort *)(pbVar119 + lVar89 * 4 + 3) >> 8;
            if (uVar100 != 0xffff) {
              uVar103 = (uint)uVar100;
              if (uVar103 == 0) {
                uVar100 = (local_b8->background).gray;
                *(byte *)(puVar87 + lVar89 * 2) = (byte)(uVar100 >> 8);
                pbVar119[lVar89 * 4 + 2] = (byte)uVar100;
              }
              else {
                iVar105 = (((puVar87[lVar89 * 2] & 0xff00) << 8 | (uint)puVar87[lVar89 * 2] << 0x18)
                          >> 0x10) * uVar103;
                iVar114 = (uVar103 ^ 0xffff) * (uint)(local_b8->background).gray;
                iVar114 = (iVar114 + iVar105 + 0x8000U >> 0x10) + iVar114 + iVar105 + 0x8000;
                *(byte *)(puVar87 + lVar89 * 2) = (byte)((uint)iVar114 >> 0x18);
                pbVar119[lVar89 * 4 + 2] = (byte)((uint)iVar114 >> 0x10);
              }
            }
            lVar89 = lVar89 + 1;
          } while (uVar85 != (uint)lVar89);
        }
      }
      else if (uVar85 != 0) {
        lVar89 = 0;
LAB_140dc2791:
        do {
          uVar100 = *(ushort *)(pbVar119 + lVar89 * 4 + 3) << 8 |
                    *(ushort *)(pbVar119 + lVar89 * 4 + 3) >> 8;
          if (uVar100 == 0) {
            uVar100 = (local_b8->background).gray;
          }
          else {
            if (uVar100 != 0xffff) {
              iVar114 = (uint)ppuVar6[pbVar119[lVar89 * 4 + 2] >> (bVar84 & 0x1f)]
                              [(byte)puVar87[lVar89 * 2]] * (uint)uVar100;
              iVar105 = (uVar100 ^ 0xffff) * (uint)(local_b8->background_1).gray;
              uVar102 = (iVar114 + iVar105 + 0x8000U >> 0x10) + iVar114 + iVar105 + 0x8000;
              uVar100 = (ushort)(uVar102 >> 0x10);
              if ((uVar103 & 0x2000) == 0) {
                uVar100 = ppuVar5[(uVar102 >> 0x10 & 0xff) >> (bVar84 & 0x1f)][uVar102 >> 0x18];
              }
              puVar87[lVar89 * 2] = uVar100 << 8 | uVar100 >> 8;
              lVar89 = lVar89 + 1;
              if (uVar85 == (uint)lVar89) break;
              goto LAB_140dc2791;
            }
            uVar100 = ppuVar4[pbVar119[lVar89 * 4 + 2] >> (bVar84 & 0x1f)]
                      [(byte)puVar87[lVar89 * 2]];
          }
          *(byte *)(puVar87 + lVar89 * 2) = (byte)(uVar100 >> 8);
          pbVar119[lVar89 * 4 + 2] = (byte)uVar100;
          lVar89 = lVar89 + 1;
        } while (uVar85 != (uint)lVar89);
      }
      break;
    case '\x06':
      if (param_2->bit_depth == '\b') {
        if ((puVar98 == (uchar *)0x0 || puVar90 == (uchar *)0x0) || puVar115 == (uchar *)0x0) {
          if (uVar85 != 0) {
            lVar89 = 0;
            do {
              uVar103 = (uint)pbVar119[lVar89 * 4 + 4];
              if (uVar103 != 0xff) {
                if (uVar103 == 0) {
                  pbVar119[lVar89 * 4 + 1] = (byte)(local_b8->background).red;
                  pbVar119[lVar89 * 4 + 2] = (byte)(local_b8->background).green;
                  pbVar119[lVar89 * 4 + 3] = (byte)(local_b8->background).blue;
                }
                else {
                  bVar84 = ~pbVar119[lVar89 * 4 + 4];
                  iVar114 = (uint)(local_b8->background).red * (uint)bVar84;
                  pbVar119[lVar89 * 4 + 1] =
                       (byte)((pbVar119[lVar89 * 4 + 1] * uVar103 + iVar114 + 0x80 >> 8 & 0xff) +
                              pbVar119[lVar89 * 4 + 1] * uVar103 + iVar114 + 0x80 >> 8);
                  iVar114 = (uint)(local_b8->background).green * (uint)bVar84;
                  pbVar119[lVar89 * 4 + 2] =
                       (byte)((pbVar119[lVar89 * 4 + 2] * uVar103 + iVar114 + 0x80 >> 8 & 0xff) +
                              pbVar119[lVar89 * 4 + 2] * uVar103 + iVar114 + 0x80 >> 8);
                  iVar114 = (uint)(local_b8->background).blue * (uint)bVar84;
                  pbVar119[lVar89 * 4 + 3] =
                       (byte)((pbVar119[lVar89 * 4 + 3] * uVar103 + iVar114 + 0x80 >> 8 & 0xff) +
                              pbVar119[lVar89 * 4 + 3] * uVar103 + iVar114 + 0x80 >> 8);
                }
              }
              lVar89 = lVar89 + 1;
            } while (uVar85 != (uint)lVar89);
          }
        }
        else if (uVar85 != 0) {
          lVar89 = 0;
LAB_140dc1f20:
          do {
            bVar84 = pbVar119[lVar89 * 4 + 4];
            if (bVar84 == 0) {
              *(byte *)(puVar87 + lVar89 * 2) = (byte)(local_b8->background).red;
              pbVar119[lVar89 * 4 + 2] = (byte)(local_b8->background).green;
              bVar84 = (byte)(local_b8->background).blue;
            }
            else {
              uVar102 = (uint)bVar84;
              if (uVar102 != 0xff) {
                bVar112 = ~bVar84;
                iVar114 = (uint)(local_b8->background_1).red * (uint)bVar112;
                uVar120 = (puVar90[(byte)puVar87[lVar89 * 2]] * uVar102 + iVar114 + 0x80 >> 8 & 0xff
                          ) + puVar90[(byte)puVar87[lVar89 * 2]] * uVar102 + iVar114 + 0x80;
                bVar94 = (byte)(uVar120 >> 8);
                if ((uVar103 & 0x2000) == 0) {
                  bVar94 = puVar98[uVar120 >> 8 & 0xff];
                }
                *(byte *)(puVar87 + lVar89 * 2) = bVar94;
                iVar114 = (uint)(local_b8->background_1).green * (uint)bVar112;
                uVar102 = (puVar90[pbVar119[lVar89 * 4 + 2]] * uVar102 + iVar114 + 0x80 >> 8 & 0xff)
                          + puVar90[pbVar119[lVar89 * 4 + 2]] * uVar102 + iVar114 + 0x80;
                bVar94 = (byte)(uVar102 >> 8);
                if ((uVar103 & 0x2000) == 0) {
                  bVar94 = puVar98[(ulonglong)(uVar102 >> 8) & 0xff];
                }
                pbVar119[lVar89 * 4 + 2] = bVar94;
                iVar114 = (uint)(local_b8->background_1).blue * (uint)bVar112;
                uVar102 = ((uint)puVar90[pbVar119[lVar89 * 4 + 3]] * (uint)bVar84 + iVar114 + 0x80
                           >> 8 & 0xff) +
                          (uint)puVar90[pbVar119[lVar89 * 4 + 3]] * (uint)bVar84 + iVar114 + 0x80;
                bVar84 = (byte)(uVar102 >> 8);
                if ((uVar103 & 0x2000) == 0) {
                  bVar84 = puVar98[uVar102 >> 8 & 0xff];
                }
                pbVar119[lVar89 * 4 + 3] = bVar84;
                lVar89 = lVar89 + 1;
                if (uVar85 == (uint)lVar89) break;
                goto LAB_140dc1f20;
              }
              *(uchar *)(puVar87 + lVar89 * 2) = puVar115[(byte)puVar87[lVar89 * 2]];
              pbVar119[lVar89 * 4 + 2] = puVar115[pbVar119[lVar89 * 4 + 2]];
              bVar84 = puVar115[pbVar119[lVar89 * 4 + 3]];
            }
            pbVar119[lVar89 * 4 + 3] = bVar84;
            lVar89 = lVar89 + 1;
          } while (uVar85 != (uint)lVar89);
        }
      }
      else if ((ppuVar5 == (ushort **)0x0 || ppuVar4 == (ushort **)0x0) || ppuVar6 == (ushort **)0x0
              ) {
        if (uVar85 != 0) {
          lVar89 = 0;
          do {
            uVar100 = *(ushort *)(pbVar119 + lVar89 * 8 + 7) << 8 |
                      *(ushort *)(pbVar119 + lVar89 * 8 + 7) >> 8;
            if (uVar100 != 0xffff) {
              uVar103 = (uint)uVar100;
              if (uVar103 == 0) {
                uVar100 = (local_b8->background).red;
                *(byte *)(puVar87 + lVar89 * 4) = (byte)(uVar100 >> 8);
                pbVar119[lVar89 * 8 + 2] = (byte)uVar100;
                uVar100 = (local_b8->background).green;
                *(ushort *)(pbVar119 + lVar89 * 8 + 3) = uVar100 << 8 | uVar100 >> 8;
                uVar100 = (local_b8->background).blue;
                *(ushort *)(pbVar119 + lVar89 * 8 + 5) = uVar100 << 8 | uVar100 >> 8;
              }
              else {
                uVar100 = *(ushort *)(pbVar119 + lVar89 * 8 + 3);
                uVar104 = *(ushort *)(pbVar119 + lVar89 * 8 + 5);
                iVar105 = (((puVar87[lVar89 * 4] & 0xff00) << 8 | (uint)puVar87[lVar89 * 4] << 0x18)
                          >> 0x10) * uVar103;
                uVar102 = uVar103 ^ 0xffff;
                iVar114 = (local_b8->background).red * uVar102;
                iVar114 = (iVar105 + iVar114 + 0x8000U >> 0x10) + iVar105 + iVar114 + 0x8000;
                *(byte *)(puVar87 + lVar89 * 4) = (byte)((uint)iVar114 >> 0x18);
                pbVar119[lVar89 * 8 + 2] = (byte)((uint)iVar114 >> 0x10);
                iVar114 = (ushort)(uVar100 << 8 | uVar100 >> 8) * uVar103;
                iVar105 = (local_b8->background).green * uVar102;
                iVar114 = iVar114 + iVar105 + (iVar114 + iVar105 + 0x8000U >> 0x10) + 0x8000;
                pbVar119[lVar89 * 8 + 3] = (byte)((uint)iVar114 >> 0x18);
                pbVar119[lVar89 * 8 + 4] = (byte)((uint)iVar114 >> 0x10);
                iVar105 = (ushort)(uVar104 << 8 | uVar104 >> 8) * uVar103;
                iVar114 = (local_b8->background).blue * uVar102;
                iVar114 = (iVar105 + iVar114 + 0x8000U >> 0x10) + iVar105 + iVar114 + 0x8000;
                pbVar119[lVar89 * 8 + 5] = (byte)((uint)iVar114 >> 0x18);
                pbVar119[lVar89 * 8 + 6] = (byte)((uint)iVar114 >> 0x10);
              }
            }
            lVar89 = lVar89 + 1;
          } while (uVar85 != (uint)lVar89);
        }
      }
      else if (uVar85 != 0) {
        lVar89 = 0;
LAB_140dc2995:
        do {
          uVar100 = *(ushort *)(pbVar119 + lVar89 * 8 + 7) << 8 |
                    *(ushort *)(pbVar119 + lVar89 * 8 + 7) >> 8;
          if (uVar100 == 0) {
            uVar100 = (local_b8->background).red;
            *(byte *)(puVar87 + lVar89 * 4) = (byte)(uVar100 >> 8);
            pbVar119[lVar89 * 8 + 2] = (byte)uVar100;
            uVar100 = (local_b8->background).green;
            *(ushort *)(pbVar119 + lVar89 * 8 + 3) = uVar100 << 8 | uVar100 >> 8;
            uVar100 = (local_b8->background).blue;
          }
          else {
            if (uVar100 != 0xffff) {
              iVar114 = (uint)ppuVar6[pbVar119[lVar89 * 8 + 2] >> (bVar84 & 0x1f)]
                              [(byte)puVar87[lVar89 * 4]] * (uint)uVar100;
              uVar120 = (uint)uVar100;
              uVar121 = uVar120 ^ 0xffff;
              iVar105 = (local_b8->background_1).red * uVar121;
              uVar102 = (iVar114 + iVar105 + 0x8000U >> 0x10) + iVar114 + iVar105 + 0x8000;
              uVar100 = (ushort)(uVar102 >> 0x10);
              if ((uVar103 & 0x2000) == 0) {
                uVar100 = ppuVar5[(uVar102 >> 0x10 & 0xff) >> (bVar84 & 0x1f)][uVar102 >> 0x18];
              }
              puVar87[lVar89 * 4] = uVar100 << 8 | uVar100 >> 8;
              iVar114 = (local_b8->background_1).green * uVar121;
              uVar102 = (ppuVar6[pbVar119[lVar89 * 8 + 4] >> (bVar84 & 0x1f)]
                         [pbVar119[lVar89 * 8 + 3]] * uVar120 + iVar114 + 0x8000 >> 0x10) +
                        ppuVar6[pbVar119[lVar89 * 8 + 4] >> (bVar84 & 0x1f)]
                        [pbVar119[lVar89 * 8 + 3]] * uVar120 + iVar114 + 0x8000;
              uVar100 = (ushort)(uVar102 >> 0x10);
              if ((uVar103 & 0x2000) == 0) {
                uVar100 = ppuVar5[(uVar102 >> 0x10 & 0xff) >> (bVar84 & 0x1f)][uVar102 >> 0x18];
              }
              *(ushort *)(pbVar119 + lVar89 * 8 + 3) = uVar100 << 8 | uVar100 >> 8;
              iVar114 = uVar121 * (local_b8->background_1).blue;
              uVar102 = (uVar120 * ppuVar6[pbVar119[lVar89 * 8 + 6] >> (bVar84 & 0x1f)]
                                   [pbVar119[lVar89 * 8 + 5]] + iVar114 + 0x8000 >> 0x10) +
                        uVar120 * ppuVar6[pbVar119[lVar89 * 8 + 6] >> (bVar84 & 0x1f)]
                                  [pbVar119[lVar89 * 8 + 5]] + iVar114 + 0x8000;
              uVar100 = (ushort)(uVar102 >> 0x10);
              if ((uVar103 & 0x2000) == 0) {
                uVar100 = ppuVar5[(uVar102 >> 0x10 & 0xff) >> (bVar84 & 0x1f)][uVar102 >> 0x18];
              }
              *(ushort *)(pbVar119 + lVar89 * 8 + 5) = uVar100 << 8 | uVar100 >> 8;
              lVar89 = lVar89 + 1;
              if (uVar85 == (uint)lVar89) break;
              goto LAB_140dc2995;
            }
            uVar100 = ppuVar4[pbVar119[lVar89 * 8 + 2] >> (bVar84 & 0x1f)]
                      [(byte)puVar87[lVar89 * 4]];
            *(byte *)(puVar87 + lVar89 * 4) = (byte)(uVar100 >> 8);
            pbVar119[lVar89 * 8 + 2] = (byte)uVar100;
            *(ushort *)(pbVar119 + lVar89 * 8 + 3) =
                 ppuVar4[pbVar119[lVar89 * 8 + 4] >> (bVar84 & 0x1f)][pbVar119[lVar89 * 8 + 3]] << 8
                 | ppuVar4[pbVar119[lVar89 * 8 + 4] >> (bVar84 & 0x1f)][pbVar119[lVar89 * 8 + 3]] >>
                   8;
            uVar100 = ppuVar4[pbVar119[lVar89 * 8 + 6] >> (bVar84 & 0x1f)][pbVar119[lVar89 * 8 + 5]]
            ;
          }
          *(ushort *)(pbVar119 + lVar89 * 8 + 5) = uVar100 << 8 | uVar100 >> 8;
          lVar89 = lVar89 + 1;
        } while (uVar85 != (uint)lVar89);
      }
    }
  }
switchD_140dc1bd6_caseD_1:
  if ((param_1->transformations & 0x602000) == 0x2000) {
    if ((char)param_1->transformations < '\0') {
      if ((param_1->num_trans != 0) || (bVar84 = param_1->color_type, (bVar84 & 4) != 0))
      goto switchD_140dc1a02_caseD_1;
    }
    else {
      bVar84 = param_1->color_type;
    }
    if (bVar84 != 3) {
      pbVar119 = param_1->row_buf;
      puVar115 = param_1->gamma_table;
      ppuVar4 = param_1->gamma_16_table;
      uVar103 = param_2->width;
      bVar84 = param_2->bit_depth;
      if (((bVar84 < 9 && puVar115 != (uchar *)0x0) || (ppuVar4 != (ushort **)0x0 && bVar84 == 0x10)
          ) && (param_2->color_type < 7)) {
        puVar87 = (ushort *)(pbVar119 + 1);
        bVar94 = (byte)param_1->gamma_shift;
        param_1 = local_b8;
        switch(param_2->color_type) {
        case '\0':
          if (uVar103 != 0 && bVar84 == 2) {
            uVar85 = 0;
            puVar122 = puVar87;
            do {
              bVar84 = (byte)*puVar122;
              uVar102 = bVar84 & 0xffffffc0;
              uVar121 = bVar84 & 0x30;
              uVar120 = bVar84 & 0xc;
              *(byte *)puVar122 =
                   puVar115[(ulonglong)(bVar84 & 3) * 0x55] >> 6 |
                   puVar115[uVar120 >> 2 | uVar120 * 0x14 | uVar120] >> 4 & 0xc |
                   puVar115[uVar121 >> 4 | (uVar121 >> 2) + uVar121 * 4 | uVar121] >> 2 & 0x30 |
                   puVar115[(uint)(bVar84 >> 6) | uVar102 >> 4 | uVar102 >> 2 | uVar102] & 0xc0;
              puVar122 = (ushort *)((longlong)puVar122 + 1);
              uVar85 = uVar85 + 4;
            } while (uVar85 < uVar103);
            bVar84 = param_2->bit_depth;
          }
          if (bVar84 == 4) {
            if (uVar103 != 0) {
              uVar103 = uVar103 - 1;
              if (1 < uVar103) {
                uVar85 = (uVar103 >> 1) + 1 & 0xfffffffe;
                do {
                  bVar84 = (byte)*puVar87;
                  uVar102 = bVar84 & 0xf;
                  *(byte *)puVar87 =
                       puVar115[uVar102 << 4 | uVar102] >> 4 |
                       puVar115[(ulonglong)(bVar84 >> 4) | (ulonglong)(bVar84 & 0xfffffff0)] & 0xf0;
                  bVar84 = *(byte *)((longlong)puVar87 + 1);
                  uVar102 = bVar84 & 0xf;
                  *(byte *)((longlong)puVar87 + 1) =
                       puVar115[uVar102 << 4 | uVar102] >> 4 |
                       puVar115[(ulonglong)(bVar84 >> 4) | (ulonglong)(bVar84 & 0xfffffff0)] & 0xf0;
                  puVar87 = puVar87 + 1;
                  uVar85 = uVar85 - 2;
                } while (uVar85 != 0);
              }
              if ((uVar103 & 2) == 0) {
                bVar84 = (byte)*puVar87;
                uVar103 = bVar84 & 0xf;
                *(byte *)puVar87 =
                     puVar115[uVar103 << 4 | uVar103] >> 4 |
                     puVar115[(ulonglong)(bVar84 >> 4) | (ulonglong)(bVar84 & 0xfffffff0)] & 0xf0;
              }
            }
          }
          else if (bVar84 == 8) {
            if (uVar103 != 0) {
              if (2 < uVar103 - 1) {
                uVar85 = uVar103 & 0xfffffffc;
                do {
                  *(uchar *)puVar87 = puVar115[(byte)*puVar87];
                  *(uchar *)((longlong)puVar87 + 1) = puVar115[*(byte *)((longlong)puVar87 + 1)];
                  *(uchar *)(puVar87 + 1) = puVar115[(byte)puVar87[1]];
                  *(uchar *)((longlong)puVar87 + 3) = puVar115[*(byte *)((longlong)puVar87 + 3)];
                  puVar87 = puVar87 + 2;
                  uVar85 = uVar85 - 4;
                } while (uVar85 != 0);
              }
              if ((uVar103 & 3) != 0) {
                lVar89 = 0;
                do {
                  *(uchar *)((longlong)puVar87 + lVar89) =
                       puVar115[*(byte *)((longlong)puVar87 + lVar89)];
                  lVar89 = lVar89 + 1;
                } while ((uVar103 & 3) != (uint)lVar89);
              }
            }
          }
          else if ((bVar84 == 0x10) && (uVar103 != 0)) {
            if (uVar103 != 1) {
              uVar85 = uVar103 & 0xfffffffe;
              do {
                *puVar87 = ppuVar4[*(byte *)((longlong)puVar87 + 1) >> (bVar94 & 0x1f)]
                           [(byte)*puVar87] << 8 |
                           ppuVar4[*(byte *)((longlong)puVar87 + 1) >> (bVar94 & 0x1f)]
                           [(byte)*puVar87] >> 8;
                puVar87[1] = ppuVar4[*(byte *)((longlong)puVar87 + 3) >> (bVar94 & 0x1f)]
                             [(byte)puVar87[1]] << 8 |
                             ppuVar4[*(byte *)((longlong)puVar87 + 3) >> (bVar94 & 0x1f)]
                             [(byte)puVar87[1]] >> 8;
                puVar87 = puVar87 + 2;
                uVar85 = uVar85 - 2;
              } while (uVar85 != 0);
            }
            goto LAB_140dc3658;
          }
          break;
        case '\x02':
          if (bVar84 == 8) {
            if (uVar103 != 0) {
              if (uVar103 != 1) {
                uVar85 = uVar103 & 0xfffffffe;
                do {
                  *(uchar *)puVar87 = puVar115[(byte)*puVar87];
                  *(uchar *)((longlong)puVar87 + 1) = puVar115[*(byte *)((longlong)puVar87 + 1)];
                  *(uchar *)(puVar87 + 1) = puVar115[(byte)puVar87[1]];
                  *(uchar *)((longlong)puVar87 + 3) = puVar115[*(byte *)((longlong)puVar87 + 3)];
                  *(uchar *)(puVar87 + 2) = puVar115[(byte)puVar87[2]];
                  *(uchar *)((longlong)puVar87 + 5) = puVar115[*(byte *)((longlong)puVar87 + 5)];
                  puVar87 = puVar87 + 3;
                  uVar85 = uVar85 - 2;
                } while (uVar85 != 0);
              }
LAB_140dc31b4:
              if ((uVar103 & 1) != 0) {
                *(uchar *)puVar87 = puVar115[(byte)*puVar87];
                *(uchar *)((longlong)puVar87 + 1) = puVar115[*(byte *)((longlong)puVar87 + 1)];
                *(uchar *)(puVar87 + 1) = puVar115[(byte)puVar87[1]];
              }
            }
          }
          else {
            for (; uVar103 != 0; uVar103 = uVar103 - 1) {
              *(ushort *)(pbVar119 + 1) =
                   ppuVar4[pbVar119[2] >> (bVar94 & 0x1f)][pbVar119[1]] << 8 |
                   ppuVar4[pbVar119[2] >> (bVar94 & 0x1f)][pbVar119[1]] >> 8;
              *(ushort *)(pbVar119 + 3) =
                   ppuVar4[pbVar119[4] >> (bVar94 & 0x1f)][pbVar119[3]] << 8 |
                   ppuVar4[pbVar119[4] >> (bVar94 & 0x1f)][pbVar119[3]] >> 8;
              *(ushort *)(pbVar119 + 5) =
                   ppuVar4[pbVar119[6] >> (bVar94 & 0x1f)][pbVar119[5]] << 8 |
                   ppuVar4[pbVar119[6] >> (bVar94 & 0x1f)][pbVar119[5]] >> 8;
              pbVar119 = pbVar119 + 6;
            }
          }
          break;
        case '\x04':
          if (bVar84 == 8) {
            if (uVar103 != 0) {
              if (2 < uVar103 - 1) {
                uVar85 = uVar103 & 0xfffffffc;
                do {
                  *(uchar *)puVar87 = puVar115[(byte)*puVar87];
                  *(uchar *)(puVar87 + 1) = puVar115[(byte)puVar87[1]];
                  *(uchar *)(puVar87 + 2) = puVar115[(byte)puVar87[2]];
                  *(uchar *)(puVar87 + 3) = puVar115[(byte)puVar87[3]];
                  puVar87 = puVar87 + 4;
                  uVar85 = uVar85 - 4;
                } while (uVar85 != 0);
              }
              if ((uVar103 & 3) != 0) {
                lVar89 = 0;
                do {
                  *(uchar *)(puVar87 + lVar89) = puVar115[(byte)puVar87[lVar89]];
                  lVar89 = lVar89 + 1;
                } while ((uVar103 & 3) != (uint)lVar89);
              }
            }
          }
          else if (uVar103 != 0) {
            if (uVar103 != 1) {
              uVar85 = uVar103 & 0xfffffffe;
              do {
                *puVar87 = ppuVar4[*(byte *)((longlong)puVar87 + 1) >> (bVar94 & 0x1f)]
                           [(byte)*puVar87] << 8 |
                           ppuVar4[*(byte *)((longlong)puVar87 + 1) >> (bVar94 & 0x1f)]
                           [(byte)*puVar87] >> 8;
                puVar87[2] = ppuVar4[*(byte *)((longlong)puVar87 + 5) >> (bVar94 & 0x1f)]
                             [(byte)puVar87[2]] << 8 |
                             ppuVar4[*(byte *)((longlong)puVar87 + 5) >> (bVar94 & 0x1f)]
                             [(byte)puVar87[2]] >> 8;
                puVar87 = puVar87 + 4;
                uVar85 = uVar85 - 2;
              } while (uVar85 != 0);
            }
LAB_140dc3658:
            if ((uVar103 & 1) != 0) {
              *puVar87 = ppuVar4[*(byte *)((longlong)puVar87 + 1) >> (bVar94 & 0x1f)]
                         [(byte)*puVar87] << 8 |
                         ppuVar4[*(byte *)((longlong)puVar87 + 1) >> (bVar94 & 0x1f)]
                         [(byte)*puVar87] >> 8;
            }
          }
          break;
        case '\x06':
          if (bVar84 == 8) {
            if (uVar103 != 0) {
              if (uVar103 != 1) {
                uVar85 = uVar103 & 0xfffffffe;
                do {
                  *(uchar *)puVar87 = puVar115[(byte)*puVar87];
                  *(uchar *)((longlong)puVar87 + 1) = puVar115[*(byte *)((longlong)puVar87 + 1)];
                  *(uchar *)(puVar87 + 1) = puVar115[(byte)puVar87[1]];
                  *(uchar *)(puVar87 + 2) = puVar115[(byte)puVar87[2]];
                  *(uchar *)((longlong)puVar87 + 5) = puVar115[*(byte *)((longlong)puVar87 + 5)];
                  *(uchar *)(puVar87 + 3) = puVar115[(byte)puVar87[3]];
                  puVar87 = puVar87 + 4;
                  uVar85 = uVar85 - 2;
                } while (uVar85 != 0);
              }
              goto LAB_140dc31b4;
            }
          }
          else if (uVar103 != 0) {
            lVar89 = 0;
            do {
              *(ushort *)(pbVar119 + lVar89 * 8 + 1) =
                   ppuVar4[pbVar119[lVar89 * 8 + 2] >> (bVar94 & 0x1f)][pbVar119[lVar89 * 8 + 1]] <<
                   8 | ppuVar4[pbVar119[lVar89 * 8 + 2] >> (bVar94 & 0x1f)]
                       [pbVar119[lVar89 * 8 + 1]] >> 8;
              *(ushort *)(pbVar119 + lVar89 * 8 + 3) =
                   ppuVar4[pbVar119[lVar89 * 8 + 4] >> (bVar94 & 0x1f)][pbVar119[lVar89 * 8 + 3]] <<
                   8 | ppuVar4[pbVar119[lVar89 * 8 + 4] >> (bVar94 & 0x1f)]
                       [pbVar119[lVar89 * 8 + 3]] >> 8;
              *(ushort *)(pbVar119 + lVar89 * 8 + 5) =
                   ppuVar4[pbVar119[lVar89 * 8 + 6] >> (bVar94 & 0x1f)][pbVar119[lVar89 * 8 + 5]] <<
                   8 | ppuVar4[pbVar119[lVar89 * 8 + 6] >> (bVar94 & 0x1f)]
                       [pbVar119[lVar89 * 8 + 5]] >> 8;
              lVar89 = lVar89 + 1;
            } while (uVar103 != (uint)lVar89);
          }
        }
      }
    }
  }
switchD_140dc1a02_caseD_1:
  uVar103 = param_1->transformations;
  if (((~uVar103 & 0x40080) == 0) && ((param_2->color_type | 2) == 6)) {
    png_do_strip_channel(param_2,param_1->row_buf + 1,0);
    uVar103 = param_1->transformations;
  }
  if (((uVar103 & 0x800000) != 0) && (bVar84 = param_2->color_type, (bVar84 & 4) != 0)) {
    puVar115 = param_1->row_buf;
    uVar103 = param_2->width;
    if (param_2->bit_depth == '\x10') {
      ppuVar4 = param_1->gamma_16_from_1;
      if (ppuVar4 == (ushort **)0x0) goto LAB_140dc2099;
      if (uVar103 != 0) {
        lVar89 = (ulonglong)(bVar84 & 2) * 2;
        lVar118 = lVar89 + 4;
        puVar98 = puVar115 + lVar89 + 3;
        bVar84 = (byte)param_1->gamma_shift;
        uVar85 = uVar103;
        if ((uVar103 & 1) != 0) {
          *(ushort *)(puVar115 + lVar89 + 3) =
               ppuVar4[puVar115[lVar89 + 4] >> (bVar84 & 0x1f)][puVar115[lVar89 + 3]] << 8 |
               ppuVar4[puVar115[lVar89 + 4] >> (bVar84 & 0x1f)][puVar115[lVar89 + 3]] >> 8;
          puVar98 = puVar98 + lVar118;
          uVar85 = uVar103 - 1;
        }
        if (uVar103 != 1) {
          pbVar119 = puVar98 + 1;
          do {
            *(ushort *)(pbVar119 + -1) =
                 ppuVar4[*pbVar119 >> (bVar84 & 0x1f)][pbVar119[-1]] << 8 |
                 ppuVar4[*pbVar119 >> (bVar84 & 0x1f)][pbVar119[-1]] >> 8;
            *(ushort *)(pbVar119 + lVar89 + 3) =
                 ppuVar4[pbVar119[lVar118] >> (bVar84 & 0x1f)][pbVar119[lVar89 + 3]] << 8 |
                 ppuVar4[pbVar119[lVar118] >> (bVar84 & 0x1f)][pbVar119[lVar89 + 3]] >> 8;
            pbVar119 = pbVar119 + (uint)((int)lVar118 * 2);
            uVar85 = uVar85 - 2;
          } while (uVar85 != 0);
        }
      }
    }
    else if ((param_2->bit_depth == '\b') &&
            (puVar98 = param_1->gamma_from_1, puVar98 != (uchar *)0x0)) {
      if (uVar103 != 0) {
        uVar88 = (ulonglong)(bVar84 & 2);
        lVar89 = uVar88 + 2;
        pbVar119 = puVar115 + uVar88 + 2;
        uVar85 = uVar103;
        if ((uVar103 & 3) != 0) {
          uVar85 = 0;
          do {
            *pbVar119 = puVar98[*pbVar119];
            pbVar119 = pbVar119 + lVar89;
            uVar85 = uVar85 + 1;
          } while ((uVar103 & 3) != uVar85);
          uVar85 = uVar103 - uVar85;
        }
        if (3 < uVar103) {
          do {
            *pbVar119 = puVar98[*pbVar119];
            pbVar119[lVar89] = puVar98[pbVar119[lVar89]];
            pbVar119[lVar89 * 2] = puVar98[pbVar119[lVar89 * 2]];
            pbVar119[lVar89 * 3] = puVar98[pbVar119[lVar89 * 3]];
            pbVar119 = pbVar119 + lVar89 * 4;
            uVar85 = uVar85 - 4;
          } while (uVar85 != 0);
        }
      }
    }
    else {
LAB_140dc2099:
      png_warning(param_1,"png_do_encode_alpha: unexpected call");
    }
  }
  uVar103 = param_1->transformations;
  if (((uVar103 & 0x4000000) != 0) && (param_2->bit_depth == '\x10')) {
    uVar99 = param_2->rowbytes;
    if (0 < (longlong)uVar99) {
      puVar115 = param_1->row_buf;
      lVar89 = 0;
      do {
        puVar115[lVar89 + 1] =
             (char)(((uint)puVar115[lVar89 * 2 + 2] - (uint)puVar115[lVar89 * 2 + 1]) * 0xffff +
                    0x7fff80 >> 0x18) + puVar115[lVar89 * 2 + 1];
        lVar118 = lVar89 * 2;
        lVar89 = lVar89 + 1;
      } while (puVar115 + lVar118 + 3 < puVar115 + uVar99 + 1);
      uVar103 = param_1->transformations;
    }
    param_2->bit_depth = '\b';
    param_2->pixel_depth = param_2->channels * '\b';
    param_2->rowbytes = (ulonglong)((uint)param_2->channels * param_2->width);
  }
  if (((uVar103 & 0x400) != 0) && (param_2->bit_depth == '\x10')) {
    uVar99 = param_2->rowbytes;
    if (0 < (longlong)uVar99) {
      puVar115 = param_1->row_buf;
      puVar90 = puVar115 + 1;
      puVar98 = puVar90;
      do {
        *puVar98 = *puVar90;
        puVar98 = puVar98 + 1;
        puVar90 = puVar90 + 2;
      } while (puVar90 < puVar115 + uVar99 + 1);
      uVar103 = param_1->transformations;
    }
    param_2->bit_depth = '\b';
    param_2->pixel_depth = param_2->channels * '\b';
    param_2->rowbytes = (ulonglong)((uint)param_2->channels * param_2->width);
  }
  if ((uVar103 & 0x40) != 0) {
    if (param_2->bit_depth == '\b') {
      puVar115 = param_1->row_buf;
      puVar98 = param_1->palette_lookup;
      pbVar119 = puVar115 + 1;
      uVar103 = param_2->width;
      uVar88 = (ulonglong)uVar103;
      uVar93 = param_2->color_type;
      if (puVar98 == (uchar *)0x0 || uVar93 != '\x02') {
        if (uVar93 == '\x06' && puVar98 != (uchar *)0x0) {
          if (uVar88 == 0) goto LAB_140dc22c3;
          lVar89 = 0;
          do {
            pbVar119[lVar89] =
                 puVar98[(uint)(puVar115[lVar89 * 4 + 3] >> 3) |
                         (pbVar119[lVar89 * 4] & 0xf8) * 0x80 +
                         (puVar115[lVar89 * 4 + 2] & 0xfffffff8) * 4];
            lVar89 = lVar89 + 1;
          } while (uVar103 != (uint)lVar89);
          goto LAB_140dc229c;
        }
        puVar115 = param_1->quantize_index;
        if ((uVar103 != 0 && puVar115 != (uchar *)0x0) && uVar93 == '\x03') {
          if (3 < uVar103) {
            uVar85 = uVar103 & 0xfffffffc;
            do {
              *pbVar119 = puVar115[*pbVar119];
              pbVar119[1] = puVar115[pbVar119[1]];
              pbVar119[2] = puVar115[pbVar119[2]];
              pbVar119[3] = puVar115[pbVar119[3]];
              pbVar119 = pbVar119 + 4;
              uVar85 = uVar85 - 4;
            } while (uVar85 != 0);
          }
          if ((uVar103 & 3) != 0) {
            lVar89 = 0;
            do {
              pbVar119[lVar89] = puVar115[pbVar119[lVar89]];
              lVar89 = lVar89 + 1;
            } while ((uVar103 & 3) != (uint)lVar89);
          }
        }
      }
      else {
        if (uVar88 == 0) {
LAB_140dc22c3:
          param_2->color_type = '\x03';
          param_2->channels = '\x01';
          param_2->pixel_depth = '\b';
          uVar86 = 8;
LAB_140dc22d1:
          uVar88 = (uVar86 >> 3) * uVar88;
        }
        else {
          lVar89 = 0;
          pbVar111 = pbVar119;
          do {
            pbVar119[lVar89] =
                 puVar98[(uint)(pbVar111[2] >> 3) |
                         (*pbVar111 & 0xf8) * 0x80 + (pbVar111[1] & 0xfffffff8) * 4];
            lVar89 = lVar89 + 1;
            pbVar111 = pbVar111 + 3;
          } while (uVar103 != (uint)lVar89);
LAB_140dc229c:
          uVar86 = (ulonglong)param_2->bit_depth;
          param_2->color_type = '\x03';
          param_2->channels = '\x01';
          param_2->pixel_depth = param_2->bit_depth;
          if (7 < uVar86) goto LAB_140dc22d1;
          uVar88 = uVar86 * uVar88 + 7 >> 3;
        }
        param_2->rowbytes = uVar88;
      }
    }
    if (param_2->rowbytes == 0) {
                    /* WARNING: Subroutine does not return */
      png_error(param_1,"png_do_quantize returned rowbytes=0");
    }
    uVar103 = param_1->transformations;
  }
  if ((((uVar103 & 0x200) != 0) && (param_2->bit_depth == '\b')) && (param_2->color_type != '\x03'))
  {
    uVar99 = param_2->rowbytes;
    if (0 < (longlong)uVar99) {
      puVar98 = param_1->row_buf + uVar99 * 2 + 1;
      puVar115 = param_1->row_buf + uVar99;
      do {
        uVar93 = *puVar115;
        puVar98[-1] = uVar93;
        puVar98[-2] = uVar93;
        puVar98 = puVar98 + -2;
        bVar101 = puVar115 < puVar98;
        puVar115 = puVar115 + -1;
      } while (bVar101);
      uVar99 = param_2->rowbytes;
      uVar103 = param_1->transformations;
    }
    param_2->rowbytes = uVar99 * 2;
    param_2->bit_depth = '\x10';
    param_2->pixel_depth = param_2->channels << 4;
  }
  if (((uVar103 & 0x4000) != 0) && ((param_1->mode & 0x800) != 0)) {
    png_do_gray_to_rgb(param_2,param_1->row_buf + 1);
    uVar103 = param_1->transformations;
  }
  if ((uVar103 & 0x20) != 0) {
    png_do_invert(param_2,param_1->row_buf + 1);
    uVar103 = param_1->transformations;
  }
  if ((uVar103 & 0x80000) != 0) {
    puVar115 = param_1->row_buf;
    uVar103 = param_2->width;
    if (param_2->color_type == '\x04') {
      if (param_2->bit_depth == '\b') {
        if (uVar103 != 0) {
          puVar115 = puVar115 + param_2->rowbytes + 1;
          uVar85 = uVar103 & 3;
          if (3 < uVar103) {
            uVar103 = uVar103 & 0xfffffffc;
            do {
              puVar115[-1] = ~puVar115[-1];
              puVar115[-3] = ~puVar115[-3];
              puVar115[-5] = ~puVar115[-5];
              puVar115[-7] = ~puVar115[-7];
              puVar115 = puVar115 + -8;
              uVar103 = uVar103 - 4;
            } while (uVar103 != 0);
          }
          if (uVar85 != 0) {
            pbVar119 = puVar115 + -1;
            do {
              *pbVar119 = ~*pbVar119;
              pbVar119 = pbVar119 + -2;
              uVar85 = uVar85 - 1;
            } while (uVar85 != 0);
          }
        }
      }
      else if (uVar103 != 0) {
        puVar115 = puVar115 + param_2->rowbytes + 1;
        if (uVar103 != 1) {
          uVar85 = uVar103 & 0xfffffffe;
          do {
            puVar115[-1] = ~puVar115[-1];
            puVar115[-2] = ~puVar115[-2];
            puVar115[-5] = ~puVar115[-5];
            puVar115[-6] = ~puVar115[-6];
            puVar115 = puVar115 + -8;
            uVar85 = uVar85 - 2;
          } while (uVar85 != 0);
        }
LAB_140dc24d5:
        if ((uVar103 & 1) != 0) {
          puVar115[-1] = ~puVar115[-1];
          puVar115[-2] = ~puVar115[-2];
        }
      }
    }
    else if (param_2->color_type == '\x06') {
      if (param_2->bit_depth == '\b') {
        if (uVar103 != 0) {
          puVar115 = puVar115 + param_2->rowbytes + 1;
          uVar85 = uVar103 & 3;
          if (3 < uVar103) {
            uVar103 = uVar103 & 0xfffffffc;
            do {
              puVar115[-1] = ~puVar115[-1];
              puVar115[-5] = ~puVar115[-5];
              puVar115[-9] = ~puVar115[-9];
              puVar115[-0xd] = ~puVar115[-0xd];
              puVar115 = puVar115 + -0x10;
              uVar103 = uVar103 - 4;
            } while (uVar103 != 0);
          }
          if (uVar85 != 0) {
            pbVar119 = puVar115 + -1;
            do {
              *pbVar119 = ~*pbVar119;
              pbVar119 = pbVar119 + -4;
              uVar85 = uVar85 - 1;
            } while (uVar85 != 0);
          }
        }
      }
      else if (uVar103 != 0) {
        puVar115 = puVar115 + param_2->rowbytes + 1;
        if (uVar103 != 1) {
          uVar85 = uVar103 & 0xfffffffe;
          do {
            puVar115[-1] = ~puVar115[-1];
            puVar115[-2] = ~puVar115[-2];
            puVar115[-9] = ~puVar115[-9];
            puVar115[-10] = ~puVar115[-10];
            puVar115 = puVar115 + -0x10;
            uVar85 = uVar85 - 2;
          } while (uVar85 != 0);
        }
        goto LAB_140dc24d5;
      }
    }
  }
  uVar82 = _UNK_15111457e;
  uVar81 = _UNK_15111457c;
  uVar80 = _UNK_15111457a;
  uVar96 = _UNK_151114578;
  uVar2 = _UNK_151114576;
  uVar107 = _UNK_151114574;
  uVar104 = _UNK_151114572;
  uVar100 = ___xmm_55555555555555555555555555555555;
  uVar103 = param_1->transformations;
  if (((uVar103 & 8) != 0) && (bVar84 = param_2->color_type, bVar84 != 3)) {
    bVar94 = param_2->bit_depth;
    if ((bVar84 & 2) == 0) {
      bVar112 = (param_1->shift).gray;
      uVar85 = 1;
    }
    else {
      bVar112 = (param_1->shift).red;
      local_98[1] = (uint)bVar94 - (uint)(param_1->shift).green;
      local_98[2] = (uint)bVar94 - (uint)(param_1->shift).blue;
      uVar85 = 3;
    }
    puVar115 = param_1->row_buf;
    uVar102 = (uint)bVar94;
    local_98[0] = uVar102 - bVar112;
    if ((bVar84 & 4) != 0) {
      uVar88 = (ulonglong)uVar85;
      uVar85 = uVar85 + 1;
      local_98[uVar88] = uVar102 - (param_1->shift).alpha;
    }
    bVar101 = (int)local_98[0] < (int)uVar102 && 0 < (int)local_98[0];
    if ((int)local_98[0] >= (int)uVar102 || 0 >= (int)local_98[0]) {
      local_98[0] = 0;
    }
    uVar102 = (uint)bVar94;
    if (uVar85 != 1) {
      bVar8 = 0 < (int)local_98[1];
      bVar7 = (int)local_98[1] < (int)uVar102;
      uVar120 = 0;
      if (bVar8 && bVar7) {
        uVar120 = local_98[1];
      }
      local_98[1] = uVar120;
      bVar101 = bVar8 && bVar7 || bVar101;
      if (uVar85 != 2) {
        bVar8 = (int)local_98[2] < 1;
        bVar7 = (int)uVar102 <= (int)local_98[2];
        if (bVar8 || bVar7) {
          local_98[2] = 0;
        }
        bVar101 = !bVar8 && !bVar7 || bVar101;
        param_1 = local_b8;
        if (uVar85 != 3) {
          bVar8 = 0 < (int)local_98[3];
          bVar7 = (int)local_98[3] < (int)uVar102;
          uVar120 = 0;
          if (bVar8 && bVar7) {
            uVar120 = local_98[3];
          }
          local_98[3] = uVar120;
          if (bVar8 && bVar7) {
            bVar101 = true;
          }
        }
      }
    }
    if (bVar101) {
      uVar103 = uVar102 - 2 >> 1 | (uint)((uVar102 - 2 & 1) != 0) << 0x1f;
      if (uVar103 < 8) {
        puVar87 = (ushort *)(puVar115 + 1);
        switch(uVar103) {
        case 0:
          uVar99 = param_2->rowbytes;
          if (0 < (longlong)uVar99) {
            puVar98 = puVar115 + 2;
            if (puVar115 + 2 < puVar115 + uVar99 + 1) {
              puVar98 = puVar115 + uVar99 + 1;
            }
            puVar98 = puVar98 + ~(ulonglong)puVar115;
            puVar122 = puVar87;
            if (&DAT_00000007 < puVar98) {
              if (puVar98 < (uchar *)0x20) {
                puVar90 = (uchar *)0x0;
              }
              else {
                puVar90 = (uchar *)((ulonglong)puVar98 & 0xffffffffffffffe0);
                puVar116 = (uchar *)0x0;
                do {
                  puVar122 = (ushort *)(puVar115 + 1 + (longlong)puVar116);
                  uVar51 = puVar122[1];
                  uVar52 = puVar122[2];
                  uVar53 = puVar122[3];
                  uVar54 = puVar122[4];
                  uVar55 = puVar122[5];
                  uVar56 = puVar122[6];
                  uVar57 = puVar122[7];
                  puVar106 = (ushort *)(puVar115 + 0x11 + (longlong)puVar116);
                  uVar58 = *puVar106;
                  uVar59 = puVar106[1];
                  uVar60 = puVar106[2];
                  uVar61 = puVar106[3];
                  uVar62 = puVar106[4];
                  uVar63 = puVar106[5];
                  uVar64 = puVar106[6];
                  uVar65 = puVar106[7];
                  puVar106 = (ushort *)(puVar115 + 1 + (longlong)puVar116);
                  *puVar106 = *puVar122 >> 1 & uVar100;
                  puVar106[1] = uVar51 >> 1 & uVar104;
                  puVar106[2] = uVar52 >> 1 & uVar107;
                  puVar106[3] = uVar53 >> 1 & uVar2;
                  puVar106[4] = uVar54 >> 1 & uVar96;
                  puVar106[5] = uVar55 >> 1 & uVar80;
                  puVar106[6] = uVar56 >> 1 & uVar81;
                  puVar106[7] = uVar57 >> 1 & uVar82;
                  puVar122 = (ushort *)(puVar115 + 0x11 + (longlong)puVar116);
                  *puVar122 = uVar58 >> 1 & uVar100;
                  puVar122[1] = uVar59 >> 1 & uVar104;
                  puVar122[2] = uVar60 >> 1 & uVar107;
                  puVar122[3] = uVar61 >> 1 & uVar2;
                  puVar122[4] = uVar62 >> 1 & uVar96;
                  puVar122[5] = uVar63 >> 1 & uVar80;
                  puVar122[6] = uVar64 >> 1 & uVar81;
                  puVar122[7] = uVar65 >> 1 & uVar82;
                  puVar116 = puVar116 + 0x20;
                } while (puVar90 != puVar116);
                if (puVar98 == puVar90) break;
                if (((ulonglong)puVar98 & 0x18) == 0) {
                  puVar122 = (ushort *)(puVar90 + (longlong)puVar87);
                  goto LAB_140dc3c3c;
                }
              }
              uVar83 = __xmm_00000000000000005555555555555555._0_8_;
              puVar115 = (uchar *)((ulonglong)puVar98 & 0xfffffffffffffff8);
              puVar122 = (ushort *)((longlong)puVar87 + (longlong)puVar115);
              do {
                uVar1 = *(undefined8 *)((longlong)puVar87 + (longlong)puVar90);
                *(ulonglong *)((longlong)puVar87 + (longlong)puVar90) =
                     CONCAT26((ushort)((ulonglong)uVar1 >> 0x31),
                              CONCAT24((ushort)((ulonglong)uVar1 >> 0x20) >> 1,
                                       CONCAT22((ushort)((ulonglong)uVar1 >> 0x10) >> 1,
                                                (ushort)uVar1 >> 1))) & uVar83;
                puVar90 = puVar90 + 8;
              } while (puVar115 != puVar90);
              if (puVar98 == puVar115) break;
            }
LAB_140dc3c3c:
            do {
              *(byte *)puVar122 = (byte)*puVar122 >> 1 & 0x55;
              puVar122 = (ushort *)((longlong)puVar122 + 1);
            } while (puVar122 < (ushort *)((longlong)puVar87 + uVar99));
          }
          break;
        case 1:
          uVar99 = param_2->rowbytes;
          uVar103 = 0xf >> ((byte)local_98[0] & 0x1f);
          if (0 < (longlong)uVar99) {
            uVar103 = uVar103 << 4 | uVar103;
            puVar98 = puVar115 + 2;
            if (puVar115 + 2 < puVar115 + uVar99 + 1) {
              puVar98 = puVar115 + uVar99 + 1;
            }
            puVar98 = puVar98 + ~(ulonglong)puVar115;
            puVar122 = puVar87;
            if (&DAT_00000007 < puVar98) {
              if (&DAT_0000000f < puVar98) {
                puVar115 = (uchar *)((ulonglong)puVar98 & 0xfffffffffffffff0);
                auVar130._4_4_ = uVar103;
                auVar130._0_4_ = uVar103;
                auVar130._8_4_ = uVar103;
                auVar130._12_4_ = uVar103;
                puVar90 = (uchar *)0x0;
                do {
                  auVar133 = *(undefined1 (*) [16])((longlong)puVar87 + (longlong)puVar90);
                  auVar31[0xd] = 0;
                  auVar31._0_13_ = auVar133._0_13_;
                  auVar31[0xe] = auVar133[7];
                  auVar35[0xc] = auVar133[6];
                  auVar35._0_12_ = auVar133._0_12_;
                  auVar35._13_2_ = auVar31._13_2_;
                  auVar37[0xb] = 0;
                  auVar37._0_11_ = auVar133._0_11_;
                  auVar37._12_3_ = auVar35._12_3_;
                  auVar39[10] = auVar133[5];
                  auVar39._0_10_ = auVar133._0_10_;
                  auVar39._11_4_ = auVar37._11_4_;
                  auVar45[9] = 0;
                  auVar45._0_9_ = auVar133._0_9_;
                  auVar45._10_5_ = auVar39._10_5_;
                  auVar47[8] = auVar133[4];
                  auVar47._0_8_ = auVar133._0_8_;
                  auVar47._9_6_ = auVar45._9_6_;
                  auVar71._7_8_ = 0;
                  auVar71._0_7_ = auVar47._8_7_;
                  Var67 = CONCAT81(SUB158(auVar71 << 0x40,7),auVar133[3]);
                  auVar77._9_6_ = 0;
                  auVar77._0_9_ = Var67;
                  auVar72._1_10_ = SUB1510(auVar77 << 0x30,5);
                  auVar72[0] = auVar133[2];
                  auVar78._11_4_ = 0;
                  auVar78._0_11_ = auVar72;
                  auVar49[2] = auVar133[1];
                  auVar49._0_2_ = auVar133._0_2_;
                  auVar49._3_12_ = SUB1512(auVar78 << 0x20,3);
                  auVar50._2_13_ = auVar49._2_13_;
                  auVar50._0_2_ = auVar133._0_2_ & 0xff;
                  uVar100 = (ushort)Var67;
                  auVar32._10_2_ = 0;
                  auVar32._0_10_ = auVar50._0_10_;
                  auVar32._12_2_ = uVar100;
                  uVar79 = CONCAT42(auVar32._10_4_,auVar72._0_2_);
                  auVar73._6_8_ = 0;
                  auVar73._0_6_ = uVar79;
                  auVar40._4_2_ = auVar49._2_2_;
                  auVar40._0_4_ = auVar50._0_4_;
                  auVar40._6_8_ = SUB148(auVar73 << 0x40,6);
                  uVar85 = CONCAT13(0,CONCAT12(auVar133[9],(ushort)auVar133[8]));
                  auVar41[0xc] = auVar133[0xb];
                  auVar41._0_12_ = ZEXT112(auVar133[0xc]) << 0x40;
                  auVar42._10_3_ = auVar41._10_3_;
                  auVar42._0_10_ = (unkuint10)auVar133[10] << 0x40;
                  auVar74._5_8_ = 0;
                  auVar74._0_5_ = auVar42._8_5_;
                  auVar43[4] = auVar133[9];
                  auVar43._0_4_ = uVar85;
                  auVar43[5] = 0;
                  auVar43._6_7_ = SUB137(auVar74 << 0x40,6);
                  uVar88 = (ulonglong)local_98[0];
                  auVar135._0_4_ = (uVar85 & 0xffff) >> uVar88;
                  auVar135._4_4_ = auVar43._4_4_ >> uVar88;
                  auVar135._8_4_ = auVar42._8_4_ >> uVar88;
                  auVar135[0xc] = auVar133[0xb] >> uVar88;
                  auVar135._13_3_ = 0;
                  auVar146._1_3_ = 0;
                  auVar146[0] = auVar133[0xc] >> uVar88;
                  auVar146[4] = auVar133[0xd] >> uVar88;
                  auVar146._5_3_ = 0;
                  auVar146[8] = auVar133[0xe] >> uVar88;
                  auVar146._9_3_ = 0;
                  auVar146[0xc] = auVar133[0xf] >> uVar88;
                  auVar146._13_3_ = 0;
                  auVar134._0_4_ = (auVar50._0_4_ & 0xffff) >> uVar88;
                  auVar134._4_4_ = auVar40._4_4_ >> uVar88;
                  auVar134._8_4_ = (uint)uVar79 >> uVar88;
                  auVar134._12_2_ = uVar100 >> uVar88;
                  auVar134._14_2_ = 0;
                  auVar145._2_2_ = 0;
                  auVar145._0_2_ = auVar47._8_2_ >> uVar88;
                  auVar145._4_2_ = auVar39._10_2_ >> uVar88;
                  auVar145._6_2_ = 0;
                  auVar145._8_2_ = auVar35._12_2_ >> uVar88;
                  auVar145._10_2_ = 0;
                  auVar145[0xc] = auVar133[7] >> uVar88;
                  auVar145._13_3_ = 0;
                  auVar145 = auVar145 & auVar130;
                  auVar134 = auVar134 & auVar130;
                  sVar97 = auVar134._0_2_;
                  cVar109 = (0 < sVar97) * (sVar97 < 0x100) * auVar134[0] - (0xff < sVar97);
                  sVar97 = auVar134._2_2_;
                  sVar138 = CONCAT11((0 < sVar97) * (sVar97 < 0x100) * auVar134[2] - (0xff < sVar97)
                                     ,cVar109);
                  sVar97 = auVar134._4_2_;
                  cVar19 = (0 < sVar97) * (sVar97 < 0x100) * auVar134[4] - (0xff < sVar97);
                  sVar97 = auVar134._6_2_;
                  uVar123 = CONCAT13((0 < sVar97) * (sVar97 < 0x100) * auVar134[6] - (0xff < sVar97)
                                     ,CONCAT12(cVar19,sVar138));
                  sVar97 = auVar134._8_2_;
                  cVar20 = (0 < sVar97) * (sVar97 < 0x100) * auVar134[8] - (0xff < sVar97);
                  sVar97 = auVar134._10_2_;
                  uVar124 = CONCAT15((0 < sVar97) * (sVar97 < 0x100) * auVar134[10] -
                                     (0xff < sVar97),CONCAT14(cVar20,uVar123));
                  sVar97 = auVar134._12_2_;
                  cVar21 = (0 < sVar97) * (sVar97 < 0x100) * auVar134[0xc] - (0xff < sVar97);
                  sVar97 = auVar134._14_2_;
                  auVar139._0_8_ =
                       CONCAT17((0 < sVar97) * (sVar97 < 0x100) * auVar134[0xe] - (0xff < sVar97),
                                CONCAT16(cVar21,uVar124));
                  sVar97 = auVar145._0_2_;
                  bVar84 = (0 < sVar97) * (sVar97 < 0x100) * auVar145[0] - (0xff < sVar97);
                  auVar139[8] = bVar84;
                  auVar139[9] = 0;
                  sVar97 = auVar145._4_2_;
                  bVar94 = (0 < sVar97) * (sVar97 < 0x100) * auVar145[4] - (0xff < sVar97);
                  auVar139[10] = bVar94;
                  auVar139[0xb] = 0;
                  sVar97 = auVar145._8_2_;
                  cVar22 = (0 < sVar97) * (sVar97 < 0x100) * auVar145[8] - (0xff < sVar97);
                  auVar139[0xc] = cVar22;
                  sVar97 = auVar145._10_2_;
                  auVar139[0xd] = (0 < sVar97) * (sVar97 < 0x100) * auVar145[10] - (0xff < sVar97);
                  sVar97 = auVar145._12_2_;
                  cVar23 = (0 < sVar97) * (sVar97 < 0x100) * auVar145[0xc] - (0xff < sVar97);
                  auVar133[0xe] = cVar23;
                  auVar133._0_14_ = auVar139;
                  sVar97 = auVar145._14_2_;
                  auVar133[0xf] = (0 < sVar97) * (sVar97 < 0x100) * auVar145[0xe] - (0xff < sVar97);
                  auVar146 = auVar146 & auVar130;
                  auVar135 = auVar135 & auVar130;
                  sVar97 = auVar135._0_2_;
                  cVar24 = (0 < sVar97) * (sVar97 < 0x100) * auVar135[0] - (0xff < sVar97);
                  sVar97 = auVar135._2_2_;
                  sVar140 = CONCAT11((0 < sVar97) * (sVar97 < 0x100) * auVar135[2] - (0xff < sVar97)
                                     ,cVar24);
                  sVar97 = auVar135._4_2_;
                  cVar25 = (0 < sVar97) * (sVar97 < 0x100) * auVar135[4] - (0xff < sVar97);
                  sVar97 = auVar135._6_2_;
                  uVar141 = CONCAT13((0 < sVar97) * (sVar97 < 0x100) * auVar135[6] - (0xff < sVar97)
                                     ,CONCAT12(cVar25,sVar140));
                  sVar97 = auVar135._8_2_;
                  cVar26 = (0 < sVar97) * (sVar97 < 0x100) * auVar135[8] - (0xff < sVar97);
                  sVar97 = auVar135._10_2_;
                  uVar142 = CONCAT15((0 < sVar97) * (sVar97 < 0x100) * auVar135[10] -
                                     (0xff < sVar97),CONCAT14(cVar26,uVar141));
                  sVar97 = auVar135._12_2_;
                  cVar27 = (0 < sVar97) * (sVar97 < 0x100) * auVar135[0xc] - (0xff < sVar97);
                  sVar97 = auVar135._14_2_;
                  auVar143._0_8_ =
                       CONCAT17((0 < sVar97) * (sVar97 < 0x100) * auVar135[0xe] - (0xff < sVar97),
                                CONCAT16(cVar27,uVar142));
                  uVar100 = auVar146._0_2_;
                  bVar112 = (uVar100 != 0) * (uVar100 < 0x100) * auVar146[0] - (0xff < uVar100);
                  auVar143[8] = bVar112;
                  auVar143[9] = 0;
                  uVar100 = auVar146._4_2_;
                  bVar28 = (uVar100 != 0) * (uVar100 < 0x100) * auVar146[4] - (0xff < uVar100);
                  auVar143[10] = bVar28;
                  auVar143[0xb] = 0;
                  sVar97 = auVar146._8_2_;
                  cVar29 = (0 < sVar97) * (sVar97 < 0x100) * auVar146[8] - (0xff < sVar97);
                  auVar143[0xc] = cVar29;
                  sVar97 = auVar146._10_2_;
                  auVar143[0xd] = (0 < sVar97) * (sVar97 < 0x100) * auVar146[10] - (0xff < sVar97);
                  sVar97 = auVar146._12_2_;
                  cVar30 = (0 < sVar97) * (sVar97 < 0x100) * auVar146[0xc] - (0xff < sVar97);
                  auVar144[0xe] = cVar30;
                  auVar144._0_14_ = auVar143;
                  sVar97 = auVar146._14_2_;
                  auVar144[0xf] = (0 < sVar97) * (sVar97 < 0x100) * auVar146[0xe] - (0xff < sVar97);
                  sVar97 = (short)((uint)uVar123 >> 0x10);
                  sVar10 = (short)((uint6)uVar124 >> 0x20);
                  sVar11 = (short)((ulonglong)auVar139._0_8_ >> 0x30);
                  sVar12 = auVar139._12_2_;
                  sVar13 = auVar133._14_2_;
                  sVar14 = (short)((uint)uVar141 >> 0x10);
                  sVar15 = (short)((uint6)uVar142 >> 0x20);
                  sVar16 = (short)((ulonglong)auVar143._0_8_ >> 0x30);
                  sVar17 = auVar143._12_2_;
                  sVar18 = auVar144._14_2_;
                  pbVar119 = (byte *)((longlong)puVar87 + (longlong)puVar90);
                  *pbVar119 = (0 < sVar138) * (sVar138 < 0x100) * cVar109 - (0xff < sVar138);
                  pbVar119[1] = (0 < sVar97) * (sVar97 < 0x100) * cVar19 - (0xff < sVar97);
                  pbVar119[2] = (0 < sVar10) * (sVar10 < 0x100) * cVar20 - (0xff < sVar10);
                  pbVar119[3] = (0 < sVar11) * (sVar11 < 0x100) * cVar21 - (0xff < sVar11);
                  pbVar119[4] = (bVar84 != 0) * (bVar84 < 0x100) * bVar84 - (0xff < bVar84);
                  pbVar119[5] = (bVar94 != 0) * (bVar94 < 0x100) * bVar94 - (0xff < bVar94);
                  pbVar119[6] = (0 < sVar12) * (sVar12 < 0x100) * cVar22 - (0xff < sVar12);
                  pbVar119[7] = (0 < sVar13) * (sVar13 < 0x100) * cVar23 - (0xff < sVar13);
                  pbVar119[8] = (0 < sVar140) * (sVar140 < 0x100) * cVar24 - (0xff < sVar140);
                  pbVar119[9] = (0 < sVar14) * (sVar14 < 0x100) * cVar25 - (0xff < sVar14);
                  pbVar119[10] = (0 < sVar15) * (sVar15 < 0x100) * cVar26 - (0xff < sVar15);
                  pbVar119[0xb] = (0 < sVar16) * (sVar16 < 0x100) * cVar27 - (0xff < sVar16);
                  pbVar119[0xc] = (bVar112 != 0) * (bVar112 < 0x100) * bVar112 - (0xff < bVar112);
                  pbVar119[0xd] = (bVar28 != 0) * (bVar28 < 0x100) * bVar28 - (0xff < bVar28);
                  pbVar119[0xe] = (0 < sVar17) * (sVar17 < 0x100) * cVar29 - (0xff < sVar17);
                  pbVar119[0xf] = (0 < sVar18) * (sVar18 < 0x100) * cVar30 - (0xff < sVar18);
                  puVar90 = puVar90 + 0x10;
                } while (puVar115 != puVar90);
                if (puVar98 == puVar115) break;
                if (((ulonglong)puVar98 & 8) == 0) {
                  puVar122 = (ushort *)(puVar115 + (longlong)puVar87);
                  goto LAB_140dc3b68;
                }
              }
              else {
                puVar115 = (uchar *)0x0;
              }
              puVar90 = (uchar *)((ulonglong)puVar98 & 0xfffffffffffffff8);
              puVar122 = (ushort *)((longlong)puVar87 + (longlong)puVar90);
              auVar131._4_4_ = uVar103;
              auVar131._0_4_ = uVar103;
              auVar131._8_4_ = uVar103;
              auVar131._12_4_ = uVar103;
              auVar136._4_12_ = SUB1612((undefined1  [16])0x0,4);
              auVar136._0_4_ = local_98[0];
              do {
                uVar88 = *(ulonglong *)((longlong)puVar87 + (longlong)puVar115);
                bVar84 = (byte)(uVar88 >> 0x38);
                auVar33._8_6_ = 0;
                auVar33._0_8_ = uVar88;
                auVar33[0xe] = bVar84;
                auVar36._8_4_ = 0;
                auVar36._0_8_ = uVar88;
                auVar36[0xc] = (char)(uVar88 >> 0x30);
                auVar36._13_2_ = auVar33._13_2_;
                auVar38._8_4_ = 0;
                auVar38._0_8_ = uVar88;
                auVar38._12_3_ = auVar36._12_3_;
                auVar44._8_2_ = 0;
                auVar44._0_8_ = uVar88;
                auVar44[10] = (char)(uVar88 >> 0x28);
                auVar44._11_4_ = auVar38._11_4_;
                auVar46._8_2_ = 0;
                auVar46._0_8_ = uVar88;
                auVar46._10_5_ = auVar44._10_5_;
                auVar48[8] = (char)(uVar88 >> 0x20);
                auVar48._0_8_ = uVar88;
                auVar48._9_6_ = auVar46._9_6_;
                auVar66._7_8_ = 0;
                auVar66._0_7_ = auVar48._8_7_;
                Var67 = CONCAT81(SUB158(auVar66 << 0x40,7),(char)(uVar88 >> 0x18));
                auVar75._9_6_ = 0;
                auVar75._0_9_ = Var67;
                auVar68._1_10_ = SUB1510(auVar75 << 0x30,5);
                auVar68[0] = (char)(uVar88 >> 0x10);
                auVar76._11_4_ = 0;
                auVar76._0_11_ = auVar68;
                auVar69._1_12_ = SUB1512(auVar76 << 0x20,3);
                auVar69[0] = (char)(uVar88 >> 8);
                auVar34._10_2_ = 0;
                auVar34._0_10_ = auVar69._0_10_ << 0x10;
                auVar34._12_2_ = (short)Var67;
                uVar79 = CONCAT42(auVar34._10_4_,auVar68._0_2_);
                auVar70._6_8_ = 0;
                auVar70._0_6_ = uVar79;
                lVar89 = auVar136._0_8_;
                auVar126._1_3_ = 0;
                auVar126[0] = (byte)uVar88 >> lVar89;
                auVar126._4_4_ = (uint)CONCAT82(SUB148(auVar70 << 0x40,6),auVar69._0_2_) >> lVar89;
                auVar126._8_4_ = (uint)uVar79 >> lVar89;
                auVar126._12_4_ = (auVar34._10_4_ >> 0x10) >> lVar89;
                auVar137._2_2_ = 0;
                auVar137._0_2_ = auVar48._8_2_ >> lVar89;
                auVar137._4_2_ = auVar44._10_2_ >> lVar89;
                auVar137._6_2_ = 0;
                auVar137._8_2_ = auVar36._12_2_ >> lVar89;
                auVar137._10_2_ = 0;
                auVar137[0xc] = bVar84 >> lVar89;
                auVar137._13_3_ = 0;
                auVar137 = auVar137 & auVar131;
                auVar126 = auVar126 & auVar131;
                uVar100 = auVar126._0_2_;
                bVar84 = (uVar100 != 0) * (uVar100 < 0x100) * auVar126[0] - (0xff < uVar100);
                uVar100 = (ushort)bVar84;
                sVar97 = auVar126._4_2_;
                cVar109 = (0 < sVar97) * (sVar97 < 0x100) * auVar126[4] - (0xff < sVar97);
                sVar97 = auVar126._6_2_;
                uVar123 = CONCAT13((0 < sVar97) * (sVar97 < 0x100) * auVar126[6] - (0xff < sVar97),
                                   CONCAT12(cVar109,uVar100));
                sVar97 = auVar126._8_2_;
                cVar19 = (0 < sVar97) * (sVar97 < 0x100) * auVar126[8] - (0xff < sVar97);
                sVar97 = auVar126._10_2_;
                uVar124 = CONCAT15((0 < sVar97) * (sVar97 < 0x100) * auVar126[10] - (0xff < sVar97),
                                   CONCAT14(cVar19,uVar123));
                sVar97 = auVar126._12_2_;
                cVar20 = (0 < sVar97) * (sVar97 < 0x100) * auVar126[0xc] - (0xff < sVar97);
                sVar97 = auVar126._14_2_;
                auVar125._0_8_ =
                     CONCAT17((0 < sVar97) * (sVar97 < 0x100) * auVar126[0xe] - (0xff < sVar97),
                              CONCAT16(cVar20,uVar124));
                sVar97 = auVar137._0_2_;
                bVar94 = (0 < sVar97) * (sVar97 < 0x100) * auVar137[0] - (0xff < sVar97);
                auVar125[8] = bVar94;
                auVar125[9] = 0;
                sVar97 = auVar137._4_2_;
                bVar112 = (0 < sVar97) * (sVar97 < 0x100) * auVar137[4] - (0xff < sVar97);
                auVar125[10] = bVar112;
                auVar125[0xb] = 0;
                sVar97 = auVar137._8_2_;
                cVar21 = (0 < sVar97) * (sVar97 < 0x100) * auVar137[8] - (0xff < sVar97);
                auVar125[0xc] = cVar21;
                sVar97 = auVar137._10_2_;
                auVar125[0xd] = (0 < sVar97) * (sVar97 < 0x100) * auVar137[10] - (0xff < sVar97);
                sVar97 = auVar137._12_2_;
                cVar22 = (0 < sVar97) * (sVar97 < 0x100) * auVar137[0xc] - (0xff < sVar97);
                auVar127[0xe] = cVar22;
                auVar127._0_14_ = auVar125;
                sVar97 = auVar137._14_2_;
                auVar127[0xf] = (0 < sVar97) * (sVar97 < 0x100) * auVar137[0xe] - (0xff < sVar97);
                sVar97 = (short)((uint)uVar123 >> 0x10);
                sVar10 = (short)((uint6)uVar124 >> 0x20);
                sVar11 = (short)((ulonglong)auVar125._0_8_ >> 0x30);
                sVar12 = auVar125._12_2_;
                sVar13 = auVar127._14_2_;
                *(ulonglong *)((longlong)puVar87 + (longlong)puVar115) =
                     CONCAT17((0 < sVar13) * (sVar13 < 0x100) * cVar22 - (0xff < sVar13),
                              CONCAT16((0 < sVar12) * (sVar12 < 0x100) * cVar21 - (0xff < sVar12),
                                       CONCAT15((bVar112 != 0) * (bVar112 < 0x100) * bVar112 -
                                                (0xff < bVar112),
                                                CONCAT14((bVar94 != 0) * (bVar94 < 0x100) * bVar94 -
                                                         (0xff < bVar94),
                                                         CONCAT13((0 < sVar11) * (sVar11 < 0x100) *
                                                                  cVar20 - (0xff < sVar11),
                                                                  CONCAT12((0 < sVar10) *
                                                                           (sVar10 < 0x100) * cVar19
                                                                           - (0xff < sVar10),
                                                                           CONCAT11((0 < sVar97) *
                                                                                    (sVar97 < 0x100)
                                                                                    * cVar109 -
                                                                                    (0xff < sVar97),
                                                                                    (bVar84 != 0) *
                                                                                    (uVar100 < 0x100
                                                                                    ) * bVar84 -
                                                                                    (0xff < uVar100)
                                                                                   )))))));
                puVar115 = puVar115 + 8;
              } while (puVar90 != puVar115);
              if (puVar98 == puVar90) break;
            }
LAB_140dc3b68:
            do {
              *(byte *)puVar122 = (byte)*puVar122 >> ((byte)local_98[0] & 0x1f) & (byte)uVar103;
              puVar122 = (ushort *)((longlong)puVar122 + 1);
            } while (puVar122 < (ushort *)((longlong)puVar87 + uVar99));
          }
          break;
        case 3:
          if (0 < (longlong)param_2->rowbytes) {
            puVar122 = (ushort *)(param_2->rowbytes + (longlong)puVar87);
            iVar114 = 0;
            do {
              lVar89 = (longlong)iVar114;
              iVar114 = iVar114 + 1;
              if ((int)uVar85 <= iVar114) {
                iVar114 = 0;
              }
              *(byte *)puVar87 = (byte)*puVar87 >> ((byte)local_98[lVar89] & 0x1f);
              puVar87 = (ushort *)((longlong)puVar87 + 1);
            } while (puVar87 < puVar122);
          }
          break;
        case 7:
          if (0 < (longlong)param_2->rowbytes) {
            puVar122 = (ushort *)(param_2->rowbytes + (longlong)puVar87);
            iVar114 = 0;
            do {
              uVar100 = (ushort)(*puVar87 << 8 | *puVar87 >> 8) >> ((byte)local_98[iVar114] & 0x1f);
              iVar114 = iVar114 + 1;
              if ((int)uVar85 <= iVar114) {
                iVar114 = 0;
              }
              *puVar87 = uVar100 << 8 | uVar100 >> 8;
              puVar87 = puVar87 + 1;
            } while (puVar87 < puVar122);
          }
        }
      }
      uVar103 = param_1->transformations;
    }
  }
  if (((uVar103 & 4) != 0) && (bVar84 = param_2->bit_depth, bVar84 < 8)) {
    puVar115 = param_1->row_buf;
    uVar103 = param_2->width;
    uVar88 = (ulonglong)uVar103;
    if (bVar84 == 4) {
      if (uVar88 != 0) {
        uVar85 = uVar103 * 4 & 4;
        sVar95 = (sbyte)uVar85;
        puVar98 = puVar115 + uVar88 + 1;
        pbVar119 = puVar115 + (ulonglong)(uVar103 - 1 >> 1) + 1;
        if (uVar103 - 1 != 0) {
          uVar102 = uVar103 & 0xfffffffe;
          do {
            puVar98[-1] = *pbVar119 >> (sbyte)uVar85 & 0xf;
            bVar101 = uVar85 == 0;
            uVar88 = (ulonglong)!bVar101;
            puVar98[-2] = pbVar119[-uVar88] >> bVar101 * '\x04' & 0xf;
            puVar98 = puVar98 + -2;
            pbVar119 = pbVar119 + (-(ulonglong)bVar101 - uVar88);
            uVar85 = (uint)!bVar101 << 2;
            sVar95 = (sbyte)uVar85;
            uVar102 = uVar102 - 2;
          } while (uVar102 != 0);
        }
        if ((uVar103 & 1) != 0) {
          puVar98[-1] = *pbVar119 >> sVar95 & 0xf;
        }
      }
    }
    else if (bVar84 == 2) {
      if (uVar88 != 0) {
        uVar85 = ~(uVar103 * 2 + 6) & 6;
        puVar98 = puVar115 + uVar88 + 1;
        pbVar119 = puVar115 + (ulonglong)(uVar103 - 1 >> 2) + 1;
        if (uVar103 - 1 != 0) {
          uVar102 = uVar103 & 0xfffffffe;
          do {
            puVar98[-1] = *pbVar119 >> ((byte)uVar85 & 0x1f) & 3;
            iVar114 = uVar85 + 2;
            if (uVar85 == 6) {
              iVar114 = 0;
            }
            uVar88 = (ulonglong)(uVar85 == 6);
            puVar98[-2] = pbVar119[-uVar88] >> ((byte)iVar114 & 0x1f) & 3;
            puVar98 = puVar98 + -2;
            uVar85 = iVar114 + 2;
            if (iVar114 == 6) {
              uVar85 = 0;
            }
            pbVar119 = pbVar119 + (-(ulonglong)(iVar114 == 6) - uVar88);
            uVar102 = uVar102 - 2;
          } while (uVar102 != 0);
        }
        if ((uVar103 & 1) != 0) {
          puVar98[-1] = *pbVar119 >> ((byte)uVar85 & 0x1f) & 3;
        }
      }
    }
    else if ((bVar84 == 1) && (uVar88 != 0)) {
      uVar85 = -uVar103 & 7;
      puVar98 = puVar115 + uVar88 + 1;
      pbVar119 = puVar115 + (ulonglong)(uVar103 - 1 >> 3) + 1;
      if (uVar103 - 1 != 0) {
        uVar102 = uVar103 & 0xfffffffe;
        do {
          puVar98[-1] = (*pbVar119 >> (uVar85 & 0x1f) & 1) != 0;
          uVar120 = uVar85 + 1;
          if (uVar85 == 7) {
            uVar120 = 0;
          }
          uVar88 = (ulonglong)(uVar85 == 7);
          puVar98[-2] = (pbVar119[-uVar88] >> (uVar120 & 0x1f) & 1) != 0;
          puVar98 = puVar98 + -2;
          uVar85 = uVar120 + 1;
          if (uVar120 == 7) {
            uVar85 = 0;
          }
          pbVar119 = pbVar119 + (-(ulonglong)(uVar120 == 7) - uVar88);
          uVar102 = uVar102 - 2;
        } while (uVar102 != 0);
      }
      param_1 = local_b8;
      if ((uVar103 & 1) != 0) {
        puVar98[-1] = (*pbVar119 >> (uVar85 & 0x1f) & 1) != 0;
      }
    }
    param_2->bit_depth = '\b';
    param_2->pixel_depth = param_2->channels * '\b';
    param_2->rowbytes = (ulonglong)(uVar103 * param_2->channels);
  }
  if ((param_2->color_type == '\x03') && (-1 < param_1->num_palette_max)) {
    png_do_check_palette_indexes(param_1,param_2);
  }
  uVar103 = param_1->transformations;
  if ((uVar103 & 1) == 0) {
    if ((uVar103 & 0x10000) != 0) goto LAB_140dc3f11;
LAB_140dc3ee7:
    sVar97 = (short)uVar103;
  }
  else {
    png_do_bgr(param_2,param_1->row_buf + 1);
    uVar103 = param_1->transformations;
    if ((uVar103 & 0x10000) == 0) goto LAB_140dc3ee7;
LAB_140dc3f11:
    png_do_packswap(param_2,param_1->row_buf + 1);
    uVar103 = param_1->transformations;
    sVar97 = (short)uVar103;
  }
  if (sVar97 < 0) {
    puVar115 = param_1->row_buf;
    uVar85 = param_2->width;
    uVar88 = (ulonglong)uVar85;
    uVar93 = (uchar)param_1->filler;
    cVar109 = (char)param_1->flags;
    uVar117 = (uchar)(param_1->filler >> 8);
    if (param_2->color_type == '\x02') {
      if (param_2->bit_depth == '\x10') {
        if (cVar109 < '\0') {
          puVar98 = puVar115 + uVar88 * 8 + 1;
          if (1 < uVar85) {
            puVar115 = puVar115 + uVar88 * 6;
            iVar114 = uVar85 - 1;
            do {
              puVar98[-1] = uVar93;
              puVar98[-2] = uVar117;
              puVar98[-3] = *puVar115;
              puVar98[-4] = puVar115[-1];
              puVar98[-5] = puVar115[-2];
              puVar98[-6] = puVar115[-3];
              puVar98[-7] = puVar115[-4];
              puVar98[-8] = puVar115[-5];
              puVar98 = puVar98 + -8;
              puVar115 = puVar115 + -6;
              iVar114 = iVar114 + -1;
            } while (iVar114 != 0);
          }
          puVar98[-1] = uVar93;
          puVar98[-2] = uVar117;
          sVar95 = 3;
          uVar110 = '@';
LAB_140dc4488:
          uVar113 = '\x04';
        }
        else {
          sVar95 = 3;
          uVar113 = '\x04';
          uVar110 = '@';
          if (uVar85 != 0) {
            puVar98 = puVar115 + uVar88 * 8;
            puVar115 = puVar115 + uVar88 * 6;
            do {
              *puVar98 = *puVar115;
              puVar98[-1] = puVar115[-1];
              puVar98[-2] = puVar115[-2];
              puVar98[-3] = puVar115[-3];
              puVar98[-4] = puVar115[-4];
              puVar98[-5] = puVar115[-5];
              puVar98[-6] = uVar93;
              puVar98[-7] = uVar117;
              puVar98 = puVar98 + -8;
              puVar115 = puVar115 + -6;
              uVar103 = (int)uVar88 - 1;
              uVar88 = (ulonglong)uVar103;
              param_1 = local_b8;
              sVar95 = 3;
              uVar113 = '\x04';
              uVar110 = '@';
            } while (uVar103 != 0);
          }
        }
      }
      else {
        if (param_2->bit_depth != '\b') goto LAB_140dc449f;
        if (cVar109 < '\0') {
          puVar115 = puVar115 + uVar88 * 3 + 1;
          puVar98 = puVar115 + uVar88;
          if (1 < uVar85) {
            if (uVar85 != 2) {
              uVar103 = uVar85 - 1 & 0xfffffffe;
              do {
                puVar98[-1] = uVar93;
                puVar98[-2] = puVar115[-1];
                puVar98[-3] = puVar115[-2];
                puVar98[-4] = puVar115[-3];
                puVar98[-5] = uVar93;
                puVar98[-6] = puVar115[-4];
                puVar98[-7] = puVar115[-5];
                puVar90 = puVar115 + -6;
                puVar115 = puVar115 + -6;
                puVar98[-8] = *puVar90;
                puVar98 = puVar98 + -8;
                uVar103 = uVar103 - 2;
              } while (uVar103 != 0);
            }
            if ((uVar85 - 1 & 1) != 0) {
              puVar98[-1] = uVar93;
              puVar98[-2] = puVar115[-1];
              puVar98[-3] = puVar115[-2];
              puVar98[-4] = puVar115[-3];
              puVar98 = puVar98 + -4;
            }
          }
          puVar98[-1] = uVar93;
          sVar95 = 2;
          uVar110 = ' ';
          goto LAB_140dc4488;
        }
        sVar95 = 2;
        uVar110 = ' ';
        uVar113 = '\x04';
        if (uVar85 != 0) {
          puVar115 = puVar115 + uVar88 * 3 + 1;
          puVar98 = puVar115 + uVar88;
          if (uVar85 != 1) {
            uVar103 = uVar85 & 0xfffffffe;
            do {
              puVar98[-1] = puVar115[-1];
              puVar98[-2] = puVar115[-2];
              puVar98[-3] = puVar115[-3];
              puVar98[-4] = uVar93;
              puVar98[-5] = puVar115[-4];
              puVar98[-6] = puVar115[-5];
              puVar90 = puVar115 + -6;
              puVar115 = puVar115 + -6;
              puVar98[-7] = *puVar90;
              puVar98[-8] = uVar93;
              puVar98 = puVar98 + -8;
              uVar103 = uVar103 - 2;
            } while (uVar103 != 0);
          }
          if ((uVar85 & 1) != 0) {
            puVar98[-1] = puVar115[-1];
            puVar98[-2] = puVar115[-2];
            puVar98[-3] = puVar115[-3];
            puVar98[-4] = uVar93;
          }
        }
      }
    }
    else {
      if (param_2->color_type != '\0') goto LAB_140dc449f;
      if (param_2->bit_depth == '\x10') {
        if (cVar109 < '\0') {
          puVar115 = puVar115 + uVar88 * 2 + 1;
          puVar98 = puVar115 + uVar88 * 2;
          if (1 < uVar85) {
            if (uVar85 != 2) {
              uVar103 = uVar85 - 1 & 0xfffffffe;
              do {
                puVar98[-1] = uVar93;
                puVar98[-2] = uVar117;
                puVar98[-3] = puVar115[-1];
                puVar98[-4] = puVar115[-2];
                puVar98[-5] = uVar93;
                puVar98[-6] = uVar117;
                puVar98[-7] = puVar115[-3];
                puVar90 = puVar115 + -4;
                puVar115 = puVar115 + -4;
                puVar98[-8] = *puVar90;
                puVar98 = puVar98 + -8;
                uVar103 = uVar103 - 2;
              } while (uVar103 != 0);
            }
            if ((uVar85 - 1 & 1) != 0) {
              puVar98[-1] = uVar93;
              puVar98[-2] = uVar117;
              puVar98[-3] = puVar115[-1];
              puVar98[-4] = puVar115[-2];
              puVar98 = puVar98 + -4;
            }
          }
          puVar98[-1] = uVar93;
          puVar98[-2] = uVar117;
          sVar95 = 2;
          uVar113 = '\x02';
          uVar110 = ' ';
        }
        else {
          sVar95 = 2;
          uVar113 = '\x02';
          uVar110 = ' ';
          if (uVar85 != 0) {
            puVar115 = puVar115 + uVar88 * 2 + 1;
            puVar98 = puVar115 + uVar88 * 2;
            if (uVar85 != 1) {
              uVar103 = uVar85 & 0xfffffffe;
              do {
                puVar98[-1] = puVar115[-1];
                puVar98[-2] = puVar115[-2];
                puVar98[-3] = uVar93;
                puVar98[-4] = uVar117;
                puVar98[-5] = puVar115[-3];
                puVar90 = puVar115 + -4;
                puVar115 = puVar115 + -4;
                puVar98[-6] = *puVar90;
                puVar98[-7] = uVar93;
                puVar98[-8] = uVar117;
                puVar98 = puVar98 + -8;
                uVar103 = uVar103 - 2;
              } while (uVar103 != 0);
            }
            param_1 = local_b8;
            sVar95 = 2;
            uVar113 = '\x02';
            uVar110 = ' ';
            if ((uVar85 & 1) != 0) {
              puVar98[-1] = puVar115[-1];
              puVar98[-2] = puVar115[-2];
              puVar98[-3] = uVar93;
              puVar98[-4] = uVar117;
            }
          }
        }
      }
      else {
        if (param_2->bit_depth != '\b') goto LAB_140dc449f;
        if (cVar109 < '\0') {
          puVar115 = puVar115 + uVar88 + 1;
          puVar98 = puVar115 + uVar88;
          if (1 < uVar85) {
            if (2 < uVar85 - 2) {
              uVar103 = uVar85 - 1 & 0xfffffffc;
              do {
                puVar98[-1] = uVar93;
                puVar98[-2] = puVar115[-1];
                puVar98[-3] = uVar93;
                puVar98[-4] = puVar115[-2];
                puVar98[-5] = uVar93;
                puVar98[-6] = puVar115[-3];
                puVar98[-7] = uVar93;
                puVar90 = puVar115 + -4;
                puVar115 = puVar115 + -4;
                puVar98[-8] = *puVar90;
                puVar98 = puVar98 + -8;
                uVar103 = uVar103 - 4;
              } while (uVar103 != 0);
            }
            if ((uVar85 - 1 & 3) != 0) {
              lVar118 = -1;
              lVar89 = 0;
              do {
                puVar98[lVar118 * 2 + 1] = uVar93;
                puVar98[lVar118 * 2] = puVar115[lVar118];
                lVar89 = lVar89 + 2;
                lVar118 = lVar118 + -1;
              } while ((uVar85 - 1 & 3) * 2 != (int)lVar89);
              puVar98 = puVar98 + -lVar89;
            }
          }
          puVar98[-1] = uVar93;
          sVar95 = 1;
          uVar113 = '\x02';
          uVar110 = '\x10';
        }
        else {
          sVar95 = 1;
          uVar113 = '\x02';
          uVar110 = '\x10';
          if (uVar85 != 0) {
            puVar115 = puVar115 + uVar88 + 1;
            puVar98 = puVar115 + uVar88;
            uVar103 = uVar85 & 3;
            if (3 < uVar85) {
              uVar102 = uVar85 & 0xfffffffc;
              do {
                puVar98[-1] = puVar115[-1];
                puVar98[-2] = uVar93;
                puVar98[-3] = puVar115[-2];
                puVar98[-4] = uVar93;
                puVar98[-5] = puVar115[-3];
                puVar98[-6] = uVar93;
                puVar90 = puVar115 + -4;
                puVar115 = puVar115 + -4;
                puVar98[-7] = *puVar90;
                puVar98[-8] = uVar93;
                puVar98 = puVar98 + -8;
                uVar102 = uVar102 - 4;
              } while (uVar102 != 0);
            }
            param_1 = local_b8;
            sVar95 = 1;
            uVar113 = '\x02';
            uVar110 = '\x10';
            if (uVar103 != 0) {
              lVar89 = 0;
              do {
                puVar98[lVar89 * 2 + -1] = puVar115[lVar89 + -1];
                puVar98[lVar89 * 2 + -2] = uVar93;
                lVar89 = lVar89 + -1;
                uVar103 = uVar103 - 1;
              } while (uVar103 != 0);
            }
          }
        }
      }
    }
    param_2->channels = uVar113;
    param_2->pixel_depth = uVar110;
    param_2->rowbytes = (ulonglong)(uVar85 << sVar95);
    uVar103 = param_1->transformations;
  }
LAB_140dc449f:
  if ((uVar103 & 0x20000) != 0) {
    puVar115 = param_1->row_buf;
    uVar103 = param_2->width;
    if (param_2->color_type == '\x04') {
      if (param_2->bit_depth == '\b') {
        if (uVar103 != 0) {
          puVar115 = puVar115 + param_2->rowbytes + 1;
          uVar85 = uVar103 & 3;
          if (3 < uVar103) {
            uVar103 = uVar103 & 0xfffffffc;
            do {
              puVar87 = (ushort *)(puVar115 + -2);
              *puVar87 = *puVar87 << 8 | *puVar87 >> 8;
              puVar87 = (ushort *)(puVar115 + -4);
              *puVar87 = *puVar87 << 8 | *puVar87 >> 8;
              puVar87 = (ushort *)(puVar115 + -6);
              *puVar87 = *puVar87 << 8 | *puVar87 >> 8;
              puVar87 = (ushort *)(puVar115 + -8);
              *puVar87 = *puVar87 << 8 | *puVar87 >> 8;
              puVar115 = puVar115 + -8;
              uVar103 = uVar103 - 4;
            } while (uVar103 != 0);
          }
          if (uVar85 != 0) {
            puVar115 = puVar115 + -1;
            do {
              puVar87 = (ushort *)(puVar115 + -1);
              *puVar87 = *puVar87 << 8 | *puVar87 >> 8;
              puVar115 = puVar115 + -2;
              uVar85 = uVar85 - 1;
            } while (uVar85 != 0);
          }
        }
      }
      else if (uVar103 != 0) {
        puVar91 = (uint *)(puVar115 + param_2->rowbytes + 1);
        uVar85 = uVar103 & 3;
        if (3 < uVar103) {
          uVar103 = uVar103 & 0xfffffffc;
          puVar92 = puVar91;
          do {
            auVar130 = pshuflw(ZEXT416(puVar92[-1]),ZEXT416(puVar92[-1]),0xe1);
            auVar134 = pshuflw(ZEXT416(puVar92[-2]),ZEXT416(puVar92[-2]),0xe1);
            auVar133 = pshuflw(ZEXT416(puVar92[-3]),ZEXT416(puVar92[-3]),0xe1);
            puVar91 = puVar92 + -4;
            auVar135 = pshuflw(ZEXT416(puVar92[-4]),ZEXT416(puVar92[-4]),0xe1);
            *(ulonglong *)(puVar92 + -4) = CONCAT44(auVar133._0_4_,auVar135._0_4_);
            *(ulonglong *)(puVar92 + -2) = CONCAT44(auVar130._0_4_,auVar134._0_4_);
            uVar103 = uVar103 - 4;
            puVar92 = puVar91;
          } while (uVar103 != 0);
        }
        for (; uVar85 != 0; uVar85 = uVar85 - 1) {
          puVar91 = puVar91 + -1;
          auVar130 = pshuflw(ZEXT416(*puVar91),ZEXT416(*puVar91),0xe1);
          *puVar91 = auVar130._0_4_;
        }
      }
    }
    else if (param_2->color_type == '\x06') {
      if (param_2->bit_depth == '\b') {
        if (uVar103 != 0) {
          puVar91 = (uint *)(puVar115 + param_2->rowbytes + 1);
          uVar85 = uVar103 & 3;
          if (3 < uVar103) {
            uVar103 = uVar103 & 0xfffffffc;
            puVar92 = puVar91;
            do {
              puVar91 = puVar92 + -4;
              *(ulonglong *)(puVar92 + -4) =
                   CONCAT44(puVar92[-3] << 8 | puVar92[-3] >> 0x18,
                            puVar92[-4] << 8 | puVar92[-4] >> 0x18);
              *(ulonglong *)(puVar92 + -2) =
                   CONCAT44(puVar92[-1] << 8 | puVar92[-1] >> 0x18,
                            puVar92[-2] << 8 | puVar92[-2] >> 0x18);
              uVar103 = uVar103 - 4;
              puVar92 = puVar91;
            } while (uVar103 != 0);
          }
          for (; uVar85 != 0; uVar85 = uVar85 - 1) {
            puVar91 = puVar91 + -1;
            *puVar91 = *puVar91 << 8 | *puVar91 >> 0x18;
          }
        }
      }
      else if (uVar103 != 0) {
        puVar115 = puVar115 + param_2->rowbytes + 1;
        if (uVar103 != 1) {
          uVar85 = uVar103 & 0xfffffffe;
          puVar98 = puVar115;
          do {
            auVar128._8_8_ = 0;
            auVar128._0_8_ = *(ulonglong *)(puVar98 + -8);
            auVar130 = pshuflw(auVar128,auVar128,0x93);
            puVar115 = puVar98 + -0x10;
            auVar132._8_8_ = 0;
            auVar132._0_8_ = *(ulonglong *)(puVar98 + -0x10);
            auVar133 = pshuflw(auVar132,auVar132,0x93);
            *(longlong *)(puVar98 + -0x10) = auVar133._0_8_;
            *(longlong *)(puVar98 + -8) = auVar130._0_8_;
            uVar85 = uVar85 - 2;
            puVar98 = puVar115;
          } while (uVar85 != 0);
        }
        if ((uVar103 & 1) != 0) {
          auVar129._8_8_ = 0;
          auVar129._0_8_ = *(ulonglong *)(puVar115 + -8);
          auVar130 = pshuflw(auVar129,auVar129,0x93);
          *(longlong *)(puVar115 + -8) = auVar130._0_8_;
        }
      }
    }
  }
  uVar103 = param_1->transformations;
  if ((uVar103 & 0x10) != 0) {
    png_do_swap(param_2,param_1->row_buf + 1);
    uVar103 = param_1->transformations;
  }
  if ((uVar103 & 0x100000) == 0) {
    if ((local_80 ^ (ulonglong)auStack_d8) != __security_cookie.value) {
LAB_140dc481a:
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
  }
  else {
    if (param_1->read_user_transform_fn !=
        (_func___cdecl_void_png_struct_def_ptr_png_row_info_struct_ptr_uchar_ptr_conflict *)0x0) {
      (*param_1->read_user_transform_fn)(param_1,param_2,param_1->row_buf + 1);
    }
    if (param_1->user_transform_depth != '\0') {
      param_2->bit_depth = param_1->user_transform_depth;
    }
    uVar93 = param_1->user_transform_channels;
    if (uVar93 == '\0') {
      uVar93 = param_2->channels;
    }
    else {
      param_2->channels = uVar93;
    }
    bVar84 = uVar93 * param_2->bit_depth;
    param_2->pixel_depth = bVar84;
    if (bVar84 < 8) {
      uVar88 = (ulonglong)param_2->width * (ulonglong)bVar84 + 7 >> 3;
    }
    else {
      uVar88 = (ulonglong)param_2->width * (ulonglong)(bVar84 >> 3);
    }
    param_2->rowbytes = uVar88;
    if ((local_80 ^ (ulonglong)auStack_d8) != __security_cookie.value) goto LAB_140dc481a;
  }
  return;
code_r0x000140dc170f:
  puVar87 = puVar87 + 3;
  puVar122 = puVar122 + 1;
  uVar103 = (int)uVar88 - 1;
  uVar88 = (ulonglong)uVar103;
  param_2 = local_b0;
  goto joined_r0x000140dc15f1;
LAB_140dc1500:
  pbVar119 = (byte *)((longlong)puVar87 + 3);
  puVar87 = puVar87 + 2;
  *(byte *)((longlong)puVar122 + 1) = *pbVar119;
  puVar122 = puVar122 + 1;
  uVar103 = (int)uVar88 - 1;
  uVar88 = (ulonglong)uVar103;
  param_2 = local_b0;
  goto joined_r0x000140dc14e6;
}

// png_do_expand @ 140dc4870

void __cdecl png_do_expand(png_row_info_struct *param_1,uchar *param_2,png_color_16_struct *param_3)

{
  ushort uVar1;
  ushort uVar2;
  sbyte sVar3;
  byte bVar4;
  int iVar5;
  uchar *puVar6;
  ulonglong uVar7;
  ulong64 uVar8;
  uchar *puVar9;
  uchar *puVar10;
  uint uVar11;
  ulonglong uVar12;
  uchar uVar13;
  uint uVar14;
  uint uVar15;
  ushort uVar16;
  uint uVar17;
  uchar uVar18;
  byte *pbVar19;
  bool bVar20;
  
  uVar14 = param_1->width;
  uVar7 = (ulonglong)uVar14;
  if (param_1->color_type != '\0') {
    if (param_3 == (png_color_16_struct *)0x0 || param_1->color_type != '\x02') {
      return;
    }
    if (param_1->bit_depth == '\x10') {
      if (uVar14 != 0) {
        uVar16 = param_3->red;
        uVar1 = param_3->green;
        uVar2 = param_3->blue;
        puVar6 = param_2 + uVar7 * 8 + -1;
        puVar9 = param_2 + (param_1->rowbytes - 1);
        uVar12 = uVar7;
        do {
          if ((((uVar16 >> 8 == (ushort)puVar9[-5]) && (puVar9[-4] == (uchar)uVar16)) &&
              (uVar1 >> 8 == (ushort)puVar9[-3])) &&
             (((puVar9[-2] == (uchar)uVar1 && (uVar2 >> 8 == (ushort)puVar9[-1])) &&
              (*puVar9 == (uchar)uVar2)))) {
            uVar18 = '\0';
          }
          else {
            uVar18 = 0xff;
          }
          *puVar6 = uVar18;
          puVar6[-1] = uVar18;
          puVar6[-2] = *puVar9;
          puVar6[-3] = puVar9[-1];
          puVar6[-4] = puVar9[-2];
          puVar6[-5] = puVar9[-3];
          puVar6[-6] = puVar9[-4];
          puVar10 = puVar9 + -5;
          puVar9 = puVar9 + -6;
          puVar6[-7] = *puVar10;
          puVar6 = puVar6 + -8;
          uVar14 = (int)uVar12 - 1;
          uVar12 = (ulonglong)uVar14;
        } while (uVar14 != 0);
      }
    }
    else if ((param_1->bit_depth == '\b') && (uVar14 != 0)) {
      puVar6 = param_2 + uVar7 * 4 + -1;
      puVar9 = param_2 + (param_1->rowbytes - 1);
      uVar16 = param_3->blue;
      uVar1 = param_3->red;
      uVar2 = param_3->green;
      uVar12 = uVar7;
      do {
        if (((puVar9[-2] == (uchar)uVar1) && (puVar9[-1] == (uchar)uVar2)) &&
           (*puVar9 == (uchar)uVar16)) {
          uVar18 = '\0';
        }
        else {
          uVar18 = 0xff;
        }
        *puVar6 = uVar18;
        puVar6[-1] = *puVar9;
        puVar6[-2] = puVar9[-1];
        puVar10 = puVar9 + -2;
        puVar9 = puVar9 + -3;
        puVar6[-3] = *puVar10;
        puVar6 = puVar6 + -4;
        uVar14 = (int)uVar12 - 1;
        uVar12 = (ulonglong)uVar14;
      } while (uVar14 != 0);
    }
    param_1->color_type = '\x06';
    param_1->channels = '\x04';
    bVar4 = param_1->bit_depth << 2;
    param_1->pixel_depth = bVar4;
    goto joined_r0x000140dc4df7;
  }
  if (param_3 == (png_color_16_struct *)0x0) {
    uVar16 = 0;
    bVar4 = param_1->bit_depth;
  }
  else {
    uVar16 = param_3->gray;
    bVar4 = param_1->bit_depth;
  }
  if (bVar4 < 8) {
    uVar8 = uVar7;
    if (bVar4 == 1) {
      uVar1 = uVar16 & 1;
      uVar16 = 0xff;
      if (uVar1 == 0) {
        uVar16 = 0;
      }
      uVar8 = 0;
      if (uVar14 != 0) {
        uVar15 = -uVar14 & 7;
        puVar9 = param_2 + uVar7;
        pbVar19 = param_2 + (uVar14 - 1 >> 3);
        if (uVar14 - 1 != 0) {
          uVar11 = uVar14 & 0xfffffffe;
          puVar6 = puVar9;
          do {
            puVar6[-1] = -((*pbVar19 >> (uVar15 & 0x1f) & 1) != 0);
            uVar17 = uVar15 + 1;
            if (uVar15 == 7) {
              uVar17 = 0;
            }
            uVar12 = (ulonglong)(uVar15 == 7);
            puVar9 = puVar6 + -2;
            puVar6[-2] = -((pbVar19[-uVar12] >> (uVar17 & 0x1f) & 1) != 0);
            uVar15 = uVar17 + 1;
            if (uVar17 == 7) {
              uVar15 = 0;
            }
            pbVar19 = pbVar19 + (-(ulonglong)(uVar17 == 7) - uVar12);
            uVar11 = uVar11 - 2;
            puVar6 = puVar9;
          } while (uVar11 != 0);
        }
        uVar8 = uVar7;
        if ((uVar14 & 1) != 0) {
          puVar9[-1] = -((*pbVar19 >> (uVar15 & 0x1f) & 1) != 0);
        }
      }
    }
    else if (bVar4 == 2) {
      uVar16 = (uVar16 & 3) * 0x55;
      if (uVar14 == 0) {
LAB_140dc4c72:
        uVar8 = 0;
      }
      else {
        uVar15 = ~(uVar14 * 2 + 6) & 6;
        puVar9 = param_2 + uVar7;
        pbVar19 = param_2 + (uVar14 - 1 >> 2);
        if (uVar14 - 1 != 0) {
          uVar11 = uVar14 & 0xfffffffe;
          do {
            puVar9[-1] = (*pbVar19 >> ((byte)uVar15 & 0x1f) & 3) * 'U';
            iVar5 = uVar15 + 2;
            if (uVar15 == 6) {
              iVar5 = 0;
            }
            uVar12 = (ulonglong)(uVar15 == 6);
            puVar9[-2] = (pbVar19[-uVar12] >> ((byte)iVar5 & 0x1f) & 3) * 'U';
            puVar9 = puVar9 + -2;
            uVar15 = iVar5 + 2;
            if (iVar5 == 6) {
              uVar15 = 0;
            }
            pbVar19 = pbVar19 + (-(ulonglong)(iVar5 == 6) - uVar12);
            uVar11 = uVar11 - 2;
          } while (uVar11 != 0);
        }
        if ((uVar14 & 1) != 0) {
          puVar9[-1] = (*pbVar19 >> ((byte)uVar15 & 0x1f) & 3) * 'U';
        }
      }
    }
    else if (bVar4 == 4) {
      uVar16 = (uVar16 & 0xf) << 4 | uVar16 & 0xf;
      if (uVar14 == 0) goto LAB_140dc4c72;
      uVar15 = uVar14 * 4 & 4;
      sVar3 = (sbyte)uVar15;
      puVar9 = param_2 + uVar7;
      pbVar19 = param_2 + (uVar14 - 1 >> 1);
      if (uVar14 - 1 != 0) {
        uVar11 = uVar14 & 0xfffffffe;
        do {
          bVar4 = *pbVar19 >> (sbyte)uVar15;
          puVar9[-1] = bVar4 << 4 | bVar4 & 0xf;
          bVar20 = uVar15 == 0;
          uVar15 = (uint)!bVar20;
          bVar4 = pbVar19[-(ulonglong)uVar15] >> bVar20 * '\x04';
          puVar9[-2] = bVar4 << 4 | bVar4 & 0xf;
          puVar9 = puVar9 + -2;
          pbVar19 = pbVar19 + (-(ulonglong)bVar20 - (ulonglong)uVar15);
          uVar15 = uVar15 << 2;
          sVar3 = (sbyte)uVar15;
          uVar11 = uVar11 - 2;
        } while (uVar11 != 0);
      }
      if ((uVar14 & 1) != 0) {
        puVar9[-1] = (*pbVar19 >> sVar3) << 4 | *pbVar19 >> sVar3 & 0xf;
      }
    }
    param_1->bit_depth = '\b';
    param_1->pixel_depth = '\b';
    param_1->rowbytes = uVar8;
    bVar4 = 8;
  }
  if (param_3 == (png_color_16_struct *)0x0) {
    return;
  }
  uVar18 = (uchar)uVar16;
  if (bVar4 == 0x10) {
    if (uVar14 != 0) {
      uVar8 = param_1->rowbytes;
      uVar12 = uVar7;
      do {
        if ((param_2[uVar8 - 2] == (uchar)(uVar16 >> 8)) && (param_2[uVar8 - 1] == uVar18)) {
          uVar13 = '\0';
        }
        else {
          uVar13 = 0xff;
        }
        param_2[uVar8 * 2 + -1] = uVar13;
        param_2[uVar8 * 2 + -2] = uVar13;
        param_2[uVar8 * 2 + -3] = param_2[uVar8 - 1];
        param_2[uVar8 * 2 + -4] = param_2[uVar8 - 2];
        uVar8 = uVar8 - 2;
        uVar14 = (int)uVar12 - 1;
        uVar12 = (ulonglong)uVar14;
      } while (uVar14 != 0);
    }
  }
  else if ((bVar4 == 8) && (uVar14 != 0)) {
    puVar6 = param_2 + uVar7 * 2 + -1;
    puVar9 = param_2 + uVar7;
    if (uVar14 != 1) {
      uVar15 = uVar14 & 0xfffffffe;
      puVar10 = puVar9;
      do {
        *puVar6 = -(puVar10[-1] != uVar18);
        puVar6[-1] = puVar10[-1];
        puVar9 = puVar10 + -2;
        puVar6[-2] = -(puVar10[-2] != uVar18);
        puVar6[-3] = puVar10[-2];
        puVar6 = puVar6 + -4;
        uVar15 = uVar15 - 2;
        puVar10 = puVar9;
      } while (uVar15 != 0);
    }
    if ((uVar14 & 1) != 0) {
      *puVar6 = -(puVar9[-1] != uVar18);
      puVar6[-1] = puVar9[-1];
    }
  }
  param_1->color_type = '\x04';
  param_1->channels = '\x02';
  bVar4 = param_1->bit_depth * '\x02';
  param_1->pixel_depth = bVar4;
joined_r0x000140dc4df7:
  if (bVar4 < 8) {
    uVar7 = bVar4 * uVar7 + 7 >> 3;
  }
  else {
    uVar7 = (bVar4 >> 3) * uVar7;
  }
  param_1->rowbytes = uVar7;
  return;
}

// png_do_gray_to_rgb @ 140dc4e30

void __cdecl png_do_gray_to_rgb(png_row_info_struct *param_1,uchar *param_2)

{
  uchar *puVar1;
  byte bVar2;
  byte bVar3;
  uchar *puVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  uchar uVar7;
  uchar *puVar8;
  uint uVar9;
  uint uVar10;
  
  bVar3 = param_1->bit_depth;
  if ((7 < bVar3) && (bVar2 = param_1->color_type, (bVar2 & 2) == 0)) {
    uVar10 = param_1->width;
    uVar6 = (ulonglong)uVar10;
    if (bVar2 == 4) {
      if (bVar3 == 8) {
        if (uVar6 != 0) {
          puVar8 = param_2 + uVar6 * 2 + -1;
          puVar4 = param_2 + uVar6 * 4 + -1;
          if (uVar10 != 1) {
            uVar9 = uVar10 & 0xfffffffe;
            do {
              *puVar4 = *puVar8;
              uVar7 = puVar8[-1];
              puVar4[-1] = uVar7;
              puVar4[-2] = uVar7;
              puVar4[-3] = puVar8[-1];
              puVar4[-4] = puVar8[-2];
              uVar7 = puVar8[-3];
              puVar4[-5] = uVar7;
              puVar4[-6] = uVar7;
              puVar1 = puVar8 + -3;
              puVar8 = puVar8 + -4;
              puVar4[-7] = *puVar1;
              puVar4 = puVar4 + -8;
              uVar9 = uVar9 - 2;
            } while (uVar9 != 0);
          }
          if ((uVar10 & 1) != 0) {
            *puVar4 = *puVar8;
            uVar7 = puVar8[-1];
            puVar4[-1] = uVar7;
            puVar4[-2] = uVar7;
            puVar4[-3] = puVar8[-1];
          }
        }
      }
      else {
        uVar5 = uVar6;
        if (uVar6 != 0) {
          do {
            param_2[uVar5 * 8 + -1] = param_2[uVar5 * 4 + -1];
            param_2[uVar5 * 8 + -2] = param_2[uVar5 * 4 + -2];
            param_2[uVar5 * 8 + -3] = param_2[uVar5 * 4 + -3];
            param_2[uVar5 * 8 + -4] = param_2[uVar5 * 4 + -4];
            param_2[uVar5 * 8 + -5] = param_2[uVar5 * 4 + -3];
            param_2[uVar5 * 8 + -6] = param_2[uVar5 * 4 + -4];
            param_2[uVar5 * 8 + -7] = param_2[uVar5 * 4 + -3];
            param_2[uVar5 * 8 + -8] = param_2[uVar5 * 4 + -4];
            uVar5 = uVar5 - 1;
          } while ((int)uVar5 != 0);
        }
      }
    }
    else if (bVar2 == 0) {
      if (bVar3 == 8) {
        if (uVar6 != 0) {
          puVar4 = param_2 + (uVar6 - 1);
          puVar8 = param_2 + uVar6 * 3 + -1;
          uVar9 = uVar10 & 3;
          if (3 < uVar10) {
            uVar10 = uVar10 & 0xfffffffc;
            do {
              uVar7 = *puVar4;
              *puVar8 = uVar7;
              puVar8[-1] = uVar7;
              puVar8[-2] = *puVar4;
              uVar7 = puVar4[-1];
              puVar8[-3] = uVar7;
              puVar8[-4] = uVar7;
              puVar8[-5] = puVar4[-1];
              uVar7 = puVar4[-2];
              puVar8[-6] = uVar7;
              puVar8[-7] = uVar7;
              puVar8[-8] = puVar4[-2];
              uVar7 = puVar4[-3];
              puVar8[-9] = uVar7;
              puVar8[-10] = uVar7;
              puVar1 = puVar4 + -3;
              puVar4 = puVar4 + -4;
              puVar8[-0xb] = *puVar1;
              puVar8 = puVar8 + -0xc;
              uVar10 = uVar10 - 4;
            } while (uVar10 != 0);
          }
          for (; uVar9 != 0; uVar9 = uVar9 - 1) {
            uVar7 = *puVar4;
            *puVar8 = uVar7;
            puVar8[-1] = uVar7;
            uVar7 = *puVar4;
            puVar4 = puVar4 + -1;
            puVar8[-2] = uVar7;
            puVar8 = puVar8 + -3;
          }
        }
      }
      else if (uVar6 != 0) {
        puVar8 = param_2 + uVar6 * 2 + -1;
        puVar4 = param_2 + uVar6 * 6 + -1;
        if (uVar10 != 1) {
          uVar9 = uVar10 & 0xfffffffe;
          do {
            *puVar4 = *puVar8;
            puVar4[-1] = puVar8[-1];
            puVar4[-2] = *puVar8;
            puVar4[-3] = puVar8[-1];
            puVar4[-4] = *puVar8;
            puVar4[-5] = puVar8[-1];
            puVar4[-6] = puVar8[-2];
            puVar4[-7] = puVar8[-3];
            puVar4[-8] = puVar8[-2];
            puVar4[-9] = puVar8[-3];
            puVar4[-10] = puVar8[-2];
            puVar1 = puVar8 + -3;
            puVar8 = puVar8 + -4;
            puVar4[-0xb] = *puVar1;
            puVar4 = puVar4 + -0xc;
            uVar9 = uVar9 - 2;
          } while (uVar9 != 0);
        }
        if ((uVar10 & 1) != 0) {
          *puVar4 = *puVar8;
          puVar4[-1] = puVar8[-1];
          puVar4[-2] = *puVar8;
          puVar4[-3] = puVar8[-1];
          puVar4[-4] = *puVar8;
          puVar4[-5] = puVar8[-1];
        }
      }
    }
    uVar7 = param_1->channels + '\x02';
    param_1->channels = uVar7;
    param_1->color_type = param_1->color_type | 2;
    bVar3 = param_1->bit_depth * uVar7;
    param_1->pixel_depth = bVar3;
    if (bVar3 < 8) {
      uVar6 = bVar3 * uVar6 + 7 >> 3;
    }
    else {
      uVar6 = (bVar3 >> 3) * uVar6;
    }
    param_1->rowbytes = uVar6;
  }
  return;
}

