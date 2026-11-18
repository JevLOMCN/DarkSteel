// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: libPNG
// Functions: 21

// png_set_bgr @ 140dc5180

void __cdecl png_set_bgr(png_struct_def_conflict *param_1)

{
  if (param_1 != (png_struct_def_conflict *)0x0) {
    *(byte *)&param_1->transformations = (byte)param_1->transformations | 1;
  }
  return;
}

// png_set_swap @ 140dc51a0

void __cdecl png_set_swap(png_struct_def_conflict *param_1)

{
  if ((param_1 != (png_struct_def_conflict *)0x0) && (param_1->bit_depth == '\x10')) {
    *(byte *)&param_1->transformations = (byte)param_1->transformations | 0x10;
  }
  return;
}

// png_set_packing @ 140dc51c0

void __cdecl png_set_packing(png_struct_def_conflict *param_1)

{
  if ((param_1 != (png_struct_def_conflict *)0x0) && (param_1->bit_depth < 8)) {
    *(byte *)&param_1->transformations = (byte)param_1->transformations | 4;
    param_1->usr_bit_depth = '\b';
  }
  return;
}

// png_set_packswap @ 140dc51f0

void __cdecl png_set_packswap(png_struct_def_conflict *param_1)

{
  byte *pbVar1;
  
  if ((param_1 != (png_struct_def_conflict *)0x0) && (param_1->bit_depth < 8)) {
    pbVar1 = (byte *)((longlong)&param_1->transformations + 2);
    *pbVar1 = *pbVar1 | 1;
  }
  return;
}

// png_set_shift @ 140dc5210

void __cdecl png_set_shift(png_struct_def_conflict *param_1,png_color_8_struct *param_2)

{
  uchar uVar1;
  uchar uVar2;
  uchar uVar3;
  
  if (param_1 != (png_struct_def_conflict *)0x0) {
    *(byte *)&param_1->transformations = (byte)param_1->transformations | 8;
    uVar1 = param_2->green;
    uVar2 = param_2->blue;
    uVar3 = param_2->gray;
    (param_1->shift).red = param_2->red;
    (param_1->shift).green = uVar1;
    (param_1->shift).blue = uVar2;
    (param_1->shift).gray = uVar3;
    (param_1->shift).alpha = param_2->alpha;
  }
  return;
}

// png_set_interlace_handling @ 140dc5240

int __cdecl png_set_interlace_handling(png_struct_def_conflict *param_1)

{
  int iVar1;
  
  iVar1 = 1;
  if ((param_1 != (png_struct_def_conflict *)0x0) && (param_1->interlaced != '\0')) {
    *(byte *)&param_1->transformations = (byte)param_1->transformations | 2;
    iVar1 = 7;
  }
  return iVar1;
}

// png_set_filler @ 140dc5270

void __cdecl png_set_filler(png_struct_def_conflict *param_1,uint param_2,int param_3)

{
  byte *pbVar1;
  uint uVar2;
  
  if (param_1 == (png_struct_def_conflict *)0x0) {
    return;
  }
  if ((param_1->mode & 0x8000) == 0) {
    if (param_1->color_type == '\0') {
      if (param_1->bit_depth < 8) {
        png_app_error(param_1,"png_set_filler is invalid for low bit depth gray output");
        return;
      }
      param_1->usr_channels = '\x02';
      pbVar1 = (byte *)((longlong)&param_1->transformations + 1);
      *pbVar1 = *pbVar1 | 0x80;
      uVar2 = param_1->flags;
    }
    else {
      if (param_1->color_type != '\x02') {
        png_app_error(param_1,"png_set_filler: inappropriate color type");
        return;
      }
      param_1->usr_channels = '\x04';
      pbVar1 = (byte *)((longlong)&param_1->transformations + 1);
      *pbVar1 = *pbVar1 | 0x80;
      uVar2 = param_1->flags;
    }
  }
  else {
    param_1->filler = (ushort)param_2;
    pbVar1 = (byte *)((longlong)&param_1->transformations + 1);
    *pbVar1 = *pbVar1 | 0x80;
    uVar2 = param_1->flags;
  }
  if (param_3 == 1) {
    uVar2 = uVar2 | 0x80;
  }
  else {
    uVar2 = uVar2 & 0xffffff7f;
  }
  param_1->flags = uVar2;
  return;
}

// png_set_add_alpha @ 140dc5320

void __cdecl png_set_add_alpha(png_struct_def_conflict *param_1,uint param_2,int param_3)

