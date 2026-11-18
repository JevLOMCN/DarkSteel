// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: libPNG
// Functions: 52

// png_get_uint_31 @ 140dd1f30

uint __cdecl png_get_uint_31(png_struct_def_conflict *param_1,uchar *param_2)

{
  if (-1 < (int)((uint)*param_2 << 0x18)) {
    return (uint)param_2[3] | (uint)param_2[1] << 0x10 | (uint)param_2[2] << 8 |
           (uint)*param_2 << 0x18;
  }
                    /* WARNING: Subroutine does not return */
  png_error(param_1,"PNG unsigned integer out of range");
}

// png_get_uint_32 @ 140dd1f80

uint __cdecl png_get_uint_32(uchar *param_1)

{
  uint uVar1;
  
  uVar1 = *(uint *)param_1;
  return uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
}

// png_get_int_32 @ 140dd1f90

int __cdecl png_get_int_32(uchar *param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar1 = (uint)*param_1 * 0x1000000;
  uVar2 = (uint)param_1[3] | (uint)param_1[1] << 0x10 | (uint)param_1[2] << 8;
  uVar3 = uVar2 | uVar1;
  uVar2 = (int)(uVar1 + uVar2 + -1) >> 0x1f & uVar3;
  if (-1 < (int)uVar1) {
    uVar2 = uVar3;
  }
  return uVar2;
}

// png_get_uint_16 @ 140dd1fd0

ushort __cdecl png_get_uint_16(uchar *param_1)

{
  return *(ushort *)param_1 << 8 | *(ushort *)param_1 >> 8;
}

// png_read_sig @ 140dd1fe0

void __cdecl png_read_sig(png_struct_def_conflict *param_1,png_info_def *param_2)

{
  byte *pbVar1;
  byte bVar2;
  int iVar3;
  ulonglong uVar4;
  
  bVar2 = param_1->sig_bytes;
  uVar4 = (ulonglong)bVar2;
  if (uVar4 < 8) {
    param_1->io_state = 0x11;
    png_read_data(param_1,param_2->signature + uVar4,8 - uVar4);
    param_1->sig_bytes = '\b';
    iVar3 = png_sig_cmp(param_2->signature,uVar4,8 - uVar4);
    if (iVar3 != 0) {
      if (bVar2 < 4) {
        iVar3 = png_sig_cmp(param_2->signature,uVar4,4 - uVar4);
        if (iVar3 != 0) {
                    /* WARNING: Subroutine does not return */
          png_error(param_1,"Not a PNG file");
        }
      }
                    /* WARNING: Subroutine does not return */
      png_error(param_1,"PNG file corrupted by ASCII conversion");
    }
    if (bVar2 < 3) {
      pbVar1 = (byte *)((longlong)&param_1->mode + 1);
      *pbVar1 = *pbVar1 | 0x10;
    }
  }
  return;
}

// png_read_chunk_header @ 140dd20a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

uint __cdecl png_read_chunk_header(png_struct_def_conflict *param_1)