{
  byte *pbVar1;
  short sVar2;
  uint uVar3;
  char *pcVar4;
  
  if (param_1 == (png_struct_def_conflict *)0x0) {
    return;
  }
  if ((param_1->mode & 0x8000) == 0) {
    if (param_1->color_type == '\0') {
      if (7 < param_1->bit_depth) {
        param_1->usr_channels = '\x02';
        pbVar1 = (byte *)((longlong)&param_1->transformations + 1);
        *pbVar1 = *pbVar1 | 0x80;
        uVar3 = param_1->flags;
        goto joined_r0x000140dc53a9;
      }
      pcVar4 = "png_set_filler is invalid for low bit depth gray output";
    }
    else {
      if (param_1->color_type == '\x02') {
        param_1->usr_channels = '\x04';
        pbVar1 = (byte *)((longlong)&param_1->transformations + 1);
        *pbVar1 = *pbVar1 | 0x80;
        uVar3 = param_1->flags;
joined_r0x000140dc53a9:
        if (param_3 == 1) goto LAB_140dc5381;
        goto LAB_140dc53ab;
      }
      pcVar4 = "png_set_filler: inappropriate color type";
    }
    png_app_error(param_1,pcVar4);
    uVar3 = param_1->transformations;
    sVar2 = (short)uVar3;
  }
  else {
    param_1->filler = (ushort)param_2;
    pbVar1 = (byte *)((longlong)&param_1->transformations + 1);
    *pbVar1 = *pbVar1 | 0x80;
    uVar3 = param_1->flags;
    if (param_3 == 1) {
LAB_140dc5381:
      uVar3 = uVar3 | 0x80;
    }
    else {
LAB_140dc53ab:
      uVar3 = uVar3 & 0xffffff7f;
    }
    param_1->flags = uVar3;
    uVar3 = param_1->transformations;
    sVar2 = (short)uVar3;
  }
  if (sVar2 < 0) {
    param_1->transformations = uVar3 | 0x1000000;
  }
  return;
}

// png_set_swap_alpha @ 140dc5400

void __cdecl png_set_swap_alpha(png_struct_def_conflict *param_1)

{
  byte *pbVar1;
  
  if (param_1 != (png_struct_def_conflict *)0x0) {
    pbVar1 = (byte *)((longlong)&param_1->transformations + 2);
    *pbVar1 = *pbVar1 | 2;
  }
  return;
}

// png_set_invert_alpha @ 140dc5420

void __cdecl png_set_invert_alpha(png_struct_def_conflict *param_1)

{
  byte *pbVar1;
  
  if (param_1 != (png_struct_def_conflict *)0x0) {
    pbVar1 = (byte *)((longlong)&param_1->transformations + 2);
    *pbVar1 = *pbVar1 | 8;
  }
  return;
}

// png_set_invert_mono @ 140dc5440

void __cdecl png_set_invert_mono(png_struct_def_conflict *param_1)

{
  if (param_1 != (png_struct_def_conflict *)0x0) {
    *(byte *)&param_1->transformations = (byte)param_1->transformations | 0x20;
  }
  return;
}

// png_do_invert @ 140dc5460

void __cdecl png_do_invert(png_row_info_struct *param_1,uchar *param_2)

{
  uint *puVar1;
  uint *puVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  longlong lVar12;
  ulonglong uVar13;
  
  if (param_1->color_type == '\x04') {
    if (param_1->bit_depth == '\x10') {
      uVar10 = param_1->rowbytes;
      if (uVar10 == 0) {
        return;
      }
      if (4 < uVar10) {
        uVar11 = (uVar10 - 1 >> 2) + 1 & 0xfffffffffffffffe;
        do {
          *param_2 = ~*param_2;
          param_2[1] = ~param_2[1];
          param_2[4] = ~param_2[4];
          param_2[5] = ~param_2[5];
          param_2 = param_2 + 8;
          uVar11 = uVar11 - 2;
        } while (uVar11 != 0);
      }
      if ((uVar10 - 1 & 4) != 0) {
        return;
      }
      *param_2 = ~*param_2;
      param_2[1] = ~param_2[1];
      return;
    }
    if (param_1->bit_depth != '\b') {
      return;
    }
    uVar10 = param_1->rowbytes;
    if (uVar10 == 0) {
      return;
    }
    uVar13 = (uVar10 - 1 >> 1) + 1;
    uVar11 = (ulonglong)((uint)uVar13 & 3);
    if (6 < uVar10) {
      uVar13 = uVar13 & 0xfffffffffffffffc;
      do {
        *param_2 = ~*param_2;
        param_2[2] = ~param_2[2];
        param_2[4] = ~param_2[4];
        param_2[6] = ~param_2[6];
        param_2 = param_2 + 8;
        uVar13 = uVar13 - 4;
      } while (uVar13 != 0);
    }
    if (uVar11 == 0) {
      return;
    }
    uVar10 = 0;
    do {
      param_2[uVar10 * 2] = ~param_2[uVar10 * 2];
      uVar10 = uVar10 + 1;
    } while (uVar11 != uVar10);
    return;
  }
  if (param_1->color_type != '\0') {
    return;
  }
  uVar10 = param_1->rowbytes;
  if (uVar10 == 0) {
    return;
  }
  if (uVar10 < 8) {
    uVar11 = 0;
  }
  else {
    if (uVar10 < 0x20) {
      uVar13 = 0;
    }
    else {
      uVar11 = uVar10 & 0xffffffffffffffe0;
      uVar13 = 0;
      do {
        puVar1 = (uint *)(param_2 + uVar13);
        uVar3 = puVar1[1];
        uVar4 = puVar1[2];
        uVar5 = puVar1[3];
        puVar2 = (uint *)(param_2 + uVar13 + 0x10);
        uVar6 = *puVar2;
        uVar7 = puVar2[1];
        uVar8 = puVar2[2];
        uVar9 = puVar2[3];
        puVar2 = (uint *)(param_2 + uVar13);
        *puVar2 = *puVar1 ^ 0xffffffff;
        puVar2[1] = uVar3 ^ 0xffffffff;
        puVar2[2] = uVar4 ^ 0xffffffff;
        puVar2[3] = uVar5 ^ 0xffffffff;
        puVar1 = (uint *)(param_2 + uVar13 + 0x10);
        *puVar1 = uVar6 ^ 0xffffffff;
        puVar1[1] = uVar7 ^ 0xffffffff;
        puVar1[2] = uVar8 ^ 0xffffffff;
        puVar1[3] = uVar9 ^ 0xffffffff;
        uVar13 = uVar13 + 0x20;
      } while (uVar11 != uVar13);
      if (uVar10 == uVar11) {
        return;
      }
      uVar13 = uVar11;
      if ((uVar10 & 0x18) == 0) {
        param_2 = param_2 + uVar11;
        goto LAB_140dc55b6;
      }
    }
    uVar11 = uVar10 & 0xfffffffffffffff8;
    do {
      *(ulonglong *)(param_2 + uVar13) = ~*(ulonglong *)(param_2 + uVar13);
      uVar13 = uVar13 + 8;
    } while (uVar11 != uVar13);
    param_2 = param_2 + uVar11;
    if (uVar10 == uVar11) {
      return;
    }
  }
LAB_140dc55b6:
  lVar12 = 0;
  do {
    param_2[lVar12] = ~param_2[lVar12];
    lVar12 = lVar12 + 1;
  } while (uVar10 - uVar11 != lVar12);
  return;
}

// png_do_swap @ 140dc55e0

void __cdecl png_do_swap(png_row_info_struct *param_1,uchar *param_2)

{
  ushort *puVar1;
  byte bVar2;
  uint uVar3;
  longlong lVar4;
  uint uVar5;
  uint uVar6;
  
  if (param_1->bit_depth == '\x10') {
    uVar3 = param_1->width;
    bVar2 = param_1->channels;
    uVar5 = uVar3 * bVar2;
    if (uVar5 != 0) {
      if (3 < uVar5) {
        uVar6 = uVar5 & 0xfffffffc;
        do {
          *(ushort *)param_2 = *(ushort *)param_2 << 8 | *(ushort *)param_2 >> 8;
          puVar1 = (ushort *)((longlong)param_2 + 2);
          *puVar1 = *puVar1 << 8 | *puVar1 >> 8;
          puVar1 = (ushort *)((longlong)param_2 + 4);
          *puVar1 = *puVar1 << 8 | *puVar1 >> 8;
          puVar1 = (ushort *)((longlong)param_2 + 6);
          *puVar1 = *puVar1 << 8 | *puVar1 >> 8;
          param_2 = (uchar *)((longlong)param_2 + 8);
          uVar6 = uVar6 - 4;
        } while (uVar6 != 0);
      }
      if ((uVar5 & 3) != 0) {
        lVar4 = 0;
        do {
          puVar1 = (ushort *)((longlong)param_2 + lVar4 * 2);
          *puVar1 = *puVar1 << 8 | *puVar1 >> 8;
          lVar4 = lVar4 + 1;
        } while (((byte)((char)uVar3 * bVar2) & 3) != (uint)lVar4);
      }
    }
  }
  return;
}

// png_do_packswap @ 140dc5660

void __cdecl png_do_packswap(png_row_info_struct *param_1,uchar *param_2)

{
  byte bVar1;
  byte *pbVar2;
  uchar *puVar3;
  
  bVar1 = param_1->bit_depth;
  if (bVar1 < 8) {
    if (bVar1 == 1) {
      puVar3 = "";
    }
    else if (bVar1 == 4) {
      puVar3 = "";
    }
    else {
      if (bVar1 != 2) {
        return;
      }
      puVar3 = "";
    }
    if (0 < (longlong)param_1->rowbytes) {
      pbVar2 = param_2 + param_1->rowbytes;
      do {
        *param_2 = puVar3[*param_2];
        param_2 = param_2 + 1;
      } while (param_2 < pbVar2);
    }
  }
  return;
}

// png_do_strip_channel @ 140dc56d0

void __cdecl png_do_strip_channel(png_row_info_struct *param_1,uchar *param_2,int param_3)