{
  code *pcVar1;
  uint uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  uint uVar5;
  longlong lVar6;
  ulonglong uVar7;
  longlong lVar8;
  ulonglong uVar9;
  undefined1 auStack_68 [40];
  byte local_40;
  byte local_3f;
  byte local_3e;
  byte local_3d;
  uint local_3c;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_68;
  param_1->io_state = 0x21;
  png_read_data(param_1,&local_40,8);
  if ((int)((uint)local_40 << 0x18) < 0) {
                    /* WARNING: Subroutine does not return */
    png_error(param_1,"PNG unsigned integer out of range");
  }
  param_1->chunk_name =
       local_3c >> 0x18 | (local_3c & 0xff0000) >> 8 | (local_3c & 0xff00) << 8 | local_3c << 0x18;
  png_reset_crc(param_1);
  png_calculate_crc(param_1,(uchar *)&local_3c,4);
  uVar2 = param_1->chunk_name;
  if (((((0xffffffc5 < (uVar2 & 0xff) - 0x7b) && (5 < (uVar2 & 0xff) - 0x5b)) &&
       (uVar5 = uVar2 >> 8 & 0xff, 0xffffffc5 < uVar5 - 0x7b)) &&
      ((5 < uVar5 - 0x5b && (uVar5 = uVar2 >> 0x10 & 0xff, 0xffffffc5 < uVar5 - 0x7b)))) &&
     ((5 < uVar5 - 0x5b && ((0xffffffc5 < (uVar2 >> 0x18) - 0x7b && (5 < (uVar2 >> 0x18) - 0x5b)))))
     ) {
    uVar5 = (uint)local_3e << 8 | (uint)local_3f << 0x10 | (uint)local_3d | (uint)local_40 << 0x18;
    uVar7 = 0x7fffffff;
    if (param_1->user_chunk_malloc_max - 1 < 0x7ffffffe) {
      uVar7 = param_1->user_chunk_malloc_max;
    }
    if (uVar2 == 0x49444154) {
      lVar6 = (ulonglong)param_1->channels * (ulonglong)param_1->width << (8 < param_1->bit_depth);
      lVar8 = lVar6 + 6;
      if (param_1->interlaced == '\0') {
        lVar8 = lVar6;
      }
      uVar9 = lVar8 + 1;
      if (uVar9 >> 0x20 == 0) {
        uVar2 = (uint)(0xffffffff / (uVar9 & 0xffffffff));
      }
      else {
        uVar2 = 0;
      }
      uVar4 = 0x7fffffff;
      if (param_1->height <= uVar2) {
        uVar4 = param_1->height * uVar9;
      }
      uVar3 = 0x7f36;
      if (uVar9 < 0x7f36) {
        uVar3 = uVar9;
      }
      if (uVar4 >> 0x20 == 0) {
        uVar3 = (uVar4 & 0xffffffff) / (uVar3 & 0xffffffff);
      }
      else {
        uVar3 = uVar4 / uVar3;
      }
      uVar4 = uVar3 * 5 + uVar4 + 0xb;
      uVar9 = 0x7fffffff;
      if (uVar4 < 0x7fffffff) {
        uVar9 = uVar4;
      }
      if (uVar7 <= uVar9) {
        uVar7 = uVar9;
      }
    }
    if (uVar7 < uVar5) {
      png_benign_error(param_1,"chunk data is too large");
    }
    param_1->io_state = 0x41;
    if ((local_38 ^ (ulonglong)auStack_68) == __security_cookie.value) {
      return uVar5;
    }
    pcVar1 = (code *)swi(3);
    uVar2 = (*pcVar1)();
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  png_chunk_error(param_1,"invalid chunk type");
}

// png_check_chunk_name @ 140dd22f0

void __cdecl png_check_chunk_name(png_struct_def_conflict *param_1,uint param_2)

{
  uint uVar1;
  byte bVar2;
  
  if (((((0xffffffc5 < (param_2 & 0xff) - 0x7b) && (5 < (param_2 & 0xff) - 0x5b)) &&
       (bVar2 = (byte)(param_2 >> 8), 0xffffffc5 < bVar2 - 0x7b)) &&
      ((5 < bVar2 - 0x5b && (uVar1 = param_2 >> 0x10 & 0xff, 0xffffffc5 < uVar1 - 0x7b)))) &&
     ((5 < uVar1 - 0x5b &&
      ((0xffffffc5 < (param_2 >> 0x18) - 0x7b && (5 < (param_2 >> 0x18) - 0x5b)))))) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  png_chunk_error(param_1,"invalid chunk type");
}

// png_check_chunk_length @ 140dd2370

void __cdecl png_check_chunk_length(png_struct_def_conflict *param_1,uint param_2)

{
  uint uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  longlong lVar4;
  ulonglong uVar5;
  longlong lVar6;
  ulonglong uVar7;
  
  uVar5 = 0x7fffffff;
  if (param_1->user_chunk_malloc_max - 1 < 0x7ffffffe) {
    uVar5 = param_1->user_chunk_malloc_max;
  }
  if (param_1->chunk_name == 0x49444154) {
    lVar4 = (ulonglong)param_1->channels * (ulonglong)param_1->width << (8 < param_1->bit_depth);
    lVar6 = lVar4 + 6;
    if (param_1->interlaced == '\0') {
      lVar6 = lVar4;
    }
    uVar7 = lVar6 + 1;
    if (uVar7 >> 0x20 == 0) {
      uVar1 = (uint)(0xffffffff / (uVar7 & 0xffffffff));
    }
    else {
      uVar1 = 0;
    }
    uVar3 = 0x7fffffff;
    if (param_1->height <= uVar1) {
      uVar3 = param_1->height * uVar7;
    }
    uVar2 = 0x7f36;
    if (uVar7 < 0x7f36) {
      uVar2 = uVar7;
    }
    if (uVar3 >> 0x20 == 0) {
      uVar2 = (uVar3 & 0xffffffff) / (uVar2 & 0xffffffff);
    }
    else {
      uVar2 = uVar3 / uVar2;
    }
    uVar3 = uVar2 * 5 + uVar3 + 0xb;
    uVar7 = 0x7fffffff;
    if (uVar3 < 0x7fffffff) {
      uVar7 = uVar3;
    }
    if (uVar5 <= uVar7) {
      uVar5 = uVar7;
    }
  }
  if (uVar5 < param_2) {
    png_benign_error(param_1,"chunk data is too large");
    return;
  }
  return;
}

// png_crc_read @ 140dd2480

void __cdecl png_crc_read(png_struct_def_conflict *param_1,uchar *param_2,uint param_3)

{
  if (param_1 != (png_struct_def_conflict *)0x0) {
    png_read_data(param_1,param_2,(ulonglong)param_3);
    png_calculate_crc(param_1,param_2,(ulonglong)param_3);
    return;
  }
  return;
}

// png_crc_finish @ 140dd24d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

int __cdecl png_crc_finish(png_struct_def_conflict *param_1,uint param_2)

{
  uint uVar1;
  code *pcVar2;
  int iVar3;
  uint uVar4;
  ulong64 uVar5;
  undefined1 auStack_448 [32];
  uint local_428 [256];
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_448;
  if (param_2 != 0) {
    if (param_1 == (png_struct_def_conflict *)0x0) {
      uVar4 = param_2 + 0x400;
      do {
        uVar4 = uVar4 - 0x400;
      } while (0x400 < uVar4);
    }
    else {
      do {
        uVar5 = 0x400;
        if (param_2 < 0x400) {
          uVar5 = (ulong64)param_2;
        }
        png_read_data(param_1,(uchar *)local_428,uVar5);
        png_calculate_crc(param_1,(uchar *)local_428,uVar5);
        param_2 = param_2 - (int)uVar5;
      } while (param_2 != 0);
    }
  }
  uVar4 = param_1->chunk_name;
  uVar1 = param_1->flags;
  param_1->io_state = 0x81;
  png_read_data(param_1,(uchar *)local_428,4);
  if ((uVar4 & 0x20000000) == 0) {
    if ((uVar1 & 0x800) == 0) {
LAB_140dd25a5:
      iVar3 = 0;
      if ((local_428[0] >> 0x18 | (local_428[0] & 0xff0000) >> 8 | (local_428[0] & 0xff00) << 8 |
          local_428[0] << 0x18) != param_1->crc) {
        if ((param_1->chunk_name & 0x20000000) == 0) {
          if ((param_1->flags & 0x400) == 0) {
LAB_140dd260d:
                    /* WARNING: Subroutine does not return */
            png_chunk_error(param_1,"CRC error");
          }
        }
        else if ((param_1->flags & 0x200) != 0) goto LAB_140dd260d;
        png_chunk_warning(param_1,"CRC error");
        iVar3 = 1;
      }
      goto LAB_140dd25df;
    }
  }
  else if ((~uVar1 & 0x300) != 0) goto LAB_140dd25a5;
  iVar3 = 0;
LAB_140dd25df:
  if ((local_28 ^ (ulonglong)auStack_448) != __security_cookie.value) {
    pcVar2 = (code *)swi(3);
    iVar3 = (*pcVar2)();
    return iVar3;
  }
  return iVar3;
}

// png_crc_error @ 140dd2630

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

int __cdecl png_crc_error(png_struct_def_conflict *param_1)

{
  uint uVar1;
  code *pcVar2;
  uint uVar3;
  int iVar4;
  undefined1 auStack_48 [36];
  uint local_24;
  ulonglong local_20;
  
  local_20 = __security_cookie.value ^ (ulonglong)auStack_48;
  uVar3 = param_1->chunk_name;
  uVar1 = param_1->flags;
  param_1->io_state = 0x81;
  png_read_data(param_1,(uchar *)&local_24,4);
  if ((uVar3 & 0x20000000) == 0) {
    if ((uVar1 & 0x800) == 0) {
LAB_140dd26a2:
      uVar3 = (uint)((local_24 >> 0x18 | (local_24 & 0xff0000) >> 8 | (local_24 & 0xff00) << 8 |
                     local_24 << 0x18) != param_1->crc);
      goto joined_r0x000140dd26c2;
    }
  }
  else if ((~uVar1 & 0x300) != 0) goto LAB_140dd26a2;
  uVar3 = 0;
joined_r0x000140dd26c2:
  if ((local_20 ^ (ulonglong)auStack_48) != __security_cookie.value) {
    pcVar2 = (code *)swi(3);
    iVar4 = (*pcVar2)();
    return iVar4;
  }
  return uVar3;
}

// png_zlib_inflate @ 140dd26e0

int __cdecl png_zlib_inflate(png_struct_def_conflict *param_1,int param_2)

{
  int iVar1;
  
  if ((param_1->zstream_start != '\0') && ((param_1->zstream).avail_in != 0)) {
    if ((char)*(param_1->zstream).next_in < '\0') {
      (param_1->zstream).msg = "invalid window size (libpng)";
      return -3;
    }
    param_1->zstream_start = '\0';
  }
  iVar1 = inflate(&param_1->zstream);
  return iVar1;
}

// png_handle_IHDR @ 140dd2730

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl png_handle_IHDR(png_struct_def_conflict *param_1,png_info_def *param_2,uint param_3)

{
  code *pcVar1;
  uchar uVar2;
  byte bVar3;
  ulonglong uVar4;
  uint uVar5;
  uint uVar6;
  undefined1 auStackY_88 [32];
  byte local_35;
  byte local_34;
  byte local_33;
  byte local_32;
  byte local_31;
  byte local_30;
  byte local_2f;
  byte local_2e;
  byte local_2d;
  byte local_2c;
  byte local_2b;
  byte local_2a;
  byte local_29;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_88;
  if ((param_1->mode & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    png_chunk_error(param_1,"out of place");
  }
  if (param_3 != 0xd) {
                    /* WARNING: Subroutine does not return */
    png_chunk_error(param_1,"invalid");
  }
  param_1->mode = param_1->mode | 1;
  png_read_data(param_1,&local_35,0xd);
  png_calculate_crc(param_1,&local_35,0xd);
  png_crc_finish(param_1,0);
  if (((int)((uint)local_35 << 0x18) < 0) || ((int)((uint)local_31 << 0x18) < 0)) {
                    /* WARNING: Subroutine does not return */
    png_error(param_1,"PNG unsigned integer out of range");
  }
  uVar5 = (uint)local_32 | (uint)local_34 << 0x10 | (uint)local_33 << 8 | (uint)local_35 << 0x18;
  uVar6 = (uint)local_2e | (uint)local_30 << 0x10 | (uint)local_2f << 8 | (uint)local_31 << 0x18;
  param_1->width = uVar5;
  param_1->height = uVar6;
  param_1->bit_depth = local_2d;
  param_1->interlaced = local_29;
  param_1->color_type = local_2c;
  param_1->filter_type = local_2a;
  uVar2 = '\x01';
  if (local_2c < 7) {
    uVar2 = (uchar)(0x4010201030101 >> (local_2c * '\b' & 0x3f));
  }
  param_1->compression_type = local_2b;
  param_1->channels = uVar2;
  bVar3 = uVar2 * local_2d;
  param_1->pixel_depth = bVar3;
  if (bVar3 < 8) {
    uVar4 = (ulonglong)bVar3 * (ulonglong)uVar5 + 7 >> 3;
  }
  else {
    uVar4 = (ulonglong)(bVar3 >> 3) * (ulonglong)uVar5;
  }
  param_1->rowbytes = uVar4;
  png_set_IHDR(param_1,param_2,uVar5,uVar6,(uint)local_2d,(uint)local_2c,(uint)local_29,
               (uint)local_2b,(uint)local_2a);
  if ((local_28 ^ (ulonglong)auStackY_88) == __security_cookie.value) {
    return;
  }
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

// png_handle_PLTE @ 140dd2920

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl png_handle_PLTE(png_struct_def_conflict *param_1,png_info_def *param_2,uint param_3)

{
  code *pcVar1;
  uint uVar2;
  char *pcVar3;
  uint uVar4;
  png_color_struct *ppVar5;
  undefined1 auStack_378 [45];
  uchar local_34b;
  uchar local_34a;
  uchar local_349;
  png_color_struct local_348 [258];
  ulonglong local_40;
  
  local_40 = __security_cookie.value ^ (ulonglong)auStack_378;
  uVar2 = param_1->mode;
  if ((uVar2 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
    png_chunk_error(param_1,"missing IHDR");
  }
  if ((uVar2 & 2) != 0) {
                    /* WARNING: Subroutine does not return */
    png_chunk_error(param_1,"duplicate");
  }
  if ((uVar2 & 4) != 0) {
    png_crc_finish(param_1,param_3);
    pcVar3 = "out of place";
LAB_140dd299a:
    png_chunk_benign_error(param_1,pcVar3);
    return;
  }
  param_1->mode = uVar2 | 2;
  if ((param_1->color_type & 2) == 0) {
    png_crc_finish(param_1,param_3);
    pcVar3 = "ignored in grayscale PNG";
    goto LAB_140dd299a;
  }
  if ((0x300 < param_3) || (param_3 % 3 != 0)) {
    png_crc_finish(param_1,param_3);
    if (param_1->color_type == '\x03') {
                    /* WARNING: Subroutine does not return */
      png_chunk_error(param_1,"invalid");
    }
    pcVar3 = "invalid";
    goto LAB_140dd299a;
  }
  uVar2 = (param_3 & 0xffff) / 3;
  uVar4 = 0x100;
  if (param_1->color_type == 3) {
    uVar4 = 1 << (param_1->bit_depth & 0x1f);
  }
  if ((int)uVar4 < (int)uVar2) {
    uVar2 = uVar4;
  }
  if (0 < (int)uVar2) {
    ppVar5 = local_348;
    uVar4 = uVar2;
    do {
      png_read_data(param_1,&local_34b,3);
      png_calculate_crc(param_1,&local_34b,3);
      ppVar5->red = local_34b;
      ppVar5->green = local_34a;
      ppVar5->blue = local_349;
      ppVar5 = ppVar5 + 1;
      uVar4 = uVar4 - 1;
    } while (uVar4 != 0);
  }
  png_crc_finish(param_1,param_3 + uVar2 * -3);
  png_set_PLTE(param_1,param_2,local_348,uVar2);
  if (param_1->num_trans == 0) {
    if (param_2 != (png_info_def *)0x0) {
      if ((param_2->valid & 0x10) != 0) {
        param_1->num_trans = 0;
        goto LAB_140dd2b3c;
      }
      if ((param_2->valid & 0x40) != 0) goto LAB_140dd2b5c;
LAB_140dd2b07:
      if ((param_2->valid & 0x20) != 0) goto LAB_140dd2b74;
    }
LAB_140dd2b0d:
    if ((local_40 ^ (ulonglong)auStack_378) == __security_cookie.value) {
      return;
    }
  }
  else {
    param_1->num_trans = 0;
    if (param_2 == (png_info_def *)0x0) {
      pcVar3 = "tRNS must be after";
    }
    else {
LAB_140dd2b3c:
      param_2->num_trans = 0;
      png_chunk_benign_error(param_1,"tRNS must be after");
      if ((param_2->valid & 0x40) == 0) goto LAB_140dd2b07;
LAB_140dd2b5c:
      png_chunk_benign_error(param_1,"hIST must be after");
      if ((param_2->valid & 0x20) == 0) goto LAB_140dd2b0d;
LAB_140dd2b74:
      pcVar3 = "bKGD must be after";
    }
    png_chunk_benign_error(param_1,pcVar3);
    if ((local_40 ^ (ulonglong)auStack_378) == __security_cookie.value) {
      return;
    }
  }
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

// png_handle_IEND @ 140dd2be0

void __cdecl png_handle_IEND(png_struct_def_conflict *param_1,png_info_def *param_2,uint param_3)

{
  if ((~param_1->mode & 5) != 0) {
                    /* WARNING: Subroutine does not return */
    png_chunk_error(param_1,"out of place");
  }
  param_1->mode = param_1->mode | 0x18;
  png_crc_finish(param_1,param_3);
  if (param_3 != 0) {
    png_chunk_benign_error(param_1,"invalid");
    return;
  }
  return;
}

// png_handle_gAMA @ 140dd2c50

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl png_handle_gAMA(png_struct_def_conflict *param_1,png_info_def *param_2,uint param_3)

{
  code *pcVar1;
  int iVar2;
  char *pcVar3;
  uint uVar4;
  undefined1 auStack_48 [36];
  byte local_24;
  byte local_23;
  byte local_22;
  byte local_21;
  ulonglong local_20;
  
  local_20 = __security_cookie.value ^ (ulonglong)auStack_48;
  if ((param_1->mode & 1) == 0) {
                    /* WARNING: Subroutine does not return */
    png_chunk_error(param_1,"missing IHDR");
  }
  if ((param_1->mode & 6) == 0) {
    if (param_3 == 4) {
      png_read_data(param_1,&local_24,4);
      png_calculate_crc(param_1,&local_24,4);
      iVar2 = png_crc_finish(param_1,0);
      if (iVar2 == 0) {
        if ((int)((uint)local_24 << 0x18) < 0) {
          uVar4 = 0xffffffff;
        }
        else {
          uVar4 = (uint)local_21 | (uint)local_23 << 0x10 | (uint)local_22 << 8 |
                  (uint)local_24 << 0x18;
        }
        png_colorspace_set_gamma(param_1,&param_1->colorspace,uVar4);
        png_colorspace_sync(param_1,param_2);
        if ((local_20 ^ (ulonglong)auStack_48) != __security_cookie.value) goto LAB_140dd2d7b;
      }
      else if ((local_20 ^ (ulonglong)auStack_48) != __security_cookie.value) {
LAB_140dd2d7b:
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      return;
    }
    png_crc_finish(param_1,param_3);
    pcVar3 = "invalid";
  }
  else {
    png_crc_finish(param_1,param_3);
    pcVar3 = "out of place";
  }
  png_chunk_benign_error(param_1,pcVar3);
  return;
}

// png_handle_sBIT @ 140dd2da0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl png_handle_sBIT(png_struct_def_conflict *param_1,png_info_def *param_2,uint param_3)

{
  uchar uVar1;
  code *pcVar2;
  uint uVar3;
  int iVar4;
  byte bVar5;
  char *pcVar6;
  uchar *puVar7;
  uchar uVar8;
  uchar uVar9;
  undefined1 auStack_68 [44];
  undefined4 local_3c;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_68;
  if ((param_1->mode & 1) == 0) {
                    /* WARNING: Subroutine does not return */
    png_chunk_error(param_1,"missing IHDR");
  }
  if ((param_1->mode & 6) != 0) {
    png_crc_finish(param_1,param_3);
    pcVar6 = "out of place";
LAB_140dd2ddf:
    png_chunk_benign_error(param_1,pcVar6);
    return;
  }
  if ((param_2 != (png_info_def *)0x0) && ((param_2->valid & 2) != 0)) {
    png_crc_finish(param_1,param_3);
    pcVar6 = "duplicate";
    goto LAB_140dd2ddf;
  }
  if (param_1->color_type == '\x03') {
    bVar5 = 8;
    uVar3 = 3;
  }
  else {
    uVar3 = (uint)param_1->channels;
    bVar5 = param_1->bit_depth;
  }
  if ((4 < param_3) || (uVar3 != param_3)) {
    png_chunk_benign_error(param_1,"invalid");
    png_crc_finish(param_1,param_3);
    return;
  }
  local_3c = (uint)bVar5 * 0x1010101;
  png_read_data(param_1,(uchar *)&local_3c,(ulonglong)param_3);
  png_calculate_crc(param_1,(uchar *)&local_3c,(ulonglong)param_3);
  iVar4 = png_crc_finish(param_1,0);
  if (iVar4 == 0) {
    if ((param_3 != 0) &&
       ((bVar5 <= (byte)((uchar)local_3c - 1) ||
        ((param_3 != 1 &&
         ((bVar5 <= (byte)(local_3c._1_1_ - 1) ||
          ((param_3 != 2 &&
           ((bVar5 <= (byte)(local_3c._2_1_ - 1) ||
            ((param_3 != 3 && (bVar5 <= (byte)(local_3c._3_1_ - 1U))))))))))))))) {
      png_chunk_benign_error(param_1,"invalid");
      if ((local_38 ^ (ulonglong)auStack_68) == __security_cookie.value) {
        return;
      }
      goto LAB_140dd2fe5;
    }
    if ((param_1->color_type & 2) == 0) {
      puVar7 = (uchar *)((longlong)&local_3c + 1);
      (param_1->sig_bit).gray = (uchar)local_3c;
      uVar9 = (uchar)local_3c;
      uVar8 = (uchar)local_3c;
    }
    else {
      puVar7 = (uchar *)((longlong)&local_3c + 3);
      uVar9 = local_3c._2_1_;
      uVar8 = local_3c._1_1_;
    }
    uVar1 = *puVar7;
    (param_1->sig_bit).red = (uchar)local_3c;
    (param_1->sig_bit).green = uVar8;
    (param_1->sig_bit).blue = uVar9;
    (param_1->sig_bit).alpha = uVar1;
    png_set_sBIT(param_1,param_2,&param_1->sig_bit);
  }
  if ((local_38 ^ (ulonglong)auStack_68) == __security_cookie.value) {
    return;
  }
LAB_140dd2fe5:
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

// png_handle_cHRM @ 140dd3000

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl png_handle_cHRM(png_struct_def_conflict *param_1,png_info_def *param_2,uint param_3)

{
  ushort uVar1;
  code *pcVar2;
  int iVar3;
  char *pcVar4;
  undefined1 auStack_a8 [32];
  png_xy local_88;
  uint local_68;
  uint local_64;
  uint local_60;
  uint local_5c;
  uint local_58;
  uint local_54;
  uint local_50;
  uint local_4c;
  ulonglong local_40;
  
  local_40 = __security_cookie.value ^ (ulonglong)auStack_a8;
  if ((param_1->mode & 1) == 0) {
                    /* WARNING: Subroutine does not return */
    png_chunk_error(param_1,"missing IHDR");
  }
  if ((param_1->mode & 6) != 0) {
    png_crc_finish(param_1,param_3);
    pcVar4 = "out of place";
LAB_140dd32fa:
    png_chunk_benign_error(param_1,pcVar4);
    return;
  }
  if (param_3 != 0x20) {
    png_crc_finish(param_1,param_3);
    pcVar4 = "invalid";
    goto LAB_140dd32fa;
  }
  png_read_data(param_1,(uchar *)&local_68,0x20);
  png_calculate_crc(param_1,(uchar *)&local_68,0x20);
  iVar3 = png_crc_finish(param_1,0);
  if (iVar3 == 0) {
    local_88.whitey = 0xffffffff;
    local_88.whitex = 0xffffffff;
    if (-1 < (int)(local_68 << 0x18)) {
      local_88.whitex =
           local_68 >> 0x18 | (local_68 >> 8 & 0xff) << 0x10 | (local_68 >> 0x10 & 0xff) << 8 |
           local_68 << 0x18;
    }
    if (-1 < (int)(local_64 << 0x18)) {
      local_88.whitey =
           local_64 >> 0x18 | (local_64 >> 8 & 0xff) << 0x10 | (local_64 >> 0x10 & 0xff) << 8 |
           local_64 << 0x18;
    }
    local_88.redy = 0xffffffff;
    local_88.redx = 0xffffffff;
    if (-1 < (int)(local_60 << 0x18)) {
      local_88.redx =
           local_60 >> 0x18 | (local_60 >> 8 & 0xff) << 0x10 | (local_60 >> 0x10 & 0xff) << 8 |
           local_60 << 0x18;
    }
    if (-1 < (int)(local_5c << 0x18)) {
      local_88.redy =
           local_5c >> 0x18 | (local_5c >> 8 & 0xff) << 0x10 | (local_5c >> 0x10 & 0xff) << 8 |
           local_5c << 0x18;
    }
    local_88.greeny = 0xffffffff;
    local_88.greenx = 0xffffffff;
    if (-1 < (int)(local_58 << 0x18)) {
      local_88.greenx =
           local_58 >> 0x18 | (local_58 >> 8 & 0xff) << 0x10 | (local_58 >> 0x10 & 0xff) << 8 |
           local_58 << 0x18;
    }
    if (-1 < (int)(local_54 << 0x18)) {
      local_88.greeny =
           local_54 >> 0x18 | (local_54 >> 8 & 0xff) << 0x10 | (local_54 >> 0x10 & 0xff) << 8 |
           local_54 << 0x18;
    }
    local_88.bluey = 0xffffffff;
    local_88.bluex = 0xffffffff;
    if (-1 < (int)(local_50 << 0x18)) {
      local_88.bluex =
           local_50 >> 0x18 | (local_50 >> 8 & 0xff) << 0x10 | (local_50 >> 0x10 & 0xff) << 8 |
           local_50 << 0x18;
    }
    if (-1 < (int)(local_4c << 0x18)) {
      local_88.bluey =
           local_4c >> 0x18 | (local_4c >> 8 & 0xff) << 0x10 | (local_4c >> 0x10 & 0xff) << 8 |
           local_4c << 0x18;
    }
    if (((((local_88.whitex == 0xffffffff) || (local_88.whitey == 0xffffffff)) ||
         (local_88.redx == 0xffffffff)) ||
        ((local_88.redy == 0xffffffff || (local_88.greenx == 0xffffffff)))) ||
       ((local_88.greeny == 0xffffffff ||
        ((local_88.bluex == 0xffffffff || (local_88.bluey == 0xffffffff)))))) {
      png_chunk_benign_error(param_1,"invalid values");
    }
    else {
      uVar1 = (param_1->colorspace).flags;
      if (-1 < (short)uVar1) {
        if ((uVar1 & 0x10) == 0) {
          (param_1->colorspace).flags = uVar1 | 0x10;
          png_colorspace_set_chromaticities(param_1,&param_1->colorspace,&local_88,1);
          png_colorspace_sync(param_1,param_2);
          if ((local_40 ^ (ulonglong)auStack_a8) == __security_cookie.value) {
            return;
          }
        }
        else {
          (param_1->colorspace).flags = uVar1 | 0x8000;
          png_colorspace_sync(param_1,param_2);
          png_chunk_benign_error(param_1,"duplicate");
          if ((local_40 ^ (ulonglong)auStack_a8) == __security_cookie.value) {
            return;
          }
        }
        goto LAB_140dd3383;
      }
    }
  }
  if ((local_40 ^ (ulonglong)auStack_a8) == __security_cookie.value) {
    return;
  }
LAB_140dd3383:
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

// png_handle_sRGB @ 140dd33a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl png_handle_sRGB(png_struct_def_conflict *param_1,png_info_def *param_2,uint param_3)

{
  ushort uVar1;
  code *pcVar2;
  int iVar3;
  char *pcVar4;
  undefined1 auStack_48 [39];
  byte local_21;
  ulonglong local_20;
  
  local_20 = __security_cookie.value ^ (ulonglong)auStack_48;
  if ((param_1->mode & 1) == 0) {
                    /* WARNING: Subroutine does not return */
    png_chunk_error(param_1,"missing IHDR");
  }
  if ((param_1->mode & 6) == 0) {
    if (param_3 == 1) {
      png_read_data(param_1,&local_21,1);
      png_calculate_crc(param_1,&local_21,1);
      iVar3 = png_crc_finish(param_1,0);
      if ((iVar3 == 0) && (uVar1 = (param_1->colorspace).flags, -1 < (short)uVar1)) {
        if ((uVar1 & 4) == 0) {
          png_colorspace_set_sRGB(param_1,&param_1->colorspace,(uint)local_21);
          png_colorspace_sync(param_1,param_2);
        }
        else {
          (param_1->colorspace).flags = uVar1 | 0x8000;
          png_colorspace_sync(param_1,param_2);
          png_chunk_benign_error(param_1,"too many profiles");
        }
      }
      if ((local_20 ^ (ulonglong)auStack_48) == __security_cookie.value) {
        return;
      }
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    png_crc_finish(param_1,param_3);
    pcVar4 = "invalid";
  }
  else {
    png_crc_finish(param_1,param_3);
    pcVar4 = "out of place";
  }
  png_chunk_benign_error(param_1,pcVar4);
  return;
}

// png_handle_iCCP @ 140dd34f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl png_handle_iCCP(png_struct_def_conflict *param_1,png_info_def *param_2,uint param_3)

{
  byte *pbVar1;
  png_colorspace *ppVar2;
  ushort uVar3;
  code *pcVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  ulonglong uVar10;
  uchar *_Dst;
  uint uVar11;
  ulonglong uVar12;
  char *pcVar13;
  ulong64 uVar14;
  undefined1 auStackY_588 [32];
  uint in_stack_fffffffffffffaa4;
  int in_stack_fffffffffffffaa8;
  ulonglong local_548;
  uint local_53c;
  uchar local_538 [1024];
  uint local_138 [36];
  uchar local_a8 [96];
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_588;
  local_53c = param_3;
  if ((param_1->mode & 1) == 0) {
                    /* WARNING: Subroutine does not return */
    png_chunk_error(param_1,"missing IHDR");
  }
  if ((param_1->mode & 6) != 0) {
    png_crc_finish(param_1,param_3);
    pcVar13 = "out of place";
LAB_140dd355b:
    png_chunk_benign_error(param_1,pcVar13);
    return;
  }
  if (param_3 < 0xe) {
    png_crc_finish(param_1,param_3);
    pcVar13 = "too short";
    goto LAB_140dd355b;
  }
  uVar3 = (param_1->colorspace).flags;
  if ((short)uVar3 < 0) {
    png_crc_finish(param_1,param_3);
    return;
  }
  if ((uVar3 & 4) != 0) {
    pcVar13 = "too many profiles";
    goto LAB_140dd362e;
  }
  uVar14 = 0x51;
  if (param_3 < 0x51) {
    uVar14 = (ulong64)param_3;
  }
  png_read_data(param_1,local_a8,uVar14);
  png_calculate_crc(param_1,local_a8,uVar14);
  uVar11 = (uint)uVar14;
  local_53c = param_3 - uVar11;
  if (local_53c < 0xb) {
    png_crc_finish(param_1,local_53c);
    pcVar13 = "too short";
LAB_140dd3657:
    png_chunk_benign_error(param_1,pcVar13);
  }
  else {
    ppVar2 = &param_1->colorspace;
    uVar12 = 0x50;
    if (param_3 < 0x50) {
      uVar12 = (ulonglong)param_3;
    }
    uVar10 = 0;
    do {
      if (local_a8[uVar10] == '\0') {
        uVar12 = uVar10 & 0xffffffff;
        break;
      }
      uVar10 = uVar10 + 1;
    } while (uVar12 != uVar10);
    if ((int)uVar12 - 1U < 0x4f) {
      uVar14 = uVar12 + 1;
      pcVar13 = "bad compression method";
      if ((uVar11 <= (uint)uVar14) || (local_a8[uVar12 + 1] != '\0')) goto LAB_140dd362e;
      iVar9 = png_inflate_claim(param_1,0x69434350);
      if (iVar9 != 0) {
        pcVar13 = (param_1->zstream).msg;
        goto LAB_140dd362e;
      }
      local_138[0x1c] = 0;
      local_138[0x1d] = 0;
      local_138[0x1e] = 0;
      local_138[0x1f] = 0;
      local_138[0x18] = 0;
      local_138[0x19] = 0;
      local_138[0x1a] = 0;
      local_138[0x1b] = 0;
      local_138[0x14] = 0;
      local_138[0x15] = 0;
      local_138[0x16] = 0;
      local_138[0x17] = 0;
      local_138[0x10] = 0;
      local_138[0x11] = 0;
      local_138[0x12] = 0;
      local_138[0x13] = 0;
      local_138[0xc] = 0;
      local_138[0xd] = 0;
      local_138[0xe] = 0;
      local_138[0xf] = 0;
      local_138[8] = 0;
      local_138[9] = 0;
      local_138[10] = 0;
      local_138[0xb] = 0;
      local_138[4] = 0;
      local_138[5] = 0;
      local_138[6] = 0;
      local_138[7] = 0;
      local_138[0] = 0;
      local_138[1] = 0;
      local_138[2] = 0;
      local_138[3] = 0;
      local_138[0x20] = 0;
      local_548 = 0x84;
      (param_1->zstream).next_in = local_a8 + uVar12 + 2;
      (param_1->zstream).avail_in = (uVar11 - (int)uVar12) - 2;
      png_inflate_read(param_1,local_538,(uint)&local_53c,local_138,(uchar *)&local_548,
                       (ulong64 *)((ulonglong)in_stack_fffffffffffffaa4 << 0x20),
                       in_stack_fffffffffffffaa8);
      if (local_548 != 0) {
LAB_140dd37b7:
        pcVar13 = (param_1->zstream).msg;
LAB_140dd3956:
        param_1->zowner = 0;
        goto LAB_140dd362e;
      }
      uVar11 = local_138[0] >> 0x18 | (local_138[0] & 0xff0000) >> 8 | (local_138[0] & 0xff00) << 8
               | local_138[0] << 0x18;
      iVar9 = png_icc_check_length(param_1,ppVar2,(char *)local_a8,uVar11);
      if ((iVar9 == 0) ||
         (iVar9 = png_icc_check_header
                            (param_1,ppVar2,(char *)local_a8,uVar11,(uchar *)local_138,
                             (uint)param_1->color_type), uVar8 = local_138[0x20], iVar9 == 0)) {
LAB_140dd3953:
        pcVar13 = (char *)0x0;
        goto LAB_140dd3956;
      }
      uVar5 = local_138[0x20] >> 8;
      uVar6 = local_138[0x20] >> 0x10;
      uVar7 = local_138[0x20] >> 0x18;
      uVar12 = (ulonglong)uVar11;
      _Dst = png_read_buffer(param_1,uVar12,2);
      if (_Dst == (uchar *)0x0) {
        pcVar13 = "out of memory";
        goto LAB_140dd3956;
      }
      memcpy(_Dst,local_138,0x84);
      uVar10 = (ulonglong)
               ((uVar7 | (uVar6 & 0xff) << 8 | (uVar5 & 0xff) << 0x10 | uVar8 << 0x18) * 0xc);
      local_548 = uVar10;
      png_inflate_read(param_1,local_538,(uint)&local_53c,(uint *)(_Dst + 0x84),(uchar *)&local_548,
                       (ulong64 *)((ulonglong)in_stack_fffffffffffffaa4 << 0x20),(int)uVar12);
      if (local_548 != 0) goto LAB_140dd37b7;
      iVar9 = png_icc_check_tag_table(param_1,ppVar2,(char *)local_a8,uVar11,_Dst);
      if (iVar9 == 0) goto LAB_140dd3953;
      local_548 = (uVar12 - uVar10) - 0x84;
      png_inflate_read(param_1,local_538,(uint)&local_53c,(uint *)((longlong)(_Dst + 0x84) + uVar10)
                       ,(uchar *)&local_548,(ulong64 *)CONCAT44(in_stack_fffffffffffffaa4,1),
                       (int)uVar12);
      uVar8 = local_53c;
      if (local_53c == 0) {
        if (local_548 != 0) goto LAB_140dd37b7;
      }
      else {
        if ((param_1->flags & 0x100000) == 0) {
          pcVar13 = "extra compressed data";
          goto LAB_140dd3956;
        }
        if (local_548 != 0) goto LAB_140dd37b7;
        png_chunk_warning(param_1,"extra compressed data");
      }
      png_crc_finish(param_1,uVar8);
      png_icc_set_sRGB(param_1,ppVar2,_Dst,(param_1->zstream).adler);
      if (param_2 == (png_info_def *)0x0) {
LAB_140dd3a28:
        param_1->zowner = 0;
        if ((local_48 ^ (ulonglong)auStackY_588) == __security_cookie.value) {
          return;
        }
        goto LAB_140dd3a4a;
      }
      png_free_data(param_1,param_2,0x10,0);
      pcVar13 = png_malloc_base(param_1,uVar14);
      param_2->iccp_name = pcVar13;
      if (pcVar13 != (char *)0x0) {
        memcpy(pcVar13,local_a8,uVar14);
        param_2->iccp_proflen = uVar11;
        param_2->iccp_profile = _Dst;
        *(byte *)&param_2->free_me = (byte)param_2->free_me | 0x10;
        param_1->read_buffer = (uchar *)0x0;
        pbVar1 = (byte *)((longlong)&param_2->valid + 1);
        *pbVar1 = *pbVar1 | 0x10;
        png_colorspace_sync(param_1,param_2);
        goto LAB_140dd3a28;
      }
      pbVar1 = (byte *)((longlong)&(param_1->colorspace).flags + 1);
      *pbVar1 = *pbVar1 | 0x80;
      png_colorspace_sync(param_1,param_2);
      param_1->zowner = 0;
      pcVar13 = "out of memory";
    }
    else {
      pcVar13 = "bad keyword";
LAB_140dd362e:
      png_crc_finish(param_1,local_53c);
    }
    pbVar1 = (byte *)((longlong)&(param_1->colorspace).flags + 1);
    *pbVar1 = *pbVar1 | 0x80;
    png_colorspace_sync(param_1,param_2);
    if (pcVar13 != (char *)0x0) goto LAB_140dd3657;
  }
  if ((local_48 ^ (ulonglong)auStackY_588) == __security_cookie.value) {
    return;
  }
LAB_140dd3a4a:
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}

// png_inflate_claim @ 140dd3a90

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

int __cdecl png_inflate_claim(png_struct_def_conflict *param_1,uint param_2)

{
  uint uVar1;
  code *pcVar2;
  int iVar3;
  undefined8 uVar4;
  bool bVar5;
  undefined1 auStack_88 [32];
  uint local_68 [18];
  ulonglong local_20;
  
  local_20 = __security_cookie.value ^ (ulonglong)auStack_88;
  uVar1 = param_1->zowner;
  if (uVar1 != 0) {
    local_68[0] = uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
    png_safecat((char *)local_68,0x40,4," using zstream");
    png_chunk_warning(param_1,(char *)local_68);
    param_1->zowner = 0;
  }
  bVar5 = (~param_1->options & 0xc) != 0;
  uVar4 = 0xf;
  if (bVar5) {
    uVar4 = 0;
  }
  param_1->zstream_start = bVar5;
  (param_1->zstream).next_in = (uchar *)0x0;
  (param_1->zstream).avail_in = 0;
  (param_1->zstream).next_out = (uchar *)0x0;
  (param_1->zstream).avail_out = 0;
  if ((param_1->flags & 2) == 0) {
    iVar3 = inflateInit2_(&param_1->zstream,uVar4,"1.3",0x58);
    if (iVar3 != 0) {
LAB_140dd3b6c:
      png_zstream_error(param_1,iVar3);
      if ((local_20 ^ (ulonglong)auStack_88) == __security_cookie.value) {
        return iVar3;
      }
      goto LAB_140dd3bac;
    }
    *(byte *)&param_1->flags = (byte)param_1->flags | 2;
  }
  else {
    iVar3 = inflateReset2(&param_1->zstream,uVar4);
    if (iVar3 != 0) goto LAB_140dd3b6c;
  }
  param_1->zowner = param_2;
  if ((local_20 ^ (ulonglong)auStack_88) == __security_cookie.value) {
    return 0;
  }
LAB_140dd3bac:
  pcVar2 = (code *)swi(3);
  iVar3 = (*pcVar2)();
  return iVar3;
}

// png_inflate_read @ 140dd3bc0

int __cdecl
png_inflate_read(png_struct_def_conflict *param_1,uchar *param_2,uint param_3,uint *param_4,
                uchar *param_5,ulong64 *param_6,int param_7)

{
  ulonglong uVar1;
  int iVar2;
  int extraout_EAX;
  uint uVar3;
  ulonglong uVar4;
  char cVar5;
  undefined4 in_register_00000084;
  uint *puVar6;
  uint uVar7;
  uint uVar8;
  
  puVar6 = (uint *)CONCAT44(in_register_00000084,param_3);
  if (param_1->zowner != param_1->chunk_name) {
    (param_1->zstream).msg = "zstream unclaimed";
    return 0x531f3898;
  }
  (param_1->zstream).next_out = (uchar *)param_4;
  (param_1->zstream).avail_out = 0;
  uVar7 = 0x400;
  do {
    uVar8 = (param_1->zstream).avail_in;
    if (uVar8 == 0) {
      uVar3 = *puVar6;
      uVar8 = uVar7;
      if (uVar3 <= uVar7) {
        uVar8 = uVar3;
      }
      *puVar6 = uVar3 - uVar8;
      if (uVar8 != 0) {
        png_read_data(param_1,param_2,(ulonglong)uVar8);
        png_calculate_crc(param_1,param_2,(ulonglong)uVar8);
      }
      (param_1->zstream).next_in = param_2;
      (param_1->zstream).avail_in = uVar8;
      uVar3 = (param_1->zstream).avail_out;
      uVar7 = uVar8;
    }
    else {
      uVar3 = (param_1->zstream).avail_out;
    }
    uVar4 = (ulonglong)uVar3;
    if (uVar3 == 0) {
      uVar1 = *(ulonglong *)param_5;
      uVar4 = 0xffffffff;
      if (uVar1 < 0xffffffff) {
        uVar4 = uVar1;
      }
      *(ulonglong *)param_5 = uVar1 - uVar4;
      (param_1->zstream).avail_out = (uint)uVar4;
    }
    uVar3 = (uint)uVar4;
    cVar5 = '\0';
    if (*puVar6 == 0) {
      cVar5 = ((int)param_6 != 0) * '\x02' + '\x02';
    }
    if (uVar8 != 0 && param_1->zstream_start != '\0') {
      if ((char)*(param_1->zstream).next_in < '\0') {
        (param_1->zstream).msg = "invalid window size (libpng)";
        iVar2 = -3;
        goto LAB_140dd3d53;
      }
      param_1->zstream_start = '\0';
    }
    iVar2 = inflate(&param_1->zstream,cVar5);
    if (iVar2 != 0) {
      uVar3 = (param_1->zstream).avail_out;
      goto LAB_140dd3d53;
    }
  } while ((*(longlong *)param_5 != 0) || ((param_1->zstream).avail_out != 0));
  uVar3 = 0;
  iVar2 = 0;
LAB_140dd3d53:
  *(ulonglong *)param_5 = *(longlong *)param_5 + (ulonglong)uVar3;
  (param_1->zstream).avail_out = 0;
  png_zstream_error(param_1,iVar2);
  return extraout_EAX;
}

// png_read_buffer @ 140dd3d90

uchar * __cdecl png_read_buffer(png_struct_def_conflict *param_1,ulong64 param_2,int param_3)

{
  uchar *puVar1;
  
  puVar1 = param_1->read_buffer;
  if (puVar1 != (uchar *)0x0) {
    if (param_2 <= param_1->read_buffer_size) {
      return puVar1;
    }
    param_1->read_buffer = (uchar *)0x0;
    param_1->read_buffer_size = 0;
    png_free(param_1,puVar1);
  }
  puVar1 = png_malloc_base(param_1,param_2);
  if (puVar1 == (uchar *)0x0) {
    if (param_3 < 2) {
      if (param_3 == 0) {
                    /* WARNING: Subroutine does not return */
        png_chunk_error(param_1,"insufficient memory to read chunk");
      }
      png_chunk_warning(param_1,"insufficient memory to read chunk");
    }
    puVar1 = (uchar *)0x0;
  }
  else {
    memset(puVar1,0,param_2);
    param_1->read_buffer = puVar1;
    param_1->read_buffer_size = param_2;
  }
  return puVar1;
}

// png_handle_sPLT @ 140dd3e30

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl png_handle_sPLT(png_struct_def_conflict *param_1,png_info_def *param_2,uint param_3)

{
  ushort *puVar1;
  uchar uVar2;
  ulonglong uVar3;
  code *pcVar4;
  int iVar5;
  ushort *_Dst;
  png_sPLT_entry_struct *ppVar6;
  ulonglong uVar7;
  uint uVar8;
  char *pcVar9;
  ushort uVar10;
  uint uVar11;
  ushort *puVar12;
  undefined1 auStack_88 [32];
  png_sPLT_struct local_68;
  ulonglong local_48;
  
  uVar3 = (ulonglong)param_3;
  local_48 = __security_cookie.value ^ (ulonglong)auStack_88;
  uVar8 = param_1->user_chunk_cache_max;
  if (uVar8 != 0) {
    if (uVar8 == 1) {
LAB_140dd3e80:
      png_crc_finish(param_1,param_3);
      return;
    }
    param_1->user_chunk_cache_max = uVar8 - 1;
    if (uVar8 - 1 == 1) {
      png_warning(param_1,"No space in chunk cache for sPLT");
      goto LAB_140dd3e80;
    }
  }
  if ((param_1->mode & 1) == 0) {
                    /* WARNING: Subroutine does not return */
    png_chunk_error(param_1,"missing IHDR");
  }
  if ((param_1->mode & 4) != 0) {
    png_crc_finish(param_1,param_3);
    pcVar9 = "out of place";
    goto LAB_140dd3ffc;
  }
  uVar7 = (ulonglong)(param_3 + 1);
  _Dst = (ushort *)param_1->read_buffer;
  if (_Dst == (ushort *)0x0) {
LAB_140dd3ef1:
    _Dst = png_malloc_base(param_1,uVar7);
    if (_Dst == (ushort *)0x0) {
      png_crc_finish(param_1,param_3);
      pcVar9 = "out of memory";
LAB_140dd3ffc:
      png_chunk_benign_error(param_1,pcVar9);
      return;
    }
    memset(_Dst,0,uVar7);
    param_1->read_buffer = (uchar *)_Dst;
    param_1->read_buffer_size = uVar7;
  }
  else if (param_1->read_buffer_size < uVar7) {
    param_1->read_buffer = (uchar *)0x0;
    param_1->read_buffer_size = 0;
    png_free(param_1,_Dst);
    goto LAB_140dd3ef1;
  }
  png_read_data(param_1,(uchar *)_Dst,uVar3);
  png_calculate_crc(param_1,(uchar *)_Dst,uVar3);
  iVar5 = png_crc_finish(param_1,0);
  if (iVar5 == 0) {
    *(undefined1 *)((longlong)_Dst + uVar3) = 0;
    iVar5 = 1;
    puVar1 = _Dst;
    do {
      puVar12 = puVar1;
      iVar5 = iVar5 + 1;
      puVar1 = (ushort *)((longlong)puVar12 + 1);
    } while ((char)*puVar12 != '\0');
    if ((param_3 < 2) || ((ushort *)((ulonglong)(param_3 - 2) + (longlong)_Dst) < puVar1)) {
      pcVar9 = "malformed sPLT chunk";
    }
    else {
      uVar2 = *(uchar *)puVar1;
      uVar11 = (uint)(uVar2 != '\b') * 4 + 6;
      uVar8 = param_3 - iVar5;
      uVar3 = (ulonglong)uVar8 / (ulonglong)uVar11;
      local_68.depth = uVar2;
      if (uVar8 % uVar11 == 0) {
        local_68.nentries = (int)uVar3;
        local_68.entries = png_malloc_warn(param_1,uVar3 * 10);
        if (local_68.entries != (png_sPLT_entry_struct *)0x0) {
          if (uVar11 <= uVar8) {
            uVar7 = 0;
            ppVar6 = local_68.entries;
            do {
              if (uVar2 == '\b') {
                ppVar6->red = (ushort)(byte)puVar12[1];
                ppVar6->green = (ushort)*(byte *)((longlong)puVar12 + 3);
                ppVar6->blue = (ushort)(byte)puVar12[2];
                uVar10 = (ushort)*(byte *)((longlong)puVar12 + 5);
                puVar12 = puVar12 + 3;
              }
              else {
                uVar10 = puVar12[1];
                ppVar6->red = uVar10 << 8 | uVar10 >> 8;
                ppVar6->green = puVar12[2] << 8 | puVar12[2] >> 8;
                ppVar6->blue = puVar12[3] << 8 | puVar12[3] >> 8;
                uVar10 = puVar12[4] << 8 | puVar12[4] >> 8;
                puVar12 = puVar12 + 5;
              }
              ppVar6->alpha = uVar10;
              ppVar6->frequency = *puVar12 << 8 | *puVar12 >> 8;
              uVar7 = uVar7 + 1;
              ppVar6 = ppVar6 + 1;
            } while (uVar7 < uVar3);
          }
          local_68.name = (char *)_Dst;
          png_set_sPLT(param_1,param_2,&local_68,1);
          png_free(param_1,local_68.entries);
          if ((local_48 ^ (ulonglong)auStack_88) == __security_cookie.value) {
            return;
          }
          goto LAB_140dd40b6;
        }
        pcVar9 = "sPLT chunk requires too much memory";
        local_68.entries = (png_sPLT_entry_struct *)0x0;
      }
      else {
        pcVar9 = "sPLT chunk has bad length";
      }
    }
    png_warning(param_1,pcVar9);
    return;
  }
  if ((local_48 ^ (ulonglong)auStack_88) == __security_cookie.value) {
    return;
  }
LAB_140dd40b6:
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}

// png_handle_tRNS @ 140dd4180

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl png_handle_tRNS(png_struct_def_conflict *param_1,png_info_def *param_2,uint param_3)

{
  uchar uVar1;
  uint uVar2;
  code *pcVar3;
  int iVar4;
  char *pcVar5;
  undefined1 auStackY_168 [32];
  ushort local_138;
  ushort local_136;
  ushort local_134;
  ulonglong local_30;
  
  local_30 = __security_cookie.value ^ (ulonglong)auStackY_168;
  uVar2 = param_1->mode;
  if ((uVar2 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
    png_chunk_error(param_1,"missing IHDR");
  }
  if ((uVar2 & 4) != 0) {
LAB_140dd42f9:
    png_crc_finish(param_1,param_3);
    pcVar5 = "out of place";
LAB_140dd430a:
    png_chunk_benign_error(param_1,pcVar5);
    return;
  }
  if ((param_2 != (png_info_def *)0x0) && ((param_2->valid & 0x10) != 0)) {
    png_crc_finish(param_1,param_3);
    pcVar5 = "duplicate";
    goto LAB_140dd430a;
  }
  uVar1 = param_1->color_type;
  if (uVar1 == '\x03') {
    if ((uVar2 & 2) == 0) goto LAB_140dd42f9;
    if ((0x100 < param_3) || ((uint)param_1->num_palette <= param_3 - 1)) {
      png_crc_finish(param_1,param_3);
      pcVar5 = "invalid";
      goto LAB_140dd430a;
    }
    png_read_data(param_1,(uchar *)&local_138,(ulonglong)param_3);
    png_calculate_crc(param_1,(uchar *)&local_138,(ulonglong)param_3);
    param_1->num_trans = (ushort)param_3;
  }
  else if (uVar1 == '\x02') {
    if (param_3 != 6) {
LAB_140dd42bf:
      png_crc_finish(param_1,param_3);
      png_chunk_benign_error(param_1,"invalid");
      if ((local_30 ^ (ulonglong)auStackY_168) == __security_cookie.value) {
        return;
      }
      goto LAB_140dd4409;
    }
    png_read_data(param_1,(uchar *)&local_138,6);
    png_calculate_crc(param_1,(uchar *)&local_138,6);
    param_1->num_trans = 1;
    (param_1->trans_color).red = local_138 << 8 | local_138 >> 8;
    (param_1->trans_color).green = local_136 << 8 | local_136 >> 8;
    (param_1->trans_color).blue = local_134 << 8 | local_134 >> 8;
  }
  else {
    if (uVar1 != '\0') {
      png_crc_finish(param_1,param_3);
      pcVar5 = "invalid with alpha channel";
      goto LAB_140dd430a;
    }
    if (param_3 != 2) goto LAB_140dd42bf;
    png_read_data(param_1,(uchar *)&local_138,2);
    png_calculate_crc(param_1,(uchar *)&local_138,2);
    param_1->num_trans = 1;
    (param_1->trans_color).gray = local_138 << 8 | local_138 >> 8;
  }
  iVar4 = png_crc_finish(param_1,0);
  if (iVar4 == 0) {
    png_set_tRNS(param_1,param_2,(uchar *)&local_138,(uint)param_1->num_trans,&param_1->trans_color)
    ;
    if ((local_30 ^ (ulonglong)auStackY_168) != __security_cookie.value) goto LAB_140dd4409;
  }
  else {
    param_1->num_trans = 0;
    if ((local_30 ^ (ulonglong)auStackY_168) != __security_cookie.value) {
LAB_140dd4409:
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  return;
}

// png_handle_bKGD @ 140dd4440

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl png_handle_bKGD(png_struct_def_conflict *param_1,png_info_def *param_2,uint param_3)

{
  byte bVar1;
  png_color_struct *ppVar2;
  code *pcVar3;
  ushort uVar4;
  int iVar5;
  char *pcVar6;
  ushort *puVar7;
  uint uVar8;
  ushort *puVar9;
  ushort uVar10;
  undefined1 auStack_58 [32];
  png_color_16_struct local_38;
  byte local_2e;
  byte local_2d;
  byte local_2c;
  byte local_2b;
  byte local_2a;
  byte local_29;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_58;
  uVar8 = param_1->mode;
  if ((uVar8 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
    png_chunk_error(param_1,"missing IHDR");
  }
  if (((uVar8 & 4) != 0) ||
     (bVar1 = param_1->color_type, (char)((uVar8 & 2) >> 1) == '\0' && bVar1 == 3)) {
    png_crc_finish(param_1,param_3);
    pcVar6 = "out of place";
LAB_140dd449a:
    png_chunk_benign_error(param_1,pcVar6);
    return;
  }
  if ((param_2 != (png_info_def *)0x0) && ((param_2->valid & 0x20) != 0)) {
    png_crc_finish(param_1,param_3);
    pcVar6 = "duplicate";
    goto LAB_140dd449a;
  }
  uVar8 = 1;
  if (bVar1 != 3) {
    uVar8 = (uint)((bVar1 & 2) >> 1) * 4 + 2;
  }
  if (uVar8 != param_3) {
    png_crc_finish(param_1,param_3);
    pcVar6 = "invalid";
    goto LAB_140dd449a;
  }
  png_read_data(param_1,&local_2e,(ulonglong)param_3);
  png_calculate_crc(param_1,&local_2e,(ulonglong)param_3);
  iVar5 = png_crc_finish(param_1,0);
  if (iVar5 != 0) goto LAB_140dd46f2;
  puVar7 = &local_38.gray;
  if (param_1->color_type == 3) {
    local_38.index = local_2e;
    if ((param_2 == (png_info_def *)0x0) || (param_2->num_palette == 0)) {
      local_38.green = 0;
      local_38.blue = 0;
      uVar4 = 0;
      puVar9 = &local_38.red;
      uVar10 = 0;
    }
    else {
      uVar4 = (ushort)local_2e;
      if (param_2->num_palette <= uVar4) {
        png_chunk_benign_error(param_1,"invalid index");
        goto LAB_140dd46f2;
      }
      ppVar2 = param_1->palette;
      local_38.red = (ushort)ppVar2[uVar4].red;
      local_38.green = (ushort)ppVar2[uVar4].green;
      uVar4 = (ushort)ppVar2[uVar4].blue;
LAB_140dd46da:
      puVar9 = &local_38.blue;
      uVar10 = 0;
    }
  }
  else {
    bVar1 = param_1->bit_depth;
    if ((param_1->color_type & 2) != 0) {
      if (bVar1 < 9) {
        if (((local_2e != 0) || (local_2c != 0)) || (local_2a != 0)) {
          png_chunk_benign_error(param_1,"invalid color");
          goto LAB_140dd46f2;
        }
        uVar4 = 0;
        local_38.green = 0;
      }
      else {
        local_38.green = (ushort)local_2c << 8;
        uVar4 = (ushort)local_2a << 8;
      }
      local_38.index = 0;
      local_38.red = CONCAT11(local_2e,local_2d);
      local_38.green = local_38.green | local_2b;
      uVar4 = uVar4 | local_29;
      goto LAB_140dd46da;
    }
    if ((bVar1 < 9) && ((local_2e != 0 || (local_2d >> (bVar1 & 0x1f) != 0)))) {
      png_chunk_benign_error(param_1,"invalid gray level");
      goto LAB_140dd46f2;
    }
    puVar9 = &local_38.green;
    local_38.index = 0;
    uVar4 = CONCAT11(local_2e,local_2d);
    local_38.blue = uVar4;
    puVar7 = &local_38.red;
    uVar10 = uVar4;
  }
  *puVar9 = uVar4;
  *puVar7 = uVar10;
  png_set_bKGD(param_1,param_2,&local_38);
LAB_140dd46f2:
  if ((local_28 ^ (ulonglong)auStack_58) != __security_cookie.value) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  return;
}

// png_handle_eXIf @ 140dd4750

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl png_handle_eXIf(png_struct_def_conflict *param_1,png_info_def *param_2,uint param_3)

{
  byte *pbVar1;
  code *pcVar2;
  int iVar3;
  uchar *puVar4;
  char *pcVar5;
  ulonglong uVar6;
  undefined1 auStack_68 [47];
  byte local_39;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_68;
  if ((param_1->mode & 1) == 0) {
                    /* WARNING: Subroutine does not return */
    png_chunk_error(param_1,"missing IHDR");
  }
  if (param_3 < 2) {
    png_crc_finish(param_1,param_3);
    pcVar5 = "too short";
  }
  else if ((param_2 == (png_info_def *)0x0) || ((param_2->valid & 0x10000) != 0)) {
    png_crc_finish(param_1,param_3);
    pcVar5 = "duplicate";
  }
  else {
    pbVar1 = (byte *)((longlong)&param_2->free_me + 1);
    *pbVar1 = *pbVar1 | 0x80;
    puVar4 = png_malloc_warn(param_1,(ulonglong)param_3);
    param_2->eXIf_buf = puVar4;
    if (puVar4 != (uchar *)0x0) {
      png_read_data(param_1,&local_39,1);
      png_calculate_crc(param_1,&local_39,1);
      *param_2->eXIf_buf = local_39;
      png_read_data(param_1,&local_39,1);
      png_calculate_crc(param_1,&local_39,1);
      param_2->eXIf_buf[1] = local_39;
      if (((local_39 & 0xfb) == 0x49) && (*param_2->eXIf_buf == local_39)) {
        if (param_3 != 2) {
          uVar6 = 2;
          do {
            png_read_data(param_1,&local_39,1);
            png_calculate_crc(param_1,&local_39,1);
            param_2->eXIf_buf[uVar6] = local_39;
            uVar6 = uVar6 + 1;
          } while (param_3 != uVar6);
        }
        iVar3 = png_crc_finish(param_1,0);
        if (iVar3 == 0) {
          png_set_eXIf_1(param_1,param_2,param_3,param_2->eXIf_buf);
        }
      }
      else {
        png_crc_finish(param_1,param_3 - 2);
        png_chunk_benign_error(param_1,"incorrect byte-order specifier");
      }
      png_free(param_1,param_2->eXIf_buf);
      param_2->eXIf_buf = (uchar *)0x0;
      if ((local_38 ^ (ulonglong)auStack_68) == __security_cookie.value) {
        return;
      }
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    png_crc_finish(param_1,param_3);
    pcVar5 = "out of memory";
  }
  png_chunk_benign_error(param_1,pcVar5);
  return;
}

// png_handle_hIST @ 140dd4990

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl png_handle_hIST(png_struct_def_conflict *param_1,png_info_def *param_2,uint param_3)

{
  code *pcVar1;
  int iVar2;
  char *pcVar3;
  ulonglong uVar4;
  undefined1 auStack_268 [46];
  ushort local_23a;
  ushort local_238 [260];
  ulonglong local_30;
  
  local_30 = __security_cookie.value ^ (ulonglong)auStack_268;
  if ((param_1->mode & 1) == 0) {
                    /* WARNING: Subroutine does not return */
    png_chunk_error(param_1,"missing IHDR");
  }
  if ((param_1->mode & 6) == 2) {
    if ((param_2 == (png_info_def *)0x0) || ((param_2->valid & 0x40) == 0)) {
      if ((((param_3 & 1) == 0) && (param_3 < 0x202)) &&
         (param_3 >> 1 == (uint)param_1->num_palette)) {
        if (1 < param_3) {
          uVar4 = 0;
          do {
            png_read_data(param_1,(uchar *)&local_23a,2);
            png_calculate_crc(param_1,(uchar *)&local_23a,2);
            local_238[uVar4] = local_23a << 8 | local_23a >> 8;
            uVar4 = uVar4 + 1;
          } while (param_3 >> 1 != uVar4);
        }
        iVar2 = png_crc_finish(param_1,0);
        if (iVar2 == 0) {
          png_set_hIST(param_1,param_2,local_238);
          if ((local_30 ^ (ulonglong)auStack_268) != __security_cookie.value) goto LAB_140dd4b1d;
        }
        else if ((local_30 ^ (ulonglong)auStack_268) != __security_cookie.value) {
LAB_140dd4b1d:
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        return;
      }
      png_crc_finish(param_1,param_3);
      pcVar3 = "invalid";
    }
    else {
      png_crc_finish(param_1,param_3);
      pcVar3 = "duplicate";
    }
  }
  else {
    png_crc_finish(param_1,param_3);
    pcVar3 = "out of place";
  }
  png_chunk_benign_error(param_1,pcVar3);
  return;
}

// png_handle_pHYs @ 140dd4b40

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl png_handle_pHYs(png_struct_def_conflict *param_1,png_info_def *param_2,uint param_3)

{
  code *pcVar1;
  int iVar2;
  char *pcVar3;
  undefined1 auStackY_58 [32];
  uint local_29;
  uint local_25;
  byte local_21;
  ulonglong local_20;
  
  local_20 = __security_cookie.value ^ (ulonglong)auStackY_58;
  if ((param_1->mode & 1) == 0) {
                    /* WARNING: Subroutine does not return */
    png_chunk_error(param_1,"missing IHDR");
  }
  if ((param_1->mode & 4) == 0) {
    if ((param_2 == (png_info_def *)0x0) || ((param_2->valid & 0x80) == 0)) {
      if (param_3 == 9) {
        png_read_data(param_1,(uchar *)&local_29,9);
        png_calculate_crc(param_1,(uchar *)&local_29,9);
        iVar2 = png_crc_finish(param_1,0);
        if (iVar2 == 0) {
          png_set_pHYs(param_1,param_2,
                       local_29 >> 0x18 | (local_29 & 0xff0000) >> 8 | (local_29 & 0xff00) << 8 |
                       local_29 << 0x18,
                       local_25 >> 0x18 | (local_25 & 0xff0000) >> 8 | (local_25 & 0xff00) << 8 |
                       local_25 << 0x18,(uint)local_21);
          if ((local_20 ^ (ulonglong)auStackY_58) != __security_cookie.value) goto LAB_140dd4c67;
        }
        else if ((local_20 ^ (ulonglong)auStackY_58) != __security_cookie.value) {
LAB_140dd4c67:
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        return;
      }
      png_crc_finish(param_1,param_3);
      pcVar3 = "invalid";
    }
    else {
      png_crc_finish(param_1,param_3);
      pcVar3 = "duplicate";
    }
  }
  else {
    png_crc_finish(param_1,param_3);
    pcVar3 = "out of place";
  }
  png_chunk_benign_error(param_1,pcVar3);
  return;
}

// png_handle_oFFs @ 140dd4c80

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl png_handle_oFFs(png_struct_def_conflict *param_1,png_info_def *param_2,uint param_3)

{
  code *pcVar1;
  int iVar2;
  char *pcVar3;
  uint uVar4;
  uint uVar5;
  undefined1 auStackY_58 [32];
  byte local_29;
  byte local_28;
  byte local_27;
  byte local_26;
  byte local_25;
  byte local_24;
  byte local_23;
  byte local_22;
  byte local_21;
  ulonglong local_20;
  
  local_20 = __security_cookie.value ^ (ulonglong)auStackY_58;
  if ((param_1->mode & 1) == 0) {
                    /* WARNING: Subroutine does not return */
    png_chunk_error(param_1,"missing IHDR");
  }
  if ((param_1->mode & 4) == 0) {
    if ((param_2 == (png_info_def *)0x0) || ((param_2->valid & 0x100) == 0)) {
      if (param_3 == 9) {
        png_read_data(param_1,&local_29,9);
        png_calculate_crc(param_1,&local_29,9);
        iVar2 = png_crc_finish(param_1,0);
        if (iVar2 == 0) {
          if ((char)local_29 < '\0') {
            uVar4 = -((uint)local_28 * 0x7fff0000 -
                      ((uint)local_26 | (uint)local_27 << 8 | (uint)local_29 << 0x18) & 0x7fffffff);
          }
          else {
            uVar4 = (uint)local_26 |
                    (uint)local_27 << 8 | (uint)local_28 << 0x10 | (uint)local_29 << 0x18;
          }
          if ((char)local_25 < '\0') {
            uVar5 = -((uint)local_24 * 0x7fff0000 -
                      ((uint)local_22 | (uint)local_23 << 8 | (uint)local_25 << 0x18) & 0x7fffffff);
          }
          else {
            uVar5 = (uint)local_22 |
                    (uint)local_23 << 8 | (uint)local_24 << 0x10 | (uint)local_25 << 0x18;
          }
          png_set_oFFs(param_1,param_2,uVar4,uVar5,(uint)local_21);
          if ((local_20 ^ (ulonglong)auStackY_58) != __security_cookie.value) goto LAB_140dd4e50;
        }
        else if ((local_20 ^ (ulonglong)auStackY_58) != __security_cookie.value) {
LAB_140dd4e50:
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        return;
      }
      png_crc_finish(param_1,param_3);
      pcVar3 = "invalid";
    }
    else {
      png_crc_finish(param_1,param_3);
      pcVar3 = "duplicate";
    }
  }
  else {
    png_crc_finish(param_1,param_3);
    pcVar3 = "out of place";
  }
  png_chunk_benign_error(param_1,pcVar3);
  return;
}

// png_handle_pCAL @ 140dd4e70

void __cdecl png_handle_pCAL(png_struct_def_conflict *param_1,png_info_def *param_2,uint param_3)

{
  byte *pbVar1;
  byte bVar2;
  byte bVar3;
  ulonglong uVar4;
  int iVar5;
  uchar *_Dst;
  char **ppcVar6;
  char *pcVar7;
  uint uVar8;
  longlong lVar9;
  uint uVar10;
  ulonglong uVar11;
  byte *pbVar12;
  byte *pbVar13;
  
  if ((param_1->mode & 1) == 0) {
                    /* WARNING: Subroutine does not return */
    png_chunk_error(param_1,"missing IHDR");
  }
  uVar4 = (ulonglong)param_3;
  if ((param_1->mode & 4) != 0) {
    png_crc_finish(param_1,param_3);
    pcVar7 = "out of place";
    goto LAB_140dd50c9;
  }
  if ((param_2 != (png_info_def *)0x0) && ((param_2->valid & 0x400) != 0)) {
    png_crc_finish(param_1,param_3);
    pcVar7 = "duplicate";
    goto LAB_140dd50c9;
  }
  uVar11 = (ulonglong)(param_3 + 1);
  _Dst = param_1->read_buffer;
  if (_Dst == (uchar *)0x0) {
LAB_140dd4edf:
    _Dst = png_malloc_base(param_1,uVar11);
    if (_Dst != (uchar *)0x0) {
      memset(_Dst,0,uVar11);
      param_1->read_buffer = _Dst;
      param_1->read_buffer_size = uVar11;
      goto LAB_140dd4f11;
    }
    png_crc_finish(param_1,param_3);
LAB_140dd4fbc:
    pcVar7 = "out of memory";
  }
  else {
    if (param_1->read_buffer_size < uVar11) {
      param_1->read_buffer = (uchar *)0x0;
      param_1->read_buffer_size = 0;
      png_free(param_1,_Dst);
      goto LAB_140dd4edf;
    }
LAB_140dd4f11:
    png_read_data(param_1,_Dst,uVar4);
    png_calculate_crc(param_1,_Dst,uVar4);
    iVar5 = png_crc_finish(param_1,0);
    if (iVar5 != 0) {
      return;
    }
    _Dst[uVar4] = '\0';
    lVar9 = uVar4 + 1;
    pbVar13 = _Dst + 9;
    do {
      pbVar12 = pbVar13;
      lVar9 = lVar9 + -1;
      pbVar13 = pbVar12 + 1;
    } while (pbVar12[-9] != 0);
    if (lVar9 < 0xd) {
      pcVar7 = "invalid";
      goto LAB_140dd50c9;
    }
    bVar2 = pbVar12[-8];
    if ((char)bVar2 < '\0') {
      uVar8 = -((uint)pbVar12[-7] * 0x7fff0000 -
                ((uint)pbVar12[-5] | (uint)pbVar12[-6] << 8 | (uint)bVar2 << 0x18) & 0x7fffffff);
      bVar2 = pbVar12[-4];
      if ((char)bVar2 < '\0') goto LAB_140dd5056;
LAB_140dd4ffd:
      uVar10 = (uint)pbVar12[-1] |
               (uint)pbVar12[-2] << 8 | (uint)pbVar12[-3] << 0x10 | (uint)bVar2 << 0x18;
    }
    else {
      uVar8 = (uint)pbVar12[-5] |
              (uint)pbVar12[-6] << 8 | (uint)pbVar12[-7] << 0x10 | (uint)bVar2 << 0x18;
      bVar2 = pbVar12[-4];
      if (-1 < (char)bVar2) goto LAB_140dd4ffd;
LAB_140dd5056:
      uVar10 = -((uint)pbVar12[-3] * 0x7fff0000 -
                 ((uint)pbVar12[-1] | (uint)pbVar12[-2] << 8 | (uint)bVar2 << 0x18) & 0x7fffffff);
    }
    bVar2 = *pbVar12;
    bVar3 = *pbVar13;
    if ((bVar2 != 0 || bVar3 == 2) && ((1 < (byte)(bVar2 - 1) || (bVar3 == 3)))) {
      if (bVar3 == 4 || bVar2 != 3) {
        if (3 < bVar2) {
          png_chunk_benign_error(param_1,"unrecognized equation type");
        }
        do {
          pbVar1 = pbVar13 + 1;
          pbVar13 = pbVar13 + 1;
        } while (*pbVar1 != 0);
        ppcVar6 = png_malloc_warn(param_1,(ulonglong)((uint)bVar3 * 8));
        if (ppcVar6 != (char **)0x0) {
          if ((ulonglong)bVar3 != 0) {
            uVar11 = 0;
            do {
              pbVar13 = pbVar13 + 1;
              ppcVar6[uVar11] = (char *)pbVar13;
              while( true ) {
                if (_Dst + uVar4 < pbVar13) {
                  png_free(param_1,ppcVar6);
                  pcVar7 = "invalid data";
                  goto LAB_140dd50c9;
                }
                if (*pbVar13 == 0) break;
                pbVar13 = pbVar13 + 1;
              }
              uVar11 = uVar11 + 1;
            } while (uVar11 != bVar3);
          }
          png_set_pCAL(param_1,param_2,(char *)_Dst,uVar8,uVar10,(uint)bVar2,(uint)bVar3,
                       (char *)(pbVar12 + 2),ppcVar6);
          png_free(param_1,ppcVar6);
          return;
        }
        goto LAB_140dd4fbc;
      }
    }
    pcVar7 = "invalid parameter count";
  }
LAB_140dd50c9:
  png_chunk_benign_error(param_1,pcVar7);
  return;
}

// png_handle_sCAL @ 140dd51e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl png_handle_sCAL(png_struct_def_conflict *param_1,png_info_def *param_2,uint param_3)

{
  ulonglong uVar1;
  byte *pbVar2;
  code *pcVar3;
  int iVar4;
  byte *_Dst;
  char *pcVar5;
  ulonglong uVar6;
  undefined1 auStackY_68 [32];
  uint local_3c;
  ulong64 local_38;
  ulonglong local_30;
  
  local_30 = __security_cookie.value ^ (ulonglong)auStackY_68;
  if ((param_1->mode & 1) == 0) {
                    /* WARNING: Subroutine does not return */
    png_chunk_error(param_1,"missing IHDR");
  }
  if ((param_1->mode & 4) != 0) {
    png_crc_finish(param_1,param_3);
    pcVar5 = "out of place";
    goto LAB_140dd5383;
  }
  if ((param_2 != (png_info_def *)0x0) && ((param_2->valid & 0x4000) != 0)) {
    png_crc_finish(param_1,param_3);
    pcVar5 = "duplicate";
    goto LAB_140dd5383;
  }
  if (param_3 < 4) {
    png_crc_finish(param_1,param_3);
    pcVar5 = "invalid";
    goto LAB_140dd5383;
  }
  uVar6 = (ulonglong)(param_3 + 1);
  _Dst = param_1->read_buffer;
  if (_Dst == (byte *)0x0) {
LAB_140dd5289:
    _Dst = png_malloc_base(param_1,uVar6);
    if (_Dst == (byte *)0x0) {
      png_chunk_benign_error(param_1,"out of memory");
      png_crc_finish(param_1,param_3);
      return;
    }
    memset(_Dst,0,uVar6);
    param_1->read_buffer = _Dst;
    param_1->read_buffer_size = uVar6;
  }
  else if (param_1->read_buffer_size < uVar6) {
    param_1->read_buffer = (uchar *)0x0;
    param_1->read_buffer_size = 0;
    png_free(param_1,_Dst);
    goto LAB_140dd5289;
  }
  uVar6 = (ulonglong)param_3;
  png_read_data(param_1,_Dst,uVar6);
  png_calculate_crc(param_1,_Dst,uVar6);
  _Dst[uVar6] = 0;
  iVar4 = png_crc_finish(param_1,0);
  if (iVar4 == 0) {
    if (1 < (byte)(*_Dst - 1)) {
      pcVar5 = "invalid unit";
LAB_140dd5383:
      png_chunk_benign_error(param_1,pcVar5);
      return;
    }
    local_38 = 1;
    local_3c = 0;
    iVar4 = png_check_fp_number((char *)_Dst,uVar6,(int *)&local_3c,&local_38);
    if (((iVar4 == 0) || (uVar6 <= local_38)) ||
       (uVar1 = local_38 + 1, pbVar2 = _Dst + local_38, local_38 = uVar1, *pbVar2 != 0)) {
      pcVar5 = "bad width format";
    }
    else if ((local_3c & 0x188) == 0x108) {
      local_3c = 0;
      iVar4 = png_check_fp_number((char *)_Dst,uVar6,(int *)&local_3c,&local_38);
      if ((iVar4 == 0) || (local_38 != uVar6)) {
        pcVar5 = "bad height format";
      }
      else {
        if ((local_3c & 0x188) == 0x108) {
          png_set_sCAL_s(param_1,param_2,(uint)*_Dst,(char *)(_Dst + 1),(char *)(_Dst + uVar1));
          if ((local_30 ^ (ulonglong)auStackY_68) == __security_cookie.value) {
            return;
          }
          goto LAB_140dd545b;
        }
        pcVar5 = "non-positive height";
      }
    }
    else {
      pcVar5 = "non-positive width";
    }
    png_chunk_benign_error(param_1,pcVar5);
  }
  if ((local_30 ^ (ulonglong)auStackY_68) == __security_cookie.value) {
    return;
  }
LAB_140dd545b:
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}

// png_handle_tIME @ 140dd54a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl png_handle_tIME(png_struct_def_conflict *param_1,png_info_def *param_2,uint param_3)

{
  uint uVar1;
  code *pcVar2;
  int iVar3;
  char *pcVar4;
  undefined1 auStack_58 [40];
  png_time_struct local_30;
  ushort local_27 [3];
  uchar local_21;
  ulonglong local_20;
  
  local_20 = __security_cookie.value ^ (ulonglong)auStack_58;
  uVar1 = param_1->mode;
  if ((uVar1 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
    png_chunk_error(param_1,"missing IHDR");
  }
  if ((param_2 == (png_info_def *)0x0) || ((param_2->valid & 0x200) == 0)) {
    if ((uVar1 & 4) != 0) {
      param_1->mode = uVar1 | 8;
    }
    if (param_3 == 7) {
      png_read_data(param_1,(uchar *)local_27,7);
      png_calculate_crc(param_1,(uchar *)local_27,7);
      iVar3 = png_crc_finish(param_1,0);
      if (iVar3 == 0) {
        local_30.second = local_21;
        local_30._2_4_ = local_27._2_4_;
        local_30.year = local_27[0] << 8 | local_27[0] >> 8;
        png_set_tIME(param_1,param_2,&local_30);
        if ((local_20 ^ (ulonglong)auStack_58) != __security_cookie.value) goto LAB_140dd55c3;
      }
      else if ((local_20 ^ (ulonglong)auStack_58) != __security_cookie.value) {
LAB_140dd55c3:
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      return;
    }
    png_crc_finish(param_1,param_3);
    pcVar4 = "invalid";
  }
  else {
    png_crc_finish(param_1,param_3);
    pcVar4 = "duplicate";
  }
  png_chunk_benign_error(param_1,pcVar4);
  return;
}

// png_handle_tEXt @ 140dd55e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl png_handle_tEXt(png_struct_def_conflict *param_1,png_info_def *param_2,uint param_3)

{
  uint uVar1;
  code *pcVar2;
  ulonglong uVar3;
  uchar *puVar4;
  int iVar5;
  uchar *_Dst;
  longlong lVar6;
  char *pcVar7;
  ulonglong _Size;
  undefined1 auStack_88 [32];
  png_text_struct local_68;
  ulonglong local_30;
  
  uVar3 = (ulonglong)param_3;
  local_30 = __security_cookie.value ^ (ulonglong)auStack_88;
  uVar1 = param_1->user_chunk_cache_max;
  if (uVar1 != 0) {
    if (uVar1 == 1) {
      png_crc_finish(param_1,param_3);
      return;
    }
    param_1->user_chunk_cache_max = uVar1 - 1;
    if (uVar1 - 1 == 1) {
      png_crc_finish(param_1,param_3);
      pcVar7 = "no space in chunk cache";
      goto LAB_140dd57b4;
    }
  }
  uVar1 = param_1->mode;
  if ((uVar1 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
    png_chunk_error(param_1,"missing IHDR");
  }
  if ((uVar1 & 4) != 0) {
    param_1->mode = uVar1 | 8;
  }
  _Size = (ulonglong)(param_3 + 1);
  _Dst = param_1->read_buffer;
  if (_Dst != (uchar *)0x0) {
    if (_Size <= param_1->read_buffer_size) goto LAB_140dd56d5;
    param_1->read_buffer = (uchar *)0x0;
    param_1->read_buffer_size = 0;
    png_free(param_1,_Dst);
  }
  _Dst = png_malloc_base(param_1,_Size);
  if (_Dst == (uchar *)0x0) {
    png_chunk_warning(param_1,"insufficient memory to read chunk");
    pcVar7 = "out of memory";
LAB_140dd57b4:
    png_chunk_benign_error(param_1,pcVar7);
    return;
  }
  memset(_Dst,0,_Size);
  param_1->read_buffer = _Dst;
  param_1->read_buffer_size = _Size;
LAB_140dd56d5:
  png_read_data(param_1,_Dst,uVar3);
  png_calculate_crc(param_1,_Dst,uVar3);
  iVar5 = png_crc_finish(param_1,0);
  if (iVar5 == 0) {
    _Dst[uVar3] = '\0';
    lVar6 = uVar3 + 1;
    puVar4 = _Dst + -1;
    do {
      local_68.text = (char *)puVar4;
      lVar6 = lVar6 + -1;
      puVar4 = (uchar *)(local_68.text + 1);
    } while (local_68.text[1] != '\0');
    local_68.text = local_68.text + (2 - (ulonglong)(lVar6 == 0));
    local_68.compression = -1;
    local_68.itxt_length = 0;
    local_68.lang = (char *)0x0;
    local_68.lang_key = (char *)0x0;
    local_68.key = (char *)_Dst;
    local_68.text_length = strlen(local_68.text);
    iVar5 = png_set_text_2(param_1,param_2,&local_68,1);
    if (iVar5 != 0) {
      png_warning(param_1,"Insufficient memory to process text chunk");
    }
  }
  if ((local_30 ^ (ulonglong)auStack_88) == __security_cookie.value) {
    return;
  }
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

// png_handle_zTXt @ 140dd57f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl png_handle_zTXt(png_struct_def_conflict *param_1,png_info_def *param_2,uint param_3)

{
  uint uVar1;
  code *pcVar2;
  ulonglong _Size;
  int iVar3;
  uchar *puVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  char *pcVar7;
  undefined1 auStackY_a8 [32];
  int in_stack_ffffffffffffff78;
  png_text_struct local_80;
  ulong64 local_48;
  ulonglong local_40;
  
  _Size = (ulonglong)param_3;
  local_40 = __security_cookie.value ^ (ulonglong)auStackY_a8;
  uVar1 = param_1->user_chunk_cache_max;
  if (uVar1 != 0) {
    if (uVar1 == 1) {
      png_crc_finish(param_1,param_3);
      return;
    }
    param_1->user_chunk_cache_max = uVar1 - 1;
    if (uVar1 - 1 == 1) {
      png_crc_finish(param_1,param_3);
      pcVar7 = "no space in chunk cache";
      goto LAB_140dd5972;
    }
  }
  uVar1 = param_1->mode;
  if ((uVar1 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
    png_chunk_error(param_1,"missing IHDR");
  }
  if ((uVar1 & 4) != 0) {
    param_1->mode = uVar1 | 8;
  }
  puVar4 = param_1->read_buffer;
  if (puVar4 == (uchar *)0x0) {
LAB_140dd58bc:
    puVar4 = png_malloc_base(param_1,_Size);
    if (puVar4 == (uchar *)0x0) {
      png_crc_finish(param_1,param_3);
      pcVar7 = "out of memory";
LAB_140dd5972:
      png_chunk_benign_error(param_1,pcVar7);
      return;
    }
    memset(puVar4,0,_Size);
    param_1->read_buffer = puVar4;
    param_1->read_buffer_size = _Size;
  }
  else if (param_1->read_buffer_size < _Size) {
    param_1->read_buffer = (uchar *)0x0;
    param_1->read_buffer_size = 0;
    png_free(param_1,puVar4);
    goto LAB_140dd58bc;
  }
  png_read_data(param_1,puVar4,_Size);
  png_calculate_crc(param_1,puVar4,_Size);
  iVar3 = png_crc_finish(param_1,0);
  if (iVar3 == 0) {
    pcVar7 = "bad keyword";
    if (param_3 != 0) {
      uVar5 = 0;
      do {
        uVar6 = uVar5;
        if (puVar4[uVar5] == '\0') break;
        uVar5 = uVar5 + 1;
        uVar6 = _Size;
      } while (_Size != uVar5);
      if (0xffffffb0 < (int)uVar6 - 0x50U) {
        if (param_3 < (int)uVar6 + 3U) {
          pcVar7 = "truncated";
        }
        else {
          uVar6 = uVar6 & 0xffffffff;
          if (puVar4[uVar6 + 1] == '\0') {
            local_48 = 0xffffffffffffffff;
            iVar3 = png_decompress_chunk
                              (param_1,param_3,(uint)(uVar6 + 2),&local_48,in_stack_ffffffffffffff78
                              );
            if (iVar3 == 1) {
              puVar4 = param_1->read_buffer;
              if (puVar4 == (uchar *)0x0) {
                pcVar7 = "Read failure in png_handle_zTXt";
              }
              else {
                puVar4[uVar6 + 2 + local_48] = '\0';
                local_80.compression = 0;
                local_80.text = (char *)(puVar4 + uVar6 + 2);
                local_80.text_length = local_48;
                local_80.itxt_length = 0;
                local_80.lang = (char *)0x0;
                local_80.lang_key = (char *)0x0;
                local_80.key = (char *)puVar4;
                iVar3 = png_set_text_2(param_1,param_2,&local_80,1);
                pcVar7 = (char *)0x0;
                if (iVar3 != 0) {
                  pcVar7 = "insufficient memory";
                }
              }
            }
            else {
              pcVar7 = (param_1->zstream).msg;
            }
            if (pcVar7 == (char *)0x0) goto LAB_140dd5a5f;
          }
          else {
            pcVar7 = "unknown compression type";
          }
        }
      }
    }
    png_chunk_benign_error(param_1,pcVar7);
  }
LAB_140dd5a5f:
  if ((local_40 ^ (ulonglong)auStackY_a8) != __security_cookie.value) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  return;
}

// png_decompress_chunk @ 140dd5aa0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

int __cdecl
png_decompress_chunk
          (png_struct_def_conflict *param_1,uint param_2,uint param_3,ulong64 *param_4,int param_5)

{
  ulong64 uVar1;
  uchar *_Src;
  code *pcVar2;
  ulonglong _Size;
  int iVar3;
  int iVar4;
  ulonglong uVar5;
  uchar *_Dst;
  ulonglong uVar6;
  ulong64 _Size_00;
  undefined1 auStackY_88 [32];
  ulong64 *in_stack_ffffffffffffffa8;
  int local_4c;
  ulonglong local_48;
  
  _Size = (ulonglong)param_3;
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_88;
  uVar5 = param_1->user_chunk_malloc_max;
  if (uVar5 + 1 < 2) {
    uVar6 = (ulonglong)(param_3 + 1);
    uVar5 = 0xffffffffffffffff;
  }
  else {
    uVar6 = (ulonglong)(param_3 + 1);
    if (uVar5 < uVar6) {
      png_zstream_error(param_1,-4);
      if ((local_48 ^ (ulonglong)auStackY_88) == __security_cookie.value) {
        return -4;
      }
      goto LAB_140dd5b55;
    }
  }
  if (uVar5 - uVar6 < *param_4) {
    *param_4 = uVar5 - uVar6;
  }
  iVar3 = png_inflate_claim(param_1,param_1->chunk_name);
  if (iVar3 == 0) {
    local_4c = param_2 - param_3;
    iVar3 = png_inflate(param_1,param_1->chunk_name,(int)param_1->read_buffer + param_3,
                        (uchar *)&local_4c,(uint *)0x0,(uchar *)param_4,in_stack_ffffffffffffffa8);
    if (iVar3 == 1) {
      iVar3 = inflateReset(&param_1->zstream);
      if (iVar3 == 0) {
        uVar1 = *param_4;
        _Size_00 = _Size + uVar1 + 1;
        _Dst = png_malloc_base(param_1,_Size_00);
        if (_Dst == (uchar *)0x0) {
          png_zstream_error(param_1,-4);
          iVar3 = -4;
        }
        else {
          memset(_Dst,0,_Size_00);
          iVar3 = png_inflate(param_1,param_1->chunk_name,(int)param_1->read_buffer + param_3,
                              (uchar *)&local_4c,(uint *)(_Dst + _Size),(uchar *)param_4,
                              in_stack_ffffffffffffffa8);
          if ((iVar3 == 1) && (iVar3 = -7, uVar1 == *param_4)) {
            _Dst[_Size + uVar1] = '\0';
            _Src = param_1->read_buffer;
            if (param_3 != 0) {
              memcpy(_Dst,_Src,_Size);
            }
            param_1->read_buffer = _Dst;
            param_1->read_buffer_size = _Size_00;
            png_free(param_1,_Src);
            iVar3 = 1;
            if (param_2 - param_3 != local_4c) {
              png_chunk_benign_error(param_1,"extra compressed data");
              iVar3 = 1;
            }
          }
          else {
            png_free(param_1,_Dst);
          }
        }
      }
      else {
        png_zstream_error(param_1,1);
        iVar3 = -7;
      }
    }
    param_1->zowner = 0;
    if ((local_48 ^ (ulonglong)auStackY_88) == __security_cookie.value) {
      return iVar3;
    }
  }
  else {
    iVar4 = -7;
    if (iVar3 != 1) {
      iVar4 = iVar3;
    }
    if ((local_48 ^ (ulonglong)auStackY_88) == __security_cookie.value) {
      return iVar4;
    }
  }
LAB_140dd5b55:
  pcVar2 = (code *)swi(3);
  iVar3 = (*pcVar2)();
  return iVar3;
}

// png_handle_iTXt @ 140dd5ce0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl png_handle_iTXt(png_struct_def_conflict *param_1,png_info_def *param_2,uint param_3)

{
  uchar uVar1;
  code *pcVar2;
  ulonglong uVar3;
  int iVar4;
  uchar *_Dst;
  uchar *puVar5;
  char *pcVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  undefined1 auStackY_b8 [32];
  int in_stack_ffffffffffffff68;
  png_text_struct local_88;
  ulong64 local_50;
  ulonglong local_48;
  
  uVar3 = (ulonglong)param_3;
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_b8;
  uVar9 = param_1->user_chunk_cache_max;
  if (uVar9 != 0) {
    if (uVar9 == 1) {
      png_crc_finish(param_1,param_3);
      return;
    }
    param_1->user_chunk_cache_max = uVar9 - 1;
    if (uVar9 - 1 == 1) {
      png_crc_finish(param_1,param_3);
      pcVar6 = "no space in chunk cache";
      goto LAB_140dd5e83;
    }
  }
  uVar9 = param_1->mode;
  if ((uVar9 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
    png_chunk_error(param_1,"missing IHDR");
  }
  if ((uVar9 & 4) != 0) {
    param_1->mode = uVar9 | 8;
  }
  uVar11 = (ulonglong)(param_3 + 1);
  _Dst = param_1->read_buffer;
  if (_Dst == (uchar *)0x0) {
LAB_140dd5daf:
    _Dst = png_malloc_base(param_1,uVar11);
    if (_Dst == (uchar *)0x0) {
      png_chunk_warning(param_1,"insufficient memory to read chunk");
      png_crc_finish(param_1,param_3);
      pcVar6 = "out of memory";
LAB_140dd5e83:
      png_chunk_benign_error(param_1,pcVar6);
      return;
    }
    memset(_Dst,0,uVar11);
    param_1->read_buffer = _Dst;
    param_1->read_buffer_size = uVar11;
  }
  else if (param_1->read_buffer_size < uVar11) {
    param_1->read_buffer = (uchar *)0x0;
    param_1->read_buffer_size = 0;
    png_free(param_1,_Dst);
    goto LAB_140dd5daf;
  }
  png_read_data(param_1,_Dst,uVar3);
  png_calculate_crc(param_1,_Dst,uVar3);
  iVar4 = png_crc_finish(param_1,0);
  if (iVar4 != 0) goto LAB_140dd6007;
  pcVar6 = "bad keyword";
  if (param_3 != 0) {
    uVar11 = 0;
    do {
      uVar12 = uVar11;
      if (_Dst[uVar11] == '\0') break;
      uVar11 = uVar11 + 1;
      uVar12 = uVar3;
    } while (uVar3 != uVar11);
    iVar4 = (int)uVar12;
    if (0xffffffb0 < iVar4 - 0x50U) {
      if (param_3 < iVar4 + 5U) {
        pcVar6 = "truncated";
      }
      else {
        uVar1 = _Dst[(uVar12 & 0xffffffff) + 1];
        if ((uVar1 == '\0') ||
           ((pcVar6 = "bad compression info", uVar1 == '\x01' &&
            (_Dst[(uVar12 & 0xffffffff) + 2] == '\0')))) {
          uVar7 = iVar4 + 3;
          uVar9 = uVar7;
          if (uVar7 < param_3) {
            puVar5 = _Dst + uVar7;
            uVar8 = uVar7;
            do {
              uVar9 = uVar8;
              if (*puVar5 == '\0') break;
              uVar8 = uVar8 + 1;
              puVar5 = puVar5 + 1;
              uVar9 = param_3;
            } while (param_3 != uVar8);
          }
          uVar9 = uVar9 + 1;
          uVar8 = uVar9;
          if (uVar9 < param_3) {
            puVar5 = _Dst + uVar9;
            uVar10 = uVar9;
            do {
              uVar8 = uVar10;
              if (*puVar5 == '\0') break;
              uVar10 = uVar10 + 1;
              puVar5 = puVar5 + 1;
              uVar8 = param_3;
            } while (param_3 != uVar10);
          }
          uVar8 = uVar8 + 1;
          if ((uVar1 != '\0') || (uVar3 = (ulonglong)(param_3 - uVar8), param_3 < uVar8)) {
            pcVar6 = "truncated";
            if ((uVar1 == '\0') || (param_3 <= uVar8)) goto LAB_140dd5ffc;
            local_50 = 0xffffffffffffffff;
            iVar4 = png_decompress_chunk(param_1,param_3,uVar8,&local_50,in_stack_ffffffffffffff68);
            uVar3 = local_50;
            if (iVar4 == 1) {
              _Dst = param_1->read_buffer;
            }
            else {
              pcVar6 = (param_1->zstream).msg;
              if (pcVar6 != (char *)0x0) goto LAB_140dd5ffc;
            }
          }
          local_50 = uVar3;
          local_88.compression = 2 - (uint)(uVar1 == '\0');
          _Dst[local_50 + uVar8] = '\0';
          local_88.lang = (char *)(_Dst + uVar7);
          local_88.lang_key = (char *)(_Dst + uVar9);
          local_88.text = (char *)(_Dst + uVar8);
          local_88.text_length = 0;
          local_88.itxt_length = local_50;
          local_88.key = (char *)_Dst;
          iVar4 = png_set_text_2(param_1,param_2,&local_88,1);
          if (iVar4 == 0) goto LAB_140dd6007;
          pcVar6 = "insufficient memory";
        }
      }
    }
  }
LAB_140dd5ffc:
  png_chunk_benign_error(param_1,pcVar6);
LAB_140dd6007:
  if ((local_48 ^ (ulonglong)auStackY_b8) != __security_cookie.value) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  return;
}

// png_handle_unknown @ 140dd6050

void __cdecl
png_handle_unknown(png_struct_def_conflict *param_1,png_info_def *param_2,uint param_3,int param_4)

{
  uint uVar1;
  uchar *puVar2;
  bool bVar3;
  bool bVar4;
  int iVar5;
  
  if (param_1->read_user_chunk_fn ==
      (_func___cdecl_int_png_struct_def_ptr_png_unknown_chunk_t_ptr_conflict *)0x0) {
    if (param_4 == 0) {
      param_4 = param_1->unknown_default;
    }
    if ((param_4 == 3) || ((param_4 == 2 && ((param_1->chunk_name & 0x20000000) != 0)))) {
      iVar5 = png_cache_unknown_chunk(param_1,param_3);
      if (iVar5 == 0) goto LAB_140dd6164;
    }
    else {
      png_crc_finish(param_1,param_3);
    }
LAB_140dd610a:
    if (param_4 != 3) {
      if (param_4 == 2) {
LAB_140dd6117:
        if ((param_1->chunk_name & 0x20000000) != 0) goto LAB_140dd6123;
      }
LAB_140dd6164:
      bVar4 = true;
      bVar3 = true;
      puVar2 = (param_1->unknown_chunk).data;
      goto joined_r0x000140dd616e;
    }
LAB_140dd6123:
    uVar1 = param_1->user_chunk_cache_max;
    if (uVar1 != 0) {
      bVar4 = true;
      bVar3 = true;
      if (uVar1 == 1) goto LAB_140dd6164;
      if (uVar1 == 2) {
        param_1->user_chunk_cache_max = 1;
        png_chunk_benign_error(param_1,"no space in chunk cache");
        puVar2 = (param_1->unknown_chunk).data;
        goto joined_r0x000140dd616e;
      }
      param_1->user_chunk_cache_max = uVar1 - 1;
    }
    png_set_unknown_chunks(param_1,param_2,&param_1->unknown_chunk,1);
  }
  else {
    iVar5 = png_cache_unknown_chunk(param_1,param_3);
    if (iVar5 == 0) goto LAB_140dd6164;
    iVar5 = (*param_1->read_user_chunk_fn)(param_1,&param_1->unknown_chunk);
    if (iVar5 < 0) {
                    /* WARNING: Subroutine does not return */
      png_chunk_error(param_1,"error in user chunk");
    }
    if (iVar5 == 0) {
      if (1 < param_4) goto LAB_140dd610a;
      if (param_1->unknown_default < 2) {
        png_chunk_warning(param_1,"Saving unknown chunk:");
        png_app_warning(param_1,
                        "forcing save of an unhandled chunk; please call png_set_keep_unknown_chunks"
                       );
      }
      goto LAB_140dd6117;
    }
  }
  bVar4 = false;
  bVar3 = false;
  puVar2 = (param_1->unknown_chunk).data;
joined_r0x000140dd616e:
  if (puVar2 != (uchar *)0x0) {
    png_free(param_1,puVar2);
    bVar3 = bVar4;
  }
  (param_1->unknown_chunk).data = (uchar *)0x0;
  if ((bVar3) && ((param_1->chunk_name & 0x20000000) == 0)) {
                    /* WARNING: Subroutine does not return */
    png_chunk_error(param_1,"unhandled critical chunk");
  }
  return;
}

// png_cache_unknown_chunk @ 140dd61f0

int __cdecl png_cache_unknown_chunk(png_struct_def_conflict *param_1,uint param_2)

{
  uint uVar1;
  uchar *puVar2;
  ulonglong uVar3;
  
  puVar2 = (param_1->unknown_chunk).data;
  if (puVar2 != (uchar *)0x0) {
    png_free(param_1,puVar2);
    (param_1->unknown_chunk).data = (uchar *)0x0;
  }
  uVar3 = (ulonglong)param_2;
  if ((param_1->user_chunk_malloc_max + 1 < 2) || (uVar3 <= param_1->user_chunk_malloc_max)) {
    uVar1 = param_1->chunk_name;
    (param_1->unknown_chunk).name[0] = (uchar)(uVar1 >> 0x18);
    (param_1->unknown_chunk).name[1] = (uchar)(uVar1 >> 0x10);
    (param_1->unknown_chunk).name[2] = (uchar)(uVar1 >> 8);
    (param_1->unknown_chunk).name[3] = (uchar)uVar1;
    (param_1->unknown_chunk).name[4] = '\0';
    (param_1->unknown_chunk).size = uVar3;
    (param_1->unknown_chunk).location = (uchar)param_1->mode;
    if (param_2 == 0) {
      (param_1->unknown_chunk).data = (uchar *)0x0;
      goto LAB_140dd62ec;
    }
    puVar2 = png_malloc_warn(param_1,uVar3);
    (param_1->unknown_chunk).data = puVar2;
  }
  else {
    puVar2 = (uchar *)0x0;
  }
  if (param_2 != 0 && puVar2 == (uchar *)0x0) {
    png_crc_finish(param_1,param_2);
    png_chunk_benign_error(param_1,"unknown chunk exceeds memory limits");
    return 0;
  }
  if (param_2 != 0) {
    png_read_data(param_1,puVar2,uVar3);
    png_calculate_crc(param_1,puVar2,uVar3);
  }
LAB_140dd62ec:
  png_crc_finish(param_1,0);
  return 1;
}

// png_combine_row @ 140dd6310

void __cdecl png_combine_row(png_struct_def_conflict *param_1,uchar *param_2,int param_3)

{
  byte bVar1;
  uchar uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  ulonglong uVar6;
  uchar *puVar7;
  char cVar8;
  uint *puVar9;
  byte bVar10;
  uint uVar11;
  byte bVar12;
  uint uVar13;
  ulonglong uVar14;
  ulong64 uVar15;
  ulonglong uVar16;
  byte *pbVar17;
  ulonglong uVar18;
  size_t _Size;
  longlong lVar19;
  uchar *puVar20;
  byte bVar21;
  uchar *puVar22;
  ulonglong uVar23;
  ulonglong uVar24;
  uint uVar25;
  ulonglong uVar26;
  uint uVar27;
  ulonglong uVar28;
  uchar *puVar29;
  bool bVar30;
  
  bVar1 = param_1->transformed_pixel_depth;
  if (bVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    png_error(param_1,"internal row logic error");
  }
  puVar22 = param_1->row_buf;
  uVar27 = param_1->width;
  uVar28 = (ulonglong)uVar27;
  bVar21 = param_1->pass;
  if (param_1->info_rowbytes != 0) {
    if (bVar1 < 8) {
      uVar15 = uVar28 * bVar1 + 7 >> 3;
    }
    else {
      uVar15 = (bVar1 >> 3) * uVar28;
    }
    if (param_1->info_rowbytes != uVar15) {
                    /* WARNING: Subroutine does not return */
      png_error(param_1,"internal row size calculation error");
    }
  }
  if (uVar28 == 0) {
                    /* WARNING: Subroutine does not return */
    png_error(param_1,"internal row width error");
  }
  uVar26 = uVar28 * bVar1;
  if ((uVar26 & 7) == 0) {
    bVar10 = 0;
    bVar12 = 0;
    pbVar17 = (byte *)0x0;
    uVar2 = param_1->interlaced;
  }
  else {
    if (bVar1 < 8) {
      uVar16 = uVar26 + 7 >> 3;
      bVar10 = param_2[uVar16 - 1];
      bVar12 = *(byte *)((longlong)&param_1->transformations + 2);
    }
    else {
      uVar16 = (bVar1 >> 3) * uVar28;
      bVar10 = param_2[uVar16 - 1];
      bVar12 = *(byte *)((longlong)&param_1->transformations + 2);
    }
    pbVar17 = param_2 + (uVar16 - 1);
    if ((bVar12 & 1) == 0) {
      bVar12 = (byte)(0xff >> ((byte)uVar26 & 7));
      uVar2 = param_1->interlaced;
    }
    else {
      bVar12 = (byte)(0xff << ((byte)uVar26 & 7));
      uVar2 = param_1->interlaced;
    }
  }
  if ((uVar2 != '\0') && ((bVar21 < 6 & (byte)param_1->transformations >> 1) == 1)) {
    uVar11 = (uint)bVar21;
    if (param_3 == 1) {
      uVar25 = 1;
      if ((bVar21 & 1) != 0) goto LAB_140dd64a6;
    }
    else if (param_3 == 0) {
      uVar25 = uVar11 & 1;
LAB_140dd64a6:
      uVar25 = uVar25 << (3U - (char)(bVar21 + 1 >> 1) & 0x1f) & 7;
      if (uVar27 <= uVar25) {
        return;
      }
      if (7 < bVar1) {
        if ((bVar1 & 7) != 0) {
                    /* WARNING: Subroutine does not return */
          png_error(param_1,"invalid user transform pixel depth");
        }
        bVar1 = bVar1 >> 3;
        lVar19 = uVar28 * bVar1;
        uVar25 = uVar25 * bVar1;
        uVar28 = (ulonglong)uVar25;
        uVar26 = lVar19 - uVar28;
        uVar16 = (ulonglong)(uint)bVar1;
        if (param_3 != 0) {
          uVar18 = (ulonglong)((uint)bVar1 << ((byte)(6 - uVar11 >> 1) & 0x1f));
          uVar16 = uVar26 & 0xffffffff;
          if (uVar18 <= uVar26) {
            uVar16 = uVar18;
          }
        }
        puVar20 = param_2 + uVar28;
        puVar7 = puVar22 + uVar28 + 1;
        uVar13 = (uint)bVar1 << ((byte)(7 - uVar11 >> 1) & 0x1f);
        uVar18 = (ulonglong)uVar13;
        uVar11 = (uint)uVar16;
        if (uVar11 == 1) {
          *puVar20 = *puVar7;
          for (; uVar18 < uVar26; uVar26 = uVar26 - uVar18) {
            uVar28 = uVar28 + uVar18;
            param_2[uVar28] = puVar22[uVar28 + 1];
          }
          return;
        }
        if (uVar11 == 2) {
          do {
            param_2[uVar28] = puVar22[uVar28 + 1];
            param_2[uVar28 + 1] = puVar22[uVar28 + 2];
            bVar30 = uVar26 < uVar18;
            uVar26 = uVar26 - uVar18;
            if (bVar30 || uVar26 == 0) {
              return;
            }
            uVar28 = uVar28 + uVar18;
          } while (1 < uVar26);
          param_2[uVar28] = puVar22[uVar28 + 1];
          return;
        }
        if (uVar11 == 3) {
          *puVar20 = *puVar7;
          puVar20[1] = puVar7[1];
          puVar20[2] = puVar7[2];
          for (; uVar18 < uVar26; uVar26 = uVar26 - uVar18) {
            uVar28 = uVar28 + uVar18;
            param_2[uVar28] = puVar22[uVar28 + 1];
            param_2[uVar28 + 1] = puVar22[uVar28 + 2];
            param_2[uVar28 + 2] = puVar22[uVar28 + 3];
          }
          return;
        }
        if ((((0xf < uVar11) || (((ulonglong)puVar20 & 1) != 0)) || (((ulonglong)puVar7 & 1) != 0))
           || (((uVar16 & 1) != 0 || ((uVar13 & 1) != 0)))) {
          memcpy(puVar20,puVar7,uVar16);
          if (uVar26 <= uVar18) {
            return;
          }
          uVar27 = (uVar27 * bVar1 - uVar25) - uVar13;
          do {
            uVar28 = uVar28 + uVar18;
            uVar14 = uVar26 - uVar18;
            uVar26 = uVar26 - uVar18;
            if (uVar14 < uVar16) {
              uVar16 = (ulonglong)uVar27;
            }
            memcpy(param_2 + uVar28,puVar22 + uVar28 + 1,uVar16);
            uVar27 = uVar27 - uVar13;
          } while (uVar18 < uVar26);
          return;
        }
        if (((uVar11 | (uint)puVar20 | (uint)puVar7 | uVar13) & 2) != 0) {
          uVar14 = (ulonglong)(uVar13 - uVar11 & 0xfffffffe);
          uVar28 = (lVar19 - uVar18) - uVar28;
          do {
            puVar29 = puVar7;
            puVar22 = puVar20;
            uVar6 = uVar28;
            uVar23 = 0;
            do {
              uVar24 = uVar23;
              *(undefined2 *)(puVar22 + uVar24) = *(undefined2 *)(puVar29 + uVar24);
              uVar23 = uVar24 + 2;
            } while (uVar16 != uVar23);
            bVar30 = uVar26 < uVar18;
            uVar26 = uVar26 - uVar18;
            if (bVar30 || uVar26 == 0) {
              return;
            }
            uVar28 = uVar6 - uVar18;
            puVar20 = puVar22 + uVar23 + uVar14;
            puVar7 = puVar29 + uVar23 + uVar14;
          } while (uVar16 <= uVar26);
          puVar20 = puVar22 + uVar23 + uVar14;
          puVar7 = puVar29 + uVar23 + uVar14;
          uVar28 = uVar26;
          if ((7 < uVar26) && (0x1f < (ulonglong)((longlong)puVar22 - (longlong)puVar29))) {
            if (uVar26 < 0x20) {
              uVar16 = 0;
            }
            else {
              uVar16 = uVar26 & 0xffffffffffffffe0;
              uVar28 = 0;
              do {
                uVar3 = *(undefined8 *)(puVar29 + uVar23 + uVar28 + uVar14 + 8);
                uVar4 = *(undefined8 *)(puVar29 + uVar24 + 0x12 + uVar28 + uVar14);
                uVar5 = *(undefined8 *)(puVar29 + uVar24 + 0x12 + uVar28 + uVar14 + 8);
                *(undefined8 *)(puVar22 + uVar23 + uVar28 + uVar14) =
                     *(undefined8 *)(puVar29 + uVar23 + uVar28 + uVar14);
                *(undefined8 *)(puVar22 + uVar23 + uVar28 + uVar14 + 8) = uVar3;
                *(undefined8 *)(puVar22 + uVar24 + 0x12 + uVar28 + uVar14) = uVar4;
                *(undefined8 *)(puVar22 + uVar24 + 0x12 + uVar28 + uVar14 + 8) = uVar5;
                uVar28 = uVar28 + 0x20;
              } while ((uVar6 & 0xffffffffffffffe0) != uVar28);
              if (uVar26 == uVar16) {
                return;
              }
              if ((uVar26 & 0x18) == 0) {
                puVar20 = puVar22 + uVar23 + (uVar26 & 0xffffffffffffffe0) + uVar14;
                puVar7 = puVar29 + uVar23 + (uVar26 & 0xffffffffffffffe0) + uVar14;
                uVar28 = (ulonglong)((uint)uVar26 & 0x1f);
                goto LAB_140dd6ac8;
              }
            }
            uVar18 = uVar26 & 0xfffffffffffffff8;
            uVar28 = (ulonglong)((uint)uVar26 & 7);
            puVar7 = puVar29 + uVar23 + uVar18 + uVar14;
            puVar20 = puVar22 + uVar23 + uVar18 + uVar14;
            lVar19 = 0;
            do {
              *(undefined8 *)(puVar22 + uVar23 + lVar19 + uVar16 + uVar14) =
                   *(undefined8 *)(puVar29 + uVar23 + lVar19 + uVar16 + uVar14);
              lVar19 = lVar19 + 8;
            } while ((uVar6 & 0xfffffffffffffff8) - uVar16 != lVar19);
            if (uVar26 == uVar18) {
              return;
            }
          }
LAB_140dd6ac8:
          uVar26 = uVar28 - 1;
          if ((uVar28 & 7) != 0) {
            uVar16 = 0;
            do {
              puVar20[uVar16] = puVar7[uVar16];
              uVar16 = uVar16 + 1;
            } while ((uVar28 & 7) != uVar16);
            uVar28 = uVar28 - uVar16;
            puVar7 = puVar7 + uVar16;
            puVar20 = puVar20 + uVar16;
          }
          if (uVar26 < 7) {
            return;
          }
          uVar26 = 0;
          do {
            puVar20[uVar26] = puVar7[uVar26];
            puVar20[uVar26 + 1] = puVar7[uVar26 + 1];
            puVar20[uVar26 + 2] = puVar7[uVar26 + 2];
            puVar20[uVar26 + 3] = puVar7[uVar26 + 3];
            puVar20[uVar26 + 4] = puVar7[uVar26 + 4];
            puVar20[uVar26 + 5] = puVar7[uVar26 + 5];
            puVar20[uVar26 + 6] = puVar7[uVar26 + 6];
            puVar20[uVar26 + 7] = puVar7[uVar26 + 7];
            uVar26 = uVar26 + 8;
          } while (uVar28 != uVar26);
          return;
        }
        uVar14 = (ulonglong)(uVar13 - uVar11 & 0xfffffffc);
        uVar28 = (lVar19 - uVar18) - uVar28;
        do {
          puVar29 = puVar7;
          puVar22 = puVar20;
          uVar6 = uVar28;
          uVar23 = 0;
          do {
            uVar24 = uVar23;
            *(undefined4 *)(puVar22 + uVar24) = *(undefined4 *)(puVar29 + uVar24);
            uVar23 = uVar24 + 4;
          } while (uVar16 != uVar23);
          bVar30 = uVar26 < uVar18;
          uVar26 = uVar26 - uVar18;
          if (bVar30 || uVar26 == 0) {
            return;
          }
          uVar28 = uVar6 - uVar18;
          puVar20 = puVar22 + uVar23 + uVar14;
          puVar7 = puVar29 + uVar23 + uVar14;
        } while (uVar16 <= uVar26);
        puVar20 = puVar22 + uVar23 + uVar14;
        puVar7 = puVar29 + uVar23 + uVar14;
        uVar28 = uVar26;
        if ((7 < uVar26) && (0x1f < (ulonglong)((longlong)puVar22 - (longlong)puVar29))) {
          if (uVar26 < 0x20) {
            uVar16 = 0;
          }
          else {
            uVar16 = uVar26 & 0xffffffffffffffe0;
            uVar28 = 0;
            do {
              uVar3 = *(undefined8 *)(puVar29 + uVar23 + uVar28 + uVar14 + 8);
              uVar4 = *(undefined8 *)(puVar29 + uVar24 + 0x14 + uVar28 + uVar14);
              uVar5 = *(undefined8 *)(puVar29 + uVar24 + 0x14 + uVar28 + uVar14 + 8);
              *(undefined8 *)(puVar22 + uVar23 + uVar28 + uVar14) =
                   *(undefined8 *)(puVar29 + uVar23 + uVar28 + uVar14);
              *(undefined8 *)(puVar22 + uVar23 + uVar28 + uVar14 + 8) = uVar3;
              *(undefined8 *)(puVar22 + uVar24 + 0x14 + uVar28 + uVar14) = uVar4;
              *(undefined8 *)(puVar22 + uVar24 + 0x14 + uVar28 + uVar14 + 8) = uVar5;
              uVar28 = uVar28 + 0x20;
            } while ((uVar6 & 0xffffffffffffffe0) != uVar28);
            if (uVar26 == uVar16) {
              return;
            }
            if ((uVar26 & 0x18) == 0) {
              puVar20 = puVar22 + uVar23 + (uVar26 & 0xffffffffffffffe0) + uVar14;
              puVar7 = puVar29 + uVar23 + (uVar26 & 0xffffffffffffffe0) + uVar14;
              uVar28 = (ulonglong)((uint)uVar26 & 0x1f);
              goto LAB_140dd6a17;
            }
          }
          uVar18 = uVar26 & 0xfffffffffffffff8;
          uVar28 = (ulonglong)((uint)uVar26 & 7);
          puVar7 = puVar29 + uVar23 + uVar18 + uVar14;
          puVar20 = puVar22 + uVar23 + uVar18 + uVar14;
          lVar19 = 0;
          do {
            *(undefined8 *)(puVar22 + uVar23 + lVar19 + uVar16 + uVar14) =
                 *(undefined8 *)(puVar29 + uVar23 + lVar19 + uVar16 + uVar14);
            lVar19 = lVar19 + 8;
          } while ((uVar6 & 0xfffffffffffffff8) - uVar16 != lVar19);
          if (uVar26 == uVar18) {
            return;
          }
        }
LAB_140dd6a17:
        uVar26 = uVar28 - 1;
        if ((uVar28 & 7) != 0) {
          uVar16 = 0;
          do {
            puVar20[uVar16] = puVar7[uVar16];
            uVar16 = uVar16 + 1;
          } while ((uVar28 & 7) != uVar16);
          uVar28 = uVar28 - uVar16;
          puVar7 = puVar7 + uVar16;
          puVar20 = puVar20 + uVar16;
        }
        if (uVar26 < 7) {
          return;
        }
        uVar26 = 0;
        do {
          puVar20[uVar26] = puVar7[uVar26];
          puVar20[uVar26 + 1] = puVar7[uVar26 + 1];
          puVar20[uVar26 + 2] = puVar7[uVar26 + 2];
          puVar20[uVar26 + 3] = puVar7[uVar26 + 3];
          puVar20[uVar26 + 4] = puVar7[uVar26 + 4];
          puVar20[uVar26 + 5] = puVar7[uVar26 + 5];
          puVar20[uVar26 + 6] = puVar7[uVar26 + 6];
          puVar20[uVar26 + 7] = puVar7[uVar26 + 7];
          uVar26 = uVar26 + 8;
        } while (uVar28 != uVar26);
        return;
      }
      lVar19 = 0;
      if (bVar1 != 1) {
        lVar19 = (ulonglong)(bVar1 != 2) + 1;
      }
      if ((param_1->transformations & 0x10000) == 0) {
        if (param_3 == 0) {
          puVar9 = row_mask[1][lVar19] + bVar21;
        }
        else {
          puVar9 = (uint *)((longlong)display_mask[1][lVar19] + (ulonglong)(bVar21 & 0xfffffffe) * 2
                           );
        }
      }
      else if (param_3 == 0) {
        puVar9 = row_mask[0][lVar19] + uVar11;
      }
      else {
        puVar9 = (uint *)((longlong)display_mask[0][lVar19] + (ulonglong)(bVar21 & 0xfffffffe) * 2);
      }
      lVar19 = 0;
      cVar8 = (char)*puVar9;
      uVar27 = *puVar9;
      while( true ) {
        if (cVar8 != '\0') {
          if ((uVar27 & 0xff) == 0xff) {
            bVar21 = puVar22[lVar19 + 1];
          }
          else {
            bVar21 = (puVar22[lVar19 + 1] ^ param_2[lVar19]) & (byte)uVar27 ^ param_2[lVar19];
          }
          param_2[lVar19] = bVar21;
        }
        bVar30 = uVar28 < 8 / bVar1;
        uVar28 = uVar28 - 8 / bVar1;
        if (bVar30 || uVar28 == 0) break;
        lVar19 = lVar19 + 1;
        cVar8 = (char)(uVar27 >> 8);
        uVar27 = uVar27 << 0x18 | uVar27 >> 8;
      }
      goto LAB_140dd6482;
    }
  }
  if (bVar1 < 8) {
    _Size = uVar26 + 7 >> 3;
  }
  else {
    _Size = (bVar1 >> 3) * uVar28;
  }
  memcpy(param_2,puVar22 + 1,_Size);
LAB_140dd6482:
  if (pbVar17 != (byte *)0x0) {
    *pbVar17 = (bVar10 ^ *pbVar17) & bVar12 ^ *pbVar17;
  }
  return;
}

// png_do_read_interlace @ 140dd6ba0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
png_do_read_interlace(png_row_info_struct *param_1,uchar *param_2,int param_3,uint param_4)

{
  byte bVar1;
  code *pcVar2;
  uint uVar3;
  longlong lVar4;
  ulonglong uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uchar *puVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  int iVar14;
  byte *pbVar15;
  longlong lVar16;
  byte *pbVar17;
  uint uVar18;
  uchar *_Dst;
  bool bVar19;
  undefined1 auStack_b8 [32];
  uint local_98;
  uint local_94;
  uchar *local_90;
  longlong local_88;
  png_row_info_struct *local_80;
  ulonglong local_78;
  uint local_6c;
  ulonglong local_68;
  longlong local_60;
  longlong local_58;
  undefined1 local_50 [8];
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_b8;
  if (param_1 == (png_row_info_struct *)0x0 || param_2 == (uchar *)0x0) goto LAB_140dd72f0;
  uVar18 = param_1->width;
  local_68 = (ulonglong)param_3;
  uVar11 = png_pass_inc[local_68];
  uVar10 = uVar11 * uVar18;
  local_78 = (ulonglong)uVar10;
  bVar1 = param_1->pixel_depth;
  local_88 = CONCAT44(local_88._4_4_,param_3);
  uVar12 = local_98;
  puVar9 = local_90;
  local_80 = param_1;
  if (bVar1 == 4) {
    uVar8 = uVar18 * 4 & 4;
    if ((param_4 & 0x10000) == 0) {
      uVar3 = uVar10 * 4 & 4;
      uVar13 = 4;
      uVar7 = 0;
      iVar14 = 4;
    }
    else {
      uVar8 = uVar8 ^ 4;
      uVar3 = (~uVar10 & 1) << 2;
      iVar14 = -4;
      uVar13 = 0;
      uVar7 = 4;
    }
    if (uVar18 != 0) {
      pbVar15 = param_2 + (uVar18 - 1 >> 1);
      pbVar17 = param_2 + (uVar10 - 1 >> 1);
      uVar18 = 1;
      if (1 < (int)uVar11) {
        uVar18 = uVar11;
      }
      local_90 = (uchar *)CONCAT44(local_90._4_4_,uVar18);
      uVar11 = 0;
      do {
        uVar10 = *pbVar15 >> ((byte)uVar8 & 0x1f) & 0xf;
        uVar12 = uVar18 & 0x7ffffffe;
        if (param_3 != 6) {
          do {
            *pbVar17 = (byte)(uVar10 << ((byte)uVar3 & 0x1f)) |
                       (byte)(0xf0f >> (4 - (byte)uVar3 & 0x1f)) & *pbVar17;
            uVar6 = uVar3 + iVar14;
            if (uVar3 == uVar13) {
              uVar6 = uVar7;
            }
            uVar5 = (ulonglong)(uVar3 == uVar13);
            pbVar17[-uVar5] =
                 (byte)(uVar10 << ((byte)uVar6 & 0x1f)) |
                 (byte)(0xf0f >> (4 - (byte)uVar6 & 0x1f)) & pbVar17[-uVar5];
            uVar3 = uVar6 + iVar14;
            if (uVar6 == uVar13) {
              uVar3 = uVar7;
            }
            pbVar17 = pbVar17 + -uVar5 + -(ulonglong)(uVar6 == uVar13);
            uVar12 = uVar12 - 2;
          } while (uVar12 != 0);
        }
        if ((uVar18 & 1) != 0) {
          *pbVar17 = (byte)(uVar10 << ((byte)uVar3 & 0x1f)) |
                     (byte)(0xf0f >> (4 - (byte)uVar3 & 0x1f)) & *pbVar17;
          bVar19 = uVar3 == uVar13;
          uVar3 = uVar3 + iVar14;
          if (bVar19) {
            uVar3 = uVar7;
          }
          pbVar17 = pbVar17 + -(ulonglong)bVar19;
        }
        bVar19 = uVar8 == uVar13;
        uVar8 = uVar8 + iVar14;
        if (bVar19) {
          uVar8 = uVar7;
        }
        pbVar15 = pbVar15 + -(ulonglong)bVar19;
        uVar11 = uVar11 + 1;
        uVar12 = uVar18 & 0x7ffffffe;
        puVar9 = local_90;
      } while (uVar11 < param_1->width);
    }
LAB_140dd72bf:
    local_90 = puVar9;
    local_98 = uVar12;
    bVar1 = local_80->pixel_depth;
  }
  else {
    if (bVar1 == 2) {
      uVar8 = uVar18 * 2 + 6 & 6;
      if ((param_4 & 0x10000) == 0) {
        uVar8 = uVar8 ^ 6;
        uVar3 = ~(uVar10 * 2 + 6);
        iVar14 = 2;
        uVar13 = 6;
        uVar7 = 0;
      }
      else {
        uVar3 = uVar10 * 2 + 6;
        iVar14 = -2;
        uVar13 = 0;
        uVar7 = 6;
      }
      if (uVar18 != 0) {
        uVar3 = uVar3 & 6;
        pbVar15 = param_2 + (uVar18 - 1 >> 2);
        pbVar17 = param_2 + (uVar10 - 1 >> 2);
        uVar18 = 1;
        if (1 < (int)uVar11) {
          uVar18 = uVar11;
        }
        local_90 = (uchar *)CONCAT44(local_90._4_4_,uVar18);
        uVar11 = 0;
        do {
          uVar10 = *pbVar15 >> ((byte)uVar8 & 0x1f) & 3;
          uVar12 = uVar18 & 0x7ffffffe;
          if (param_3 != 6) {
            do {
              *pbVar17 = (byte)(uVar10 << ((byte)uVar3 & 0x1f)) |
                         (byte)(0x3f3f >> (6 - (byte)uVar3 & 0x1f)) & *pbVar17;
              uVar6 = uVar3 + iVar14;
              if (uVar3 == uVar13) {
                uVar6 = uVar7;
              }
              uVar5 = (ulonglong)(uVar3 == uVar13);
              pbVar17[-uVar5] =
                   (byte)(uVar10 << ((byte)uVar6 & 0x1f)) |
                   (byte)(0x3f3f >> (6 - (byte)uVar6 & 0x1f)) & pbVar17[-uVar5];
              uVar3 = uVar6 + iVar14;
              if (uVar6 == uVar13) {
                uVar3 = uVar7;
              }
              pbVar17 = pbVar17 + -uVar5 + -(ulonglong)(uVar6 == uVar13);
              uVar12 = uVar12 - 2;
            } while (uVar12 != 0);
          }
          if ((uVar18 & 1) != 0) {
            *pbVar17 = (byte)(uVar10 << ((byte)uVar3 & 0x1f)) |
                       (byte)(0x3f3f >> (6 - (byte)uVar3 & 0x1f)) & *pbVar17;
            bVar19 = uVar3 == uVar13;
            uVar3 = uVar3 + iVar14;
            if (bVar19) {
              uVar3 = uVar7;
            }
            pbVar17 = pbVar17 + -(ulonglong)bVar19;
          }
          bVar19 = uVar8 == uVar13;
          uVar8 = uVar8 + iVar14;
          if (bVar19) {
            uVar8 = uVar7;
          }
          pbVar15 = pbVar15 + -(ulonglong)bVar19;
          uVar11 = uVar11 + 1;
          uVar12 = uVar18 & 0x7ffffffe;
          puVar9 = local_90;
        } while (uVar11 < param_1->width);
      }
      goto LAB_140dd72bf;
    }
    if (bVar1 == 1) {
      uVar8 = uVar18 - 1 & 7;
      if ((param_4 & 0x10000) == 0) {
        uVar8 = uVar8 ^ 7;
        uVar3 = -uVar10;
        uVar13 = 0;
        uVar7 = 7;
        iVar14 = 1;
      }
      else {
        uVar13 = 7;
        uVar7 = 0;
        iVar14 = -1;
        uVar3 = uVar10 - 1;
      }
      if (uVar18 != 0) {
        uVar3 = uVar3 & 7;
        pbVar15 = param_2 + (uVar18 - 1 >> 3);
        pbVar17 = param_2 + (uVar10 - 1 >> 3);
        uVar12 = 1;
        if (1 < (int)uVar11) {
          uVar12 = uVar11;
        }
        local_94 = uVar12 & 0x7ffffffe;
        uVar18 = 0;
        do {
          puVar9 = (uchar *)(ulonglong)uVar8;
          bVar19 = (*pbVar15 >> (uVar8 & 0x1f) & 1) != 0;
          uVar11 = local_94;
          if (param_3 != 6) {
            do {
              *pbVar17 = bVar19 << ((byte)uVar3 & 0x1f) |
                         (byte)(0x7f7f >> (7 - (byte)uVar3 & 0x1f)) & *pbVar17;
              uVar10 = uVar3 + iVar14;
              if (uVar3 == uVar7) {
                uVar10 = uVar13;
              }
              uVar5 = (ulonglong)(uVar3 == uVar7);
              pbVar17[-uVar5] =
                   bVar19 << ((byte)uVar10 & 0x1f) |
                   (byte)(0x7f7f >> (7 - (byte)uVar10 & 0x1f)) & pbVar17[-uVar5];
              uVar3 = uVar10 + iVar14;
              if (uVar10 == uVar7) {
                uVar3 = uVar13;
              }
              pbVar17 = pbVar17 + -uVar5 + -(ulonglong)(uVar10 == uVar7);
              uVar11 = uVar11 - 2;
            } while (uVar11 != 0);
          }
          if ((uVar12 & 1) != 0) {
            *pbVar17 = bVar19 << ((byte)uVar3 & 0x1f) |
                       (byte)(0x7f7f >> (7 - (byte)uVar3 & 0x1f)) & *pbVar17;
            bVar19 = uVar3 == uVar7;
            uVar3 = uVar3 + iVar14;
            if (bVar19) {
              uVar3 = uVar13;
            }
            pbVar17 = pbVar17 + -(ulonglong)bVar19;
          }
          bVar19 = uVar8 == uVar7;
          uVar8 = uVar8 + iVar14;
          if (bVar19) {
            uVar8 = uVar13;
          }
          pbVar15 = pbVar15 + -(ulonglong)bVar19;
          uVar18 = uVar18 + 1;
        } while (uVar18 < param_1->width);
      }
      goto LAB_140dd72bf;
    }
    if (uVar18 != 0) {
      uVar5 = (ulonglong)(uint)(bVar1 >> 3);
      lVar16 = -uVar5;
      _Dst = param_2 + (uVar10 - 1) * uVar5;
      local_90 = param_2 + (uVar18 - 1) * uVar5;
      local_6c = 1;
      if (1 < (int)uVar11) {
        local_6c = uVar11;
      }
      local_94 = local_6c & 3;
      local_68 = local_68 - 4;
      local_6c = local_6c & 0x7ffffffc;
      local_88 = uVar5 * -3;
      lVar4 = -(ulonglong)((uint)(bVar1 >> 3) * 2);
      local_98 = 0;
      local_60 = uVar5 * -2;
      local_58 = lVar4;
      do {
        memcpy(local_50,local_90,uVar5);
        uVar11 = local_6c;
        uVar12 = local_98;
        uVar18 = local_94;
        puVar9 = local_90;
        if (2 < local_68) {
          do {
            memcpy(_Dst,local_50,uVar5);
            puVar9 = _Dst + lVar16;
            memcpy(puVar9,local_50,uVar5);
            memcpy(_Dst + lVar4,local_50,uVar5);
            memcpy(_Dst + local_88,local_50,uVar5);
            uVar11 = uVar11 - 4;
            _Dst = puVar9 + uVar5 * -3;
            uVar12 = local_98;
            uVar18 = local_94;
            puVar9 = local_90;
          } while (uVar11 != 0);
        }
        for (; uVar18 != 0; uVar18 = uVar18 - 1) {
          local_98 = uVar12;
          local_90 = puVar9;
          memcpy(_Dst,local_50,uVar5);
          _Dst = _Dst + lVar16;
          uVar12 = local_98;
          puVar9 = local_90;
        }
        local_90 = puVar9 + lVar16;
        local_98 = uVar12 + 1;
      } while (local_98 < local_80->width);
      goto LAB_140dd72bf;
    }
  }
  local_80->width = (uint)local_78;
  if (bVar1 < 8) {
    uVar5 = (ulonglong)bVar1 * (local_78 & 0xffffffff) + 7 >> 3;
  }
  else {
    uVar5 = (ulonglong)(bVar1 >> 3) * (local_78 & 0xffffffff);
  }
  local_80->rowbytes = uVar5;
LAB_140dd72f0:
  if ((local_48 ^ (ulonglong)auStack_b8) != __security_cookie.value) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  return;
}

// png_read_filter_row @ 140dd7320

void __cdecl
png_read_filter_row(png_struct_def_conflict *param_1,png_row_info_struct *param_2,uchar *param_3,
                   uchar *param_4,int param_5)

{
  uint uVar1;
  code *pcVar2;
  
  if (param_5 - 1U < 4) {
    if (param_1->read_filter[0] ==
        (_func___cdecl_void_png_row_info_struct_ptr_uchar_ptr_uchar_ptr *)0x0) {
      uVar1 = param_1->pixel_depth + 7 >> 3;
      param_1->read_filter[0] = png_read_filter_row_sub;
      param_1->read_filter[1] = png_read_filter_row_up;
      param_1->read_filter[2] = png_read_filter_row_avg;
      pcVar2 = png_read_filter_row_paeth_multibyte_pixel;
      if (uVar1 == 1) {
        pcVar2 = png_read_filter_row_paeth_1byte_pixel;
      }
      param_1->read_filter[3] = pcVar2;
      png_init_filter_functions_sse2(param_1,uVar1);
    }
                    /* WARNING: Could not recover jumptable at 0x000140dd73d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*param_1->read_filter[param_5 - 1U])(param_2,param_3,param_4);
    return;
  }
  return;
}

// png_read_IDAT_data @ 140dd73f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl png_read_IDAT_data(png_struct_def_conflict *param_1,uchar *param_2,ulong64 param_3)

{
  uint uVar1;
  code *pcVar2;
  uint uVar3;
  int iVar4;
  uchar *_Dst;
  ulonglong uVar5;
  char *pcVar6;
  ulonglong uVar7;
  undefined1 auStack_498 [32];
  uchar **local_478;
  uint local_46c;
  uchar local_468 [1032];
  ulonglong local_60;
  
  local_60 = __security_cookie.value ^ (ulonglong)auStack_498;
  (param_1->zstream).next_out = param_2;
  if (param_2 == (uchar *)0x0) {
    param_3 = 0;
  }
  (param_1->zstream).avail_out = 0;
  local_478 = &param_1->read_buffer;
  do {
    uVar3 = (param_1->zstream).avail_in;
    if (uVar3 == 0) {
      uVar3 = param_1->idat_size;
      while (uVar3 == 0) {
        uVar3 = param_1->chunk_name;
        uVar1 = param_1->flags;
        param_1->io_state = 0x81;
        png_read_data(param_1,(uchar *)&local_46c,4);
        if ((uVar3 & 0x20000000) == 0) {
          if ((uVar1 & 0x800) == 0) {
LAB_140dd752a:
            if ((local_46c >> 0x18 | (local_46c & 0xff0000) >> 8 | (local_46c & 0xff00) << 8 |
                local_46c << 0x18) != param_1->crc) {
              if ((param_1->chunk_name & 0x20000000) == 0) {
                if ((param_1->flags & 0x400) == 0) goto LAB_140dd7743;
              }
              else if ((param_1->flags & 0x200) != 0) {
LAB_140dd7743:
                    /* WARNING: Subroutine does not return */
                png_chunk_error(param_1,"CRC error");
              }
              png_chunk_warning(param_1,"CRC error");
            }
          }
        }
        else if ((~uVar1 & 0x300) != 0) goto LAB_140dd752a;
        uVar3 = png_read_chunk_header(param_1);
        param_1->idat_size = uVar3;
        if (param_1->chunk_name != 0x49444154) goto LAB_140dd7734;
      }
      if (param_1->IDAT_read_size < uVar3) {
        uVar3 = param_1->IDAT_read_size;
      }
      uVar7 = (ulonglong)uVar3;
      _Dst = param_1->read_buffer;
      if (_Dst == (uchar *)0x0) {
LAB_140dd7595:
        _Dst = png_malloc_base(param_1,uVar7);
        if (_Dst == (uchar *)0x0) {
          pcVar6 = "insufficient memory to read chunk";
          goto LAB_140dd7759;
        }
        memset(_Dst,0,uVar7);
        param_1->read_buffer = _Dst;
        param_1->read_buffer_size = uVar7;
      }
      else if (param_1->read_buffer_size < uVar7) {
        *local_478 = (uchar *)0x0;
        local_478[1] = (uchar *)0x0;
        png_free(param_1,_Dst);
        goto LAB_140dd7595;
      }
      png_read_data(param_1,_Dst,uVar7);
      png_calculate_crc(param_1,_Dst,uVar7);
      param_1->idat_size = param_1->idat_size - uVar3;
      (param_1->zstream).next_in = _Dst;
      (param_1->zstream).avail_in = uVar3;
      if (param_2 != (uchar *)0x0) goto LAB_140dd7475;
LAB_140dd7601:
      (param_1->zstream).next_out = local_468;
      (param_1->zstream).avail_out = 0x400;
      if (param_1->zstream_start == '\0') goto LAB_140dd7635;
LAB_140dd7621:
      if (uVar3 == 0) goto LAB_140dd7635;
      if (-1 < (char)*(param_1->zstream).next_in) {
        param_1->zstream_start = '\0';
        goto LAB_140dd7635;
      }
      (param_1->zstream).msg = "invalid window size (libpng)";
      iVar4 = -3;
    }
    else {
      if (param_2 == (uchar *)0x0) goto LAB_140dd7601;
LAB_140dd7475:
      uVar7 = 0xffffffff;
      if (param_3 < 0xffffffff) {
        uVar7 = param_3;
      }
      param_3 = param_3 - uVar7;
      (param_1->zstream).avail_out = (uint)uVar7;
      if (param_1->zstream_start != '\0') goto LAB_140dd7621;
LAB_140dd7635:
      iVar4 = inflate(&param_1->zstream,0);
    }
    uVar5 = (ulonglong)(param_1->zstream).avail_out;
    uVar7 = param_3 + uVar5;
    param_3 = (param_3 - uVar5) + 0x400;
    if (param_2 != (uchar *)0x0) {
      param_3 = uVar7;
    }
    (param_1->zstream).avail_out = 0;
    if (iVar4 != 0) {
      if (iVar4 == 1) {
        (param_1->zstream).next_out = (uchar *)0x0;
        uVar7._0_4_ = param_1->mode;
        uVar7._4_4_ = param_1->flags;
        param_1->mode = (int)(uVar7 | 0x800000008);
        param_1->flags = (int)((uVar7 | 0x800000008) >> 0x20);
        if (((param_1->zstream).avail_in != 0) || (param_1->idat_size != 0)) {
          png_chunk_benign_error(param_1,"Extra compressed data");
        }
        if (param_3 == 0) goto LAB_140dd76fe;
        if (param_2 != (uchar *)0x0) {
LAB_140dd7734:
                    /* WARNING: Subroutine does not return */
          png_error(param_1,"Not enough image data");
        }
        pcVar6 = "Too much image data";
      }
      else {
        png_zstream_error(param_1,iVar4);
        pcVar6 = (param_1->zstream).msg;
        if (param_2 != (uchar *)0x0) {
LAB_140dd7759:
                    /* WARNING: Subroutine does not return */
          png_chunk_error(param_1,pcVar6);
        }
      }
      png_chunk_benign_error(param_1,pcVar6);
      goto LAB_140dd76fe;
    }
    if (param_3 == 0) {
LAB_140dd76fe:
      if ((local_60 ^ (ulonglong)auStack_498) != __security_cookie.value) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      return;
    }
  } while( true );
}

// png_read_finish_IDAT @ 140dd7770

void __cdecl png_read_finish_IDAT(png_struct_def_conflict *param_1)

{
  if ((param_1->flags & 8) == 0) {
    png_read_IDAT_data(param_1,(uchar *)0x0,0);
    (param_1->zstream).next_out = (uchar *)0x0;
    if ((param_1->flags & 8) == 0) {
      *(byte *)&param_1->mode = (byte)param_1->mode | 8;
      param_1->flags = param_1->flags | 8;
    }
  }
  if (param_1->zowner == 0x49444154) {
    (param_1->zstream).next_in = (uchar *)0x0;
    (param_1->zstream).avail_in = 0;
    param_1->zowner = 0;
    png_crc_finish(param_1,param_1->idat_size);
    return;
  }
  return;
}

// png_read_finish_row @ 140dd7800

void __cdecl png_read_finish_row(png_struct_def_conflict *param_1)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  uint uVar4;
  uint uVar5;
  byte bVar6;
  
  uVar4 = param_1->row_number + 1;
  param_1->row_number = uVar4;
  if (uVar4 < param_1->num_rows) {
    return;
  }
  if (param_1->interlaced != '\0') {
    param_1->row_number = 0;
    memset(param_1->prev_row,0,param_1->rowbytes + 1);
    bVar1 = param_1->pass;
    bVar6 = bVar1 + 1;
    if (bVar6 < 7) {
      bVar2 = "\b\b\x04\x04\x02\x02\x01"[bVar6];
      uVar4 = ~(uint)""[bVar6] + param_1->width + (uint)bVar2;
      param_1->iwidth = uVar4 / bVar2;
      if (((param_1->transformations & 2) != 0) ||
         ((bVar3 = "\b\b\b\x04\x04\x02\x02"[bVar6],
          uVar5 = ~(uint)""[bVar6] + param_1->height + (uint)bVar3,
          param_1->num_rows = uVar5 / bVar3, bVar3 <= uVar5 && (bVar2 <= uVar4))))
      goto LAB_140dd7970;
      bVar6 = bVar1 + 2;
      if (bVar6 < 7) {
        bVar2 = "\b\b\x04\x04\x02\x02\x01"[bVar6];
        uVar4 = ~(uint)""[bVar6] + param_1->width + (uint)bVar2;
        param_1->iwidth = uVar4 / bVar2;
        if (((param_1->transformations & 2) != 0) ||
           ((bVar3 = "\b\b\b\x04\x04\x02\x02"[bVar6],
            uVar5 = ~(uint)""[bVar6] + param_1->height + (uint)bVar3,
            param_1->num_rows = uVar5 / bVar3, bVar3 <= uVar5 && (bVar2 <= uVar4))))
        goto LAB_140dd7970;
        bVar6 = bVar1 + 3;
        if (bVar6 < 7) {
          bVar2 = "\b\b\x04\x04\x02\x02\x01"[bVar6];
          uVar4 = ~(uint)""[bVar6] + param_1->width + (uint)bVar2;
          param_1->iwidth = uVar4 / bVar2;
          if (((param_1->transformations & 2) != 0) ||
             ((bVar3 = "\b\b\b\x04\x04\x02\x02"[bVar6],
              uVar5 = ~(uint)""[bVar6] + param_1->height + (uint)bVar3,
              param_1->num_rows = uVar5 / bVar3, bVar3 <= uVar5 && (bVar2 <= uVar4))))
          goto LAB_140dd7970;
          bVar6 = bVar1 + 4;
          if (bVar6 < 7) {
            bVar2 = "\b\b\x04\x04\x02\x02\x01"[bVar6];
            uVar4 = ~(uint)""[bVar6] + param_1->width + (uint)bVar2;
            param_1->iwidth = uVar4 / bVar2;
            if (((param_1->transformations & 2) != 0) ||
               ((bVar3 = "\b\b\b\x04\x04\x02\x02"[bVar6],
                uVar5 = ~(uint)""[bVar6] + param_1->height + (uint)bVar3,
                param_1->num_rows = uVar5 / bVar3, bVar3 <= uVar5 && (bVar2 <= uVar4))))
            goto LAB_140dd7970;
            bVar6 = bVar1 + 5;
            if (bVar6 < 7) {
              bVar2 = "\b\b\x04\x04\x02\x02\x01"[bVar6];
              uVar4 = ~(uint)""[bVar6] + param_1->width + (uint)bVar2;
              param_1->iwidth = uVar4 / bVar2;
              if (((param_1->transformations & 2) != 0) ||
                 ((bVar3 = "\b\b\b\x04\x04\x02\x02"[bVar6],
                  uVar5 = ~(uint)""[bVar6] + param_1->height + (uint)bVar3,
                  param_1->num_rows = uVar5 / bVar3, bVar3 <= uVar5 && (bVar2 <= uVar4))))
              goto LAB_140dd7970;
              bVar6 = bVar1 + 6;
              if (bVar6 < 7) {
                bVar2 = "\b\b\x04\x04\x02\x02\x01"[bVar6];
                uVar4 = ~(uint)""[bVar6] + param_1->width + (uint)bVar2;
                param_1->iwidth = uVar4 / bVar2;
                if (((param_1->transformations & 2) != 0) ||
                   ((bVar3 = "\b\b\b\x04\x04\x02\x02"[bVar6],
                    uVar5 = ~(uint)""[bVar6] + param_1->height + (uint)bVar3,
                    param_1->num_rows = uVar5 / bVar3, bVar3 <= uVar5 && (bVar2 <= uVar4))))
                goto LAB_140dd7970;
                bVar6 = bVar1 + 7;
                if (0xf8 < bVar1) {
                  bVar2 = "\b\b\x04\x04\x02\x02\x01"[bVar6];
                  uVar4 = ~(uint)""[bVar6] + param_1->width + (uint)bVar2;
                  param_1->iwidth = uVar4 / bVar2;
                  if (((param_1->transformations & 2) != 0) ||
                     ((bVar3 = "\b\b\b\x04\x04\x02\x02"[bVar6],
                      uVar5 = ~(uint)""[bVar6] + param_1->height + (uint)bVar3,
                      param_1->num_rows = uVar5 / bVar3, bVar3 <= uVar5 && (bVar2 <= uVar4)))) {
LAB_140dd7970:
                    param_1->pass = bVar6;
                    return;
                  }
                  bVar6 = bVar1 + 8;
                  if (bVar6 < 7) {
                    param_1->iwidth =
                         (~(uint)""[bVar6] +
                         param_1->width + (uint)"\b\b\x04\x04\x02\x02\x01"[bVar6]) /
                         (uint)"\b\b\x04\x04\x02\x02\x01"[bVar6];
                    if ((param_1->transformations & 2) == 0) {
                      param_1->num_rows =
                           (~(uint)""[bVar6] +
                           param_1->height + (uint)"\b\b\b\x04\x04\x02\x02"[bVar6]) /
                           (uint)"\b\b\b\x04\x04\x02\x02"[bVar6];
                    }
                    goto LAB_140dd7970;
                  }
                }
              }
            }
          }
        }
      }
    }
    param_1->pass = bVar6;
  }
  if ((param_1->flags & 8) == 0) {
    png_read_IDAT_data(param_1,(uchar *)0x0,0);
    (param_1->zstream).next_out = (uchar *)0x0;
    if ((param_1->flags & 8) == 0) {
      *(byte *)&param_1->mode = (byte)param_1->mode | 8;
      param_1->flags = param_1->flags | 8;
    }
  }
  if (param_1->zowner != 0x49444154) {
    return;
  }
  (param_1->zstream).next_in = (uchar *)0x0;
  (param_1->zstream).avail_in = 0;
  param_1->zowner = 0;
  png_crc_finish(param_1,param_1->idat_size);
  return;
}

// png_read_start_row @ 140dd7cb0

void __cdecl png_read_start_row(png_struct_def_conflict *param_1)

{
  byte bVar1;
  uchar uVar2;
  uint uVar3;
  uint uVar4;
  byte bVar5;
  int iVar6;
  uchar *puVar7;
  uint uVar8;
  uint uVar9;
  ulonglong uVar10;
  
  png_init_read_transformations(param_1);
  if (param_1->interlaced == '\0') {
    param_1->num_rows = param_1->height;
    uVar3 = param_1->transformations;
    uVar4 = param_1->width;
    param_1->iwidth = uVar4;
    bVar1 = param_1->pixel_depth;
  }
  else {
    uVar3 = param_1->transformations;
    uVar4 = param_1->width;
    uVar8 = param_1->height + 7 >> 3;
    if ((uVar3 & 2) != 0) {
      uVar8 = param_1->height;
    }
    param_1->num_rows = uVar8;
    param_1->iwidth =
         (~(uint)""[param_1->pass] + uVar4 + (uint)"\b\b\x04\x04\x02\x02\x01"[param_1->pass]) /
         (uint)"\b\b\x04\x04\x02\x02\x01"[param_1->pass];
    bVar1 = param_1->pixel_depth;
  }
  bVar5 = bVar1;
  if (((uVar3 & 4) != 0) && (bVar5 = 8, 7 < param_1->bit_depth)) {
    bVar5 = bVar1;
  }
  uVar8 = (uint)bVar5;
  if ((uVar3 & 0x1000) == 0) {
    if ((uVar3 & 0x200) != 0) {
      param_1->transformations = uVar3 & 0xffffedff;
    }
  }
  else {
    uVar2 = param_1->color_type;
    if (uVar2 == '\0') {
      uVar9 = 8;
      if (8 < uVar8) {
        uVar9 = uVar8;
      }
      uVar8 = uVar9 << (param_1->num_trans != 0);
    }
    else if (uVar2 == '\x02') {
      if (param_1->num_trans != 0) {
        uVar8 = uVar8 * 0x15558 >> 0x10;
      }
    }
    else if (uVar2 == '\x03') {
      uVar8 = (uint)(param_1->num_trans != 0) * 8 + 0x18;
    }
    if ((uVar3 & 0x200) != 0) {
      uVar8 = uVar8 << (param_1->bit_depth < 0x10);
    }
  }
  uVar3 = param_1->transformations;
  if ((short)uVar3 < 0) {
    if (param_1->color_type - 2 < 2) {
      uVar8 = (uint)(0x20 < uVar8) * 0x20 + 0x20;
    }
    else if (param_1->color_type == 0) {
      uVar8 = (uint)(8 < uVar8) * 0x10 + 0x10;
    }
  }
  if ((uVar3 & 0x4000) != 0) {
    if ((((short)uVar3 < 0) || (((byte)(uVar3 >> 0xc) & param_1->num_trans != 0) != 0)) ||
       (uVar2 = param_1->color_type, uVar2 == '\x04')) {
      uVar8 = (uint)(0x10 < uVar8) * 0x20 + 0x20;
    }
    else if (uVar8 < 9) {
      uVar8 = (uint)(uVar2 == '\x06') * 8 + 0x18;
    }
    else {
      uVar8 = (uint)(uVar2 == '\x06') * 0x10 + 0x30;
    }
  }
  uVar9 = uVar8;
  if (((uVar3 & 0x100000) != 0) &&
     (uVar9 = (uint)param_1->user_transform_channels * (uint)param_1->user_transform_depth,
     uVar9 <= uVar8)) {
    uVar9 = uVar8;
  }
  param_1->maximum_pixel_depth = (uchar)uVar9;
  param_1->transformed_pixel_depth = '\0';
  uVar10 = (ulonglong)(uVar4 + 7 & 0xfffffff8);
  if (uVar9 < 8) {
    uVar10 = uVar10 * uVar9 >> 3;
  }
  else {
    uVar10 = uVar10 * (uVar9 >> 3);
  }
  uVar10 = (uVar9 + 7 >> 3) + uVar10 + 0x31;
  if (param_1->old_big_row_buf_size < uVar10) {
    png_free(param_1,param_1->big_row_buf);
    png_free(param_1,param_1->big_prev_row);
    if (param_1->interlaced == '\0') {
      puVar7 = png_malloc(param_1,uVar10);
    }
    else {
      puVar7 = png_calloc(param_1,uVar10);
    }
    param_1->big_row_buf = puVar7;
    puVar7 = png_malloc(param_1,uVar10);
    param_1->big_prev_row = puVar7;
    param_1->row_buf =
         (uchar *)(((ulonglong)(param_1->big_row_buf + 0x20) & 0xfffffffffffffff0) - 1);
    param_1->prev_row = (uchar *)(((ulonglong)(puVar7 + 0x20) & 0xfffffffffffffff0) - 1);
    param_1->old_big_row_buf_size = uVar10;
  }
  if (param_1->rowbytes != 0xffffffffffffffff) {
    memset(param_1->prev_row,0,param_1->rowbytes + 1);
    puVar7 = param_1->read_buffer;
    if (puVar7 != (uchar *)0x0) {
      param_1->read_buffer = (uchar *)0x0;
      param_1->read_buffer_size = 0;
      png_free(param_1,puVar7);
    }
    iVar6 = png_inflate_claim(param_1,0x49444154);
    if (iVar6 == 0) {
      *(byte *)&param_1->flags = (byte)param_1->flags | 0x40;
      return;
    }
                    /* WARNING: Subroutine does not return */
    png_error(param_1,(param_1->zstream).msg);
  }
                    /* WARNING: Subroutine does not return */
  png_error(param_1,"Row has too many bytes to allocate in memory");
}

// png_inflate @ 140dd8040

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

int __cdecl
png_inflate(png_struct_def_conflict *param_1,uint param_2,int param_3,uchar *param_4,uint *param_5,
           uchar *param_6,ulong64 *param_7)

{
  z_stream_s *pzVar1;
  uint uVar2;
  code *pcVar3;
  int iVar4;
  ulonglong uVar5;
  undefined4 in_register_00000084;
  longlong lVar6;
  ulonglong uVar7;
  undefined1 auStack_468 [32];
  uchar local_448 [1024];
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_468;
  if (param_1->zowner != param_2) {
    (param_1->zstream).msg = "zstream unclaimed";
    if ((local_48 ^ (ulonglong)auStack_468) == __security_cookie.value) {
      return -2;
    }
    goto LAB_140dd81ab;
  }
  uVar5 = *(ulonglong *)param_6;
  uVar2 = *(uint *)param_4;
  pzVar1 = &param_1->zstream;
  (param_1->zstream).next_in = (uchar *)CONCAT44(in_register_00000084,param_3);
  if (param_5 == (uint *)0x0) {
    (param_1->zstream).avail_in = uVar2;
    (param_1->zstream).next_out = local_448;
    uVar7 = 0x400;
    if (uVar5 < 0x400) {
      uVar7 = uVar5;
    }
    (param_1->zstream).avail_out = (uint)uVar7;
    lVar6 = uVar5 - uVar7;
    if (uVar2 != 0 && param_1->zstream_start != '\0') {
      if (*(char *)CONCAT44(in_register_00000084,param_3) < '\0') goto LAB_140dd8283;
      param_1->zstream_start = '\0';
    }
    iVar4 = inflate(pzVar1,(ulonglong)(lVar6 == 0) << 2);
    if (iVar4 == 0) {
      do {
        uVar7 = lVar6 + (ulonglong)(param_1->zstream).avail_out;
        (param_1->zstream).next_out = local_448;
        uVar5 = 0x400;
        if (uVar7 < 0x400) {
          uVar5 = uVar7;
        }
        (param_1->zstream).avail_out = (uint)uVar5;
        lVar6 = uVar7 - uVar5;
        if ((param_1->zstream_start != '\0') && ((param_1->zstream).avail_in != 0)) {
          if ((char)*pzVar1->next_in < '\0') goto LAB_140dd8283;
          param_1->zstream_start = '\0';
        }
        iVar4 = inflate(pzVar1,(ulonglong)(lVar6 == 0) << 2);
      } while (iVar4 == 0);
      goto LAB_140dd8296;
    }
LAB_140dd829b:
    (param_1->zstream).next_out = (uchar *)0x0;
  }
  else {
    (param_1->zstream).next_out = (uchar *)param_5;
    (param_1->zstream).avail_in = uVar2;
    uVar7 = 0xffffffff;
    if (uVar5 < 0xffffffff) {
      uVar7 = uVar5;
    }
    (param_1->zstream).avail_out = (uint)uVar7;
    lVar6 = uVar5 - uVar7;
    if (uVar2 != 0 && param_1->zstream_start != '\0') {
      if (*(char *)CONCAT44(in_register_00000084,param_3) < '\0') {
LAB_140dd8283:
        (param_1->zstream).msg = "invalid window size (libpng)";
        iVar4 = -3;
        goto LAB_140dd8296;
      }
      param_1->zstream_start = '\0';
    }
    iVar4 = inflate(pzVar1,(ulonglong)(lVar6 == 0) << 2);
    if (iVar4 == 0) {
      do {
        uVar7 = lVar6 + (ulonglong)(param_1->zstream).avail_out;
        uVar5 = 0xffffffff;
        if (uVar7 < 0xffffffff) {
          uVar5 = uVar7;
        }
        (param_1->zstream).avail_out = (uint)uVar5;
        lVar6 = uVar7 - uVar5;
        if ((param_1->zstream_start != '\0') && ((param_1->zstream).avail_in != 0)) {
          if ((char)*pzVar1->next_in < '\0') goto LAB_140dd8283;
          param_1->zstream_start = '\0';
        }
        iVar4 = inflate(pzVar1,(ulonglong)(lVar6 == 0) << 2);
      } while (iVar4 == 0);
LAB_140dd8296:
      if (param_5 == (uint *)0x0) goto LAB_140dd829b;
    }
  }
  uVar2 = (param_1->zstream).avail_in;
  lVar6 = (ulonglong)(param_1->zstream).avail_out + lVar6;
  if (lVar6 != 0) {
    *(longlong *)param_6 = *(longlong *)param_6 - lVar6;
  }
  if (uVar2 != 0) {
    *(uint *)param_4 = *(int *)param_4 - uVar2;
  }
  png_zstream_error(param_1,iVar4);
  if ((local_48 ^ (ulonglong)auStack_468) == __security_cookie.value) {
    return iVar4;
  }
LAB_140dd81ab:
  pcVar3 = (code *)swi(3);
  iVar4 = (*pcVar3)();
  return iVar4;
}

// png_read_filter_row_sub @ 140dd8300

void __cdecl png_read_filter_row_sub(png_row_info_struct *param_1,uchar *param_2,uchar *param_3)

{
  uchar *puVar1;
  uchar *puVar2;
  uchar *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  ulonglong uVar6;
  uchar uVar7;
  uchar uVar8;
  uchar uVar9;
  uchar uVar10;
  uchar uVar11;
  uchar uVar12;
  uchar uVar13;
  uchar uVar14;
  uchar uVar15;
  uchar uVar16;
  uchar uVar17;
  uchar uVar18;
  uchar uVar19;
  uchar uVar20;
  uchar uVar21;
  uchar uVar22;
  uchar uVar23;
  uchar uVar24;
  uchar uVar25;
  uchar uVar26;
  uchar uVar27;
  uchar uVar28;
  uchar uVar29;
  uchar uVar30;
  uchar uVar31;
  uchar uVar32;
  uchar uVar33;
  uchar uVar34;
  uchar uVar35;
  uchar uVar36;
  uchar uVar37;
  uchar uVar38;
  uchar uVar39;
  uchar uVar40;
  uchar uVar41;
  uchar uVar42;
  uchar uVar43;
  uchar uVar44;
  uchar uVar45;
  uchar uVar46;
  uchar uVar47;
  uchar uVar48;
  uchar uVar49;
  uchar uVar50;
  uchar uVar51;
  uchar uVar52;
  uchar uVar53;
  uchar uVar54;
  uchar uVar55;
  uchar uVar56;
  uchar uVar57;
  uchar uVar58;
  uchar uVar59;
  uchar uVar60;
  uchar uVar61;
  uchar uVar62;
  uchar uVar63;
  uchar uVar64;
  uchar uVar65;
  uchar uVar66;
  uchar uVar67;
  uchar uVar68;
  ulonglong uVar69;
  uint uVar70;
  ulonglong uVar71;
  ulonglong uVar72;
  uchar *puVar73;
  ulonglong uVar74;
  longlong lVar75;
  
  uVar6 = param_1->rowbytes;
  uVar69 = (ulonglong)(param_1->pixel_depth + 7 >> 3);
  uVar74 = uVar6 - uVar69;
  if (uVar6 < uVar69 || uVar74 == 0) {
    return;
  }
  puVar73 = param_2 + uVar69;
  uVar71 = uVar69;
  if ((7 < uVar74) && (param_2 + uVar74 <= puVar73 || param_2 + uVar6 <= param_2)) {
    if (uVar74 < 0x20) {
      uVar71 = 0;
    }
    else {
      uVar71 = uVar74 & 0xffffffffffffffe0;
      uVar72 = 0;
      do {
        puVar2 = param_2 + uVar72 + uVar69;
        uVar7 = puVar2[1];
        uVar8 = puVar2[2];
        uVar9 = puVar2[3];
        uVar10 = puVar2[4];
        uVar11 = puVar2[5];
        uVar12 = puVar2[6];
        uVar13 = puVar2[7];
        uVar14 = puVar2[8];
        uVar15 = puVar2[9];
        uVar16 = puVar2[10];
        uVar17 = puVar2[0xb];
        uVar18 = puVar2[0xc];
        uVar19 = puVar2[0xd];
        uVar20 = puVar2[0xe];
        uVar21 = puVar2[0xf];
        puVar1 = param_2 + uVar72 + uVar69 + 0x10;
        uVar22 = *puVar1;
        uVar23 = puVar1[1];
        uVar24 = puVar1[2];
        uVar25 = puVar1[3];
        uVar26 = puVar1[4];
        uVar27 = puVar1[5];
        uVar28 = puVar1[6];
        uVar29 = puVar1[7];
        uVar30 = puVar1[8];
        uVar31 = puVar1[9];
        uVar32 = puVar1[10];
        uVar33 = puVar1[0xb];
        uVar34 = puVar1[0xc];
        uVar35 = puVar1[0xd];
        uVar36 = puVar1[0xe];
        uVar37 = puVar1[0xf];
        puVar1 = param_2 + uVar72;
        uVar38 = puVar1[1];
        uVar39 = puVar1[2];
        uVar40 = puVar1[3];
        uVar41 = puVar1[4];
        uVar42 = puVar1[5];
        uVar43 = puVar1[6];
        uVar44 = puVar1[7];
        uVar45 = puVar1[8];
        uVar46 = puVar1[9];
        uVar47 = puVar1[10];
        uVar48 = puVar1[0xb];
        uVar49 = puVar1[0xc];
        uVar50 = puVar1[0xd];
        uVar51 = puVar1[0xe];
        uVar52 = puVar1[0xf];
        puVar3 = param_2 + uVar72 + 0x10;
        uVar53 = *puVar3;
        uVar54 = puVar3[1];
        uVar55 = puVar3[2];
        uVar56 = puVar3[3];
        uVar57 = puVar3[4];
        uVar58 = puVar3[5];
        uVar59 = puVar3[6];
        uVar60 = puVar3[7];
        uVar61 = puVar3[8];
        uVar62 = puVar3[9];
        uVar63 = puVar3[10];
        uVar64 = puVar3[0xb];
        uVar65 = puVar3[0xc];
        uVar66 = puVar3[0xd];
        uVar67 = puVar3[0xe];
        uVar68 = puVar3[0xf];
        puVar3 = param_2 + uVar72 + uVar69;
        *puVar3 = *puVar1 + *puVar2;
        puVar3[1] = uVar38 + uVar7;
        puVar3[2] = uVar39 + uVar8;
        puVar3[3] = uVar40 + uVar9;
        puVar3[4] = uVar41 + uVar10;
        puVar3[5] = uVar42 + uVar11;
        puVar3[6] = uVar43 + uVar12;
        puVar3[7] = uVar44 + uVar13;
        puVar3[8] = uVar45 + uVar14;
        puVar3[9] = uVar46 + uVar15;
        puVar3[10] = uVar47 + uVar16;
        puVar3[0xb] = uVar48 + uVar17;
        puVar3[0xc] = uVar49 + uVar18;
        puVar3[0xd] = uVar50 + uVar19;
        puVar3[0xe] = uVar51 + uVar20;
        puVar3[0xf] = uVar52 + uVar21;
        puVar1 = param_2 + uVar72 + uVar69 + 0x10;
        *puVar1 = uVar53 + uVar22;
        puVar1[1] = uVar54 + uVar23;
        puVar1[2] = uVar55 + uVar24;
        puVar1[3] = uVar56 + uVar25;
        puVar1[4] = uVar57 + uVar26;
        puVar1[5] = uVar58 + uVar27;
        puVar1[6] = uVar59 + uVar28;
        puVar1[7] = uVar60 + uVar29;
        puVar1[8] = uVar61 + uVar30;
        puVar1[9] = uVar62 + uVar31;
        puVar1[10] = uVar63 + uVar32;
        puVar1[0xb] = uVar64 + uVar33;
        puVar1[0xc] = uVar65 + uVar34;
        puVar1[0xd] = uVar66 + uVar35;
        puVar1[0xe] = uVar67 + uVar36;
        puVar1[0xf] = uVar68 + uVar37;
        uVar72 = uVar72 + 0x20;
      } while (uVar71 != uVar72);
      if (uVar74 == uVar71) {
        return;
      }
      if ((uVar74 & 0x18) == 0) {
        puVar73 = puVar73 + uVar71;
        uVar71 = uVar69 + uVar71;
        goto LAB_140dd834c;
      }
    }
    uVar72 = uVar74 & 0xfffffffffffffff8;
    do {
      uVar4 = *(undefined8 *)(puVar73 + uVar71);
      uVar5 = *(undefined8 *)(param_2 + uVar71);
      *(ulonglong *)(puVar73 + uVar71) =
           CONCAT17((char)((ulonglong)uVar5 >> 0x38) + (char)((ulonglong)uVar4 >> 0x38),
                    CONCAT16((char)((ulonglong)uVar5 >> 0x30) + (char)((ulonglong)uVar4 >> 0x30),
                             CONCAT15((char)((ulonglong)uVar5 >> 0x28) +
                                      (char)((ulonglong)uVar4 >> 0x28),
                                      CONCAT14((char)((ulonglong)uVar5 >> 0x20) +
                                               (char)((ulonglong)uVar4 >> 0x20),
                                               CONCAT13((char)((ulonglong)uVar5 >> 0x18) +
                                                        (char)((ulonglong)uVar4 >> 0x18),
                                                        CONCAT12((char)((ulonglong)uVar5 >> 0x10) +
                                                                 (char)((ulonglong)uVar4 >> 0x10),
                                                                 CONCAT11((char)((ulonglong)uVar5 >>
                                                                                8) +
                                                                          (char)((ulonglong)uVar4 >>
                                                                                8),(char)uVar5 +
                                                                                   (char)uVar4))))))
                   );
      uVar71 = uVar71 + 8;
    } while (uVar72 != uVar71);
    puVar73 = puVar73 + uVar72;
    uVar71 = uVar69 + uVar72;
    if (uVar74 == uVar72) {
      return;
    }
  }
LAB_140dd834c:
  uVar70 = (int)uVar6 - (int)uVar71 & 3;
  uVar74 = uVar71;
  if (uVar70 != 0) {
    lVar75 = 0;
    do {
      *puVar73 = *puVar73 + puVar73[-uVar69];
      puVar73 = puVar73 + 1;
      lVar75 = lVar75 + -1;
    } while (-lVar75 != (ulonglong)uVar70);
    uVar74 = uVar71 - lVar75;
  }
  if (uVar71 - uVar6 < 0xfffffffffffffffd) {
    lVar75 = 0;
    do {
      puVar73[lVar75] = puVar73[lVar75] + puVar73[lVar75 - uVar69];
      puVar73[lVar75 + 1] = puVar73[lVar75 + 1] + puVar73[lVar75 + (1 - uVar69)];
      puVar73[lVar75 + 2] = puVar73[lVar75 + 2] + puVar73[lVar75 + (2 - uVar69)];
      puVar73[lVar75 + 3] = puVar73[lVar75 + 3] + puVar73[lVar75 + (3 - uVar69)];
      lVar75 = lVar75 + 4;
    } while (uVar6 - uVar74 != lVar75);
  }
  return;
}

// png_read_filter_row_up @ 140dd84c0

void __cdecl png_read_filter_row_up(png_row_info_struct *param_1,uchar *param_2,uchar *param_3)

{
  uchar *puVar1;
  uchar *puVar2;
  uchar *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  ulonglong uVar6;
  uchar uVar7;
  uchar uVar8;
  uchar uVar9;
  uchar uVar10;
  uchar uVar11;
  uchar uVar12;
  uchar uVar13;
  uchar uVar14;
  uchar uVar15;
  uchar uVar16;
  uchar uVar17;
  uchar uVar18;
  uchar uVar19;
  uchar uVar20;
  uchar uVar21;
  uchar uVar22;
  uchar uVar23;
  uchar uVar24;
  uchar uVar25;
  uchar uVar26;
  uchar uVar27;
  uchar uVar28;
  uchar uVar29;
  uchar uVar30;
  uchar uVar31;
  uchar uVar32;
  uchar uVar33;
  uchar uVar34;
  uchar uVar35;
  uchar uVar36;
  uchar uVar37;
  uchar uVar38;
  uchar uVar39;
  uchar uVar40;
  uchar uVar41;
  uchar uVar42;
  uchar uVar43;
  uchar uVar44;
  uchar uVar45;
  uchar uVar46;
  uchar uVar47;
  uchar uVar48;
  uchar uVar49;
  uchar uVar50;
  uchar uVar51;
  uchar uVar52;
  uchar uVar53;
  uchar uVar54;
  uchar uVar55;
  uchar uVar56;
  uchar uVar57;
  uchar uVar58;
  uchar uVar59;
  uchar uVar60;
  uchar uVar61;
  uchar uVar62;
  uchar uVar63;
  uchar uVar64;
  uchar uVar65;
  uchar uVar66;
  uchar uVar67;
  uchar uVar68;
  ulonglong uVar69;
  longlong lVar70;
  ulonglong uVar71;
  
  uVar6 = param_1->rowbytes;
  if (uVar6 == 0) {
    return;
  }
  if ((uVar6 < 8) || (param_2 < param_3 + uVar6 && param_3 < param_2 + uVar6)) {
    uVar69 = 0;
  }
  else {
    if (uVar6 < 0x20) {
      uVar71 = 0;
    }
    else {
      uVar69 = uVar6 & 0xffffffffffffffe0;
      uVar71 = 0;
      do {
        puVar1 = param_2 + uVar71;
        uVar7 = puVar1[1];
        uVar8 = puVar1[2];
        uVar9 = puVar1[3];
        uVar10 = puVar1[4];
        uVar11 = puVar1[5];
        uVar12 = puVar1[6];
        uVar13 = puVar1[7];
        uVar14 = puVar1[8];
        uVar15 = puVar1[9];
        uVar16 = puVar1[10];
        uVar17 = puVar1[0xb];
        uVar18 = puVar1[0xc];
        uVar19 = puVar1[0xd];
        uVar20 = puVar1[0xe];
        uVar21 = puVar1[0xf];
        puVar2 = param_2 + uVar71 + 0x10;
        uVar22 = *puVar2;
        uVar23 = puVar2[1];
        uVar24 = puVar2[2];
        uVar25 = puVar2[3];
        uVar26 = puVar2[4];
        uVar27 = puVar2[5];
        uVar28 = puVar2[6];
        uVar29 = puVar2[7];
        uVar30 = puVar2[8];
        uVar31 = puVar2[9];
        uVar32 = puVar2[10];
        uVar33 = puVar2[0xb];
        uVar34 = puVar2[0xc];
        uVar35 = puVar2[0xd];
        uVar36 = puVar2[0xe];
        uVar37 = puVar2[0xf];
        puVar2 = param_3 + uVar71;
        uVar38 = puVar2[1];
        uVar39 = puVar2[2];
        uVar40 = puVar2[3];
        uVar41 = puVar2[4];
        uVar42 = puVar2[5];
        uVar43 = puVar2[6];
        uVar44 = puVar2[7];
        uVar45 = puVar2[8];
        uVar46 = puVar2[9];
        uVar47 = puVar2[10];
        uVar48 = puVar2[0xb];
        uVar49 = puVar2[0xc];
        uVar50 = puVar2[0xd];
        uVar51 = puVar2[0xe];
        uVar52 = puVar2[0xf];
        puVar3 = param_3 + uVar71 + 0x10;
        uVar53 = *puVar3;
        uVar54 = puVar3[1];
        uVar55 = puVar3[2];
        uVar56 = puVar3[3];
        uVar57 = puVar3[4];
        uVar58 = puVar3[5];
        uVar59 = puVar3[6];
        uVar60 = puVar3[7];
        uVar61 = puVar3[8];
        uVar62 = puVar3[9];
        uVar63 = puVar3[10];
        uVar64 = puVar3[0xb];
        uVar65 = puVar3[0xc];
        uVar66 = puVar3[0xd];
        uVar67 = puVar3[0xe];
        uVar68 = puVar3[0xf];
        puVar3 = param_2 + uVar71;
        *puVar3 = *puVar2 + *puVar1;
        puVar3[1] = uVar38 + uVar7;
        puVar3[2] = uVar39 + uVar8;
        puVar3[3] = uVar40 + uVar9;
        puVar3[4] = uVar41 + uVar10;
        puVar3[5] = uVar42 + uVar11;
        puVar3[6] = uVar43 + uVar12;
        puVar3[7] = uVar44 + uVar13;
        puVar3[8] = uVar45 + uVar14;
        puVar3[9] = uVar46 + uVar15;
        puVar3[10] = uVar47 + uVar16;
        puVar3[0xb] = uVar48 + uVar17;
        puVar3[0xc] = uVar49 + uVar18;
        puVar3[0xd] = uVar50 + uVar19;
        puVar3[0xe] = uVar51 + uVar20;
        puVar3[0xf] = uVar52 + uVar21;
        puVar1 = param_2 + uVar71 + 0x10;
        *puVar1 = uVar53 + uVar22;
        puVar1[1] = uVar54 + uVar23;
        puVar1[2] = uVar55 + uVar24;
        puVar1[3] = uVar56 + uVar25;
        puVar1[4] = uVar57 + uVar26;
        puVar1[5] = uVar58 + uVar27;
        puVar1[6] = uVar59 + uVar28;
        puVar1[7] = uVar60 + uVar29;
        puVar1[8] = uVar61 + uVar30;
        puVar1[9] = uVar62 + uVar31;
        puVar1[10] = uVar63 + uVar32;
        puVar1[0xb] = uVar64 + uVar33;
        puVar1[0xc] = uVar65 + uVar34;
        puVar1[0xd] = uVar66 + uVar35;
        puVar1[0xe] = uVar67 + uVar36;
        puVar1[0xf] = uVar68 + uVar37;
        uVar71 = uVar71 + 0x20;
      } while (uVar69 != uVar71);
      if (uVar6 == uVar69) {
        return;
      }
      uVar71 = uVar69;
      if ((uVar6 & 0x18) == 0) {
        param_2 = param_2 + uVar69;
        param_3 = param_3 + uVar69;
        goto LAB_140dd84f9;
      }
    }
    uVar69 = uVar6 & 0xfffffffffffffff8;
    do {
      uVar4 = *(undefined8 *)(param_2 + uVar71);
      uVar5 = *(undefined8 *)(param_3 + uVar71);
      *(ulonglong *)(param_2 + uVar71) =
           CONCAT17((char)((ulonglong)uVar5 >> 0x38) + (char)((ulonglong)uVar4 >> 0x38),
                    CONCAT16((char)((ulonglong)uVar5 >> 0x30) + (char)((ulonglong)uVar4 >> 0x30),
                             CONCAT15((char)((ulonglong)uVar5 >> 0x28) +
                                      (char)((ulonglong)uVar4 >> 0x28),
                                      CONCAT14((char)((ulonglong)uVar5 >> 0x20) +
                                               (char)((ulonglong)uVar4 >> 0x20),
                                               CONCAT13((char)((ulonglong)uVar5 >> 0x18) +
                                                        (char)((ulonglong)uVar4 >> 0x18),
                                                        CONCAT12((char)((ulonglong)uVar5 >> 0x10) +
                                                                 (char)((ulonglong)uVar4 >> 0x10),
                                                                 CONCAT11((char)((ulonglong)uVar5 >>
                                                                                8) +
                                                                          (char)((ulonglong)uVar4 >>
                                                                                8),(char)uVar5 +
                                                                                   (char)uVar4))))))
                   );
      uVar71 = uVar71 + 8;
    } while (uVar69 != uVar71);
    param_3 = param_3 + uVar69;
    param_2 = param_2 + uVar69;
    if (uVar6 == uVar69) {
      return;
    }
  }
LAB_140dd84f9:
  uVar71 = uVar69;
  if ((uVar6 & 3) != 0) {
    lVar70 = 0;
    do {
      *param_2 = *param_2 + *param_3;
      param_3 = param_3 + 1;
      param_2 = param_2 + 1;
      lVar70 = lVar70 + -1;
    } while (-lVar70 != (uVar6 & 3));
    uVar71 = uVar69 - lVar70;
  }
  if (uVar69 - uVar6 < 0xfffffffffffffffd) {
    lVar70 = 0;
    do {
      param_2[lVar70] = param_2[lVar70] + param_3[lVar70];
      param_2[lVar70 + 1] = param_2[lVar70 + 1] + param_3[lVar70 + 1];
      param_2[lVar70 + 2] = param_2[lVar70 + 2] + param_3[lVar70 + 2];
      param_2[lVar70 + 3] = param_2[lVar70 + 3] + param_3[lVar70 + 3];
      lVar70 = lVar70 + 4;
    } while (uVar6 - uVar71 != lVar70);
  }
  return;
}

// png_read_filter_row_avg @ 140dd8640

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl png_read_filter_row_avg(png_row_info_struct *param_1,uchar *param_2,uchar *param_3)

{
  byte *pbVar1;
  byte *pbVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  byte bVar5;
  ulong64 uVar6;
  ulonglong uVar7;
  byte bVar8;
  byte bVar9;
  byte bVar10;
  byte bVar11;
  byte bVar12;
  byte bVar13;
  byte bVar14;
  byte bVar15;
  byte bVar16;
  byte bVar17;
  byte bVar18;
  byte bVar19;
  byte bVar20;
  byte bVar21;
  byte bVar22;
  byte bVar23;
  byte bVar24;
  byte bVar25;
  byte bVar26;
  byte bVar27;
  byte bVar28;
  byte bVar29;
  byte bVar30;
  byte bVar31;
  byte bVar32;
  byte bVar33;
  byte bVar34;
  byte bVar35;
  byte bVar36;
  byte bVar37;
  longlong lVar38;
  uint uVar39;
  ulonglong uVar41;
  ulonglong uVar42;
  ulonglong uVar43;
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  ulonglong uVar40;
  
  bVar5 = param_1->pixel_depth;
  uVar39 = bVar5 + 7 >> 3;
  uVar40 = (ulonglong)uVar39;
  uVar6 = param_1->rowbytes;
  if (bVar5 != 0) {
    if ((bVar5 < 0x79) || (param_2 < param_3 + uVar40 && param_3 < param_2 + uVar40)) {
      uVar43 = 0;
    }
    else {
      uVar43 = (ulonglong)(uVar39 & 0xfffffff0);
      auVar44._0_2_ = *(ushort *)param_3 >> 1;
      auVar44._2_2_ = *(ushort *)(param_3 + 2) >> 1;
      auVar44._4_2_ = *(ushort *)(param_3 + 4) >> 1;
      auVar44._6_2_ = *(ushort *)(param_3 + 6) >> 1;
      auVar44._8_2_ = *(ushort *)(param_3 + 8) >> 1;
      auVar44._10_2_ = *(ushort *)(param_3 + 10) >> 1;
      auVar44._12_2_ = *(ushort *)(param_3 + 0xc) >> 1;
      auVar44._14_2_ = *(ushort *)(param_3 + 0xe) >> 1;
      auVar44 = auVar44 & ___xmm_7f7f7f7f7f7f7f7f7f7f7f7f7f7f7f7f;
      *param_2 = auVar44[0] + *param_2;
      param_2[1] = auVar44[1] + param_2[1];
      param_2[2] = auVar44[2] + param_2[2];
      param_2[3] = auVar44[3] + param_2[3];
      param_2[4] = auVar44[4] + param_2[4];
      param_2[5] = auVar44[5] + param_2[5];
      param_2[6] = auVar44[6] + param_2[6];
      param_2[7] = auVar44[7] + param_2[7];
      param_2[8] = auVar44[8] + param_2[8];
      param_2[9] = auVar44[9] + param_2[9];
      param_2[10] = auVar44[10] + param_2[10];
      param_2[0xb] = auVar44[0xb] + param_2[0xb];
      param_2[0xc] = auVar44[0xc] + param_2[0xc];
      param_2[0xd] = auVar44[0xd] + param_2[0xd];
      param_2[0xe] = auVar44[0xe] + param_2[0xe];
      param_2[0xf] = auVar44[0xf] + param_2[0xf];
      if (uVar43 != 0x10) {
        auVar46._0_2_ = *(ushort *)(param_3 + 0x10) >> 1;
        auVar46._2_2_ = *(ushort *)(param_3 + 0x12) >> 1;
        auVar46._4_2_ = *(ushort *)(param_3 + 0x14) >> 1;
        auVar46._6_2_ = *(ushort *)(param_3 + 0x16) >> 1;
        auVar46._8_2_ = *(ushort *)(param_3 + 0x18) >> 1;
        auVar46._10_2_ = *(ushort *)(param_3 + 0x1a) >> 1;
        auVar46._12_2_ = *(ushort *)(param_3 + 0x1c) >> 1;
        auVar46._14_2_ = *(ushort *)(param_3 + 0x1e) >> 1;
        auVar46 = auVar46 & ___xmm_7f7f7f7f7f7f7f7f7f7f7f7f7f7f7f7f;
        param_2[0x10] = auVar46[0] + param_2[0x10];
        param_2[0x11] = auVar46[1] + param_2[0x11];
        param_2[0x12] = auVar46[2] + param_2[0x12];
        param_2[0x13] = auVar46[3] + param_2[0x13];
        param_2[0x14] = auVar46[4] + param_2[0x14];
        param_2[0x15] = auVar46[5] + param_2[0x15];
        param_2[0x16] = auVar46[6] + param_2[0x16];
        param_2[0x17] = auVar46[7] + param_2[0x17];
        param_2[0x18] = auVar46[8] + param_2[0x18];
        param_2[0x19] = auVar46[9] + param_2[0x19];
        param_2[0x1a] = auVar46[10] + param_2[0x1a];
        param_2[0x1b] = auVar46[0xb] + param_2[0x1b];
        param_2[0x1c] = auVar46[0xc] + param_2[0x1c];
        param_2[0x1d] = auVar46[0xd] + param_2[0x1d];
        param_2[0x1e] = auVar46[0xe] + param_2[0x1e];
        param_2[0x1f] = auVar46[0xf] + param_2[0x1f];
      }
      param_2 = param_2 + uVar43;
      param_3 = param_3 + uVar43;
      if (uVar39 == (uVar39 & 0xfffffff0)) goto LAB_140dd8788;
    }
    uVar42 = uVar40 & 3;
    uVar41 = uVar43;
    if ((uVar39 & 3) != 0) {
      uVar41 = uVar43 + uVar42;
      do {
        *param_2 = *param_2 + (*param_3 >> 1);
        param_3 = param_3 + 1;
        param_2 = param_2 + 1;
        uVar42 = uVar42 - 1;
      } while (uVar42 != 0);
    }
    if (uVar43 - uVar40 < 0xfffffffffffffffd) {
      lVar38 = uVar40 - uVar41;
      do {
        *param_2 = *param_2 + (*param_3 >> 1);
        param_2[1] = param_2[1] + (param_3[1] >> 1);
        param_2[2] = param_2[2] + (param_3[2] >> 1);
        param_2[3] = param_2[3] + (param_3[3] >> 1);
        param_3 = param_3 + 4;
        param_2 = param_2 + 4;
        lVar38 = lVar38 + -4;
      } while (lVar38 != 0);
    }
  }
LAB_140dd8788:
  auVar44 = ___xmm_7f7f7f7f7f7f7f7f7f7f7f7f7f7f7f7f;
  if (uVar6 == uVar40) {
    return;
  }
  uVar43 = uVar6 - uVar40;
  lVar38 = -uVar40;
  if (uVar43 < 8) {
    uVar41 = 0;
  }
  else {
    uVar41 = 0;
    if ((param_3 + uVar43 <= param_2 || param_2 + uVar43 <= param_3) &&
       (param_2 + (uVar6 - uVar39 * 2) <= param_2 || param_2 + uVar43 <= param_2 + lVar38)) {
      if (uVar43 < 0x20) {
        uVar42 = 0;
      }
      else {
        uVar41 = uVar43 & 0xffffffffffffffe0;
        uVar42 = 0;
        do {
          pbVar2 = param_2 + uVar42;
          bVar5 = pbVar2[1];
          bVar8 = pbVar2[2];
          bVar9 = pbVar2[3];
          bVar10 = pbVar2[4];
          bVar11 = pbVar2[5];
          bVar12 = pbVar2[6];
          bVar13 = pbVar2[7];
          bVar14 = pbVar2[8];
          bVar15 = pbVar2[9];
          bVar16 = pbVar2[10];
          bVar17 = pbVar2[0xb];
          bVar18 = pbVar2[0xc];
          bVar19 = pbVar2[0xd];
          bVar20 = pbVar2[0xe];
          bVar21 = pbVar2[0xf];
          pbVar1 = param_2 + uVar42 + 0x10;
          bVar22 = *pbVar1;
          bVar23 = pbVar1[1];
          bVar24 = pbVar1[2];
          bVar25 = pbVar1[3];
          bVar26 = pbVar1[4];
          bVar27 = pbVar1[5];
          bVar28 = pbVar1[6];
          bVar29 = pbVar1[7];
          bVar30 = pbVar1[8];
          bVar31 = pbVar1[9];
          bVar32 = pbVar1[10];
          bVar33 = pbVar1[0xb];
          bVar34 = pbVar1[0xc];
          bVar35 = pbVar1[0xd];
          bVar36 = pbVar1[0xe];
          bVar37 = pbVar1[0xf];
          auVar49 = *(undefined1 (*) [16])(param_2 + uVar42 + lVar38) &
                    *(undefined1 (*) [16])(param_3 + uVar42);
          auVar46 = *(undefined1 (*) [16])(param_2 + uVar42 + lVar38) ^
                    *(undefined1 (*) [16])(param_3 + uVar42);
          auVar47._0_2_ = auVar46._0_2_ >> 1;
          auVar47._2_2_ = auVar46._2_2_ >> 1;
          auVar47._4_2_ = auVar46._4_2_ >> 1;
          auVar47._6_2_ = auVar46._6_2_ >> 1;
          auVar47._8_2_ = auVar46._8_2_ >> 1;
          auVar47._10_2_ = auVar46._10_2_ >> 1;
          auVar47._12_2_ = auVar46._12_2_ >> 1;
          auVar47._14_2_ = auVar46._14_2_ >> 1;
          auVar47 = auVar47 & auVar44;
          auVar46 = *(undefined1 (*) [16])(param_2 + uVar42 + lVar38 + 0x10) &
                    *(undefined1 (*) [16])(param_3 + uVar42 + 0x10);
          auVar45 = *(undefined1 (*) [16])(param_2 + uVar42 + lVar38 + 0x10) ^
                    *(undefined1 (*) [16])(param_3 + uVar42 + 0x10);
          auVar48._0_2_ = auVar45._0_2_ >> 1;
          auVar48._2_2_ = auVar45._2_2_ >> 1;
          auVar48._4_2_ = auVar45._4_2_ >> 1;
          auVar48._6_2_ = auVar45._6_2_ >> 1;
          auVar48._8_2_ = auVar45._8_2_ >> 1;
          auVar48._10_2_ = auVar45._10_2_ >> 1;
          auVar48._12_2_ = auVar45._12_2_ >> 1;
          auVar48._14_2_ = auVar45._14_2_ >> 1;
          auVar48 = auVar48 & auVar44;
          pbVar1 = param_2 + uVar42;
          *pbVar1 = auVar47[0] + auVar49[0] + *pbVar2;
          pbVar1[1] = auVar47[1] + auVar49[1] + bVar5;
          pbVar1[2] = auVar47[2] + auVar49[2] + bVar8;
          pbVar1[3] = auVar47[3] + auVar49[3] + bVar9;
          pbVar1[4] = auVar47[4] + auVar49[4] + bVar10;
          pbVar1[5] = auVar47[5] + auVar49[5] + bVar11;
          pbVar1[6] = auVar47[6] + auVar49[6] + bVar12;
          pbVar1[7] = auVar47[7] + auVar49[7] + bVar13;
          pbVar1[8] = auVar47[8] + auVar49[8] + bVar14;
          pbVar1[9] = auVar47[9] + auVar49[9] + bVar15;
          pbVar1[10] = auVar47[10] + auVar49[10] + bVar16;
          pbVar1[0xb] = auVar47[0xb] + auVar49[0xb] + bVar17;
          pbVar1[0xc] = auVar47[0xc] + auVar49[0xc] + bVar18;
          pbVar1[0xd] = auVar47[0xd] + auVar49[0xd] + bVar19;
          pbVar1[0xe] = auVar47[0xe] + auVar49[0xe] + bVar20;
          pbVar1[0xf] = auVar47[0xf] + auVar49[0xf] + bVar21;
          pbVar1 = param_2 + uVar42 + 0x10;
          *pbVar1 = auVar48[0] + auVar46[0] + bVar22;
          pbVar1[1] = auVar48[1] + auVar46[1] + bVar23;
          pbVar1[2] = auVar48[2] + auVar46[2] + bVar24;
          pbVar1[3] = auVar48[3] + auVar46[3] + bVar25;
          pbVar1[4] = auVar48[4] + auVar46[4] + bVar26;
          pbVar1[5] = auVar48[5] + auVar46[5] + bVar27;
          pbVar1[6] = auVar48[6] + auVar46[6] + bVar28;
          pbVar1[7] = auVar48[7] + auVar46[7] + bVar29;
          pbVar1[8] = auVar48[8] + auVar46[8] + bVar30;
          pbVar1[9] = auVar48[9] + auVar46[9] + bVar31;
          pbVar1[10] = auVar48[10] + auVar46[10] + bVar32;
          pbVar1[0xb] = auVar48[0xb] + auVar46[0xb] + bVar33;
          pbVar1[0xc] = auVar48[0xc] + auVar46[0xc] + bVar34;
          pbVar1[0xd] = auVar48[0xd] + auVar46[0xd] + bVar35;
          pbVar1[0xe] = auVar48[0xe] + auVar46[0xe] + bVar36;
          pbVar1[0xf] = auVar48[0xf] + auVar46[0xf] + bVar37;
          uVar42 = uVar42 + 0x20;
        } while (uVar41 != uVar42);
        if (uVar43 == uVar41) {
          return;
        }
        uVar42 = uVar41;
        if ((uVar43 & 0x18) == 0) {
          param_3 = param_3 + uVar41;
          param_2 = param_2 + uVar41;
          goto LAB_140dd87b0;
        }
      }
      auVar44 = ___xmm_7f7f7f7f7f7f7f7f7f7f7f7f7f7f7f7f;
      uVar41 = uVar43 & 0xfffffffffffffff8;
      do {
        uVar3 = *(undefined8 *)(param_2 + uVar42);
        uVar4 = *(ulonglong *)(param_2 + lVar38 + uVar42);
        uVar7 = uVar4 & *(ulonglong *)(param_3 + uVar42);
        uVar4 = uVar4 ^ *(ulonglong *)(param_3 + uVar42);
        auVar45._0_2_ = (ushort)uVar4 >> 1;
        auVar45._2_2_ = (ushort)(uVar4 >> 0x10) >> 1;
        auVar45._4_2_ = (ushort)(uVar4 >> 0x20) >> 1;
        auVar45._6_2_ = (ushort)(uVar4 >> 0x31);
        auVar45._8_8_ = 0;
        auVar45 = auVar45 & auVar44;
        *(ulonglong *)(param_2 + uVar42) =
             CONCAT17(auVar45[7] + (char)(uVar7 >> 0x38) + (char)((ulonglong)uVar3 >> 0x38),
                      CONCAT16(auVar45[6] + (char)(uVar7 >> 0x30) + (char)((ulonglong)uVar3 >> 0x30)
                               ,CONCAT15(auVar45[5] +
                                         (char)(uVar7 >> 0x28) + (char)((ulonglong)uVar3 >> 0x28),
                                         CONCAT14(auVar45[4] +
                                                  (char)(uVar7 >> 0x20) +
                                                  (char)((ulonglong)uVar3 >> 0x20),
                                                  CONCAT13(auVar45[3] +
                                                           (char)(uVar7 >> 0x18) +
                                                           (char)((ulonglong)uVar3 >> 0x18),
                                                           CONCAT12(auVar45[2] +
                                                                    (char)(uVar7 >> 0x10) +
                                                                    (char)((ulonglong)uVar3 >> 0x10)
                                                                    ,CONCAT11(auVar45[1] +
                                                                              (char)(uVar7 >> 8) +
                                                                              (char)((ulonglong)
                                                                                     uVar3 >> 8),
                                                                              auVar45[0] +
                                                                              (char)uVar7 +
                                                                              (char)uVar3)))))));
        uVar42 = uVar42 + 8;
      } while (uVar41 != uVar42);
      param_3 = param_3 + uVar41;
      param_2 = param_2 + uVar41;
      if (uVar43 == uVar41) {
        return;
      }
    }
  }
LAB_140dd87b0:
  uVar43 = ~uVar41;
  if (((int)uVar6 - uVar39 & 1) != 0) {
    *param_2 = *param_2 + (char)((uint)param_2[lVar38] + (uint)*param_3 >> 1);
    param_3 = param_3 + 1;
    param_2 = param_2 + 1;
    uVar41 = uVar41 | 1;
  }
  if (uVar43 + uVar6 != uVar40) {
    lVar38 = 0;
    do {
      param_2[lVar38] =
           param_2[lVar38] + (char)((uint)param_2[lVar38 - uVar40] + (uint)param_3[lVar38] >> 1);
      param_2[lVar38 + 1] =
           param_2[lVar38 + 1] +
           (char)((uint)param_2[lVar38 + (1 - uVar40)] + (uint)param_3[lVar38 + 1] >> 1);
      lVar38 = lVar38 + 2;
    } while ((uVar6 - uVar41) - uVar40 != lVar38);
  }
  return;
}

// png_read_filter_row_paeth_1byte_pixel @ 140dd89c0

void __cdecl
png_read_filter_row_paeth_1byte_pixel(png_row_info_struct *param_1,uchar *param_2,uchar *param_3)

{
  byte bVar1;
  ulong64 uVar2;
  uint uVar3;
  uint uVar4;
  byte *pbVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  
  uVar2 = param_1->rowbytes;
  bVar1 = *param_3;
  uVar11 = (uint)*param_2 + (uint)bVar1;
  *param_2 = (uchar)uVar11;
  if (1 < (longlong)uVar2) {
    pbVar5 = param_2 + 1;
    uVar4 = (uint)bVar1;
    do {
      param_3 = param_3 + 1;
      uVar10 = (uint)*param_3;
      uVar8 = uVar10 - uVar4;
      uVar6 = (uVar11 & 0xff) - uVar4;
      uVar3 = -uVar8;
      if ((int)-uVar8 < 0) {
        uVar3 = uVar8;
      }
      uVar7 = -uVar6;
      if ((int)-uVar6 < 0) {
        uVar7 = uVar6;
      }
      uVar9 = -(uVar6 + uVar8);
      if ((int)uVar9 < 0) {
        uVar9 = uVar6 + uVar8;
      }
      uVar6 = uVar10;
      if (uVar3 <= uVar7) {
        uVar6 = uVar11 & 0xff;
        uVar7 = uVar3;
      }
      if (uVar7 <= uVar9) {
        uVar4 = uVar6;
      }
      uVar11 = *pbVar5 + uVar4;
      *pbVar5 = (byte)uVar11;
      pbVar5 = pbVar5 + 1;
      uVar4 = uVar10;
    } while (pbVar5 < param_2 + uVar2);
  }
  return;
}

// png_read_filter_row_paeth_multibyte_pixel @ 140dd8a60

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
png_read_filter_row_paeth_multibyte_pixel
          (png_row_info_struct *param_1,uchar *param_2,uchar *param_3)

{
  uchar *puVar1;
  uchar *puVar2;
  uchar *puVar3;
  undefined8 uVar4;
  byte bVar5;
  byte bVar6;
  byte bVar7;
  byte bVar8;
  byte bVar9;
  byte bVar10;
  byte bVar11;
  undefined1 auVar12 [15];
  undefined1 auVar13 [14];
  undefined1 auVar14 [15];
  undefined1 auVar15 [14];
  undefined1 auVar16 [15];
  undefined1 auVar17 [14];
  undefined1 auVar18 [15];
  undefined1 auVar19 [14];
  undefined1 auVar20 [15];
  undefined1 auVar21 [14];
  undefined1 auVar22 [15];
  undefined1 auVar23 [14];
  undefined1 auVar24 [15];
  undefined1 auVar25 [14];
  undefined1 auVar26 [15];
  undefined1 auVar27 [15];
  undefined1 auVar28 [15];
  undefined1 auVar29 [15];
  undefined1 auVar30 [14];
  undefined1 auVar31 [15];
  undefined1 auVar32 [15];
  undefined1 auVar33 [15];
  undefined1 auVar34 [15];
  undefined1 auVar35 [15];
  undefined1 auVar36 [15];
  undefined1 auVar37 [15];
  undefined1 auVar38 [15];
  undefined1 auVar39 [15];
  undefined1 auVar40 [15];
  undefined1 auVar41 [15];
  undefined1 auVar42 [14];
  undefined1 auVar43 [15];
  undefined1 auVar44 [14];
  undefined1 auVar45 [15];
  undefined1 auVar46 [14];
  undefined1 auVar47 [15];
  undefined1 auVar48 [15];
  undefined1 auVar49 [14];
  undefined1 auVar50 [15];
  undefined1 auVar51 [14];
  undefined1 auVar52 [14];
  undefined1 auVar53 [13];
  undefined1 auVar54 [13];
  undefined1 auVar55 [13];
  undefined1 auVar56 [14];
  undefined1 auVar57 [13];
  undefined1 auVar58 [13];
  undefined1 auVar59 [13];
  undefined1 auVar60 [13];
  undefined1 auVar61 [13];
  undefined1 auVar62 [13];
  undefined1 auVar63 [13];
  undefined1 auVar64 [13];
  undefined1 auVar65 [13];
  undefined1 auVar66 [13];
  undefined1 auVar67 [13];
  undefined1 auVar68 [13];
  undefined1 auVar69 [15];
  undefined1 auVar70 [15];
  undefined1 auVar71 [15];
  undefined1 auVar72 [15];
  undefined1 auVar73 [15];
  undefined1 auVar74 [15];
  undefined1 auVar75 [15];
  undefined1 auVar76 [15];
  undefined1 auVar77 [15];
  undefined1 auVar78 [15];
  undefined1 auVar79 [15];
  undefined1 auVar80 [15];
  undefined1 auVar81 [15];
  undefined1 auVar82 [15];
  undefined1 auVar83 [15];
  undefined1 auVar84 [15];
  undefined1 auVar85 [15];
  undefined1 auVar86 [15];
  undefined1 auVar87 [15];
  undefined1 auVar88 [15];
  undefined1 auVar89 [15];
  undefined1 auVar90 [15];
  undefined1 auVar91 [15];
  undefined1 auVar92 [15];
  undefined1 auVar93 [15];
  undefined1 auVar94 [15];
  undefined1 auVar95 [15];
  undefined1 auVar96 [15];
  uchar uVar97;
  uchar uVar98;
  uchar uVar99;
  uchar uVar100;
  uchar uVar101;
  uchar uVar102;
  uchar uVar103;
  uchar uVar104;
  uchar uVar105;
  uchar uVar106;
  uchar uVar107;
  uchar uVar108;
  uchar uVar109;
  uchar uVar110;
  uchar uVar111;
  uchar uVar112;
  uchar uVar113;
  uchar uVar114;
  uchar uVar115;
  uchar uVar116;
  uchar uVar117;
  uchar uVar118;
  uchar uVar119;
  uchar uVar120;
  uchar uVar121;
  uchar uVar122;
  uchar uVar123;
  uchar uVar124;
  uchar uVar125;
  uchar uVar126;
  uchar uVar127;
  uchar uVar128;
  uchar uVar129;
  uchar uVar130;
  uchar uVar131;
  uchar uVar132;
  uchar uVar133;
  uchar uVar134;
  uchar uVar135;
  uchar uVar136;
  uchar uVar137;
  uchar uVar138;
  uchar uVar139;
  uchar uVar140;
  uchar uVar141;
  uchar uVar142;
  uchar uVar143;
  uchar uVar144;
  uchar uVar145;
  uchar uVar146;
  uchar uVar147;
  uchar uVar148;
  uchar uVar149;
  uchar uVar150;
  uchar uVar151;
  uchar uVar152;
  uchar uVar153;
  uchar uVar154;
  uchar uVar155;
  uchar uVar156;
  uchar uVar157;
  uchar uVar158;
  char cVar159;
  char cVar160;
  char cVar161;
  char cVar162;
  char cVar163;
  char cVar164;
  char cVar165;
  char cVar166;
  char cVar167;
  char cVar168;
  char cVar169;
  char cVar170;
  char cVar171;
  undefined1 auVar172 [15];
  unkuint9 Var173;
  undefined1 auVar174 [11];
  undefined1 auVar175 [14];
  undefined1 auVar176 [15];
  undefined1 auVar177 [11];
  undefined1 auVar178 [14];
  undefined1 auVar179 [15];
  undefined1 auVar180 [11];
  undefined1 auVar181 [14];
  undefined1 auVar182 [15];
  undefined1 auVar183 [11];
  undefined1 auVar184 [13];
  undefined1 auVar185 [14];
  undefined1 auVar186 [15];
  undefined1 auVar187 [11];
  undefined1 auVar188 [14];
  undefined1 auVar189 [15];
  undefined1 auVar190 [11];
  undefined1 auVar191 [14];
  undefined1 auVar192 [15];
  undefined1 auVar193 [11];
  undefined1 auVar194 [13];
  undefined1 auVar195 [14];
  undefined1 auVar196 [13];
  undefined1 auVar197 [15];
  undefined1 auVar198 [11];
  undefined1 auVar199 [13];
  undefined1 auVar200 [14];
  undefined1 auVar201 [13];
  undefined1 auVar202 [13];
  undefined1 auVar203 [13];
  undefined1 auVar204 [13];
  undefined1 auVar205 [15];
  undefined1 auVar206 [15];
  undefined1 auVar207 [15];
  undefined1 auVar208 [15];
  undefined1 auVar209 [15];
  undefined1 auVar210 [15];
  undefined1 auVar211 [15];
  undefined1 auVar212 [15];
  undefined1 auVar213 [15];
  undefined1 auVar214 [15];
  undefined1 auVar215 [15];
  undefined1 auVar216 [15];
  undefined3 uVar217;
  undefined1 auVar218 [15];
  undefined1 auVar219 [15];
  undefined1 auVar220 [15];
  undefined1 auVar221 [15];
  undefined5 uVar222;
  undefined1 auVar223 [12];
  undefined8 uVar224;
  undefined1 auVar225 [12];
  undefined1 auVar226 [14];
  undefined8 uVar227;
  undefined1 auVar228 [14];
  uint6 uVar229;
  uint6 uVar230;
  uint6 uVar231;
  undefined1 *puVar232;
  longlong lVar233;
  byte bVar234;
  undefined1 (*pauVar235) [16];
  ulonglong uVar236;
  undefined1 (*pauVar238) [16];
  uint uVar239;
  ulonglong uVar240;
  ulonglong uVar241;
  longlong lVar242;
  ulonglong uVar243;
  undefined8 *puVar244;
  uint uVar245;
  uint uVar246;
  undefined1 (*pauVar247) [16];
  ulonglong *puVar248;
  byte bVar249;
  uint uVar250;
  uint uVar251;
  byte bVar253;
  byte bVar254;
  byte bVar255;
  byte bVar256;
  byte bVar257;
  byte bVar258;
  byte bVar259;
  byte bVar260;
  byte bVar261;
  byte bVar262;
  byte bVar263;
  byte bVar264;
  byte bVar265;
  byte bVar266;
  undefined1 auVar252 [16];
  byte bVar267;
  byte bVar269;
  byte bVar270;
  byte bVar271;
  byte bVar272;
  byte bVar273;
  byte bVar274;
  undefined1 auVar268 [16];
  undefined1 auVar275 [16];
  undefined1 auVar276 [16];
  uint uVar277;
  uint uVar278;
  uint uVar279;
  uint uVar280;
  uint uVar281;
  uint uVar282;
  uint uVar283;
  uint uVar284;
  uint uVar285;
  uint uVar286;
  uint uVar287;
  uint uVar288;
  uint uVar289;
  uint uVar290;
  uint uVar292;
  uint uVar293;
  uint uVar294;
  uint uVar295;
  uint uVar296;
  undefined1 auVar291 [16];
  uint uVar297;
  uint uVar299;
  uint uVar300;
  uint uVar301;
  undefined1 auVar298 [16];
  uint uVar302;
  uint uVar305;
  uint uVar307;
  byte bVar308;
  byte bVar309;
  byte bVar311;
  byte bVar312;
  undefined1 auVar303 [16];
  byte bVar306;
  uint uVar310;
  byte bVar313;
  undefined1 auVar304 [16];
  uint uVar314;
  uint uVar315;
  uint uVar316;
  uint uVar317;
  byte bVar320;
  byte bVar321;
  char cVar322;
  byte bVar323;
  char cVar324;
  byte bVar325;
  byte bVar326;
  byte bVar327;
  undefined1 auVar318 [16];
  byte bVar328;
  undefined1 auVar319 [16];
  uint uVar329;
  uint uVar333;
  int iVar334;
  uint uVar335;
  uint uVar338;
  undefined1 auVar330 [16];
  undefined1 auVar331 [16];
  undefined1 auVar332 [16];
  uint uVar339;
  uint uVar340;
  uint uVar344;
  uint uVar345;
  uint uVar346;
  uint uVar347;
  uint uVar348;
  uint uVar349;
  undefined1 auVar341 [16];
  undefined1 auVar342 [16];
  undefined1 auVar343 [16];
  undefined1 auVar350 [16];
  undefined1 auVar351 [16];
  byte bVar354;
  byte bVar355;
  byte bVar356;
  byte bVar357;
  byte bVar358;
  byte bVar359;
  undefined1 auVar360 [16];
  undefined1 auVar361 [16];
  undefined1 auVar362 [16];
  undefined1 auVar363 [16];
  undefined1 auVar364 [16];
  uint uStack_154;
  int iStack_150;
  undefined1 (*pauVar237) [16];
  ushort uVar336;
  ushort uVar337;
  ushort uVar352;
  ushort uVar353;
  
  uVar240 = (ulonglong)(param_1->pixel_depth + 7 >> 3);
  if (param_1->pixel_depth == 0) {
    pauVar235 = (undefined1 (*) [16])(param_2 + param_1->rowbytes);
    if (pauVar235 <= param_2) {
      return;
    }
  }
  else {
    pauVar238 = (undefined1 (*) [16])(param_2 + uVar240);
    pauVar235 = (undefined1 (*) [16])(param_2 + 1);
    pauVar237 = pauVar235;
    if (pauVar235 < pauVar238) {
      pauVar237 = pauVar238;
    }
    uVar236 = (longlong)pauVar237 - (longlong)param_2;
    pauVar237 = (undefined1 (*) [16])param_2;
    if (uVar236 < 0x20) {
LAB_140dd8b30:
      do {
        (*pauVar237)[0] = (*pauVar237)[0] + (*(undefined1 (*) [16])param_3)[0];
        pauVar247 = (undefined1 (*) [16])(*(undefined1 (*) [16])param_3 + 1);
        pauVar237 = (undefined1 (*) [16])(*pauVar237 + 1);
        param_3 = (uchar *)pauVar247;
      } while (pauVar237 < pauVar238);
    }
    else {
      if (pauVar235 < pauVar238) {
        pauVar235 = pauVar238;
      }
      if (param_2 < param_3 + ((longlong)pauVar235 - (longlong)param_2) && param_3 < pauVar235)
      goto LAB_140dd8b30;
      uVar241 = uVar236 & 0xffffffffffffffe0;
      pauVar247 = (undefined1 (*) [16])(param_3 + uVar241);
      pauVar237 = (undefined1 (*) [16])(param_2 + uVar241);
      uVar243 = 0;
      do {
        puVar1 = param_2 + uVar243;
        uVar97 = puVar1[1];
        uVar98 = puVar1[2];
        uVar99 = puVar1[3];
        uVar100 = puVar1[4];
        uVar101 = puVar1[5];
        uVar102 = puVar1[6];
        uVar103 = puVar1[7];
        uVar104 = puVar1[8];
        uVar105 = puVar1[9];
        uVar106 = puVar1[10];
        uVar107 = puVar1[0xb];
        uVar108 = puVar1[0xc];
        uVar109 = puVar1[0xd];
        uVar110 = puVar1[0xe];
        uVar111 = puVar1[0xf];
        puVar2 = param_2 + uVar243 + 0x10;
        uVar112 = *puVar2;
        uVar113 = puVar2[1];
        uVar114 = puVar2[2];
        uVar115 = puVar2[3];
        uVar116 = puVar2[4];
        uVar117 = puVar2[5];
        uVar118 = puVar2[6];
        uVar119 = puVar2[7];
        uVar120 = puVar2[8];
        uVar121 = puVar2[9];
        uVar122 = puVar2[10];
        uVar123 = puVar2[0xb];
        uVar124 = puVar2[0xc];
        uVar125 = puVar2[0xd];
        uVar126 = puVar2[0xe];
        uVar127 = puVar2[0xf];
        puVar2 = param_3 + uVar243;
        uVar128 = puVar2[1];
        uVar129 = puVar2[2];
        uVar130 = puVar2[3];
        uVar131 = puVar2[4];
        uVar132 = puVar2[5];
        uVar133 = puVar2[6];
        uVar134 = puVar2[7];
        uVar135 = puVar2[8];
        uVar136 = puVar2[9];
        uVar137 = puVar2[10];
        uVar138 = puVar2[0xb];
        uVar139 = puVar2[0xc];
        uVar140 = puVar2[0xd];
        uVar141 = puVar2[0xe];
        uVar142 = puVar2[0xf];
        puVar3 = param_3 + uVar243 + 0x10;
        uVar143 = *puVar3;
        uVar144 = puVar3[1];
        uVar145 = puVar3[2];
        uVar146 = puVar3[3];
        uVar147 = puVar3[4];
        uVar148 = puVar3[5];
        uVar149 = puVar3[6];
        uVar150 = puVar3[7];
        uVar151 = puVar3[8];
        uVar152 = puVar3[9];
        uVar153 = puVar3[10];
        uVar154 = puVar3[0xb];
        uVar155 = puVar3[0xc];
        uVar156 = puVar3[0xd];
        uVar157 = puVar3[0xe];
        uVar158 = puVar3[0xf];
        puVar3 = param_2 + uVar243;
        *puVar3 = *puVar2 + *puVar1;
        puVar3[1] = uVar128 + uVar97;
        puVar3[2] = uVar129 + uVar98;
        puVar3[3] = uVar130 + uVar99;
        puVar3[4] = uVar131 + uVar100;
        puVar3[5] = uVar132 + uVar101;
        puVar3[6] = uVar133 + uVar102;
        puVar3[7] = uVar134 + uVar103;
        puVar3[8] = uVar135 + uVar104;
        puVar3[9] = uVar136 + uVar105;
        puVar3[10] = uVar137 + uVar106;
        puVar3[0xb] = uVar138 + uVar107;
        puVar3[0xc] = uVar139 + uVar108;
        puVar3[0xd] = uVar140 + uVar109;
        puVar3[0xe] = uVar141 + uVar110;
        puVar3[0xf] = uVar142 + uVar111;
        puVar1 = param_2 + uVar243 + 0x10;
        *puVar1 = uVar143 + uVar112;
        puVar1[1] = uVar144 + uVar113;
        puVar1[2] = uVar145 + uVar114;
        puVar1[3] = uVar146 + uVar115;
        puVar1[4] = uVar147 + uVar116;
        puVar1[5] = uVar148 + uVar117;
        puVar1[6] = uVar149 + uVar118;
        puVar1[7] = uVar150 + uVar119;
        puVar1[8] = uVar151 + uVar120;
        puVar1[9] = uVar152 + uVar121;
        puVar1[10] = uVar153 + uVar122;
        puVar1[0xb] = uVar154 + uVar123;
        puVar1[0xc] = uVar155 + uVar124;
        puVar1[0xd] = uVar156 + uVar125;
        puVar1[0xe] = uVar157 + uVar126;
        puVar1[0xf] = uVar158 + uVar127;
        uVar243 = uVar243 + 0x20;
      } while (uVar241 != uVar243);
      param_3 = (uchar *)pauVar247;
      if (uVar236 != uVar241) goto LAB_140dd8b30;
    }
    pauVar235 = (undefined1 (*) [16])(param_2 + param_1->rowbytes);
    param_2 = (uchar *)pauVar237;
    param_3 = (uchar *)pauVar247;
    if (pauVar235 <= pauVar237) {
      return;
    }
  }
  lVar233 = -uVar240;
  uVar236 = (longlong)pauVar235 - (longlong)param_2;
  if (7 < uVar236) {
    if ((((undefined1 (*) [16])((uVar236 - uVar240) + (longlong)param_3) <= param_2 ||
          pauVar235 <= (undefined1 (*) [16])((longlong)param_3 + lVar233)) &&
        ((undefined1 (*) [16])((longlong)pauVar235 - uVar240) <= param_2 ||
         pauVar235 <= (undefined1 (*) [16])((longlong)param_2 + lVar233))) &&
       ((undefined1 (*) [16])((longlong)param_3 + uVar236) <= param_2 || pauVar235 <= param_3)) {
      if (uVar236 < 0x10) {
        uVar243 = 0;
      }
      else {
        uVar243 = uVar236 & 0xfffffffffffffff0;
        pauVar238 = (undefined1 (*) [16])param_3;
        pauVar237 = (undefined1 (*) [16])param_2;
        uVar240 = uVar243;
        do {
          auVar275 = *(undefined1 (*) [16])((longlong)pauVar238 + lVar233);
          bVar306 = auVar275[7];
          auVar29[0xd] = 0;
          auVar29._0_13_ = auVar275._0_13_;
          auVar29[0xe] = bVar306;
          bVar274 = auVar275[6];
          auVar36[0xc] = bVar274;
          auVar36._0_12_ = auVar275._0_12_;
          auVar36._13_2_ = auVar29._13_2_;
          auVar47[0xb] = 0;
          auVar47._0_11_ = auVar275._0_11_;
          auVar47._12_3_ = auVar36._12_3_;
          bVar273 = auVar275[5];
          uVar245 = auVar47._11_4_;
          auVar72[10] = bVar273;
          auVar72._0_10_ = auVar275._0_10_;
          auVar72._11_4_ = uVar245;
          auVar80[9] = 0;
          auVar80._0_9_ = auVar275._0_9_;
          auVar80._10_5_ = auVar72._10_5_;
          bVar272 = auVar275[4];
          auVar83[8] = bVar272;
          auVar83._0_8_ = auVar275._0_8_;
          auVar83._9_6_ = auVar80._9_6_;
          auVar182._7_8_ = 0;
          auVar182._0_7_ = auVar83._8_7_;
          bVar271 = auVar275[3];
          Var173 = CONCAT81(SUB158(auVar182 << 0x40,7),bVar271);
          auVar211._9_6_ = 0;
          auVar211._0_9_ = Var173;
          bVar270 = auVar275[2];
          auVar183._1_10_ = SUB1510(auVar211 << 0x30,5);
          auVar183[0] = bVar270;
          auVar212._11_4_ = 0;
          auVar212._0_11_ = auVar183;
          bVar269 = auVar275[1];
          auVar184._1_12_ = SUB1512(auVar212 << 0x20,3);
          auVar184[0] = bVar269;
          bVar267 = auVar275[0];
          auVar96._2_13_ = auVar184;
          auVar96._0_2_ = CONCAT11(0,bVar267);
          auVar30._10_2_ = 0;
          auVar30._0_10_ = auVar96._0_10_;
          auVar30._12_2_ = (short)Var173;
          uVar229 = CONCAT42(auVar30._10_4_,auVar183._0_2_);
          auVar185._6_8_ = 0;
          auVar185._0_6_ = uVar229;
          auVar342 = *(undefined1 (*) [16])((longlong)pauVar237 + lVar233);
          bVar308 = auVar342[7];
          auVar18[0xd] = 0;
          auVar18._0_13_ = auVar342._0_13_;
          auVar18[0xe] = bVar308;
          bVar359 = auVar342[6];
          auVar31[0xc] = bVar359;
          auVar31._0_12_ = auVar342._0_12_;
          auVar31._13_2_ = auVar18._13_2_;
          auVar37[0xb] = 0;
          auVar37._0_11_ = auVar342._0_11_;
          auVar37._12_3_ = auVar31._12_3_;
          bVar358 = auVar342[5];
          uVar250 = auVar37._11_4_;
          auVar48[10] = bVar358;
          auVar48._0_10_ = auVar342._0_10_;
          auVar48._11_4_ = uVar250;
          auVar73[9] = 0;
          auVar73._0_9_ = auVar342._0_9_;
          auVar73._10_5_ = auVar48._10_5_;
          bVar357 = auVar342[4];
          auVar81[8] = bVar357;
          auVar81._0_8_ = auVar342._0_8_;
          auVar81._9_6_ = auVar73._9_6_;
          auVar186._7_8_ = 0;
          auVar186._0_7_ = auVar81._8_7_;
          bVar356 = auVar342[3];
          Var173 = CONCAT81(SUB158(auVar186 << 0x40,7),bVar356);
          auVar213._9_6_ = 0;
          auVar213._0_9_ = Var173;
          bVar355 = auVar342[2];
          auVar187._1_10_ = SUB1510(auVar213 << 0x30,5);
          auVar187[0] = bVar355;
          auVar214._11_4_ = 0;
          auVar214._0_11_ = auVar187;
          bVar354 = auVar342[1];
          auVar87[2] = bVar354;
          auVar87._0_2_ = auVar342._0_2_;
          auVar87._3_12_ = SUB1512(auVar214 << 0x20,3);
          auVar92._2_13_ = auVar87._2_13_;
          auVar92._0_2_ = auVar342._0_2_ & 0xff;
          auVar19._10_2_ = 0;
          auVar19._0_10_ = auVar92._0_10_;
          auVar19._12_2_ = (short)Var173;
          uVar230 = CONCAT42(auVar19._10_4_,auVar187._0_2_);
          auVar188._6_8_ = 0;
          auVar188._0_6_ = uVar230;
          auVar49._4_2_ = auVar87._2_2_;
          auVar49._0_4_ = auVar92._0_4_;
          auVar49._6_8_ = SUB148(auVar188 << 0x40,6);
          auVar303 = *pauVar238;
          bVar321 = auVar303[7];
          auVar20[0xd] = 0;
          auVar20._0_13_ = auVar303._0_13_;
          auVar20[0xe] = bVar321;
          bVar264 = auVar303[6];
          auVar32[0xc] = bVar264;
          auVar32._0_12_ = auVar303._0_12_;
          auVar32._13_2_ = auVar20._13_2_;
          auVar38[0xb] = 0;
          auVar38._0_11_ = auVar303._0_11_;
          auVar38._12_3_ = auVar32._12_3_;
          bVar262 = auVar303[5];
          uVar239 = auVar38._11_4_;
          auVar50[10] = bVar262;
          auVar50._0_10_ = auVar303._0_10_;
          auVar50._11_4_ = uVar239;
          auVar74[9] = 0;
          auVar74._0_9_ = auVar303._0_9_;
          auVar74._10_5_ = auVar50._10_5_;
          bVar260 = auVar303[4];
          auVar82[8] = bVar260;
          auVar82._0_8_ = auVar303._0_8_;
          auVar82._9_6_ = auVar74._9_6_;
          auVar189._7_8_ = 0;
          auVar189._0_7_ = auVar82._8_7_;
          bVar258 = auVar303[3];
          Var173 = CONCAT81(SUB158(auVar189 << 0x40,7),bVar258);
          auVar215._9_6_ = 0;
          auVar215._0_9_ = Var173;
          bVar256 = auVar303[2];
          auVar190._1_10_ = SUB1510(auVar215 << 0x30,5);
          auVar190[0] = bVar256;
          auVar216._11_4_ = 0;
          auVar216._0_11_ = auVar190;
          bVar254 = auVar303[1];
          auVar88[2] = bVar254;
          auVar88._0_2_ = auVar303._0_2_;
          auVar88._3_12_ = SUB1512(auVar216 << 0x20,3);
          auVar93._2_13_ = auVar88._2_13_;
          auVar93._0_2_ = auVar303._0_2_ & 0xff;
          auVar21._10_2_ = 0;
          auVar21._0_10_ = auVar93._0_10_;
          auVar21._12_2_ = (short)Var173;
          uVar231 = CONCAT42(auVar21._10_4_,auVar190._0_2_);
          auVar191._6_8_ = 0;
          auVar191._0_6_ = uVar231;
          auVar51._4_2_ = auVar88._2_2_;
          auVar51._0_4_ = auVar93._0_4_;
          auVar51._6_8_ = SUB148(auVar191 << 0x40,6);
          uVar302 = (auVar92._0_4_ & 0xffff) + (uint)CONCAT11(0,bVar267) * -2 +
                    (auVar93._0_4_ & 0xffff);
          uVar305 = auVar49._4_4_ + (int)CONCAT82(SUB148(auVar185 << 0x40,6),auVar184._0_2_) * -2 +
                    auVar51._4_4_;
          uVar307 = (int)uVar230 + (int)uVar229 * -2 + (int)uVar231;
          uVar310 = (auVar19._10_4_ >> 0x10) + (auVar30._10_4_ >> 0x10) * -2 +
                    (auVar21._10_4_ >> 0x10);
          uVar288 = (uint)auVar81._8_2_ + (uint)auVar83._8_2_ * -2 + (uint)auVar82._8_2_;
          uVar289 = (uint)auVar48._10_2_ + (uint)auVar72._10_2_ * -2 + (uint)auVar50._10_2_;
          uVar290 = (uVar250 >> 8 & 0xffff) + (uVar245 >> 8 & 0xffff) * -2 + (uVar239 >> 8 & 0xffff)
          ;
          uVar292 = (uVar250 >> 0x18) + (uVar245 >> 0x18) * -2 + (uVar239 >> 0x18);
          bVar249 = auVar303[0];
          bVar5 = auVar275[8];
          bVar253 = auVar303[8];
          bVar234 = auVar275[9];
          bVar255 = auVar303[9];
          bVar6 = auVar275[10];
          bVar257 = auVar303[10];
          bVar7 = auVar275[0xb];
          bVar259 = auVar303[0xb];
          bVar8 = auVar275[0xc];
          bVar261 = auVar303[0xc];
          bVar9 = auVar275[0xd];
          bVar263 = auVar303[0xd];
          bVar10 = auVar275[0xe];
          bVar265 = auVar303[0xe];
          bVar266 = auVar303[0xf];
          bVar11 = auVar275[0xf];
          bVar320 = ((bVar321 < bVar306) * bVar306 | (bVar321 >= bVar306) * bVar321) -
                    ((bVar306 < bVar321) * bVar306 | (bVar306 >= bVar321) * bVar321);
          bVar321 = ((bVar253 < bVar5) * bVar5 | (bVar253 >= bVar5) * bVar253) -
                    ((bVar5 < bVar253) * bVar5 | (bVar5 >= bVar253) * bVar253);
          uVar352 = CONCAT11(bVar321,bVar320);
          cVar322 = ((bVar255 < bVar234) * bVar234 | (bVar255 >= bVar234) * bVar255) -
                    ((bVar234 < bVar255) * bVar234 | (bVar234 >= bVar255) * bVar255);
          uVar217 = CONCAT12(cVar322,uVar352);
          bVar323 = ((bVar257 < bVar6) * bVar6 | (bVar257 >= bVar6) * bVar257) -
                    ((bVar6 < bVar257) * bVar6 | (bVar6 >= bVar257) * bVar257);
          uVar250 = CONCAT13(bVar323,uVar217);
          cVar324 = ((bVar259 < bVar7) * bVar7 | (bVar259 >= bVar7) * bVar259) -
                    ((bVar7 < bVar259) * bVar7 | (bVar7 >= bVar259) * bVar259);
          uVar222 = CONCAT14(cVar324,uVar250);
          bVar325 = ((bVar261 < bVar8) * bVar8 | (bVar261 >= bVar8) * bVar261) -
                    ((bVar8 < bVar261) * bVar8 | (bVar8 >= bVar261) * bVar261);
          auVar226[5] = bVar325;
          auVar226._0_5_ = uVar222;
          bVar326 = ((bVar263 < bVar9) * bVar9 | (bVar263 >= bVar9) * bVar263) -
                    ((bVar9 < bVar263) * bVar9 | (bVar9 >= bVar263) * bVar263);
          bVar327 = ((bVar265 < bVar10) * bVar10 | (bVar265 >= bVar10) * bVar265) -
                    ((bVar10 < bVar265) * bVar10 | (bVar10 >= bVar265) * bVar265);
          bVar328 = ((bVar266 < bVar11) * bVar11 | (bVar266 >= bVar11) * bVar266) -
                    ((bVar11 < bVar266) * bVar11 | (bVar11 >= bVar266) * bVar266);
          auVar226._6_8_ = 0;
          auVar22[0xe] = bVar320;
          auVar22._0_14_ = auVar226 << 0x38;
          uVar227 = CONCAT26(auVar22._13_2_,
                             CONCAT15(((bVar264 < bVar274) * bVar274 |
                                      (bVar264 >= bVar274) * bVar264) -
                                      ((bVar274 < bVar264) * bVar274 |
                                      (bVar274 >= bVar264) * bVar264),uVar222));
          auVar223._4_8_ = 0;
          auVar223._0_4_ = uVar250;
          auVar39._12_3_ = (int3)((ulonglong)uVar227 >> 0x28);
          auVar39._0_12_ = auVar223 << 0x38;
          uVar224 = CONCAT44(auVar39._11_4_,
                             CONCAT13(((bVar262 < bVar273) * bVar273 |
                                      (bVar262 >= bVar273) * bVar262) -
                                      ((bVar273 < bVar262) * bVar273 |
                                      (bVar273 >= bVar262) * bVar262),uVar217));
          auVar75._10_5_ = (int5)((ulonglong)uVar224 >> 0x18);
          auVar75._0_10_ = (unkuint10)uVar352 << 0x38;
          uVar4 = CONCAT62(auVar75._9_6_,
                           CONCAT11(((bVar260 < bVar272) * bVar272 | (bVar260 >= bVar272) * bVar260)
                                    - ((bVar272 < bVar260) * bVar272 |
                                      (bVar272 >= bVar260) * bVar260),bVar320));
          auVar192._7_8_ = 0;
          auVar192._0_7_ = (uint7)((ulonglong)uVar4 >> 8);
          Var173 = CONCAT81(SUB158(auVar192 << 0x40,7),
                            ((bVar258 < bVar271) * bVar271 | (bVar258 >= bVar271) * bVar258) -
                            ((bVar271 < bVar258) * bVar271 | (bVar271 >= bVar258) * bVar258));
          auVar218._9_6_ = 0;
          auVar218._0_9_ = Var173;
          auVar193._1_10_ = SUB1510(auVar218 << 0x30,5);
          auVar193[0] = ((bVar256 < bVar270) * bVar270 | (bVar256 >= bVar270) * bVar256) -
                        ((bVar270 < bVar256) * bVar270 | (bVar270 >= bVar256) * bVar256);
          auVar219._11_4_ = 0;
          auVar219._0_11_ = auVar193;
          auVar194._1_12_ = SUB1512(auVar219 << 0x20,3);
          auVar194[0] = ((bVar254 < bVar269) * bVar269 | (bVar254 >= bVar269) * bVar254) -
                        ((bVar269 < bVar254) * bVar269 | (bVar269 >= bVar254) * bVar254);
          auVar94[1] = 0;
          auVar94[0] = ((bVar249 < bVar267) * bVar267 | (bVar249 >= bVar267) * bVar249) -
                       ((bVar267 < bVar249) * bVar267 | (bVar267 >= bVar249) * bVar249);
          auVar94._2_13_ = auVar194;
          auVar23._10_2_ = 0;
          auVar23._0_10_ = auVar94._0_10_;
          auVar23._12_2_ = (short)Var173;
          uVar229 = CONCAT42(auVar23._10_4_,auVar193._0_2_);
          auVar195._6_8_ = 0;
          auVar195._0_6_ = uVar229;
          auVar52._4_2_ = auVar194._0_2_;
          auVar52._0_4_ = auVar94._0_4_;
          auVar52._6_8_ = SUB148(auVar195 << 0x40,6);
          auVar268._0_4_ = auVar94._0_4_ & 0xffff;
          auVar268._4_10_ = auVar52._4_10_;
          auVar268._14_2_ = 0;
          auVar330._0_4_ = CONCAT22(0,(ushort)((ulonglong)uVar4 >> 8));
          uVar336 = (ushort)((ulonglong)uVar224 >> 0x18);
          auVar330._4_2_ = uVar336;
          auVar330._6_2_ = 0;
          uVar337 = (ushort)((ulonglong)uVar227 >> 0x28);
          auVar330._8_2_ = uVar337;
          auVar330._10_2_ = 0;
          auVar330[0xc] = bVar320;
          auVar330._13_3_ = 0;
          uVar250 = CONCAT13(0,CONCAT12(cVar322,(ushort)bVar321));
          auVar53[0xc] = cVar324;
          auVar53._0_12_ = ZEXT112(bVar325) << 0x40;
          auVar54._10_3_ = auVar53._10_3_;
          auVar54._0_10_ = (unkuint10)bVar323 << 0x40;
          auVar196._5_8_ = 0;
          auVar196._0_5_ = auVar54._8_5_;
          auVar55[4] = cVar322;
          auVar55._0_4_ = uVar250;
          auVar55[5] = 0;
          auVar55._6_7_ = SUB137(auVar196 << 0x40,6);
          auVar343._0_4_ = uVar250 & 0xffff;
          auVar343._4_9_ = auVar55._4_9_;
          auVar343._13_3_ = 0;
          auVar319._0_4_ = CONCAT31(0,bVar325);
          auVar319[4] = bVar326;
          auVar319._5_3_ = 0;
          auVar319[8] = bVar327;
          auVar319._9_3_ = 0;
          auVar319[0xc] = bVar328;
          auVar319._13_3_ = 0;
          bVar249 = auVar342[0];
          bVar254 = auVar342[8];
          bVar256 = auVar342[9];
          bVar258 = auVar342[10];
          bVar260 = auVar342[0xb];
          bVar262 = auVar342[0xc];
          bVar264 = auVar342[0xd];
          bVar321 = auVar342[0xe];
          bVar323 = auVar342[0xf];
          bVar306 = ((bVar308 < bVar306) * bVar306 | (bVar308 >= bVar306) * bVar308) -
                    ((bVar306 < bVar308) * bVar306 | (bVar306 >= bVar308) * bVar308);
          bVar325 = ((bVar254 < bVar5) * bVar5 | (bVar254 >= bVar5) * bVar254) -
                    ((bVar5 < bVar254) * bVar5 | (bVar5 >= bVar254) * bVar254);
          uVar352 = CONCAT11(bVar325,bVar306);
          cVar322 = ((bVar256 < bVar234) * bVar234 | (bVar256 >= bVar234) * bVar256) -
                    ((bVar234 < bVar256) * bVar234 | (bVar234 >= bVar256) * bVar256);
          uVar217 = CONCAT12(cVar322,uVar352);
          bVar308 = ((bVar258 < bVar6) * bVar6 | (bVar258 >= bVar6) * bVar258) -
                    ((bVar6 < bVar258) * bVar6 | (bVar6 >= bVar258) * bVar258);
          uVar250 = CONCAT13(bVar308,uVar217);
          cVar324 = ((bVar260 < bVar7) * bVar7 | (bVar260 >= bVar7) * bVar260) -
                    ((bVar7 < bVar260) * bVar7 | (bVar7 >= bVar260) * bVar260);
          uVar222 = CONCAT14(cVar324,uVar250);
          bVar309 = ((bVar262 < bVar8) * bVar8 | (bVar262 >= bVar8) * bVar262) -
                    ((bVar8 < bVar262) * bVar8 | (bVar8 >= bVar262) * bVar262);
          auVar228[5] = bVar309;
          auVar228._0_5_ = uVar222;
          bVar311 = ((bVar264 < bVar9) * bVar9 | (bVar264 >= bVar9) * bVar264) -
                    ((bVar9 < bVar264) * bVar9 | (bVar9 >= bVar264) * bVar264);
          bVar312 = ((bVar321 < bVar10) * bVar10 | (bVar321 >= bVar10) * bVar321) -
                    ((bVar10 < bVar321) * bVar10 | (bVar10 >= bVar321) * bVar321);
          bVar313 = ((bVar323 < bVar11) * bVar11 | (bVar323 >= bVar11) * bVar323) -
                    ((bVar11 < bVar323) * bVar11 | (bVar11 >= bVar323) * bVar323);
          auVar228._6_8_ = 0;
          auVar24[0xe] = bVar306;
          auVar24._0_14_ = auVar228 << 0x38;
          uVar227 = CONCAT26(auVar24._13_2_,
                             CONCAT15(((bVar359 < bVar274) * bVar274 |
                                      (bVar359 >= bVar274) * bVar359) -
                                      ((bVar274 < bVar359) * bVar274 |
                                      (bVar274 >= bVar359) * bVar359),uVar222));
          auVar225._4_8_ = 0;
          auVar225._0_4_ = uVar250;
          auVar40._12_3_ = (int3)((ulonglong)uVar227 >> 0x28);
          auVar40._0_12_ = auVar225 << 0x38;
          uVar224 = CONCAT44(auVar40._11_4_,
                             CONCAT13(((bVar358 < bVar273) * bVar273 |
                                      (bVar358 >= bVar273) * bVar358) -
                                      ((bVar273 < bVar358) * bVar273 |
                                      (bVar273 >= bVar358) * bVar358),uVar217));
          auVar76._10_5_ = (int5)((ulonglong)uVar224 >> 0x18);
          auVar76._0_10_ = (unkuint10)uVar352 << 0x38;
          uVar4 = CONCAT62(auVar76._9_6_,
                           CONCAT11(((bVar357 < bVar272) * bVar272 | (bVar357 >= bVar272) * bVar357)
                                    - ((bVar272 < bVar357) * bVar272 |
                                      (bVar272 >= bVar357) * bVar357),bVar306));
          auVar197._7_8_ = 0;
          auVar197._0_7_ = (uint7)((ulonglong)uVar4 >> 8);
          Var173 = CONCAT81(SUB158(auVar197 << 0x40,7),
                            ((bVar356 < bVar271) * bVar271 | (bVar356 >= bVar271) * bVar356) -
                            ((bVar271 < bVar356) * bVar271 | (bVar271 >= bVar356) * bVar356));
          auVar220._9_6_ = 0;
          auVar220._0_9_ = Var173;
          auVar198._1_10_ = SUB1510(auVar220 << 0x30,5);
          auVar198[0] = ((bVar355 < bVar270) * bVar270 | (bVar355 >= bVar270) * bVar355) -
                        ((bVar270 < bVar355) * bVar270 | (bVar270 >= bVar355) * bVar355);
          auVar221._11_4_ = 0;
          auVar221._0_11_ = auVar198;
          auVar199._1_12_ = SUB1512(auVar221 << 0x20,3);
          auVar199[0] = ((bVar354 < bVar269) * bVar269 | (bVar354 >= bVar269) * bVar354) -
                        ((bVar269 < bVar354) * bVar269 | (bVar269 >= bVar354) * bVar354);
          auVar95[1] = 0;
          auVar95[0] = ((bVar249 < bVar267) * bVar267 | (bVar249 >= bVar267) * bVar249) -
                       ((bVar267 < bVar249) * bVar267 | (bVar267 >= bVar249) * bVar249);
          auVar95._2_13_ = auVar199;
          auVar25._10_2_ = 0;
          auVar25._0_10_ = auVar95._0_10_;
          auVar25._12_2_ = (short)Var173;
          uVar230 = CONCAT42(auVar25._10_4_,auVar198._0_2_);
          auVar200._6_8_ = 0;
          auVar200._0_6_ = uVar230;
          auVar56._4_2_ = auVar199._0_2_;
          auVar56._0_4_ = auVar95._0_4_;
          auVar56._6_8_ = SUB148(auVar200 << 0x40,6);
          auVar361._0_4_ = auVar95._0_4_ & 0xffff;
          auVar361._4_10_ = auVar56._4_10_;
          auVar361._14_2_ = 0;
          auVar351._0_4_ = CONCAT22(0,(ushort)((ulonglong)uVar4 >> 8));
          uVar352 = (ushort)((ulonglong)uVar224 >> 0x18);
          auVar351._4_2_ = uVar352;
          auVar351._6_2_ = 0;
          uVar353 = (ushort)((ulonglong)uVar227 >> 0x28);
          auVar351._8_2_ = uVar353;
          auVar351._10_2_ = 0;
          auVar351[0xc] = bVar306;
          auVar351._13_3_ = 0;
          uVar250 = CONCAT13(0,CONCAT12(cVar322,(ushort)bVar325));
          auVar57[0xc] = cVar324;
          auVar57._0_12_ = ZEXT112(bVar309) << 0x40;
          auVar58._10_3_ = auVar57._10_3_;
          auVar58._0_10_ = (unkuint10)bVar308 << 0x40;
          auVar201._5_8_ = 0;
          auVar201._0_5_ = auVar58._8_5_;
          auVar59[4] = cVar322;
          auVar59._0_4_ = uVar250;
          auVar59[5] = 0;
          auVar59._6_7_ = SUB137(auVar201 << 0x40,6);
          auVar252._0_4_ = uVar250 & 0xffff;
          auVar252._4_9_ = auVar59._4_9_;
          auVar252._13_3_ = 0;
          auVar304._0_4_ = CONCAT31(0,bVar309);
          auVar304[4] = bVar311;
          auVar304._5_3_ = 0;
          auVar304[8] = bVar312;
          auVar304._9_3_ = 0;
          auVar304[0xc] = bVar313;
          auVar304._13_3_ = 0;
          auVar291._0_4_ = -(uint)(auVar304._0_4_ < auVar319._0_4_);
          auVar291._4_4_ = -(uint)(bVar311 < bVar326);
          auVar291._8_4_ = -(uint)(bVar312 < bVar327);
          auVar291._12_4_ = -(uint)(bVar313 < bVar328);
          auVar363._0_4_ = -(uint)(auVar252._0_4_ < auVar343._0_4_);
          auVar363._4_4_ = -(uint)(auVar59._4_4_ < auVar55._4_4_);
          auVar363._8_4_ = -(uint)(auVar58._8_4_ < auVar54._8_4_);
          auVar363._12_4_ =
               -(uint)((uint3)(auVar57._10_3_ >> 0x10) < (uint3)(auVar53._10_3_ >> 0x10));
          auVar298 = packssdw(auVar363,auVar291);
          auVar331._0_4_ = -(uint)(auVar351._0_4_ < auVar330._0_4_);
          auVar331._4_4_ = -(uint)(uVar352 < uVar336);
          auVar331._8_4_ = -(uint)(uVar353 < uVar337);
          auVar331._12_4_ = -(uint)(bVar306 < bVar320);
          uStack_154 = auVar52._4_4_;
          iStack_150 = (int)uVar229;
          auVar360._0_4_ = -(uint)(auVar361._0_4_ < auVar268._0_4_);
          auVar360._4_4_ = -(uint)(auVar56._4_4_ < uStack_154);
          auVar360._8_4_ = -(uint)((int)uVar230 < iStack_150);
          auVar360._12_4_ = -(uint)(auVar25._10_4_ >> 0x10 < auVar23._10_4_ >> 0x10);
          auVar276 = packssdw(auVar360,auVar331);
          auVar276 = packsswb(auVar276,auVar298);
          uVar239 = CONCAT13(0,CONCAT12(bVar234,(ushort)bVar5));
          auVar60[0xc] = bVar7;
          auVar60._0_12_ = ZEXT112(bVar8) << 0x40;
          auVar61._10_3_ = auVar60._10_3_;
          auVar61._0_10_ = (unkuint10)bVar6 << 0x40;
          auVar202._5_8_ = 0;
          auVar202._0_5_ = auVar61._8_5_;
          auVar62[4] = bVar234;
          auVar62._0_4_ = uVar239;
          auVar62[5] = 0;
          auVar62._6_7_ = SUB137(auVar202 << 0x40,6);
          uVar245 = CONCAT13(0,CONCAT12(bVar256,(ushort)bVar254));
          auVar63[0xc] = bVar260;
          auVar63._0_12_ = ZEXT112(bVar262) << 0x40;
          auVar64._10_3_ = auVar63._10_3_;
          auVar64._0_10_ = (unkuint10)bVar258 << 0x40;
          auVar203._5_8_ = 0;
          auVar203._0_5_ = auVar64._8_5_;
          auVar65[4] = bVar256;
          auVar65._0_4_ = uVar245;
          auVar65[5] = 0;
          auVar65._6_7_ = SUB137(auVar203 << 0x40,6);
          uVar250 = CONCAT13(0,CONCAT12(bVar255,(ushort)bVar253));
          auVar66[0xc] = bVar259;
          auVar66._0_12_ = ZEXT112(bVar261) << 0x40;
          auVar67._10_3_ = auVar66._10_3_;
          auVar67._0_10_ = (unkuint10)bVar257 << 0x40;
          auVar204._5_8_ = 0;
          auVar204._0_5_ = auVar67._8_5_;
          auVar68[4] = bVar255;
          auVar68._0_4_ = uVar250;
          auVar68[5] = 0;
          auVar68._6_7_ = SUB137(auVar204 << 0x40,6);
          uVar297 = (uVar245 & 0xffff) + (uVar239 & 0xffff) * -2 + (uVar250 & 0xffff);
          uVar299 = auVar65._4_4_ + auVar62._4_4_ * -2 + auVar68._4_4_;
          uVar300 = auVar64._8_4_ + auVar61._8_4_ * -2 + auVar67._8_4_;
          uVar301 = (uint)(uint3)(auVar63._10_3_ >> 0x10) +
                    (uint)(uint3)(auVar60._10_3_ >> 0x10) * -2 +
                    (uint)(uint3)(auVar66._10_3_ >> 0x10);
          uVar293 = (uint)bVar262 + (uint)bVar8 * -2 + (uint)bVar261;
          uVar294 = (uint)bVar264 + (uint)bVar9 * -2 + (uint)bVar263;
          uVar295 = (uint)bVar321 + (uint)bVar10 * -2 + (uint)bVar265;
          uVar296 = (uint)bVar323 + (uint)bVar11 * -2 + (uint)bVar266;
          uVar250 = (int)uVar302 >> 0x1f;
          uVar246 = (int)uVar305 >> 0x1f;
          uVar279 = (int)uVar307 >> 0x1f;
          uVar284 = (int)uVar310 >> 0x1f;
          uVar239 = (int)uVar288 >> 0x1f;
          uVar278 = (int)uVar289 >> 0x1f;
          uVar281 = (int)uVar290 >> 0x1f;
          uVar285 = (int)uVar292 >> 0x1f;
          uVar245 = (int)uVar297 >> 0x1f;
          uVar280 = (int)uVar299 >> 0x1f;
          uVar282 = (int)uVar300 >> 0x1f;
          uVar286 = (int)uVar301 >> 0x1f;
          uVar251 = (int)uVar293 >> 0x1f;
          uVar277 = (int)uVar294 >> 0x1f;
          uVar283 = (int)uVar295 >> 0x1f;
          uVar287 = (int)uVar296 >> 0x1f;
          auVar361 = ~auVar360 & auVar268 | auVar361 & auVar360;
          auVar362._0_4_ = -(uint)((int)((uVar302 ^ uVar250) - uVar250) < auVar361._0_4_);
          auVar362._4_4_ = -(uint)((int)((uVar305 ^ uVar246) - uVar246) < auVar361._4_4_);
          auVar362._8_4_ = -(uint)((int)((uVar307 ^ uVar279) - uVar279) < auVar361._8_4_);
          auVar362._12_4_ = -(uint)((int)((uVar310 ^ uVar284) - uVar284) < auVar361._12_4_);
          auVar361 = ~auVar331 & auVar330 | auVar351 & auVar331;
          auVar332._0_4_ = -(uint)((int)((uVar288 ^ uVar239) - uVar239) < auVar361._0_4_);
          auVar332._4_4_ = -(uint)((int)((uVar289 ^ uVar278) - uVar278) < auVar361._4_4_);
          auVar332._8_4_ = -(uint)((int)((uVar290 ^ uVar281) - uVar281) < auVar361._8_4_);
          auVar332._12_4_ = -(uint)((int)((uVar292 ^ uVar285) - uVar285) < auVar361._12_4_);
          auVar361 = packssdw(auVar362,auVar332);
          auVar343 = ~auVar363 & auVar343 | auVar252 & auVar363;
          auVar364._0_4_ = -(uint)((int)((uVar297 ^ uVar245) - uVar245) < auVar343._0_4_);
          auVar364._4_4_ = -(uint)((int)((uVar299 ^ uVar280) - uVar280) < auVar343._4_4_);
          auVar364._8_4_ = -(uint)((int)((uVar300 ^ uVar282) - uVar282) < auVar343._8_4_);
          auVar364._12_4_ = -(uint)((int)((uVar301 ^ uVar286) - uVar286) < auVar343._12_4_);
          auVar343 = ~auVar291 & auVar319 | auVar304 & auVar291;
          auVar298._0_4_ = -(uint)((int)((uVar293 ^ uVar251) - uVar251) < auVar343._0_4_);
          auVar298._4_4_ = -(uint)((int)((uVar294 ^ uVar277) - uVar277) < auVar343._4_4_);
          auVar298._8_4_ = -(uint)((int)((uVar295 ^ uVar283) - uVar283) < auVar343._8_4_);
          auVar298._12_4_ = -(uint)((int)((uVar296 ^ uVar287) - uVar287) < auVar343._12_4_);
          auVar343 = packssdw(auVar364,auVar298);
          auVar343 = packsswb(auVar361,auVar343);
          auVar275 = ~auVar343 & (~auVar276 & auVar342 | auVar303 & auVar276) | auVar275 & auVar343;
          cVar322 = (*pauVar237)[1];
          cVar324 = (*pauVar237)[2];
          cVar159 = (*pauVar237)[3];
          cVar160 = (*pauVar237)[4];
          cVar161 = (*pauVar237)[5];
          cVar162 = (*pauVar237)[6];
          cVar163 = (*pauVar237)[7];
          cVar164 = (*pauVar237)[8];
          cVar165 = (*pauVar237)[9];
          cVar166 = (*pauVar237)[10];
          cVar167 = (*pauVar237)[0xb];
          cVar168 = (*pauVar237)[0xc];
          cVar169 = (*pauVar237)[0xd];
          cVar170 = (*pauVar237)[0xe];
          cVar171 = (*pauVar237)[0xf];
          (*pauVar237)[0] = (*pauVar237)[0] + auVar275[0];
          (*pauVar237)[1] = cVar322 + auVar275[1];
          (*pauVar237)[2] = cVar324 + auVar275[2];
          (*pauVar237)[3] = cVar159 + auVar275[3];
          (*pauVar237)[4] = cVar160 + auVar275[4];
          (*pauVar237)[5] = cVar161 + auVar275[5];
          (*pauVar237)[6] = cVar162 + auVar275[6];
          (*pauVar237)[7] = cVar163 + auVar275[7];
          (*pauVar237)[8] = cVar164 + auVar275[8];
          (*pauVar237)[9] = cVar165 + auVar275[9];
          (*pauVar237)[10] = cVar166 + auVar275[10];
          (*pauVar237)[0xb] = cVar167 + auVar275[0xb];
          (*pauVar237)[0xc] = cVar168 + auVar275[0xc];
          (*pauVar237)[0xd] = cVar169 + auVar275[0xd];
          (*pauVar237)[0xe] = cVar170 + auVar275[0xe];
          (*pauVar237)[0xf] = cVar171 + auVar275[0xf];
          pauVar237 = pauVar237 + 1;
          pauVar238 = pauVar238 + 1;
          uVar240 = uVar240 - 0x10;
        } while (uVar240 != 0);
        if (uVar236 == uVar243) {
          return;
        }
        if ((uVar236 & 8) == 0) {
          param_2 = *(undefined1 (*) [16])param_2 + uVar243;
          param_3 = *(undefined1 (*) [16])param_3 + uVar243;
          goto LAB_140dd8b80;
        }
      }
      uVar251 = _UNK_15065157c;
      uVar245 = _UNK_150651578;
      uVar239 = _UNK_150651574;
      uVar250 = __xmm_80000000800000008000000080000000;
      uVar240 = uVar236 & 0xfffffffffffffff8;
      puVar244 = (undefined8 *)(*(undefined1 (*) [16])param_2 + uVar243);
      puVar248 = (ulonglong *)(*(undefined1 (*) [16])param_3 + uVar243);
      lVar242 = uVar243 - uVar240;
      do {
        uVar243 = *(ulonglong *)((longlong)puVar248 + lVar233);
        auVar275._8_8_ = 0;
        auVar275._0_8_ = uVar243;
        auVar12._8_6_ = 0;
        auVar12._0_8_ = uVar243;
        auVar12[0xe] = (char)(uVar243 >> 0x38);
        auVar26._8_4_ = 0;
        auVar26._0_8_ = uVar243;
        auVar26[0xc] = (char)(uVar243 >> 0x30);
        auVar26._13_2_ = auVar12._13_2_;
        auVar33._8_4_ = 0;
        auVar33._0_8_ = uVar243;
        auVar33._12_3_ = auVar26._12_3_;
        uVar278 = auVar33._11_4_;
        auVar41._8_2_ = 0;
        auVar41._0_8_ = uVar243;
        auVar41[10] = (char)(uVar243 >> 0x28);
        auVar41._11_4_ = uVar278;
        auVar69._8_2_ = 0;
        auVar69._0_8_ = uVar243;
        auVar69._10_5_ = auVar41._10_5_;
        auVar77[8] = (char)(uVar243 >> 0x20);
        auVar77._0_8_ = uVar243;
        auVar77._9_6_ = auVar69._9_6_;
        auVar172._7_8_ = 0;
        auVar172._0_7_ = auVar77._8_7_;
        Var173 = CONCAT81(SUB158(auVar172 << 0x40,7),(char)(uVar243 >> 0x18));
        auVar205._9_6_ = 0;
        auVar205._0_9_ = Var173;
        auVar174._1_10_ = SUB1510(auVar205 << 0x30,5);
        auVar174[0] = (char)(uVar243 >> 0x10);
        auVar206._11_4_ = 0;
        auVar206._0_11_ = auVar174;
        auVar84[2] = (char)(uVar243 >> 8);
        auVar84._0_2_ = (ushort)uVar243;
        auVar84._3_12_ = SUB1512(auVar206 << 0x20,3);
        auVar89._2_13_ = auVar84._2_13_;
        auVar89._0_2_ = (ushort)uVar243 & 0xff;
        auVar13._10_2_ = 0;
        auVar13._0_10_ = auVar89._0_10_;
        auVar13._12_2_ = (short)Var173;
        uVar229 = CONCAT42(auVar13._10_4_,auVar174._0_2_);
        auVar175._6_8_ = 0;
        auVar175._0_6_ = uVar229;
        auVar42._4_2_ = auVar84._2_2_;
        auVar42._0_4_ = auVar89._0_4_;
        auVar42._6_8_ = SUB148(auVar175 << 0x40,6);
        uVar289 = auVar89._0_4_ & 0xffff;
        uVar243 = *(ulonglong *)((longlong)puVar244 + lVar233);
        auVar303._8_8_ = 0;
        auVar303._0_8_ = uVar243;
        auVar14._8_6_ = 0;
        auVar14._0_8_ = uVar243;
        auVar14[0xe] = (char)(uVar243 >> 0x38);
        auVar27._8_4_ = 0;
        auVar27._0_8_ = uVar243;
        auVar27[0xc] = (char)(uVar243 >> 0x30);
        auVar27._13_2_ = auVar14._13_2_;
        auVar34._8_4_ = 0;
        auVar34._0_8_ = uVar243;
        auVar34._12_3_ = auVar27._12_3_;
        uVar280 = auVar34._11_4_;
        auVar43._8_2_ = 0;
        auVar43._0_8_ = uVar243;
        auVar43[10] = (char)(uVar243 >> 0x28);
        auVar43._11_4_ = uVar280;
        auVar70._8_2_ = 0;
        auVar70._0_8_ = uVar243;
        auVar70._10_5_ = auVar43._10_5_;
        auVar78[8] = (char)(uVar243 >> 0x20);
        auVar78._0_8_ = uVar243;
        auVar78._9_6_ = auVar70._9_6_;
        auVar176._7_8_ = 0;
        auVar176._0_7_ = auVar78._8_7_;
        Var173 = CONCAT81(SUB158(auVar176 << 0x40,7),(char)(uVar243 >> 0x18));
        auVar207._9_6_ = 0;
        auVar207._0_9_ = Var173;
        auVar177._1_10_ = SUB1510(auVar207 << 0x30,5);
        auVar177[0] = (char)(uVar243 >> 0x10);
        auVar208._11_4_ = 0;
        auVar208._0_11_ = auVar177;
        auVar85[2] = (char)(uVar243 >> 8);
        auVar85._0_2_ = (ushort)uVar243;
        auVar85._3_12_ = SUB1512(auVar208 << 0x20,3);
        auVar90._2_13_ = auVar85._2_13_;
        auVar90._0_2_ = (ushort)uVar243 & 0xff;
        auVar15._10_2_ = 0;
        auVar15._0_10_ = auVar90._0_10_;
        auVar15._12_2_ = (short)Var173;
        uVar230 = CONCAT42(auVar15._10_4_,auVar177._0_2_);
        auVar178._6_8_ = 0;
        auVar178._0_6_ = uVar230;
        auVar44._4_2_ = auVar85._2_2_;
        auVar44._0_4_ = auVar90._0_4_;
        auVar44._6_8_ = SUB148(auVar178 << 0x40,6);
        uVar243 = *puVar248;
        auVar318._8_8_ = 0;
        auVar318._0_8_ = uVar243;
        auVar16._8_6_ = 0;
        auVar16._0_8_ = uVar243;
        auVar16[0xe] = (char)(uVar243 >> 0x38);
        auVar28._8_4_ = 0;
        auVar28._0_8_ = uVar243;
        auVar28[0xc] = (char)(uVar243 >> 0x30);
        auVar28._13_2_ = auVar16._13_2_;
        auVar35._8_4_ = 0;
        auVar35._0_8_ = uVar243;
        auVar35._12_3_ = auVar28._12_3_;
        uVar246 = auVar35._11_4_;
        auVar45._8_2_ = 0;
        auVar45._0_8_ = uVar243;
        auVar45[10] = (char)(uVar243 >> 0x28);
        auVar45._11_4_ = uVar246;
        auVar71._8_2_ = 0;
        auVar71._0_8_ = uVar243;
        auVar71._10_5_ = auVar45._10_5_;
        auVar79[8] = (char)(uVar243 >> 0x20);
        auVar79._0_8_ = uVar243;
        auVar79._9_6_ = auVar71._9_6_;
        auVar179._7_8_ = 0;
        auVar179._0_7_ = auVar79._8_7_;
        Var173 = CONCAT81(SUB158(auVar179 << 0x40,7),(char)(uVar243 >> 0x18));
        auVar209._9_6_ = 0;
        auVar209._0_9_ = Var173;
        auVar180._1_10_ = SUB1510(auVar209 << 0x30,5);
        auVar180[0] = (char)(uVar243 >> 0x10);
        auVar210._11_4_ = 0;
        auVar210._0_11_ = auVar180;
        auVar86[2] = (char)(uVar243 >> 8);
        auVar86._0_2_ = (ushort)uVar243;
        auVar86._3_12_ = SUB1512(auVar210 << 0x20,3);
        auVar91._2_13_ = auVar86._2_13_;
        auVar91._0_2_ = (ushort)uVar243 & 0xff;
        auVar17._10_2_ = 0;
        auVar17._0_10_ = auVar91._0_10_;
        auVar17._12_2_ = (short)Var173;
        uVar231 = CONCAT42(auVar17._10_4_,auVar180._0_2_);
        auVar181._6_8_ = 0;
        auVar181._0_6_ = uVar231;
        auVar46._4_2_ = auVar86._2_2_;
        auVar46._0_4_ = auVar91._0_4_;
        auVar46._6_8_ = SUB148(auVar181 << 0x40,6);
        uVar285 = (uint)auVar79._8_2_ - (uint)auVar77._8_2_;
        uVar286 = (uint)auVar45._10_2_ - (uint)auVar41._10_2_;
        uVar281 = uVar278 >> 8 & 0xffff;
        uVar287 = (uVar246 >> 8 & 0xffff) - uVar281;
        uVar288 = (uVar246 >> 0x18) - (uVar278 >> 0x18);
        uVar297 = (auVar91._0_4_ & 0xffff) - uVar289;
        uVar299 = auVar46._4_4_ - auVar42._4_4_;
        iVar334 = (int)uVar229;
        uVar300 = (int)uVar231 - iVar334;
        uVar246 = auVar13._10_4_ >> 0x10;
        uVar301 = (auVar17._10_4_ >> 0x10) - uVar246;
        uVar277 = (uint)auVar78._8_2_ - (uint)auVar77._8_2_;
        uVar279 = (uint)auVar43._10_2_ - (uint)auVar41._10_2_;
        uVar281 = (uVar280 >> 8 & 0xffff) - uVar281;
        uVar283 = (uVar280 >> 0x18) - (uVar278 >> 0x18);
        uVar289 = (auVar90._0_4_ & 0xffff) - uVar289;
        uVar292 = auVar44._4_4_ - auVar42._4_4_;
        uVar294 = (int)uVar230 - iVar334;
        uVar246 = (auVar15._10_4_ >> 0x10) - uVar246;
        uVar329 = (uVar297 ^ (int)uVar297 >> 0x1f) - ((int)uVar297 >> 0x1f);
        uVar333 = (uVar299 ^ (int)uVar299 >> 0x1f) - ((int)uVar299 >> 0x1f);
        uVar335 = (uVar300 ^ (int)uVar300 >> 0x1f) - ((int)uVar300 >> 0x1f);
        uVar338 = (uVar301 ^ (int)uVar301 >> 0x1f) - ((int)uVar301 >> 0x1f);
        uVar314 = (uVar285 ^ (int)uVar285 >> 0x1f) - ((int)uVar285 >> 0x1f);
        uVar315 = (uVar286 ^ (int)uVar286 >> 0x1f) - ((int)uVar286 >> 0x1f);
        uVar316 = (uVar287 ^ (int)uVar287 >> 0x1f) - ((int)uVar287 >> 0x1f);
        uVar317 = (uVar288 ^ (int)uVar288 >> 0x1f) - ((int)uVar288 >> 0x1f);
        uVar290 = (uVar289 ^ (int)uVar289 >> 0x1f) - ((int)uVar289 >> 0x1f);
        uVar293 = (uVar292 ^ (int)uVar292 >> 0x1f) - ((int)uVar292 >> 0x1f);
        uVar295 = (uVar294 ^ (int)uVar294 >> 0x1f) - ((int)uVar294 >> 0x1f);
        uVar296 = (uVar246 ^ (int)uVar246 >> 0x1f) - ((int)uVar246 >> 0x1f);
        uVar278 = (uVar277 ^ (int)uVar277 >> 0x1f) - ((int)uVar277 >> 0x1f);
        uVar280 = (uVar279 ^ (int)uVar279 >> 0x1f) - ((int)uVar279 >> 0x1f);
        uVar282 = (uVar281 ^ (int)uVar281 >> 0x1f) - ((int)uVar281 >> 0x1f);
        uVar284 = (uVar283 ^ (int)uVar283 >> 0x1f) - ((int)uVar283 >> 0x1f);
        uVar339 = (int)(uVar297 + uVar289) >> 0x1f;
        uVar344 = (int)(uVar299 + uVar292) >> 0x1f;
        uVar346 = (int)(uVar300 + uVar294) >> 0x1f;
        uVar348 = (int)(uVar301 + uVar246) >> 0x1f;
        uVar340 = (int)(uVar285 + uVar277) >> 0x1f;
        uVar345 = (int)(uVar286 + uVar279) >> 0x1f;
        uVar347 = (int)(uVar287 + uVar281) >> 0x1f;
        uVar349 = (int)(uVar288 + uVar283) >> 0x1f;
        auVar350._0_4_ = -(uint)((int)uVar278 < (int)uVar314);
        auVar350._4_4_ = -(uint)((int)uVar280 < (int)uVar315);
        auVar350._8_4_ = -(uint)((int)uVar282 < (int)uVar316);
        auVar350._12_4_ = -(uint)((int)uVar284 < (int)uVar317);
        auVar341._0_4_ = -(uint)((int)uVar290 < (int)uVar329);
        auVar341._4_4_ = -(uint)((int)uVar293 < (int)uVar333);
        auVar341._8_4_ = -(uint)((int)uVar295 < (int)uVar335);
        auVar341._12_4_ = -(uint)((int)uVar296 < (int)uVar338);
        auVar342 = packssdw(auVar341,auVar350);
        auVar343 = packsswb(auVar342,auVar342);
        uVar302 = -(uint)((int)(uVar290 ^ uVar250) < (int)(uVar329 ^ uVar250));
        uVar305 = -(uint)((int)(uVar293 ^ uVar239) < (int)(uVar333 ^ uVar239));
        uVar307 = -(uint)((int)(uVar295 ^ uVar245) < (int)(uVar335 ^ uVar245));
        uVar310 = -(uint)((int)(uVar296 ^ uVar251) < (int)(uVar338 ^ uVar251));
        auVar276._0_4_ =
             -(uint)((int)((uVar297 + uVar289 ^ uVar339) - uVar339) <
                    (int)(~uVar302 & uVar329 | uVar290 & uVar302));
        auVar276._4_4_ =
             -(uint)((int)((uVar299 + uVar292 ^ uVar344) - uVar344) <
                    (int)(~uVar305 & uVar333 | uVar293 & uVar305));
        auVar276._8_4_ =
             -(uint)((int)((uVar300 + uVar294 ^ uVar346) - uVar346) <
                    (int)(~uVar307 & uVar335 | uVar295 & uVar307));
        auVar276._12_4_ =
             -(uint)((int)((uVar301 + uVar246 ^ uVar348) - uVar348) <
                    (int)(~uVar310 & uVar338 | uVar296 & uVar310));
        uVar246 = -(uint)((int)(uVar278 ^ uVar250) < (int)(uVar314 ^ uVar250));
        uVar289 = -(uint)((int)(uVar280 ^ uVar239) < (int)(uVar315 ^ uVar239));
        uVar290 = -(uint)((int)(uVar282 ^ uVar245) < (int)(uVar316 ^ uVar245));
        uVar292 = -(uint)((int)(uVar284 ^ uVar251) < (int)(uVar317 ^ uVar251));
        auVar342._0_4_ =
             -(uint)((int)((uVar285 + uVar277 ^ uVar340) - uVar340) <
                    (int)(~uVar246 & uVar314 | uVar278 & uVar246));
        auVar342._4_4_ =
             -(uint)((int)((uVar286 + uVar279 ^ uVar345) - uVar345) <
                    (int)(~uVar289 & uVar315 | uVar280 & uVar289));
        auVar342._8_4_ =
             -(uint)((int)((uVar287 + uVar281 ^ uVar347) - uVar347) <
                    (int)(~uVar290 & uVar316 | uVar282 & uVar290));
        auVar342._12_4_ =
             -(uint)((int)((uVar288 + uVar283 ^ uVar349) - uVar349) <
                    (int)(~uVar292 & uVar317 | uVar284 & uVar292));
        auVar342 = packssdw(auVar276,auVar342);
        auVar342 = packsswb(auVar342,auVar342);
        auVar275 = ~auVar342 & (~auVar343 & auVar303 | auVar318 & auVar343) | auVar275 & auVar342;
        uVar4 = *puVar244;
        *puVar244 = CONCAT17((char)((ulonglong)uVar4 >> 0x38) + auVar275[7],
                             CONCAT16((char)((ulonglong)uVar4 >> 0x30) + auVar275[6],
                                      CONCAT15((char)((ulonglong)uVar4 >> 0x28) + auVar275[5],
                                               CONCAT14((char)((ulonglong)uVar4 >> 0x20) +
                                                        auVar275[4],
                                                        CONCAT13((char)((ulonglong)uVar4 >> 0x18) +
                                                                 auVar275[3],
                                                                 CONCAT12((char)((ulonglong)uVar4 >>
                                                                                0x10) + auVar275[2],
                                                                          CONCAT11((char)((ulonglong
                                                                                          )uVar4 >>
                                                                                         8) +
                                                                                   auVar275[1],
                                                                                   (char)uVar4 +
                                                                                   auVar275[0]))))))
                            );
        puVar244 = puVar244 + 1;
        puVar248 = puVar248 + 1;
        lVar242 = lVar242 + 8;
      } while (lVar242 != 0);
      param_2 = (uchar *)(*(undefined1 (*) [16])param_2 + uVar240);
      param_3 = (uchar *)(*(undefined1 (*) [16])param_3 + uVar240);
      if (uVar236 == uVar240) {
        return;
      }
    }
  }
LAB_140dd8b80:
  do {
    bVar5 = *(byte *)((longlong)param_3 + lVar233);
    uVar245 = (uint)(byte)(*(undefined1 (*) [16])param_3)[0] - (uint)bVar5;
    uVar239 = (uint)*(byte *)((longlong)param_2 + lVar233) - (uint)bVar5;
    uVar250 = -uVar245;
    if ((int)-uVar245 < 0) {
      uVar250 = uVar245;
    }
    uVar251 = -uVar239;
    if ((int)-uVar239 < 0) {
      uVar251 = uVar239;
    }
    uVar246 = -(uVar239 + uVar245);
    if ((int)uVar246 < 0) {
      uVar246 = uVar239 + uVar245;
    }
    uVar239 = uVar250 & 0xff;
    bVar234 = *(byte *)((longlong)param_2 + lVar233);
    if ((uVar251 & 0xff) < (uVar250 & 0xff)) {
      uVar239 = uVar251 & 0xff;
      bVar234 = (*(undefined1 (*) [16])param_3)[0];
    }
    if (uVar246 < uVar239) {
      bVar234 = bVar5;
    }
    (*(undefined1 (*) [16])param_2)[0] = (*(undefined1 (*) [16])param_2)[0] + bVar234;
    puVar232 = *(undefined1 (*) [16])param_2;
    param_2 = (uchar *)(puVar232 + 1);
    param_3 = (uchar *)(*(undefined1 (*) [16])param_3 + 1);
  } while ((undefined1 (*) [16])(puVar232 + 1) < pauVar235);
  return;
}