{
  uchar *puVar1;
  ulong64 uVar2;
  uchar *puVar3;
  uchar uVar4;
  longlong lVar5;
  uchar *puVar6;
  
  uVar2 = param_1->rowbytes;
  puVar1 = param_2 + uVar2;
  if (param_1->channels == '\x04') {
    if (param_1->bit_depth == '\x10') {
      puVar3 = param_2 + 6;
      if (param_3 != 0) {
        puVar3 = param_2;
      }
      lVar5 = 2;
      if (param_3 == 0) {
        lVar5 = 8;
      }
      uVar4 = '0';
      if (lVar5 < (longlong)uVar2) {
        puVar6 = param_2 + lVar5;
        do {
          *puVar3 = *puVar6;
          puVar3[1] = puVar6[1];
          puVar3[2] = puVar6[2];
          puVar3[3] = puVar6[3];
          puVar3[4] = puVar6[4];
          puVar3[5] = puVar6[5];
          puVar3 = puVar3 + 6;
          puVar6 = puVar6 + 8;
        } while (puVar6 < puVar1);
      }
    }
    else {
      if (param_1->bit_depth != '\b') {
        return;
      }
      puVar3 = param_2 + (ulonglong)(param_3 == 0) * 3;
      lVar5 = (ulonglong)(param_3 == 0) * 3 + 1;
      uVar4 = '\x18';
      if (lVar5 < (longlong)uVar2) {
        puVar6 = param_2 + lVar5;
        do {
          *puVar3 = *puVar6;
          puVar3[1] = puVar6[1];
          puVar3[2] = puVar6[2];
          puVar3 = puVar3 + 3;
          puVar6 = puVar6 + 4;
        } while (puVar6 < puVar1);
      }
    }
    param_1->pixel_depth = uVar4;
    param_1->channels = '\x03';
    if (param_1->color_type == '\x06') {
      param_1->color_type = '\x02';
    }
  }
  else {
    if (param_1->channels != '\x02') {
      return;
    }
    uVar4 = param_1->bit_depth;
    if (uVar4 == '\x10') {
      puVar3 = param_2 + 2;
      puVar6 = param_2 + 4;
      if (param_3 != 0) {
        puVar6 = puVar3;
        puVar3 = param_2;
      }
      for (; puVar6 < puVar1; puVar6 = puVar6 + 4) {
        *puVar3 = *puVar6;
        puVar3[1] = puVar6[1];
        puVar3 = puVar3 + 2;
      }
    }
    else {
      if (uVar4 != '\b') {
        return;
      }
      puVar3 = param_2 + 1;
      puVar6 = param_2 + 2;
      if (param_3 != 0) {
        puVar6 = puVar3;
        puVar3 = param_2;
      }
      for (; puVar6 < puVar1; puVar6 = puVar6 + 2) {
        *puVar3 = *puVar6;
        puVar3 = puVar3 + 1;
      }
    }
    param_1->pixel_depth = uVar4;
    param_1->channels = '\x01';
    if (param_1->color_type == '\x04') {
      param_1->color_type = '\0';
    }
  }
  param_1->rowbytes = (longlong)puVar3 - (longlong)param_2;
  return;
}

// png_do_bgr @ 140dc58a0

void __cdecl png_do_bgr(png_row_info_struct *param_1,uchar *param_2)

{
  byte bVar1;
  uchar uVar2;
  undefined2 uVar3;
  uint uVar4;
  uint uVar5;
  longlong lVar6;
  
  bVar1 = param_1->color_type;
  if ((bVar1 & 2) != 0) {
    uVar4 = param_1->width;
    if (param_1->bit_depth == '\x10') {
      if (bVar1 == 2) {
        if (uVar4 == 0) {
          return;
        }
        if (uVar4 != 1) {
          uVar5 = uVar4 & 0xfffffffe;
          do {
            uVar3 = *(undefined2 *)param_2;
            *(undefined2 *)param_2 = *(undefined2 *)(param_2 + 4);
            *(undefined2 *)(param_2 + 4) = uVar3;
            uVar3 = *(undefined2 *)(param_2 + 6);
            *(undefined2 *)(param_2 + 6) = *(undefined2 *)(param_2 + 10);
            *(undefined2 *)(param_2 + 10) = uVar3;
            param_2 = param_2 + 0xc;
            uVar5 = uVar5 - 2;
          } while (uVar5 != 0);
        }
      }
      else {
        if (bVar1 != 6) {
          return;
        }
        if (uVar4 == 0) {
          return;
        }
        if (uVar4 != 1) {
          uVar5 = uVar4 & 0xfffffffe;
          do {
            uVar3 = *(undefined2 *)param_2;
            *(undefined2 *)param_2 = *(undefined2 *)(param_2 + 4);
            *(undefined2 *)(param_2 + 4) = uVar3;
            uVar3 = *(undefined2 *)(param_2 + 8);
            *(undefined2 *)(param_2 + 8) = *(undefined2 *)(param_2 + 0xc);
            *(undefined2 *)(param_2 + 0xc) = uVar3;
            param_2 = param_2 + 0x10;
            uVar5 = uVar5 - 2;
          } while (uVar5 != 0);
        }
      }
      if ((uVar4 & 1) != 0) {
        uVar3 = *(undefined2 *)param_2;
        *(undefined2 *)param_2 = *(undefined2 *)(param_2 + 4);
        *(undefined2 *)(param_2 + 4) = uVar3;
        return;
      }
    }
    else if (param_1->bit_depth == '\b') {
      if (bVar1 == 2) {
        if (uVar4 != 0) {
          if (3 < uVar4) {
            uVar5 = uVar4 & 0xfffffffc;
            do {
              uVar2 = *param_2;
              *param_2 = param_2[2];
              param_2[2] = uVar2;
              uVar2 = param_2[3];
              param_2[3] = param_2[5];
              param_2[5] = uVar2;
              uVar2 = param_2[6];
              param_2[6] = param_2[8];
              param_2[8] = uVar2;
              uVar2 = param_2[9];
              param_2[9] = param_2[0xb];
              param_2[0xb] = uVar2;
              param_2 = param_2 + 0xc;
              uVar5 = uVar5 - 4;
            } while (uVar5 != 0);
          }
          if ((uVar4 & 3) != 0) {
            lVar6 = 0;
            do {
              uVar2 = param_2[lVar6];
              param_2[lVar6] = param_2[lVar6 + 2];
              param_2[lVar6 + 2] = uVar2;
              lVar6 = lVar6 + 3;
            } while ((uVar4 & 3) * 3 != (int)lVar6);
          }
        }
      }
      else if ((bVar1 == 6) && (uVar4 != 0)) {
        if (3 < uVar4) {
          uVar5 = uVar4 & 0xfffffffc;
          do {
            uVar2 = *param_2;
            *param_2 = param_2[2];
            param_2[2] = uVar2;
            uVar2 = param_2[4];
            param_2[4] = param_2[6];
            param_2[6] = uVar2;
            uVar2 = param_2[8];
            param_2[8] = param_2[10];
            param_2[10] = uVar2;
            uVar2 = param_2[0xc];
            param_2[0xc] = param_2[0xe];
            param_2[0xe] = uVar2;
            param_2 = param_2 + 0x10;
            uVar5 = uVar5 - 4;
          } while (uVar5 != 0);
        }
        if ((uVar4 & 3) != 0) {
          lVar6 = 0;
          do {
            uVar2 = param_2[lVar6 * 4];
            param_2[lVar6 * 4] = param_2[lVar6 * 4 + 2];
            param_2[lVar6 * 4 + 2] = uVar2;
            lVar6 = lVar6 + 1;
          } while ((uVar4 & 3) != (uint)lVar6);
        }
      }
    }
  }
  return;
}

// png_do_check_palette_indexes @ 140dc5ad0

void __cdecl
png_do_check_palette_indexes(png_struct_def_conflict *param_1,png_row_info_struct *param_2)

{
  undefined4 uVar1;
  byte *pbVar2;
  ulonglong uVar3;
  bool bVar4;
  char cVar8;
  short sVar12;
  uint uVar13;
  byte bVar14;
  byte *pbVar15;
  byte *pbVar16;
  uint uVar17;
  uint uVar18;
  longlong lVar19;
  byte bVar20;
  uint unaff_EDI;
  uint uVar21;
  uint uVar22;
  uint uVar23;
  uint uVar24;
  ulonglong uVar25;
  uint uVar26;
  uint uVar27;
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  bool bVar5;
  bool bVar6;
  bool bVar7;
  char cVar9;
  char cVar10;
  char cVar11;
  
  bVar20 = param_2->bit_depth;
  if (((int)(uint)param_1->num_palette < 1 << (bVar20 & 0x1f) && param_1->num_palette != 0) &&
     (bVar20 - 1 < 8)) {
    bVar14 = -(param_2->pixel_depth * (char)param_2->width);
    pbVar2 = param_1->row_buf;
    uVar3 = param_2->rowbytes;
    pbVar16 = pbVar2 + uVar3;
    switch((uint)bVar20) {
    case 1:
      if (0 < (longlong)uVar3) {
        if (*pbVar16 >> (bVar14 & 7) != 0) {
          param_1->num_palette_max = 1;
        }
        pbVar16 = pbVar16 + -1;
        if (pbVar2 < pbVar16) {
          if (8 < uVar3) {
            uVar25 = uVar3 - 1 & 0xfffffffffffffff8;
            pbVar16 = pbVar16 + -uVar25;
            lVar19 = 0;
            do {
              uVar1 = *(undefined4 *)(pbVar2 + lVar19 + (uVar3 - 4));
              auVar28._8_8_ = 0;
              auVar28._0_8_ =
                   (ulonglong)
                   CONCAT52((int5)(CONCAT43((int)(CONCAT34((int3)(CONCAT25((short)(((uint7)(byte)((
                                                  uint)uVar1 >> 0x18) << 0x30) >> 0x28),
                                                  CONCAT14((char)((uint)uVar1 >> 0x10),uVar1)) >>
                                                  0x20),uVar1) >> 0x18),
                                            CONCAT12((char)((uint)uVar1 >> 8),(short)uVar1)) >> 0x10
                                  ),(short)uVar1) & 0xffffffff00ff00ff;
              auVar28 = pshuflw(auVar28,auVar28,0x1b);
              sVar12 = auVar28._0_2_;
              bVar4 = 0xff < sVar12;
              cVar8 = (0 < sVar12) * (sVar12 < 0x100) * auVar28[0];
              sVar12 = auVar28._2_2_;
              bVar5 = 0xff < sVar12;
              cVar9 = (0 < sVar12) * (sVar12 < 0x100) * auVar28[2];
              sVar12 = auVar28._4_2_;
              bVar6 = 0xff < sVar12;
              cVar10 = (0 < sVar12) * (sVar12 < 0x100) * auVar28[4];
              sVar12 = auVar28._6_2_;
              bVar7 = 0xff < sVar12;
              cVar11 = (0 < sVar12) * (sVar12 < 0x100) * auVar28[6];
              auVar29[0] = -((bool)cVar8 == bVar4);
              auVar29[1] = -((bool)cVar8 == bVar4);
              auVar29[2] = -((bool)cVar8 == bVar4);
              auVar29[3] = -((bool)cVar8 == bVar4);
              auVar29[4] = -((bool)cVar9 == bVar5);
              auVar29[5] = -((bool)cVar9 == bVar5);
              auVar29[6] = -((bool)cVar9 == bVar5);
              auVar29[7] = -((bool)cVar9 == bVar5);
              auVar29[8] = -((bool)cVar10 == bVar6);
              auVar29[9] = -((bool)cVar10 == bVar6);
              auVar29[10] = -((bool)cVar10 == bVar6);
              auVar29[0xb] = -((bool)cVar10 == bVar6);
              auVar29[0xc] = -((bool)cVar11 == bVar7);
              auVar29[0xd] = -((bool)cVar11 == bVar7);
              auVar29[0xe] = -((bool)cVar11 == bVar7);
              auVar29[0xf] = -((bool)cVar11 == bVar7);
              uVar27 = movmskps(unaff_EDI,auVar29);
              unaff_EDI = uVar27 ^ 0xf;
              if ((((unaff_EDI & 1) == 0) && ((unaff_EDI & 2) == 0)) &&
                 (((unaff_EDI & 4) == 0 &&
                  (bVar20 = (byte)unaff_EDI >> 3, unaff_EDI = CONCAT31((int3)(uVar27 >> 8),bVar20),
                  bVar20 == 0)))) {
                uVar1 = *(undefined4 *)(pbVar2 + lVar19 + (uVar3 - 8));
                auVar30._8_8_ = 0;
                auVar30._0_8_ =
                     (ulonglong)
                     CONCAT52((int5)(CONCAT43((int)(CONCAT34((int3)(CONCAT25((short)(((uint7)(byte)(
                                                  (uint)uVar1 >> 0x18) << 0x30) >> 0x28),
                                                  CONCAT14((char)((uint)uVar1 >> 0x10),uVar1)) >>
                                                  0x20),uVar1) >> 0x18),
                                              CONCAT12((char)((uint)uVar1 >> 8),(short)uVar1)) >>
                                    0x10),(short)uVar1) & 0xffffffff00ff00ff;
                auVar28 = pshuflw(auVar30,auVar30,0x1b);
                sVar12 = auVar28._0_2_;
                bVar4 = 0xff < sVar12;
                cVar8 = (0 < sVar12) * (sVar12 < 0x100) * auVar28[0];
                sVar12 = auVar28._2_2_;
                bVar5 = 0xff < sVar12;
                cVar9 = (0 < sVar12) * (sVar12 < 0x100) * auVar28[2];
                sVar12 = auVar28._4_2_;
                bVar6 = 0xff < sVar12;
                cVar10 = (0 < sVar12) * (sVar12 < 0x100) * auVar28[4];
                sVar12 = auVar28._6_2_;
                bVar7 = 0xff < sVar12;
                cVar11 = (0 < sVar12) * (sVar12 < 0x100) * auVar28[6];
                auVar31[0] = -((bool)cVar8 == bVar4);
                auVar31[1] = -((bool)cVar8 == bVar4);
                auVar31[2] = -((bool)cVar8 == bVar4);
                auVar31[3] = -((bool)cVar8 == bVar4);
                auVar31[4] = -((bool)cVar9 == bVar5);
                auVar31[5] = -((bool)cVar9 == bVar5);
                auVar31[6] = -((bool)cVar9 == bVar5);
                auVar31[7] = -((bool)cVar9 == bVar5);
                auVar31[8] = -((bool)cVar10 == bVar6);
                auVar31[9] = -((bool)cVar10 == bVar6);
                auVar31[10] = -((bool)cVar10 == bVar6);
                auVar31[0xb] = -((bool)cVar10 == bVar6);
                auVar31[0xc] = -((bool)cVar11 == bVar7);
                auVar31[0xd] = -((bool)cVar11 == bVar7);
                auVar31[0xe] = -((bool)cVar11 == bVar7);
                auVar31[0xf] = -((bool)cVar11 == bVar7);
                uVar27 = movmskps(unaff_EDI,auVar31);
                unaff_EDI = uVar27 ^ 0xf;
                if (((((unaff_EDI & 1) != 0) || ((unaff_EDI & 2) != 0)) || ((unaff_EDI & 4) != 0))
                   || (bVar20 = (byte)unaff_EDI >> 3,
                      unaff_EDI = CONCAT31((int3)(uVar27 >> 8),bVar20), bVar20 != 0))
                goto LAB_140dc5b90;
              }
              else {
LAB_140dc5b90:
                param_1->num_palette_max = 1;
              }
              lVar19 = lVar19 + -8;
            } while (-lVar19 != uVar25);
            if (uVar3 - 1 == uVar25) {
              return;
            }
          }
          do {
            if (*pbVar16 != 0) {
              param_1->num_palette_max = 1;
            }
            pbVar16 = pbVar16 + -1;
          } while (pbVar2 < pbVar16);
        }
      }
      break;
    case 2:
      if (0 < (longlong)uVar3) {
        bVar20 = *pbVar16 >> (bVar14 & 7);
        uVar27 = param_1->num_palette_max;
        uVar23 = bVar20 & 3;
        uVar21 = uVar27;
        if ((int)uVar27 < (int)uVar23) {
          uVar21 = uVar23;
        }
        uVar26 = bVar20 >> 2 & 3;
        uVar18 = uVar21;
        if (uVar21 < uVar26) {
          uVar18 = uVar26;
        }
        uVar22 = bVar20 >> 4 & 3;
        uVar17 = uVar18;
        if (uVar18 < uVar22) {
          uVar17 = uVar22;
        }
        uVar24 = (uint)(bVar20 >> 6);
        uVar13 = uVar17;
        if (uVar17 < uVar24) {
          uVar13 = uVar24;
        }
        if (((((int)uVar27 < (int)uVar23) || (uVar21 < uVar26)) || (uVar18 < uVar22)) ||
           (uVar17 < uVar24)) {
          param_1->num_palette_max = uVar13;
        }
        while (pbVar16 = pbVar16 + -1, pbVar2 < pbVar16) {
          bVar20 = *pbVar16;
          uVar21 = bVar20 & 3;
          uVar27 = uVar21;
          if ((int)uVar21 <= (int)uVar13) {
            uVar27 = uVar13;
          }
          uVar18 = bVar20 >> 2 & 3;
          uVar23 = uVar18;
          if (uVar18 <= uVar27) {
            uVar23 = uVar27;
          }
          uVar26 = bVar20 >> 4 & 3;
          if (uVar26 <= uVar23) {
            uVar24 = (uint)(bVar20 >> 6);
            uVar22 = (uint)(bVar20 >> 6);
            uVar17 = uVar23;
            if (uVar22 <= uVar23) goto LAB_140dc5dce;
LAB_140dc5daa:
            if (uVar21 <= uVar13) goto LAB_140dc5dda;
            goto LAB_140dc5d50;
          }
          uVar24 = (uint)(bVar20 >> 6);
          uVar22 = (uint)(bVar20 >> 6);
          uVar17 = uVar26;
          if (uVar26 < uVar22) goto LAB_140dc5daa;
LAB_140dc5dce:
          uVar22 = uVar17;
          uVar17 = uVar22;
          if (uVar13 < uVar21) goto LAB_140dc5d50;
LAB_140dc5dda:
          if (((uVar27 < uVar18) || (uVar23 < uVar26)) || (uVar13 = uVar22, uVar17 < uVar24)) {
LAB_140dc5d50:
            param_1->num_palette_max = uVar22;
            uVar13 = uVar22;
          }
        }
      }
      break;
    case 4:
      if (0 < (longlong)uVar3) {
        bVar20 = *pbVar16 >> (bVar14 & 7);
        uVar27 = param_1->num_palette_max;
        uVar23 = bVar20 & 0xf;
        uVar21 = uVar23;
        if ((int)uVar23 <= (int)uVar27) {
          uVar21 = uVar27;
        }
        uVar26 = (uint)(bVar20 >> 4);
        uVar18 = uVar26;
        if (uVar26 <= uVar21) {
          uVar18 = uVar21;
        }
        if ((int)uVar27 < (int)uVar23 || uVar21 < uVar26) {
          param_1->num_palette_max = uVar18;
        }
        pbVar15 = pbVar16 + -1;
        if (pbVar2 < pbVar15) {
          if ((uVar3 & 1) == 0) {
            uVar21 = *pbVar15 & 0xf;
            uVar27 = uVar18;
            if ((int)uVar18 < (int)uVar21) {
              uVar27 = uVar21;
            }
            bVar20 = *pbVar15 >> 4;
            uVar23 = uVar27;
            if (uVar27 < bVar20) {
              uVar23 = (uint)bVar20;
            }
            if ((uVar18 < uVar21) || (uVar27 < bVar20)) {
              param_1->num_palette_max = uVar23;
            }
            pbVar15 = pbVar16 + -2;
            uVar18 = uVar23;
          }
          if (uVar3 != 2) {
            do {
              bVar20 = *pbVar15;
              uVar27 = bVar20 & 0xf;
              if ((int)uVar18 < (int)uVar27) {
                uVar23 = (uint)(bVar20 >> 4);
                uVar21 = uVar27;
                if (uVar27 < uVar23) goto LAB_140dc5e73;
LAB_140dc5e8f:
                uVar26 = uVar21;
                if (uVar27 <= uVar18) goto LAB_140dc5e96;
LAB_140dc5e9b:
                param_1->num_palette_max = uVar26;
              }
              else {
                uVar23 = (uint)(bVar20 >> 4);
                uVar21 = uVar18;
                if (uVar23 <= uVar18) goto LAB_140dc5e8f;
LAB_140dc5e73:
                uVar26 = uVar23;
                if (uVar18 < uVar27) goto LAB_140dc5e9b;
LAB_140dc5e96:
                if (uVar21 < uVar23) goto LAB_140dc5e9b;
              }
              bVar20 = pbVar15[-1];
              uVar27 = bVar20 & 0xf;
              if ((int)uVar26 < (int)uVar27) {
                uVar23 = (uint)(bVar20 >> 4);
                uVar21 = uVar27;
                if (uVar27 < uVar23) goto LAB_140dc5ec1;
LAB_140dc5ede:
                uVar18 = uVar21;
                if (uVar27 <= uVar26) goto LAB_140dc5eea;
LAB_140dc5e40:
                param_1->num_palette_max = uVar18;
              }
              else {
                uVar23 = (uint)(bVar20 >> 4);
                uVar21 = uVar26;
                if (uVar23 <= uVar26) goto LAB_140dc5ede;
LAB_140dc5ec1:
                uVar18 = uVar23;
                if (uVar26 < uVar27) goto LAB_140dc5e40;
LAB_140dc5eea:
                if (uVar21 < uVar23) goto LAB_140dc5e40;
              }
              pbVar15 = pbVar15 + -2;
            } while (pbVar2 < pbVar15);
          }
        }
      }
      break;
    case 8:
      if (0 < (longlong)uVar3) {
        uVar27 = param_1->num_palette_max;
        do {
          if ((int)uVar27 < (int)(uint)*pbVar16) {
            uVar27 = (uint)*pbVar16;
            param_1->num_palette_max = uVar27;
          }
          pbVar16 = pbVar16 + -1;
        } while (pbVar2 < pbVar16);
      }
    }
  }
  return;
}

// png_set_user_transform_info @ 140dc5f40

void __cdecl
png_set_user_transform_info(png_struct_def_conflict *param_1,void *param_2,int param_3,int param_4)

{
  if (param_1 != (png_struct_def_conflict *)0x0) {
    if (((param_1->mode & 0x8000) != 0) && ((param_1->flags & 0x40) != 0)) {
      png_app_error(param_1,"info change after png_start_read_image or png_read_update_info");
      return;
    }
    param_1->user_transform_ptr = param_2;
    param_1->user_transform_depth = (uchar)param_3;
    param_1->user_transform_channels = (uchar)param_4;
  }
  return;
}

// png_get_user_transform_ptr @ 140dc5f80

void * __cdecl png_get_user_transform_ptr(png_struct_def_conflict *param_1)

{
  if (param_1 != (png_struct_def_conflict *)0x0) {
    return param_1->user_transform_ptr;
  }
  return (void *)0x0;
}

// png_get_current_row_number @ 140dc5fa0

uint __cdecl png_get_current_row_number(png_struct_def_conflict *param_1)

{
  if (param_1 != (png_struct_def_conflict *)0x0) {
    return param_1->row_number;
  }
  return 0xffffffff;
}

// png_get_current_pass_number @ 140dc5fc0

uchar __cdecl png_get_current_pass_number(png_struct_def_conflict *param_1)

{
  if (param_1 != (png_struct_def_conflict *)0x0) {
    return param_1->pass;
  }
  return '\b';
}

