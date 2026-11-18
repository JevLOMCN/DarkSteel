// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: libPNG
// Functions: 41

// png_save_uint_32 @ 140dc9f70

void __cdecl png_save_uint_32(uchar *param_1,uint param_2)

{
  *(uint *)param_1 =
       param_2 >> 0x18 | (param_2 & 0xff0000) >> 8 | (param_2 & 0xff00) << 8 | param_2 << 0x18;
  return;
}

// png_save_uint_16 @ 140dc9f80

void __cdecl png_save_uint_16(uchar *param_1,uint param_2)

{
  *(ushort *)param_1 = (ushort)param_2 << 8 | (ushort)param_2 >> 8;
  return;
}

// png_write_sig @ 140dc9f90

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl png_write_sig(png_struct_def_conflict *param_1)

{
  byte *pbVar1;
  code *pcVar2;
  undefined1 auStack_38 [32];
  uchar local_18 [8];
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStack_38;
  local_18[0] = 0x89;
  local_18[1] = 'P';
  local_18[2] = 'N';
  local_18[3] = 'G';
  local_18[4] = '\r';
  local_18[5] = '\n';
  local_18[6] = '\x1a';
  local_18[7] = '\n';
  param_1->io_state = 0x12;
  png_write_data(param_1,local_18 + param_1->sig_bytes,8 - (ulonglong)param_1->sig_bytes);
  if (param_1->sig_bytes < 3) {
    pbVar1 = (byte *)((longlong)&param_1->mode + 1);
    *pbVar1 = *pbVar1 | 0x10;
  }
  if ((local_10 ^ (ulonglong)auStack_38) == __security_cookie.value) {
    return;
  }
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

// png_write_chunk_start @ 140dca010

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl png_write_chunk_start(png_struct_def_conflict *param_1,uchar *param_2,uint param_3)

{
  code *pcVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  undefined1 auStack_48 [32];
  uchar local_28;
  undefined1 local_27;
  undefined1 local_26;
  undefined1 local_25;
  byte local_24;
  byte local_23;
  byte local_22;
  byte local_21;
  ulonglong local_20;
  
  local_20 = __security_cookie.value ^ (ulonglong)auStack_48;
  if (param_1 != (png_struct_def_conflict *)0x0) {
    local_24 = *param_2;
    local_23 = param_2[1];
    local_22 = param_2[2];
    uVar5 = (uint)local_22;
    local_21 = param_2[3];
    local_28 = (uchar)(param_3 >> 0x18);
    local_27 = (undefined1)(param_3 >> 0x10);
    local_26 = (undefined1)(param_3 >> 8);
    local_25 = (undefined1)param_3;
    uVar3 = (uint)local_24;
    uVar2 = (uint)local_23;
    uVar4 = (uint)local_21;
    param_1->io_state = 0x22;
    png_write_data(param_1,&local_28,8);
    param_1->chunk_name = uVar5 << 8 | uVar2 << 0x10 | uVar3 << 0x18 | uVar4;
    png_reset_crc(param_1);
    png_calculate_crc(param_1,&local_24,4);
    param_1->io_state = 0x42;
  }
  if ((local_20 ^ (ulonglong)auStack_48) == __security_cookie.value) {
    return;
  }
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

// png_write_chunk_data @ 140dca110

void __cdecl png_write_chunk_data(png_struct_def_conflict *param_1,uchar *param_2,ulong64 param_3)

{
  if (param_3 != 0 && (param_2 != (uchar *)0x0 && param_1 != (png_struct_def_conflict *)0x0)) {
    png_write_data(param_1,param_2,param_3);
    png_calculate_crc(param_1,param_2,param_3);
    return;
  }
  return;
}

// png_write_chunk_end @ 140dca170

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl png_write_chunk_end(png_struct_def_conflict *param_1)

{
  uint uVar1;
  code *pcVar2;
  undefined1 auStack_38 [44];
  uint local_c;
  ulonglong local_8;
  
  local_8 = __security_cookie.value ^ (ulonglong)auStack_38;
  if (param_1 != (png_struct_def_conflict *)0x0) {
    param_1->io_state = 0x82;
    uVar1 = param_1->crc;
    local_c = uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
    png_write_data(param_1,(uchar *)&local_c,4);
  }
  if ((local_8 ^ (ulonglong)auStack_38) == __security_cookie.value) {
    return;
  }
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

// png_write_chunk @ 140dca1d0

void __cdecl
png_write_chunk(png_struct_def_conflict *param_1,uchar *param_2,uchar *param_3,ulong64 param_4)

{
  uint uVar1;
  
  uVar1 = *(uint *)param_2;
  png_write_complete_chunk
            (param_1,uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18
             ,param_3,param_4);
  return;
}

// png_write_complete_chunk @ 140dca1e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
png_write_complete_chunk
          (png_struct_def_conflict *param_1,uint param_2,uchar *param_3,ulong64 param_4)

{
  uint uVar1;
  code *pcVar2;
  undefined1 auStack_58 [32];
  undefined4 local_38;
  uchar local_34;
  undefined1 local_33;
  undefined1 local_32;
  undefined1 local_31;
  ulonglong local_30;
  
  local_30 = __security_cookie.value ^ (ulonglong)auStack_58;
  if (param_1 != (png_struct_def_conflict *)0x0) {
    if (param_4 >> 0x1f != 0) {
                    /* WARNING: Subroutine does not return */
      png_error(param_1,"length exceeds PNG maximum");
    }
    param_1->io_state = 0x22;
    local_38 = CONCAT13((char)param_4,
                        CONCAT12((char)(param_4 >> 8),
                                 CONCAT11((char)(param_4 >> 0x10),(char)(param_4 >> 0x18))));
    local_34 = (uchar)(param_2 >> 0x18);
    local_33 = (undefined1)(param_2 >> 0x10);
    local_32 = (undefined1)(param_2 >> 8);
    local_31 = (undefined1)param_2;
    png_write_data(param_1,(uchar *)&local_38,8);
    param_1->chunk_name = param_2;
    png_reset_crc(param_1);
    png_calculate_crc(param_1,&local_34,4);
    param_1->io_state = 0x42;
    if (param_4 != 0 && param_3 != (uchar *)0x0) {
      png_write_data(param_1,param_3,param_4);
      png_calculate_crc(param_1,param_3,param_4);
    }
    param_1->io_state = 0x82;
    uVar1 = param_1->crc;
    local_38 = uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
    png_write_data(param_1,(uchar *)&local_38,4);
  }
  if ((local_30 ^ (ulonglong)auStack_58) == __security_cookie.value) {
    return;
  }
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

// png_free_buffer_list @ 140dca330

void __cdecl png_free_buffer_list(png_struct_def_conflict *param_1,png_compression_buffer **param_2)

{
  png_compression_buffer *ppVar1;
  png_compression_buffer *ppVar2;
  
  ppVar2 = *param_2;
  if (ppVar2 != (png_compression_buffer *)0x0) {
    *param_2 = (png_compression_buffer *)0x0;
    do {
      ppVar1 = ppVar2->next;
      png_free(param_1,ppVar2);
      ppVar2 = ppVar1;
    } while (ppVar1 != (png_compression_buffer *)0x0);
  }
  return;
}

// png_write_IHDR @ 140dca370

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
png_write_IHDR(png_struct_def_conflict *param_1,uint param_2,uint param_3,int param_4,int param_5,
              int param_6,int param_7,int param_8)

{
  code *pcVar1;
  uchar uVar2;
  byte bVar3;
  uchar uVar4;
  ulonglong uVar5;
  undefined1 auStack_78 [43];
  uchar local_4d;
  undefined1 local_4c;
  undefined1 local_4b;
  undefined1 local_4a;
  undefined1 local_49;
  undefined1 local_48;
  undefined1 local_47;
  undefined1 local_46;
  uchar local_45;
  uchar local_44;
  undefined1 local_43;
  uchar local_42;
  uchar local_41;
  ulonglong local_40;
  
  local_40 = __security_cookie.value ^ (ulonglong)auStack_78;
  uVar4 = (uchar)param_4;
  switch(param_5) {
  case 0:
    if ((0x10 < (uint)param_4) || (uVar2 = '\x01', (0x10116U >> (param_4 & 0x1fU) & 1) == 0)) {
                    /* WARNING: Subroutine does not return */
      png_error(param_1,"Invalid bit depth for grayscale image");
    }
    break;
  default:
                    /* WARNING: Subroutine does not return */
    png_error(param_1,"Invalid image color type specified");
  case 2:
    uVar2 = '\x03';
    if ((param_4 != 8) && (param_4 != 0x10)) {
                    /* WARNING: Subroutine does not return */
      png_error(param_1,"Invalid bit depth for RGB image");
    }
    break;
  case 3:
    if ((7 < param_4 - 1U) || (uVar2 = '\x01', (0x8bU >> (param_4 - 1U & 0x1f) & 1) == 0)) {
                    /* WARNING: Subroutine does not return */
      png_error(param_1,"Invalid bit depth for paletted image");
    }
    break;
  case 4:
    uVar2 = '\x02';
    if ((param_4 != 8) && (param_4 != 0x10)) {
                    /* WARNING: Subroutine does not return */
      png_error(param_1,"Invalid bit depth for grayscale+alpha image");
    }
    break;
  case 6:
    uVar2 = '\x04';
    if ((param_4 != 8) && (param_4 != 0x10)) {
                    /* WARNING: Subroutine does not return */
      png_error(param_1,"Invalid bit depth for RGBA image");
    }
  }
  param_1->channels = uVar2;
  if (param_6 != 0) {
    png_warning(param_1,"Invalid compression type specified");
  }
  if (((param_1->mng_features_permitted & 4) == 0) || ((param_1->mode & 0x1000) != 0)) {
    if (param_7 != 0) goto LAB_140dca4a8;
  }
  else {
    if ((param_7 == 0) || (param_7 == 0x40 && (param_5 & 0xfffffffbU) == 2)) goto LAB_140dca4ba;
LAB_140dca4a8:
    png_warning(param_1,"Invalid filter type specified");
  }
  param_7 = 0;
LAB_140dca4ba:
  if (1 < (uint)param_8) {
    png_warning(param_1,"Invalid interlace type specified");
    param_8 = 1;
  }
  param_1->bit_depth = uVar4;
  local_44 = (uchar)param_5;
  param_1->color_type = local_44;
  local_41 = (uchar)param_8;
  param_1->interlaced = local_41;
  local_42 = (uchar)param_7;
  param_1->filter_type = local_42;
  param_1->compression_type = '\0';
  param_1->width = param_2;
  param_1->height = param_3;
  bVar3 = param_1->channels * uVar4;
  param_1->pixel_depth = bVar3;
  if (bVar3 < 8) {
    uVar5 = (ulonglong)bVar3 * (ulonglong)param_2 + 7 >> 3;
  }
  else {
    uVar5 = (ulonglong)(bVar3 >> 3) * (ulonglong)param_2;
  }
  param_1->rowbytes = uVar5;
  param_1->usr_width = param_2;
  param_1->usr_bit_depth = uVar4;
  param_1->usr_channels = param_1->channels;
  local_4d = (uchar)(param_2 >> 0x18);
  local_4c = (undefined1)(param_2 >> 0x10);
  local_4b = (undefined1)(param_2 >> 8);
  local_4a = (undefined1)param_2;
  local_49 = (undefined1)(param_3 >> 0x18);
  local_48 = (undefined1)(param_3 >> 0x10);
  local_47 = (undefined1)(param_3 >> 8);
  local_46 = (undefined1)param_3;
  local_43 = 0;
  local_45 = uVar4;
  png_write_complete_chunk(param_1,0x49484452,&local_4d,0xd);
  if (param_1->do_filter == '\0') {
    uVar4 = '\b';
    if (param_1->color_type != '\x03') {
      uVar4 = (param_1->bit_depth < 8) * '\x10' + 0xf8;
    }
    param_1->do_filter = uVar4;
  }
  param_1->mode = 1;
  if ((local_40 ^ (ulonglong)auStack_78) == __security_cookie.value) {
    return;
  }
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

// png_write_PLTE @ 140dca640

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl png_write_PLTE(png_struct_def_conflict *param_1,png_color_struct *param_2,uint param_3)

{
  uint uVar1;
  code *pcVar2;
  int iVar3;
  char *pcVar4;
  undefined1 auStack_58 [37];
  uchar local_33;
  uchar local_32;
  uchar local_31;
  undefined4 local_30;
  uchar local_2c [4];
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_58;
  if (param_1->color_type == 3) {
    if (((param_1->mng_features_permitted & 1) == 0 && param_3 == 0) ||
       ((uint)(1 << (param_1->bit_depth & 0x1f)) < param_3)) {
                    /* WARNING: Subroutine does not return */
      png_error(param_1,"Invalid number of colors in palette");
    }
LAB_140dca6c7:
    param_1->num_palette = (ushort)param_3;
    iVar3 = param_3 * 3;
    param_1->io_state = 0x22;
    local_30 = CONCAT13((char)iVar3,
                        CONCAT12((char)((uint)iVar3 >> 8),
                                 CONCAT11((char)((uint)iVar3 >> 0x10),(char)((uint)iVar3 >> 0x18))))
    ;
    builtin_memcpy(local_2c,"PLTE",4);
    png_write_data(param_1,(uchar *)&local_30,8);
    param_1->chunk_name = 0x504c5445;
    png_reset_crc(param_1);
    png_calculate_crc(param_1,local_2c,4);
    param_1->io_state = 0x42;
    if (param_3 != 0) {
      do {
        local_33 = param_2->red;
        local_32 = param_2->green;
        local_31 = param_2->blue;
        png_write_data(param_1,&local_33,3);
        png_calculate_crc(param_1,&local_33,3);
        param_2 = param_2 + 1;
        param_3 = param_3 - 1;
      } while (param_3 != 0);
    }
    param_1->io_state = 0x82;
    uVar1 = param_1->crc;
    local_30 = uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
    png_write_data(param_1,(uchar *)&local_30,4);
    *(byte *)&param_1->mode = (byte)param_1->mode | 2;
    if ((local_28 ^ (ulonglong)auStack_58) == __security_cookie.value) {
      return;
    }
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if ((param_3 < 0x101) && ((param_1->mng_features_permitted & 1) != 0 || param_3 != 0)) {
    if ((param_1->color_type & 2) != 0) goto LAB_140dca6c7;
    pcVar4 = "Ignoring request to write a PLTE chunk in grayscale PNG";
  }
  else {
    pcVar4 = "Invalid number of colors in palette";
  }
  png_warning(param_1,pcVar4);
  return;
}

// png_compress_IDAT @ 140dca810

void __cdecl
png_compress_IDAT(png_struct_def_conflict *param_1,uchar *param_2,ulong64 param_3,int param_4)

{
  uchar *puVar1;
  int iVar2;
  png_compression_buffer *ppVar3;
  ulong64 uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  png_compression_buffer *ppVar8;
  uint uVar9;
  int iVar10;
  ulonglong uVar11;
  byte bVar12;
  
  if (param_1->zowner != 0x49444154) {
    ppVar3 = param_1->zbuffer_list;
    if (ppVar3 == (png_compression_buffer *)0x0) {
      ppVar3 = png_malloc(param_1,(ulonglong)param_1->zbuffer_size + 8);
      param_1->zbuffer_list = ppVar3;
      ppVar3->next = (png_compression_buffer *)0x0;
    }
    else {
      ppVar8 = ppVar3->next;
      if (ppVar8 != (png_compression_buffer *)0x0) {
        ppVar3->next = (png_compression_buffer *)0x0;
        do {
          ppVar3 = ppVar8->next;
          png_free(param_1,ppVar8);
          ppVar8 = ppVar3;
        } while (ppVar3 != (png_compression_buffer *)0x0);
      }
    }
    uVar4 = png_image_size(param_1);
    iVar2 = png_deflate_claim(param_1,0x49444154,uVar4);
    if (iVar2 != 0) {
LAB_140dcac16:
                    /* WARNING: Subroutine does not return */
      png_error(param_1,(param_1->zstream).msg);
    }
    (param_1->zstream).next_out = param_1->zbuffer_list->output;
    (param_1->zstream).avail_out = param_1->zbuffer_size;
  }
  (param_1->zstream).next_in = param_2;
LAB_140dca8f0:
  do {
    uVar11 = 0xffffffff;
    if (param_3 < 0xffffffff) {
      uVar11 = param_3;
    }
    (param_1->zstream).avail_in = (uint)uVar11;
    iVar2 = 0;
    if (param_3 >> 0x20 == 0) {
      iVar2 = param_4;
    }
    iVar2 = deflate(&param_1->zstream,iVar2);
    uVar9 = (param_1->zstream).avail_out;
    param_3 = (ulonglong)(param_1->zstream).avail_in + (param_3 - uVar11);
    (param_1->zstream).avail_in = 0;
    if (uVar9 == 0) {
      ppVar3 = param_1->zbuffer_list;
      puVar1 = ppVar3->output;
      uVar9 = param_1->zbuffer_size;
      if (((((param_1->mode & 4) == 0) && (param_1->compression_type == '\0')) &&
          (uVar4 = png_image_size(param_1), uVar4 < 0x4001)) &&
         (bVar12 = *puVar1, (bVar12 & 0xf0) < 0x71 && (bVar12 & 0xf) == 8)) {
        bVar12 = bVar12 >> 4;
        uVar5 = (uint)bVar12;
        uVar11 = 0x80L << bVar12;
        if (uVar4 <= uVar11) {
          iVar10 = uVar5 * 0x1000 + 0x800;
          bVar12 = bVar12 << 4 | 8;
          do {
            uVar5 = uVar5 - 1;
            iVar10 = iVar10 + -0x1000;
            bVar12 = bVar12 - 0x10;
            if (uVar5 == 0) break;
            uVar11 = uVar11 >> 1 & 0x7fffffff;
          } while (uVar4 <= uVar11);
          ppVar3->output[0] = bVar12;
          uVar5 = (byte)ppVar3->field_0x9 & 0xffffffe0;
          uVar6 = (iVar10 + uVar5) / 0x1f;
          bVar12 = (byte)uVar5;
          ppVar3->field_0x9 = (((char)uVar6 - (char)(uVar6 << 5)) + bVar12 | bVar12) ^ 0x1f;
        }
      }
      if (uVar9 != 0) {
        png_write_complete_chunk(param_1,0x49444154,puVar1,(ulonglong)uVar9);
      }
      *(byte *)&param_1->mode = (byte)param_1->mode | 4;
      (param_1->zstream).next_out = puVar1;
      (param_1->zstream).avail_out = uVar9;
      if ((param_4 != 0) && (iVar2 == 0)) goto LAB_140dca8f0;
    }
    if (iVar2 != 0) {
      if ((param_4 != 4) || (iVar2 != 1)) {
        png_zstream_error(param_1,iVar2);
        goto LAB_140dcac16;
      }
      ppVar3 = param_1->zbuffer_list;
      uVar5 = param_1->zbuffer_size;
      if (((((param_1->mode & 4) != 0) || (param_1->compression_type != '\0')) ||
          (uVar4 = png_image_size(param_1), 0x4000 < uVar4)) ||
         (bVar12 = ppVar3->output[0], 0x70 < (bVar12 & 0xf0) || (bVar12 & 0xf) != 8))
      goto LAB_140dcabb5;
      bVar12 = bVar12 >> 4;
      uVar6 = (uint)bVar12;
      uVar11 = 0x80L << bVar12;
      if (uVar11 < uVar4) goto LAB_140dcabb5;
      iVar2 = uVar6 * 0x1000 + 0x800;
      bVar12 = bVar12 << 4 | 8;
      break;
    }
    if (param_3 == 0) {
      if (param_4 != 4) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      png_error(param_1,"Z_OK on Z_FINISH with output space");
    }
  } while( true );
  while (uVar11 = uVar11 >> 1 & 0x7fffffff, uVar4 <= uVar11) {
    uVar6 = uVar6 - 1;
    iVar2 = iVar2 + -0x1000;
    bVar12 = bVar12 - 0x10;
    if (uVar6 == 0) break;
  }
  ppVar3->output[0] = bVar12;
  uVar6 = (byte)ppVar3->field_0x9 & 0xffffffe0;
  uVar7 = (iVar2 + uVar6) / 0x1f;
  bVar12 = (byte)uVar6;
  ppVar3->field_0x9 = (((char)uVar7 - (char)(uVar7 << 5)) + bVar12 | bVar12) ^ 0x1f;
LAB_140dcabb5:
  if (uVar5 != uVar9) {
    png_write_complete_chunk(param_1,0x49444154,ppVar3->output,(ulonglong)(uVar5 - uVar9));
  }
  (param_1->zstream).avail_out = 0;
  (param_1->zstream).next_out = (uchar *)0x0;
  *(byte *)&param_1->mode = (byte)param_1->mode | 0xc;
  param_1->zowner = 0;
  return;
}

// png_deflate_claim @ 140dcac40

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

int __cdecl png_deflate_claim(png_struct_def_conflict *param_1,uint param_2,ulong64 param_3)

{
  int iVar1;
  int iVar2;
  code *pcVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  ulonglong uVar7;
  uint uVar8;
  int iVar9;
  undefined1 auStack_c8 [32];
  int local_a8;
  uint local_a0;
  char *local_98;
  undefined4 local_90;
  char local_88;
  undefined1 local_87;
  undefined1 local_86;
  undefined1 local_85;
  undefined2 local_84;
  undefined1 local_82;
  undefined1 local_81;
  undefined1 local_80;
  undefined1 local_7f;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_c8;
  uVar8 = param_1->zowner;
  if (uVar8 != 0) {
    local_88 = (char)(param_2 >> 0x18);
    local_87 = (undefined1)(param_2 >> 0x10);
    local_86 = (undefined1)(param_2 >> 8);
    local_85 = (undefined1)param_2;
    local_84 = 0x203a;
    local_82 = (undefined1)(uVar8 >> 0x18);
    local_81 = (undefined1)(uVar8 >> 0x10);
    local_80 = (undefined1)(uVar8 >> 8);
    local_7f = (undefined1)uVar8;
    png_safecat(&local_88,0x40,10," using zstream");
    png_warning(param_1,&local_88);
    if (param_1->zowner == 0x49444154) {
      (param_1->zstream).msg = "in use by IDAT";
      if ((local_48 ^ (ulonglong)auStack_c8) == __security_cookie.value) {
        return -2;
      }
      goto LAB_140dcaef5;
    }
    param_1->zowner = 0;
  }
  if (param_2 == 0x49444154) {
    iVar6 = param_1->zlib_level;
    iVar1 = param_1->zlib_method;
    iVar9 = param_1->zlib_window_bits;
    iVar2 = param_1->zlib_mem_level;
    if ((param_1->flags & 1) == 0) {
      uVar8 = (uint)(param_1->do_filter != '\b');
    }
    else {
      uVar8 = param_1->zlib_strategy;
    }
  }
  else {
    iVar6 = param_1->zlib_text_level;
    iVar1 = param_1->zlib_text_method;
    iVar9 = param_1->zlib_text_window_bits;
    iVar2 = param_1->zlib_text_mem_level;
    uVar8 = param_1->zlib_text_strategy;
  }
  if (param_3 < 0x4001) {
    uVar7 = (ulonglong)(uint)(1 << ((char)iVar9 - 1U & 0x1f));
    if (param_3 + 0x106 <= uVar7) {
      do {
        uVar7 = uVar7 >> 1;
        iVar9 = iVar9 + -1;
      } while ((uint)(param_3 + 0x106) <= (uint)uVar7);
    }
  }
  uVar5 = param_1->flags;
  if (((uVar5 & 2) != 0) &&
     ((((param_1->zlib_set_level != iVar6 || (param_1->zlib_set_method != iVar1)) ||
       (param_1->zlib_set_window_bits != iVar9)) ||
      ((param_1->zlib_set_mem_level != iVar2 || (param_1->zlib_set_strategy != uVar8)))))) {
    iVar4 = deflateEnd(&param_1->zstream);
    if (iVar4 != 0) {
      png_warning(param_1,"deflateEnd failed (ignored)");
    }
    uVar5 = param_1->flags & 0xfffffffd;
    param_1->flags = uVar5;
  }
  (param_1->zstream).next_in = (uchar *)0x0;
  (param_1->zstream).avail_in = 0;
  (param_1->zstream).next_out = (uchar *)0x0;
  (param_1->zstream).avail_out = 0;
  if ((uVar5 & 2) == 0) {
    local_98 = "1.3";
    local_90 = 0x58;
    local_a8 = iVar2;
    local_a0 = uVar8;
    iVar6 = deflateInit2_(&param_1->zstream,iVar6,iVar1,iVar9);
    if (iVar6 != 0) {
LAB_140dcaea3:
      png_zstream_error(param_1,iVar6);
      if ((local_48 ^ (ulonglong)auStack_c8) == __security_cookie.value) {
        return iVar6;
      }
      goto LAB_140dcaef5;
    }
    *(byte *)&param_1->flags = (byte)param_1->flags | 2;
  }
  else {
    iVar6 = deflateReset(&param_1->zstream);
    if (iVar6 != 0) goto LAB_140dcaea3;
  }
  param_1->zowner = param_2;
  if ((local_48 ^ (ulonglong)auStack_c8) == __security_cookie.value) {
    return 0;
  }
LAB_140dcaef5:
  pcVar3 = (code *)swi(3);
  iVar6 = (*pcVar3)();
  return iVar6;
}

// png_image_size @ 140dcaf10

ulong64 __cdecl png_image_size(png_struct_def_conflict *param_1)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  ulong64 uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  uint uVar8;
  
  uVar2 = param_1->height;
  if (0x7fff < uVar2 || 0x7fff < param_1->rowbytes) {
    return 0xffffffff;
  }
  uVar6 = (ulonglong)uVar2;
  if (param_1->interlaced == '\0') {
    return (param_1->rowbytes + 1) * uVar6;
  }
  uVar3 = param_1->width;
  uVar7 = (ulonglong)uVar3;
  bVar1 = param_1->pixel_depth;
  uVar8 = uVar3 + 7;
  if (bVar1 < 8) {
    uVar5 = (ulonglong)bVar1;
    if (uVar8 < 8) {
      uVar4 = 0;
      if (7 < uVar3 + 3) goto LAB_140dcafcb;
LAB_140dcb0a0:
      if (3 < uVar3 + 3) goto LAB_140dcb0aa;
    }
    else {
      uVar4 = (uVar6 + 7 >> 3) * (((uVar8 >> 3) * uVar5 + 7 >> 3) + 1);
      if (uVar3 + 3 < 8) goto LAB_140dcb0a0;
LAB_140dcafcb:
      uVar4 = uVar4 + (uVar6 + 7 >> 3) * (((uVar3 + 3 >> 3) * uVar5 + 7 >> 3) + 1);
LAB_140dcb0aa:
      uVar4 = uVar4 + (ulonglong)(uVar2 + 3 >> 3) * (((uVar3 + 3 >> 2) * uVar5 + 7 >> 3) + 1);
    }
    if (uVar3 + 1 < 4) {
      if (1 < uVar3 + 1) goto LAB_140dcb18d;
      if (1 < uVar3) goto LAB_140dcb1b8;
LAB_140dcb0f2:
      if (uVar7 == 0) {
        return uVar4;
      }
    }
    else {
      uVar4 = uVar4 + (ulonglong)(uVar2 + 3 >> 2) * (((uVar3 + 1 >> 2) * uVar5 + 7 >> 3) + 1);
LAB_140dcb18d:
      uVar4 = uVar4 + (ulonglong)(uVar2 + 1 >> 2) * (((uVar3 + 1 >> 1) * uVar5 + 7 >> 3) + 1);
      if (uVar3 < 2) goto LAB_140dcb0f2;
LAB_140dcb1b8:
      uVar4 = uVar4 + (ulonglong)(uVar2 + 1 >> 1) * (((uVar3 >> 1) * uVar5 + 7 >> 3) + 1);
    }
    uVar7 = uVar7 * uVar5 + 7 >> 3;
    goto LAB_140dcb1e9;
  }
  uVar5 = (ulonglong)(bVar1 >> 3);
  if (uVar8 < 8) {
    uVar4 = 0;
    if (7 < uVar3 + 3) goto LAB_140dcaf80;
LAB_140dcb01b:
    if (3 < uVar3 + 3) goto LAB_140dcb025;
  }
  else {
    uVar4 = (uVar6 + 7 >> 3) * ((uVar8 >> 3) * uVar5 + 1);
    if (uVar3 + 3 < 8) goto LAB_140dcb01b;
LAB_140dcaf80:
    uVar4 = uVar4 + (uVar6 + 7 >> 3) * ((uVar3 + 3 >> 3) * uVar5 + 1);
LAB_140dcb025:
    uVar4 = uVar4 + (ulonglong)(uVar2 + 3 >> 3) * ((uVar3 + 3 >> 2) * uVar5 + 1);
  }
  if (uVar3 + 1 < 4) {
    if (1 < uVar3 + 1) goto LAB_140dcb11e;
    if (1 < uVar3) goto LAB_140dcb141;
LAB_140dcb065:
    if (uVar7 == 0) {
      return uVar4;
    }
  }
  else {
    uVar4 = uVar4 + (uVar6 + 3 >> 2) * ((uVar3 + 1 >> 2) * uVar5 + 1);
LAB_140dcb11e:
    uVar4 = uVar4 + (ulonglong)(uVar2 + 1 >> 2) * ((uVar3 + 1 >> 1) * uVar5 + 1);
    if (uVar3 < 2) goto LAB_140dcb065;
LAB_140dcb141:
    uVar4 = uVar4 + (uVar6 + 1 >> 1) * ((uVar3 >> 1) * uVar5 + 1);
  }
  uVar7 = uVar7 * uVar5;
LAB_140dcb1e9:
  return uVar4 + (ulonglong)(uVar2 >> 1) * (uVar7 + 1);
}

// png_write_IEND @ 140dcb200

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */

void __cdecl png_write_IEND(png_struct_def_conflict *param_1)

{
  uint uVar1;
  code *pcVar2;
  undefined1 auStack_48 [40];
  uint local_20;
  undefined1 auStack_1c [4];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_48;
  if (param_1 != (png_struct_def_conflict *)0x0) {
    param_1->io_state = 0x22;
    _local_20 = 0x444e454900000000;
    png_write_data(param_1,(uchar *)&local_20,8);
    param_1->chunk_name = 0x49454e44;
    png_reset_crc(param_1);
    png_calculate_crc(param_1,auStack_1c,4);
    param_1->io_state = 0x82;
    uVar1 = param_1->crc;
    _local_20 = CONCAT44(auStack_1c,
                         uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 |
                         uVar1 << 0x18);
    png_write_data(param_1,(uchar *)&local_20,4);
  }
  *(byte *)&param_1->mode = (byte)param_1->mode | 0x10;
  if ((local_18 ^ (ulonglong)auStack_48) == __security_cookie.value) {
    return;
  }
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

// png_write_gAMA_fixed @ 140dcb2d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl png_write_gAMA_fixed(png_struct_def_conflict *param_1,int param_2)

{
  code *pcVar1;
  undefined1 auStack_38 [44];
  uint local_c;
  ulonglong local_8;
  
  local_8 = __security_cookie.value ^ (ulonglong)auStack_38;
  local_c = (uint)param_2 >> 0x18 | (param_2 & 0xff0000U) >> 8 | (param_2 & 0xff00U) << 8 |
            param_2 << 0x18;
  png_write_complete_chunk(param_1,0x67414d41,(uchar *)&local_c,4);
  if ((local_8 ^ (ulonglong)auStack_38) == __security_cookie.value) {
    return;
  }
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

// png_write_sRGB @ 140dcb320

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl png_write_sRGB(png_struct_def_conflict *param_1,int param_2)

{
  code *pcVar1;
  undefined1 auStack_48 [47];
  uchar local_19;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_48;
  if (3 < param_2) {
    png_warning(param_1,"Invalid sRGB rendering intent specified");
  }
  local_19 = (uchar)param_2;
  png_write_complete_chunk(param_1,0x73524742,&local_19,1);
  if ((local_18 ^ (ulonglong)auStack_48) == __security_cookie.value) {
    return;
  }
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

// png_write_iCCP @ 140dcb390

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl png_write_iCCP(png_struct_def_conflict *param_1,char *param_2,uchar *param_3)

{
  code *pcVar1;
  uint uVar2;
  int iVar3;
  longlong *plVar4;
  uint uVar5;
  uchar *puVar6;
  png_compression_buffer *ppVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  undefined1 auStack_4d8 [40];
  compression_state local_4b0;
  uchar local_98 [88];
  undefined4 local_40;
  uchar local_3c [4];
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_4d8;
  if (param_3 == (uchar *)0x0) {
                    /* WARNING: Subroutine does not return */
    png_error(param_1,"No profile for iCCP chunk");
  }
  uVar5 = (uint)param_3[2] << 8 | (uint)param_3[1] << 0x10 | (uint)*param_3 << 0x18 |
          (uint)param_3[3];
  if (uVar5 < 0x84) {
                    /* WARNING: Subroutine does not return */
    png_error(param_1,"ICC profile too short");
  }
  if (((param_3[3] & 3) != 0) && (3 < param_3[8])) {
                    /* WARNING: Subroutine does not return */
    png_error(param_1,"ICC profile length invalid (not a multiple of 4)");
  }
  uVar2 = png_check_keyword(param_1,param_2,local_98);
  if (uVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    png_error(param_1,"iCCP: invalid keyword");
  }
  local_98[uVar2 + 1] = '\0';
  uVar2 = uVar2 + 2;
  local_4b0.input_len = (ulong64)uVar5;
  local_4b0.output_len = 0;
  local_4b0.input = param_3;
  iVar3 = png_text_compress(param_1,0x69434350,&local_4b0,uVar2);
  if (iVar3 != 0) {
                    /* WARNING: Subroutine does not return */
    png_error(param_1,(param_1->zstream).msg);
  }
  if (param_1 == (png_struct_def_conflict *)0x0) {
    if (_DAT_000001d0 == (longlong *)0x0 || local_4b0.output_len < 0x401) {
      if (0x400 < local_4b0.output_len) goto LAB_140dcb675;
      goto LAB_140dcb600;
    }
    uVar5 = local_4b0.output_len - 0x400;
    plVar4 = _DAT_000001d0;
    do {
      bVar8 = uVar5 < _DAT_000001d8;
      uVar5 = uVar5 - _DAT_000001d8;
      bVar10 = uVar5 == 0;
      if (bVar8) {
        uVar5 = 0;
      }
      bVar9 = bVar8 || bVar10;
    } while ((!bVar8 && !bVar10) && (plVar4 = (longlong *)*plVar4, plVar4 != (longlong *)0x0));
  }
  else {
    iVar3 = local_4b0.output_len + uVar2;
    param_1->io_state = 0x22;
    local_40 = CONCAT13((char)iVar3,
                        CONCAT12((char)((uint)iVar3 >> 8),
                                 CONCAT11((char)((uint)iVar3 >> 0x10),(char)((uint)iVar3 >> 0x18))))
    ;
    builtin_memcpy(local_3c,"iCCP",4);
    png_write_data(param_1,(uchar *)&local_40,8);
    param_1->chunk_name = 0x69434350;
    png_reset_crc(param_1);
    png_calculate_crc(param_1,local_3c,4);
    param_1->io_state = 0x42;
    if (uVar2 != 0) {
      png_write_data(param_1,local_98,(ulonglong)uVar2);
      png_calculate_crc(param_1,local_98,(ulonglong)uVar2);
    }
    ppVar7 = (png_compression_buffer *)&param_1->zbuffer_list;
    uVar5 = 0x400;
    puVar6 = local_4b0.output;
    uVar2 = local_4b0.output_len;
    while( true ) {
      ppVar7 = ppVar7->next;
      if (uVar2 <= uVar5) {
        uVar5 = uVar2;
      }
      if (uVar5 != 0) {
        png_write_data(param_1,puVar6,(ulonglong)uVar5);
        png_calculate_crc(param_1,puVar6,(ulonglong)uVar5);
      }
      uVar2 = uVar2 - uVar5;
      bVar9 = uVar2 == 0;
      if ((bVar9) || (ppVar7 == (png_compression_buffer *)0x0)) break;
      uVar5 = param_1->zbuffer_size;
      puVar6 = ppVar7->output;
    }
  }
  if (!bVar9) {
LAB_140dcb675:
                    /* WARNING: Subroutine does not return */
    png_error(param_1,"error writing ancillary chunked compressed data");
  }
  if (param_1 != (png_struct_def_conflict *)0x0) {
    param_1->io_state = 0x82;
    uVar5 = param_1->crc;
    local_40 = uVar5 >> 0x18 | (uVar5 & 0xff0000) >> 8 | (uVar5 & 0xff00) << 8 | uVar5 << 0x18;
    png_write_data(param_1,(uchar *)&local_40,4);
  }
LAB_140dcb600:
  if ((local_38 ^ (ulonglong)auStack_4d8) != __security_cookie.value) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  return;
}

// png_text_compress @ 140dcb690

int __cdecl
png_text_compress(png_struct_def_conflict *param_1,uint param_2,compression_state *param_3,
                 uint param_4)

{
  int iVar1;
  ulonglong uVar2;
  png_compression_buffer *ppVar3;
  int iVar4;
  uint uVar5;
  ulong64 uVar6;
  uint uVar7;
  ulonglong uVar8;
  byte bVar9;
  png_compression_buffer *ppVar10;
  
  iVar1 = png_deflate_claim(param_1,param_2,param_3->input_len);
  if (iVar1 == 0) {
    uVar6 = param_3->input_len;
    (param_1->zstream).next_in = param_3->input;
    (param_1->zstream).next_out = param_3->output;
    (param_1->zstream).avail_out = 0x400;
    iVar4 = 0x400;
    ppVar10 = (png_compression_buffer *)&param_1->zbuffer_list;
    do {
      uVar2 = 0xffffffff;
      if (uVar6 < 0xffffffff) {
        uVar2 = uVar6;
      }
      uVar6 = uVar6 - uVar2;
      (param_1->zstream).avail_in = (uint)uVar2;
      ppVar3 = ppVar10;
      if ((param_1->zstream).avail_out == 0) {
        iVar1 = -4;
        if ((int)(iVar4 + param_4) < 0) break;
        ppVar3 = ppVar10->next;
        if (ppVar3 == (png_compression_buffer *)0x0) {
          ppVar3 = png_malloc_base(param_1,(ulonglong)param_1->zbuffer_size + 8);
          if (ppVar3 == (png_compression_buffer *)0x0) {
            iVar1 = -4;
            break;
          }
          ppVar3->next = (png_compression_buffer *)0x0;
          ppVar10->next = ppVar3;
        }
        (param_1->zstream).next_out = ppVar3->output;
        uVar5 = param_1->zbuffer_size;
        (param_1->zstream).avail_out = uVar5;
        iVar4 = iVar4 + uVar5;
      }
      iVar1 = deflate(&param_1->zstream,(ulonglong)(uVar6 == 0) << 2);
      uVar6 = (param_1->zstream).avail_in + uVar6;
      (param_1->zstream).avail_in = 0;
      ppVar10 = ppVar3;
    } while (iVar1 == 0);
    uVar5 = iVar4 - (param_1->zstream).avail_out;
    (param_1->zstream).avail_out = 0;
    param_3->output_len = uVar5;
    if (uVar5 + param_4 < 0x7fffffff) {
      png_zstream_error(param_1,iVar1);
      param_1->zowner = 0;
      if ((iVar1 == 1) && (uVar6 == 0)) {
        uVar2 = param_3->input_len;
        iVar1 = 0;
        if ((uVar2 < 0x4001) &&
           (bVar9 = param_3->output[0], (bVar9 & 0xf0) < 0x71 && (bVar9 & 0xf) == 8)) {
          bVar9 = bVar9 >> 4;
          uVar5 = (uint)bVar9;
          uVar8 = 0x80L << bVar9;
          if (uVar2 <= uVar8) {
            iVar4 = uVar5 * 0x1000 + 0x800;
            bVar9 = bVar9 << 4 | 8;
            do {
              uVar5 = uVar5 - 1;
              iVar4 = iVar4 + -0x1000;
              bVar9 = bVar9 - 0x10;
              if (uVar5 == 0) break;
              uVar8 = uVar8 >> 1 & 0x7fffffff;
            } while (uVar2 <= uVar8);
            param_3->output[0] = bVar9;
            uVar5 = param_3->output[1] & 0xffffffe0;
            uVar7 = (iVar4 + uVar5) / 0x1f;
            bVar9 = (byte)uVar5;
            param_3->output[1] = (((char)uVar7 - (char)(uVar7 << 5)) + bVar9 | bVar9) ^ 0x1f;
          }
        }
      }
    }
    else {
      (param_1->zstream).msg = "compressed data too long";
      param_1->zowner = 0;
      iVar1 = -4;
    }
  }
  return iVar1;
}

// png_write_sPLT @ 140dcb910

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl png_write_sPLT(png_struct_def_conflict *param_1,png_sPLT_struct *param_2)

{
  uchar *puVar1;
  ulong64 uVar2;
  uchar uVar3;
  code *pcVar4;
  ushort *puVar5;
  undefined4 uVar6;
  ushort uVar7;
  uint uVar8;
  int iVar9;
  png_sPLT_entry_struct *ppVar10;
  png_sPLT_entry_struct *ppVar11;
  ushort *puVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  png_sPLT_entry_struct *ppVar16;
  ushort *puVar17;
  png_sPLT_entry_struct *ppVar18;
  ushort uVar19;
  ushort uVar20;
  ushort uVar21;
  undefined1 auStack_d8 [32];
  undefined1 local_b8;
  undefined1 uStack_b7;
  undefined1 uStack_b6;
  undefined1 uStack_b5;
  undefined1 uStack_b4;
  undefined1 uStack_b3;
  undefined1 uStack_b2;
  undefined1 uStack_b1;
  undefined1 uStack_b0;
  undefined1 uStack_af;
  undefined1 uStack_ae;
  undefined1 uStack_ad;
  undefined1 uStack_ac;
  undefined1 uStack_ab;
  undefined1 uStack_aa;
  undefined1 uStack_a9;
  uint local_a8;
  png_sPLT_entry_struct local_a4;
  png_sPLT_entry_struct local_9a [8];
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_d8;
  uVar3 = param_2->depth;
  iVar9 = param_2->nentries;
  uVar8 = png_check_keyword(param_1,param_2->name,(uchar *)&local_9a[0].green);
  if (uVar8 == 0) {
                    /* WARNING: Subroutine does not return */
    png_error(param_1,"sPLT: invalid keyword");
  }
  if (param_1 == (png_struct_def_conflict *)0x0) {
    if (0 < (longlong)param_2->nentries) {
      ppVar11 = param_2->entries;
      ppVar18 = ppVar11 + param_2->nentries;
      if (param_2->depth == '\b') {
        do {
          uVar7 = ppVar11->red & ___xmm_00ff00ff00ff00ff00ff00ff00ff00ff;
          uVar19 = ppVar11->green & _UNK_1506e9ce2;
          uVar20 = ppVar11->blue & _UNK_1506e9ce4;
          uVar21 = ppVar11->alpha & _UNK_1506e9ce6;
          local_a4.red._1_1_ =
               (0 < (short)uVar19) * ((short)uVar19 < 0x100) * (char)uVar19 - (0xff < (short)uVar19)
          ;
          local_a4.red._0_1_ =
               (0 < (short)uVar7) * ((short)uVar7 < 0x100) * (char)uVar7 - (0xff < (short)uVar7);
          local_a4.green._0_1_ =
               (0 < (short)uVar20) * ((short)uVar20 < 0x100) * (char)uVar20 - (0xff < (short)uVar20)
          ;
          local_a4.green._1_1_ =
               (0 < (short)uVar21) * ((short)uVar21 < 0x100) * (char)uVar21 - (0xff < (short)uVar21)
          ;
          local_a4.blue = ppVar11->frequency << 8 | ppVar11->frequency >> 8;
          ppVar11 = ppVar11 + 1;
        } while (ppVar11 < ppVar18);
      }
      else {
        ppVar16 = ppVar11 + 1;
        ppVar10 = ppVar16;
        if (ppVar16 < ppVar18) {
          ppVar10 = ppVar18;
        }
        uVar14 = (ulonglong)(ppVar10 + -1 != ppVar11);
        uVar13 = ((longlong)(ppVar10 + -1) + (-uVar14 - (longlong)ppVar11)) / 10;
        if (0xe < uVar13 + uVar14) {
          if (ppVar16 < ppVar18) {
            ppVar16 = ppVar18;
          }
          uVar15 = (ulonglong)(ppVar16 + -1 != ppVar11);
          if (ppVar11 + ((longlong)(ppVar16 + -1) + (-uVar15 - (longlong)ppVar11)) / 10 + uVar15 + 1
              <= &local_a4 || local_9a <= ppVar11) {
            uVar14 = uVar13 + uVar14 + 1;
            uVar15 = uVar14 & 0xfffffffffffffff8;
            ppVar16 = ppVar11 + uVar15;
            uVar13 = uVar15;
            do {
              local_b8 = (undefined1)ppVar11[6].blue;
              uStack_b7 = *(undefined1 *)((longlong)&ppVar11[6].blue + 1);
              uStack_b6 = (undefined1)ppVar11[6].alpha;
              uStack_b5 = *(undefined1 *)((longlong)&ppVar11[6].alpha + 1);
              uStack_b4 = (undefined1)ppVar11[6].frequency;
              uStack_b3 = *(undefined1 *)((longlong)&ppVar11[6].frequency + 1);
              uStack_b2 = (undefined1)ppVar11[7].red;
              uStack_b1 = *(undefined1 *)((longlong)&ppVar11[7].red + 1);
              uStack_b0 = (undefined1)ppVar11[7].green;
              uStack_af = *(undefined1 *)((longlong)&ppVar11[7].green + 1);
              uStack_ae = (undefined1)ppVar11[7].blue;
              uStack_ad = *(undefined1 *)((longlong)&ppVar11[7].blue + 1);
              uStack_ac = (undefined1)ppVar11[7].alpha;
              uStack_ab = *(undefined1 *)((longlong)&ppVar11[7].alpha + 1);
              uStack_aa = (undefined1)ppVar11[7].frequency;
              uStack_a9 = *(undefined1 *)((longlong)&ppVar11[7].frequency + 1);
              ppVar11 = ppVar11 + 8;
              uVar13 = uVar13 - 8;
            } while (uVar13 != 0);
            local_a4.red._1_1_ = uStack_b2;
            local_a4.red._0_1_ = uStack_b1;
            local_a4.green._0_1_ = uStack_af;
            local_a4.green._1_1_ = uStack_b0;
            local_a4.blue._1_1_ = uStack_ae;
            local_a4.blue._0_1_ = uStack_ad;
            local_a4.alpha._0_1_ = uStack_ab;
            local_a4.alpha._1_1_ = uStack_ac;
            local_a4.frequency = CONCAT11(uStack_aa,uStack_a9);
            ppVar11 = ppVar16;
            if (uVar14 == uVar15) goto LAB_140dcbc69;
          }
        }
        do {
          local_a4.green = ppVar11->green << 8 | ppVar11->green >> 8;
          local_a4.red = ppVar11->red << 8 | ppVar11->red >> 8;
          local_a4.alpha = ppVar11->alpha << 8 | ppVar11->alpha >> 8;
          local_a4.blue = ppVar11->blue << 8 | ppVar11->blue >> 8;
          local_a4.frequency = ppVar11->frequency << 8 | ppVar11->frequency >> 8;
          ppVar11 = ppVar11 + 1;
        } while (ppVar11 < ppVar18);
      }
    }
LAB_140dcbc69:
    if (param_1 == (png_struct_def_conflict *)0x0) goto LAB_140dcbc97;
  }
  else {
    puVar1 = &param_2->depth;
    uVar2 = (ulonglong)(uVar3 != '\b') * 4 + 6;
    iVar9 = uVar8 + iVar9 * (int)uVar2 + 2;
    param_1->io_state = 0x22;
    local_a4.red._1_1_ = (char)((uint)iVar9 >> 0x10);
    local_a4.red._0_1_ = (char)((uint)iVar9 >> 0x18);
    local_a4.green._0_1_ = (char)((uint)iVar9 >> 8);
    local_a4.green._1_1_ = (char)iVar9;
    local_a4.blue = 0x5073;
    local_a4.alpha = 0x544c;
    png_write_data(param_1,(uchar *)&local_a4,8);
    param_1->chunk_name = 0x73504c54;
    png_reset_crc(param_1);
    png_calculate_crc(param_1,(uchar *)&local_a4.blue,4);
    param_1->io_state = 0x42;
    uVar8 = uVar8 + 1;
    if (uVar8 != 0) {
      png_write_data(param_1,(uchar *)&local_9a[0].green,(ulonglong)uVar8);
      png_calculate_crc(param_1,(uchar *)&local_9a[0].green,(ulonglong)uVar8);
    }
    png_write_data(param_1,puVar1,1);
    png_calculate_crc(param_1,puVar1,1);
    if (0 < param_2->nentries) {
      puVar17 = &param_2->entries->alpha;
      do {
        uVar6 = local_a4._0_4_;
        uVar7 = ((png_sPLT_entry_struct *)(puVar17 + -3))->red;
        if (*puVar1 == '\b') {
          local_a4.red._1_1_ = (char)puVar17[-2];
          local_a4.red._0_1_ = (char)uVar7;
          local_a4.green._1_1_ = SUB41(uVar6,3);
          local_a4.green._0_1_ = (char)puVar17[-1];
          uVar7 = *puVar17;
          ppVar18 = &local_a4;
          puVar12 = &local_a4.blue;
          puVar5 = &local_a4.blue;
        }
        else {
          local_a4.green = puVar17[-2] << 8 | puVar17[-2] >> 8;
          local_a4.red = uVar7 << 8 | uVar7 >> 8;
          uVar7 = *puVar17;
          local_a4.alpha._0_1_ = (char)(uVar7 >> 8);
          local_a4.blue = puVar17[-1] << 8 | puVar17[-1] >> 8;
          ppVar18 = (png_sPLT_entry_struct *)&local_a4.blue;
          puVar12 = &local_a4.frequency;
          puVar5 = &local_a4.frequency;
        }
        *(char *)((longlong)&ppVar18->green + 1) = (char)uVar7;
        uVar7 = puVar17[1];
        *(char *)puVar12 = (char)(uVar7 >> 8);
        *(char *)((longlong)puVar5 + 1) = (char)uVar7;
        png_write_data(param_1,(uchar *)&local_a4,uVar2);
        png_calculate_crc(param_1,(uchar *)&local_a4,uVar2);
        ppVar18 = (png_sPLT_entry_struct *)(puVar17 + 2);
        puVar17 = puVar17 + 5;
      } while (ppVar18 < param_2->entries + param_2->nentries);
      goto LAB_140dcbc69;
    }
  }
  param_1->io_state = 0x82;
  uVar8 = param_1->crc;
  local_a8 = uVar8 >> 0x18 | (uVar8 & 0xff0000) >> 8 | (uVar8 & 0xff00) << 8 | uVar8 << 0x18;
  png_write_data(param_1,(uchar *)&local_a8,4);
LAB_140dcbc97:
  if ((local_48 ^ (ulonglong)auStack_d8) != __security_cookie.value) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  return;
}

// png_write_sBIT @ 140dcbda0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
png_write_sBIT(png_struct_def_conflict *param_1,png_color_8_struct *param_2,int param_3)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  code *pcVar4;
  byte bVar5;
  ulong64 uVar6;
  undefined1 auStack_48 [44];
  byte local_1c [4];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_48;
  if ((param_3 & 2U) == 0) {
    bVar5 = param_2->gray;
    if ((bVar5 == 0) || (param_1->usr_bit_depth < bVar5)) goto LAB_140dcbe7d;
    uVar6 = 1;
    local_1c[0] = bVar5;
  }
  else {
    bVar5 = 8;
    if (param_3 != 3) {
      bVar5 = param_1->usr_bit_depth;
    }
    bVar1 = param_2->red;
    if (((bVar5 < bVar1 || bVar1 == 0) || (bVar2 = param_2->green, bVar5 < bVar2 || bVar2 == 0)) ||
       (bVar3 = param_2->blue, bVar5 < bVar3 || bVar3 == 0)) goto LAB_140dcbe7d;
    uVar6 = 3;
    local_1c[0] = bVar1;
    local_1c[1] = bVar2;
    local_1c[2] = bVar3;
  }
  if ((param_3 & 4U) != 0) {
    bVar5 = param_2->alpha;
    if ((bVar5 == 0) || (param_1->usr_bit_depth < bVar5)) {
LAB_140dcbe7d:
      png_warning(param_1,"Invalid sBIT depth specified");
      return;
    }
    local_1c[uVar6] = bVar5;
    uVar6 = uVar6 + 1;
  }
  png_write_complete_chunk(param_1,0x73424954,local_1c,uVar6);
  if ((local_18 ^ (ulonglong)auStack_48) == __security_cookie.value) {
    return;
  }
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}

// png_write_cHRM_fixed @ 140dcbee0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl png_write_cHRM_fixed(png_struct_def_conflict *param_1,png_xy *param_2)

{
  code *pcVar1;
  undefined1 auStack_68 [32];
  uchar local_48 [4];
  uchar local_44 [4];
  uchar local_40 [4];
  uchar local_3c [4];
  uchar local_38 [4];
  uchar local_34 [4];
  uchar local_30 [4];
  uchar local_2c [12];
  ulonglong local_20;
  
  local_20 = __security_cookie.value ^ (ulonglong)auStack_68;
  png_save_int_32(local_48,param_2->whitex);
  png_save_int_32(local_44,param_2->whitey);
  png_save_int_32(local_40,param_2->redx);
  png_save_int_32(local_3c,param_2->redy);
  png_save_int_32(local_38,param_2->greenx);
  png_save_int_32(local_34,param_2->greeny);
  png_save_int_32(local_30,param_2->bluex);
  png_save_int_32(local_2c,param_2->bluey);
  png_write_complete_chunk(param_1,0x6348524d,local_48,0x20);
  if ((local_20 ^ (ulonglong)auStack_68) == __security_cookie.value) {
    return;
  }
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

// png_write_tRNS @ 140dcbfb0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
png_write_tRNS(png_struct_def_conflict *param_1,uchar *param_2,png_color_16_struct *param_3,
              int param_4,int param_5)

{
  ushort uVar1;
  ushort uVar2;
  ushort uVar3;
  code *pcVar4;
  char *pcVar5;
  ulong64 uVar6;
  undefined1 auStack_48 [34];
  ushort local_26;
  ushort local_24;
  ushort local_22;
  ulonglong local_20;
  
  local_20 = __security_cookie.value ^ (ulonglong)auStack_48;
  if (param_5 == 0) {
    uVar1 = param_3->gray;
    if ((int)(uint)uVar1 < 1 << (param_1->bit_depth & 0x1f)) {
      local_26 = uVar1 << 8 | uVar1 >> 8;
      uVar6 = 2;
LAB_140dcc099:
      png_write_complete_chunk(param_1,0x74524e53,(uchar *)&local_26,uVar6);
      if ((local_20 ^ (ulonglong)auStack_48) == __security_cookie.value) {
        return;
      }
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    pcVar5 = "Ignoring attempt to write tRNS chunk out-of-range for bit_depth";
  }
  else if (param_5 == 2) {
    uVar1 = param_3->red;
    local_26 = uVar1 << 8 | uVar1 >> 8;
    uVar2 = param_3->green;
    local_24 = uVar2 << 8 | uVar2 >> 8;
    uVar3 = param_3->blue;
    local_22 = uVar3 << 8 | uVar3 >> 8;
    if ((param_1->bit_depth != '\b') ||
       (((char)(uVar2 >> 8) == '\0' && (char)(uVar1 >> 8) == '\0') && (char)(uVar3 >> 8) == '\0')) {
      uVar6 = 6;
      goto LAB_140dcc099;
    }
    pcVar5 = "Ignoring attempt to write 16-bit tRNS chunk when bit_depth is 8";
  }
  else if (param_5 == 3) {
    if ((0 < param_4) && ((uint)param_4 <= (uint)param_1->num_palette)) {
      png_write_complete_chunk(param_1,0x74524e53,param_2,(ulonglong)(uint)param_4);
      return;
    }
    pcVar5 = "Invalid number of transparent colors specified";
  }
  else {
    pcVar5 = "Can\'t write tRNS with an alpha channel";
  }
  png_app_warning(param_1,pcVar5);
  return;
}

// png_write_bKGD @ 140dcc120

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
png_write_bKGD(png_struct_def_conflict *param_1,png_color_16_struct *param_2,int param_3)

{
  ushort uVar1;
  ushort uVar2;
  ushort uVar3;
  code *pcVar4;
  byte bVar5;
  char *pcVar6;
  ulong64 uVar7;
  undefined1 auStack_48 [42];
  ushort local_1e;
  ushort local_1c;
  ushort local_1a;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_48;
  if (param_3 == 3) {
    if ((param_1->num_palette == 0) && ((param_1->mng_features_permitted & 1) != 0)) {
      bVar5 = param_2->index;
    }
    else {
      bVar5 = param_2->index;
      if (param_1->num_palette <= (ushort)bVar5) {
        pcVar6 = "Invalid background palette index";
        goto LAB_140dcc246;
      }
    }
    local_1e = CONCAT11(local_1e._1_1_,bVar5);
    uVar7 = 1;
  }
  else if ((param_3 & 2U) == 0) {
    uVar1 = param_2->gray;
    if (1 << (param_1->bit_depth & 0x1f) <= (int)(uint)uVar1) {
      pcVar6 = "Ignoring attempt to write bKGD chunk out-of-range for bit_depth";
      goto LAB_140dcc246;
    }
    local_1e = uVar1 << 8 | uVar1 >> 8;
    uVar7 = 2;
  }
  else {
    uVar1 = param_2->red;
    local_1e = uVar1 << 8 | uVar1 >> 8;
    uVar2 = param_2->green;
    local_1c = uVar2 << 8 | uVar2 >> 8;
    uVar3 = param_2->blue;
    local_1a = uVar3 << 8 | uVar3 >> 8;
    if ((param_1->bit_depth == '\b') &&
       (((char)(uVar2 >> 8) != '\0' || (char)(uVar1 >> 8) != '\0') || (char)(uVar3 >> 8) != '\0')) {
      pcVar6 = "Ignoring attempt to write 16-bit bKGD chunk when bit_depth is 8";
LAB_140dcc246:
      png_warning(param_1,pcVar6);
      return;
    }
    uVar7 = 6;
  }
  png_write_complete_chunk(param_1,0x624b4744,(uchar *)&local_1e,uVar7);
  if ((local_18 ^ (ulonglong)auStack_48) != __security_cookie.value) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  return;
}

// png_write_eXIf @ 140dcc2a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl png_write_eXIf(png_struct_def_conflict *param_1,uchar *param_2,int param_3)

{
  uint uVar1;
  code *pcVar2;
  ulonglong uVar3;
  undefined1 auStack_68 [47];
  uchar local_39;
  undefined4 local_38;
  uchar local_34 [4];
  ulonglong local_30;
  
  local_30 = __security_cookie.value ^ (ulonglong)auStack_68;
  if (param_1 == (png_struct_def_conflict *)0x0) {
    if (0 < param_3) {
      local_39 = param_2[(ulonglong)(uint)param_3 - 1];
    }
LAB_140dcc394:
    if (param_1 == (png_struct_def_conflict *)0x0) goto LAB_140dcc3c2;
  }
  else {
    param_1->io_state = 0x22;
    local_38 = CONCAT13((char)param_3,
                        CONCAT12((char)((uint)param_3 >> 8),
                                 CONCAT11((char)((uint)param_3 >> 0x10),
                                          (char)((uint)param_3 >> 0x18))));
    builtin_memcpy(local_34,"eXIf",4);
    png_write_data(param_1,(uchar *)&local_38,8);
    param_1->chunk_name = 0x65584966;
    png_reset_crc(param_1);
    png_calculate_crc(param_1,local_34,4);
    param_1->io_state = 0x42;
    if (0 < param_3) {
      uVar3 = 0;
      do {
        local_39 = param_2[uVar3];
        png_write_data(param_1,&local_39,1);
        png_calculate_crc(param_1,&local_39,1);
        uVar3 = uVar3 + 1;
      } while ((uint)param_3 != uVar3);
      goto LAB_140dcc394;
    }
  }
  param_1->io_state = 0x82;
  uVar1 = param_1->crc;
  local_38 = uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
  png_write_data(param_1,(uchar *)&local_38,4);
LAB_140dcc3c2:
  if ((local_30 ^ (ulonglong)auStack_68) != __security_cookie.value) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  return;
}

// png_write_hIST @ 140dcc3f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl png_write_hIST(png_struct_def_conflict *param_1,ushort *param_2,int param_3)

{
  uint uVar1;
  code *pcVar2;
  ulonglong uVar3;
  undefined1 auStack_68 [45];
  ushort local_3b;
  uint local_38;
  uchar local_34 [4];
  ulonglong local_30;
  
  local_30 = __security_cookie.value ^ (ulonglong)auStack_68;
  if ((int)(uint)param_1->num_palette < param_3) {
    png_warning(param_1,"Invalid number of histogram entries specified");
    return;
  }
  param_1->io_state = 0x22;
  local_38 = CONCAT13((char)param_3 * '\x02',
                      CONCAT12((char)((uint)param_3 >> 7),
                               CONCAT11((char)((uint)param_3 >> 0xf),(char)((uint)param_3 >> 0x17)))
                     );
  builtin_memcpy(local_34,"hIST",4);
  png_write_data(param_1,(uchar *)&local_38,8);
  param_1->chunk_name = 0x68495354;
  png_reset_crc(param_1);
  png_calculate_crc(param_1,local_34,4);
  param_1->io_state = 0x42;
  if (0 < param_3) {
    uVar3 = 0;
    do {
      local_3b = param_2[uVar3] << 8 | param_2[uVar3] >> 8;
      png_write_data(param_1,(uchar *)&local_3b,2);
      png_calculate_crc(param_1,(uchar *)&local_3b,2);
      uVar3 = uVar3 + 1;
    } while ((uint)param_3 != uVar3);
  }
  param_1->io_state = 0x82;
  uVar1 = param_1->crc;
  local_38 = uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
  png_write_data(param_1,(uchar *)&local_38,4);
  if ((local_30 ^ (ulonglong)auStack_68) == __security_cookie.value) {
    return;
  }
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

// png_write_tEXt @ 140dcc570

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
png_write_tEXt(png_struct_def_conflict *param_1,char *param_2,char *param_3,ulong64 param_4)

{
  code *pcVar1;
  uint uVar2;
  int iVar3;
  ulong64 uVar4;
  undefined1 auStack_a8 [32];
  uchar local_88 [80];
  undefined4 local_38;
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = __security_cookie.value ^ (ulonglong)auStack_a8;
  uVar2 = png_check_keyword(param_1,param_2,local_88);
  if (uVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    png_error(param_1,"tEXt: invalid keyword");
  }
  if (param_3 == (char *)0x0) {
    uVar4 = 0;
  }
  else if (*param_3 == '\0') {
    uVar4 = 0;
  }
  else {
    uVar4 = strlen(param_3);
    if (0x7ffffffe - uVar2 < uVar4) {
                    /* WARNING: Subroutine does not return */
      png_error(param_1,"tEXt: text too long");
    }
  }
  if (param_1 != (png_struct_def_conflict *)0x0) {
    iVar3 = uVar2 + 1 + (int)uVar4;
    param_1->io_state = 0x22;
    local_38 = CONCAT13((char)iVar3,
                        CONCAT12((char)((uint)iVar3 >> 8),
                                 CONCAT11((char)((uint)iVar3 >> 0x10),(char)((uint)iVar3 >> 0x18))))
    ;
    local_34 = 0x74584574;
    png_write_data(param_1,(uchar *)&local_38,8);
    param_1->chunk_name = 0x74455874;
    png_reset_crc(param_1);
    png_calculate_crc(param_1,(uchar *)&local_34,4);
    param_1->io_state = 0x42;
    uVar2 = uVar2 + 1;
    if (uVar2 != 0) {
      png_write_data(param_1,local_88,(ulonglong)uVar2);
      png_calculate_crc(param_1,local_88,(ulonglong)uVar2);
    }
    if ((param_3 != (char *)0x0 && param_1 != (png_struct_def_conflict *)0x0) && uVar4 != 0) {
      png_write_data(param_1,(uchar *)param_3,uVar4);
      png_calculate_crc(param_1,(uchar *)param_3,uVar4);
    }
    param_1->io_state = 0x82;
    uVar2 = param_1->crc;
    local_38 = uVar2 >> 0x18 | (uVar2 & 0xff0000) >> 8 | (uVar2 & 0xff00) << 8 | uVar2 << 0x18;
    png_write_data(param_1,(uchar *)&local_38,4);
  }
  if ((local_30 ^ (ulonglong)auStack_a8) != __security_cookie.value) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  return;
}

// png_write_zTXt @ 140dcc730

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
png_write_zTXt(png_struct_def_conflict *param_1,char *param_2,char *param_3,int param_4)

{
  code *pcVar1;
  uint uVar2;
  int iVar3;
  longlong *plVar4;
  uint uVar5;
  uchar *puVar6;
  undefined4 in_register_0000008c;
  png_compression_buffer *ppVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  undefined1 auStack_4d8 [40];
  compression_state local_4b0;
  uchar local_98 [88];
  undefined4 local_40;
  uchar local_3c [4];
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_4d8;
  if (param_4 != 0) {
    if (param_4 != -1) {
                    /* WARNING: Subroutine does not return */
      png_error(param_1,"zTXt: invalid compression type");
    }
    png_write_tEXt(param_1,param_2,param_3,CONCAT44(in_register_0000008c,param_4));
    return;
  }
  uVar2 = png_check_keyword(param_1,param_2,local_98);
  if (uVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    png_error(param_1,"zTXt: invalid keyword");
  }
  local_98[uVar2 + 1] = '\0';
  uVar2 = uVar2 + 2;
  if (param_3 == (char *)0x0) {
    local_4b0.input_len = 0;
  }
  else {
    local_4b0.input_len = strlen(param_3);
  }
  local_4b0.output_len = 0;
  local_4b0.input = (uchar *)param_3;
  iVar3 = png_text_compress(param_1,0x7a545874,&local_4b0,uVar2);
  if (iVar3 != 0) {
                    /* WARNING: Subroutine does not return */
    png_error(param_1,(param_1->zstream).msg);
  }
  if (param_1 == (png_struct_def_conflict *)0x0) {
    if (_DAT_000001d0 == (longlong *)0x0 || local_4b0.output_len < 0x401) {
      if (0x400 < local_4b0.output_len) goto LAB_140dcca07;
      goto LAB_140dcc9b0;
    }
    uVar2 = local_4b0.output_len - 0x400;
    plVar4 = _DAT_000001d0;
    do {
      bVar8 = uVar2 < _DAT_000001d8;
      uVar2 = uVar2 - _DAT_000001d8;
      bVar10 = uVar2 == 0;
      if (bVar8) {
        uVar2 = 0;
      }
      bVar9 = bVar8 || bVar10;
    } while ((!bVar8 && !bVar10) && (plVar4 = (longlong *)*plVar4, plVar4 != (longlong *)0x0));
  }
  else {
    iVar3 = local_4b0.output_len + uVar2;
    param_1->io_state = 0x22;
    local_40 = CONCAT13((char)iVar3,
                        CONCAT12((char)((uint)iVar3 >> 8),
                                 CONCAT11((char)((uint)iVar3 >> 0x10),(char)((uint)iVar3 >> 0x18))))
    ;
    builtin_memcpy(local_3c,"zTXt",4);
    png_write_data(param_1,(uchar *)&local_40,8);
    param_1->chunk_name = 0x7a545874;
    png_reset_crc(param_1);
    png_calculate_crc(param_1,local_3c,4);
    param_1->io_state = 0x42;
    if (uVar2 != 0) {
      png_write_data(param_1,local_98,(ulonglong)uVar2);
      png_calculate_crc(param_1,local_98,(ulonglong)uVar2);
    }
    ppVar7 = (png_compression_buffer *)&param_1->zbuffer_list;
    uVar2 = 0x400;
    puVar6 = local_4b0.output;
    uVar5 = local_4b0.output_len;
    while( true ) {
      ppVar7 = ppVar7->next;
      if (uVar5 <= uVar2) {
        uVar2 = uVar5;
      }
      if (uVar2 != 0) {
        png_write_data(param_1,puVar6,(ulonglong)uVar2);
        png_calculate_crc(param_1,puVar6,(ulonglong)uVar2);
      }
      uVar5 = uVar5 - uVar2;
      bVar9 = uVar5 == 0;
      if ((bVar9) || (ppVar7 == (png_compression_buffer *)0x0)) break;
      uVar2 = param_1->zbuffer_size;
      puVar6 = ppVar7->output;
    }
  }
  if (!bVar9) {
LAB_140dcca07:
                    /* WARNING: Subroutine does not return */
    png_error(param_1,"error writing ancillary chunked compressed data");
  }
  if (param_1 != (png_struct_def_conflict *)0x0) {
    param_1->io_state = 0x82;
    uVar2 = param_1->crc;
    local_40 = uVar2 >> 0x18 | (uVar2 & 0xff0000) >> 8 | (uVar2 & 0xff00) << 8 | uVar2 << 0x18;
    png_write_data(param_1,(uchar *)&local_40,4);
  }
LAB_140dcc9b0:
  if ((local_38 ^ (ulonglong)auStack_4d8) != __security_cookie.value) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  return;
}

// png_write_iTXt @ 140dcca20

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
png_write_iTXt(png_struct_def_conflict *param_1,int param_2,char *param_3,char *param_4,
              char *param_5,char *param_6)

{
  code *pcVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  size_t sVar6;
  longlong *plVar7;
  ulong64 uVar8;
  uint uVar9;
  uchar *puVar10;
  ulonglong uVar11;
  ulong64 uVar12;
  png_compression_buffer *ppVar13;
  bool bVar14;
  bool bVar15;
  bool bVar16;
  undefined1 auStack_4e8 [32];
  uchar *local_4c8;
  compression_state local_4c0;
  uchar local_a8 [88];
  undefined4 local_50;
  uchar local_4c [4];
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_4e8;
  uVar3 = png_check_keyword(param_1,param_3,local_a8);
  if (uVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    png_error(param_1,"iTXt: invalid keyword");
  }
  uVar9 = param_2 + 1;
  if (3 < uVar9) {
                    /* WARNING: Subroutine does not return */
    png_error(param_1,"iTXt: invalid compression");
  }
  local_a8[uVar3 + 1] = (uchar)(0x1000100 >> ((char)uVar9 * '\b' & 0x1fU));
  local_a8[uVar3 + 2] = '\0';
  if (param_4 == (char *)0x0) {
    param_4 = "";
  }
  local_4c8 = (uchar *)param_4;
  sVar6 = strlen(param_4);
  uVar8 = sVar6 + 1;
  if (param_5 == (char *)0x0) {
    param_5 = "";
  }
  sVar6 = strlen(param_5);
  uVar12 = sVar6 + 1;
  if (param_6 == (char *)0x0) {
    param_6 = "";
  }
  uVar4 = uVar3 + 3 + (int)uVar8;
  if (0x7ffffffc - uVar3 < uVar8) {
    uVar4 = 0x7fffffff;
  }
  uVar2 = uVar4 + (int)uVar12;
  if ((uVar4 ^ 0x7fffffff) < uVar12) {
    uVar2 = 0x7fffffff;
  }
  local_4c0.input_len = strlen(param_6);
  local_4c0.output_len = 0;
  local_4c0.input = (uchar *)param_6;
  if ((uVar9 & 1) == 0) {
    if ((uVar2 ^ 0x7fffffff) < local_4c0.input_len) {
                    /* WARNING: Subroutine does not return */
      png_error(param_1,"iTXt: uncompressed text too long");
    }
    local_4c0.output_len = (uint)local_4c0.input_len;
    if (param_1 == (png_struct_def_conflict *)0x0) goto LAB_140dccd98;
  }
  else {
    iVar5 = png_text_compress(param_1,0x69545874,&local_4c0,uVar2);
    if (iVar5 != 0) {
                    /* WARNING: Subroutine does not return */
      png_error(param_1,(param_1->zstream).msg);
    }
    if (param_1 == (png_struct_def_conflict *)0x0) {
      bVar14 = local_4c0.output_len < 0x401;
      if (_DAT_000001d0 != (longlong *)0x0 && !bVar14) {
        uVar3 = local_4c0.output_len - 0x400;
        plVar7 = _DAT_000001d0;
        do {
          bVar15 = uVar3 < _DAT_000001d8;
          uVar3 = uVar3 - _DAT_000001d8;
          bVar16 = uVar3 == 0;
          if (bVar15) {
            uVar3 = 0;
          }
          bVar14 = bVar15 || bVar16;
        } while ((!bVar15 && !bVar16) && (plVar7 = (longlong *)*plVar7, plVar7 != (longlong *)0x0));
      }
      if (bVar14) goto LAB_140dccd98;
      goto LAB_140dcce02;
    }
  }
  iVar5 = uVar2 + local_4c0.output_len;
  uVar3 = uVar3 + 3;
  param_1->io_state = 0x22;
  local_50 = CONCAT13((char)iVar5,
                      CONCAT12((char)((uint)iVar5 >> 8),
                               CONCAT11((char)((uint)iVar5 >> 0x10),(char)((uint)iVar5 >> 0x18))));
  builtin_memcpy(local_4c,"iTXt",4);
  png_write_data(param_1,(uchar *)&local_50,8);
  param_1->chunk_name = 0x69545874;
  png_reset_crc(param_1);
  png_calculate_crc(param_1,local_4c,4);
  param_1->io_state = 0x42;
  if (uVar3 != 0) {
    png_write_data(param_1,local_a8,(ulonglong)uVar3);
    png_calculate_crc(param_1,local_a8,(ulonglong)uVar3);
  }
  puVar10 = local_4c8;
  if (uVar8 != 0) {
    png_write_data(param_1,local_4c8,uVar8);
    png_calculate_crc(param_1,puVar10,uVar8);
  }
  if (uVar12 != 0) {
    png_write_data(param_1,(uchar *)param_5,uVar12);
    png_calculate_crc(param_1,(uchar *)param_5,uVar12);
  }
  if ((uVar9 & 1) == 0) {
    uVar11 = (ulonglong)local_4c0.output_len;
    if (uVar11 != 0) {
      png_write_data(param_1,(uchar *)param_6,uVar11);
      png_calculate_crc(param_1,(uchar *)param_6,uVar11);
    }
  }
  else {
    ppVar13 = (png_compression_buffer *)&param_1->zbuffer_list;
    uVar3 = 0x400;
    puVar10 = local_4c0.output;
    uVar9 = local_4c0.output_len;
    while( true ) {
      ppVar13 = ppVar13->next;
      if (uVar9 <= uVar3) {
        uVar3 = uVar9;
      }
      if (uVar3 != 0) {
        png_write_data(param_1,puVar10,(ulonglong)uVar3);
        png_calculate_crc(param_1,puVar10,(ulonglong)uVar3);
      }
      uVar9 = uVar9 - uVar3;
      if ((uVar9 == 0) || (ppVar13 == (png_compression_buffer *)0x0)) break;
      uVar3 = param_1->zbuffer_size;
      puVar10 = ppVar13->output;
    }
    if (uVar9 != 0) {
LAB_140dcce02:
                    /* WARNING: Subroutine does not return */
      png_error(param_1,"error writing ancillary chunked compressed data");
    }
  }
  param_1->io_state = 0x82;
  uVar3 = param_1->crc;
  local_50 = uVar3 >> 0x18 | (uVar3 & 0xff0000) >> 8 | (uVar3 & 0xff00) << 8 | uVar3 << 0x18;
  png_write_data(param_1,(uchar *)&local_50,4);
LAB_140dccd98:
  if ((local_48 ^ (ulonglong)auStack_4e8) != __security_cookie.value) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  return;
}

// png_write_oFFs @ 140dcce20

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl png_write_oFFs(png_struct_def_conflict *param_1,int param_2,int param_3,int param_4)

{
  code *pcVar1;
  undefined1 auStack_68 [47];
  uchar local_39 [4];
  uchar local_35 [4];
  undefined1 local_31;
  ulonglong local_30;
  
  local_30 = __security_cookie.value ^ (ulonglong)auStack_68;
  if (1 < param_4) {
    png_warning(param_1,"Unrecognized unit type for oFFs chunk");
  }
  png_save_int_32(local_39,param_2);
  png_save_int_32(local_35,param_3);
  local_31 = (char)param_4;
  png_write_complete_chunk(param_1,0x6f464673,local_39,9);
  if ((local_30 ^ (ulonglong)auStack_68) == __security_cookie.value) {
    return;
  }
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

// png_write_pCAL @ 140dccec0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
png_write_pCAL(png_struct_def_conflict *param_1,char *param_2,int param_3,int param_4,int param_5,
              int param_6,char *param_7,char **param_8)

{
  uchar *puVar1;
  code *pcVar2;
  uint uVar3;
  size_t sVar4;
  void *pvVar5;
  longlong lVar6;
  undefined4 uVar7;
  ulong64 uVar8;
  ulonglong uVar10;
  ulonglong uVar11;
  undefined1 auStack_e8 [40];
  int local_c0;
  int local_bc;
  ulong64 local_b8;
  uint local_ac;
  uchar local_a8 [86];
  uchar local_52;
  undefined1 local_51;
  undefined1 local_50;
  undefined1 local_4f;
  uchar local_4e [5];
  undefined1 local_49;
  ulonglong local_48;
  longlong lVar9;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_e8;
  if (3 < param_5) {
                    /* WARNING: Subroutine does not return */
    png_error(param_1,"Unrecognized equation type for pCAL chunk");
  }
  uVar3 = png_check_keyword(param_1,param_2,local_a8);
  if (uVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    png_error(param_1,"pCAL: invalid keyword");
  }
  uVar10 = (ulonglong)(uVar3 + 1);
  local_c0 = param_3;
  local_bc = param_4;
  sVar4 = strlen(param_7);
  uVar8 = (param_6 != 0) + sVar4;
  pvVar5 = png_malloc(param_1,(longlong)param_6 * 8);
  lVar9 = uVar8 + uVar10 + 10;
  uVar7 = (undefined4)lVar9;
  local_b8 = uVar8;
  if (0 < param_6) {
    uVar11 = 0;
    do {
      sVar4 = strlen(param_8[uVar11]);
      lVar6 = (param_6 - 1 != uVar11) + sVar4;
      *(longlong *)((longlong)pvVar5 + uVar11 * 8) = lVar6;
      lVar9 = lVar9 + lVar6;
      uVar7 = (undefined4)lVar9;
      uVar11 = uVar11 + 1;
    } while ((uint)param_6 != uVar11);
  }
  if (param_1 != (png_struct_def_conflict *)0x0) {
    param_1->io_state = 0x22;
    local_52 = (uchar)((uint)uVar7 >> 0x18);
    local_51 = (undefined1)((uint)uVar7 >> 0x10);
    local_50 = (undefined1)((uint)uVar7 >> 8);
    local_4f = (undefined1)uVar7;
    builtin_memcpy(local_4e,"pCAL",4);
    png_write_data(param_1,&local_52,8);
    param_1->chunk_name = 0x7043414c;
    png_reset_crc(param_1);
    png_calculate_crc(param_1,local_4e,4);
    param_1->io_state = 0x42;
    if (uVar10 != 0) {
      png_write_data(param_1,local_a8,uVar10);
      png_calculate_crc(param_1,local_a8,uVar10);
    }
  }
  png_save_int_32(&local_52,local_c0);
  png_save_int_32(local_4e,local_bc);
  local_4e[4] = (uchar)param_5;
  local_49 = (undefined1)param_6;
  if (param_1 == (png_struct_def_conflict *)0x0) {
LAB_140dcd159:
    png_free(param_1,pvVar5);
  }
  else {
    png_write_data(param_1,&local_52,10);
    png_calculate_crc(param_1,&local_52,10);
    uVar8 = local_b8;
    if (local_b8 != 0 && param_7 != (char *)0x0) {
      png_write_data(param_1,(uchar *)param_7,local_b8);
      png_calculate_crc(param_1,(uchar *)param_7,uVar8);
    }
    if (0 < param_6) {
      if (param_1 == (png_struct_def_conflict *)0x0) goto LAB_140dcd159;
      uVar10 = 0;
      do {
        uVar8 = *(ulong64 *)((longlong)pvVar5 + uVar10 * 8);
        if ((uVar8 != 0) && (puVar1 = (uchar *)param_8[uVar10], puVar1 != (uchar *)0x0)) {
          png_write_data(param_1,puVar1,uVar8);
          png_calculate_crc(param_1,puVar1,uVar8);
        }
        uVar10 = uVar10 + 1;
      } while ((uint)param_6 != uVar10);
    }
    png_free(param_1,pvVar5);
    if (param_1 != (png_struct_def_conflict *)0x0) {
      param_1->io_state = 0x82;
      uVar3 = param_1->crc;
      local_ac = uVar3 >> 0x18 | (uVar3 & 0xff0000) >> 8 | (uVar3 & 0xff00) << 8 | uVar3 << 0x18;
      png_write_data(param_1,(uchar *)&local_ac,4);
    }
  }
  if ((local_48 ^ (ulonglong)auStack_e8) == __security_cookie.value) {
    return;
  }
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

// png_write_sCAL_s @ 140dcd200

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
png_write_sCAL_s(png_struct_def_conflict *param_1,int param_2,char *param_3,char *param_4)

{
  code *pcVar1;
  size_t sVar2;
  size_t _Size;
  ulonglong uVar3;
  undefined1 auStack_a8 [32];
  uchar local_88;
  undefined1 local_87;
  undefined1 auStack_86 [70];
  ulonglong local_40;
  
  local_40 = __security_cookie.value ^ (ulonglong)auStack_a8;
  sVar2 = strlen(param_3);
  _Size = strlen(param_4);
  uVar3 = sVar2 + _Size + 2;
  if (0x40 < uVar3) {
    png_warning(param_1,"Can\'t write sCAL (buffer too small)");
    return;
  }
  local_88 = (uchar)param_2;
  memcpy(&local_87,param_3,sVar2 + 1);
  memcpy(auStack_86 + sVar2,param_4,_Size);
  png_write_complete_chunk(param_1,0x7343414c,&local_88,uVar3);
  if ((local_40 ^ (ulonglong)auStack_a8) == __security_cookie.value) {
    return;
  }
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

// png_write_pHYs @ 140dcd2f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl png_write_pHYs(png_struct_def_conflict *param_1,uint param_2,uint param_3,int param_4)

{
  code *pcVar1;
  undefined1 auStack_58 [39];
  uchar local_31;
  undefined1 local_30;
  undefined1 local_2f;
  undefined1 local_2e;
  undefined1 local_2d;
  undefined1 local_2c;
  undefined1 local_2b;
  undefined1 local_2a;
  undefined1 local_29;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_58;
  if (1 < param_4) {
    png_warning(param_1,"Unrecognized unit type for pHYs chunk");
  }
  local_31 = (uchar)(param_2 >> 0x18);
  local_30 = (undefined1)(param_2 >> 0x10);
  local_2f = (undefined1)(param_2 >> 8);
  local_2e = (undefined1)param_2;
  local_2d = (undefined1)(param_3 >> 0x18);
  local_2c = (undefined1)(param_3 >> 0x10);
  local_2b = (undefined1)(param_3 >> 8);
  local_2a = (undefined1)param_3;
  local_29 = (char)param_4;
  png_write_complete_chunk(param_1,0x70485973,&local_31,9);
  if ((local_28 ^ (ulonglong)auStack_58) == __security_cookie.value) {
    return;
  }
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

// png_write_tIME @ 140dcd3a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl png_write_tIME(png_struct_def_conflict *param_1,png_time_struct *param_2)

{
  code *pcVar1;
  undefined1 auStack_48 [33];
  uchar local_27;
  undefined1 local_26;
  uchar local_25;
  uchar local_24;
  byte local_23;
  uchar local_22;
  byte local_21;
  ulonglong local_20;
  
  local_20 = __security_cookie.value ^ (ulonglong)auStack_48;
  local_25 = param_2->month;
  if ((((0xf3 < (byte)(local_25 - 0xd)) && (local_24 = param_2->day, 0xe0 < (byte)(local_24 - 0x20))
       ) && (local_23 = param_2->hour, local_23 < 0x18)) &&
     (local_21 = param_2->second, local_21 < 0x3d)) {
    local_27 = (uchar)(param_2->year >> 8);
    local_26 = (undefined1)param_2->year;
    local_22 = param_2->minute;
    png_write_complete_chunk(param_1,0x74494d45,&local_27,7);
    if ((local_20 ^ (ulonglong)auStack_48) == __security_cookie.value) {
      return;
    }
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  png_warning(param_1,"Invalid time specified for tIME chunk");
  return;
}

// png_write_start_row @ 140dcd480

void __cdecl png_write_start_row(png_struct_def_conflict *param_1)

{
  byte bVar1;
  uint uVar2;
  uchar *puVar3;
  byte bVar4;
  ulonglong uVar5;
  ulong64 uVar6;
  
  uVar2 = (uint)param_1->usr_bit_depth * (uint)param_1->usr_channels;
  if (uVar2 < 8) {
    uVar5 = (ulonglong)param_1->width * (ulonglong)uVar2 + 7 >> 3;
  }
  else {
    uVar5 = (ulonglong)param_1->width * (ulonglong)(uVar2 >> 3);
  }
  uVar6 = uVar5 + 1;
  param_1->transformed_pixel_depth = param_1->pixel_depth;
  param_1->maximum_pixel_depth = (uchar)uVar2;
  puVar3 = png_malloc(param_1,uVar6);
  param_1->row_buf = puVar3;
  *puVar3 = '\0';
  bVar4 = param_1->do_filter & 0x1f;
  if (param_1->height != 1) {
    bVar4 = param_1->do_filter;
  }
  bVar1 = bVar4 & 0x2f;
  if (param_1->width != 1) {
    bVar1 = bVar4;
  }
  bVar4 = 8;
  if (bVar1 != 0) {
    bVar4 = bVar1;
  }
  param_1->do_filter = bVar4;
  if (0xf < bVar4) {
    if (param_1->try_row == (uchar *)0x0) {
      puVar3 = png_malloc(param_1,uVar6);
      param_1->try_row = puVar3;
      if (1 < (byte)((((bVar4 >> 5 & 1) != 0) - ((char)bVar4 >> 7)) + (bVar4 >> 4 & 1) +
                    ((bVar4 >> 6 & 1) != 0))) {
        puVar3 = png_malloc(param_1,uVar6);
        param_1->tst_row = puVar3;
      }
    }
    if (0x1f < bVar4) {
      puVar3 = png_calloc(param_1,uVar6);
      param_1->prev_row = puVar3;
    }
  }
  if (param_1->interlaced == '\0') {
    uVar2 = param_1->width;
    param_1->num_rows = param_1->height;
  }
  else if ((param_1->transformations & 2) == 0) {
    param_1->num_rows = param_1->height + 7 >> 3;
    uVar2 = param_1->width + 7 >> 3;
  }
  else {
    param_1->num_rows = param_1->height;
    uVar2 = param_1->width;
  }
  param_1->usr_width = uVar2;
  return;
}

// png_write_finish_row @ 140dcd600

void __cdecl png_write_finish_row(png_struct_def_conflict *param_1)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  uint uVar4;
  ulonglong uVar5;
  uint uVar6;
  byte bVar7;
  
  uVar4 = param_1->row_number + 1;
  param_1->row_number = uVar4;
  if (uVar4 < param_1->num_rows) {
    return;
  }
  if (param_1->interlaced != '\0') {
    param_1->row_number = 0;
    bVar1 = param_1->pass;
    if ((param_1->transformations & 2) == 0) {
      bVar7 = bVar1 + 1;
      if (bVar7 < 7) {
        bVar2 = "\b\b\x04\x04\x02\x02\x01"[bVar7];
        uVar6 = ~(uint)""[bVar7] + param_1->width + (uint)bVar2;
        param_1->usr_width = uVar6 / bVar2;
        bVar3 = "\b\b\b\x04\x04\x02\x02"[bVar7];
        uVar4 = ~(uint)""[bVar7] + param_1->height + (uint)bVar3;
        param_1->num_rows = uVar4 / bVar3;
        if (((uVar6 < bVar2) || (uVar4 < bVar3)) && (bVar7 = bVar1 + 2, bVar7 < 7)) {
          bVar2 = "\b\b\x04\x04\x02\x02\x01"[bVar7];
          uVar6 = ~(uint)""[bVar7] + param_1->width + (uint)bVar2;
          param_1->usr_width = uVar6 / bVar2;
          bVar3 = "\b\b\b\x04\x04\x02\x02"[bVar7];
          uVar4 = ~(uint)""[bVar7] + param_1->height + (uint)bVar3;
          param_1->num_rows = uVar4 / bVar3;
          if (((uVar6 < bVar2) || (uVar4 < bVar3)) && (bVar7 = bVar1 + 3, bVar7 < 7)) {
            bVar2 = "\b\b\x04\x04\x02\x02\x01"[bVar7];
            uVar6 = ~(uint)""[bVar7] + param_1->width + (uint)bVar2;
            param_1->usr_width = uVar6 / bVar2;
            bVar3 = "\b\b\b\x04\x04\x02\x02"[bVar7];
            uVar4 = ~(uint)""[bVar7] + param_1->height + (uint)bVar3;
            param_1->num_rows = uVar4 / bVar3;
            if (((uVar6 < bVar2) || (uVar4 < bVar3)) && (bVar7 = bVar1 + 4, bVar7 < 7)) {
              bVar2 = "\b\b\x04\x04\x02\x02\x01"[bVar7];
              uVar6 = ~(uint)""[bVar7] + param_1->width + (uint)bVar2;
              param_1->usr_width = uVar6 / bVar2;
              bVar3 = "\b\b\b\x04\x04\x02\x02"[bVar7];
              uVar4 = ~(uint)""[bVar7] + param_1->height + (uint)bVar3;
              param_1->num_rows = uVar4 / bVar3;
              if (((uVar6 < bVar2) || (uVar4 < bVar3)) && (bVar7 = bVar1 + 5, bVar7 < 7)) {
                bVar2 = "\b\b\x04\x04\x02\x02\x01"[bVar7];
                uVar6 = ~(uint)""[bVar7] + param_1->width + (uint)bVar2;
                param_1->usr_width = uVar6 / bVar2;
                bVar3 = "\b\b\b\x04\x04\x02\x02"[bVar7];
                uVar4 = ~(uint)""[bVar7] + param_1->height + (uint)bVar3;
                param_1->num_rows = uVar4 / bVar3;
                if (((uVar6 < bVar2) || (uVar4 < bVar3)) && (bVar7 = bVar1 + 6, bVar7 < 7)) {
                  bVar2 = "\b\b\x04\x04\x02\x02\x01"[bVar7];
                  uVar6 = ~(uint)""[bVar7] + param_1->width + (uint)bVar2;
                  param_1->usr_width = uVar6 / bVar2;
                  bVar3 = "\b\b\b\x04\x04\x02\x02"[bVar7];
                  uVar4 = ~(uint)""[bVar7] + param_1->height + (uint)bVar3;
                  param_1->num_rows = uVar4 / bVar3;
                  if (((uVar6 < bVar2) || (uVar4 < bVar3)) && (bVar7 = bVar1 + 7, 0xf8 < bVar1)) {
                    bVar2 = "\b\b\x04\x04\x02\x02\x01"[bVar7];
                    uVar6 = ~(uint)""[bVar7] + param_1->width + (uint)bVar2;
                    param_1->usr_width = uVar6 / bVar2;
                    bVar3 = "\b\b\b\x04\x04\x02\x02"[bVar7];
                    uVar4 = ~(uint)""[bVar7] + param_1->height + (uint)bVar3;
                    param_1->num_rows = uVar4 / bVar3;
                    if (((uVar6 < bVar2) || (uVar4 < bVar3)) && (bVar7 = bVar1 + 8, bVar7 < 7)) {
                      param_1->usr_width =
                           (~(uint)""[bVar7] +
                           param_1->width + (uint)"\b\b\x04\x04\x02\x02\x01"[bVar7]) /
                           (uint)"\b\b\x04\x04\x02\x02\x01"[bVar7];
                      param_1->num_rows =
                           (~(uint)""[bVar7] +
                           param_1->height + (uint)"\b\b\b\x04\x04\x02\x02"[bVar7]) /
                           (uint)"\b\b\b\x04\x04\x02\x02"[bVar7];
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    else {
      bVar7 = bVar1 + 1;
    }
    param_1->pass = bVar7;
    if (bVar7 < 7) {
      if (param_1->prev_row == (uchar *)0x0) {
        return;
      }
      uVar4 = (uint)param_1->usr_bit_depth * (uint)param_1->usr_channels;
      if (uVar4 < 8) {
        uVar5 = (ulonglong)param_1->width * (ulonglong)uVar4 + 7 >> 3;
      }
      else {
        uVar5 = (ulonglong)param_1->width * (ulonglong)(uVar4 >> 3);
      }
      memset(param_1->prev_row,0,uVar5 + 1);
      return;
    }
  }
  png_compress_IDAT(param_1,(uchar *)0x0,0,4);
  return;
}

// png_do_write_interlace @ 140dcda40

void __cdecl png_do_write_interlace(png_row_info_struct *param_1,uchar *param_2,int param_3)

{
  byte bVar1;
  byte bVar2;
  uint uVar3;
  char cVar4;
  byte bVar5;
  byte *pbVar6;
  uint uVar7;
  uint uVar8;
  ulong64 uVar9;
  int iVar10;
  ulonglong uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  byte bVar15;
  uchar *_Dst;
  
  if (5 < param_3) {
    return;
  }
  bVar1 = param_1->pixel_depth;
  uVar3 = param_1->width;
  pbVar6 = param_2;
  if (bVar1 == 4) {
    bVar1 = ""[param_3];
    uVar12 = (uint)bVar1;
    uVar7 = (uint)bVar1;
    if (bVar1 < uVar3) {
      bVar2 = "\b\b\x04\x04\x02\x02\x01"[param_3];
      uVar14 = (uint)bVar1;
      do {
        bVar15 = (param_2[uVar14 >> 1] >> (~(bVar1 * '\x04') & 4)) << 4;
        uVar14 = uVar14 + bVar2;
        if (uVar3 <= uVar14) goto LAB_140dcde58;
        *pbVar6 = param_2[uVar14 >> 1] >> (~(bVar2 * '\x04' + bVar1 * '\x04') & 4) & 0xf | bVar15;
        pbVar6 = pbVar6 + 1;
        uVar14 = uVar14 + bVar2;
        uVar7 = uVar12;
      } while (uVar14 < uVar3);
    }
  }
  else if (bVar1 == 2) {
    bVar1 = ""[param_3];
    uVar12 = (uint)bVar1;
    uVar7 = (uint)bVar1;
    if (bVar1 < uVar3) {
      bVar2 = "\b\b\x04\x04\x02\x02\x01"[param_3];
      uVar8 = (uint)bVar2;
      bVar5 = bVar1 * '\x02';
      cVar4 = (char)(uVar8 * 2);
      uVar14 = (uint)bVar1;
      do {
        bVar15 = (param_2[uVar14 >> 2] >> (~bVar5 & 6)) << 6;
        uVar7 = uVar8 + uVar14;
        if (uVar3 <= uVar7) goto LAB_140dcde58;
        bVar15 = (param_2[uVar7 >> 2] >> (~(cVar4 + bVar5) & 6) & 3) << 4 | bVar15;
        uVar13 = uVar8 * 2 + uVar14;
        if (uVar3 <= uVar13) goto LAB_140dcde58;
        bVar15 = bVar15 + (param_2[uVar13 >> 2] >> (~(bVar2 * '\x04' + bVar5) & 6) & 3) * '\x04';
        uVar13 = uVar14 + uVar8 * 3;
        if (uVar3 <= uVar13) goto LAB_140dcde58;
        uVar14 = uVar7 + uVar8 * 3;
        *pbVar6 = param_2[uVar13 >> 2] >> (~(cVar4 * '\x03' + bVar5) & 6) & 3 | bVar15;
        pbVar6 = pbVar6 + 1;
        uVar7 = uVar12;
      } while (uVar14 < uVar3);
    }
  }
  else if (bVar1 == 1) {
    bVar1 = ""[param_3];
    uVar12 = (uint)bVar1;
    uVar7 = (uint)bVar1;
    if (bVar1 < uVar3) {
      bVar2 = "\b\b\x04\x04\x02\x02\x01"[param_3];
      uVar11 = (ulonglong)bVar1;
      do {
        iVar10 = (int)uVar11;
        bVar15 = (param_2[uVar11 >> 3] >> (~(byte)uVar11 & 7)) << 7;
        uVar14 = (uint)bVar2 + iVar10;
        if (uVar3 <= uVar14) goto LAB_140dcde58;
        bVar15 = bVar15 | (param_2[uVar14 >> 3] >> (~(byte)uVar14 & 7) & 1) << 6;
        uVar14 = uVar14 + bVar2;
        if (uVar3 <= uVar14) goto LAB_140dcde58;
        uVar7 = (uint)bVar2 + (uint)bVar2 + iVar10;
        bVar15 = bVar15 | (param_2[uVar7 >> 3] >> (~(byte)uVar7 & 7) & 1) << 5;
        uVar7 = (uint)bVar2;
        uVar14 = uVar14 + uVar7;
        if (uVar3 <= uVar14) goto LAB_140dcde58;
        uVar8 = (uint)bVar2 + (uint)bVar2 * 2 + iVar10;
        bVar15 = (param_2[uVar8 >> 3] >> (~(byte)uVar8 & 7) & 1) << 4 | bVar15;
        uVar14 = uVar14 + uVar7;
        if (uVar3 <= uVar14) goto LAB_140dcde58;
        uVar8 = (uint)bVar2 * 4 + iVar10;
        bVar15 = bVar15 + (param_2[uVar8 >> 3] >> (~(byte)uVar8 & 7) & 1) * '\b';
        uVar14 = uVar14 + uVar7;
        if (uVar3 <= uVar14) goto LAB_140dcde58;
        uVar8 = (uint)bVar2 + (uint)bVar2 * 4 + iVar10;
        bVar15 = bVar15 + (param_2[uVar8 >> 3] >> (~(byte)uVar8 & 7) & 1) * '\x04';
        uVar14 = uVar14 + uVar7;
        if (uVar3 <= uVar14) goto LAB_140dcde58;
        uVar7 = ((uint)bVar2 + (uint)bVar2) * 3 + iVar10;
        bVar15 = (param_2[uVar7 >> 3] >> (~(byte)uVar7 & 7)) * '\x02' & 2 | bVar15;
        uVar14 = uVar14 + bVar2;
        if (uVar3 <= uVar14) goto LAB_140dcde58;
        uVar7 = iVar10 + ((uint)bVar2 * 8 - (uint)bVar2);
        *pbVar6 = (param_2[uVar7 >> 3] >> (~(byte)uVar7 & 7) & 1) != 0 | bVar15;
        pbVar6 = pbVar6 + 1;
        uVar14 = uVar14 + bVar2;
        uVar11 = (ulonglong)uVar14;
        uVar7 = uVar12;
      } while (uVar14 < uVar3);
    }
  }
  else {
    bVar2 = ""[param_3];
    uVar7 = (uint)bVar2;
    if (bVar2 < uVar3) {
      uVar11 = (ulonglong)(bVar1 >> 3);
      bVar1 = "\b\b\x04\x04\x02\x02\x01"[param_3];
      uVar12 = (uint)bVar2;
      _Dst = param_2;
      do {
        if (_Dst != param_2 + uVar12 * uVar11) {
          memcpy(_Dst,param_2 + uVar12 * uVar11,uVar11);
        }
        _Dst = _Dst + uVar11;
        uVar12 = uVar12 + bVar1;
        uVar7 = (uint)bVar2;
      } while (uVar12 < uVar3);
    }
  }
LAB_140dcde60:
  uVar11 = (ulonglong)(~uVar7 + param_1->width + (uint)"\b\b\x04\x04\x02\x02\x01"[param_3]) /
           (ulonglong)(uint)"\b\b\x04\x04\x02\x02\x01"[param_3];
  param_1->width = (uint)uVar11;
  bVar1 = param_1->pixel_depth;
  if ((ulonglong)bVar1 < 8) {
    uVar9 = bVar1 * uVar11 + 7 >> 3;
  }
  else {
    uVar9 = (bVar1 >> 3) * uVar11;
  }
  param_1->rowbytes = uVar9;
  return;
LAB_140dcde58:
  *pbVar6 = bVar15;
  uVar7 = uVar12;
  goto LAB_140dcde60;
}

// png_write_find_filter_generic @ 140dcded0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
png_write_find_filter_generic(png_struct_def_conflict *param_1,png_row_info_struct *param_2)

{
  ushort *puVar1;
  uchar *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  short sVar5;
  short sVar6;
  ulonglong uVar7;
  undefined1 auVar8 [12];
  undefined1 auVar9 [12];
  undefined1 auVar10 [12];
  undefined1 auVar11 [12];
  undefined1 auVar12 [12];
  undefined1 auVar13 [12];
  undefined1 auVar14 [12];
  undefined1 auVar15 [12];
  undefined1 auVar16 [12];
  undefined1 auVar17 [12];
  undefined1 auVar18 [12];
  undefined1 auVar19 [12];
  undefined1 auVar20 [15];
  undefined1 auVar21 [14];
  undefined1 auVar22 [15];
  undefined1 auVar23 [14];
  undefined1 auVar24 [15];
  undefined1 auVar25 [14];
  undefined1 auVar26 [15];
  undefined1 auVar27 [14];
  undefined1 auVar28 [15];
  undefined1 auVar29 [14];
  undefined1 auVar30 [15];
  undefined1 auVar31 [14];
  undefined1 auVar32 [15];
  undefined1 auVar33 [14];
  undefined1 auVar34 [15];
  undefined1 auVar35 [14];
  undefined1 auVar36 [15];
  undefined1 auVar37 [15];
  undefined1 auVar38 [15];
  undefined1 auVar39 [15];
  undefined1 auVar40 [15];
  undefined1 auVar41 [15];
  undefined1 auVar42 [15];
  undefined1 auVar43 [15];
  undefined1 auVar44 [15];
  undefined1 auVar45 [15];
  undefined1 auVar46 [15];
  undefined1 auVar47 [15];
  undefined1 auVar48 [15];
  undefined1 auVar49 [15];
  undefined1 auVar50 [14];
  undefined1 auVar51 [14];
  undefined1 auVar52 [15];
  undefined1 auVar53 [14];
  undefined1 auVar54 [15];
  undefined1 auVar55 [14];
  undefined1 auVar56 [15];
  undefined1 auVar57 [14];
  undefined1 auVar58 [15];
  undefined1 auVar59 [14];
  undefined1 auVar60 [13];
  undefined1 auVar61 [13];
  undefined1 auVar62 [13];
  undefined1 auVar63 [15];
  undefined1 auVar64 [14];
  undefined1 auVar65 [13];
  undefined1 auVar66 [13];
  undefined1 auVar67 [13];
  undefined1 auVar68 [15];
  undefined1 auVar69 [14];
  undefined1 auVar70 [13];
  undefined1 auVar71 [13];
  undefined1 auVar72 [13];
  undefined1 auVar73 [14];
  undefined1 auVar74 [14];
  undefined1 auVar75 [13];
  undefined1 auVar76 [13];
  undefined1 auVar77 [13];
  undefined1 auVar78 [13];
  undefined1 auVar79 [13];
  undefined1 auVar80 [13];
  undefined1 auVar81 [14];
  undefined1 auVar82 [14];
  undefined1 auVar83 [14];
  undefined1 auVar84 [14];
  undefined1 auVar85 [15];
  undefined1 auVar86 [15];
  undefined1 auVar87 [15];
  undefined1 auVar88 [15];
  undefined1 auVar89 [15];
  undefined1 auVar90 [15];
  undefined1 auVar91 [15];
  undefined1 auVar92 [15];
  undefined1 auVar93 [14];
  undefined1 auVar94 [14];
  undefined1 auVar95 [15];
  undefined1 auVar96 [15];
  undefined1 auVar97 [15];
  undefined1 auVar98 [15];
  undefined1 auVar99 [15];
  undefined1 auVar100 [15];
  undefined1 auVar101 [15];
  undefined1 auVar102 [15];
  undefined1 auVar103 [15];
  undefined1 auVar104 [15];
  undefined1 auVar105 [15];
  undefined1 auVar106 [15];
  undefined1 auVar107 [15];
  undefined1 auVar108 [15];
  undefined1 auVar109 [15];
  undefined1 auVar110 [15];
  undefined1 auVar111 [15];
  undefined1 auVar112 [15];
  undefined1 auVar113 [15];
  undefined1 auVar114 [15];
  undefined1 auVar115 [15];
  undefined1 auVar116 [15];
  undefined1 auVar117 [15];
  undefined1 auVar118 [15];
  undefined1 auVar119 [15];
  undefined1 auVar120 [15];
  undefined1 auVar121 [15];
  ulonglong uVar122;
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
  uchar uVar159;
  uchar uVar160;
  uchar uVar161;
  uchar uVar162;
  uchar uVar163;
  uchar uVar164;
  uchar uVar165;
  uchar uVar166;
  uchar uVar167;
  uchar uVar168;
  uchar uVar169;
  uchar uVar170;
  uchar uVar171;
  uchar uVar172;
  uchar uVar173;
  uchar uVar174;
  uchar uVar175;
  uchar uVar176;
  uchar uVar177;
  uchar uVar178;
  uchar uVar179;
  uchar uVar180;
  uchar uVar181;
  uchar uVar182;
  uchar uVar183;
  uchar uVar184;
  undefined1 auVar185 [16];
  undefined1 auVar186 [15];
  undefined1 auVar187 [15];
  undefined1 auVar188 [15];
  undefined1 auVar189 [15];
  undefined1 auVar190 [15];
  unkuint9 Var191;
  undefined1 auVar192 [11];
  undefined1 auVar193 [14];
  undefined1 auVar194 [15];
  undefined1 auVar195 [11];
  undefined1 auVar196 [14];
  undefined1 auVar197 [15];
  undefined1 auVar198 [11];
  undefined1 auVar199 [14];
  undefined1 auVar200 [15];
  undefined1 auVar201 [11];
  undefined1 auVar202 [14];
  undefined1 auVar203 [13];
  undefined1 auVar204 [15];
  undefined1 auVar205 [11];
  undefined1 auVar206 [14];
  undefined1 auVar207 [13];
  undefined1 auVar208 [15];
  undefined1 auVar209 [11];
  undefined1 auVar210 [14];
  undefined1 auVar211 [13];
  undefined1 auVar212 [15];
  undefined1 auVar213 [11];
  undefined1 auVar214 [13];
  undefined1 auVar215 [14];
  undefined1 auVar216 [15];
  undefined1 auVar217 [11];
  undefined1 auVar218 [13];
  undefined1 auVar219 [14];
  undefined1 auVar220 [13];
  undefined1 auVar221 [13];
  undefined1 auVar222 [15];
  undefined1 auVar223 [15];
  undefined1 auVar224 [15];
  undefined1 auVar225 [15];
  undefined1 auVar226 [15];
  undefined1 auVar227 [15];
  undefined1 auVar228 [15];
  undefined1 auVar229 [15];
  undefined1 auVar230 [15];
  undefined1 auVar231 [15];
  undefined1 auVar232 [15];
  undefined1 auVar233 [15];
  undefined1 auVar234 [15];
  undefined1 auVar235 [15];
  undefined1 auVar236 [15];
  undefined1 auVar237 [15];
  undefined3 uVar238;
  undefined1 auVar239 [15];
  undefined1 auVar240 [15];
  undefined1 auVar241 [15];
  undefined1 auVar242 [15];
  undefined1 auVar243 [15];
  undefined1 auVar244 [15];
  undefined1 auVar245 [15];
  undefined1 auVar246 [15];
  undefined1 auVar247 [15];
  undefined1 auVar248 [15];
  undefined1 auVar249 [15];
  undefined1 auVar250 [15];
  undefined5 uVar251;
  undefined1 auVar252 [12];
  undefined8 uVar253;
  undefined1 auVar254 [12];
  undefined8 uVar255;
  undefined1 auVar256 [14];
  undefined8 uVar257;
  undefined1 auVar258 [14];
  undefined8 uVar259;
  uint6 uVar260;
  uint6 uVar261;
  uint6 uVar262;
  undefined4 uVar263;
  undefined4 uVar264;
  uchar *puVar265;
  int iVar266;
  ulonglong uVar267;
  byte bVar268;
  uchar *puVar269;
  ulonglong uVar270;
  ulonglong uVar271;
  uchar *puVar272;
  byte *pbVar273;
  ulonglong uVar274;
  uchar *puVar275;
  ulonglong uVar276;
  uchar *puVar277;
  byte bVar278;
  longlong lVar279;
  uchar *puVar280;
  ulonglong uVar281;
  uint uVar282;
  uchar *puVar283;
  uint uVar284;
  uchar *puVar285;
  int iVar286;
  byte *pbVar287;
  ulonglong uVar288;
  undefined1 auVar290 [15];
  undefined1 auVar289 [16];
  undefined1 auVar291 [16];
  longlong lVar294;
  undefined1 auVar292 [16];
  undefined1 auVar293 [16];
  undefined1 auVar295 [12];
  undefined1 auVar296 [12];
  undefined1 auVar297 [16];
  undefined1 auVar298 [16];
  longlong lVar299;
  longlong lVar303;
  undefined1 auVar300 [16];
  undefined1 auVar301 [16];
  undefined1 auVar302 [16];
  undefined1 auVar304 [12];
  undefined1 auVar305 [12];
  undefined1 auVar306 [12];
  undefined1 auVar307 [16];
  undefined1 auVar308 [16];
  undefined1 auVar309 [16];
  undefined1 auVar310 [16];
  undefined1 auVar311 [16];
  undefined1 auVar312 [16];
  uint uVar313;
  byte bVar326;
  uint uVar327;
  undefined1 auVar314 [12];
  undefined1 auVar315 [12];
  undefined1 auVar316 [12];
  undefined1 auVar317 [12];
  uint uVar328;
  byte bVar330;
  byte bVar331;
  uint uVar329;
  undefined1 auVar318 [16];
  undefined1 auVar319 [16];
  undefined1 auVar320 [16];
  undefined1 auVar321 [16];
  undefined1 auVar322 [16];
  undefined1 auVar323 [16];
  byte bVar332;
  undefined1 auVar324 [16];
  undefined1 auVar325 [16];
  uint uVar333;
  uint uVar334;
  undefined1 auVar335 [12];
  undefined1 auVar336 [12];
  undefined1 auVar337 [12];
  uint uVar351;
  undefined1 auVar338 [16];
  undefined1 auVar339 [16];
  undefined1 auVar340 [16];
  undefined1 auVar341 [16];
  uint uVar352;
  uint uVar353;
  undefined1 auVar342 [16];
  undefined1 auVar343 [16];
  undefined1 auVar344 [16];
  undefined1 auVar345 [16];
  undefined1 auVar346 [16];
  undefined1 auVar347 [16];
  undefined1 auVar348 [16];
  undefined1 auVar354 [12];
  undefined1 auVar355 [12];
  undefined1 auVar349 [16];
  undefined1 auVar350 [16];
  undefined1 auVar356 [12];
  byte bVar373;
  byte bVar374;
  char cVar375;
  byte bVar376;
  byte bVar378;
  byte bVar379;
  byte bVar380;
  undefined1 auVar357 [16];
  undefined1 auVar358 [16];
  undefined1 auVar359 [16];
  undefined1 auVar360 [16];
  undefined1 auVar361 [16];
  undefined1 auVar362 [16];
  undefined1 auVar363 [16];
  undefined1 auVar364 [16];
  undefined1 auVar365 [16];
  undefined1 auVar366 [16];
  char cVar377;
  byte bVar381;
  undefined1 auVar367 [16];
  undefined1 auVar368 [16];
  undefined1 auVar369 [16];
  undefined1 auVar370 [16];
  undefined1 auVar371 [16];
  undefined1 auVar372 [16];
  undefined1 auVar383 [12];
  undefined1 auVar384 [12];
  uint uVar382;
  undefined1 auVar385 [12];
  undefined1 auVar386 [12];
  undefined1 auVar387 [12];
  undefined1 auVar388 [12];
  byte bVar405;
  byte bVar406;
  byte bVar408;
  uint uVar409;
  byte bVar410;
  byte bVar411;
  undefined1 auVar389 [16];
  undefined1 auVar390 [16];
  undefined1 auVar391 [16];
  undefined1 auVar392 [16];
  uint uVar413;
  uint uVar414;
  undefined1 auVar393 [16];
  undefined1 auVar394 [16];
  undefined1 auVar395 [16];
  undefined1 auVar396 [16];
  undefined1 auVar397 [16];
  undefined1 auVar398 [16];
  byte bVar407;
  byte bVar412;
  uint uVar415;
  undefined1 auVar399 [16];
  undefined1 auVar400 [16];
  undefined1 auVar401 [16];
  undefined1 auVar402 [16];
  undefined1 auVar403 [16];
  undefined1 auVar404 [16];
  byte bVar416;
  int iVar418;
  undefined1 auVar423 [12];
  undefined1 auVar424 [12];
  undefined1 auVar425 [12];
  undefined1 auVar426 [12];
  uint uVar417;
  byte bVar440;
  byte bVar441;
  byte bVar443;
  uint uVar444;
  byte bVar446;
  byte bVar447;
  byte bVar449;
  char cVar451;
  undefined1 auVar419 [12];
  byte bVar453;
  byte bVar455;
  undefined1 auVar427 [16];
  undefined1 auVar428 [16];
  undefined1 auVar429 [16];
  undefined1 auVar430 [16];
  undefined1 auVar420 [12];
  undefined1 auVar421 [12];
  undefined1 auVar422 [12];
  uint uVar450;
  uint uVar454;
  undefined1 auVar431 [16];
  undefined1 auVar432 [16];
  undefined1 auVar464 [12];
  undefined1 auVar465 [12];
  undefined1 auVar466 [12];
  undefined1 auVar433 [16];
  undefined1 auVar434 [16];
  undefined1 auVar435 [16];
  undefined1 auVar436 [16];
  byte bVar442;
  char cVar448;
  char cVar452;
  undefined1 auVar437 [16];
  int iVar445;
  undefined1 auVar438 [16];
  undefined1 auVar439 [16];
  uint uVar456;
  uint uVar482;
  undefined1 auVar459 [12];
  undefined1 auVar460 [12];
  undefined1 auVar467 [16];
  undefined1 auVar468 [16];
  undefined1 auVar469 [16];
  undefined1 auVar470 [16];
  undefined1 auVar461 [12];
  undefined1 auVar462 [12];
  undefined1 auVar463 [12];
  uint uVar485;
  uint uVar486;
  undefined1 auVar471 [16];
  undefined1 auVar472 [16];
  undefined1 auVar473 [16];
  undefined1 auVar474 [16];
  undefined1 auVar475 [16];
  undefined1 auVar476 [16];
  undefined1 auVar477 [16];
  undefined1 auVar478 [16];
  undefined1 auVar479 [16];
  int iVar457;
  int iVar458;
  int iVar483;
  int iVar484;
  undefined1 auVar480 [16];
  undefined1 auVar481 [16];
  uint uVar487;
  uint uVar488;
  uint uVar493;
  byte bVar495;
  byte bVar498;
  byte bVar499;
  undefined1 auVar489 [12];
  uint uVar494;
  uint uVar496;
  uint uVar497;
  byte bVar500;
  byte bVar501;
  byte bVar504;
  byte bVar505;
  uint uVar502;
  uint uVar503;
  byte bVar507;
  undefined1 auVar490 [16];
  undefined1 auVar491 [16];
  ushort uVar506;
  undefined1 auVar492 [16];
  undefined1 auVar508 [16];
  undefined1 auVar509 [16];
  undefined1 auVar510 [16];
  ushort uVar513;
  byte bVar514;
  undefined1 auVar511 [16];
  byte bVar515;
  undefined1 auVar512 [16];
  byte bVar519;
  byte bVar520;
  byte bVar521;
  byte bVar522;
  byte bVar523;
  byte bVar524;
  byte bVar525;
  ushort uVar526;
  ushort uVar527;
  undefined1 auVar516 [16];
  undefined1 auVar517 [16];
  undefined1 auVar518 [16];
  undefined1 auVar528 [16];
  
  bVar268 = param_1->do_filter;
  uVar7 = param_2->rowbytes;
  bVar449 = param_2->pixel_depth;
  puVar283 = param_1->row_buf;
  if (uVar7 < 0x1ffffffffffffff) {
    uVar276 = 0xfffffffffffffeff;
    if ((bVar268 != 8 & bVar268 >> 3) == 1) {
      if (uVar7 == 0) {
        uVar276 = 0;
      }
      else {
        if (uVar7 < 4) {
          uVar276 = 0;
          uVar274 = 0;
          puVar269 = puVar283;
        }
        else {
          uVar274 = uVar7 & 0x1fffffffffffffc;
          puVar269 = puVar283 + uVar274;
          uVar276 = 0;
          lVar299 = 0;
          lVar303 = 0;
          lVar279 = 0;
          lVar294 = 0;
          do {
            sVar5 = *(short *)(puVar283 + uVar276 + 1);
            sVar6 = *(short *)(puVar283 + uVar276 + 3);
            bVar278 = (byte)((ushort)sVar5 >> 8);
            bVar453 = (byte)((ushort)sVar6 >> 8);
            auVar460._0_4_ =
                 ___xmm_00000000000000000000010000000100 - (CONCAT12(bVar278,sVar5) & 0xff);
            auVar460._4_4_ = _UNK_1531f2ba4 - (uint)bVar278;
            auVar460._8_4_ = _UNK_1531f2ba8;
            auVar419._0_4_ =
                 ___xmm_00000000000000000000010000000100 - (CONCAT12(bVar453,sVar6) & 0xff);
            auVar419._4_4_ = _UNK_1531f2ba4 - (uint)bVar453;
            auVar419._8_4_ = _UNK_1531f2ba8;
            cVar375 = (char)sVar5;
            auVar290 = SUB1615((undefined1  [16])0x0,1);
            auVar459[0] = -(cVar375 < '\0');
            auVar459[1] = -(cVar375 < '\0');
            auVar459[2] = -(cVar375 < '\0');
            auVar459[3] = -(cVar375 < '\0');
            auVar459[4] = -(sVar5 < 0);
            auVar459[5] = -(sVar5 < 0);
            auVar459[6] = -(sVar5 < 0);
            auVar459[7] = -(sVar5 < 0);
            auVar459[8] = 0;
            auVar459[9] = -('\0' < auVar290[8]);
            auVar459[10] = -('\0' < auVar290[9]);
            auVar459[0xb] = -('\0' < auVar290[10]);
            cVar375 = (char)sVar6;
            auVar290 = SUB1615((undefined1  [16])0x0,1);
            auVar304[0] = -(cVar375 < '\0');
            auVar304[1] = -(cVar375 < '\0');
            auVar304[2] = -(cVar375 < '\0');
            auVar304[3] = -(cVar375 < '\0');
            auVar304[4] = -(sVar6 < 0);
            auVar304[5] = -(sVar6 < 0);
            auVar304[6] = -(sVar6 < 0);
            auVar304[7] = -(sVar6 < 0);
            auVar304[8] = 0;
            auVar304[9] = -('\0' < auVar290[8]);
            auVar304[10] = -('\0' < auVar290[9]);
            auVar304[0xb] = -('\0' < auVar290[10]);
            auVar355._8_4_ = 0;
            auVar355._0_8_ =
                 (ulonglong)(CONCAT14(bVar278,(uint)CONCAT12(bVar278,sVar5)) & 0xffffff00ff) &
                 0xffffffff0000ffff;
            auVar460 = ~auVar459 & auVar355 | auVar460 & auVar459;
            auVar466._8_4_ = 0;
            auVar466._0_8_ =
                 (ulonglong)(CONCAT14(bVar453,(uint)CONCAT12(bVar453,sVar6)) & 0xffffff00ff) &
                 0xffffffff0000ffff;
            auVar355 = ~auVar304 & auVar466 | auVar419 & auVar304;
            lVar299 = lVar299 + (auVar460._0_8_ & 0xffffffff);
            lVar303 = lVar303 + (ulonglong)auVar460._4_4_;
            lVar279 = lVar279 + (auVar355._0_8_ & 0xffffffff);
            lVar294 = lVar294 + (ulonglong)auVar355._4_4_;
            uVar276 = uVar276 + 4;
          } while (uVar274 != uVar276);
          uVar276 = lVar294 + lVar303 + lVar279 + lVar299;
          if (uVar7 == uVar274) goto LAB_140dce0d0;
        }
        lVar279 = 0;
        do {
          bVar278 = puVar269[lVar279 + 1];
          uVar284 = 0x100 - bVar278;
          if (-1 < (char)bVar278) {
            uVar284 = (uint)bVar278;
          }
          uVar276 = uVar276 + uVar284;
          lVar279 = lVar279 + 1;
        } while (uVar7 - uVar274 != lVar279);
      }
    }
  }
  else {
    bVar268 = bVar268 & -bVar268;
    uVar276 = 0xfffffffffffffeff;
  }
LAB_140dce0d0:
  uVar284 = bVar449 + 7 >> 3;
  uVar274 = (ulonglong)uVar284;
  if (bVar268 == 0x10) {
    puVar280 = param_1->try_row;
    *puVar280 = '\x01';
    puVar269 = puVar280 + 1;
    puVar285 = puVar283 + 1;
    puVar272 = puVar285;
    if (bVar449 != 0) {
      if (bVar449 < 0x79) {
        uVar267 = 0;
      }
      else {
        uVar267 = (ulonglong)(uVar284 & 0xfffffff0);
        uVar4 = *(undefined8 *)(puVar283 + 9);
        *(undefined8 *)puVar269 = *(undefined8 *)puVar285;
        *(undefined8 *)(puVar280 + 9) = uVar4;
        if (uVar267 != 0x10) {
          uVar4 = *(undefined8 *)(puVar283 + 0x19);
          *(undefined8 *)(puVar280 + 0x11) = *(undefined8 *)(puVar283 + 0x11);
          *(undefined8 *)(puVar280 + 0x19) = uVar4;
        }
        puVar272 = puVar285 + uVar267;
        puVar269 = puVar269 + uVar267;
        if ((uVar284 & 0xfffffff0) == uVar284) goto LAB_140dce1a0;
      }
      lVar279 = uVar274 - uVar267;
      do {
        *puVar269 = *puVar272;
        puVar269 = puVar269 + 1;
        puVar272 = puVar272 + 1;
        lVar279 = lVar279 + -1;
      } while (lVar279 != 0);
    }
LAB_140dce1a0:
    uVar267 = uVar7 - uVar274;
    if (uVar274 <= uVar7 && uVar267 != 0) {
      uVar270 = uVar274;
      if (7 < uVar267) {
        if (uVar267 < 0x20) {
          uVar270 = 0;
        }
        else {
          uVar270 = uVar267 & 0xffffffffffffffe0;
          uVar281 = 0;
          do {
            puVar280 = puVar272 + uVar281;
            uVar123 = puVar280[1];
            uVar124 = puVar280[2];
            uVar125 = puVar280[3];
            uVar126 = puVar280[4];
            uVar127 = puVar280[5];
            uVar128 = puVar280[6];
            uVar129 = puVar280[7];
            uVar130 = puVar280[8];
            uVar131 = puVar280[9];
            uVar132 = puVar280[10];
            uVar133 = puVar280[0xb];
            uVar134 = puVar280[0xc];
            uVar135 = puVar280[0xd];
            uVar136 = puVar280[0xe];
            uVar137 = puVar280[0xf];
            puVar275 = puVar272 + uVar281 + 0x10;
            uVar138 = *puVar275;
            uVar139 = puVar275[1];
            uVar140 = puVar275[2];
            uVar141 = puVar275[3];
            uVar142 = puVar275[4];
            uVar143 = puVar275[5];
            uVar144 = puVar275[6];
            uVar145 = puVar275[7];
            uVar146 = puVar275[8];
            uVar147 = puVar275[9];
            uVar148 = puVar275[10];
            uVar149 = puVar275[0xb];
            uVar150 = puVar275[0xc];
            uVar151 = puVar275[0xd];
            uVar152 = puVar275[0xe];
            uVar153 = puVar275[0xf];
            puVar265 = puVar283 + uVar281 + 1;
            uVar154 = puVar265[1];
            uVar155 = puVar265[2];
            uVar156 = puVar265[3];
            uVar157 = puVar265[4];
            uVar158 = puVar265[5];
            uVar159 = puVar265[6];
            uVar160 = puVar265[7];
            uVar161 = puVar265[8];
            uVar162 = puVar265[9];
            uVar163 = puVar265[10];
            uVar164 = puVar265[0xb];
            uVar165 = puVar265[0xc];
            uVar166 = puVar265[0xd];
            uVar167 = puVar265[0xe];
            uVar168 = puVar265[0xf];
            puVar275 = puVar283 + uVar281 + 0x11;
            uVar169 = *puVar275;
            uVar170 = puVar275[1];
            uVar171 = puVar275[2];
            uVar172 = puVar275[3];
            uVar173 = puVar275[4];
            uVar174 = puVar275[5];
            uVar175 = puVar275[6];
            uVar176 = puVar275[7];
            uVar177 = puVar275[8];
            uVar178 = puVar275[9];
            uVar179 = puVar275[10];
            uVar180 = puVar275[0xb];
            uVar181 = puVar275[0xc];
            uVar182 = puVar275[0xd];
            uVar183 = puVar275[0xe];
            uVar184 = puVar275[0xf];
            puVar275 = puVar269 + uVar281;
            *puVar275 = *puVar280 - *puVar265;
            puVar275[1] = uVar123 - uVar154;
            puVar275[2] = uVar124 - uVar155;
            puVar275[3] = uVar125 - uVar156;
            puVar275[4] = uVar126 - uVar157;
            puVar275[5] = uVar127 - uVar158;
            puVar275[6] = uVar128 - uVar159;
            puVar275[7] = uVar129 - uVar160;
            puVar275[8] = uVar130 - uVar161;
            puVar275[9] = uVar131 - uVar162;
            puVar275[10] = uVar132 - uVar163;
            puVar275[0xb] = uVar133 - uVar164;
            puVar275[0xc] = uVar134 - uVar165;
            puVar275[0xd] = uVar135 - uVar166;
            puVar275[0xe] = uVar136 - uVar167;
            puVar275[0xf] = uVar137 - uVar168;
            puVar280 = puVar269 + uVar281 + 0x10;
            *puVar280 = uVar138 - uVar169;
            puVar280[1] = uVar139 - uVar170;
            puVar280[2] = uVar140 - uVar171;
            puVar280[3] = uVar141 - uVar172;
            puVar280[4] = uVar142 - uVar173;
            puVar280[5] = uVar143 - uVar174;
            puVar280[6] = uVar144 - uVar175;
            puVar280[7] = uVar145 - uVar176;
            puVar280[8] = uVar146 - uVar177;
            puVar280[9] = uVar147 - uVar178;
            puVar280[10] = uVar148 - uVar179;
            puVar280[0xb] = uVar149 - uVar180;
            puVar280[0xc] = uVar150 - uVar181;
            puVar280[0xd] = uVar151 - uVar182;
            puVar280[0xe] = uVar152 - uVar183;
            puVar280[0xf] = uVar153 - uVar184;
            uVar281 = uVar281 + 0x20;
          } while (uVar270 != uVar281);
          if (uVar267 == uVar270) goto LAB_140dce626;
          if ((uVar267 & 0x18) == 0) {
            puVar272 = puVar272 + uVar270;
            puVar269 = puVar269 + uVar270;
            puVar283 = puVar283 + uVar270;
            uVar270 = uVar274 + uVar270;
            goto LAB_140dce5f9;
          }
        }
        uVar281 = uVar267 & 0xfffffffffffffff8;
        puVar283 = puVar283 + uVar281;
        do {
          uVar4 = *(undefined8 *)(puVar272 + uVar270);
          uVar3 = *(undefined8 *)(puVar285 + uVar270);
          *(ulonglong *)(puVar269 + uVar270) =
               CONCAT17((char)((ulonglong)uVar4 >> 0x38) - (char)((ulonglong)uVar3 >> 0x38),
                        CONCAT16((char)((ulonglong)uVar4 >> 0x30) - (char)((ulonglong)uVar3 >> 0x30)
                                 ,CONCAT15((char)((ulonglong)uVar4 >> 0x28) -
                                           (char)((ulonglong)uVar3 >> 0x28),
                                           CONCAT14((char)((ulonglong)uVar4 >> 0x20) -
                                                    (char)((ulonglong)uVar3 >> 0x20),
                                                    CONCAT13((char)((ulonglong)uVar4 >> 0x18) -
                                                             (char)((ulonglong)uVar3 >> 0x18),
                                                             CONCAT12((char)((ulonglong)uVar4 >>
                                                                            0x10) -
                                                                      (char)((ulonglong)uVar3 >>
                                                                            0x10),
                                                                      CONCAT11((char)((ulonglong)
                                                                                      uVar4 >> 8) -
                                                                               (char)((ulonglong)
                                                                                      uVar3 >> 8),
                                                                               (char)uVar4 -
                                                                               (char)uVar3)))))));
          uVar270 = uVar270 + 8;
        } while (uVar281 != uVar270);
        puVar272 = puVar272 + uVar281;
        puVar269 = puVar269 + uVar281;
        uVar270 = uVar281 + uVar274;
        if (uVar267 == uVar281) goto LAB_140dce626;
      }
LAB_140dce5f9:
      lVar279 = 0;
      do {
        puVar269[lVar279] = puVar272[lVar279] - puVar283[lVar279 + 1];
        lVar279 = lVar279 + 1;
      } while (uVar7 - uVar270 != lVar279);
    }
LAB_140dce626:
    puVar283 = param_1->try_row;
  }
  else if ((bVar268 & 0x10) != 0) {
    puVar269 = param_1->try_row;
    *puVar269 = '\x01';
    uVar267 = (ulonglong)uVar284;
    pbVar287 = puVar269 + 1;
    pbVar273 = puVar283 + 1;
    if (bVar449 == 0) {
      uVar270 = 0;
    }
    else {
      if (bVar449 < 0x19) {
        uVar270 = 0;
        uVar281 = 0;
      }
      else {
        uVar415 = uVar284 & 0xfffffffc;
        uVar281 = (ulonglong)uVar415;
        sVar5 = *(short *)(puVar283 + 1);
        sVar6 = *(short *)(puVar283 + 3);
        *(short *)(puVar269 + 1) = sVar5;
        *(short *)(puVar269 + 3) = sVar6;
        uVar264 = _UNK_1531f2bac;
        uVar263 = _UNK_1531f2ba8;
        iVar286 = _UNK_1531f2ba4;
        iVar266 = ___xmm_00000000000000000000010000000100;
        bVar278 = (byte)((ushort)sVar5 >> 8);
        auVar320._8_8_ = 0;
        auVar320._0_8_ =
             (ulonglong)(CONCAT14(bVar278,(uint)CONCAT12(bVar278,sVar5)) & 0xffffff00ff) &
             0xffffffff0000ffff;
        bVar453 = (byte)((ushort)sVar6 >> 8);
        auVar369._8_8_ = 0;
        auVar369._0_8_ =
             (ulonglong)(CONCAT14(bVar453,(uint)CONCAT12(bVar453,sVar6)) & 0xffffff00ff) &
             0xffffffff0000ffff;
        auVar479._0_4_ = ___xmm_00000000000000000000010000000100 - (CONCAT12(bVar278,sVar5) & 0xff);
        auVar479._4_4_ = _UNK_1531f2ba4 - (uint)bVar278;
        auVar479._8_4_ = _UNK_1531f2ba8;
        auVar479._12_4_ = _UNK_1531f2bac;
        auVar510._0_4_ = ___xmm_00000000000000000000010000000100 - (CONCAT12(bVar453,sVar6) & 0xff);
        auVar510._4_4_ = _UNK_1531f2ba4 - (uint)bVar453;
        auVar510._8_4_ = _UNK_1531f2ba8;
        auVar510._12_4_ = _UNK_1531f2bac;
        cVar375 = (char)sVar5;
        auVar290 = SUB1615((undefined1  [16])0x0,1);
        auVar432[0] = -(cVar375 < '\0');
        auVar432[1] = -(cVar375 < '\0');
        auVar432[2] = -(cVar375 < '\0');
        auVar432[3] = -(cVar375 < '\0');
        auVar432[4] = -(sVar5 < 0);
        auVar432[5] = -(sVar5 < 0);
        auVar432[6] = -(sVar5 < 0);
        auVar432[7] = -(sVar5 < 0);
        auVar432[8] = 0;
        auVar432[9] = -('\0' < auVar290[8]);
        auVar432[10] = -('\0' < auVar290[9]);
        auVar432[0xb] = -('\0' < auVar290[10]);
        auVar432[0xc] = -('\0' < auVar290[0xb]);
        auVar432[0xd] = -('\0' < auVar290[0xc]);
        auVar432[0xe] = -('\0' < auVar290[0xd]);
        auVar432[0xf] = -('\0' < auVar290[0xe]);
        cVar375 = (char)sVar6;
        auVar290 = SUB1615((undefined1  [16])0x0,1);
        auVar472[0] = -(cVar375 < '\0');
        auVar472[1] = -(cVar375 < '\0');
        auVar472[2] = -(cVar375 < '\0');
        auVar472[3] = -(cVar375 < '\0');
        auVar472[4] = -(sVar6 < 0);
        auVar472[5] = -(sVar6 < 0);
        auVar472[6] = -(sVar6 < 0);
        auVar472[7] = -(sVar6 < 0);
        auVar472[8] = 0;
        auVar472[9] = -('\0' < auVar290[8]);
        auVar472[10] = -('\0' < auVar290[9]);
        auVar472[0xb] = -('\0' < auVar290[10]);
        auVar472[0xc] = -('\0' < auVar290[0xb]);
        auVar472[0xd] = -('\0' < auVar290[0xc]);
        auVar472[0xe] = -('\0' < auVar290[0xd]);
        auVar472[0xf] = -('\0' < auVar290[0xe]);
        auVar432 = ~auVar432 & auVar320 | auVar479 & auVar432;
        uVar270 = auVar432._0_8_;
        auVar472 = ~auVar472 & auVar369 | auVar510 & auVar472;
        uVar288 = auVar472._0_8_;
        if (uVar281 == 4) {
LAB_140dce4de:
          uVar271 = uVar270 >> 0x20;
          uVar270 = uVar270 & 0xffffffff;
          auVar291._0_8_ = uVar288 & 0xffffffff;
          auVar291._8_4_ = (int)(uVar288 >> 0x20);
          auVar291._12_4_ = 0;
        }
        else {
          sVar5 = *(short *)(puVar283 + 5);
          sVar6 = *(short *)(puVar283 + 7);
          *(short *)(puVar269 + 5) = sVar5;
          *(short *)(puVar269 + 7) = sVar6;
          bVar278 = (byte)((ushort)sVar5 >> 8);
          auVar338._8_8_ = 0;
          auVar338._0_8_ =
               (ulonglong)(CONCAT14(bVar278,(uint)CONCAT12(bVar278,sVar5)) & 0xffffff00ff) &
               0xffffffff0000ffff;
          bVar453 = (byte)((ushort)sVar6 >> 8);
          auVar357._8_8_ = 0;
          auVar357._0_8_ =
               (ulonglong)(CONCAT14(bVar453,(uint)CONCAT12(bVar453,sVar6)) & 0xffffff00ff) &
               0xffffffff0000ffff;
          auVar389._0_4_ = iVar266 - (CONCAT12(bVar278,sVar5) & 0xff);
          auVar389._4_4_ = iVar286 - (uint)bVar278;
          auVar389._8_4_ = uVar263;
          auVar389._12_4_ = uVar264;
          auVar427._0_4_ = iVar266 - (CONCAT12(bVar453,sVar6) & 0xff);
          auVar427._4_4_ = iVar286 - (uint)bVar453;
          auVar427._8_4_ = uVar263;
          auVar427._12_4_ = uVar264;
          cVar375 = (char)sVar5;
          auVar290 = SUB1615((undefined1  [16])0x0,1);
          auVar467[0] = -(cVar375 < '\0');
          auVar467[1] = -(cVar375 < '\0');
          auVar467[2] = -(cVar375 < '\0');
          auVar467[3] = -(cVar375 < '\0');
          auVar467[4] = -(sVar5 < 0);
          auVar467[5] = -(sVar5 < 0);
          auVar467[6] = -(sVar5 < 0);
          auVar467[7] = -(sVar5 < 0);
          auVar467[8] = 0;
          auVar467[9] = -('\0' < auVar290[8]);
          auVar467[10] = -('\0' < auVar290[9]);
          auVar467[0xb] = -('\0' < auVar290[10]);
          auVar467[0xc] = -('\0' < auVar290[0xb]);
          auVar467[0xd] = -('\0' < auVar290[0xc]);
          auVar467[0xe] = -('\0' < auVar290[0xd]);
          auVar467[0xf] = -('\0' < auVar290[0xe]);
          cVar375 = (char)sVar6;
          auVar290 = SUB1615((undefined1  [16])0x0,1);
          auVar307[0] = -(cVar375 < '\0');
          auVar307[1] = -(cVar375 < '\0');
          auVar307[2] = -(cVar375 < '\0');
          auVar307[3] = -(cVar375 < '\0');
          auVar307[4] = -(sVar6 < 0);
          auVar307[5] = -(sVar6 < 0);
          auVar307[6] = -(sVar6 < 0);
          auVar307[7] = -(sVar6 < 0);
          auVar307[8] = 0;
          auVar307[9] = -('\0' < auVar290[8]);
          auVar307[10] = -('\0' < auVar290[9]);
          auVar307[0xb] = -('\0' < auVar290[10]);
          auVar307[0xc] = -('\0' < auVar290[0xb]);
          auVar307[0xd] = -('\0' < auVar290[0xc]);
          auVar307[0xe] = -('\0' < auVar290[0xd]);
          auVar307[0xf] = -('\0' < auVar290[0xe]);
          auVar369 = ~auVar467 & auVar338 | auVar389 & auVar467;
          auVar320 = ~auVar307 & auVar357 | auVar427 & auVar307;
          iVar418 = auVar432._0_4_ + auVar369._0_4_;
          iVar445 = auVar432._4_4_ + auVar369._4_4_;
          uVar270 = CONCAT44(iVar445,iVar418);
          iVar457 = auVar472._0_4_ + auVar320._0_4_;
          iVar458 = auVar472._4_4_ + auVar320._4_4_;
          uVar288 = CONCAT44(iVar458,iVar457);
          if (uVar415 == 8) goto LAB_140dce4de;
          sVar5 = *(short *)(puVar283 + 9);
          sVar6 = *(short *)(puVar283 + 0xb);
          *(short *)(puVar269 + 9) = sVar5;
          *(short *)(puVar269 + 0xb) = sVar6;
          bVar278 = (byte)((ushort)sVar5 >> 8);
          auVar339._8_8_ = 0;
          auVar339._0_8_ =
               (ulonglong)(CONCAT14(bVar278,(uint)CONCAT12(bVar278,sVar5)) & 0xffffff00ff) &
               0xffffffff0000ffff;
          bVar453 = (byte)((ushort)sVar6 >> 8);
          auVar358._8_8_ = 0;
          auVar358._0_8_ =
               (ulonglong)(CONCAT14(bVar453,(uint)CONCAT12(bVar453,sVar6)) & 0xffffff00ff) &
               0xffffffff0000ffff;
          auVar390._0_4_ = iVar266 - (CONCAT12(bVar278,sVar5) & 0xff);
          auVar390._4_4_ = iVar286 - (uint)bVar278;
          auVar390._8_4_ = uVar263;
          auVar390._12_4_ = uVar264;
          auVar428._0_4_ = iVar266 - (CONCAT12(bVar453,sVar6) & 0xff);
          auVar428._4_4_ = iVar286 - (uint)bVar453;
          auVar428._8_4_ = uVar263;
          auVar428._12_4_ = uVar264;
          cVar375 = (char)sVar5;
          auVar290 = SUB1615((undefined1  [16])0x0,1);
          auVar468[0] = -(cVar375 < '\0');
          auVar468[1] = -(cVar375 < '\0');
          auVar468[2] = -(cVar375 < '\0');
          auVar468[3] = -(cVar375 < '\0');
          auVar468[4] = -(sVar5 < 0);
          auVar468[5] = -(sVar5 < 0);
          auVar468[6] = -(sVar5 < 0);
          auVar468[7] = -(sVar5 < 0);
          auVar468[8] = 0;
          auVar468[9] = -('\0' < auVar290[8]);
          auVar468[10] = -('\0' < auVar290[9]);
          auVar468[0xb] = -('\0' < auVar290[10]);
          auVar468[0xc] = -('\0' < auVar290[0xb]);
          auVar468[0xd] = -('\0' < auVar290[0xc]);
          auVar468[0xe] = -('\0' < auVar290[0xd]);
          auVar468[0xf] = -('\0' < auVar290[0xe]);
          cVar375 = (char)sVar6;
          auVar290 = SUB1615((undefined1  [16])0x0,1);
          auVar308[0] = -(cVar375 < '\0');
          auVar308[1] = -(cVar375 < '\0');
          auVar308[2] = -(cVar375 < '\0');
          auVar308[3] = -(cVar375 < '\0');
          auVar308[4] = -(sVar6 < 0);
          auVar308[5] = -(sVar6 < 0);
          auVar308[6] = -(sVar6 < 0);
          auVar308[7] = -(sVar6 < 0);
          auVar308[8] = 0;
          auVar308[9] = -('\0' < auVar290[8]);
          auVar308[10] = -('\0' < auVar290[9]);
          auVar308[0xb] = -('\0' < auVar290[10]);
          auVar308[0xc] = -('\0' < auVar290[0xb]);
          auVar308[0xd] = -('\0' < auVar290[0xc]);
          auVar308[0xe] = -('\0' < auVar290[0xd]);
          auVar308[0xf] = -('\0' < auVar290[0xe]);
          auVar472 = ~auVar468 & auVar339 | auVar390 & auVar468;
          auVar432 = ~auVar308 & auVar358 | auVar428 & auVar308;
          iVar418 = iVar418 + auVar472._0_4_;
          iVar445 = iVar445 + auVar472._4_4_;
          uVar270 = CONCAT44(iVar445,iVar418);
          iVar457 = iVar457 + auVar432._0_4_;
          iVar458 = iVar458 + auVar432._4_4_;
          uVar288 = CONCAT44(iVar458,iVar457);
          if (uVar415 == 0xc) goto LAB_140dce4de;
          sVar5 = *(short *)(puVar283 + 0xd);
          sVar6 = *(short *)(puVar283 + 0xf);
          *(short *)(puVar269 + 0xd) = sVar5;
          *(short *)(puVar269 + 0xf) = sVar6;
          bVar278 = (byte)((ushort)sVar5 >> 8);
          auVar340._8_8_ = 0;
          auVar340._0_8_ =
               (ulonglong)(CONCAT14(bVar278,(uint)CONCAT12(bVar278,sVar5)) & 0xffffff00ff) &
               0xffffffff0000ffff;
          bVar453 = (byte)((ushort)sVar6 >> 8);
          auVar359._8_8_ = 0;
          auVar359._0_8_ =
               (ulonglong)(CONCAT14(bVar453,(uint)CONCAT12(bVar453,sVar6)) & 0xffffff00ff) &
               0xffffffff0000ffff;
          auVar391._0_4_ = iVar266 - (CONCAT12(bVar278,sVar5) & 0xff);
          auVar391._4_4_ = iVar286 - (uint)bVar278;
          auVar391._8_4_ = uVar263;
          auVar391._12_4_ = uVar264;
          auVar429._0_4_ = iVar266 - (CONCAT12(bVar453,sVar6) & 0xff);
          auVar429._4_4_ = iVar286 - (uint)bVar453;
          auVar429._8_4_ = uVar263;
          auVar429._12_4_ = uVar264;
          cVar375 = (char)sVar5;
          auVar290 = SUB1615((undefined1  [16])0x0,1);
          auVar469[0] = -(cVar375 < '\0');
          auVar469[1] = -(cVar375 < '\0');
          auVar469[2] = -(cVar375 < '\0');
          auVar469[3] = -(cVar375 < '\0');
          auVar469[4] = -(sVar5 < 0);
          auVar469[5] = -(sVar5 < 0);
          auVar469[6] = -(sVar5 < 0);
          auVar469[7] = -(sVar5 < 0);
          auVar469[8] = 0;
          auVar469[9] = -('\0' < auVar290[8]);
          auVar469[10] = -('\0' < auVar290[9]);
          auVar469[0xb] = -('\0' < auVar290[10]);
          auVar469[0xc] = -('\0' < auVar290[0xb]);
          auVar469[0xd] = -('\0' < auVar290[0xc]);
          auVar469[0xe] = -('\0' < auVar290[0xd]);
          auVar469[0xf] = -('\0' < auVar290[0xe]);
          cVar375 = (char)sVar6;
          auVar290 = SUB1615((undefined1  [16])0x0,1);
          auVar309[0] = -(cVar375 < '\0');
          auVar309[1] = -(cVar375 < '\0');
          auVar309[2] = -(cVar375 < '\0');
          auVar309[3] = -(cVar375 < '\0');
          auVar309[4] = -(sVar6 < 0);
          auVar309[5] = -(sVar6 < 0);
          auVar309[6] = -(sVar6 < 0);
          auVar309[7] = -(sVar6 < 0);
          auVar309[8] = 0;
          auVar309[9] = -('\0' < auVar290[8]);
          auVar309[10] = -('\0' < auVar290[9]);
          auVar309[0xb] = -('\0' < auVar290[10]);
          auVar309[0xc] = -('\0' < auVar290[0xb]);
          auVar309[0xd] = -('\0' < auVar290[0xc]);
          auVar309[0xe] = -('\0' < auVar290[0xd]);
          auVar309[0xf] = -('\0' < auVar290[0xe]);
          auVar472 = ~auVar469 & auVar340 | auVar391 & auVar469;
          auVar432 = ~auVar309 & auVar359 | auVar429 & auVar309;
          iVar418 = iVar418 + auVar472._0_4_;
          iVar445 = iVar445 + auVar472._4_4_;
          uVar270 = CONCAT44(iVar445,iVar418);
          iVar457 = iVar457 + auVar432._0_4_;
          iVar458 = iVar458 + auVar432._4_4_;
          uVar288 = CONCAT44(iVar458,iVar457);
          if (uVar415 == 0x10) goto LAB_140dce4de;
          sVar5 = *(short *)(puVar283 + 0x11);
          sVar6 = *(short *)(puVar283 + 0x13);
          *(short *)(puVar269 + 0x11) = sVar5;
          *(short *)(puVar269 + 0x13) = sVar6;
          bVar278 = (byte)((ushort)sVar5 >> 8);
          auVar341._8_8_ = 0;
          auVar341._0_8_ =
               (ulonglong)(CONCAT14(bVar278,(uint)CONCAT12(bVar278,sVar5)) & 0xffffff00ff) &
               0xffffffff0000ffff;
          bVar453 = (byte)((ushort)sVar6 >> 8);
          auVar360._8_8_ = 0;
          auVar360._0_8_ =
               (ulonglong)(CONCAT14(bVar453,(uint)CONCAT12(bVar453,sVar6)) & 0xffffff00ff) &
               0xffffffff0000ffff;
          auVar392._0_4_ = iVar266 - (CONCAT12(bVar278,sVar5) & 0xff);
          auVar392._4_4_ = iVar286 - (uint)bVar278;
          auVar392._8_4_ = uVar263;
          auVar392._12_4_ = uVar264;
          auVar430._0_4_ = iVar266 - (CONCAT12(bVar453,sVar6) & 0xff);
          auVar430._4_4_ = iVar286 - (uint)bVar453;
          auVar430._8_4_ = uVar263;
          auVar430._12_4_ = uVar264;
          cVar375 = (char)sVar5;
          auVar290 = SUB1615((undefined1  [16])0x0,1);
          auVar470[0] = -(cVar375 < '\0');
          auVar470[1] = -(cVar375 < '\0');
          auVar470[2] = -(cVar375 < '\0');
          auVar470[3] = -(cVar375 < '\0');
          auVar470[4] = -(sVar5 < 0);
          auVar470[5] = -(sVar5 < 0);
          auVar470[6] = -(sVar5 < 0);
          auVar470[7] = -(sVar5 < 0);
          auVar470[8] = 0;
          auVar470[9] = -('\0' < auVar290[8]);
          auVar470[10] = -('\0' < auVar290[9]);
          auVar470[0xb] = -('\0' < auVar290[10]);
          auVar470[0xc] = -('\0' < auVar290[0xb]);
          auVar470[0xd] = -('\0' < auVar290[0xc]);
          auVar470[0xe] = -('\0' < auVar290[0xd]);
          auVar470[0xf] = -('\0' < auVar290[0xe]);
          cVar375 = (char)sVar6;
          auVar290 = SUB1615((undefined1  [16])0x0,1);
          auVar310[0] = -(cVar375 < '\0');
          auVar310[1] = -(cVar375 < '\0');
          auVar310[2] = -(cVar375 < '\0');
          auVar310[3] = -(cVar375 < '\0');
          auVar310[4] = -(sVar6 < 0);
          auVar310[5] = -(sVar6 < 0);
          auVar310[6] = -(sVar6 < 0);
          auVar310[7] = -(sVar6 < 0);
          auVar310[8] = 0;
          auVar310[9] = -('\0' < auVar290[8]);
          auVar310[10] = -('\0' < auVar290[9]);
          auVar310[0xb] = -('\0' < auVar290[10]);
          auVar310[0xc] = -('\0' < auVar290[0xb]);
          auVar310[0xd] = -('\0' < auVar290[0xc]);
          auVar310[0xe] = -('\0' < auVar290[0xd]);
          auVar310[0xf] = -('\0' < auVar290[0xe]);
          auVar472 = ~auVar470 & auVar341 | auVar392 & auVar470;
          auVar432 = ~auVar310 & auVar360 | auVar430 & auVar310;
          iVar418 = iVar418 + auVar472._0_4_;
          iVar445 = iVar445 + auVar472._4_4_;
          uVar270 = CONCAT44(iVar445,iVar418);
          iVar457 = iVar457 + auVar432._0_4_;
          iVar458 = iVar458 + auVar432._4_4_;
          uVar288 = CONCAT44(iVar458,iVar457);
          if (uVar415 == 0x14) goto LAB_140dce4de;
          sVar5 = *(short *)(puVar283 + 0x15);
          sVar6 = *(short *)(puVar283 + 0x17);
          *(short *)(puVar269 + 0x15) = sVar5;
          *(short *)(puVar269 + 0x17) = sVar6;
          bVar278 = (byte)((ushort)sVar5 >> 8);
          auVar349._8_8_ = 0;
          auVar349._0_8_ =
               (ulonglong)(CONCAT14(bVar278,(uint)CONCAT12(bVar278,sVar5)) & 0xffffff00ff) &
               0xffffffff0000ffff;
          bVar453 = (byte)((ushort)sVar6 >> 8);
          auVar371._8_8_ = 0;
          auVar371._0_8_ =
               (ulonglong)(CONCAT14(bVar453,(uint)CONCAT12(bVar453,sVar6)) & 0xffffff00ff) &
               0xffffffff0000ffff;
          auVar403._0_4_ = iVar266 - (CONCAT12(bVar278,sVar5) & 0xff);
          auVar403._4_4_ = iVar286 - (uint)bVar278;
          auVar403._8_4_ = uVar263;
          auVar403._12_4_ = uVar264;
          auVar438._0_4_ = iVar266 - (CONCAT12(bVar453,sVar6) & 0xff);
          auVar438._4_4_ = iVar286 - (uint)bVar453;
          auVar438._8_4_ = uVar263;
          auVar438._12_4_ = uVar264;
          cVar375 = (char)sVar5;
          auVar290 = SUB1615((undefined1  [16])0x0,1);
          auVar480[0] = -(cVar375 < '\0');
          auVar480[1] = -(cVar375 < '\0');
          auVar480[2] = -(cVar375 < '\0');
          auVar480[3] = -(cVar375 < '\0');
          auVar480[4] = -(sVar5 < 0);
          auVar480[5] = -(sVar5 < 0);
          auVar480[6] = -(sVar5 < 0);
          auVar480[7] = -(sVar5 < 0);
          auVar480[8] = 0;
          auVar480[9] = -('\0' < auVar290[8]);
          auVar480[10] = -('\0' < auVar290[9]);
          auVar480[0xb] = -('\0' < auVar290[10]);
          auVar480[0xc] = -('\0' < auVar290[0xb]);
          auVar480[0xd] = -('\0' < auVar290[0xc]);
          auVar480[0xe] = -('\0' < auVar290[0xd]);
          auVar480[0xf] = -('\0' < auVar290[0xe]);
          cVar375 = (char)sVar6;
          auVar290 = SUB1615((undefined1  [16])0x0,1);
          auVar312[0] = -(cVar375 < '\0');
          auVar312[1] = -(cVar375 < '\0');
          auVar312[2] = -(cVar375 < '\0');
          auVar312[3] = -(cVar375 < '\0');
          auVar312[4] = -(sVar6 < 0);
          auVar312[5] = -(sVar6 < 0);
          auVar312[6] = -(sVar6 < 0);
          auVar312[7] = -(sVar6 < 0);
          auVar312[8] = 0;
          auVar312[9] = -('\0' < auVar290[8]);
          auVar312[10] = -('\0' < auVar290[9]);
          auVar312[0xb] = -('\0' < auVar290[10]);
          auVar312[0xc] = -('\0' < auVar290[0xb]);
          auVar312[0xd] = -('\0' < auVar290[0xc]);
          auVar312[0xe] = -('\0' < auVar290[0xd]);
          auVar312[0xf] = -('\0' < auVar290[0xe]);
          auVar472 = ~auVar480 & auVar349 | auVar403 & auVar480;
          auVar432 = ~auVar312 & auVar371 | auVar438 & auVar312;
          uVar271 = (ulonglong)(uint)(iVar445 + auVar472._4_4_);
          uVar270 = (ulonglong)(uint)(iVar418 + auVar472._0_4_);
          uVar282 = iVar458 + auVar432._4_4_;
          uVar288 = CONCAT44(0,iVar457 + auVar432._0_4_);
          auVar291._8_4_ = uVar282;
          auVar291._0_8_ = uVar288;
          auVar291._12_4_ = 0;
          if (uVar415 != 0x18) {
            sVar5 = *(short *)(puVar283 + 0x19);
            sVar6 = *(short *)(puVar283 + 0x1b);
            *(short *)(puVar269 + 0x19) = sVar5;
            *(short *)(puVar269 + 0x1b) = sVar6;
            bVar278 = (byte)((ushort)sVar5 >> 8);
            bVar453 = (byte)((ushort)sVar6 >> 8);
            auVar385._0_4_ = iVar266 - (CONCAT12(bVar278,sVar5) & 0xff);
            auVar385._4_4_ = iVar286 - (uint)bVar278;
            auVar385._8_4_ = uVar263;
            auVar423._0_4_ = iVar266 - (CONCAT12(bVar453,sVar6) & 0xff);
            auVar423._4_4_ = iVar286 - (uint)bVar453;
            auVar423._8_4_ = uVar263;
            cVar375 = (char)sVar5;
            auVar290 = SUB1615((undefined1  [16])0x0,1);
            auVar464[0] = -(cVar375 < '\0');
            auVar464[1] = -(cVar375 < '\0');
            auVar464[2] = -(cVar375 < '\0');
            auVar464[3] = -(cVar375 < '\0');
            auVar464[4] = -(sVar5 < 0);
            auVar464[5] = -(sVar5 < 0);
            auVar464[6] = -(sVar5 < 0);
            auVar464[7] = -(sVar5 < 0);
            auVar464[8] = 0;
            auVar464[9] = -('\0' < auVar290[8]);
            auVar464[10] = -('\0' < auVar290[9]);
            auVar464[0xb] = -('\0' < auVar290[10]);
            cVar375 = (char)sVar6;
            auVar290 = SUB1615((undefined1  [16])0x0,1);
            auVar305[0] = -(cVar375 < '\0');
            auVar305[1] = -(cVar375 < '\0');
            auVar305[2] = -(cVar375 < '\0');
            auVar305[3] = -(cVar375 < '\0');
            auVar305[4] = -(sVar6 < 0);
            auVar305[5] = -(sVar6 < 0);
            auVar305[6] = -(sVar6 < 0);
            auVar305[7] = -(sVar6 < 0);
            auVar305[8] = 0;
            auVar305[9] = -('\0' < auVar290[8]);
            auVar305[10] = -('\0' < auVar290[9]);
            auVar305[0xb] = -('\0' < auVar290[10]);
            auVar12._8_4_ = 0;
            auVar12._0_8_ =
                 (ulonglong)(CONCAT14(bVar278,(uint)CONCAT12(bVar278,sVar5)) & 0xffffff00ff) &
                 0xffffffff0000ffff;
            auVar466 = ~auVar464 & auVar12 | auVar385 & auVar464;
            auVar13._8_4_ = 0;
            auVar13._0_8_ =
                 (ulonglong)(CONCAT14(bVar453,(uint)CONCAT12(bVar453,sVar6)) & 0xffffff00ff) &
                 0xffffffff0000ffff;
            auVar355 = ~auVar305 & auVar13 | auVar423 & auVar305;
            uVar270 = uVar270 + (auVar466._0_8_ & 0xffffffff);
            uVar271 = uVar271 + auVar466._4_4_;
            auVar291._0_8_ = uVar288 + (auVar355._0_8_ & 0xffffffff);
            auVar291._8_8_ = (ulonglong)uVar282 + (ulonglong)auVar355._4_4_;
            if (uVar415 != 0x1c) {
              sVar5 = *(short *)(puVar283 + 0x1d);
              sVar6 = *(short *)(puVar283 + 0x1f);
              *(short *)(puVar269 + 0x1d) = sVar5;
              *(short *)(puVar269 + 0x1f) = sVar6;
              bVar278 = (byte)((ushort)sVar5 >> 8);
              bVar453 = (byte)((ushort)sVar6 >> 8);
              auVar386._0_4_ = iVar266 - (CONCAT12(bVar278,sVar5) & 0xff);
              auVar386._4_4_ = iVar286 - (uint)bVar278;
              auVar386._8_4_ = uVar263;
              auVar295._0_4_ = iVar266 - (CONCAT12(bVar453,sVar6) & 0xff);
              auVar295._4_4_ = iVar286 - (uint)bVar453;
              auVar295._8_4_ = uVar263;
              cVar375 = (char)sVar5;
              auVar290 = SUB1615((undefined1  [16])0x0,1);
              auVar424[0] = -(cVar375 < '\0');
              auVar424[1] = -(cVar375 < '\0');
              auVar424[2] = -(cVar375 < '\0');
              auVar424[3] = -(cVar375 < '\0');
              auVar424[4] = -(sVar5 < 0);
              auVar424[5] = -(sVar5 < 0);
              auVar424[6] = -(sVar5 < 0);
              auVar424[7] = -(sVar5 < 0);
              auVar424[8] = 0;
              auVar424[9] = -('\0' < auVar290[8]);
              auVar424[10] = -('\0' < auVar290[9]);
              auVar424[0xb] = -('\0' < auVar290[10]);
              cVar375 = (char)sVar6;
              auVar290 = SUB1615((undefined1  [16])0x0,1);
              auVar306[0] = -(cVar375 < '\0');
              auVar306[1] = -(cVar375 < '\0');
              auVar306[2] = -(cVar375 < '\0');
              auVar306[3] = -(cVar375 < '\0');
              auVar306[4] = -(sVar6 < 0);
              auVar306[5] = -(sVar6 < 0);
              auVar306[6] = -(sVar6 < 0);
              auVar306[7] = -(sVar6 < 0);
              auVar306[8] = 0;
              auVar306[9] = -('\0' < auVar290[8]);
              auVar306[10] = -('\0' < auVar290[9]);
              auVar306[0xb] = -('\0' < auVar290[10]);
              auVar14._8_4_ = 0;
              auVar14._0_8_ =
                   (ulonglong)(CONCAT14(bVar278,(uint)CONCAT12(bVar278,sVar5)) & 0xffffff00ff) &
                   0xffffffff0000ffff;
              auVar466 = ~auVar424 & auVar14 | auVar386 & auVar424;
              auVar15._8_4_ = 0;
              auVar15._0_8_ =
                   (ulonglong)(CONCAT14(bVar453,(uint)CONCAT12(bVar453,sVar6)) & 0xffffff00ff) &
                   0xffffffff0000ffff;
              auVar355 = ~auVar306 & auVar15 | auVar295 & auVar306;
              uVar270 = uVar270 + (auVar466._0_8_ & 0xffffffff);
              uVar271 = uVar271 + auVar466._4_4_;
              auVar291._0_8_ = auVar291._0_8_ + (auVar355._0_8_ & 0xffffffff);
              auVar291._8_8_ = auVar291._8_8_ + (ulonglong)auVar355._4_4_;
            }
          }
        }
        pbVar273 = pbVar273 + uVar281;
        pbVar287 = pbVar287 + uVar281;
        uVar270 = uVar271 + auVar291._8_8_ + uVar270 + auVar291._0_8_;
        if (uVar415 == uVar284) goto LAB_140dce535;
      }
      lVar279 = uVar267 - uVar281;
      do {
        bVar278 = *pbVar273;
        *pbVar287 = bVar278;
        uVar415 = 0x100 - bVar278;
        if (-1 < (char)bVar278) {
          uVar415 = (uint)bVar278;
        }
        uVar270 = uVar270 + uVar415;
        pbVar287 = pbVar287 + 1;
        pbVar273 = pbVar273 + 1;
        lVar279 = lVar279 + -1;
      } while (lVar279 != 0);
    }
LAB_140dce535:
    uVar263 = _UNK_1531f2ba8;
    iVar286 = _UNK_1531f2ba4;
    iVar266 = ___xmm_00000000000000000000010000000100;
    uVar281 = uVar7 - uVar267;
    if (uVar267 <= uVar7 && uVar281 != 0) {
      puVar269 = puVar283;
      if (3 < uVar281) {
        uVar288 = uVar281 & 0xfffffffffffffffc;
        uVar267 = uVar267 + uVar288;
        lVar279 = 0;
        uVar271 = 0;
        lVar294 = 0;
        lVar299 = 0;
        do {
          bVar455 = (char)*(undefined2 *)(pbVar273 + uVar271) -
                    (char)*(undefined2 *)(puVar283 + uVar271 + 1);
          bVar326 = (char)((ushort)*(undefined2 *)(pbVar273 + uVar271) >> 8) -
                    (char)((ushort)*(undefined2 *)(puVar283 + uVar271 + 1) >> 8);
          bVar278 = (char)*(undefined2 *)(pbVar273 + uVar271 + 2) -
                    (char)*(undefined2 *)(puVar283 + uVar271 + 3);
          bVar453 = (char)((ushort)*(undefined2 *)(pbVar273 + uVar271 + 2) >> 8) -
                    (char)((ushort)*(undefined2 *)(puVar283 + uVar271 + 3) >> 8);
          *(ushort *)(pbVar287 + uVar271) = CONCAT11(bVar326,bVar455);
          *(ushort *)(pbVar287 + uVar271 + 2) = CONCAT11(bVar453,bVar278);
          auVar384._0_4_ = iVar266 - (CONCAT12(bVar326,(ushort)bVar455) & 0xffff);
          auVar384._4_4_ = iVar286 - (uint)bVar326;
          auVar384._8_4_ = uVar263;
          auVar422._0_4_ = iVar266 - (CONCAT12(bVar453,(ushort)bVar278) & 0xffff);
          auVar422._4_4_ = iVar286 - (uint)bVar453;
          auVar422._8_4_ = uVar263;
          auVar290 = SUB1615((undefined1  [16])0x0,1);
          auVar463[0] = -((char)bVar455 < '\0');
          auVar463[1] = -((char)bVar455 < '\0');
          auVar463[2] = -((char)bVar455 < '\0');
          auVar463[3] = -((char)bVar455 < '\0');
          auVar463[4] = -((char)bVar326 < '\0');
          auVar463[5] = -((char)bVar326 < '\0');
          auVar463[6] = -((char)bVar326 < '\0');
          auVar463[7] = -((char)bVar326 < '\0');
          auVar463[8] = 0;
          auVar463[9] = -('\0' < auVar290[8]);
          auVar463[10] = -('\0' < auVar290[9]);
          auVar463[0xb] = -('\0' < auVar290[10]);
          auVar290 = SUB1615((undefined1  [16])0x0,1);
          auVar315[0] = -((char)bVar278 < '\0');
          auVar315[1] = -((char)bVar278 < '\0');
          auVar315[2] = -((char)bVar278 < '\0');
          auVar315[3] = -((char)bVar278 < '\0');
          auVar315[4] = -((char)bVar453 < '\0');
          auVar315[5] = -((char)bVar453 < '\0');
          auVar315[6] = -((char)bVar453 < '\0');
          auVar315[7] = -((char)bVar453 < '\0');
          auVar315[8] = 0;
          auVar315[9] = -('\0' < auVar290[8]);
          auVar315[10] = -('\0' < auVar290[9]);
          auVar315[0xb] = -('\0' < auVar290[10]);
          auVar10._8_4_ = 0;
          auVar10._0_8_ =
               (ulonglong)CONCAT14(bVar326,(uint)CONCAT12(bVar326,(ushort)bVar455)) &
               0xffffffff0000ffff;
          auVar466 = ~auVar463 & auVar10 | auVar384 & auVar463;
          auVar11._8_4_ = 0;
          auVar11._0_8_ =
               (ulonglong)CONCAT14(bVar453,(uint)CONCAT12(bVar453,(ushort)bVar278)) &
               0xffffffff0000ffff;
          auVar355 = ~auVar315 & auVar11 | auVar422 & auVar315;
          uVar270 = uVar270 + (auVar466._0_8_ & 0xffffffff);
          lVar279 = lVar279 + (ulonglong)auVar466._4_4_;
          lVar294 = lVar294 + (auVar355._0_8_ & 0xffffffff);
          lVar299 = lVar299 + (ulonglong)auVar355._4_4_;
          uVar271 = uVar271 + 4;
        } while (uVar288 != uVar271);
        uVar270 = lVar299 + lVar279 + lVar294 + uVar270;
        pbVar287 = pbVar287 + uVar288;
        pbVar273 = pbVar273 + uVar288;
        puVar269 = puVar283 + uVar288;
        if (uVar281 == uVar288) goto LAB_140dceddb;
      }
      lVar279 = 0;
      do {
        bVar278 = pbVar273[lVar279] - puVar269[lVar279 + 1];
        uVar281 = (ulonglong)(0x100 - bVar278);
        if (-1 < (char)bVar278) {
          uVar281 = (ulonglong)bVar278;
        }
        pbVar287[lVar279] = bVar278;
        uVar270 = uVar270 + uVar281;
        lVar279 = lVar279 + 1;
      } while (uVar7 - uVar267 != lVar279);
    }
LAB_140dceddb:
    if (uVar270 < uVar276) {
      puVar283 = param_1->try_row;
      uVar276 = uVar270;
      if (param_1->tst_row != (uchar *)0x0) {
        param_1->try_row = param_1->tst_row;
        param_1->tst_row = puVar283;
      }
    }
  }
  if (bVar268 == 0x20) {
    puVar283 = param_1->try_row;
    *puVar283 = '\x02';
    if (uVar7 != 0) {
      puVar269 = param_1->prev_row;
      puVar285 = param_1->row_buf;
      if (uVar7 < 8) {
        uVar267 = 0;
      }
      else {
        if (uVar7 < 0x20) {
          uVar270 = 0;
        }
        else {
          uVar267 = uVar7 & 0xffffffffffffffe0;
          uVar270 = 0;
          do {
            puVar272 = puVar285 + uVar270 + 1;
            uVar123 = puVar272[1];
            uVar124 = puVar272[2];
            uVar125 = puVar272[3];
            uVar126 = puVar272[4];
            uVar127 = puVar272[5];
            uVar128 = puVar272[6];
            uVar129 = puVar272[7];
            uVar130 = puVar272[8];
            uVar131 = puVar272[9];
            uVar132 = puVar272[10];
            uVar133 = puVar272[0xb];
            uVar134 = puVar272[0xc];
            uVar135 = puVar272[0xd];
            uVar136 = puVar272[0xe];
            uVar137 = puVar272[0xf];
            puVar280 = puVar285 + uVar270 + 0x11;
            uVar138 = *puVar280;
            uVar139 = puVar280[1];
            uVar140 = puVar280[2];
            uVar141 = puVar280[3];
            uVar142 = puVar280[4];
            uVar143 = puVar280[5];
            uVar144 = puVar280[6];
            uVar145 = puVar280[7];
            uVar146 = puVar280[8];
            uVar147 = puVar280[9];
            uVar148 = puVar280[10];
            uVar149 = puVar280[0xb];
            uVar150 = puVar280[0xc];
            uVar151 = puVar280[0xd];
            uVar152 = puVar280[0xe];
            uVar153 = puVar280[0xf];
            puVar280 = puVar269 + uVar270 + 1;
            uVar154 = puVar280[1];
            uVar155 = puVar280[2];
            uVar156 = puVar280[3];
            uVar157 = puVar280[4];
            uVar158 = puVar280[5];
            uVar159 = puVar280[6];
            uVar160 = puVar280[7];
            uVar161 = puVar280[8];
            uVar162 = puVar280[9];
            uVar163 = puVar280[10];
            uVar164 = puVar280[0xb];
            uVar165 = puVar280[0xc];
            uVar166 = puVar280[0xd];
            uVar167 = puVar280[0xe];
            uVar168 = puVar280[0xf];
            puVar275 = puVar269 + uVar270 + 0x11;
            uVar169 = *puVar275;
            uVar170 = puVar275[1];
            uVar171 = puVar275[2];
            uVar172 = puVar275[3];
            uVar173 = puVar275[4];
            uVar174 = puVar275[5];
            uVar175 = puVar275[6];
            uVar176 = puVar275[7];
            uVar177 = puVar275[8];
            uVar178 = puVar275[9];
            uVar179 = puVar275[10];
            uVar180 = puVar275[0xb];
            uVar181 = puVar275[0xc];
            uVar182 = puVar275[0xd];
            uVar183 = puVar275[0xe];
            uVar184 = puVar275[0xf];
            puVar275 = puVar283 + uVar270 + 1;
            *puVar275 = *puVar272 - *puVar280;
            puVar275[1] = uVar123 - uVar154;
            puVar275[2] = uVar124 - uVar155;
            puVar275[3] = uVar125 - uVar156;
            puVar275[4] = uVar126 - uVar157;
            puVar275[5] = uVar127 - uVar158;
            puVar275[6] = uVar128 - uVar159;
            puVar275[7] = uVar129 - uVar160;
            puVar275[8] = uVar130 - uVar161;
            puVar275[9] = uVar131 - uVar162;
            puVar275[10] = uVar132 - uVar163;
            puVar275[0xb] = uVar133 - uVar164;
            puVar275[0xc] = uVar134 - uVar165;
            puVar275[0xd] = uVar135 - uVar166;
            puVar275[0xe] = uVar136 - uVar167;
            puVar275[0xf] = uVar137 - uVar168;
            puVar272 = puVar283 + uVar270 + 0x11;
            *puVar272 = uVar138 - uVar169;
            puVar272[1] = uVar139 - uVar170;
            puVar272[2] = uVar140 - uVar171;
            puVar272[3] = uVar141 - uVar172;
            puVar272[4] = uVar142 - uVar173;
            puVar272[5] = uVar143 - uVar174;
            puVar272[6] = uVar144 - uVar175;
            puVar272[7] = uVar145 - uVar176;
            puVar272[8] = uVar146 - uVar177;
            puVar272[9] = uVar147 - uVar178;
            puVar272[10] = uVar148 - uVar179;
            puVar272[0xb] = uVar149 - uVar180;
            puVar272[0xc] = uVar150 - uVar181;
            puVar272[0xd] = uVar151 - uVar182;
            puVar272[0xe] = uVar152 - uVar183;
            puVar272[0xf] = uVar153 - uVar184;
            uVar270 = uVar270 + 0x20;
          } while (uVar267 != uVar270);
          if (uVar7 == uVar267) goto LAB_140dcea66;
          uVar270 = uVar267;
          if ((uVar7 & 0x18) == 0) {
            puVar285 = puVar285 + uVar267;
            puVar283 = puVar283 + uVar267;
            puVar269 = puVar269 + uVar267;
            goto LAB_140dcea45;
          }
        }
        uVar267 = uVar7 & 0xfffffffffffffff8;
        do {
          uVar4 = *(undefined8 *)(puVar285 + uVar270 + 1);
          uVar3 = *(undefined8 *)(puVar269 + uVar270 + 1);
          *(ulonglong *)(puVar283 + uVar270 + 1) =
               CONCAT17((char)((ulonglong)uVar4 >> 0x38) - (char)((ulonglong)uVar3 >> 0x38),
                        CONCAT16((char)((ulonglong)uVar4 >> 0x30) - (char)((ulonglong)uVar3 >> 0x30)
                                 ,CONCAT15((char)((ulonglong)uVar4 >> 0x28) -
                                           (char)((ulonglong)uVar3 >> 0x28),
                                           CONCAT14((char)((ulonglong)uVar4 >> 0x20) -
                                                    (char)((ulonglong)uVar3 >> 0x20),
                                                    CONCAT13((char)((ulonglong)uVar4 >> 0x18) -
                                                             (char)((ulonglong)uVar3 >> 0x18),
                                                             CONCAT12((char)((ulonglong)uVar4 >>
                                                                            0x10) -
                                                                      (char)((ulonglong)uVar3 >>
                                                                            0x10),
                                                                      CONCAT11((char)((ulonglong)
                                                                                      uVar4 >> 8) -
                                                                               (char)((ulonglong)
                                                                                      uVar3 >> 8),
                                                                               (char)uVar4 -
                                                                               (char)uVar3)))))));
          uVar270 = uVar270 + 8;
        } while (uVar267 != uVar270);
        puVar283 = puVar283 + uVar267;
        puVar285 = puVar285 + uVar267;
        puVar269 = puVar269 + uVar267;
        if (uVar7 == uVar267) goto LAB_140dcea66;
      }
LAB_140dcea45:
      lVar279 = 0;
      do {
        puVar283[lVar279 + 1] = puVar285[lVar279 + 1] - puVar269[lVar279 + 1];
        lVar279 = lVar279 + 1;
      } while (uVar7 - uVar267 != lVar279);
    }
LAB_140dcea66:
    puVar283 = param_1->try_row;
LAB_140dcea7c:
    if ((bVar268 & 0x40) != 0) {
      puVar272 = param_1->try_row;
      *puVar272 = '\x03';
      uVar263 = _UNK_1531f2ba8;
      iVar286 = _UNK_1531f2ba4;
      iVar266 = ___xmm_00000000000000000000010000000100;
      auVar432 = ___xmm_7f7f7f7f7f7f7f7f7f7f7f7f7f7f7f7f;
      puVar280 = param_1->prev_row;
      puVar275 = param_1->row_buf;
      pbVar273 = puVar272 + 1;
      pbVar287 = puVar280 + 1;
      puVar269 = puVar275 + 1;
      uVar267 = 0;
      puVar285 = puVar269;
      if (bVar449 == 0) {
        uVar270 = 0;
      }
      else {
        if (uVar284 - 1 < 3) {
          uVar270 = 0;
        }
        else {
          uVar281 = (ulonglong)(uVar284 - 1) + 1;
          uVar267 = uVar281 & 0x1fffffffc;
          puVar285 = puVar269 + uVar267;
          pbVar287 = pbVar287 + uVar267;
          pbVar273 = pbVar273 + uVar267;
          uVar270 = 0;
          lVar299 = 0;
          lVar303 = 0;
          lVar279 = 0;
          lVar294 = 0;
          do {
            auVar472 = ZEXT216(*(ushort *)(puVar280 + uVar270 + 1) >> 1) & auVar432;
            bVar453 = (char)*(undefined2 *)(puVar275 + uVar270 + 1) - auVar472[0];
            cVar377 = (char)((ushort)*(undefined2 *)(puVar275 + uVar270 + 1) >> 8) - auVar472[1];
            auVar472 = ZEXT216(*(ushort *)(puVar280 + uVar270 + 3) >> 1) & auVar432;
            bVar278 = (char)*(undefined2 *)(puVar275 + uVar270 + 3) - auVar472[0];
            cVar375 = (char)((ushort)*(undefined2 *)(puVar275 + uVar270 + 3) >> 8) - auVar472[1];
            *(ushort *)(puVar272 + uVar270 + 1) = CONCAT11(cVar377,bVar453);
            *(ushort *)(puVar272 + uVar270 + 3) = CONCAT11(cVar375,bVar278);
            auVar243._8_7_ = 0;
            auVar243._0_8_ = SUB158(ZEXT815(0),7);
            auVar186._9_6_ = 0;
            auVar186._0_9_ = SUB159(auVar243 << 0x38,6);
            auVar244._10_5_ = 0;
            auVar244._0_10_ = SUB1510(auVar186 << 0x30,5);
            auVar187._11_4_ = 0;
            auVar187._0_11_ = SUB1511(auVar244 << 0x28,4);
            auVar290[2] = cVar377;
            auVar290._0_2_ = CONCAT11(cVar377,bVar453);
            auVar290._3_12_ = SUB1512(auVar187 << 0x20,3);
            auVar110[1] = 0;
            auVar110[0] = bVar453;
            auVar110._2_13_ = auVar290._2_13_;
            auVar50._4_2_ = auVar290._2_2_;
            auVar50._0_4_ = auVar110._0_4_;
            auVar50._6_8_ = SUB148(ZEXT214(0) << 0x40,6);
            uVar415 = auVar110._0_4_ & 0xffff;
            auVar83._4_10_ = auVar50._4_10_;
            auVar83._0_4_ = uVar415;
            auVar245._8_7_ = 0;
            auVar245._0_8_ = SUB158(ZEXT815(0),7);
            auVar188._9_6_ = 0;
            auVar188._0_9_ = SUB159(auVar245 << 0x38,6);
            auVar246._10_5_ = 0;
            auVar246._0_10_ = SUB1510(auVar188 << 0x30,5);
            auVar189._11_4_ = 0;
            auVar189._0_11_ = SUB1511(auVar246 << 0x28,4);
            auVar101[2] = cVar375;
            auVar101._0_2_ = CONCAT11(cVar375,bVar278);
            auVar101._3_12_ = SUB1512(auVar189 << 0x20,3);
            auVar111[1] = 0;
            auVar111[0] = bVar278;
            auVar111._2_13_ = auVar101._2_13_;
            auVar51._4_2_ = auVar101._2_2_;
            auVar51._0_4_ = auVar111._0_4_;
            auVar51._6_8_ = SUB148(ZEXT214(0) << 0x40,6);
            uVar282 = auVar111._0_4_ & 0xffff;
            auVar84._4_10_ = auVar51._4_10_;
            auVar84._0_4_ = uVar282;
            auVar421._0_4_ = iVar266 - uVar415;
            auVar421._4_4_ = iVar286 - auVar50._4_4_;
            auVar421._8_4_ = uVar263;
            auVar462._0_4_ = iVar266 - uVar282;
            auVar462._4_4_ = iVar286 - auVar51._4_4_;
            auVar462._8_4_ = uVar263;
            auVar290 = SUB1615((undefined1  [16])0x0,1);
            auVar489[0] = -((char)bVar453 < '\0');
            auVar489[1] = -((char)bVar453 < '\0');
            auVar489[2] = -((char)bVar453 < '\0');
            auVar489[3] = -((char)bVar453 < '\0');
            auVar489[4] = -(cVar377 < '\0');
            auVar489[5] = -(cVar377 < '\0');
            auVar489[6] = -(cVar377 < '\0');
            auVar489[7] = -(cVar377 < '\0');
            auVar489[8] = 0;
            auVar489[9] = -('\0' < auVar290[8]);
            auVar489[10] = -('\0' < auVar290[9]);
            auVar489[0xb] = -('\0' < auVar290[10]);
            auVar290 = SUB1615((undefined1  [16])0x0,1);
            auVar335[0] = -((char)bVar278 < '\0');
            auVar335[1] = -((char)bVar278 < '\0');
            auVar335[2] = -((char)bVar278 < '\0');
            auVar335[3] = -((char)bVar278 < '\0');
            auVar335[4] = -(cVar375 < '\0');
            auVar335[5] = -(cVar375 < '\0');
            auVar335[6] = -(cVar375 < '\0');
            auVar335[7] = -(cVar375 < '\0');
            auVar335[8] = 0;
            auVar335[9] = -('\0' < auVar290[8]);
            auVar335[10] = -('\0' < auVar290[9]);
            auVar335[0xb] = -('\0' < auVar290[10]);
            auVar466 = ~auVar489 & auVar83._0_12_ | auVar421 & auVar489;
            auVar355 = ~auVar335 & auVar84._0_12_ | auVar462 & auVar335;
            lVar299 = lVar299 + (auVar466._0_8_ & 0xffffffff);
            lVar303 = lVar303 + (ulonglong)auVar466._4_4_;
            lVar279 = lVar279 + (auVar355._0_8_ & 0xffffffff);
            lVar294 = lVar294 + (ulonglong)auVar355._4_4_;
            uVar270 = uVar270 + 4;
          } while (uVar267 != uVar270);
          uVar270 = lVar294 + lVar303 + lVar279 + lVar299;
          if (uVar281 == uVar267) goto LAB_140dcec56;
        }
        iVar266 = uVar284 - (int)uVar267;
        do {
          bVar278 = *puVar285 - (*pbVar287 >> 1);
          *pbVar273 = bVar278;
          uVar415 = 0x100 - bVar278;
          if (-1 < (char)bVar278) {
            uVar415 = (uint)bVar278;
          }
          uVar270 = uVar270 + uVar415;
          pbVar273 = pbVar273 + 1;
          pbVar287 = pbVar287 + 1;
          puVar285 = puVar285 + 1;
          iVar266 = iVar266 + -1;
        } while (iVar266 != 0);
      }
LAB_140dcec56:
      uVar263 = _UNK_1531f2ba8;
      iVar286 = _UNK_1531f2ba4;
      iVar266 = ___xmm_00000000000000000000010000000100;
      auVar432 = ___xmm_7f7f7f7f7f7f7f7f7f7f7f7f7f7f7f7f;
      uVar267 = uVar7 - uVar274;
      if (uVar274 <= uVar7 && uVar267 != 0) {
        uVar415 = uVar284;
        if ((1 < uVar267) &&
           (~uVar274 + uVar7 >> 0x20 == 0 && (uint)(~uVar274 + uVar7) <= -uVar284 - 2)) {
          uVar281 = uVar267 & 0xfffffffffffffffe;
          puVar275 = puVar275 + uVar281;
          lVar279 = 0;
          uVar288 = 0;
          do {
            uVar506 = *(ushort *)(puVar269 + uVar288) & *(ushort *)(pbVar287 + uVar288);
            auVar472 = ZEXT216((ushort)((*(ushort *)(puVar269 + uVar288) ^
                                        *(ushort *)(pbVar287 + uVar288)) >> 1)) & auVar432;
            bVar278 = (char)*(undefined2 *)(puVar285 + uVar288) - (auVar472[0] + (char)uVar506);
            cVar375 = (char)((ushort)*(undefined2 *)(puVar285 + uVar288) >> 8) -
                      (auVar472[1] + (char)(uVar506 >> 8));
            *(ushort *)(pbVar273 + uVar288) = CONCAT11(cVar375,bVar278);
            auVar249._8_7_ = 0;
            auVar249._0_8_ = SUB158(ZEXT815(0),7);
            auVar224._9_6_ = 0;
            auVar224._0_9_ = SUB159(auVar249 << 0x38,6);
            auVar250._10_5_ = 0;
            auVar250._0_10_ = SUB1510(auVar224 << 0x30,5);
            auVar225._11_4_ = 0;
            auVar225._0_11_ = SUB1511(auVar250 << 0x28,4);
            auVar109[2] = cVar375;
            auVar109._0_2_ = CONCAT11(cVar375,bVar278);
            auVar109._3_12_ = SUB1512(auVar225 << 0x20,3);
            auVar121[1] = 0;
            auVar121[0] = bVar278;
            auVar121._2_13_ = auVar109._2_13_;
            auVar82._4_2_ = auVar109._2_2_;
            auVar82._0_4_ = auVar121._0_4_;
            auVar82._6_8_ = SUB148(ZEXT214(0) << 0x40,6);
            uVar415 = auVar121._0_4_ & 0xffff;
            auVar94._4_10_ = auVar82._4_10_;
            auVar94._0_4_ = uVar415;
            auVar337._0_4_ = iVar266 - uVar415;
            auVar337._4_4_ = iVar286 - auVar82._4_4_;
            auVar337._8_4_ = uVar263;
            auVar290 = SUB1615((undefined1  [16])0x0,1);
            auVar356[0] = -((char)bVar278 < '\0');
            auVar356[1] = -((char)bVar278 < '\0');
            auVar356[2] = -((char)bVar278 < '\0');
            auVar356[3] = -((char)bVar278 < '\0');
            auVar356[4] = -(cVar375 < '\0');
            auVar356[5] = -(cVar375 < '\0');
            auVar356[6] = -(cVar375 < '\0');
            auVar356[7] = -(cVar375 < '\0');
            auVar356[8] = 0;
            auVar356[9] = -('\0' < auVar290[8]);
            auVar356[10] = -('\0' < auVar290[9]);
            auVar356[0xb] = -('\0' < auVar290[10]);
            auVar355 = ~auVar356 & auVar94._0_12_ | auVar337 & auVar356;
            uVar270 = uVar270 + (auVar355._0_8_ & 0xffffffff);
            lVar279 = lVar279 + (ulonglong)auVar355._4_4_;
            uVar288 = uVar288 + 2;
          } while (uVar281 != uVar288);
          uVar270 = lVar279 + uVar270;
          pbVar287 = pbVar287 + uVar281;
          pbVar273 = pbVar273 + uVar281;
          puVar285 = puVar285 + uVar281;
          uVar415 = uVar284 + (int)uVar281;
          if (uVar267 == uVar281) goto LAB_140dcf76c;
        }
        lVar279 = 0;
        do {
          bVar278 = puVar285[lVar279] -
                    (char)((uint)puVar275[lVar279 + 1] + (uint)pbVar287[lVar279] >> 1);
          pbVar273[lVar279] = bVar278;
          uVar282 = 0x100 - bVar278;
          if (-1 < (char)bVar278) {
            uVar282 = (uint)bVar278;
          }
          uVar270 = uVar270 + uVar282;
          iVar266 = (int)lVar279;
          lVar279 = lVar279 + 1;
        } while (iVar266 + uVar415 + 1 < uVar7);
      }
LAB_140dcf76c:
      if (uVar270 < uVar276) {
        puVar283 = param_1->try_row;
        uVar276 = uVar270;
        if (param_1->tst_row != (uchar *)0x0) {
          param_1->try_row = param_1->tst_row;
          param_1->tst_row = puVar283;
        }
      }
    }
  }
  else {
    if ((bVar268 & 0x20) != 0) {
      puVar269 = param_1->try_row;
      *puVar269 = '\x02';
      uVar263 = _UNK_1531f2ba8;
      iVar286 = _UNK_1531f2ba4;
      iVar266 = ___xmm_00000000000000000000010000000100;
      if (uVar7 == 0) {
        uVar267 = 0;
      }
      else {
        puVar285 = param_1->prev_row;
        puVar272 = param_1->row_buf;
        if (uVar7 < 4) {
          uVar267 = 0;
          uVar270 = 0;
          puVar280 = puVar272;
          puVar265 = puVar269;
          puVar275 = puVar285;
        }
        else {
          uVar270 = uVar7 & 0xfffffffffffffffc;
          puVar280 = puVar272 + uVar270;
          puVar275 = puVar285 + uVar270;
          puVar265 = puVar269 + uVar270;
          uVar267 = 0;
          lVar299 = 0;
          lVar303 = 0;
          lVar279 = 0;
          lVar294 = 0;
          do {
            bVar455 = (char)*(undefined2 *)(puVar272 + uVar267 + 1) -
                      (char)*(undefined2 *)(puVar285 + uVar267 + 1);
            bVar326 = (char)((ushort)*(undefined2 *)(puVar272 + uVar267 + 1) >> 8) -
                      (char)((ushort)*(undefined2 *)(puVar285 + uVar267 + 1) >> 8);
            bVar278 = (char)*(undefined2 *)(puVar272 + uVar267 + 3) -
                      (char)*(undefined2 *)(puVar285 + uVar267 + 3);
            bVar453 = (char)((ushort)*(undefined2 *)(puVar272 + uVar267 + 3) >> 8) -
                      (char)((ushort)*(undefined2 *)(puVar285 + uVar267 + 3) >> 8);
            *(ushort *)(puVar269 + uVar267 + 1) = CONCAT11(bVar326,bVar455);
            *(ushort *)(puVar269 + uVar267 + 3) = CONCAT11(bVar453,bVar278);
            auVar383._0_4_ = iVar266 - (CONCAT12(bVar326,(ushort)bVar455) & 0xffff);
            auVar383._4_4_ = iVar286 - (uint)bVar326;
            auVar383._8_4_ = uVar263;
            auVar420._0_4_ = iVar266 - (CONCAT12(bVar453,(ushort)bVar278) & 0xffff);
            auVar420._4_4_ = iVar286 - (uint)bVar453;
            auVar420._8_4_ = uVar263;
            auVar290 = SUB1615((undefined1  [16])0x0,1);
            auVar461[0] = -((char)bVar455 < '\0');
            auVar461[1] = -((char)bVar455 < '\0');
            auVar461[2] = -((char)bVar455 < '\0');
            auVar461[3] = -((char)bVar455 < '\0');
            auVar461[4] = -((char)bVar326 < '\0');
            auVar461[5] = -((char)bVar326 < '\0');
            auVar461[6] = -((char)bVar326 < '\0');
            auVar461[7] = -((char)bVar326 < '\0');
            auVar461[8] = 0;
            auVar461[9] = -('\0' < auVar290[8]);
            auVar461[10] = -('\0' < auVar290[9]);
            auVar461[0xb] = -('\0' < auVar290[10]);
            auVar290 = SUB1615((undefined1  [16])0x0,1);
            auVar314[0] = -((char)bVar278 < '\0');
            auVar314[1] = -((char)bVar278 < '\0');
            auVar314[2] = -((char)bVar278 < '\0');
            auVar314[3] = -((char)bVar278 < '\0');
            auVar314[4] = -((char)bVar453 < '\0');
            auVar314[5] = -((char)bVar453 < '\0');
            auVar314[6] = -((char)bVar453 < '\0');
            auVar314[7] = -((char)bVar453 < '\0');
            auVar314[8] = 0;
            auVar314[9] = -('\0' < auVar290[8]);
            auVar314[10] = -('\0' < auVar290[9]);
            auVar314[0xb] = -('\0' < auVar290[10]);
            auVar8._8_4_ = 0;
            auVar8._0_8_ = (ulonglong)CONCAT14(bVar326,(uint)CONCAT12(bVar326,(ushort)bVar455)) &
                           0xffffffff0000ffff;
            auVar466 = ~auVar461 & auVar8 | auVar383 & auVar461;
            auVar9._8_4_ = 0;
            auVar9._0_8_ = (ulonglong)CONCAT14(bVar453,(uint)CONCAT12(bVar453,(ushort)bVar278)) &
                           0xffffffff0000ffff;
            auVar355 = ~auVar314 & auVar9 | auVar420 & auVar314;
            lVar299 = lVar299 + (auVar466._0_8_ & 0xffffffff);
            lVar303 = lVar303 + (ulonglong)auVar466._4_4_;
            lVar279 = lVar279 + (auVar355._0_8_ & 0xffffffff);
            lVar294 = lVar294 + (ulonglong)auVar355._4_4_;
            uVar267 = uVar267 + 4;
          } while (uVar270 != uVar267);
          uVar267 = lVar294 + lVar303 + lVar279 + lVar299;
          if (uVar7 == uVar270) goto LAB_140dce82f;
        }
        lVar279 = 0;
        do {
          bVar278 = puVar280[lVar279 + 1] - puVar275[lVar279 + 1];
          uVar281 = (ulonglong)(0x100 - bVar278);
          if (-1 < (char)bVar278) {
            uVar281 = (ulonglong)bVar278;
          }
          puVar265[lVar279 + 1] = bVar278;
          uVar267 = uVar267 + uVar281;
          lVar279 = lVar279 + 1;
        } while (uVar7 - uVar270 != lVar279);
      }
LAB_140dce82f:
      if (uVar267 < uVar276) {
        puVar283 = param_1->try_row;
        uVar276 = uVar267;
        if (param_1->tst_row != (uchar *)0x0) {
          param_1->try_row = param_1->tst_row;
          param_1->tst_row = puVar283;
        }
      }
    }
    if (bVar268 != 0x40) goto LAB_140dcea7c;
    puVar269 = param_1->try_row;
    *puVar269 = '\x03';
    auVar432 = ___xmm_7f7f7f7f7f7f7f7f7f7f7f7f7f7f7f7f;
    puVar285 = param_1->row_buf;
    puVar269 = puVar269 + 1;
    pbVar273 = param_1->prev_row + 1;
    puVar283 = puVar285 + 1;
    puVar272 = puVar283;
    if (bVar449 != 0) {
      uVar267 = 0;
      if (0xe < uVar284 - 1) {
        uVar270 = (ulonglong)(uVar284 - 1) + 1;
        uVar267 = uVar270 & 0xfffffffffffffff0;
        pbVar287 = pbVar273 + uVar267;
        puVar280 = puVar269 + uVar267;
        uVar281 = 0;
        do {
          puVar272 = puVar283 + uVar281;
          uVar123 = puVar272[1];
          uVar124 = puVar272[2];
          uVar125 = puVar272[3];
          uVar126 = puVar272[4];
          uVar127 = puVar272[5];
          uVar128 = puVar272[6];
          uVar129 = puVar272[7];
          uVar130 = puVar272[8];
          uVar131 = puVar272[9];
          uVar132 = puVar272[10];
          uVar133 = puVar272[0xb];
          uVar134 = puVar272[0xc];
          uVar135 = puVar272[0xd];
          uVar136 = puVar272[0xe];
          uVar137 = puVar272[0xf];
          puVar1 = (ushort *)(pbVar273 + uVar281);
          auVar297._0_2_ = *puVar1 >> 1;
          auVar297._2_2_ = puVar1[1] >> 1;
          auVar297._4_2_ = puVar1[2] >> 1;
          auVar297._6_2_ = puVar1[3] >> 1;
          auVar297._8_2_ = puVar1[4] >> 1;
          auVar297._10_2_ = puVar1[5] >> 1;
          auVar297._12_2_ = puVar1[6] >> 1;
          auVar297._14_2_ = puVar1[7] >> 1;
          auVar297 = auVar297 & auVar432;
          puVar275 = puVar269 + uVar281;
          *puVar275 = *puVar272 - auVar297[0];
          puVar275[1] = uVar123 - auVar297[1];
          puVar275[2] = uVar124 - auVar297[2];
          puVar275[3] = uVar125 - auVar297[3];
          puVar275[4] = uVar126 - auVar297[4];
          puVar275[5] = uVar127 - auVar297[5];
          puVar275[6] = uVar128 - auVar297[6];
          puVar275[7] = uVar129 - auVar297[7];
          puVar275[8] = uVar130 - auVar297[8];
          puVar275[9] = uVar131 - auVar297[9];
          puVar275[10] = uVar132 - auVar297[10];
          puVar275[0xb] = uVar133 - auVar297[0xb];
          puVar275[0xc] = uVar134 - auVar297[0xc];
          puVar275[0xd] = uVar135 - auVar297[0xd];
          puVar275[0xe] = uVar136 - auVar297[0xe];
          puVar275[0xf] = uVar137 - auVar297[0xf];
          uVar281 = uVar281 + 0x10;
        } while (uVar267 != uVar281);
        puVar272 = puVar283 + uVar267;
        pbVar273 = pbVar287;
        puVar269 = puVar280;
        if (uVar270 == uVar267) goto LAB_140dce93e;
      }
      iVar266 = uVar284 - (int)uVar267;
      do {
        *puVar269 = *puVar272 - (*pbVar273 >> 1);
        puVar269 = puVar269 + 1;
        pbVar273 = pbVar273 + 1;
        puVar272 = puVar272 + 1;
        iVar266 = iVar266 + -1;
      } while (iVar266 != 0);
    }
LAB_140dce93e:
    auVar432 = ___xmm_7f7f7f7f7f7f7f7f7f7f7f7f7f7f7f7f;
    uVar267 = uVar7 - uVar274;
    if (uVar274 <= uVar7 && uVar267 != 0) {
      uVar415 = uVar284;
      if ((7 < uVar267) &&
         (~uVar274 + uVar7 >> 0x20 == 0 && (uint)(~uVar274 + uVar7) <= -uVar284 - 2)) {
        if (uVar267 < 0x10) {
          uVar270 = 0;
        }
        else {
          uVar270 = uVar267 & 0xfffffffffffffff0;
          uVar281 = 0;
          do {
            puVar280 = puVar272 + uVar281;
            uVar123 = puVar280[1];
            uVar124 = puVar280[2];
            uVar125 = puVar280[3];
            uVar126 = puVar280[4];
            uVar127 = puVar280[5];
            uVar128 = puVar280[6];
            uVar129 = puVar280[7];
            uVar130 = puVar280[8];
            uVar131 = puVar280[9];
            uVar132 = puVar280[10];
            uVar133 = puVar280[0xb];
            uVar134 = puVar280[0xc];
            uVar135 = puVar280[0xd];
            uVar136 = puVar280[0xe];
            uVar137 = puVar280[0xf];
            auVar320 = *(undefined1 (*) [16])(puVar283 + uVar281) &
                       *(undefined1 (*) [16])(pbVar273 + uVar281);
            auVar472 = *(undefined1 (*) [16])(puVar283 + uVar281) ^
                       *(undefined1 (*) [16])(pbVar273 + uVar281);
            auVar302._0_2_ = auVar472._0_2_ >> 1;
            auVar302._2_2_ = auVar472._2_2_ >> 1;
            auVar302._4_2_ = auVar472._4_2_ >> 1;
            auVar302._6_2_ = auVar472._6_2_ >> 1;
            auVar302._8_2_ = auVar472._8_2_ >> 1;
            auVar302._10_2_ = auVar472._10_2_ >> 1;
            auVar302._12_2_ = auVar472._12_2_ >> 1;
            auVar302._14_2_ = auVar472._14_2_ >> 1;
            auVar302 = auVar302 & auVar432;
            puVar275 = puVar269 + uVar281;
            *puVar275 = *puVar280 - (auVar302[0] + auVar320[0]);
            puVar275[1] = uVar123 - (auVar302[1] + auVar320[1]);
            puVar275[2] = uVar124 - (auVar302[2] + auVar320[2]);
            puVar275[3] = uVar125 - (auVar302[3] + auVar320[3]);
            puVar275[4] = uVar126 - (auVar302[4] + auVar320[4]);
            puVar275[5] = uVar127 - (auVar302[5] + auVar320[5]);
            puVar275[6] = uVar128 - (auVar302[6] + auVar320[6]);
            puVar275[7] = uVar129 - (auVar302[7] + auVar320[7]);
            puVar275[8] = uVar130 - (auVar302[8] + auVar320[8]);
            puVar275[9] = uVar131 - (auVar302[9] + auVar320[9]);
            puVar275[10] = uVar132 - (auVar302[10] + auVar320[10]);
            puVar275[0xb] = uVar133 - (auVar302[0xb] + auVar320[0xb]);
            puVar275[0xc] = uVar134 - (auVar302[0xc] + auVar320[0xc]);
            puVar275[0xd] = uVar135 - (auVar302[0xd] + auVar320[0xd]);
            puVar275[0xe] = uVar136 - (auVar302[0xe] + auVar320[0xe]);
            puVar275[0xf] = uVar137 - (auVar302[0xf] + auVar320[0xf]);
            uVar281 = uVar281 + 0x10;
          } while (uVar270 != uVar281);
          if (uVar267 == uVar270) goto LAB_140dceec8;
          if ((uVar267 & 8) == 0) {
            puVar272 = puVar272 + uVar270;
            puVar269 = puVar269 + uVar270;
            pbVar273 = pbVar273 + uVar270;
            puVar285 = puVar285 + uVar270;
            uVar415 = (int)uVar270 + uVar284;
            goto LAB_140dcee95;
          }
        }
        auVar432 = ___xmm_7f7f7f7f7f7f7f7f7f7f7f7f7f7f7f7f;
        uVar281 = uVar267 & 0xfffffffffffffff8;
        puVar285 = puVar285 + uVar281;
        do {
          uVar4 = *(undefined8 *)(puVar272 + uVar270);
          uVar288 = *(ulonglong *)(puVar283 + uVar270) & *(ulonglong *)(pbVar273 + uVar270);
          uVar271 = *(ulonglong *)(puVar283 + uVar270) ^ *(ulonglong *)(pbVar273 + uVar270);
          auVar300._0_2_ = (ushort)uVar271 >> 1;
          auVar300._2_2_ = (ushort)(uVar271 >> 0x10) >> 1;
          auVar300._4_2_ = (ushort)(uVar271 >> 0x20) >> 1;
          auVar300._6_2_ = (ushort)(uVar271 >> 0x31);
          auVar300._8_8_ = 0;
          auVar300 = auVar300 & auVar432;
          *(ulonglong *)(puVar269 + uVar270) =
               CONCAT17((char)((ulonglong)uVar4 >> 0x38) - (auVar300[7] + (char)(uVar288 >> 0x38)),
                        CONCAT16((char)((ulonglong)uVar4 >> 0x30) -
                                 (auVar300[6] + (char)(uVar288 >> 0x30)),
                                 CONCAT15((char)((ulonglong)uVar4 >> 0x28) -
                                          (auVar300[5] + (char)(uVar288 >> 0x28)),
                                          CONCAT14((char)((ulonglong)uVar4 >> 0x20) -
                                                   (auVar300[4] + (char)(uVar288 >> 0x20)),
                                                   CONCAT13((char)((ulonglong)uVar4 >> 0x18) -
                                                            (auVar300[3] + (char)(uVar288 >> 0x18)),
                                                            CONCAT12((char)((ulonglong)uVar4 >> 0x10
                                                                           ) - (auVar300[2] +
                                                                               (char)(uVar288 >>
                                                                                     0x10)),
                                                                     CONCAT11((char)((ulonglong)
                                                                                     uVar4 >> 8) -
                                                                              (auVar300[1] +
                                                                              (char)(uVar288 >> 8)),
                                                                              (char)uVar4 -
                                                                              (auVar300[0] +
                                                                              (char)uVar288))))))));
          uVar270 = uVar270 + 8;
        } while (uVar281 != uVar270);
        pbVar273 = pbVar273 + uVar281;
        puVar269 = puVar269 + uVar281;
        puVar272 = puVar272 + uVar281;
        uVar415 = uVar284 + (int)uVar281;
        if (uVar267 == uVar281) goto LAB_140dceec8;
      }
LAB_140dcee95:
      lVar279 = 0;
      do {
        puVar269[lVar279] =
             puVar272[lVar279] - (char)((uint)puVar285[lVar279 + 1] + (uint)pbVar273[lVar279] >> 1);
        iVar266 = (int)lVar279;
        lVar279 = lVar279 + 1;
      } while (uVar415 + 1 + iVar266 < uVar7);
    }
LAB_140dceec8:
    puVar283 = param_1->try_row;
  }
  if (bVar268 == 0x80) {
    puVar275 = param_1->try_row;
    *puVar275 = '\x04';
    puVar265 = param_1->prev_row;
    puVar277 = param_1->row_buf;
    puVar283 = puVar275 + 1;
    puVar269 = puVar265 + 1;
    puVar285 = puVar277 + 1;
    puVar280 = puVar269;
    puVar272 = puVar285;
    if (bVar449 != 0) {
      if (bVar449 < 0x79) {
        uVar276 = 0;
      }
      else {
        uVar276 = (ulonglong)(uVar284 & 0xfffffff0);
        uVar123 = puVar277[2];
        uVar124 = puVar277[3];
        uVar125 = puVar277[4];
        uVar126 = puVar277[5];
        uVar127 = puVar277[6];
        uVar128 = puVar277[7];
        uVar129 = puVar277[8];
        uVar130 = puVar277[9];
        uVar131 = puVar277[10];
        uVar132 = puVar277[0xb];
        uVar133 = puVar277[0xc];
        uVar134 = puVar277[0xd];
        uVar135 = puVar277[0xe];
        uVar136 = puVar277[0xf];
        uVar137 = puVar277[0x10];
        uVar138 = puVar265[2];
        uVar139 = puVar265[3];
        uVar140 = puVar265[4];
        uVar141 = puVar265[5];
        uVar142 = puVar265[6];
        uVar143 = puVar265[7];
        uVar144 = puVar265[8];
        uVar145 = puVar265[9];
        uVar146 = puVar265[10];
        uVar147 = puVar265[0xb];
        uVar148 = puVar265[0xc];
        uVar149 = puVar265[0xd];
        uVar150 = puVar265[0xe];
        uVar151 = puVar265[0xf];
        uVar152 = puVar265[0x10];
        *puVar283 = *puVar285 - *puVar269;
        puVar275[2] = uVar123 - uVar138;
        puVar275[3] = uVar124 - uVar139;
        puVar275[4] = uVar125 - uVar140;
        puVar275[5] = uVar126 - uVar141;
        puVar275[6] = uVar127 - uVar142;
        puVar275[7] = uVar128 - uVar143;
        puVar275[8] = uVar129 - uVar144;
        puVar275[9] = uVar130 - uVar145;
        puVar275[10] = uVar131 - uVar146;
        puVar275[0xb] = uVar132 - uVar147;
        puVar275[0xc] = uVar133 - uVar148;
        puVar275[0xd] = uVar134 - uVar149;
        puVar275[0xe] = uVar135 - uVar150;
        puVar275[0xf] = uVar136 - uVar151;
        puVar275[0x10] = uVar137 - uVar152;
        if (uVar276 != 0x10) {
          uVar123 = puVar277[0x12];
          uVar124 = puVar277[0x13];
          uVar125 = puVar277[0x14];
          uVar126 = puVar277[0x15];
          uVar127 = puVar277[0x16];
          uVar128 = puVar277[0x17];
          uVar129 = puVar277[0x18];
          uVar130 = puVar277[0x19];
          uVar131 = puVar277[0x1a];
          uVar132 = puVar277[0x1b];
          uVar133 = puVar277[0x1c];
          uVar134 = puVar277[0x1d];
          uVar135 = puVar277[0x1e];
          uVar136 = puVar277[0x1f];
          uVar137 = puVar277[0x20];
          uVar138 = puVar265[0x12];
          uVar139 = puVar265[0x13];
          uVar140 = puVar265[0x14];
          uVar141 = puVar265[0x15];
          uVar142 = puVar265[0x16];
          uVar143 = puVar265[0x17];
          uVar144 = puVar265[0x18];
          uVar145 = puVar265[0x19];
          uVar146 = puVar265[0x1a];
          uVar147 = puVar265[0x1b];
          uVar148 = puVar265[0x1c];
          uVar149 = puVar265[0x1d];
          uVar150 = puVar265[0x1e];
          uVar151 = puVar265[0x1f];
          uVar152 = puVar265[0x20];
          puVar275[0x11] = puVar277[0x11] - puVar265[0x11];
          puVar275[0x12] = uVar123 - uVar138;
          puVar275[0x13] = uVar124 - uVar139;
          puVar275[0x14] = uVar125 - uVar140;
          puVar275[0x15] = uVar126 - uVar141;
          puVar275[0x16] = uVar127 - uVar142;
          puVar275[0x17] = uVar128 - uVar143;
          puVar275[0x18] = uVar129 - uVar144;
          puVar275[0x19] = uVar130 - uVar145;
          puVar275[0x1a] = uVar131 - uVar146;
          puVar275[0x1b] = uVar132 - uVar147;
          puVar275[0x1c] = uVar133 - uVar148;
          puVar275[0x1d] = uVar134 - uVar149;
          puVar275[0x1e] = uVar135 - uVar150;
          puVar275[0x1f] = uVar136 - uVar151;
          puVar275[0x20] = uVar137 - uVar152;
        }
        puVar272 = puVar285 + uVar276;
        puVar280 = puVar269 + uVar276;
        puVar283 = puVar283 + uVar276;
        if ((uVar284 & 0xfffffff0) == uVar284) goto LAB_140dcf008;
      }
      lVar279 = uVar274 - uVar276;
      do {
        *puVar283 = *puVar272 - *puVar280;
        puVar283 = puVar283 + 1;
        puVar280 = puVar280 + 1;
        puVar272 = puVar272 + 1;
        lVar279 = lVar279 + -1;
      } while (lVar279 != 0);
    }
LAB_140dcf008:
    uVar276 = uVar7 - uVar274;
    if (uVar274 <= uVar7 && uVar276 != 0) {
      if (7 < uVar276) {
        if (uVar276 < 0x10) {
          uVar267 = 0;
        }
        else {
          uVar267 = uVar276 & 0xfffffffffffffff0;
          uVar270 = 0;
          auVar185._4_4_ = _UNK_150651574;
          auVar185._0_4_ = __xmm_80000000800000008000000080000000;
          auVar185._8_4_ = _UNK_150651578;
          auVar185._12_4_ = _UNK_15065157c;
          do {
            auVar432 = *(undefined1 (*) [16])(puVar280 + uVar270);
            bVar373 = auVar432[7];
            auVar26[0xd] = 0;
            auVar26._0_13_ = auVar432._0_13_;
            auVar26[0xe] = bVar373;
            bVar447 = auVar432[6];
            auVar39[0xc] = bVar447;
            auVar39._0_12_ = auVar432._0_12_;
            auVar39._13_2_ = auVar26._13_2_;
            auVar45[0xb] = 0;
            auVar45._0_11_ = auVar432._0_11_;
            auVar45._12_3_ = auVar39._12_3_;
            bVar446 = auVar432[5];
            uVar284 = auVar45._11_4_;
            auVar58[10] = bVar446;
            auVar58._0_10_ = auVar432._0_10_;
            auVar58._11_4_ = uVar284;
            auVar88[9] = 0;
            auVar88._0_9_ = auVar432._0_9_;
            auVar88._10_5_ = auVar58._10_5_;
            bVar443 = auVar432[4];
            auVar98[8] = bVar443;
            auVar98._0_8_ = auVar432._0_8_;
            auVar98._9_6_ = auVar88._9_6_;
            auVar200._7_8_ = 0;
            auVar200._0_7_ = auVar98._8_7_;
            bVar442 = auVar432[3];
            Var191 = CONCAT81(SUB158(auVar200 << 0x40,7),bVar442);
            auVar232._9_6_ = 0;
            auVar232._0_9_ = Var191;
            bVar441 = auVar432[2];
            auVar201._1_10_ = SUB1510(auVar232 << 0x30,5);
            auVar201[0] = bVar441;
            auVar233._11_4_ = 0;
            auVar233._0_11_ = auVar201;
            bVar440 = auVar432[1];
            auVar105[2] = bVar440;
            auVar105._0_2_ = auVar432._0_2_;
            auVar105._3_12_ = SUB1512(auVar233 << 0x20,3);
            auVar115._2_13_ = auVar105._2_13_;
            auVar115._0_2_ = auVar432._0_2_ & 0xff;
            auVar27._10_2_ = 0;
            auVar27._0_10_ = auVar115._0_10_;
            auVar27._12_2_ = (short)Var191;
            uVar260 = CONCAT42(auVar27._10_4_,auVar201._0_2_);
            auVar202._6_8_ = 0;
            auVar202._0_6_ = uVar260;
            auVar59._4_2_ = auVar105._2_2_;
            auVar59._0_4_ = auVar115._0_4_;
            auVar59._6_8_ = SUB148(auVar202 << 0x40,6);
            bVar374 = auVar432[8];
            bVar376 = auVar432[9];
            uVar328 = CONCAT13(0,CONCAT12(bVar376,(ushort)bVar374));
            bVar378 = auVar432[10];
            bVar379 = auVar432[0xb];
            bVar380 = auVar432[0xc];
            bVar381 = auVar432[0xd];
            bVar514 = auVar432[0xe];
            bVar515 = auVar432[0xf];
            auVar60[0xc] = bVar379;
            auVar60._0_12_ = ZEXT112(bVar380) << 0x40;
            auVar61._10_3_ = auVar60._10_3_;
            auVar61._0_10_ = (unkuint10)bVar378 << 0x40;
            auVar203._5_8_ = 0;
            auVar203._0_5_ = auVar61._8_5_;
            auVar62[4] = bVar376;
            auVar62._0_4_ = uVar328;
            auVar62[5] = 0;
            auVar62._6_7_ = SUB137(auVar203 << 0x40,6);
            auVar472 = *(undefined1 (*) [16])(puVar269 + uVar270);
            bVar525 = auVar472[7];
            auVar28[0xd] = 0;
            auVar28._0_13_ = auVar472._0_13_;
            auVar28[0xe] = bVar525;
            bVar524 = auVar472[6];
            auVar40[0xc] = bVar524;
            auVar40._0_12_ = auVar472._0_12_;
            auVar40._13_2_ = auVar28._13_2_;
            auVar46[0xb] = 0;
            auVar46._0_11_ = auVar472._0_11_;
            auVar46._12_3_ = auVar40._12_3_;
            bVar523 = auVar472[5];
            uVar415 = auVar46._11_4_;
            auVar63[10] = bVar523;
            auVar63._0_10_ = auVar472._0_10_;
            auVar63._11_4_ = uVar415;
            auVar89[9] = 0;
            auVar89._0_9_ = auVar472._0_9_;
            auVar89._10_5_ = auVar63._10_5_;
            bVar522 = auVar472[4];
            auVar99[8] = bVar522;
            auVar99._0_8_ = auVar472._0_8_;
            auVar99._9_6_ = auVar89._9_6_;
            auVar204._7_8_ = 0;
            auVar204._0_7_ = auVar99._8_7_;
            bVar521 = auVar472[3];
            Var191 = CONCAT81(SUB158(auVar204 << 0x40,7),bVar521);
            auVar234._9_6_ = 0;
            auVar234._0_9_ = Var191;
            bVar520 = auVar472[2];
            auVar205._1_10_ = SUB1510(auVar234 << 0x30,5);
            auVar205[0] = bVar520;
            auVar235._11_4_ = 0;
            auVar235._0_11_ = auVar205;
            bVar519 = auVar472[1];
            auVar106[2] = bVar519;
            auVar106._0_2_ = auVar472._0_2_;
            auVar106._3_12_ = SUB1512(auVar235 << 0x20,3);
            auVar116._2_13_ = auVar106._2_13_;
            auVar116._0_2_ = auVar472._0_2_ & 0xff;
            auVar29._10_2_ = 0;
            auVar29._0_10_ = auVar116._0_10_;
            auVar29._12_2_ = (short)Var191;
            uVar261 = CONCAT42(auVar29._10_4_,auVar205._0_2_);
            auVar206._6_8_ = 0;
            auVar206._0_6_ = uVar261;
            auVar64._4_2_ = auVar106._2_2_;
            auVar64._0_4_ = auVar116._0_4_;
            auVar64._6_8_ = SUB148(auVar206 << 0x40,6);
            bVar495 = auVar472[8];
            bVar498 = auVar472[9];
            uVar327 = CONCAT13(0,CONCAT12(bVar498,(ushort)bVar495));
            bVar499 = auVar472[10];
            bVar500 = auVar472[0xb];
            bVar501 = auVar472[0xc];
            bVar504 = auVar472[0xd];
            bVar505 = auVar472[0xe];
            bVar507 = auVar472[0xf];
            auVar65[0xc] = bVar500;
            auVar65._0_12_ = ZEXT112(bVar501) << 0x40;
            auVar66._10_3_ = auVar65._10_3_;
            auVar66._0_10_ = (unkuint10)bVar499 << 0x40;
            auVar207._5_8_ = 0;
            auVar207._0_5_ = auVar66._8_5_;
            auVar67[4] = bVar498;
            auVar67._0_4_ = uVar327;
            auVar67[5] = 0;
            auVar67._6_7_ = SUB137(auVar207 << 0x40,6);
            auVar320 = *(undefined1 (*) [16])(puVar285 + uVar270);
            bVar412 = auVar320[7];
            auVar30[0xd] = 0;
            auVar30._0_13_ = auVar320._0_13_;
            auVar30[0xe] = bVar412;
            bVar411 = auVar320[6];
            auVar41[0xc] = bVar411;
            auVar41._0_12_ = auVar320._0_12_;
            auVar41._13_2_ = auVar30._13_2_;
            auVar47[0xb] = 0;
            auVar47._0_11_ = auVar320._0_11_;
            auVar47._12_3_ = auVar41._12_3_;
            bVar410 = auVar320[5];
            uVar282 = auVar47._11_4_;
            auVar68[10] = bVar410;
            auVar68._0_10_ = auVar320._0_10_;
            auVar68._11_4_ = uVar282;
            auVar90[9] = 0;
            auVar90._0_9_ = auVar320._0_9_;
            auVar90._10_5_ = auVar68._10_5_;
            bVar408 = auVar320[4];
            auVar100[8] = bVar408;
            auVar100._0_8_ = auVar320._0_8_;
            auVar100._9_6_ = auVar90._9_6_;
            auVar208._7_8_ = 0;
            auVar208._0_7_ = auVar100._8_7_;
            bVar407 = auVar320[3];
            Var191 = CONCAT81(SUB158(auVar208 << 0x40,7),bVar407);
            auVar236._9_6_ = 0;
            auVar236._0_9_ = Var191;
            bVar406 = auVar320[2];
            auVar209._1_10_ = SUB1510(auVar236 << 0x30,5);
            auVar209[0] = bVar406;
            auVar237._11_4_ = 0;
            auVar237._0_11_ = auVar209;
            bVar405 = auVar320[1];
            auVar107[2] = bVar405;
            auVar107._0_2_ = auVar320._0_2_;
            auVar107._3_12_ = SUB1512(auVar237 << 0x20,3);
            auVar117._2_13_ = auVar107._2_13_;
            auVar117._0_2_ = auVar320._0_2_ & 0xff;
            bVar449 = auVar320[8];
            bVar278 = auVar320[9];
            uVar334 = CONCAT13(0,CONCAT12(bVar278,(ushort)bVar449));
            bVar453 = auVar320[10];
            bVar455 = auVar320[0xb];
            bVar326 = auVar320[0xc];
            bVar330 = auVar320[0xd];
            bVar331 = auVar320[0xe];
            bVar332 = auVar320[0xf];
            auVar31._10_2_ = 0;
            auVar31._0_10_ = auVar117._0_10_;
            auVar31._12_2_ = (short)Var191;
            uVar262 = CONCAT42(auVar31._10_4_,auVar209._0_2_);
            auVar210._6_8_ = 0;
            auVar210._0_6_ = uVar262;
            auVar69._4_2_ = auVar107._2_2_;
            auVar69._0_4_ = auVar117._0_4_;
            auVar69._6_8_ = SUB148(auVar210 << 0x40,6);
            auVar70[0xc] = bVar455;
            auVar70._0_12_ = ZEXT112(bVar326) << 0x40;
            auVar71._10_3_ = auVar70._10_3_;
            auVar71._0_10_ = (unkuint10)bVar453 << 0x40;
            auVar211._5_8_ = 0;
            auVar211._0_5_ = auVar71._8_5_;
            auVar72[4] = bVar278;
            auVar72._0_4_ = uVar334;
            auVar72[5] = 0;
            auVar72._6_7_ = SUB137(auVar211 << 0x40,6);
            uVar353 = (uint)bVar326 + (uint)bVar501 * -2 + (uint)bVar380;
            uVar313 = (uint)bVar330 + (uint)bVar504 * -2 + (uint)bVar381;
            uVar488 = (uint)bVar331 + (uint)bVar505 * -2 + (uint)bVar514;
            uVar494 = (uint)bVar332 + (uint)bVar507 * -2 + (uint)bVar515;
            uVar334 = (uVar334 & 0xffff) + (uVar327 & 0xffff) * -2 + (uVar328 & 0xffff);
            uVar327 = auVar72._4_4_ + auVar67._4_4_ * -2 + auVar62._4_4_;
            uVar328 = auVar71._8_4_ + auVar66._8_4_ * -2 + auVar61._8_4_;
            uVar497 = (uint)(uint3)(auVar70._10_3_ >> 0x10) +
                      (uint)(uint3)(auVar65._10_3_ >> 0x10) * -2 +
                      (uint)(uint3)(auVar60._10_3_ >> 0x10);
            uVar329 = (uint)auVar100._8_2_ + (uint)auVar99._8_2_ * -2 + (uint)auVar98._8_2_;
            uVar503 = (uint)auVar68._10_2_ + (uint)auVar63._10_2_ * -2 + (uint)auVar58._10_2_;
            uVar333 = (uVar282 >> 8 & 0xffff) + (uVar415 >> 8 & 0xffff) * -2 +
                      (uVar284 >> 8 & 0xffff);
            uVar415 = (uVar282 >> 0x18) + (uVar415 >> 0x18) * -2 + (uVar284 >> 0x18);
            uVar351 = (auVar117._0_4_ & 0xffff) + (auVar116._0_4_ & 0xffff) * -2 +
                      (auVar115._0_4_ & 0xffff);
            uVar352 = auVar69._4_4_ + auVar64._4_4_ * -2 + auVar59._4_4_;
            uVar382 = (int)uVar262 + (int)uVar261 * -2 + (int)uVar260;
            uVar409 = (auVar31._10_4_ >> 0x10) + (auVar29._10_4_ >> 0x10) * -2 +
                      (auVar27._10_4_ >> 0x10);
            bVar268 = auVar472[0];
            bVar416 = auVar432[0];
            bVar373 = ((bVar373 < bVar525) * bVar525 | (bVar373 >= bVar525) * bVar373) -
                      ((bVar525 < bVar373) * bVar525 | (bVar525 >= bVar373) * bVar373);
            bVar374 = ((bVar374 < bVar495) * bVar495 | (bVar374 >= bVar495) * bVar374) -
                      ((bVar495 < bVar374) * bVar495 | (bVar495 >= bVar374) * bVar374);
            uVar506 = CONCAT11(bVar374,bVar373);
            cVar375 = ((bVar376 < bVar498) * bVar498 | (bVar376 >= bVar498) * bVar376) -
                      ((bVar498 < bVar376) * bVar498 | (bVar498 >= bVar376) * bVar376);
            uVar238 = CONCAT12(cVar375,uVar506);
            bVar376 = ((bVar378 < bVar499) * bVar499 | (bVar378 >= bVar499) * bVar378) -
                      ((bVar499 < bVar378) * bVar499 | (bVar499 >= bVar378) * bVar378);
            uVar284 = CONCAT13(bVar376,uVar238);
            cVar377 = ((bVar379 < bVar500) * bVar500 | (bVar379 >= bVar500) * bVar379) -
                      ((bVar500 < bVar379) * bVar500 | (bVar500 >= bVar379) * bVar379);
            uVar251 = CONCAT14(cVar377,uVar284);
            bVar378 = ((bVar380 < bVar501) * bVar501 | (bVar380 >= bVar501) * bVar380) -
                      ((bVar501 < bVar380) * bVar501 | (bVar501 >= bVar380) * bVar380);
            auVar256[5] = bVar378;
            auVar256._0_5_ = uVar251;
            bVar379 = ((bVar381 < bVar504) * bVar504 | (bVar381 >= bVar504) * bVar381) -
                      ((bVar504 < bVar381) * bVar504 | (bVar504 >= bVar381) * bVar381);
            bVar380 = ((bVar514 < bVar505) * bVar505 | (bVar514 >= bVar505) * bVar514) -
                      ((bVar505 < bVar514) * bVar505 | (bVar505 >= bVar514) * bVar514);
            bVar381 = ((bVar515 < bVar507) * bVar507 | (bVar515 >= bVar507) * bVar515) -
                      ((bVar507 < bVar515) * bVar507 | (bVar507 >= bVar515) * bVar515);
            auVar256._6_8_ = 0;
            auVar32[0xe] = bVar373;
            auVar32._0_14_ = auVar256 << 0x38;
            uVar257 = CONCAT26(auVar32._13_2_,
                               CONCAT15(((bVar447 < bVar524) * bVar524 |
                                        (bVar447 >= bVar524) * bVar447) -
                                        ((bVar524 < bVar447) * bVar524 |
                                        (bVar524 >= bVar447) * bVar447),uVar251));
            auVar252._4_8_ = 0;
            auVar252._0_4_ = uVar284;
            auVar48._12_3_ = (int3)((ulonglong)uVar257 >> 0x28);
            auVar48._0_12_ = auVar252 << 0x38;
            uVar253 = CONCAT44(auVar48._11_4_,
                               CONCAT13(((bVar446 < bVar523) * bVar523 |
                                        (bVar446 >= bVar523) * bVar446) -
                                        ((bVar523 < bVar446) * bVar523 |
                                        (bVar523 >= bVar446) * bVar446),uVar238));
            auVar91._10_5_ = (int5)((ulonglong)uVar253 >> 0x18);
            auVar91._0_10_ = (unkuint10)uVar506 << 0x38;
            uVar4 = CONCAT62(auVar91._9_6_,
                             CONCAT11(((bVar443 < bVar522) * bVar522 |
                                      (bVar443 >= bVar522) * bVar443) -
                                      ((bVar522 < bVar443) * bVar522 |
                                      (bVar522 >= bVar443) * bVar443),bVar373));
            auVar212._7_8_ = 0;
            auVar212._0_7_ = (uint7)((ulonglong)uVar4 >> 8);
            Var191 = CONCAT81(SUB158(auVar212 << 0x40,7),
                              ((bVar442 < bVar521) * bVar521 | (bVar442 >= bVar521) * bVar442) -
                              ((bVar521 < bVar442) * bVar521 | (bVar521 >= bVar442) * bVar442));
            auVar239._9_6_ = 0;
            auVar239._0_9_ = Var191;
            auVar213._1_10_ = SUB1510(auVar239 << 0x30,5);
            auVar213[0] = ((bVar441 < bVar520) * bVar520 | (bVar441 >= bVar520) * bVar441) -
                          ((bVar520 < bVar441) * bVar520 | (bVar520 >= bVar441) * bVar441);
            auVar240._11_4_ = 0;
            auVar240._0_11_ = auVar213;
            auVar214._1_12_ = SUB1512(auVar240 << 0x20,3);
            auVar214[0] = ((bVar440 < bVar519) * bVar519 | (bVar440 >= bVar519) * bVar440) -
                          ((bVar519 < bVar440) * bVar519 | (bVar519 >= bVar440) * bVar440);
            auVar118[1] = 0;
            auVar118[0] = ((bVar416 < bVar268) * bVar268 | (bVar416 >= bVar268) * bVar416) -
                          ((bVar268 < bVar416) * bVar268 | (bVar268 >= bVar416) * bVar416);
            auVar118._2_13_ = auVar214;
            auVar33._10_2_ = 0;
            auVar33._0_10_ = auVar118._0_10_;
            auVar33._12_2_ = (short)Var191;
            uVar260 = CONCAT42(auVar33._10_4_,auVar213._0_2_);
            auVar215._6_8_ = 0;
            auVar215._0_6_ = uVar260;
            auVar73._4_2_ = auVar214._0_2_;
            auVar73._0_4_ = auVar118._0_4_;
            auVar73._6_8_ = SUB148(auVar215 << 0x40,6);
            auVar367._0_4_ = auVar118._0_4_ & 0xffff;
            auVar367._4_10_ = auVar73._4_10_;
            auVar367._14_2_ = 0;
            bVar416 = auVar320[0];
            cVar448 = ((bVar412 < bVar525) * bVar525 | (bVar412 >= bVar525) * bVar412) -
                      ((bVar525 < bVar412) * bVar525 | (bVar525 >= bVar412) * bVar412);
            bVar449 = ((bVar449 < bVar495) * bVar495 | (bVar449 >= bVar495) * bVar449) -
                      ((bVar495 < bVar449) * bVar495 | (bVar495 >= bVar449) * bVar449);
            uVar506 = CONCAT11(bVar449,cVar448);
            cVar451 = ((bVar278 < bVar498) * bVar498 | (bVar278 >= bVar498) * bVar278) -
                      ((bVar498 < bVar278) * bVar498 | (bVar498 >= bVar278) * bVar278);
            uVar238 = CONCAT12(cVar451,uVar506);
            bVar278 = ((bVar453 < bVar499) * bVar499 | (bVar453 >= bVar499) * bVar453) -
                      ((bVar499 < bVar453) * bVar499 | (bVar499 >= bVar453) * bVar453);
            uVar284 = CONCAT13(bVar278,uVar238);
            cVar452 = ((bVar455 < bVar500) * bVar500 | (bVar455 >= bVar500) * bVar455) -
                      ((bVar500 < bVar455) * bVar500 | (bVar500 >= bVar455) * bVar455);
            uVar251 = CONCAT14(cVar452,uVar284);
            bVar453 = ((bVar326 < bVar501) * bVar501 | (bVar326 >= bVar501) * bVar326) -
                      ((bVar501 < bVar326) * bVar501 | (bVar501 >= bVar326) * bVar326);
            auVar258[5] = bVar453;
            auVar258._0_5_ = uVar251;
            bVar455 = ((bVar331 < bVar505) * bVar505 | (bVar331 >= bVar505) * bVar331) -
                      ((bVar505 < bVar331) * bVar505 | (bVar505 >= bVar331) * bVar331);
            auVar258._6_8_ = 0;
            auVar34[0xe] = cVar448;
            auVar34._0_14_ = auVar258 << 0x38;
            uVar259 = CONCAT26(auVar34._13_2_,
                               CONCAT15(((bVar411 < bVar524) * bVar524 |
                                        (bVar411 >= bVar524) * bVar411) -
                                        ((bVar524 < bVar411) * bVar524 |
                                        (bVar524 >= bVar411) * bVar411),uVar251));
            auVar254._4_8_ = 0;
            auVar254._0_4_ = uVar284;
            auVar49._12_3_ = (int3)((ulonglong)uVar259 >> 0x28);
            auVar49._0_12_ = auVar254 << 0x38;
            uVar255 = CONCAT44(auVar49._11_4_,
                               CONCAT13(((bVar410 < bVar523) * bVar523 |
                                        (bVar410 >= bVar523) * bVar410) -
                                        ((bVar523 < bVar410) * bVar523 |
                                        (bVar523 >= bVar410) * bVar410),uVar238));
            auVar92._10_5_ = (int5)((ulonglong)uVar255 >> 0x18);
            auVar92._0_10_ = (unkuint10)uVar506 << 0x38;
            uVar3 = CONCAT62(auVar92._9_6_,
                             CONCAT11(((bVar408 < bVar522) * bVar522 |
                                      (bVar408 >= bVar522) * bVar408) -
                                      ((bVar522 < bVar408) * bVar522 |
                                      (bVar522 >= bVar408) * bVar408),cVar448));
            auVar216._7_8_ = 0;
            auVar216._0_7_ = (uint7)((ulonglong)uVar3 >> 8);
            Var191 = CONCAT81(SUB158(auVar216 << 0x40,7),
                              ((bVar407 < bVar521) * bVar521 | (bVar407 >= bVar521) * bVar407) -
                              ((bVar521 < bVar407) * bVar521 | (bVar521 >= bVar407) * bVar407));
            auVar241._9_6_ = 0;
            auVar241._0_9_ = Var191;
            auVar217._1_10_ = SUB1510(auVar241 << 0x30,5);
            auVar217[0] = ((bVar406 < bVar520) * bVar520 | (bVar406 >= bVar520) * bVar406) -
                          ((bVar520 < bVar406) * bVar520 | (bVar520 >= bVar406) * bVar406);
            auVar242._11_4_ = 0;
            auVar242._0_11_ = auVar217;
            auVar218._1_12_ = SUB1512(auVar242 << 0x20,3);
            auVar218[0] = ((bVar405 < bVar519) * bVar519 | (bVar405 >= bVar519) * bVar405) -
                          ((bVar519 < bVar405) * bVar519 | (bVar519 >= bVar405) * bVar405);
            auVar119[1] = 0;
            auVar119[0] = ((bVar416 < bVar268) * bVar268 | (bVar416 >= bVar268) * bVar416) -
                          ((bVar268 < bVar416) * bVar268 | (bVar268 >= bVar416) * bVar416);
            auVar119._2_13_ = auVar218;
            auVar35._10_2_ = 0;
            auVar35._0_10_ = auVar119._0_10_;
            auVar35._12_2_ = (short)Var191;
            uVar261 = CONCAT42(auVar35._10_4_,auVar217._0_2_);
            auVar219._6_8_ = 0;
            auVar219._0_6_ = uVar261;
            auVar74._4_2_ = auVar218._0_2_;
            auVar74._0_4_ = auVar119._0_4_;
            auVar74._6_8_ = SUB148(auVar219 << 0x40,6);
            uVar282 = auVar119._0_4_ & 0xffff;
            uVar284 = (int)uVar353 >> 0x1f;
            uVar413 = (int)uVar313 >> 0x1f;
            uVar414 = (int)uVar488 >> 0x1f;
            uVar417 = (int)uVar494 >> 0x1f;
            auVar324._0_4_ = (uVar353 ^ uVar284) - uVar284;
            auVar324._4_4_ = (uVar313 ^ uVar413) - uVar413;
            auVar324._8_4_ = (uVar488 ^ uVar414) - uVar414;
            auVar324._12_4_ = (uVar494 ^ uVar417) - uVar417;
            uVar284 = (int)uVar334 >> 0x1f;
            uVar353 = (int)uVar327 >> 0x1f;
            uVar313 = (int)uVar328 >> 0x1f;
            uVar488 = (int)uVar497 >> 0x1f;
            auVar347._0_4_ = (uVar334 ^ uVar284) - uVar284;
            auVar347._4_4_ = (uVar327 ^ uVar353) - uVar353;
            auVar347._8_4_ = (uVar328 ^ uVar313) - uVar313;
            auVar347._12_4_ = (uVar497 ^ uVar488) - uVar488;
            uVar284 = (int)uVar329 >> 0x1f;
            uVar334 = (int)uVar503 >> 0x1f;
            uVar353 = (int)uVar333 >> 0x1f;
            uVar313 = (int)uVar415 >> 0x1f;
            auVar399._0_4_ = (uVar329 ^ uVar284) - uVar284;
            auVar399._4_4_ = (uVar503 ^ uVar334) - uVar334;
            auVar399._8_4_ = (uVar333 ^ uVar353) - uVar353;
            auVar399._12_4_ = (uVar415 ^ uVar313) - uVar313;
            uVar284 = (int)uVar351 >> 0x1f;
            uVar415 = (int)uVar352 >> 0x1f;
            uVar334 = (int)uVar382 >> 0x1f;
            uVar353 = (int)uVar409 >> 0x1f;
            auVar490._0_4_ = (uVar351 ^ uVar284) - uVar284;
            auVar490._4_4_ = (uVar352 ^ uVar415) - uVar415;
            auVar490._8_4_ = (uVar382 ^ uVar334) - uVar334;
            auVar490._12_4_ = (uVar409 ^ uVar353) - uVar353;
            auVar528._0_4_ = -(uint)(uVar282 < auVar367._0_4_);
            auVar528._4_4_ = -(uint)(auVar74._4_4_ < auVar73._4_4_);
            iVar266 = (int)uVar261;
            auVar528._8_4_ = -(uint)(iVar266 < (int)uVar260);
            uVar284 = auVar35._10_4_ >> 0x10;
            auVar528._12_4_ = -(uint)(uVar284 < auVar33._10_4_ >> 0x10);
            auVar437._0_4_ = -(uint)(auVar490._0_4_ < (int)uVar282);
            auVar437._4_4_ = -(uint)(auVar490._4_4_ < (int)auVar74._4_4_);
            auVar437._8_4_ = -(uint)(auVar490._8_4_ < iVar266);
            auVar437._12_4_ = -(uint)(auVar490._12_4_ < (int)uVar284);
            auVar490 = auVar490 ^ auVar185;
            auVar367 = auVar367 | auVar185;
            auVar368._0_4_ = -(uint)(auVar490._0_4_ < auVar367._0_4_);
            auVar368._4_4_ = -(uint)(auVar490._4_4_ < auVar367._4_4_);
            auVar368._8_4_ = -(uint)(auVar490._8_4_ < auVar367._8_4_);
            auVar368._12_4_ = -(uint)(auVar490._12_4_ < auVar367._12_4_);
            uVar284 = CONCAT13(0,CONCAT12(cVar375,(ushort)bVar374));
            auVar516._0_4_ = CONCAT22(0,(ushort)((ulonglong)uVar4 >> 8));
            uVar526 = (ushort)((ulonglong)uVar253 >> 0x18);
            auVar516._4_2_ = uVar526;
            auVar516._6_2_ = 0;
            uVar527 = (ushort)((ulonglong)uVar257 >> 0x28);
            auVar516._8_2_ = uVar527;
            auVar516._10_2_ = 0;
            auVar516[0xc] = bVar373;
            auVar516._13_3_ = 0;
            uVar415 = (uint)(ushort)((ulonglong)uVar3 >> 8);
            uVar513 = (ushort)((ulonglong)uVar259 >> 0x28);
            uVar506 = auVar34._13_2_ >> 8;
            auVar491._0_4_ = -(uint)(uVar415 < auVar516._0_4_);
            uVar282 = (uint)(ushort)((ulonglong)uVar255 >> 0x18);
            auVar491._4_4_ = -(uint)(uVar282 < uVar526);
            auVar491._8_4_ = -(uint)(uVar513 < uVar527);
            auVar491._12_4_ = -(uint)(uVar506 < bVar373);
            auVar512._0_4_ = -(uint)(auVar399._0_4_ < (int)uVar415);
            auVar512._4_4_ = -(uint)(auVar399._4_4_ < (int)uVar282);
            auVar512._8_4_ = -(uint)(auVar399._8_4_ < (int)(uint)uVar513);
            auVar512._12_4_ = -(uint)(auVar399._12_4_ < (int)(uint)uVar506);
            auVar399 = auVar399 ^ auVar185;
            auVar516 = auVar516 | auVar185;
            auVar517._0_4_ = -(uint)(auVar399._0_4_ < auVar516._0_4_);
            auVar517._4_4_ = -(uint)(auVar399._4_4_ < auVar516._4_4_);
            auVar517._8_4_ = -(uint)(auVar399._8_4_ < auVar516._8_4_);
            auVar517._12_4_ = -(uint)(auVar399._12_4_ < auVar516._12_4_);
            auVar75[0xc] = cVar377;
            auVar75._0_12_ = ZEXT112(bVar378) << 0x40;
            auVar76._10_3_ = auVar75._10_3_;
            auVar76._0_10_ = (unkuint10)bVar376 << 0x40;
            auVar220._5_8_ = 0;
            auVar220._0_5_ = auVar76._8_5_;
            auVar77[4] = cVar375;
            auVar77._0_4_ = uVar284;
            auVar77[5] = 0;
            auVar77._6_7_ = SUB137(auVar220 << 0x40,6);
            auVar477._0_4_ = uVar284 & 0xffff;
            auVar477._4_9_ = auVar77._4_9_;
            auVar477._13_3_ = 0;
            uVar415 = CONCAT13(0,CONCAT12(cVar451,(ushort)bVar449));
            auVar78[0xc] = cVar452;
            auVar78._0_12_ = ZEXT112(bVar453) << 0x40;
            auVar79._10_3_ = auVar78._10_3_;
            auVar79._0_10_ = (unkuint10)bVar278 << 0x40;
            auVar221._5_8_ = 0;
            auVar221._0_5_ = auVar79._8_5_;
            auVar80[4] = cVar451;
            auVar80._0_4_ = uVar415;
            auVar80[5] = 0;
            auVar80._6_7_ = SUB137(auVar221 << 0x40,6);
            uVar415 = uVar415 & 0xffff;
            auVar369 = packssdw(auVar368 | auVar528,auVar517 | auVar491);
            auVar518._0_4_ = -(uint)(uVar415 < auVar477._0_4_);
            auVar518._4_4_ = -(uint)(auVar80._4_4_ < auVar77._4_4_);
            auVar518._8_4_ = -(uint)(auVar79._8_4_ < auVar76._8_4_);
            uVar284 = (uint)(uint3)(auVar78._10_3_ >> 0x10);
            auVar518._12_4_ = -(uint)(uVar284 < (uint3)(auVar75._10_3_ >> 0x10));
            auVar509._0_4_ = -(uint)(auVar347._0_4_ < (int)uVar415);
            auVar509._4_4_ = -(uint)(auVar347._4_4_ < (int)auVar80._4_4_);
            auVar509._8_4_ = -(uint)(auVar347._8_4_ < auVar79._8_4_);
            auVar509._12_4_ = -(uint)(auVar347._12_4_ < (int)uVar284);
            auVar347 = auVar347 ^ auVar185;
            auVar477 = auVar477 | auVar185;
            auVar478._0_4_ = -(uint)(auVar347._0_4_ < auVar477._0_4_);
            auVar478._4_4_ = -(uint)(auVar347._4_4_ < auVar477._4_4_);
            auVar478._8_4_ = -(uint)(auVar347._8_4_ < auVar477._8_4_);
            auVar478._12_4_ = -(uint)(auVar347._12_4_ < auVar477._12_4_);
            auVar400._0_4_ = CONCAT31(0,bVar378);
            auVar400[4] = bVar379;
            auVar400._5_3_ = 0;
            auVar400[8] = bVar380;
            auVar400._9_3_ = 0;
            auVar400[0xc] = bVar381;
            auVar400._13_3_ = 0;
            uVar506 = (ushort)(byte)(((bVar332 < bVar507) * bVar507 | (bVar332 >= bVar507) * bVar332
                                     ) - ((bVar507 < bVar332) * bVar507 |
                                         (bVar507 >= bVar332) * bVar332));
            auVar348._0_4_ = -(uint)(bVar453 < auVar400._0_4_);
            uVar284 = (uint)(byte)(((bVar330 < bVar504) * bVar504 | (bVar330 >= bVar504) * bVar330)
                                  - ((bVar504 < bVar330) * bVar504 | (bVar504 >= bVar330) * bVar330)
                                  );
            auVar348._4_4_ = -(uint)(uVar284 < bVar379);
            auVar348._8_4_ = -(uint)(bVar455 < bVar380);
            auVar348._12_4_ = -(uint)(uVar506 < bVar381);
            auVar492._0_4_ = -(uint)(auVar324._0_4_ < (int)(uint)bVar453);
            auVar492._4_4_ = -(uint)(auVar324._4_4_ < (int)uVar284);
            auVar492._8_4_ = -(uint)(auVar324._8_4_ < (int)(uint)bVar455);
            auVar492._12_4_ = -(uint)(auVar324._12_4_ < (int)(uint)uVar506);
            auVar324 = auVar324 ^ auVar185;
            auVar400 = auVar400 | auVar185;
            auVar401._0_4_ = -(uint)(auVar324._0_4_ < auVar400._0_4_);
            auVar401._4_4_ = -(uint)(auVar324._4_4_ < auVar400._4_4_);
            auVar401._8_4_ = -(uint)(auVar324._8_4_ < auVar400._8_4_);
            auVar401._12_4_ = -(uint)(auVar324._12_4_ < auVar400._12_4_);
            auVar479 = packssdw(auVar478 | auVar518,auVar401 | auVar348);
            auVar369 = packsswb(auVar369,auVar479);
            auVar510 = packssdw(auVar509,auVar492);
            auVar479 = packssdw(auVar437,auVar512);
            auVar479 = packsswb(auVar479,auVar510);
            auVar432 = ~auVar369 & auVar320 |
                       (~auVar479 & auVar432 | auVar472 & auVar479) & auVar369;
            puVar275 = puVar272 + uVar270;
            uVar123 = puVar275[1];
            uVar124 = puVar275[2];
            uVar125 = puVar275[3];
            uVar126 = puVar275[4];
            uVar127 = puVar275[5];
            uVar128 = puVar275[6];
            uVar129 = puVar275[7];
            uVar130 = puVar275[8];
            uVar131 = puVar275[9];
            uVar132 = puVar275[10];
            uVar133 = puVar275[0xb];
            uVar134 = puVar275[0xc];
            uVar135 = puVar275[0xd];
            uVar136 = puVar275[0xe];
            uVar137 = puVar275[0xf];
            puVar2 = puVar283 + uVar270;
            *puVar2 = *puVar275 - auVar432[0];
            puVar2[1] = uVar123 - auVar432[1];
            puVar2[2] = uVar124 - auVar432[2];
            puVar2[3] = uVar125 - auVar432[3];
            puVar2[4] = uVar126 - auVar432[4];
            puVar2[5] = uVar127 - auVar432[5];
            puVar2[6] = uVar128 - auVar432[6];
            puVar2[7] = uVar129 - auVar432[7];
            puVar2[8] = uVar130 - auVar432[8];
            puVar2[9] = uVar131 - auVar432[9];
            puVar2[10] = uVar132 - auVar432[10];
            puVar2[0xb] = uVar133 - auVar432[0xb];
            puVar2[0xc] = uVar134 - auVar432[0xc];
            puVar2[0xd] = uVar135 - auVar432[0xd];
            puVar2[0xe] = uVar136 - auVar432[0xe];
            puVar2[0xf] = uVar137 - auVar432[0xf];
            uVar270 = uVar270 + 0x10;
          } while (uVar267 != uVar270);
          if (uVar276 == uVar267) goto LAB_140dcfa74;
          if ((uVar276 & 8) == 0) {
            uVar274 = uVar274 + uVar267;
            puVar277 = puVar277 + uVar267;
            puVar265 = puVar265 + uVar267;
            puVar280 = puVar280 + uVar267;
            puVar283 = puVar283 + uVar267;
            puVar272 = puVar272 + uVar267;
            goto LAB_140dcf20e;
          }
        }
        uVar334 = _UNK_15065157c;
        uVar282 = _UNK_150651578;
        uVar415 = _UNK_150651574;
        uVar284 = __xmm_80000000800000008000000080000000;
        uVar270 = uVar276 & 0xfffffffffffffff8;
        puVar265 = puVar265 + uVar270;
        puVar277 = puVar277 + uVar270;
        uVar274 = uVar274 + uVar270;
        do {
          uVar281 = *(ulonglong *)(puVar280 + uVar267);
          auVar298._8_8_ = 0;
          auVar298._0_8_ = uVar281;
          auVar20._8_6_ = 0;
          auVar20._0_8_ = uVar281;
          auVar20[0xe] = (char)(uVar281 >> 0x38);
          auVar36._8_4_ = 0;
          auVar36._0_8_ = uVar281;
          auVar36[0xc] = (char)(uVar281 >> 0x30);
          auVar36._13_2_ = auVar20._13_2_;
          auVar42._8_4_ = 0;
          auVar42._0_8_ = uVar281;
          auVar42._12_3_ = auVar36._12_3_;
          uVar313 = auVar42._11_4_;
          auVar52._8_2_ = 0;
          auVar52._0_8_ = uVar281;
          auVar52[10] = (char)(uVar281 >> 0x28);
          auVar52._11_4_ = uVar313;
          auVar85._8_2_ = 0;
          auVar85._0_8_ = uVar281;
          auVar85._10_5_ = auVar52._10_5_;
          auVar95[8] = (char)(uVar281 >> 0x20);
          auVar95._0_8_ = uVar281;
          auVar95._9_6_ = auVar85._9_6_;
          auVar190._7_8_ = 0;
          auVar190._0_7_ = auVar95._8_7_;
          Var191 = CONCAT81(SUB158(auVar190 << 0x40,7),(char)(uVar281 >> 0x18));
          auVar226._9_6_ = 0;
          auVar226._0_9_ = Var191;
          auVar192._1_10_ = SUB1510(auVar226 << 0x30,5);
          auVar192[0] = (char)(uVar281 >> 0x10);
          auVar227._11_4_ = 0;
          auVar227._0_11_ = auVar192;
          auVar102[2] = (char)(uVar281 >> 8);
          auVar102._0_2_ = (ushort)uVar281;
          auVar102._3_12_ = SUB1512(auVar227 << 0x20,3);
          auVar112._2_13_ = auVar102._2_13_;
          auVar112._0_2_ = (ushort)uVar281 & 0xff;
          auVar21._10_2_ = 0;
          auVar21._0_10_ = auVar112._0_10_;
          auVar21._12_2_ = (short)Var191;
          uVar260 = CONCAT42(auVar21._10_4_,auVar192._0_2_);
          auVar193._6_8_ = 0;
          auVar193._0_6_ = uVar260;
          auVar53._4_2_ = auVar102._2_2_;
          auVar53._0_4_ = auVar112._0_4_;
          auVar53._6_8_ = SUB148(auVar193 << 0x40,6);
          uVar281 = *(ulonglong *)(puVar269 + uVar267);
          auVar301._8_8_ = 0;
          auVar301._0_8_ = uVar281;
          auVar22._8_6_ = 0;
          auVar22._0_8_ = uVar281;
          auVar22[0xe] = (char)(uVar281 >> 0x38);
          auVar37._8_4_ = 0;
          auVar37._0_8_ = uVar281;
          auVar37[0xc] = (char)(uVar281 >> 0x30);
          auVar37._13_2_ = auVar22._13_2_;
          auVar43._8_4_ = 0;
          auVar43._0_8_ = uVar281;
          auVar43._12_3_ = auVar37._12_3_;
          uVar488 = auVar43._11_4_;
          auVar54._8_2_ = 0;
          auVar54._0_8_ = uVar281;
          auVar54[10] = (char)(uVar281 >> 0x28);
          auVar54._11_4_ = uVar488;
          auVar86._8_2_ = 0;
          auVar86._0_8_ = uVar281;
          auVar86._10_5_ = auVar54._10_5_;
          auVar96[8] = (char)(uVar281 >> 0x20);
          auVar96._0_8_ = uVar281;
          auVar96._9_6_ = auVar86._9_6_;
          auVar194._7_8_ = 0;
          auVar194._0_7_ = auVar96._8_7_;
          Var191 = CONCAT81(SUB158(auVar194 << 0x40,7),(char)(uVar281 >> 0x18));
          auVar228._9_6_ = 0;
          auVar228._0_9_ = Var191;
          auVar195._1_10_ = SUB1510(auVar228 << 0x30,5);
          auVar195[0] = (char)(uVar281 >> 0x10);
          auVar229._11_4_ = 0;
          auVar229._0_11_ = auVar195;
          auVar103[2] = (char)(uVar281 >> 8);
          auVar103._0_2_ = (ushort)uVar281;
          auVar103._3_12_ = SUB1512(auVar229 << 0x20,3);
          auVar113._2_13_ = auVar103._2_13_;
          auVar113._0_2_ = (ushort)uVar281 & 0xff;
          auVar23._10_2_ = 0;
          auVar23._0_10_ = auVar113._0_10_;
          auVar23._12_2_ = (short)Var191;
          uVar261 = CONCAT42(auVar23._10_4_,auVar195._0_2_);
          auVar196._6_8_ = 0;
          auVar196._0_6_ = uVar261;
          auVar55._4_2_ = auVar103._2_2_;
          auVar55._0_4_ = auVar113._0_4_;
          auVar55._6_8_ = SUB148(auVar196 << 0x40,6);
          uVar333 = auVar113._0_4_ & 0xffff;
          uVar281 = *(ulonglong *)(puVar285 + uVar267);
          auVar311._8_8_ = 0;
          auVar311._0_8_ = uVar281;
          auVar24._8_6_ = 0;
          auVar24._0_8_ = uVar281;
          auVar24[0xe] = (char)(uVar281 >> 0x38);
          auVar38._8_4_ = 0;
          auVar38._0_8_ = uVar281;
          auVar38[0xc] = (char)(uVar281 >> 0x30);
          auVar38._13_2_ = auVar24._13_2_;
          auVar44._8_4_ = 0;
          auVar44._0_8_ = uVar281;
          auVar44._12_3_ = auVar38._12_3_;
          uVar494 = auVar44._11_4_;
          auVar56._8_2_ = 0;
          auVar56._0_8_ = uVar281;
          auVar56[10] = (char)(uVar281 >> 0x28);
          auVar56._11_4_ = uVar494;
          auVar87._8_2_ = 0;
          auVar87._0_8_ = uVar281;
          auVar87._10_5_ = auVar56._10_5_;
          auVar97[8] = (char)(uVar281 >> 0x20);
          auVar97._0_8_ = uVar281;
          auVar97._9_6_ = auVar87._9_6_;
          auVar197._7_8_ = 0;
          auVar197._0_7_ = auVar97._8_7_;
          Var191 = CONCAT81(SUB158(auVar197 << 0x40,7),(char)(uVar281 >> 0x18));
          auVar230._9_6_ = 0;
          auVar230._0_9_ = Var191;
          auVar198._1_10_ = SUB1510(auVar230 << 0x30,5);
          auVar198[0] = (char)(uVar281 >> 0x10);
          auVar231._11_4_ = 0;
          auVar231._0_11_ = auVar198;
          auVar104[2] = (char)(uVar281 >> 8);
          auVar104._0_2_ = (ushort)uVar281;
          auVar104._3_12_ = SUB1512(auVar231 << 0x20,3);
          auVar114._2_13_ = auVar104._2_13_;
          auVar114._0_2_ = (ushort)uVar281 & 0xff;
          auVar25._10_2_ = 0;
          auVar25._0_10_ = auVar114._0_10_;
          auVar25._12_2_ = (short)Var191;
          uVar262 = CONCAT42(auVar25._10_4_,auVar198._0_2_);
          auVar199._6_8_ = 0;
          auVar199._0_6_ = uVar262;
          auVar57._4_2_ = auVar104._2_2_;
          auVar57._0_4_ = auVar114._0_4_;
          auVar57._6_8_ = SUB148(auVar199 << 0x40,6);
          uVar487 = (auVar112._0_4_ & 0xffff) - uVar333;
          uVar493 = auVar53._4_4_ - auVar55._4_4_;
          iVar266 = (int)uVar261;
          uVar496 = (int)uVar260 - iVar266;
          uVar353 = auVar23._10_4_ >> 0x10;
          uVar502 = (auVar21._10_4_ >> 0x10) - uVar353;
          uVar417 = (uint)auVar95._8_2_ - (uint)auVar96._8_2_;
          uVar444 = (uint)auVar52._10_2_ - (uint)auVar54._10_2_;
          uVar328 = uVar488 >> 8 & 0xffff;
          uVar450 = (uVar313 >> 8 & 0xffff) - uVar328;
          uVar454 = (uVar313 >> 0x18) - (uVar488 >> 0x18);
          uVar333 = (auVar114._0_4_ & 0xffff) - uVar333;
          uVar351 = auVar57._4_4_ - auVar55._4_4_;
          uVar352 = (int)uVar262 - iVar266;
          uVar353 = (auVar25._10_4_ >> 0x10) - uVar353;
          uVar313 = (uint)auVar97._8_2_ - (uint)auVar96._8_2_;
          uVar327 = (uint)auVar56._10_2_ - (uint)auVar54._10_2_;
          uVar328 = (uVar494 >> 8 & 0xffff) - uVar328;
          uVar329 = (uVar494 >> 0x18) - (uVar488 >> 0x18);
          uVar382 = (uVar313 ^ (int)uVar313 >> 0x1f) - ((int)uVar313 >> 0x1f);
          uVar409 = (uVar327 ^ (int)uVar327 >> 0x1f) - ((int)uVar327 >> 0x1f);
          uVar413 = (uVar328 ^ (int)uVar328 >> 0x1f) - ((int)uVar328 >> 0x1f);
          uVar414 = (uVar329 ^ (int)uVar329 >> 0x1f) - ((int)uVar329 >> 0x1f);
          uVar456 = (uVar333 ^ (int)uVar333 >> 0x1f) - ((int)uVar333 >> 0x1f);
          uVar482 = (uVar351 ^ (int)uVar351 >> 0x1f) - ((int)uVar351 >> 0x1f);
          uVar485 = (uVar352 ^ (int)uVar352 >> 0x1f) - ((int)uVar352 >> 0x1f);
          uVar486 = (uVar353 ^ (int)uVar353 >> 0x1f) - ((int)uVar353 >> 0x1f);
          uVar488 = (int)(uVar313 + uVar417) >> 0x1f;
          uVar494 = (int)(uVar327 + uVar444) >> 0x1f;
          uVar497 = (int)(uVar328 + uVar450) >> 0x1f;
          uVar503 = (int)(uVar329 + uVar454) >> 0x1f;
          uVar488 = (uVar313 + uVar417 ^ uVar488) - uVar488;
          uVar494 = (uVar327 + uVar444 ^ uVar494) - uVar494;
          uVar497 = (uVar328 + uVar450 ^ uVar497) - uVar497;
          uVar503 = (uVar329 + uVar454 ^ uVar503) - uVar503;
          uVar313 = (int)(uVar333 + uVar487) >> 0x1f;
          uVar327 = (int)(uVar351 + uVar493) >> 0x1f;
          uVar328 = (int)(uVar352 + uVar496) >> 0x1f;
          uVar329 = (int)(uVar353 + uVar502) >> 0x1f;
          uVar313 = (uVar333 + uVar487 ^ uVar313) - uVar313;
          uVar327 = (uVar351 + uVar493 ^ uVar327) - uVar327;
          uVar328 = (uVar352 + uVar496 ^ uVar328) - uVar328;
          uVar329 = (uVar353 + uVar502 ^ uVar329) - uVar329;
          uVar487 = (uVar487 ^ (int)uVar487 >> 0x1f) - ((int)uVar487 >> 0x1f) ^ uVar284;
          uVar493 = (uVar493 ^ (int)uVar493 >> 0x1f) - ((int)uVar493 >> 0x1f) ^ uVar415;
          uVar496 = (uVar496 ^ (int)uVar496 >> 0x1f) - ((int)uVar496 >> 0x1f) ^ uVar282;
          uVar502 = (uVar502 ^ (int)uVar502 >> 0x1f) - ((int)uVar502 >> 0x1f) ^ uVar334;
          auVar508._0_4_ = -(uint)((int)(uVar456 ^ uVar284) < (int)uVar487);
          auVar508._4_4_ = -(uint)((int)(uVar482 ^ uVar415) < (int)uVar493);
          auVar508._8_4_ = -(uint)((int)(uVar485 ^ uVar282) < (int)uVar496);
          auVar508._12_4_ = -(uint)((int)(uVar486 ^ uVar334) < (int)uVar502);
          uVar353 = (uVar417 ^ (int)uVar417 >> 0x1f) - ((int)uVar417 >> 0x1f) ^ uVar284;
          uVar333 = (uVar444 ^ (int)uVar444 >> 0x1f) - ((int)uVar444 >> 0x1f) ^ uVar415;
          uVar351 = (uVar450 ^ (int)uVar450 >> 0x1f) - ((int)uVar450 >> 0x1f) ^ uVar282;
          uVar352 = (uVar454 ^ (int)uVar454 >> 0x1f) - ((int)uVar454 >> 0x1f) ^ uVar334;
          auVar511._0_4_ = -(uint)((int)(uVar382 ^ uVar284) < (int)uVar353);
          auVar511._4_4_ = -(uint)((int)(uVar409 ^ uVar415) < (int)uVar333);
          auVar511._8_4_ = -(uint)((int)(uVar413 ^ uVar282) < (int)uVar351);
          auVar511._12_4_ = -(uint)((int)(uVar414 ^ uVar334) < (int)uVar352);
          auVar471._0_4_ = -(uint)((int)uVar313 < (int)uVar456);
          auVar471._4_4_ = -(uint)((int)uVar327 < (int)uVar482);
          auVar471._8_4_ = -(uint)((int)uVar328 < (int)uVar485);
          auVar471._12_4_ = -(uint)((int)uVar329 < (int)uVar486);
          auVar431._0_4_ = -(uint)((int)(uVar313 ^ uVar284) < (int)uVar487);
          auVar431._4_4_ = -(uint)((int)(uVar327 ^ uVar415) < (int)uVar493);
          auVar431._8_4_ = -(uint)((int)(uVar328 ^ uVar282) < (int)uVar496);
          auVar431._12_4_ = -(uint)((int)(uVar329 ^ uVar334) < (int)uVar502);
          auVar393._0_4_ = -(uint)((int)uVar488 < (int)uVar382);
          auVar393._4_4_ = -(uint)((int)uVar494 < (int)uVar409);
          auVar393._8_4_ = -(uint)((int)uVar497 < (int)uVar413);
          auVar393._12_4_ = -(uint)((int)uVar503 < (int)uVar414);
          auVar361._0_4_ = -(uint)((int)(uVar488 ^ uVar284) < (int)uVar353);
          auVar361._4_4_ = -(uint)((int)(uVar494 ^ uVar415) < (int)uVar333);
          auVar361._8_4_ = -(uint)((int)(uVar497 ^ uVar282) < (int)uVar351);
          auVar361._12_4_ = -(uint)((int)(uVar503 ^ uVar334) < (int)uVar352);
          auVar432 = packssdw(auVar431 | auVar508,auVar361 | auVar511);
          auVar432 = packsswb(auVar432,auVar432);
          auVar472 = packssdw(auVar471,auVar393);
          auVar472 = packsswb(auVar472,auVar472);
          auVar432 = ~auVar432 & auVar311 | (~auVar472 & auVar298 | auVar301 & auVar472) & auVar432;
          uVar4 = *(undefined8 *)(puVar272 + uVar267);
          *(ulonglong *)(puVar283 + uVar267) =
               CONCAT17((char)((ulonglong)uVar4 >> 0x38) - auVar432[7],
                        CONCAT16((char)((ulonglong)uVar4 >> 0x30) - auVar432[6],
                                 CONCAT15((char)((ulonglong)uVar4 >> 0x28) - auVar432[5],
                                          CONCAT14((char)((ulonglong)uVar4 >> 0x20) - auVar432[4],
                                                   CONCAT13((char)((ulonglong)uVar4 >> 0x18) -
                                                            auVar432[3],
                                                            CONCAT12((char)((ulonglong)uVar4 >> 0x10
                                                                           ) - auVar432[2],
                                                                     CONCAT11((char)((ulonglong)
                                                                                     uVar4 >> 8) -
                                                                              auVar432[1],
                                                                              (char)uVar4 -
                                                                              auVar432[0])))))));
          uVar267 = uVar267 + 8;
        } while (uVar270 != uVar267);
        puVar283 = puVar283 + uVar270;
        puVar280 = puVar280 + uVar270;
        puVar272 = puVar272 + uVar270;
        if (uVar276 == uVar270) goto LAB_140dcfa74;
      }
LAB_140dcf20e:
      lVar279 = 0;
      do {
        bVar268 = puVar265[lVar279 + 1];
        iVar266 = (uint)puVar280[lVar279] - (uint)bVar268;
        iVar286 = (uint)puVar277[lVar279 + 1] - (uint)bVar268;
        bVar449 = (byte)-iVar266;
        if (-iVar266 < 0) {
          bVar449 = (byte)iVar266;
        }
        bVar278 = (byte)-iVar286;
        if (-iVar286 < 0) {
          bVar278 = (byte)iVar286;
        }
        uVar284 = -(iVar286 + iVar266);
        if ((int)uVar284 < 0) {
          uVar284 = iVar286 + iVar266;
        }
        if (bVar278 <= uVar284) {
          bVar268 = puVar280[lVar279];
        }
        bVar453 = puVar277[lVar279 + 1];
        if (uVar284 < bVar449) {
          bVar453 = bVar268;
        }
        if ((uint)bVar278 < (uint)bVar449) {
          bVar453 = bVar268;
        }
        puVar283[lVar279] = puVar272[lVar279] - bVar453;
        lVar279 = lVar279 + 1;
      } while (uVar7 - uVar274 != lVar279);
    }
LAB_140dcfa74:
    puVar283 = param_1->try_row;
    goto LAB_140dcfa85;
  }
  if (-1 < (char)bVar268) goto LAB_140dcfa85;
  puVar275 = param_1->try_row;
  *puVar275 = '\x04';
  puVar265 = param_1->prev_row;
  puVar277 = param_1->row_buf;
  pbVar273 = puVar275 + 1;
  puVar269 = puVar265 + 1;
  puVar285 = puVar277 + 1;
  puVar280 = puVar269;
  puVar272 = puVar285;
  if (bVar449 == 0) {
    uVar267 = 0;
  }
  else {
    if (bVar449 < 0x19) {
      uVar267 = 0;
      uVar270 = 0;
    }
    else {
      uVar415 = uVar284 & 0xfffffffc;
      uVar270 = (ulonglong)uVar415;
      bVar268 = (char)*(undefined2 *)(puVar277 + 1) - (char)*(undefined2 *)(puVar265 + 1);
      bVar449 = (char)((ushort)*(undefined2 *)(puVar277 + 1) >> 8) -
                (char)((ushort)*(undefined2 *)(puVar265 + 1) >> 8);
      bVar278 = (char)*(undefined2 *)(puVar277 + 3) - (char)*(undefined2 *)(puVar265 + 3);
      bVar453 = (char)((ushort)*(undefined2 *)(puVar277 + 3) >> 8) -
                (char)((ushort)*(undefined2 *)(puVar265 + 3) >> 8);
      *(ushort *)(puVar275 + 1) = CONCAT11(bVar449,bVar268);
      *(ushort *)(puVar275 + 3) = CONCAT11(bVar453,bVar278);
      uVar264 = _UNK_1531f2bac;
      uVar263 = _UNK_1531f2ba8;
      iVar286 = _UNK_1531f2ba4;
      iVar266 = ___xmm_00000000000000000000010000000100;
      auVar318._8_8_ = 0;
      auVar318._0_8_ =
           (ulonglong)CONCAT14(bVar449,(uint)CONCAT12(bVar449,(ushort)bVar268)) & 0xffffffff0000ffff
      ;
      auVar342._8_8_ = 0;
      auVar342._0_8_ =
           (ulonglong)CONCAT14(bVar453,(uint)CONCAT12(bVar453,(ushort)bVar278)) & 0xffffffff0000ffff
      ;
      auVar362._0_4_ =
           ___xmm_00000000000000000000010000000100 - (CONCAT12(bVar449,(ushort)bVar268) & 0xffff);
      auVar362._4_4_ = _UNK_1531f2ba4 - (uint)bVar449;
      auVar362._8_4_ = _UNK_1531f2ba8;
      auVar362._12_4_ = _UNK_1531f2bac;
      auVar394._0_4_ =
           ___xmm_00000000000000000000010000000100 - (CONCAT12(bVar453,(ushort)bVar278) & 0xffff);
      auVar394._4_4_ = _UNK_1531f2ba4 - (uint)bVar453;
      auVar394._8_4_ = _UNK_1531f2ba8;
      auVar394._12_4_ = _UNK_1531f2bac;
      auVar290 = SUB1615((undefined1  [16])0x0,1);
      auVar289[0] = -((char)bVar268 < '\0');
      auVar289[1] = -((char)bVar268 < '\0');
      auVar289[2] = -((char)bVar268 < '\0');
      auVar289[3] = -((char)bVar268 < '\0');
      auVar289[4] = -((char)bVar449 < '\0');
      auVar289[5] = -((char)bVar449 < '\0');
      auVar289[6] = -((char)bVar449 < '\0');
      auVar289[7] = -((char)bVar449 < '\0');
      auVar289[8] = 0;
      auVar289[9] = -('\0' < auVar290[8]);
      auVar289[10] = -('\0' < auVar290[9]);
      auVar289[0xb] = -('\0' < auVar290[10]);
      auVar289[0xc] = -('\0' < auVar290[0xb]);
      auVar289[0xd] = -('\0' < auVar290[0xc]);
      auVar289[0xe] = -('\0' < auVar290[0xd]);
      auVar289[0xf] = -('\0' < auVar290[0xe]);
      auVar290 = SUB1615((undefined1  [16])0x0,1);
      auVar292[0] = -((char)bVar278 < '\0');
      auVar292[1] = -((char)bVar278 < '\0');
      auVar292[2] = -((char)bVar278 < '\0');
      auVar292[3] = -((char)bVar278 < '\0');
      auVar292[4] = -((char)bVar453 < '\0');
      auVar292[5] = -((char)bVar453 < '\0');
      auVar292[6] = -((char)bVar453 < '\0');
      auVar292[7] = -((char)bVar453 < '\0');
      auVar292[8] = 0;
      auVar292[9] = -('\0' < auVar290[8]);
      auVar292[10] = -('\0' < auVar290[9]);
      auVar292[0xb] = -('\0' < auVar290[10]);
      auVar292[0xc] = -('\0' < auVar290[0xb]);
      auVar292[0xd] = -('\0' < auVar290[0xc]);
      auVar292[0xe] = -('\0' < auVar290[0xd]);
      auVar292[0xf] = -('\0' < auVar290[0xe]);
      auVar432 = ~auVar289 & auVar318 | auVar362 & auVar289;
      uVar267 = auVar432._0_8_;
      auVar472 = ~auVar292 & auVar342 | auVar394 & auVar292;
      uVar281 = auVar472._0_8_;
      if (uVar270 == 4) {
LAB_140dcf64d:
        uVar288 = uVar267 >> 0x20;
        uVar267 = uVar267 & 0xffffffff;
        auVar293._0_8_ = uVar281 & 0xffffffff;
        auVar293._8_4_ = (int)(uVar281 >> 0x20);
        auVar293._12_4_ = 0;
      }
      else {
        bVar278 = (char)*(undefined2 *)(puVar277 + 5) - (char)*(undefined2 *)(puVar265 + 5);
        bVar453 = (char)((ushort)*(undefined2 *)(puVar277 + 5) >> 8) -
                  (char)((ushort)*(undefined2 *)(puVar265 + 5) >> 8);
        bVar268 = (char)*(undefined2 *)(puVar277 + 7) - (char)*(undefined2 *)(puVar265 + 7);
        bVar449 = (char)((ushort)*(undefined2 *)(puVar277 + 7) >> 8) -
                  (char)((ushort)*(undefined2 *)(puVar265 + 7) >> 8);
        *(ushort *)(puVar275 + 5) = CONCAT11(bVar453,bVar278);
        *(ushort *)(puVar275 + 7) = CONCAT11(bVar449,bVar268);
        auVar343._8_8_ = 0;
        auVar343._0_8_ =
             (ulonglong)CONCAT14(bVar453,(uint)CONCAT12(bVar453,(ushort)bVar278)) &
             0xffffffff0000ffff;
        auVar363._8_8_ = 0;
        auVar363._0_8_ =
             (ulonglong)CONCAT14(bVar449,(uint)CONCAT12(bVar449,(ushort)bVar268)) &
             0xffffffff0000ffff;
        auVar395._0_4_ = iVar266 - (CONCAT12(bVar453,(ushort)bVar278) & 0xffff);
        auVar395._4_4_ = iVar286 - (uint)bVar453;
        auVar395._8_4_ = uVar263;
        auVar395._12_4_ = uVar264;
        auVar433._0_4_ = iVar266 - (CONCAT12(bVar449,(ushort)bVar268) & 0xffff);
        auVar433._4_4_ = iVar286 - (uint)bVar449;
        auVar433._8_4_ = uVar263;
        auVar433._12_4_ = uVar264;
        auVar290 = SUB1615((undefined1  [16])0x0,1);
        auVar473[0] = -((char)bVar278 < '\0');
        auVar473[1] = -((char)bVar278 < '\0');
        auVar473[2] = -((char)bVar278 < '\0');
        auVar473[3] = -((char)bVar278 < '\0');
        auVar473[4] = -((char)bVar453 < '\0');
        auVar473[5] = -((char)bVar453 < '\0');
        auVar473[6] = -((char)bVar453 < '\0');
        auVar473[7] = -((char)bVar453 < '\0');
        auVar473[8] = 0;
        auVar473[9] = -('\0' < auVar290[8]);
        auVar473[10] = -('\0' < auVar290[9]);
        auVar473[0xb] = -('\0' < auVar290[10]);
        auVar473[0xc] = -('\0' < auVar290[0xb]);
        auVar473[0xd] = -('\0' < auVar290[0xc]);
        auVar473[0xe] = -('\0' < auVar290[0xd]);
        auVar473[0xf] = -('\0' < auVar290[0xe]);
        auVar290 = SUB1615((undefined1  [16])0x0,1);
        auVar319[0] = -((char)bVar268 < '\0');
        auVar319[1] = -((char)bVar268 < '\0');
        auVar319[2] = -((char)bVar268 < '\0');
        auVar319[3] = -((char)bVar268 < '\0');
        auVar319[4] = -((char)bVar449 < '\0');
        auVar319[5] = -((char)bVar449 < '\0');
        auVar319[6] = -((char)bVar449 < '\0');
        auVar319[7] = -((char)bVar449 < '\0');
        auVar319[8] = 0;
        auVar319[9] = -('\0' < auVar290[8]);
        auVar319[10] = -('\0' < auVar290[9]);
        auVar319[0xb] = -('\0' < auVar290[10]);
        auVar319[0xc] = -('\0' < auVar290[0xb]);
        auVar319[0xd] = -('\0' < auVar290[0xc]);
        auVar319[0xe] = -('\0' < auVar290[0xd]);
        auVar319[0xf] = -('\0' < auVar290[0xe]);
        auVar369 = ~auVar473 & auVar343 | auVar395 & auVar473;
        auVar320 = ~auVar319 & auVar363 | auVar433 & auVar319;
        iVar418 = auVar432._0_4_ + auVar369._0_4_;
        iVar445 = auVar432._4_4_ + auVar369._4_4_;
        uVar267 = CONCAT44(iVar445,iVar418);
        iVar457 = auVar472._0_4_ + auVar320._0_4_;
        iVar458 = auVar472._4_4_ + auVar320._4_4_;
        uVar281 = CONCAT44(iVar458,iVar457);
        if (uVar415 == 8) goto LAB_140dcf64d;
        bVar278 = (char)*(undefined2 *)(puVar277 + 9) - (char)*(undefined2 *)(puVar265 + 9);
        bVar453 = (char)((ushort)*(undefined2 *)(puVar277 + 9) >> 8) -
                  (char)((ushort)*(undefined2 *)(puVar265 + 9) >> 8);
        bVar268 = (char)*(undefined2 *)(puVar277 + 0xb) - (char)*(undefined2 *)(puVar265 + 0xb);
        bVar449 = (char)((ushort)*(undefined2 *)(puVar277 + 0xb) >> 8) -
                  (char)((ushort)*(undefined2 *)(puVar265 + 0xb) >> 8);
        *(ushort *)(puVar275 + 9) = CONCAT11(bVar453,bVar278);
        *(ushort *)(puVar275 + 0xb) = CONCAT11(bVar449,bVar268);
        auVar344._8_8_ = 0;
        auVar344._0_8_ =
             (ulonglong)CONCAT14(bVar453,(uint)CONCAT12(bVar453,(ushort)bVar278)) &
             0xffffffff0000ffff;
        auVar364._8_8_ = 0;
        auVar364._0_8_ =
             (ulonglong)CONCAT14(bVar449,(uint)CONCAT12(bVar449,(ushort)bVar268)) &
             0xffffffff0000ffff;
        auVar396._0_4_ = iVar266 - (CONCAT12(bVar453,(ushort)bVar278) & 0xffff);
        auVar396._4_4_ = iVar286 - (uint)bVar453;
        auVar396._8_4_ = uVar263;
        auVar396._12_4_ = uVar264;
        auVar434._0_4_ = iVar266 - (CONCAT12(bVar449,(ushort)bVar268) & 0xffff);
        auVar434._4_4_ = iVar286 - (uint)bVar449;
        auVar434._8_4_ = uVar263;
        auVar434._12_4_ = uVar264;
        auVar290 = SUB1615((undefined1  [16])0x0,1);
        auVar474[0] = -((char)bVar278 < '\0');
        auVar474[1] = -((char)bVar278 < '\0');
        auVar474[2] = -((char)bVar278 < '\0');
        auVar474[3] = -((char)bVar278 < '\0');
        auVar474[4] = -((char)bVar453 < '\0');
        auVar474[5] = -((char)bVar453 < '\0');
        auVar474[6] = -((char)bVar453 < '\0');
        auVar474[7] = -((char)bVar453 < '\0');
        auVar474[8] = 0;
        auVar474[9] = -('\0' < auVar290[8]);
        auVar474[10] = -('\0' < auVar290[9]);
        auVar474[0xb] = -('\0' < auVar290[10]);
        auVar474[0xc] = -('\0' < auVar290[0xb]);
        auVar474[0xd] = -('\0' < auVar290[0xc]);
        auVar474[0xe] = -('\0' < auVar290[0xd]);
        auVar474[0xf] = -('\0' < auVar290[0xe]);
        auVar290 = SUB1615((undefined1  [16])0x0,1);
        auVar321[0] = -((char)bVar268 < '\0');
        auVar321[1] = -((char)bVar268 < '\0');
        auVar321[2] = -((char)bVar268 < '\0');
        auVar321[3] = -((char)bVar268 < '\0');
        auVar321[4] = -((char)bVar449 < '\0');
        auVar321[5] = -((char)bVar449 < '\0');
        auVar321[6] = -((char)bVar449 < '\0');
        auVar321[7] = -((char)bVar449 < '\0');
        auVar321[8] = 0;
        auVar321[9] = -('\0' < auVar290[8]);
        auVar321[10] = -('\0' < auVar290[9]);
        auVar321[0xb] = -('\0' < auVar290[10]);
        auVar321[0xc] = -('\0' < auVar290[0xb]);
        auVar321[0xd] = -('\0' < auVar290[0xc]);
        auVar321[0xe] = -('\0' < auVar290[0xd]);
        auVar321[0xf] = -('\0' < auVar290[0xe]);
        auVar472 = ~auVar474 & auVar344 | auVar396 & auVar474;
        auVar432 = ~auVar321 & auVar364 | auVar434 & auVar321;
        iVar418 = iVar418 + auVar472._0_4_;
        iVar445 = iVar445 + auVar472._4_4_;
        uVar267 = CONCAT44(iVar445,iVar418);
        iVar457 = iVar457 + auVar432._0_4_;
        iVar458 = iVar458 + auVar432._4_4_;
        uVar281 = CONCAT44(iVar458,iVar457);
        if (uVar415 == 0xc) goto LAB_140dcf64d;
        bVar278 = (char)*(undefined2 *)(puVar277 + 0xd) - (char)*(undefined2 *)(puVar265 + 0xd);
        bVar453 = (char)((ushort)*(undefined2 *)(puVar277 + 0xd) >> 8) -
                  (char)((ushort)*(undefined2 *)(puVar265 + 0xd) >> 8);
        bVar268 = (char)*(undefined2 *)(puVar277 + 0xf) - (char)*(undefined2 *)(puVar265 + 0xf);
        bVar449 = (char)((ushort)*(undefined2 *)(puVar277 + 0xf) >> 8) -
                  (char)((ushort)*(undefined2 *)(puVar265 + 0xf) >> 8);
        *(ushort *)(puVar275 + 0xd) = CONCAT11(bVar453,bVar278);
        *(ushort *)(puVar275 + 0xf) = CONCAT11(bVar449,bVar268);
        auVar345._8_8_ = 0;
        auVar345._0_8_ =
             (ulonglong)CONCAT14(bVar453,(uint)CONCAT12(bVar453,(ushort)bVar278)) &
             0xffffffff0000ffff;
        auVar365._8_8_ = 0;
        auVar365._0_8_ =
             (ulonglong)CONCAT14(bVar449,(uint)CONCAT12(bVar449,(ushort)bVar268)) &
             0xffffffff0000ffff;
        auVar397._0_4_ = iVar266 - (CONCAT12(bVar453,(ushort)bVar278) & 0xffff);
        auVar397._4_4_ = iVar286 - (uint)bVar453;
        auVar397._8_4_ = uVar263;
        auVar397._12_4_ = uVar264;
        auVar435._0_4_ = iVar266 - (CONCAT12(bVar449,(ushort)bVar268) & 0xffff);
        auVar435._4_4_ = iVar286 - (uint)bVar449;
        auVar435._8_4_ = uVar263;
        auVar435._12_4_ = uVar264;
        auVar290 = SUB1615((undefined1  [16])0x0,1);
        auVar475[0] = -((char)bVar278 < '\0');
        auVar475[1] = -((char)bVar278 < '\0');
        auVar475[2] = -((char)bVar278 < '\0');
        auVar475[3] = -((char)bVar278 < '\0');
        auVar475[4] = -((char)bVar453 < '\0');
        auVar475[5] = -((char)bVar453 < '\0');
        auVar475[6] = -((char)bVar453 < '\0');
        auVar475[7] = -((char)bVar453 < '\0');
        auVar475[8] = 0;
        auVar475[9] = -('\0' < auVar290[8]);
        auVar475[10] = -('\0' < auVar290[9]);
        auVar475[0xb] = -('\0' < auVar290[10]);
        auVar475[0xc] = -('\0' < auVar290[0xb]);
        auVar475[0xd] = -('\0' < auVar290[0xc]);
        auVar475[0xe] = -('\0' < auVar290[0xd]);
        auVar475[0xf] = -('\0' < auVar290[0xe]);
        auVar290 = SUB1615((undefined1  [16])0x0,1);
        auVar322[0] = -((char)bVar268 < '\0');
        auVar322[1] = -((char)bVar268 < '\0');
        auVar322[2] = -((char)bVar268 < '\0');
        auVar322[3] = -((char)bVar268 < '\0');
        auVar322[4] = -((char)bVar449 < '\0');
        auVar322[5] = -((char)bVar449 < '\0');
        auVar322[6] = -((char)bVar449 < '\0');
        auVar322[7] = -((char)bVar449 < '\0');
        auVar322[8] = 0;
        auVar322[9] = -('\0' < auVar290[8]);
        auVar322[10] = -('\0' < auVar290[9]);
        auVar322[0xb] = -('\0' < auVar290[10]);
        auVar322[0xc] = -('\0' < auVar290[0xb]);
        auVar322[0xd] = -('\0' < auVar290[0xc]);
        auVar322[0xe] = -('\0' < auVar290[0xd]);
        auVar322[0xf] = -('\0' < auVar290[0xe]);
        auVar472 = ~auVar475 & auVar345 | auVar397 & auVar475;
        auVar432 = ~auVar322 & auVar365 | auVar435 & auVar322;
        iVar418 = iVar418 + auVar472._0_4_;
        iVar445 = iVar445 + auVar472._4_4_;
        uVar267 = CONCAT44(iVar445,iVar418);
        iVar457 = iVar457 + auVar432._0_4_;
        iVar458 = iVar458 + auVar432._4_4_;
        uVar281 = CONCAT44(iVar458,iVar457);
        if (uVar415 == 0x10) goto LAB_140dcf64d;
        bVar278 = (char)*(undefined2 *)(puVar277 + 0x11) - (char)*(undefined2 *)(puVar265 + 0x11);
        bVar453 = (char)((ushort)*(undefined2 *)(puVar277 + 0x11) >> 8) -
                  (char)((ushort)*(undefined2 *)(puVar265 + 0x11) >> 8);
        bVar268 = (char)*(undefined2 *)(puVar277 + 0x13) - (char)*(undefined2 *)(puVar265 + 0x13);
        bVar449 = (char)((ushort)*(undefined2 *)(puVar277 + 0x13) >> 8) -
                  (char)((ushort)*(undefined2 *)(puVar265 + 0x13) >> 8);
        *(ushort *)(puVar275 + 0x11) = CONCAT11(bVar453,bVar278);
        *(ushort *)(puVar275 + 0x13) = CONCAT11(bVar449,bVar268);
        auVar346._8_8_ = 0;
        auVar346._0_8_ =
             (ulonglong)CONCAT14(bVar453,(uint)CONCAT12(bVar453,(ushort)bVar278)) &
             0xffffffff0000ffff;
        auVar366._8_8_ = 0;
        auVar366._0_8_ =
             (ulonglong)CONCAT14(bVar449,(uint)CONCAT12(bVar449,(ushort)bVar268)) &
             0xffffffff0000ffff;
        auVar398._0_4_ = iVar266 - (CONCAT12(bVar453,(ushort)bVar278) & 0xffff);
        auVar398._4_4_ = iVar286 - (uint)bVar453;
        auVar398._8_4_ = uVar263;
        auVar398._12_4_ = uVar264;
        auVar436._0_4_ = iVar266 - (CONCAT12(bVar449,(ushort)bVar268) & 0xffff);
        auVar436._4_4_ = iVar286 - (uint)bVar449;
        auVar436._8_4_ = uVar263;
        auVar436._12_4_ = uVar264;
        auVar290 = SUB1615((undefined1  [16])0x0,1);
        auVar476[0] = -((char)bVar278 < '\0');
        auVar476[1] = -((char)bVar278 < '\0');
        auVar476[2] = -((char)bVar278 < '\0');
        auVar476[3] = -((char)bVar278 < '\0');
        auVar476[4] = -((char)bVar453 < '\0');
        auVar476[5] = -((char)bVar453 < '\0');
        auVar476[6] = -((char)bVar453 < '\0');
        auVar476[7] = -((char)bVar453 < '\0');
        auVar476[8] = 0;
        auVar476[9] = -('\0' < auVar290[8]);
        auVar476[10] = -('\0' < auVar290[9]);
        auVar476[0xb] = -('\0' < auVar290[10]);
        auVar476[0xc] = -('\0' < auVar290[0xb]);
        auVar476[0xd] = -('\0' < auVar290[0xc]);
        auVar476[0xe] = -('\0' < auVar290[0xd]);
        auVar476[0xf] = -('\0' < auVar290[0xe]);
        auVar290 = SUB1615((undefined1  [16])0x0,1);
        auVar323[0] = -((char)bVar268 < '\0');
        auVar323[1] = -((char)bVar268 < '\0');
        auVar323[2] = -((char)bVar268 < '\0');
        auVar323[3] = -((char)bVar268 < '\0');
        auVar323[4] = -((char)bVar449 < '\0');
        auVar323[5] = -((char)bVar449 < '\0');
        auVar323[6] = -((char)bVar449 < '\0');
        auVar323[7] = -((char)bVar449 < '\0');
        auVar323[8] = 0;
        auVar323[9] = -('\0' < auVar290[8]);
        auVar323[10] = -('\0' < auVar290[9]);
        auVar323[0xb] = -('\0' < auVar290[10]);
        auVar323[0xc] = -('\0' < auVar290[0xb]);
        auVar323[0xd] = -('\0' < auVar290[0xc]);
        auVar323[0xe] = -('\0' < auVar290[0xd]);
        auVar323[0xf] = -('\0' < auVar290[0xe]);
        auVar472 = ~auVar476 & auVar346 | auVar398 & auVar476;
        auVar432 = ~auVar323 & auVar366 | auVar436 & auVar323;
        iVar418 = iVar418 + auVar472._0_4_;
        iVar445 = iVar445 + auVar472._4_4_;
        uVar267 = CONCAT44(iVar445,iVar418);
        iVar457 = iVar457 + auVar432._0_4_;
        iVar458 = iVar458 + auVar432._4_4_;
        uVar281 = CONCAT44(iVar458,iVar457);
        if (uVar415 == 0x14) goto LAB_140dcf64d;
        bVar278 = (char)*(undefined2 *)(puVar277 + 0x15) - (char)*(undefined2 *)(puVar265 + 0x15);
        bVar453 = (char)((ushort)*(undefined2 *)(puVar277 + 0x15) >> 8) -
                  (char)((ushort)*(undefined2 *)(puVar265 + 0x15) >> 8);
        bVar268 = (char)*(undefined2 *)(puVar277 + 0x17) - (char)*(undefined2 *)(puVar265 + 0x17);
        bVar449 = (char)((ushort)*(undefined2 *)(puVar277 + 0x17) >> 8) -
                  (char)((ushort)*(undefined2 *)(puVar265 + 0x17) >> 8);
        *(ushort *)(puVar275 + 0x15) = CONCAT11(bVar453,bVar278);
        *(ushort *)(puVar275 + 0x17) = CONCAT11(bVar449,bVar268);
        auVar350._8_8_ = 0;
        auVar350._0_8_ =
             (ulonglong)CONCAT14(bVar453,(uint)CONCAT12(bVar453,(ushort)bVar278)) &
             0xffffffff0000ffff;
        auVar372._8_8_ = 0;
        auVar372._0_8_ =
             (ulonglong)CONCAT14(bVar449,(uint)CONCAT12(bVar449,(ushort)bVar268)) &
             0xffffffff0000ffff;
        auVar404._0_4_ = iVar266 - (CONCAT12(bVar453,(ushort)bVar278) & 0xffff);
        auVar404._4_4_ = iVar286 - (uint)bVar453;
        auVar404._8_4_ = uVar263;
        auVar404._12_4_ = uVar264;
        auVar439._0_4_ = iVar266 - (CONCAT12(bVar449,(ushort)bVar268) & 0xffff);
        auVar439._4_4_ = iVar286 - (uint)bVar449;
        auVar439._8_4_ = uVar263;
        auVar439._12_4_ = uVar264;
        auVar290 = SUB1615((undefined1  [16])0x0,1);
        auVar481[0] = -((char)bVar278 < '\0');
        auVar481[1] = -((char)bVar278 < '\0');
        auVar481[2] = -((char)bVar278 < '\0');
        auVar481[3] = -((char)bVar278 < '\0');
        auVar481[4] = -((char)bVar453 < '\0');
        auVar481[5] = -((char)bVar453 < '\0');
        auVar481[6] = -((char)bVar453 < '\0');
        auVar481[7] = -((char)bVar453 < '\0');
        auVar481[8] = 0;
        auVar481[9] = -('\0' < auVar290[8]);
        auVar481[10] = -('\0' < auVar290[9]);
        auVar481[0xb] = -('\0' < auVar290[10]);
        auVar481[0xc] = -('\0' < auVar290[0xb]);
        auVar481[0xd] = -('\0' < auVar290[0xc]);
        auVar481[0xe] = -('\0' < auVar290[0xd]);
        auVar481[0xf] = -('\0' < auVar290[0xe]);
        auVar290 = SUB1615((undefined1  [16])0x0,1);
        auVar325[0] = -((char)bVar268 < '\0');
        auVar325[1] = -((char)bVar268 < '\0');
        auVar325[2] = -((char)bVar268 < '\0');
        auVar325[3] = -((char)bVar268 < '\0');
        auVar325[4] = -((char)bVar449 < '\0');
        auVar325[5] = -((char)bVar449 < '\0');
        auVar325[6] = -((char)bVar449 < '\0');
        auVar325[7] = -((char)bVar449 < '\0');
        auVar325[8] = 0;
        auVar325[9] = -('\0' < auVar290[8]);
        auVar325[10] = -('\0' < auVar290[9]);
        auVar325[0xb] = -('\0' < auVar290[10]);
        auVar325[0xc] = -('\0' < auVar290[0xb]);
        auVar325[0xd] = -('\0' < auVar290[0xc]);
        auVar325[0xe] = -('\0' < auVar290[0xd]);
        auVar325[0xf] = -('\0' < auVar290[0xe]);
        auVar472 = ~auVar481 & auVar350 | auVar404 & auVar481;
        auVar432 = ~auVar325 & auVar372 | auVar439 & auVar325;
        uVar288 = (ulonglong)(uint)(iVar445 + auVar472._4_4_);
        uVar267 = (ulonglong)(uint)(iVar418 + auVar472._0_4_);
        uVar282 = iVar458 + auVar432._4_4_;
        uVar281 = CONCAT44(0,iVar457 + auVar432._0_4_);
        auVar293._8_4_ = uVar282;
        auVar293._0_8_ = uVar281;
        auVar293._12_4_ = 0;
        if (uVar415 != 0x18) {
          bVar278 = (char)*(undefined2 *)(puVar277 + 0x19) - (char)*(undefined2 *)(puVar265 + 0x19);
          bVar453 = (char)((ushort)*(undefined2 *)(puVar277 + 0x19) >> 8) -
                    (char)((ushort)*(undefined2 *)(puVar265 + 0x19) >> 8);
          bVar268 = (char)*(undefined2 *)(puVar277 + 0x1b) - (char)*(undefined2 *)(puVar265 + 0x1b);
          bVar449 = (char)((ushort)*(undefined2 *)(puVar277 + 0x1b) >> 8) -
                    (char)((ushort)*(undefined2 *)(puVar265 + 0x1b) >> 8);
          *(ushort *)(puVar275 + 0x19) = CONCAT11(bVar453,bVar278);
          *(ushort *)(puVar275 + 0x1b) = CONCAT11(bVar449,bVar268);
          auVar387._0_4_ = iVar266 - (CONCAT12(bVar453,(ushort)bVar278) & 0xffff);
          auVar387._4_4_ = iVar286 - (uint)bVar453;
          auVar387._8_4_ = uVar263;
          auVar425._0_4_ = iVar266 - (CONCAT12(bVar449,(ushort)bVar268) & 0xffff);
          auVar425._4_4_ = iVar286 - (uint)bVar449;
          auVar425._8_4_ = uVar263;
          auVar290 = SUB1615((undefined1  [16])0x0,1);
          auVar465[0] = -((char)bVar278 < '\0');
          auVar465[1] = -((char)bVar278 < '\0');
          auVar465[2] = -((char)bVar278 < '\0');
          auVar465[3] = -((char)bVar278 < '\0');
          auVar465[4] = -((char)bVar453 < '\0');
          auVar465[5] = -((char)bVar453 < '\0');
          auVar465[6] = -((char)bVar453 < '\0');
          auVar465[7] = -((char)bVar453 < '\0');
          auVar465[8] = 0;
          auVar465[9] = -('\0' < auVar290[8]);
          auVar465[10] = -('\0' < auVar290[9]);
          auVar465[0xb] = -('\0' < auVar290[10]);
          auVar290 = SUB1615((undefined1  [16])0x0,1);
          auVar316[0] = -((char)bVar268 < '\0');
          auVar316[1] = -((char)bVar268 < '\0');
          auVar316[2] = -((char)bVar268 < '\0');
          auVar316[3] = -((char)bVar268 < '\0');
          auVar316[4] = -((char)bVar449 < '\0');
          auVar316[5] = -((char)bVar449 < '\0');
          auVar316[6] = -((char)bVar449 < '\0');
          auVar316[7] = -((char)bVar449 < '\0');
          auVar316[8] = 0;
          auVar316[9] = -('\0' < auVar290[8]);
          auVar316[10] = -('\0' < auVar290[9]);
          auVar316[0xb] = -('\0' < auVar290[10]);
          auVar16._8_4_ = 0;
          auVar16._0_8_ =
               (ulonglong)CONCAT14(bVar453,(uint)CONCAT12(bVar453,(ushort)bVar278)) &
               0xffffffff0000ffff;
          auVar466 = ~auVar465 & auVar16 | auVar387 & auVar465;
          auVar17._8_4_ = 0;
          auVar17._0_8_ =
               (ulonglong)CONCAT14(bVar449,(uint)CONCAT12(bVar449,(ushort)bVar268)) &
               0xffffffff0000ffff;
          auVar355 = ~auVar316 & auVar17 | auVar425 & auVar316;
          uVar267 = uVar267 + (auVar466._0_8_ & 0xffffffff);
          uVar288 = uVar288 + auVar466._4_4_;
          auVar293._0_8_ = uVar281 + (auVar355._0_8_ & 0xffffffff);
          auVar293._8_8_ = (ulonglong)uVar282 + (ulonglong)auVar355._4_4_;
          if (uVar415 != 0x1c) {
            bVar278 = (char)*(undefined2 *)(puVar277 + 0x1d) -
                      (char)*(undefined2 *)(puVar265 + 0x1d);
            bVar453 = (char)((ushort)*(undefined2 *)(puVar277 + 0x1d) >> 8) -
                      (char)((ushort)*(undefined2 *)(puVar265 + 0x1d) >> 8);
            bVar268 = (char)*(undefined2 *)(puVar277 + 0x1f) -
                      (char)*(undefined2 *)(puVar265 + 0x1f);
            bVar449 = (char)((ushort)*(undefined2 *)(puVar277 + 0x1f) >> 8) -
                      (char)((ushort)*(undefined2 *)(puVar265 + 0x1f) >> 8);
            *(ushort *)(puVar275 + 0x1d) = CONCAT11(bVar453,bVar278);
            *(ushort *)(puVar275 + 0x1f) = CONCAT11(bVar449,bVar268);
            auVar388._0_4_ = iVar266 - (CONCAT12(bVar453,(ushort)bVar278) & 0xffff);
            auVar388._4_4_ = iVar286 - (uint)bVar453;
            auVar388._8_4_ = uVar263;
            auVar296._0_4_ = iVar266 - (CONCAT12(bVar449,(ushort)bVar268) & 0xffff);
            auVar296._4_4_ = iVar286 - (uint)bVar449;
            auVar296._8_4_ = uVar263;
            auVar290 = SUB1615((undefined1  [16])0x0,1);
            auVar426[0] = -((char)bVar278 < '\0');
            auVar426[1] = -((char)bVar278 < '\0');
            auVar426[2] = -((char)bVar278 < '\0');
            auVar426[3] = -((char)bVar278 < '\0');
            auVar426[4] = -((char)bVar453 < '\0');
            auVar426[5] = -((char)bVar453 < '\0');
            auVar426[6] = -((char)bVar453 < '\0');
            auVar426[7] = -((char)bVar453 < '\0');
            auVar426[8] = 0;
            auVar426[9] = -('\0' < auVar290[8]);
            auVar426[10] = -('\0' < auVar290[9]);
            auVar426[0xb] = -('\0' < auVar290[10]);
            auVar290 = SUB1615((undefined1  [16])0x0,1);
            auVar317[0] = -((char)bVar268 < '\0');
            auVar317[1] = -((char)bVar268 < '\0');
            auVar317[2] = -((char)bVar268 < '\0');
            auVar317[3] = -((char)bVar268 < '\0');
            auVar317[4] = -((char)bVar449 < '\0');
            auVar317[5] = -((char)bVar449 < '\0');
            auVar317[6] = -((char)bVar449 < '\0');
            auVar317[7] = -((char)bVar449 < '\0');
            auVar317[8] = 0;
            auVar317[9] = -('\0' < auVar290[8]);
            auVar317[10] = -('\0' < auVar290[9]);
            auVar317[0xb] = -('\0' < auVar290[10]);
            auVar18._8_4_ = 0;
            auVar18._0_8_ =
                 (ulonglong)CONCAT14(bVar453,(uint)CONCAT12(bVar453,(ushort)bVar278)) &
                 0xffffffff0000ffff;
            auVar466 = ~auVar426 & auVar18 | auVar388 & auVar426;
            auVar19._8_4_ = 0;
            auVar19._0_8_ =
                 (ulonglong)CONCAT14(bVar449,(uint)CONCAT12(bVar449,(ushort)bVar268)) &
                 0xffffffff0000ffff;
            auVar355 = ~auVar317 & auVar19 | auVar296 & auVar317;
            uVar267 = uVar267 + (auVar466._0_8_ & 0xffffffff);
            uVar288 = uVar288 + auVar466._4_4_;
            auVar293._0_8_ = auVar293._0_8_ + (auVar355._0_8_ & 0xffffffff);
            auVar293._8_8_ = auVar293._8_8_ + (ulonglong)auVar355._4_4_;
          }
        }
      }
      puVar272 = puVar285 + uVar270;
      puVar280 = puVar269 + uVar270;
      pbVar273 = pbVar273 + uVar270;
      uVar267 = uVar288 + auVar293._8_8_ + uVar267 + auVar293._0_8_;
      if (uVar415 == uVar284) goto LAB_140dcf6bd;
    }
    lVar279 = uVar274 - uVar270;
    do {
      bVar268 = *puVar272 - *puVar280;
      *pbVar273 = bVar268;
      uVar284 = 0x100 - bVar268;
      if (-1 < (char)bVar268) {
        uVar284 = (uint)bVar268;
      }
      uVar267 = uVar267 + uVar284;
      pbVar273 = pbVar273 + 1;
      puVar280 = puVar280 + 1;
      puVar272 = puVar272 + 1;
      lVar279 = lVar279 + -1;
    } while (lVar279 != 0);
  }
LAB_140dcf6bd:
  uVar263 = _UNK_1531f2ba8;
  iVar286 = _UNK_1531f2ba4;
  iVar266 = ___xmm_00000000000000000000010000000100;
  uVar415 = _UNK_150651574;
  uVar284 = __xmm_80000000800000008000000080000000;
  uVar270 = uVar7 - uVar274;
  if (uVar274 <= uVar7 && uVar270 != 0) {
    if (1 < uVar270) {
      uVar288 = uVar270 & 0xfffffffffffffffe;
      puVar265 = puVar265 + uVar288;
      puVar277 = puVar277 + uVar288;
      uVar274 = uVar274 + uVar288;
      lVar279 = 0;
      uVar281 = 0;
      do {
        uVar506 = *(ushort *)(puVar280 + uVar281);
        bVar278 = (byte)(uVar506 >> 8);
        uVar513 = *(ushort *)(puVar269 + uVar281);
        bVar268 = (byte)(uVar513 >> 8);
        uVar282 = CONCAT12(bVar268,uVar513) & 0xff;
        uVar526 = *(ushort *)(puVar285 + uVar281);
        bVar449 = (byte)(uVar526 >> 8);
        iVar457 = (CONCAT12(bVar278,uVar506) & 0xff) - uVar282;
        iVar483 = (uint)bVar278 - (uint)bVar268;
        iVar418 = (CONCAT12(bVar449,uVar526) & 0xff) - uVar282;
        iVar445 = (uint)bVar449 - (uint)bVar268;
        uVar271 = CONCAT44(iVar483,iVar457) ^ CONCAT44(iVar483 >> 0x1f,iVar457 >> 0x1f);
        uVar122 = CONCAT44(iVar445,iVar418) ^ CONCAT44(iVar445 >> 0x1f,iVar418 >> 0x1f);
        uVar353 = (int)uVar122 - (iVar418 >> 0x1f);
        uVar313 = (int)(uVar122 >> 0x20) - (iVar445 >> 0x1f);
        iVar458 = iVar418 + iVar457 >> 0x1f;
        iVar484 = iVar445 + iVar483 >> 0x1f;
        uVar122 = CONCAT44(iVar445 + iVar483,iVar418 + iVar457) ^ CONCAT44(iVar484,iVar458);
        uVar488 = (int)uVar122 - iVar458;
        uVar494 = (int)(uVar122 >> 0x20) - iVar484;
        uVar282 = (int)uVar271 - (iVar457 >> 0x1f) ^ uVar284;
        uVar334 = (int)(uVar271 >> 0x20) - (iVar483 >> 0x1f) ^ uVar415;
        auVar402._0_4_ = -(uint)((int)uVar488 < (int)uVar353);
        auVar402._4_4_ = -(uint)((int)uVar494 < (int)uVar313);
        auVar402._8_8_ = 0;
        auVar370._8_8_ = 0;
        auVar370._0_8_ =
             CONCAT44(-(uint)((int)(uVar494 ^ uVar415) < (int)uVar334),
                      -(uint)((int)(uVar488 ^ uVar284) < (int)uVar282)) |
             CONCAT44(-(uint)((int)(uVar313 ^ uVar415) < (int)uVar334),
                      -(uint)((int)(uVar353 ^ uVar284) < (int)uVar282));
        auVar432 = packssdw(auVar370,auVar370);
        auVar432 = packsswb(auVar432,auVar432);
        auVar472 = packssdw(auVar402,auVar402);
        auVar472 = packsswb(auVar472,auVar472);
        auVar432 = ~auVar432 & ZEXT216(uVar526) |
                   (~auVar472 & ZEXT216(uVar506) | ZEXT216(uVar513) & auVar472) & auVar432;
        bVar268 = (char)*(undefined2 *)(puVar272 + uVar281) - auVar432[0];
        cVar375 = (char)((ushort)*(undefined2 *)(puVar272 + uVar281) >> 8) - auVar432[1];
        *(ushort *)(pbVar273 + uVar281) = CONCAT11(cVar375,bVar268);
        auVar247._8_7_ = 0;
        auVar247._0_8_ = SUB158(ZEXT815(0),7);
        auVar222._9_6_ = 0;
        auVar222._0_9_ = SUB159(auVar247 << 0x38,6);
        auVar248._10_5_ = 0;
        auVar248._0_10_ = SUB1510(auVar222 << 0x30,5);
        auVar223._11_4_ = 0;
        auVar223._0_11_ = SUB1511(auVar248 << 0x28,4);
        auVar108[2] = cVar375;
        auVar108._0_2_ = CONCAT11(cVar375,bVar268);
        auVar108._3_12_ = SUB1512(auVar223 << 0x20,3);
        auVar120[1] = 0;
        auVar120[0] = bVar268;
        auVar120._2_13_ = auVar108._2_13_;
        auVar81._4_2_ = auVar108._2_2_;
        auVar81._0_4_ = auVar120._0_4_;
        auVar81._6_8_ = SUB148(ZEXT214(0) << 0x40,6);
        uVar282 = auVar120._0_4_ & 0xffff;
        auVar93._4_10_ = auVar81._4_10_;
        auVar93._0_4_ = uVar282;
        auVar336._0_4_ = iVar266 - uVar282;
        auVar336._4_4_ = iVar286 - auVar81._4_4_;
        auVar336._8_4_ = uVar263;
        auVar290 = SUB1615((undefined1  [16])0x0,1);
        auVar354[0] = -((char)bVar268 < '\0');
        auVar354[1] = -((char)bVar268 < '\0');
        auVar354[2] = -((char)bVar268 < '\0');
        auVar354[3] = -((char)bVar268 < '\0');
        auVar354[4] = -(cVar375 < '\0');
        auVar354[5] = -(cVar375 < '\0');
        auVar354[6] = -(cVar375 < '\0');
        auVar354[7] = -(cVar375 < '\0');
        auVar354[8] = 0;
        auVar354[9] = -('\0' < auVar290[8]);
        auVar354[10] = -('\0' < auVar290[9]);
        auVar354[0xb] = -('\0' < auVar290[10]);
        auVar355 = ~auVar354 & auVar93._0_12_ | auVar336 & auVar354;
        uVar267 = uVar267 + (auVar355._0_8_ & 0xffffffff);
        lVar279 = lVar279 + (ulonglong)auVar355._4_4_;
        uVar281 = uVar281 + 2;
      } while (uVar288 != uVar281);
      uVar267 = lVar279 + uVar267;
      puVar280 = puVar280 + uVar288;
      puVar272 = puVar272 + uVar288;
      pbVar273 = pbVar273 + uVar288;
      if (uVar270 == uVar288) goto LAB_140dcfd6b;
    }
    lVar279 = 0;
    do {
      bVar268 = puVar265[lVar279 + 1];
      uVar415 = (uint)puVar280[lVar279] - (uint)bVar268;
      iVar266 = (uint)puVar277[lVar279 + 1] - (uint)bVar268;
      uVar284 = -uVar415;
      if ((int)-uVar415 < 0) {
        uVar284 = uVar415;
      }
      bVar449 = (byte)-iVar266;
      if (-iVar266 < 0) {
        bVar449 = (byte)iVar266;
      }
      uVar282 = -(iVar266 + uVar415);
      if ((int)uVar282 < 0) {
        uVar282 = iVar266 + uVar415;
      }
      if (bVar449 <= uVar282) {
        bVar268 = puVar280[lVar279];
      }
      bVar278 = puVar277[lVar279 + 1];
      if (uVar282 < (uVar284 & 0xff)) {
        bVar278 = bVar268;
      }
      if ((uint)bVar449 < (uVar284 & 0xff)) {
        bVar278 = bVar268;
      }
      bVar278 = puVar272[lVar279] - bVar278;
      uVar284 = 0x100 - bVar278;
      if (-1 < (char)bVar278) {
        uVar284 = (uint)bVar278;
      }
      pbVar273[lVar279] = bVar278;
      uVar267 = uVar267 + uVar284;
      lVar279 = lVar279 + 1;
    } while (uVar7 - uVar274 != lVar279);
  }
LAB_140dcfd6b:
  if (uVar267 < uVar276) {
    puVar283 = param_1->try_row;
    if (param_1->tst_row != (uchar *)0x0) {
      param_1->try_row = param_1->tst_row;
      param_1->tst_row = puVar283;
    }
  }
LAB_140dcfa85:
  png_compress_IDAT(param_1,puVar283,param_2->rowbytes + 1,0);
  puVar283 = param_1->prev_row;
  if (puVar283 != (uchar *)0x0) {
    param_1->prev_row = param_1->row_buf;
    param_1->row_buf = puVar283;
  }
  png_write_finish_row(param_1);
  uVar284 = param_1->flush_rows + 1;
  param_1->flush_rows = uVar284;
  if (param_1->flush_dist - 1 < uVar284) {
    png_write_flush(param_1);
    return;
  }
  return;
}

// png_write_find_filter_avx2 @ 140dd0440

void __cdecl
png_write_find_filter_avx2(png_struct_def_conflict *param_1,png_row_info_struct *param_2)

{
  undefined1 (*pauVar1) [32];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  uint uVar9;
  uint uVar10;
  ulonglong uVar11;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [32];
  undefined1 auVar26 [32];
  undefined1 auVar27 [32];
  undefined1 auVar28 [32];
  undefined1 auVar29 [32];
  undefined1 auVar30 [32];
  undefined1 auVar31 [32];
  undefined1 auVar32 [32];
  undefined1 auVar33 [32];
  undefined1 auVar34 [32];
  undefined1 auVar35 [32];
  undefined1 auVar36 [32];
  undefined1 auVar37 [32];
  undefined1 auVar38 [32];
  undefined1 auVar39 [32];
  undefined8 uVar40;
  uchar *puVar41;
  byte bVar42;
  byte bVar43;
  undefined1 (*pauVar44) [32];
  uchar *puVar45;
  byte bVar46;
  undefined1 (*pauVar47) [32];
  byte *pbVar48;
  undefined1 (*pauVar49) [32];
  ulonglong uVar50;
  uchar *puVar51;
  uint uVar52;
  uint uVar53;
  uchar *puVar54;
  uchar *puVar55;
  ulonglong uVar56;
  int iVar57;
  ulonglong uVar58;
  byte bVar59;
  longlong lVar60;
  undefined1 (*pauVar61) [32];
  uchar *puVar62;
  ulonglong uVar63;
  uint uVar64;
  ulonglong uVar65;
  uchar *puVar66;
  byte *pbVar67;
  ulonglong uVar68;
  int iVar69;
  longlong lVar76;
  undefined1 auVar70 [16];
  undefined1 auVar71 [16];
  longlong lVar74;
  longlong lVar75;
  longlong lVar79;
  longlong lVar80;
  undefined1 auVar72 [32];
  longlong lVar77;
  undefined1 in_ZMM0 [64];
  longlong lVar78;
  longlong lVar81;
  undefined1 auVar73 [64];
  undefined1 auVar82 [16];
  undefined1 auVar83 [16];
  undefined1 auVar84 [16];
  undefined1 auVar85 [16];
  undefined1 auVar86 [16];
  undefined1 auVar87 [16];
  undefined1 auVar88 [16];
  undefined1 auVar89 [16];
  undefined1 auVar90 [16];
  undefined1 auVar95 [16];
  longlong lVar98;
  longlong lVar99;
  longlong lVar100;
  undefined1 auVar96 [32];
  undefined1 auVar91 [16];
  undefined1 auVar92 [16];
  undefined1 auVar93 [16];
  undefined1 auVar94 [16];
  undefined1 auVar97 [32];
  undefined1 auVar101 [16];
  longlong lVar102;
  longlong lVar103;
  undefined1 auVar104 [16];
  undefined1 auVar105 [16];
  longlong lVar106;
  longlong lVar107;
  undefined1 auVar108 [16];
  undefined1 auVar109 [16];
  undefined1 auVar110 [16];
  undefined1 auVar111 [16];
  uchar *local_118;
  
  auVar72 = in_ZMM0._0_32_;
  bVar43 = param_1->do_filter;
  uVar11 = param_2->rowbytes;
  bVar46 = param_2->pixel_depth;
  puVar45 = param_1->row_buf;
  if (uVar11 < 0x1ffffffffffffff) {
    uVar56 = 0xfffffffffffffeff;
    if ((bVar43 != 8 & bVar43 >> 3) == 1) {
      if (uVar11 == 0) {
        uVar56 = 0;
      }
      else {
        if (uVar11 < 0x10) {
          uVar56 = 0;
          uVar50 = 0;
          puVar41 = puVar45;
          auVar96 = auVar72;
        }
        else {
          uVar50 = uVar11 & 0x1fffffffffffff0;
          puVar41 = puVar45 + uVar50;
          lVar60 = 0;
          lVar74 = 0;
          lVar77 = 0;
          lVar79 = 0;
          auVar108._4_4_ = __real_00000100;
          auVar108._0_4_ = __real_00000100;
          auVar108._8_4_ = __real_00000100;
          auVar108._12_4_ = __real_00000100;
          uVar56 = 0;
          lVar76 = 0;
          lVar81 = 0;
          lVar98 = 0;
          lVar99 = 0;
          lVar75 = 0;
          lVar80 = 0;
          lVar102 = 0;
          lVar103 = 0;
          lVar78 = 0;
          lVar100 = 0;
          lVar106 = 0;
          lVar107 = 0;
          do {
            auVar2 = vpmovzxbd_avx(ZEXT416(*(uint *)(puVar45 + uVar56 + 1)));
            auVar91 = vpmovzxbd_avx(ZEXT416(*(uint *)(puVar45 + uVar56 + 5)));
            auVar14 = vpsubd_avx(auVar108,auVar2);
            auVar105 = vpmovsxbd_avx(ZEXT416(*(uint *)(puVar45 + uVar56 + 1)));
            auVar105 = vblendvps_avx(auVar2,auVar14,auVar105);
            auVar14 = vpmovzxbd_avx(ZEXT416(*(uint *)(puVar45 + uVar56 + 9)));
            auVar19 = vpsubd_avx(auVar108,auVar91);
            auVar2 = vpmovsxbd_avx(ZEXT416(*(uint *)(puVar45 + uVar56 + 5)));
            auVar2 = vblendvps_avx(auVar91,auVar19,auVar2);
            auVar19 = vpsubd_avx(auVar108,auVar14);
            auVar91 = vpmovsxbd_avx(ZEXT416(*(uint *)(puVar45 + uVar56 + 9)));
            auVar91 = vblendvps_avx(auVar14,auVar19,auVar91);
            auVar19 = vpmovzxbd_avx(ZEXT416(*(uint *)(puVar45 + uVar56 + 0xd)));
            auVar20 = vpsubd_avx(auVar108,auVar19);
            auVar14 = vpmovsxbd_avx(ZEXT416(*(uint *)(puVar45 + uVar56 + 0xd)));
            auVar14 = vblendvps_avx(auVar19,auVar20,auVar14);
            auVar72 = vpmovzxdq_avx2(auVar105);
            lVar60 = lVar60 + auVar72._0_8_;
            lVar74 = lVar74 + auVar72._8_8_;
            lVar77 = lVar77 + auVar72._16_8_;
            lVar79 = lVar79 + auVar72._24_8_;
            auVar72 = vpmovzxdq_avx2(auVar2);
            lVar76 = lVar76 + auVar72._0_8_;
            lVar81 = lVar81 + auVar72._8_8_;
            lVar98 = lVar98 + auVar72._16_8_;
            lVar99 = lVar99 + auVar72._24_8_;
            auVar72 = vpmovzxdq_avx2(auVar91);
            lVar75 = lVar75 + auVar72._0_8_;
            lVar80 = lVar80 + auVar72._8_8_;
            lVar102 = lVar102 + auVar72._16_8_;
            lVar103 = lVar103 + auVar72._24_8_;
            auVar72 = vpmovzxdq_avx2(auVar14);
            lVar78 = lVar78 + auVar72._0_8_;
            lVar100 = lVar100 + auVar72._8_8_;
            lVar106 = lVar106 + auVar72._16_8_;
            lVar107 = lVar107 + auVar72._24_8_;
            uVar56 = uVar56 + 0x10;
          } while (uVar50 != uVar56);
          auVar105._0_8_ = lVar78 + lVar75 + lVar76 + lVar60;
          auVar105._8_8_ = lVar100 + lVar80 + lVar81 + lVar74;
          auVar96._16_8_ = lVar106 + lVar102 + lVar98 + lVar77;
          auVar96._0_16_ = auVar105;
          auVar96._24_8_ = lVar107 + lVar103 + lVar99 + lVar79;
          auVar108 = vpaddq_avx(auVar105,auVar96._16_16_);
          auVar105 = vpshufd_avx(auVar108,0xee);
          auVar108 = vpaddq_avx(auVar108,auVar105);
          auVar72 = ZEXT1632(auVar108);
          uVar56 = auVar108._0_8_;
          auVar96 = ZEXT1632(auVar108);
          if (uVar11 == uVar50) goto LAB_140dd0661;
        }
        auVar72 = auVar96;
        lVar60 = 0;
        do {
          bVar42 = puVar41[lVar60 + 1];
          uVar64 = 0x100 - bVar42;
          if (-1 < (char)bVar42) {
            uVar64 = (uint)bVar42;
          }
          uVar56 = uVar56 + uVar64;
          lVar60 = lVar60 + 1;
        } while (uVar11 - uVar50 != lVar60);
      }
    }
  }
  else {
    bVar43 = bVar43 & -bVar43;
    uVar56 = 0xfffffffffffffeff;
  }
LAB_140dd0661:
  uVar64 = bVar46 + 7 >> 3;
  uVar50 = (ulonglong)uVar64;
  if (bVar43 == 0x10) {
    puVar41 = param_1->try_row;
    *puVar41 = '\x01';
    pauVar44 = (undefined1 (*) [32])(puVar41 + 1);
    pauVar1 = (undefined1 (*) [32])(puVar45 + 1);
    pauVar47 = pauVar1;
    if (bVar46 != 0) {
      if (bVar46 < 0xf9) {
        uVar58 = 0;
      }
      else {
        uVar58 = (ulonglong)(uVar64 & 0xffffffe0);
        pauVar47 = (undefined1 (*) [32])(*pauVar1 + uVar58);
        auVar72 = *pauVar1;
        *pauVar44 = auVar72;
        pauVar44 = (undefined1 (*) [32])(*pauVar44 + uVar58);
        if (uVar58 == uVar50) goto LAB_140dd0712;
      }
      lVar60 = uVar50 - uVar58;
      do {
        (*pauVar44)[0] = (*pauVar47)[0];
        pauVar44 = (undefined1 (*) [32])(*pauVar44 + 1);
        pauVar47 = (undefined1 (*) [32])(*pauVar47 + 1);
        lVar60 = lVar60 + -1;
      } while (lVar60 != 0);
    }
LAB_140dd0712:
    uVar58 = uVar11 - uVar50;
    if (uVar50 <= uVar11 && uVar58 != 0) {
      uVar65 = uVar50;
      auVar96 = auVar72;
      if (0xf < uVar58) {
        if (uVar58 < 0x40) {
          uVar65 = 0;
        }
        else {
          uVar65 = uVar58 & 0xffffffffffffffc0;
          uVar68 = 0;
          do {
            auVar72 = vpsubb_avx2(*(undefined1 (*) [32])(*pauVar47 + uVar68),
                                  *(undefined1 (*) [32])(puVar45 + uVar68 + 1));
            auVar96 = vpsubb_avx2(*(undefined1 (*) [32])(pauVar47[1] + uVar68),
                                  *(undefined1 (*) [32])(puVar45 + uVar68 + 0x21));
            *(undefined1 (*) [32])(*pauVar44 + uVar68) = auVar72;
            *(undefined1 (*) [32])(pauVar44[1] + uVar68) = auVar96;
            uVar68 = uVar68 + 0x40;
          } while (uVar65 != uVar68);
          if (uVar58 == uVar65) goto LAB_140dd09b6;
          if ((uVar58 & 0x30) == 0) {
            pauVar47 = (undefined1 (*) [32])(*pauVar47 + uVar65);
            pauVar44 = (undefined1 (*) [32])(*pauVar44 + uVar65);
            puVar45 = puVar45 + uVar65;
            uVar65 = uVar50 | uVar65;
            auVar96 = auVar72;
            goto LAB_140dd0997;
          }
        }
        uVar68 = uVar58 & 0xfffffffffffffff0;
        puVar45 = puVar45 + uVar68;
        do {
          auVar108 = vpsubb_avx(*(undefined1 (*) [16])(*pauVar47 + uVar65),
                                *(undefined1 (*) [16])(*pauVar1 + uVar65));
          auVar72 = ZEXT1632(auVar108);
          *(undefined1 (*) [16])(*pauVar44 + uVar65) = auVar108;
          uVar65 = uVar65 + 0x10;
        } while (uVar68 != uVar65);
        pauVar44 = (undefined1 (*) [32])(*pauVar44 + uVar68);
        pauVar47 = (undefined1 (*) [32])(*pauVar47 + uVar68);
        uVar65 = uVar68 + uVar50;
        auVar96 = ZEXT1632(auVar108);
        if (uVar58 == uVar68) goto LAB_140dd09b6;
      }
LAB_140dd0997:
      auVar72 = auVar96;
      lVar60 = 0;
      do {
        (*pauVar44)[lVar60] = (*pauVar47)[lVar60] - puVar45[lVar60 + 1];
        lVar60 = lVar60 + 1;
      } while (uVar11 - uVar65 != lVar60);
    }
LAB_140dd09b6:
    puVar45 = param_1->try_row;
  }
  else if ((bVar43 & 0x10) != 0) {
    puVar41 = param_1->try_row;
    *puVar41 = '\x01';
    pbVar48 = puVar41 + 1;
    pbVar67 = puVar45 + 1;
    if (bVar46 == 0) {
      uVar58 = 0;
    }
    else {
      if (bVar46 < 0x79) {
        uVar58 = 0;
        uVar65 = 0;
        auVar96 = auVar72;
      }
      else {
        uVar65 = (ulonglong)(uVar64 & 0xfffffff0);
        uVar52 = *(uint *)(puVar45 + 1);
        uVar53 = *(uint *)(puVar45 + 5);
        uVar9 = *(uint *)(puVar45 + 9);
        uVar10 = *(uint *)(puVar45 + 0xd);
        uVar40 = *(undefined8 *)(puVar45 + 9);
        *(undefined8 *)(puVar41 + 1) = *(undefined8 *)(puVar45 + 1);
        *(undefined8 *)(puVar41 + 9) = uVar40;
        auVar91 = vpmovzxbd_avx(ZEXT416(uVar52));
        auVar14 = vpmovzxbd_avx(ZEXT416(uVar53));
        auVar19 = vpmovzxbd_avx(ZEXT416(uVar9));
        auVar20 = vpmovzxbd_avx(ZEXT416(uVar10));
        auVar104._4_4_ = __real_00000100;
        auVar104._0_4_ = __real_00000100;
        auVar104._8_4_ = __real_00000100;
        auVar104._12_4_ = __real_00000100;
        auVar15 = vpsubd_avx(auVar104,auVar91);
        auVar16 = vpsubd_avx(auVar104,auVar14);
        auVar82 = vpsubd_avx(auVar104,auVar19);
        auVar17 = vpsubd_avx(auVar104,auVar20);
        auVar108 = vpmovsxbd_avx(ZEXT416(uVar52));
        auVar105 = vpmovsxbd_avx(ZEXT416(uVar53));
        auVar2 = vpmovsxbd_avx(ZEXT416(uVar9));
        auVar108 = vblendvps_avx(auVar91,auVar15,auVar108);
        auVar105 = vblendvps_avx(auVar14,auVar16,auVar105);
        auVar2 = vblendvps_avx(auVar19,auVar82,auVar2);
        auVar91 = vpmovsxbd_avx(ZEXT416(uVar10));
        auVar91 = vblendvps_avx(auVar20,auVar17,auVar91);
        auVar14 = auVar108;
        auVar19 = auVar105;
        auVar20 = auVar2;
        auVar15 = auVar91;
        if (uVar65 != 0x10) {
          uVar52 = *(uint *)(puVar45 + 0x11);
          uVar53 = *(uint *)(puVar45 + 0x15);
          uVar9 = *(uint *)(puVar45 + 0x19);
          uVar10 = *(uint *)(puVar45 + 0x1d);
          uVar40 = *(undefined8 *)(puVar45 + 0x19);
          *(undefined8 *)(puVar41 + 0x11) = *(undefined8 *)(puVar45 + 0x11);
          *(undefined8 *)(puVar41 + 0x19) = uVar40;
          auVar19 = vpmovzxbd_avx(ZEXT416(uVar52));
          auVar82 = vpmovzxbd_avx(ZEXT416(uVar53));
          auVar17 = vpmovzxbd_avx(ZEXT416(uVar9));
          auVar70 = vpmovzxbd_avx(ZEXT416(uVar10));
          auVar18 = vpsubd_avx(auVar104,auVar19);
          auVar83 = vpsubd_avx(auVar104,auVar82);
          auVar90 = vpsubd_avx(auVar104,auVar17);
          auVar104 = vpsubd_avx(auVar104,auVar70);
          auVar14 = vpmovsxbd_avx(ZEXT416(uVar52));
          auVar20 = vpmovsxbd_avx(ZEXT416(uVar53));
          auVar15 = vpmovsxbd_avx(ZEXT416(uVar9));
          auVar16 = vpmovsxbd_avx(ZEXT416(uVar10));
          auVar19 = vblendvps_avx(auVar19,auVar18,auVar14);
          auVar20 = vblendvps_avx(auVar82,auVar83,auVar20);
          auVar15 = vblendvps_avx(auVar17,auVar90,auVar15);
          auVar16 = vblendvps_avx(auVar70,auVar104,auVar16);
          auVar14._0_4_ = auVar108._0_4_ + auVar19._0_4_;
          auVar14._4_4_ = auVar108._4_4_ + auVar19._4_4_;
          auVar14._8_4_ = auVar108._8_4_ + auVar19._8_4_;
          auVar14._12_4_ = auVar108._12_4_ + auVar19._12_4_;
          auVar19._0_4_ = auVar105._0_4_ + auVar20._0_4_;
          auVar19._4_4_ = auVar105._4_4_ + auVar20._4_4_;
          auVar19._8_4_ = auVar105._8_4_ + auVar20._8_4_;
          auVar19._12_4_ = auVar105._12_4_ + auVar20._12_4_;
          auVar20._0_4_ = auVar2._0_4_ + auVar15._0_4_;
          auVar20._4_4_ = auVar2._4_4_ + auVar15._4_4_;
          auVar20._8_4_ = auVar2._8_4_ + auVar15._8_4_;
          auVar20._12_4_ = auVar2._12_4_ + auVar15._12_4_;
          auVar15._0_4_ = auVar91._0_4_ + auVar16._0_4_;
          auVar15._4_4_ = auVar91._4_4_ + auVar16._4_4_;
          auVar15._8_4_ = auVar91._8_4_ + auVar16._8_4_;
          auVar15._12_4_ = auVar91._12_4_ + auVar16._12_4_;
        }
        pbVar67 = pbVar67 + uVar65;
        pbVar48 = pbVar48 + uVar65;
        auVar72 = vpmovzxdq_avx2(auVar15);
        auVar96 = vpmovzxdq_avx2(auVar20);
        auVar25 = vpmovzxdq_avx2(auVar19);
        auVar26 = vpmovzxdq_avx2(auVar14);
        auVar2._0_8_ = auVar25._0_8_ + auVar26._0_8_ + auVar96._0_8_ + auVar72._0_8_;
        auVar2._8_8_ = auVar25._8_8_ + auVar26._8_8_ + auVar96._8_8_ + auVar72._8_8_;
        auVar97._16_8_ = auVar25._16_8_ + auVar26._16_8_ + auVar96._16_8_ + auVar72._16_8_;
        auVar97._0_16_ = auVar2;
        auVar97._24_8_ = auVar25._24_8_ + auVar26._24_8_ + auVar96._24_8_ + auVar72._24_8_;
        auVar108 = vpaddq_avx(auVar2,auVar97._16_16_);
        auVar105 = vpshufd_avx(auVar108,0xee);
        auVar108 = vpaddq_avx(auVar108,auVar105);
        auVar72 = ZEXT1632(auVar108);
        uVar58 = auVar108._0_8_;
        auVar96 = ZEXT1632(auVar108);
        if ((uVar64 & 0xfffffff0) == uVar64) goto LAB_140dd08d5;
      }
      auVar72 = auVar96;
      lVar60 = uVar50 - uVar65;
      do {
        bVar42 = *pbVar67;
        *pbVar48 = bVar42;
        uVar52 = 0x100 - bVar42;
        if (-1 < (char)bVar42) {
          uVar52 = (uint)bVar42;
        }
        uVar58 = uVar58 + uVar52;
        pbVar48 = pbVar48 + 1;
        pbVar67 = pbVar67 + 1;
        lVar60 = lVar60 + -1;
      } while (lVar60 != 0);
    }
LAB_140dd08d5:
    uVar65 = uVar11 - uVar50;
    if (uVar50 <= uVar11 && uVar65 != 0) {
      uVar68 = uVar50;
      puVar41 = puVar45;
      auVar96 = auVar72;
      if (7 < uVar65) {
        uVar63 = uVar65 & 0xfffffffffffffff8;
        lVar76 = 0;
        lVar78 = 0;
        lVar81 = 0;
        lVar60 = 0;
        lVar75 = 0;
        lVar74 = 0;
        lVar80 = 0;
        uVar68 = 0;
        auVar91._4_4_ = __real_00000100;
        auVar91._0_4_ = __real_00000100;
        auVar91._8_4_ = __real_00000100;
        auVar91._12_4_ = __real_00000100;
        do {
          auVar108 = vpsubb_avx(ZEXT416(*(uint *)(pbVar67 + uVar68)),
                                ZEXT416(*(uint *)(puVar45 + uVar68 + 1)));
          auVar105 = vpsubb_avx(ZEXT416(*(uint *)(pbVar67 + uVar68 + 4)),
                                ZEXT416(*(uint *)(puVar45 + uVar68 + 5)));
          *(int *)(pbVar48 + uVar68) = auVar108._0_4_;
          *(int *)(pbVar48 + uVar68 + 4) = auVar105._0_4_;
          auVar2 = vpmovzxbd_avx(auVar108);
          auVar14 = vpmovzxbd_avx(auVar105);
          auVar19 = vpsubd_avx(auVar91,auVar2);
          auVar20 = vpsubd_avx(auVar91,auVar14);
          auVar108 = vpmovsxbd_avx(auVar108);
          auVar105 = vpmovsxbd_avx(auVar105);
          auVar108 = vblendvps_avx(auVar2,auVar19,auVar108);
          auVar105 = vblendvps_avx(auVar14,auVar20,auVar105);
          auVar72 = vpmovzxdq_avx2(auVar108);
          uVar58 = uVar58 + auVar72._0_8_;
          lVar76 = lVar76 + auVar72._8_8_;
          lVar78 = lVar78 + auVar72._16_8_;
          lVar81 = lVar81 + auVar72._24_8_;
          auVar72 = vpmovzxdq_avx2(auVar105);
          lVar60 = lVar60 + auVar72._0_8_;
          lVar75 = lVar75 + auVar72._8_8_;
          lVar74 = lVar74 + auVar72._16_8_;
          lVar80 = lVar80 + auVar72._24_8_;
          uVar68 = uVar68 + 8;
        } while (uVar63 != uVar68);
        auVar16._0_8_ = lVar60 + uVar58;
        auVar16._8_8_ = lVar75 + lVar76;
        auVar25._16_8_ = lVar74 + lVar78;
        auVar25._0_16_ = auVar16;
        auVar25._24_8_ = lVar80 + lVar81;
        auVar108 = vpaddq_avx(auVar16,auVar25._16_16_);
        auVar105 = vpshufd_avx(auVar108,0xee);
        auVar108 = vpaddq_avx(auVar108,auVar105);
        auVar72 = ZEXT1632(auVar108);
        uVar58 = auVar108._0_8_;
        uVar68 = uVar50 + uVar63;
        puVar41 = puVar45 + uVar63;
        pbVar48 = pbVar48 + uVar63;
        pbVar67 = pbVar67 + uVar63;
        auVar96 = ZEXT1632(auVar108);
        if (uVar65 == uVar63) goto LAB_140dd109c;
      }
      auVar72 = auVar96;
      lVar60 = 0;
      do {
        bVar42 = pbVar67[lVar60] - puVar41[lVar60 + 1];
        uVar52 = 0x100 - bVar42;
        if (-1 < (char)bVar42) {
          uVar52 = (uint)bVar42;
        }
        pbVar48[lVar60] = bVar42;
        uVar58 = uVar58 + uVar52;
        lVar60 = lVar60 + 1;
      } while (uVar11 - uVar68 != lVar60);
    }
LAB_140dd109c:
    if (uVar58 < uVar56) {
      puVar45 = param_1->try_row;
      uVar56 = uVar58;
      if (param_1->tst_row != (uchar *)0x0) {
        param_1->try_row = param_1->tst_row;
        param_1->tst_row = puVar45;
      }
    }
  }
  if (bVar43 == 0x20) {
    puVar45 = param_1->try_row;
    *puVar45 = '\x02';
    if (uVar11 != 0) {
      puVar41 = param_1->prev_row;
      puVar62 = param_1->row_buf;
      if (uVar11 < 0x10) {
        uVar58 = 0;
        auVar96 = auVar72;
      }
      else {
        if (uVar11 < 0x40) {
          uVar65 = 0;
        }
        else {
          uVar58 = uVar11 & 0xffffffffffffffc0;
          uVar65 = 0;
          do {
            auVar72 = vpsubb_avx2(*(undefined1 (*) [32])(puVar62 + uVar65 + 1),
                                  *(undefined1 (*) [32])(puVar41 + uVar65 + 1));
            auVar96 = vpsubb_avx2(*(undefined1 (*) [32])(puVar62 + uVar65 + 0x21),
                                  *(undefined1 (*) [32])(puVar41 + uVar65 + 0x21));
            *(undefined1 (*) [32])(puVar45 + uVar65 + 1) = auVar72;
            *(undefined1 (*) [32])(puVar45 + uVar65 + 0x21) = auVar96;
            uVar65 = uVar65 + 0x40;
          } while (uVar58 != uVar65);
          if (uVar11 == uVar58) goto LAB_140dd0dc8;
          uVar65 = uVar58;
          if ((uVar11 & 0x30) == 0) {
            puVar62 = puVar62 + uVar58;
            puVar45 = puVar45 + uVar58;
            puVar41 = puVar41 + uVar58;
            auVar96 = auVar72;
            goto LAB_140dd0da6;
          }
        }
        uVar58 = uVar11 & 0xfffffffffffffff0;
        do {
          auVar108 = vpsubb_avx(*(undefined1 (*) [16])(puVar62 + uVar65 + 1),
                                *(undefined1 (*) [16])(puVar41 + uVar65 + 1));
          auVar72 = ZEXT1632(auVar108);
          *(undefined1 (*) [16])(puVar45 + uVar65 + 1) = auVar108;
          uVar65 = uVar65 + 0x10;
        } while (uVar58 != uVar65);
        puVar62 = puVar62 + uVar58;
        puVar45 = puVar45 + uVar58;
        puVar41 = puVar41 + uVar58;
        auVar96 = ZEXT1632(auVar108);
        if (uVar11 == uVar58) goto LAB_140dd0dc8;
      }
LAB_140dd0da6:
      auVar72 = auVar96;
      lVar60 = 0;
      do {
        puVar45[lVar60 + 1] = puVar62[lVar60 + 1] - puVar41[lVar60 + 1];
        lVar60 = lVar60 + 1;
      } while (uVar11 - uVar58 != lVar60);
    }
LAB_140dd0dc8:
    puVar45 = param_1->try_row;
LAB_140dd0ddd:
    if ((bVar43 & 0x40) != 0) {
      puVar54 = param_1->try_row;
      *puVar54 = '\x03';
      puVar51 = param_1->prev_row;
      puVar55 = param_1->row_buf;
      pbVar48 = puVar54 + 1;
      pbVar67 = puVar51 + 1;
      puVar41 = puVar55 + 1;
      uVar58 = 0;
      puVar62 = puVar41;
      if (bVar46 == 0) {
        uVar65 = 0;
      }
      else {
        if (uVar64 - 1 < 7) {
          uVar65 = 0;
          auVar96 = auVar72;
        }
        else {
          uVar68 = (ulonglong)(uVar64 - 1) + 1;
          uVar58 = uVar68 & 0x1fffffff8;
          puVar62 = puVar41 + uVar58;
          pbVar67 = pbVar67 + uVar58;
          pbVar48 = pbVar48 + uVar58;
          lVar60 = 0;
          lVar75 = 0;
          lVar74 = 0;
          lVar80 = 0;
          uVar65 = 0;
          auVar83[1] = DAT_1531f2be0;
          auVar83[0] = DAT_1531f2be0;
          auVar83[2] = DAT_1531f2be0;
          auVar83[3] = DAT_1531f2be0;
          auVar83[4] = DAT_1531f2be0;
          auVar83[5] = DAT_1531f2be0;
          auVar83[6] = DAT_1531f2be0;
          auVar83[7] = DAT_1531f2be0;
          auVar83[8] = DAT_1531f2be0;
          auVar83[9] = DAT_1531f2be0;
          auVar83[10] = DAT_1531f2be0;
          auVar83[0xb] = DAT_1531f2be0;
          auVar83[0xc] = DAT_1531f2be0;
          auVar83[0xd] = DAT_1531f2be0;
          auVar83[0xe] = DAT_1531f2be0;
          auVar83[0xf] = DAT_1531f2be0;
          auVar90._4_4_ = __real_00000100;
          auVar90._0_4_ = __real_00000100;
          auVar90._8_4_ = __real_00000100;
          auVar90._12_4_ = __real_00000100;
          lVar76 = 0;
          lVar78 = 0;
          lVar81 = 0;
          lVar100 = 0;
          do {
            auVar108 = vpsrlw_avx(ZEXT416(*(uint *)(puVar51 + uVar65 + 1)),1);
            auVar108 = vpand_avx(auVar108,auVar83);
            auVar105 = vpsubb_avx(ZEXT416(*(uint *)(puVar55 + uVar65 + 1)),auVar108);
            auVar108 = vpsrlw_avx(ZEXT416(*(uint *)(puVar51 + uVar65 + 5)),1);
            auVar108 = vpand_avx(auVar108,auVar83);
            auVar14 = vpsubb_avx(ZEXT416(*(uint *)(puVar55 + uVar65 + 5)),auVar108);
            *(int *)(puVar54 + uVar65 + 1) = auVar105._0_4_;
            *(int *)(puVar54 + uVar65 + 5) = auVar14._0_4_;
            auVar2 = vpmovzxbd_avx(auVar105);
            auVar91 = vpmovzxbd_avx(auVar14);
            auVar19 = vpsubd_avx(auVar90,auVar2);
            auVar20 = vpsubd_avx(auVar90,auVar91);
            auVar108 = vpmovsxbd_avx(auVar105);
            auVar105 = vpmovsxbd_avx(auVar14);
            auVar108 = vblendvps_avx(auVar2,auVar19,auVar108);
            auVar105 = vblendvps_avx(auVar91,auVar20,auVar105);
            auVar72 = vpmovzxdq_avx2(auVar108);
            lVar60 = lVar60 + auVar72._0_8_;
            lVar75 = lVar75 + auVar72._8_8_;
            lVar74 = lVar74 + auVar72._16_8_;
            lVar80 = lVar80 + auVar72._24_8_;
            auVar72 = vpmovzxdq_avx2(auVar105);
            lVar76 = lVar76 + auVar72._0_8_;
            lVar78 = lVar78 + auVar72._8_8_;
            lVar81 = lVar81 + auVar72._16_8_;
            lVar100 = lVar100 + auVar72._24_8_;
            uVar65 = uVar65 + 8;
          } while (uVar58 != uVar65);
          auVar21._0_8_ = lVar76 + lVar60;
          auVar21._8_8_ = lVar78 + lVar75;
          auVar28._16_8_ = lVar81 + lVar74;
          auVar28._0_16_ = auVar21;
          auVar28._24_8_ = lVar100 + lVar80;
          auVar108 = vpaddq_avx(auVar21,auVar28._16_16_);
          auVar105 = vpshufd_avx(auVar108,0xee);
          auVar108 = vpaddq_avx(auVar108,auVar105);
          auVar72 = ZEXT1632(auVar108);
          uVar65 = auVar108._0_8_;
          auVar96 = ZEXT1632(auVar108);
          if (uVar68 == uVar58) goto LAB_140dd0f74;
        }
        auVar72 = auVar96;
        iVar57 = uVar64 - (int)uVar58;
        do {
          bVar42 = *puVar62 - (*pbVar67 >> 1);
          *pbVar48 = bVar42;
          uVar52 = 0x100 - bVar42;
          if (-1 < (char)bVar42) {
            uVar52 = (uint)bVar42;
          }
          uVar65 = uVar65 + uVar52;
          pbVar48 = pbVar48 + 1;
          pbVar67 = pbVar67 + 1;
          puVar62 = puVar62 + 1;
          iVar57 = iVar57 + -1;
        } while (iVar57 != 0);
      }
LAB_140dd0f74:
      uVar58 = uVar11 - uVar50;
      if (uVar50 <= uVar11 && uVar58 != 0) {
        uVar52 = uVar64;
        auVar96 = auVar72;
        if ((3 < uVar58) &&
           (~uVar50 + uVar11 >> 0x20 == 0 && (uint)(~uVar50 + uVar11) <= -uVar64 - 2)) {
          uVar68 = uVar58 & 0xfffffffffffffffc;
          puVar55 = puVar55 + uVar68;
          auVar73 = ZEXT864(uVar65);
          uVar65 = 0;
          auVar89[1] = DAT_1531f2be0;
          auVar89[0] = DAT_1531f2be0;
          auVar89[2] = DAT_1531f2be0;
          auVar89[3] = DAT_1531f2be0;
          auVar89[4] = DAT_1531f2be0;
          auVar89[5] = DAT_1531f2be0;
          auVar89[6] = DAT_1531f2be0;
          auVar89[7] = DAT_1531f2be0;
          auVar89[8] = DAT_1531f2be0;
          auVar89[9] = DAT_1531f2be0;
          auVar89[10] = DAT_1531f2be0;
          auVar89[0xb] = DAT_1531f2be0;
          auVar89[0xc] = DAT_1531f2be0;
          auVar89[0xd] = DAT_1531f2be0;
          auVar89[0xe] = DAT_1531f2be0;
          auVar89[0xf] = DAT_1531f2be0;
          auVar95._4_4_ = __real_00000100;
          auVar95._0_4_ = __real_00000100;
          auVar95._8_4_ = __real_00000100;
          auVar95._12_4_ = __real_00000100;
          do {
            auVar108 = vpand_avx(ZEXT416(*(uint *)(puVar41 + uVar65)),
                                 ZEXT416(*(uint *)(pbVar67 + uVar65)));
            auVar105 = vpsrlw_avx(ZEXT416(*(uint *)(puVar41 + uVar65) ^ *(uint *)(pbVar67 + uVar65))
                                  ,1);
            auVar105 = vpand_avx(auVar105,auVar89);
            auVar12[0] = auVar108[0] + auVar105[0];
            auVar12[1] = auVar108[1] + auVar105[1];
            auVar12[2] = auVar108[2] + auVar105[2];
            auVar12[3] = auVar108[3] + auVar105[3];
            auVar12[4] = auVar108[4] + auVar105[4];
            auVar12[5] = auVar108[5] + auVar105[5];
            auVar12[6] = auVar108[6] + auVar105[6];
            auVar12[7] = auVar108[7] + auVar105[7];
            auVar12[8] = auVar108[8] + auVar105[8];
            auVar12[9] = auVar108[9] + auVar105[9];
            auVar12[10] = auVar108[10] + auVar105[10];
            auVar12[0xb] = auVar108[0xb] + auVar105[0xb];
            auVar12[0xc] = auVar108[0xc] + auVar105[0xc];
            auVar12[0xd] = auVar108[0xd] + auVar105[0xd];
            auVar12[0xe] = auVar108[0xe] + auVar105[0xe];
            auVar12[0xf] = auVar108[0xf] + auVar105[0xf];
            auVar108 = vpsubb_avx(ZEXT416(*(uint *)(puVar62 + uVar65)),auVar12);
            *(int *)(pbVar48 + uVar65) = auVar108._0_4_;
            auVar105 = vpmovzxbd_avx(auVar108);
            auVar2 = vpsubd_avx(auVar95,auVar105);
            auVar108 = vpmovsxbd_avx(auVar108);
            auVar108 = vblendvps_avx(auVar105,auVar2,auVar108);
            auVar72 = vpmovzxdq_avx2(auVar108);
            auVar24._0_8_ = auVar73._0_8_ + auVar72._0_8_;
            auVar24._8_8_ = auVar73._8_8_ + auVar72._8_8_;
            auVar29._16_8_ = auVar73._16_8_ + auVar72._16_8_;
            auVar29._0_16_ = auVar24;
            auVar29._24_8_ = auVar73._24_8_ + auVar72._24_8_;
            auVar73 = ZEXT3264(auVar29);
            uVar65 = uVar65 + 4;
          } while (uVar68 != uVar65);
          auVar108 = vpaddq_avx(auVar24,auVar29._16_16_);
          auVar105 = vpshufd_avx(auVar108,0xee);
          auVar108 = vpaddq_avx(auVar108,auVar105);
          auVar72 = ZEXT1632(auVar108);
          uVar65 = auVar108._0_8_;
          pbVar67 = pbVar67 + uVar68;
          pbVar48 = pbVar48 + uVar68;
          puVar62 = puVar62 + uVar68;
          uVar52 = uVar64 + (int)uVar68;
          auVar96 = ZEXT1632(auVar108);
          if (uVar58 == uVar68) goto LAB_140dd11dd;
        }
        auVar72 = auVar96;
        lVar60 = 0;
        do {
          bVar42 = puVar62[lVar60] - (char)((uint)puVar55[lVar60 + 1] + (uint)pbVar67[lVar60] >> 1);
          pbVar48[lVar60] = bVar42;
          uVar53 = 0x100 - bVar42;
          if (-1 < (char)bVar42) {
            uVar53 = (uint)bVar42;
          }
          uVar65 = uVar65 + uVar53;
          iVar57 = (int)lVar60;
          lVar60 = lVar60 + 1;
        } while (uVar52 + 1 + iVar57 < uVar11);
      }
LAB_140dd11dd:
      if (uVar65 < uVar56) {
        puVar45 = param_1->try_row;
        uVar56 = uVar65;
        if (param_1->tst_row != (uchar *)0x0) {
          param_1->try_row = param_1->tst_row;
          param_1->tst_row = puVar45;
        }
      }
    }
  }
  else {
    if ((bVar43 & 0x20) != 0) {
      puVar41 = param_1->try_row;
      *puVar41 = '\x02';
      if (uVar11 == 0) {
        uVar58 = 0;
      }
      else {
        puVar62 = param_1->prev_row;
        puVar54 = param_1->row_buf;
        if (uVar11 < 8) {
          uVar58 = 0;
          uVar65 = 0;
          puVar51 = puVar54;
          puVar55 = puVar62;
          puVar66 = puVar41;
          auVar96 = auVar72;
        }
        else {
          uVar65 = uVar11 & 0xfffffffffffffff8;
          puVar51 = puVar54 + uVar65;
          puVar55 = puVar62 + uVar65;
          puVar66 = puVar41 + uVar65;
          lVar60 = 0;
          lVar75 = 0;
          lVar74 = 0;
          lVar80 = 0;
          uVar58 = 0;
          auVar82._4_4_ = __real_00000100;
          auVar82._0_4_ = __real_00000100;
          auVar82._8_4_ = __real_00000100;
          auVar82._12_4_ = __real_00000100;
          lVar76 = 0;
          lVar78 = 0;
          lVar81 = 0;
          lVar100 = 0;
          do {
            auVar108 = vpsubb_avx(ZEXT416(*(uint *)(puVar54 + uVar58 + 1)),
                                  ZEXT416(*(uint *)(puVar62 + uVar58 + 1)));
            auVar105 = vpsubb_avx(ZEXT416(*(uint *)(puVar54 + uVar58 + 5)),
                                  ZEXT416(*(uint *)(puVar62 + uVar58 + 5)));
            *(int *)(puVar41 + uVar58 + 1) = auVar108._0_4_;
            *(int *)(puVar41 + uVar58 + 5) = auVar105._0_4_;
            auVar2 = vpmovzxbd_avx(auVar108);
            auVar91 = vpmovzxbd_avx(auVar105);
            auVar14 = vpsubd_avx(auVar82,auVar2);
            auVar19 = vpsubd_avx(auVar82,auVar91);
            auVar108 = vpmovsxbd_avx(auVar108);
            auVar105 = vpmovsxbd_avx(auVar105);
            auVar108 = vblendvps_avx(auVar2,auVar14,auVar108);
            auVar105 = vblendvps_avx(auVar91,auVar19,auVar105);
            auVar72 = vpmovzxdq_avx2(auVar108);
            lVar60 = lVar60 + auVar72._0_8_;
            lVar75 = lVar75 + auVar72._8_8_;
            lVar74 = lVar74 + auVar72._16_8_;
            lVar80 = lVar80 + auVar72._24_8_;
            auVar72 = vpmovzxdq_avx2(auVar105);
            lVar76 = lVar76 + auVar72._0_8_;
            lVar78 = lVar78 + auVar72._8_8_;
            lVar81 = lVar81 + auVar72._16_8_;
            lVar100 = lVar100 + auVar72._24_8_;
            uVar58 = uVar58 + 8;
          } while (uVar65 != uVar58);
          auVar17._0_8_ = lVar76 + lVar60;
          auVar17._8_8_ = lVar78 + lVar75;
          auVar26._16_8_ = lVar81 + lVar74;
          auVar26._0_16_ = auVar17;
          auVar26._24_8_ = lVar100 + lVar80;
          auVar108 = vpaddq_avx(auVar17,auVar26._16_16_);
          auVar105 = vpshufd_avx(auVar108,0xee);
          auVar108 = vpaddq_avx(auVar108,auVar105);
          auVar72 = ZEXT1632(auVar108);
          uVar58 = auVar108._0_8_;
          auVar96 = ZEXT1632(auVar108);
          if (uVar11 == uVar65) goto LAB_140dd0b4f;
        }
        auVar72 = auVar96;
        lVar60 = 0;
        do {
          bVar42 = puVar51[lVar60 + 1] - puVar55[lVar60 + 1];
          uVar52 = 0x100 - bVar42;
          if (-1 < (char)bVar42) {
            uVar52 = (uint)bVar42;
          }
          puVar66[lVar60 + 1] = bVar42;
          uVar58 = uVar58 + uVar52;
          lVar60 = lVar60 + 1;
        } while (uVar11 - uVar65 != lVar60);
      }
LAB_140dd0b4f:
      if (uVar58 < uVar56) {
        puVar45 = param_1->try_row;
        uVar56 = uVar58;
        if (param_1->tst_row != (uchar *)0x0) {
          param_1->try_row = param_1->tst_row;
          param_1->tst_row = puVar45;
        }
      }
    }
    if (bVar43 != 0x40) goto LAB_140dd0ddd;
    puVar41 = param_1->try_row;
    *puVar41 = '\x03';
    puVar62 = param_1->row_buf;
    puVar41 = puVar41 + 1;
    pbVar48 = param_1->prev_row + 1;
    puVar45 = puVar62 + 1;
    puVar54 = puVar45;
    if (bVar46 != 0) {
      uVar58 = 0;
      if (0x1e < uVar64 - 1) {
        uVar68 = (ulonglong)(uVar64 - 1) + 1;
        uVar58 = uVar68 & 0xffffffffffffffe0;
        pbVar67 = pbVar48 + uVar58;
        puVar54 = puVar41 + uVar58;
        uVar65 = 0;
        auVar72[1] = DAT_1531f2be0;
        auVar72[0] = DAT_1531f2be0;
        auVar72[2] = DAT_1531f2be0;
        auVar72[3] = DAT_1531f2be0;
        auVar72[4] = DAT_1531f2be0;
        auVar72[5] = DAT_1531f2be0;
        auVar72[6] = DAT_1531f2be0;
        auVar72[7] = DAT_1531f2be0;
        auVar72[8] = DAT_1531f2be0;
        auVar72[9] = DAT_1531f2be0;
        auVar72[10] = DAT_1531f2be0;
        auVar72[0xb] = DAT_1531f2be0;
        auVar72[0xc] = DAT_1531f2be0;
        auVar72[0xd] = DAT_1531f2be0;
        auVar72[0xe] = DAT_1531f2be0;
        auVar72[0xf] = DAT_1531f2be0;
        auVar72[0x10] = DAT_1531f2be0;
        auVar72[0x11] = DAT_1531f2be0;
        auVar72[0x12] = DAT_1531f2be0;
        auVar72[0x13] = DAT_1531f2be0;
        auVar72[0x14] = DAT_1531f2be0;
        auVar72[0x15] = DAT_1531f2be0;
        auVar72[0x16] = DAT_1531f2be0;
        auVar72[0x17] = DAT_1531f2be0;
        auVar72[0x18] = DAT_1531f2be0;
        auVar72[0x19] = DAT_1531f2be0;
        auVar72[0x1a] = DAT_1531f2be0;
        auVar72[0x1b] = DAT_1531f2be0;
        auVar72[0x1c] = DAT_1531f2be0;
        auVar72[0x1d] = DAT_1531f2be0;
        auVar72[0x1e] = DAT_1531f2be0;
        auVar72[0x1f] = DAT_1531f2be0;
        do {
          auVar96 = vpsrlw_avx2(*(undefined1 (*) [32])(pbVar48 + uVar65),1);
          auVar96 = vpand_avx2(auVar96,auVar72);
          auVar96 = vpsubb_avx2(*(undefined1 (*) [32])(puVar45 + uVar65),auVar96);
          *(undefined1 (*) [32])(puVar41 + uVar65) = auVar96;
          uVar65 = uVar65 + 0x20;
        } while (uVar58 != uVar65);
        puVar41 = puVar54;
        puVar54 = puVar45 + uVar58;
        pbVar48 = pbVar67;
        if (uVar68 == uVar58) goto LAB_140dd0c6e;
      }
      iVar57 = uVar64 - (int)uVar58;
      do {
        *puVar41 = *puVar54 - (*pbVar48 >> 1);
        puVar41 = puVar41 + 1;
        pbVar48 = pbVar48 + 1;
        puVar54 = puVar54 + 1;
        iVar57 = iVar57 + -1;
      } while (iVar57 != 0);
    }
LAB_140dd0c6e:
    uVar58 = uVar11 - uVar50;
    if (uVar50 <= uVar11 && uVar58 != 0) {
      uVar52 = uVar64;
      auVar96 = auVar72;
      if ((0xf < uVar58) &&
         (~uVar50 + uVar11 >> 0x20 == 0 && (uint)(~uVar50 + uVar11) <= -uVar64 - 2)) {
        if (uVar58 < 0x20) {
          uVar68 = 0;
        }
        else {
          uVar68 = uVar58 & 0xffffffffffffffe0;
          uVar65 = 0;
          auVar72[1] = DAT_1531f2be0;
          auVar72[0] = DAT_1531f2be0;
          auVar72[2] = DAT_1531f2be0;
          auVar72[3] = DAT_1531f2be0;
          auVar72[4] = DAT_1531f2be0;
          auVar72[5] = DAT_1531f2be0;
          auVar72[6] = DAT_1531f2be0;
          auVar72[7] = DAT_1531f2be0;
          auVar72[8] = DAT_1531f2be0;
          auVar72[9] = DAT_1531f2be0;
          auVar72[10] = DAT_1531f2be0;
          auVar72[0xb] = DAT_1531f2be0;
          auVar72[0xc] = DAT_1531f2be0;
          auVar72[0xd] = DAT_1531f2be0;
          auVar72[0xe] = DAT_1531f2be0;
          auVar72[0xf] = DAT_1531f2be0;
          auVar72[0x10] = DAT_1531f2be0;
          auVar72[0x11] = DAT_1531f2be0;
          auVar72[0x12] = DAT_1531f2be0;
          auVar72[0x13] = DAT_1531f2be0;
          auVar72[0x14] = DAT_1531f2be0;
          auVar72[0x15] = DAT_1531f2be0;
          auVar72[0x16] = DAT_1531f2be0;
          auVar72[0x17] = DAT_1531f2be0;
          auVar72[0x18] = DAT_1531f2be0;
          auVar72[0x19] = DAT_1531f2be0;
          auVar72[0x1a] = DAT_1531f2be0;
          auVar72[0x1b] = DAT_1531f2be0;
          auVar72[0x1c] = DAT_1531f2be0;
          auVar72[0x1d] = DAT_1531f2be0;
          auVar72[0x1e] = DAT_1531f2be0;
          auVar72[0x1f] = DAT_1531f2be0;
          do {
            auVar96 = vpand_avx2(*(undefined1 (*) [32])(puVar45 + uVar65),
                                 *(undefined1 (*) [32])(pbVar48 + uVar65));
            auVar97 = vpsrlw_avx2(*(undefined1 (*) [32])(puVar45 + uVar65) ^
                                  *(undefined1 (*) [32])(pbVar48 + uVar65),1);
            auVar97 = vpand_avx2(auVar97,auVar72);
            auVar27[0] = auVar96[0] + auVar97[0];
            auVar27[1] = auVar96[1] + auVar97[1];
            auVar27[2] = auVar96[2] + auVar97[2];
            auVar27[3] = auVar96[3] + auVar97[3];
            auVar27[4] = auVar96[4] + auVar97[4];
            auVar27[5] = auVar96[5] + auVar97[5];
            auVar27[6] = auVar96[6] + auVar97[6];
            auVar27[7] = auVar96[7] + auVar97[7];
            auVar27[8] = auVar96[8] + auVar97[8];
            auVar27[9] = auVar96[9] + auVar97[9];
            auVar27[10] = auVar96[10] + auVar97[10];
            auVar27[0xb] = auVar96[0xb] + auVar97[0xb];
            auVar27[0xc] = auVar96[0xc] + auVar97[0xc];
            auVar27[0xd] = auVar96[0xd] + auVar97[0xd];
            auVar27[0xe] = auVar96[0xe] + auVar97[0xe];
            auVar27[0xf] = auVar96[0xf] + auVar97[0xf];
            auVar27[0x10] = auVar96[0x10] + auVar97[0x10];
            auVar27[0x11] = auVar96[0x11] + auVar97[0x11];
            auVar27[0x12] = auVar96[0x12] + auVar97[0x12];
            auVar27[0x13] = auVar96[0x13] + auVar97[0x13];
            auVar27[0x14] = auVar96[0x14] + auVar97[0x14];
            auVar27[0x15] = auVar96[0x15] + auVar97[0x15];
            auVar27[0x16] = auVar96[0x16] + auVar97[0x16];
            auVar27[0x17] = auVar96[0x17] + auVar97[0x17];
            auVar27[0x18] = auVar96[0x18] + auVar97[0x18];
            auVar27[0x19] = auVar96[0x19] + auVar97[0x19];
            auVar27[0x1a] = auVar96[0x1a] + auVar97[0x1a];
            auVar27[0x1b] = auVar96[0x1b] + auVar97[0x1b];
            auVar27[0x1c] = auVar96[0x1c] + auVar97[0x1c];
            auVar27[0x1d] = auVar96[0x1d] + auVar97[0x1d];
            auVar27[0x1e] = auVar96[0x1e] + auVar97[0x1e];
            auVar27[0x1f] = auVar96[0x1f] + auVar97[0x1f];
            auVar96 = vpsubb_avx2(*(undefined1 (*) [32])(puVar54 + uVar65),auVar27);
            *(undefined1 (*) [32])(puVar41 + uVar65) = auVar96;
            uVar65 = uVar65 + 0x20;
          } while (uVar68 != uVar65);
          if (uVar58 == uVar68) goto LAB_140dd0cf7;
          if ((uVar58 & 0x10) == 0) {
            puVar54 = puVar54 + uVar68;
            puVar41 = puVar41 + uVar68;
            pbVar48 = pbVar48 + uVar68;
            puVar62 = puVar62 + uVar68;
            uVar52 = (int)uVar68 + uVar64;
            auVar96 = auVar72;
            goto LAB_140dd0cbe;
          }
        }
        uVar65 = uVar58 & 0xfffffffffffffff0;
        puVar62 = puVar62 + uVar65;
        auVar70[1] = DAT_1531f2be0;
        auVar70[0] = DAT_1531f2be0;
        auVar70[2] = DAT_1531f2be0;
        auVar70[3] = DAT_1531f2be0;
        auVar70[4] = DAT_1531f2be0;
        auVar70[5] = DAT_1531f2be0;
        auVar70[6] = DAT_1531f2be0;
        auVar70[7] = DAT_1531f2be0;
        auVar70[8] = DAT_1531f2be0;
        auVar70[9] = DAT_1531f2be0;
        auVar70[10] = DAT_1531f2be0;
        auVar70[0xb] = DAT_1531f2be0;
        auVar70[0xc] = DAT_1531f2be0;
        auVar70[0xd] = DAT_1531f2be0;
        auVar70[0xe] = DAT_1531f2be0;
        auVar70[0xf] = DAT_1531f2be0;
        auVar72 = ZEXT1632(auVar70);
        do {
          auVar108 = vpand_avx(*(undefined1 (*) [16])(puVar45 + uVar68),
                               *(undefined1 (*) [16])(pbVar48 + uVar68));
          auVar105 = vpsrlw_avx(*(undefined1 (*) [16])(puVar45 + uVar68) ^
                                *(undefined1 (*) [16])(pbVar48 + uVar68),1);
          auVar105 = vpand_avx(auVar105,auVar70);
          auVar18[0] = auVar108[0] + auVar105[0];
          auVar18[1] = auVar108[1] + auVar105[1];
          auVar18[2] = auVar108[2] + auVar105[2];
          auVar18[3] = auVar108[3] + auVar105[3];
          auVar18[4] = auVar108[4] + auVar105[4];
          auVar18[5] = auVar108[5] + auVar105[5];
          auVar18[6] = auVar108[6] + auVar105[6];
          auVar18[7] = auVar108[7] + auVar105[7];
          auVar18[8] = auVar108[8] + auVar105[8];
          auVar18[9] = auVar108[9] + auVar105[9];
          auVar18[10] = auVar108[10] + auVar105[10];
          auVar18[0xb] = auVar108[0xb] + auVar105[0xb];
          auVar18[0xc] = auVar108[0xc] + auVar105[0xc];
          auVar18[0xd] = auVar108[0xd] + auVar105[0xd];
          auVar18[0xe] = auVar108[0xe] + auVar105[0xe];
          auVar18[0xf] = auVar108[0xf] + auVar105[0xf];
          auVar108 = vpsubb_avx(*(undefined1 (*) [16])(puVar54 + uVar68),auVar18);
          *(undefined1 (*) [16])(puVar41 + uVar68) = auVar108;
          uVar68 = uVar68 + 0x10;
        } while (uVar65 != uVar68);
        puVar54 = puVar54 + uVar65;
        pbVar48 = pbVar48 + uVar65;
        puVar41 = puVar41 + uVar65;
        uVar52 = uVar64 + (int)uVar65;
        auVar96 = ZEXT1632(auVar70);
        if (uVar58 == uVar65) goto LAB_140dd0cf7;
      }
LAB_140dd0cbe:
      auVar72 = auVar96;
      lVar60 = 0;
      do {
        puVar41[lVar60] =
             puVar54[lVar60] - (char)((uint)puVar62[lVar60 + 1] + (uint)pbVar48[lVar60] >> 1);
        iVar57 = (int)lVar60;
        lVar60 = lVar60 + 1;
      } while (uVar52 + 1 + iVar57 < uVar11);
    }
LAB_140dd0cf7:
    puVar45 = param_1->try_row;
  }
  if (bVar43 != 0x80) {
    if (-1 < (char)bVar43) goto LAB_140dd1962;
    puVar54 = param_1->try_row;
    *puVar54 = '\x04';
    puVar51 = param_1->prev_row;
    puVar55 = param_1->row_buf;
    pbVar48 = puVar54 + 1;
    puVar41 = puVar51 + 1;
    puVar62 = puVar55 + 1;
    puVar66 = puVar41;
    local_118 = puVar62;
    if (bVar46 == 0) {
      uVar58 = 0;
    }
    else {
      if (bVar46 < 0x39) {
        uVar58 = 0;
        uVar65 = 0;
      }
      else {
        uVar52 = uVar64 & 0xfffffff8;
        uVar65 = (ulonglong)uVar52;
        auVar108 = vpsubb_avx(ZEXT416(*(uint *)(puVar55 + 1)),ZEXT416(*(uint *)(puVar51 + 1)));
        auVar91 = vpsubb_avx(ZEXT416(*(uint *)(puVar55 + 5)),ZEXT416(*(uint *)(puVar51 + 5)));
        *(int *)(puVar54 + 1) = auVar108._0_4_;
        *(int *)(puVar54 + 5) = auVar91._0_4_;
        auVar105 = vpmovzxbd_avx(auVar108);
        auVar2 = vpmovzxbd_avx(auVar91);
        auVar93._4_4_ = __real_00000100;
        auVar93._0_4_ = __real_00000100;
        auVar93._8_4_ = __real_00000100;
        auVar93._12_4_ = __real_00000100;
        auVar14 = vpsubd_avx(auVar93,auVar105);
        auVar19 = vpsubd_avx(auVar93,auVar2);
        auVar108 = vpmovsxbd_avx(auVar108);
        auVar108 = vblendvps_avx(auVar105,auVar14,auVar108);
        auVar105 = vpmovsxbd_avx(auVar91);
        auVar105 = vblendvps_avx(auVar2,auVar19,auVar105);
        auVar84 = auVar105;
        auVar71 = auVar108;
        if (uVar65 != 8) {
          auVar2 = vpsubb_avx(ZEXT416(*(uint *)(puVar55 + 9)),ZEXT416(*(uint *)(puVar51 + 9)));
          auVar19 = vpsubb_avx(ZEXT416(*(uint *)(puVar55 + 0xd)),ZEXT416(*(uint *)(puVar51 + 0xd)));
          *(int *)(puVar54 + 9) = auVar2._0_4_;
          auVar91 = vpmovzxbd_avx(auVar2);
          auVar14 = vpmovzxbd_avx(auVar19);
          auVar20 = vpsubd_avx(auVar93,auVar91);
          auVar2 = vpmovsxbd_avx(auVar2);
          auVar2 = vblendvps_avx(auVar91,auVar20,auVar2);
          auVar20 = vpsubd_avx(auVar93,auVar14);
          auVar91 = vpmovsxbd_avx(auVar19);
          auVar91 = vblendvps_avx(auVar14,auVar20,auVar91);
          *(int *)(puVar54 + 0xd) = auVar19._0_4_;
          auVar71._0_4_ = auVar108._0_4_ + auVar2._0_4_;
          auVar71._4_4_ = auVar108._4_4_ + auVar2._4_4_;
          auVar71._8_4_ = auVar108._8_4_ + auVar2._8_4_;
          auVar71._12_4_ = auVar108._12_4_ + auVar2._12_4_;
          auVar84._0_4_ = auVar105._0_4_ + auVar91._0_4_;
          auVar84._4_4_ = auVar105._4_4_ + auVar91._4_4_;
          auVar84._8_4_ = auVar105._8_4_ + auVar91._8_4_;
          auVar84._12_4_ = auVar105._12_4_ + auVar91._12_4_;
          if (uVar52 != 0x10) {
            auVar108 = vpsubb_avx(ZEXT416(*(uint *)(puVar55 + 0x11)),
                                  ZEXT416(*(uint *)(puVar51 + 0x11)));
            auVar91 = vpsubb_avx(ZEXT416(*(uint *)(puVar55 + 0x15)),
                                 ZEXT416(*(uint *)(puVar51 + 0x15)));
            *(int *)(puVar54 + 0x11) = auVar108._0_4_;
            auVar105 = vpmovzxbd_avx(auVar108);
            auVar2 = vpmovzxbd_avx(auVar91);
            auVar14 = vpsubd_avx(auVar93,auVar105);
            auVar108 = vpmovsxbd_avx(auVar108);
            auVar108 = vblendvps_avx(auVar105,auVar14,auVar108);
            auVar14 = vpsubd_avx(auVar93,auVar2);
            auVar105 = vpmovsxbd_avx(auVar91);
            auVar105 = vblendvps_avx(auVar2,auVar14,auVar105);
            *(int *)(puVar54 + 0x15) = auVar91._0_4_;
            auVar71._0_4_ = auVar71._0_4_ + auVar108._0_4_;
            auVar71._4_4_ = auVar71._4_4_ + auVar108._4_4_;
            auVar71._8_4_ = auVar71._8_4_ + auVar108._8_4_;
            auVar71._12_4_ = auVar71._12_4_ + auVar108._12_4_;
            auVar84._0_4_ = auVar84._0_4_ + auVar105._0_4_;
            auVar84._4_4_ = auVar84._4_4_ + auVar105._4_4_;
            auVar84._8_4_ = auVar84._8_4_ + auVar105._8_4_;
            auVar84._12_4_ = auVar84._12_4_ + auVar105._12_4_;
            if (uVar52 != 0x18) {
              auVar108 = vpsubb_avx(ZEXT416(*(uint *)(puVar55 + 0x19)),
                                    ZEXT416(*(uint *)(puVar51 + 0x19)));
              auVar105 = vpsubb_avx(ZEXT416(*(uint *)(puVar55 + 0x1d)),
                                    ZEXT416(*(uint *)(puVar51 + 0x1d)));
              *(int *)(puVar54 + 0x19) = auVar108._0_4_;
              *(int *)(puVar54 + 0x1d) = auVar105._0_4_;
              auVar2 = vpmovzxbd_avx(auVar108);
              auVar91 = vpmovzxbd_avx(auVar105);
              auVar14 = vpsubd_avx(auVar93,auVar2);
              auVar19 = vpsubd_avx(auVar93,auVar91);
              auVar108 = vpmovsxbd_avx(auVar108);
              auVar105 = vpmovsxbd_avx(auVar105);
              auVar108 = vblendvps_avx(auVar2,auVar14,auVar108);
              auVar105 = vblendvps_avx(auVar91,auVar19,auVar105);
              auVar71._0_4_ = auVar71._0_4_ + auVar108._0_4_;
              auVar71._4_4_ = auVar71._4_4_ + auVar108._4_4_;
              auVar71._8_4_ = auVar71._8_4_ + auVar108._8_4_;
              auVar71._12_4_ = auVar71._12_4_ + auVar108._12_4_;
              auVar84._0_4_ = auVar84._0_4_ + auVar105._0_4_;
              auVar84._4_4_ = auVar84._4_4_ + auVar105._4_4_;
              auVar84._8_4_ = auVar84._8_4_ + auVar105._8_4_;
              auVar84._12_4_ = auVar84._12_4_ + auVar105._12_4_;
            }
          }
        }
        local_118 = puVar62 + uVar65;
        puVar66 = puVar41 + uVar65;
        pbVar48 = pbVar48 + uVar65;
        auVar72 = vpmovzxdq_avx2(auVar84);
        auVar96 = vpmovzxdq_avx2(auVar71);
        auVar22._0_8_ = auVar72._0_8_ + auVar96._0_8_;
        auVar22._8_8_ = auVar72._8_8_ + auVar96._8_8_;
        auVar30._16_8_ = auVar72._16_8_ + auVar96._16_8_;
        auVar30._0_16_ = auVar22;
        auVar30._24_8_ = auVar72._24_8_ + auVar96._24_8_;
        auVar108 = vpaddq_avx(auVar22,auVar30._16_16_);
        auVar105 = vpshufd_avx(auVar108,0xee);
        auVar108 = vpaddq_avx(auVar108,auVar105);
        uVar58 = auVar108._0_8_;
        if (uVar52 == uVar64) goto LAB_140dd170d;
      }
      lVar60 = uVar50 - uVar65;
      do {
        bVar43 = *local_118 - *puVar66;
        *pbVar48 = bVar43;
        uVar64 = 0x100 - bVar43;
        if (-1 < (char)bVar43) {
          uVar64 = (uint)bVar43;
        }
        uVar58 = uVar58 + uVar64;
        pbVar48 = pbVar48 + 1;
        puVar66 = puVar66 + 1;
        local_118 = local_118 + 1;
        lVar60 = lVar60 + -1;
      } while (lVar60 != 0);
    }
LAB_140dd170d:
    uVar65 = uVar11 - uVar50;
    if (uVar50 <= uVar11 && uVar65 != 0) {
      if (3 < uVar65) {
        uVar68 = uVar65 & 0xfffffffffffffffc;
        puVar51 = puVar51 + uVar68;
        puVar55 = puVar55 + uVar68;
        uVar50 = uVar50 + uVar68;
        auVar73 = ZEXT864(uVar58);
        uVar58 = 0;
        auVar88._4_4_ = __real_00000100;
        auVar88._0_4_ = __real_00000100;
        auVar88._8_4_ = __real_00000100;
        auVar88._12_4_ = __real_00000100;
        do {
          auVar108 = vpmovzxbd_avx(ZEXT416(*(uint *)(puVar66 + uVar58)));
          auVar2 = vpmovzxbd_avx(ZEXT416(*(uint *)(puVar41 + uVar58)));
          auVar91 = vpmovzxbd_avx(ZEXT416(*(uint *)(puVar62 + uVar58)));
          auVar105 = vpsubd_avx(auVar108,auVar2);
          auVar14 = vpsubd_avx(auVar91,auVar2);
          auVar13._0_4_ = auVar14._0_4_ + auVar105._0_4_;
          auVar13._4_4_ = auVar14._4_4_ + auVar105._4_4_;
          auVar13._8_4_ = auVar14._8_4_ + auVar105._8_4_;
          auVar13._12_4_ = auVar14._12_4_ + auVar105._12_4_;
          auVar105 = vpminud_avx(auVar108,auVar2);
          auVar108 = vpmaxud_avx(auVar108,auVar2);
          auVar14 = vpsubd_avx(auVar108,auVar105);
          auVar105 = vpminud_avx(auVar91,auVar2);
          auVar108 = vpmaxud_avx(auVar91,auVar2);
          auVar91 = vpsubd_avx(auVar108,auVar105);
          auVar108 = vpabsd_avx(auVar13);
          auVar2 = vpminud_avx(auVar91,auVar108);
          auVar105 = vpmaxud_avx(auVar2,auVar14);
          auVar105 = vpcmpeqd_avx(auVar2,auVar105);
          auVar105 = vpackssdw_avx(auVar105,auVar105);
          auVar105 = vpacksswb_avx(auVar105,auVar105);
          auVar108 = vpcmpgtd_avx(auVar91,auVar108);
          auVar108 = vpackssdw_avx(auVar108,auVar108);
          auVar108 = vpacksswb_avx(auVar108,auVar108);
          auVar108 = vpblendvb_avx(ZEXT416(*(uint *)(puVar66 + uVar58)),
                                   ZEXT416(*(uint *)(puVar41 + uVar58)),auVar108);
          auVar108 = vpblendvb_avx(auVar108,ZEXT416(*(uint *)(puVar62 + uVar58)),auVar105);
          auVar108 = vpsubb_avx(ZEXT416(*(uint *)(local_118 + uVar58)),auVar108);
          *(int *)(pbVar48 + uVar58) = auVar108._0_4_;
          auVar105 = vpmovzxbd_avx(auVar108);
          auVar2 = vpsubd_avx(auVar88,auVar105);
          auVar108 = vpmovsxbd_avx(auVar108);
          auVar108 = vblendvps_avx(auVar105,auVar2,auVar108);
          auVar72 = vpmovzxdq_avx2(auVar108);
          auVar23._0_8_ = auVar73._0_8_ + auVar72._0_8_;
          auVar23._8_8_ = auVar73._8_8_ + auVar72._8_8_;
          auVar31._16_8_ = auVar73._16_8_ + auVar72._16_8_;
          auVar31._0_16_ = auVar23;
          auVar31._24_8_ = auVar73._24_8_ + auVar72._24_8_;
          auVar73 = ZEXT3264(auVar31);
          uVar58 = uVar58 + 4;
        } while (uVar68 != uVar58);
        auVar108 = vpaddq_avx(auVar23,auVar31._16_16_);
        auVar105 = vpshufd_avx(auVar108,0xee);
        auVar108 = vpaddq_avx(auVar108,auVar105);
        uVar58 = auVar108._0_8_;
        puVar66 = puVar66 + uVar68;
        pbVar48 = pbVar48 + uVar68;
        local_118 = local_118 + uVar68;
        if (uVar65 == uVar68) goto LAB_140dd1baa;
      }
      lVar60 = 0;
      do {
        bVar43 = puVar51[lVar60 + 1];
        uVar52 = (uint)puVar66[lVar60] - (uint)bVar43;
        iVar57 = (uint)puVar55[lVar60 + 1] - (uint)bVar43;
        uVar64 = -uVar52;
        if ((int)-uVar52 < 0) {
          uVar64 = uVar52;
        }
        bVar46 = (byte)-iVar57;
        if (-iVar57 < 0) {
          bVar46 = (byte)iVar57;
        }
        uVar53 = -(iVar57 + uVar52);
        if ((int)uVar53 < 0) {
          uVar53 = iVar57 + uVar52;
        }
        if (bVar46 <= uVar53) {
          bVar43 = puVar66[lVar60];
        }
        bVar42 = puVar55[lVar60 + 1];
        if (uVar53 < (uVar64 & 0xff)) {
          bVar42 = bVar43;
        }
        if ((uint)bVar46 < (uVar64 & 0xff)) {
          bVar42 = bVar43;
        }
        bVar42 = local_118[lVar60] - bVar42;
        uVar64 = 0x100 - bVar42;
        if (-1 < (char)bVar42) {
          uVar64 = (uint)bVar42;
        }
        pbVar48[lVar60] = bVar42;
        uVar58 = uVar58 + uVar64;
        lVar60 = lVar60 + 1;
      } while (uVar11 - uVar50 != lVar60);
    }
LAB_140dd1baa:
    if (uVar58 < uVar56) {
      puVar45 = param_1->try_row;
      if (param_1->tst_row != (uchar *)0x0) {
        param_1->try_row = param_1->tst_row;
        param_1->tst_row = puVar45;
      }
    }
    goto LAB_140dd1962;
  }
  puVar45 = param_1->try_row;
  *puVar45 = '\x04';
  puVar41 = param_1->prev_row;
  puVar62 = param_1->row_buf;
  pauVar61 = (undefined1 (*) [32])(puVar45 + 1);
  pauVar1 = (undefined1 (*) [32])(puVar41 + 1);
  pauVar47 = (undefined1 (*) [32])(puVar62 + 1);
  pauVar49 = pauVar1;
  pauVar44 = pauVar47;
  if (bVar46 != 0) {
    if (bVar46 < 0xf9) {
      uVar56 = 0;
    }
    else {
      uVar56 = (ulonglong)(uVar64 & 0xffffffe0);
      pauVar44 = (undefined1 (*) [32])(*pauVar47 + uVar56);
      auVar72 = vpsubb_avx2(*pauVar47,*pauVar1);
      pauVar49 = (undefined1 (*) [32])(*pauVar1 + uVar56);
      *pauVar61 = auVar72;
      pauVar61 = (undefined1 (*) [32])(*pauVar61 + uVar56);
      if (uVar56 == uVar50) goto LAB_140dd1308;
    }
    lVar60 = uVar50 - uVar56;
    do {
      (*pauVar61)[0] = (*pauVar44)[0] - (*pauVar49)[0];
      pauVar61 = (undefined1 (*) [32])(*pauVar61 + 1);
      pauVar49 = (undefined1 (*) [32])(*pauVar49 + 1);
      pauVar44 = (undefined1 (*) [32])(*pauVar44 + 1);
      lVar60 = lVar60 + -1;
    } while (lVar60 != 0);
  }
LAB_140dd1308:
  uVar56 = uVar11 - uVar50;
  if (uVar50 <= uVar11 && uVar56 != 0) {
    if (0xf < uVar56) {
      if (uVar56 < 0x20) {
        uVar65 = 0;
      }
      else {
        uVar65 = uVar56 & 0xffffffffffffffe0;
        uVar58 = 0;
        auVar72 = vpcmpeqd_avx2(auVar72,auVar72);
        do {
          auVar85._8_8_ = *(undefined8 *)(*pauVar49 + uVar58 + 8);
          auVar85._0_8_ = *(undefined8 *)(*pauVar49 + uVar58 + 8);
          auVar3._8_8_ = 0;
          auVar3._0_8_ = *(ulonglong *)(*pauVar49 + uVar58);
          auVar25 = vpmovzxbd_avx2(auVar3);
          auVar94._8_8_ = *(undefined8 *)(*pauVar49 + uVar58 + 0x18);
          auVar94._0_8_ = *(undefined8 *)(*pauVar49 + uVar58 + 0x18);
          auVar26 = vpmovzxbd_avx2(auVar85);
          auVar27 = vpmovzxbd_avx2(auVar94);
          auVar4._8_8_ = 0;
          auVar4._0_8_ = *(ulonglong *)(*pauVar49 + uVar58 + 0x10);
          auVar28 = vpmovzxbd_avx2(auVar4);
          auVar96 = *(undefined1 (*) [32])(*pauVar1 + uVar58);
          auVar86._8_8_ = *(undefined8 *)(puVar41 + uVar58 + 9);
          auVar86._0_8_ = *(undefined8 *)(puVar41 + uVar58 + 9);
          auVar29 = vpmovzxbd_avx2(auVar86);
          auVar5._8_8_ = 0;
          auVar5._0_8_ = *(ulonglong *)(*pauVar1 + uVar58);
          auVar30 = vpmovzxbd_avx2(auVar5);
          auVar87._8_8_ = *(undefined8 *)(puVar41 + uVar58 + 0x19);
          auVar87._0_8_ = *(undefined8 *)(puVar41 + uVar58 + 0x19);
          auVar31 = vpmovzxbd_avx2(auVar87);
          auVar6._8_8_ = 0;
          auVar6._0_8_ = *(ulonglong *)(puVar41 + uVar58 + 0x11);
          auVar32 = vpmovzxbd_avx2(auVar6);
          auVar97 = *(undefined1 (*) [32])(*pauVar47 + uVar58);
          auVar110._8_8_ = *(undefined8 *)(puVar62 + uVar58 + 9);
          auVar110._0_8_ = *(undefined8 *)(puVar62 + uVar58 + 9);
          auVar7._8_8_ = 0;
          auVar7._0_8_ = *(ulonglong *)(*pauVar47 + uVar58);
          auVar33 = vpmovzxbd_avx2(auVar7);
          auVar34 = vpmovzxbd_avx2(auVar110);
          auVar8._8_8_ = 0;
          auVar8._0_8_ = *(ulonglong *)(puVar62 + uVar58 + 0x11);
          auVar35 = vpmovzxbd_avx2(auVar8);
          auVar39 = vpsubd_avx2(auVar28,auVar32);
          auVar35 = vpsubd_avx2(auVar35,auVar32);
          auVar111._8_8_ = *(undefined8 *)(puVar62 + uVar58 + 0x19);
          auVar111._0_8_ = *(undefined8 *)(puVar62 + uVar58 + 0x19);
          auVar28 = vpmovzxbd_avx2(auVar111);
          auVar27 = vpsubd_avx2(auVar27,auVar31);
          auVar25 = vpsubd_avx2(auVar25,auVar30);
          auVar26 = vpsubd_avx2(auVar26,auVar29);
          auVar32._0_4_ = auVar35._0_4_ + auVar39._0_4_;
          auVar32._4_4_ = auVar35._4_4_ + auVar39._4_4_;
          auVar32._8_4_ = auVar35._8_4_ + auVar39._8_4_;
          auVar32._12_4_ = auVar35._12_4_ + auVar39._12_4_;
          auVar32._16_4_ = auVar35._16_4_ + auVar39._16_4_;
          auVar32._20_4_ = auVar35._20_4_ + auVar39._20_4_;
          auVar32._24_4_ = auVar35._24_4_ + auVar39._24_4_;
          auVar32._28_4_ = auVar35._28_4_ + auVar39._28_4_;
          auVar28 = vpsubd_avx2(auVar28,auVar31);
          auVar35._0_4_ = auVar28._0_4_ + auVar27._0_4_;
          auVar35._4_4_ = auVar28._4_4_ + auVar27._4_4_;
          auVar35._8_4_ = auVar28._8_4_ + auVar27._8_4_;
          auVar35._12_4_ = auVar28._12_4_ + auVar27._12_4_;
          auVar35._16_4_ = auVar28._16_4_ + auVar27._16_4_;
          auVar35._20_4_ = auVar28._20_4_ + auVar27._20_4_;
          auVar35._24_4_ = auVar28._24_4_ + auVar27._24_4_;
          auVar35._28_4_ = auVar28._28_4_ + auVar27._28_4_;
          auVar27 = vpsubd_avx2(auVar33,auVar30);
          auVar33._0_4_ = auVar27._0_4_ + auVar25._0_4_;
          auVar33._4_4_ = auVar27._4_4_ + auVar25._4_4_;
          auVar33._8_4_ = auVar27._8_4_ + auVar25._8_4_;
          auVar33._12_4_ = auVar27._12_4_ + auVar25._12_4_;
          auVar33._16_4_ = auVar27._16_4_ + auVar25._16_4_;
          auVar33._20_4_ = auVar27._20_4_ + auVar25._20_4_;
          auVar33._24_4_ = auVar27._24_4_ + auVar25._24_4_;
          auVar33._28_4_ = auVar27._28_4_ + auVar25._28_4_;
          auVar25 = vpsubd_avx2(auVar34,auVar29);
          auVar34._0_4_ = auVar25._0_4_ + auVar26._0_4_;
          auVar34._4_4_ = auVar25._4_4_ + auVar26._4_4_;
          auVar34._8_4_ = auVar25._8_4_ + auVar26._8_4_;
          auVar34._12_4_ = auVar25._12_4_ + auVar26._12_4_;
          auVar34._16_4_ = auVar25._16_4_ + auVar26._16_4_;
          auVar34._20_4_ = auVar25._20_4_ + auVar26._20_4_;
          auVar34._24_4_ = auVar25._24_4_ + auVar26._24_4_;
          auVar34._28_4_ = auVar25._28_4_ + auVar26._28_4_;
          auVar26 = vpminub_avx2(auVar97,auVar96);
          auVar25 = vpmaxub_avx2(auVar97,auVar96);
          auVar25 = vpsubb_avx2(auVar25,auVar26);
          auVar39 = vpmovzxbd_avx2(auVar25._16_16_);
          auVar108 = vpshufd_avx(auVar25._16_16_,0xee);
          auVar36 = vpmovzxbd_avx2(auVar108);
          auVar37 = vpmovzxbd_avx2(auVar25._0_16_);
          auVar108 = vpshufd_avx(auVar25._0_16_,0xee);
          auVar38 = vpmovzxbd_avx2(auVar108);
          auVar26 = vpabsd_avx2(auVar32);
          auVar27 = vpabsd_avx2(auVar35);
          auVar28 = vpabsd_avx2(auVar33);
          auVar29 = vpabsd_avx2(auVar34);
          auVar25 = vpcmpgtd_avx2(auVar39,auVar26);
          auVar30 = vpcmpgtd_avx2(auVar36,auVar27);
          auVar30 = vpackssdw_avx2(auVar25,auVar30);
          auVar25 = vpcmpgtd_avx2(auVar37,auVar28);
          auVar31 = vpcmpgtd_avx2(auVar38,auVar29);
          auVar31 = vpackssdw_avx2(auVar25,auVar31);
          auVar25 = *(undefined1 (*) [32])(*pauVar49 + uVar58);
          auVar30 = vpermq_avx2(auVar30,0xd8);
          auVar31 = vpermq_avx2(auVar31,0xd8);
          auVar30 = vpacksswb_avx2(auVar31,auVar30);
          auVar31 = vpminub_avx2(auVar25,auVar96);
          auVar30 = vpermq_avx2(auVar30,0xd8);
          auVar30 = vpblendvb_avx2(auVar25,auVar96,auVar30);
          auVar96 = vpmaxub_avx2(auVar25,auVar96);
          auVar32 = vpsubb_avx2(auVar96,auVar31);
          auVar108 = vpshufd_avx(auVar32._0_16_,0xee);
          auVar31 = vpmovzxbd_avx2(auVar108);
          auVar25 = vpcmpgtd_avx2(auVar31,auVar38);
          auVar96 = vpminud_avx2(auVar31,auVar29);
          auVar96 = vpcmpeqd_avx2(auVar31,auVar96);
          auVar31 = vpor_avx2(auVar25,auVar96 ^ auVar72);
          auVar29 = vpmovzxbd_avx2(auVar32._0_16_);
          auVar25 = vpcmpgtd_avx2(auVar29,auVar37);
          auVar96 = vpminud_avx2(auVar29,auVar28);
          auVar96 = vpcmpeqd_avx2(auVar29,auVar96);
          auVar96 = vpor_avx2(auVar96 ^ auVar72,auVar25);
          auVar96 = vpackssdw_avx2(auVar96,auVar31);
          auVar108 = vpshufd_avx(auVar32._16_16_,0xee);
          auVar29 = vpmovzxbd_avx2(auVar108);
          auVar28 = vpcmpgtd_avx2(auVar29,auVar36);
          auVar25 = vpminud_avx2(auVar29,auVar27);
          auVar25 = vpcmpeqd_avx2(auVar29,auVar25);
          auVar29 = vpor_avx2(auVar28,auVar25 ^ auVar72);
          auVar28 = vpmovzxbd_avx2(auVar32._16_16_);
          auVar27 = vpcmpgtd_avx2(auVar28,auVar39);
          auVar25 = vpminud_avx2(auVar28,auVar26);
          auVar25 = vpcmpeqd_avx2(auVar28,auVar25);
          auVar25 = vpor_avx2(auVar27,auVar25 ^ auVar72);
          auVar25 = vpackssdw_avx2(auVar25,auVar29);
          auVar25 = vpermq_avx2(auVar25,0xd8);
          auVar96 = vpermq_avx2(auVar96,0xd8);
          auVar96 = vpacksswb_avx2(auVar96,auVar25);
          auVar96 = vpermq_avx2(auVar96,0xd8);
          auVar96 = vpblendvb_avx2(auVar97,auVar30,auVar96);
          auVar96 = vpsubb_avx2(*(undefined1 (*) [32])(*pauVar44 + uVar58),auVar96);
          *(undefined1 (*) [32])(*pauVar61 + uVar58) = auVar96;
          uVar58 = uVar58 + 0x20;
        } while (uVar65 != uVar58);
        if (uVar56 == uVar65) goto LAB_140dd1956;
        if ((uVar56 & 0x10) == 0) {
          uVar50 = uVar50 + uVar65;
          puVar62 = puVar62 + uVar65;
          puVar41 = puVar41 + uVar65;
          pauVar49 = (undefined1 (*) [32])(*pauVar49 + uVar65);
          pauVar61 = (undefined1 (*) [32])(*pauVar61 + uVar65);
          pauVar44 = (undefined1 (*) [32])(*pauVar44 + uVar65);
          goto LAB_140dd148b;
        }
      }
      uVar58 = uVar56 & 0xfffffffffffffff0;
      uVar50 = uVar50 + uVar58;
      auVar72 = vpcmpeqd_avx2(auVar72,auVar72);
      do {
        auVar108 = *(undefined1 (*) [16])(*pauVar49 + uVar65);
        auVar96 = vpmovzxbd_avx2(auVar108);
        auVar92._8_8_ = *(undefined8 *)(*pauVar49 + uVar65 + 8);
        auVar92._0_8_ = *(undefined8 *)(*pauVar49 + uVar65 + 8);
        auVar97 = vpmovzxbd_avx2(auVar92);
        auVar105 = *(undefined1 (*) [16])(*pauVar1 + uVar65);
        auVar101._8_8_ = *(undefined8 *)(puVar41 + uVar65 + 9);
        auVar101._0_8_ = *(undefined8 *)(puVar41 + uVar65 + 9);
        auVar25 = vpmovzxbd_avx2(auVar105);
        auVar26 = vpmovzxbd_avx2(auVar101);
        auVar2 = *(undefined1 (*) [16])(*pauVar47 + uVar65);
        auVar27 = vpmovzxbd_avx2(auVar2);
        auVar109._8_8_ = *(undefined8 *)(puVar62 + uVar65 + 9);
        auVar109._0_8_ = *(undefined8 *)(puVar62 + uVar65 + 9);
        auVar28 = vpmovzxbd_avx2(auVar109);
        auVar97 = vpsubd_avx2(auVar97,auVar26);
        auVar96 = vpsubd_avx2(auVar96,auVar25);
        auVar26 = vpsubd_avx2(auVar28,auVar26);
        auVar39._0_4_ = auVar26._0_4_ + auVar97._0_4_;
        auVar39._4_4_ = auVar26._4_4_ + auVar97._4_4_;
        auVar39._8_4_ = auVar26._8_4_ + auVar97._8_4_;
        auVar39._12_4_ = auVar26._12_4_ + auVar97._12_4_;
        auVar39._16_4_ = auVar26._16_4_ + auVar97._16_4_;
        auVar39._20_4_ = auVar26._20_4_ + auVar97._20_4_;
        auVar39._24_4_ = auVar26._24_4_ + auVar97._24_4_;
        auVar39._28_4_ = auVar26._28_4_ + auVar97._28_4_;
        auVar97 = vpsubd_avx2(auVar27,auVar25);
        auVar36._0_4_ = auVar97._0_4_ + auVar96._0_4_;
        auVar36._4_4_ = auVar97._4_4_ + auVar96._4_4_;
        auVar36._8_4_ = auVar97._8_4_ + auVar96._8_4_;
        auVar36._12_4_ = auVar97._12_4_ + auVar96._12_4_;
        auVar36._16_4_ = auVar97._16_4_ + auVar96._16_4_;
        auVar36._20_4_ = auVar97._20_4_ + auVar96._20_4_;
        auVar36._24_4_ = auVar97._24_4_ + auVar96._24_4_;
        auVar36._28_4_ = auVar97._28_4_ + auVar96._28_4_;
        auVar14 = vpminub_avx(auVar108,auVar105);
        auVar91 = vpmaxub_avx(auVar108,auVar105);
        auVar14 = vpsubb_avx(auVar91,auVar14);
        auVar91 = vpshufd_avx(auVar14,0xee);
        auVar28 = vpmovzxbd_avx2(auVar91);
        auVar29 = vpmovzxbd_avx2(auVar14);
        auVar14 = vpminub_avx(auVar2,auVar105);
        auVar91 = vpmaxub_avx(auVar2,auVar105);
        auVar14 = vpsubb_avx(auVar91,auVar14);
        auVar91 = vpshufd_avx(auVar14,0xee);
        auVar30 = vpmovzxbd_avx2(auVar91);
        auVar31 = vpmovzxbd_avx2(auVar14);
        auVar96 = vpabsd_avx2(auVar39);
        auVar97 = vpabsd_avx2(auVar36);
        auVar26 = vpcmpgtd_avx2(auVar29,auVar31);
        auVar27 = vpcmpgtd_avx2(auVar28,auVar30);
        auVar25 = vpminud_avx2(auVar29,auVar97);
        auVar25 = vpcmpeqd_avx2(auVar25,auVar29);
        auVar26 = vpor_avx2(auVar26,auVar25 ^ auVar72);
        auVar25 = vpminud_avx2(auVar28,auVar96);
        auVar25 = vpcmpeqd_avx2(auVar25,auVar28);
        auVar25 = vpor_avx2(auVar27,auVar25 ^ auVar72);
        auVar25 = vpackssdw_avx2(auVar26,auVar25);
        auVar91 = vpacksswb_avx(auVar25._0_16_,auVar25._16_16_);
        auVar96 = vpcmpgtd_avx2(auVar30,auVar96);
        auVar97 = vpcmpgtd_avx2(auVar31,auVar97);
        auVar96 = vpackssdw_avx2(auVar97,auVar96);
        auVar14 = vpacksswb_avx(auVar96._0_16_,auVar96._16_16_);
        auVar14 = vpshufd_avx(auVar14,0xd8);
        auVar108 = vpblendvb_avx(auVar108,auVar105,auVar14);
        auVar105 = vpshufd_avx(auVar91,0xd8);
        auVar108 = vpblendvb_avx(auVar2,auVar108,auVar105);
        auVar108 = vpsubb_avx(*(undefined1 (*) [16])(*pauVar44 + uVar65),auVar108);
        *(undefined1 (*) [16])(*pauVar61 + uVar65) = auVar108;
        uVar65 = uVar65 + 0x10;
      } while (uVar58 != uVar65);
      puVar41 = puVar41 + uVar58;
      pauVar61 = (undefined1 (*) [32])(*pauVar61 + uVar58);
      pauVar49 = (undefined1 (*) [32])(*pauVar49 + uVar58);
      puVar62 = puVar62 + uVar58;
      pauVar44 = (undefined1 (*) [32])(*pauVar44 + uVar58);
      if (uVar56 == uVar58) goto LAB_140dd1956;
    }
LAB_140dd148b:
    lVar60 = 0;
    do {
      bVar43 = puVar41[lVar60 + 1];
      iVar57 = (uint)(byte)(*pauVar49)[lVar60] - (uint)bVar43;
      iVar69 = (uint)puVar62[lVar60 + 1] - (uint)bVar43;
      bVar46 = (byte)-iVar57;
      if (-iVar57 < 0) {
        bVar46 = (byte)iVar57;
      }
      bVar42 = (byte)-iVar69;
      if (-iVar69 < 0) {
        bVar42 = (byte)iVar69;
      }
      uVar64 = -(iVar69 + iVar57);
      if ((int)uVar64 < 0) {
        uVar64 = iVar69 + iVar57;
      }
      if (bVar42 <= uVar64) {
        bVar43 = (*pauVar49)[lVar60];
      }
      bVar59 = puVar62[lVar60 + 1];
      if (uVar64 < bVar46) {
        bVar59 = bVar43;
      }
      if ((uint)bVar42 < (uint)bVar46) {
        bVar59 = bVar43;
      }
      (*pauVar61)[lVar60] = (*pauVar44)[lVar60] - bVar59;
      lVar60 = lVar60 + 1;
    } while (uVar11 - uVar50 != lVar60);
  }
LAB_140dd1956:
  puVar45 = param_1->try_row;
LAB_140dd1962:
  png_compress_IDAT(param_1,puVar45,param_2->rowbytes + 1,0);
  puVar45 = param_1->prev_row;
  if (puVar45 != (uchar *)0x0) {
    param_1->prev_row = param_1->row_buf;
    param_1->row_buf = puVar45;
  }
  png_write_finish_row(param_1);
  uVar64 = param_1->flush_rows + 1;
  param_1->flush_rows = uVar64;
  if (uVar64 <= param_1->flush_dist - 1) {
    return;
  }
  png_write_flush(param_1);
  return;
}

// has_4th_gen_intel_core_features @ 140dd1e20

/* WARNING: Removing unreachable block (ram,0x000140dd1e67) */
/* WARNING: Removing unreachable block (ram,0x000140dd1e49) */
/* WARNING: Removing unreachable block (ram,0x000140dd1e2d) */

int __cdecl has_4th_gen_intel_core_features(void)

{
  longlong lVar1;
  undefined8 uVar2;
  uint uVar3;
  uint in_XCR0;
  
  uVar3 = 0;
  lVar1 = cpuid_Version_info(1);
  if ((~*(uint *)(lVar1 + 0xc) & 0x1c401000) == 0) {
    uVar3 = 0;
    lVar1 = cpuid_Extended_Feature_Enumeration_info(7);
    if ((~*(uint *)(lVar1 + 4) & 0x128) == 0) {
      uVar3 = 0;
      lVar1 = cpuid(0x80000001);
      if ((*(uint *)(lVar1 + 0xc) & 0x20) != 0) {
        uVar2 = xinuse(0);
        uVar3 = (uint)((~(in_XCR0 & (uint)uVar2) & 6) == 0);
      }
    }
  }
  return uVar3;
}

// png_write_find_filter @ 140dd1e90

/* WARNING: Removing unreachable block (ram,0x000140dd1ee3) */
/* WARNING: Removing unreachable block (ram,0x000140dd1ec8) */
/* WARNING: Removing unreachable block (ram,0x000140dd1eaf) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl png_write_find_filter(png_struct_def_conflict *param_1,png_row_info_struct *param_2)

{
  undefined1 (*pauVar1) [16];
  undefined1 (*pauVar2) [32];
  char *pcVar3;
  ushort *puVar4;
  char *pcVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  ushort uVar12;
  ulonglong uVar13;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [32];
  undefined1 auVar26 [32];
  undefined1 auVar27 [32];
  undefined1 auVar28 [32];
  undefined1 auVar29 [32];
  undefined1 auVar30 [32];
  undefined1 auVar31 [32];
  undefined1 auVar32 [32];
  undefined1 auVar33 [32];
  undefined1 auVar34 [32];
  undefined1 auVar35 [32];
  undefined1 auVar36 [32];
  undefined1 auVar37 [32];
  undefined1 auVar38 [32];
  undefined1 auVar39 [32];
  ulonglong uVar40;
  undefined1 auVar41 [60];
  undefined1 auVar42 [60];
  undefined1 auVar43 [64];
  undefined1 auVar44 [64];
  undefined1 auVar45 [64];
  undefined1 auVar46 [64];
  undefined1 auVar47 [64];
  undefined1 auVar48 [60];
  undefined1 auVar49 [60];
  undefined1 auVar50 [60];
  undefined1 auVar51 [60];
  undefined1 auVar52 [64];
  undefined1 auVar53 [64];
  undefined1 auVar54 [64];
  undefined1 auVar55 [64];
  undefined1 auVar56 [64];
  undefined1 auVar57 [64];
  undefined1 auVar58 [60];
  undefined1 auVar59 [60];
  undefined1 auVar60 [64];
  undefined1 auVar61 [64];
  undefined1 auVar62 [64];
  undefined1 auVar63 [64];
  undefined1 auVar64 [64];
  undefined1 auVar65 [64];
  undefined1 auVar66 [60];
  undefined1 auVar67 [60];
  undefined1 auVar68 [64];
  undefined1 auVar69 [64];
  undefined1 auVar70 [64];
  undefined1 auVar71 [64];
  undefined1 auVar72 [64];
  undefined1 auVar73 [64];
  undefined1 auVar74 [60];
  undefined1 auVar75 [60];
  undefined1 auVar76 [64];
  undefined1 auVar77 [64];
  undefined1 auVar78 [64];
  undefined1 auVar79 [64];
  undefined1 auVar80 [64];
  undefined1 auVar81 [64];
  undefined1 auVar82 [60];
  undefined1 auVar83 [60];
  undefined1 auVar84 [60];
  undefined1 auVar85 [60];
  undefined1 auVar86 [64];
  undefined1 auVar87 [64];
  undefined1 auVar88 [64];
  undefined1 auVar89 [60];
  undefined1 auVar90 [60];
  undefined1 auVar91 [62];
  undefined1 auVar92 [60];
  undefined1 auVar93 [58];
  undefined1 auVar94 [60];
  undefined1 auVar95 [62];
  undefined1 auVar96 [60];
  undefined1 auVar97 [58];
  undefined1 auVar98 [60];
  undefined1 auVar99 [62];
  undefined1 auVar100 [60];
  undefined1 auVar101 [58];
  undefined1 auVar102 [60];
  undefined1 auVar103 [60];
  undefined1 auVar104 [60];
  undefined1 auVar105 [60];
  undefined1 auVar106 [60];
  undefined1 auVar107 [60];
  undefined1 auVar108 [64];
  undefined1 auVar109 [64];
  undefined1 auVar110 [64];
  undefined1 auVar111 [64];
  undefined1 auVar112 [60];
  undefined1 auVar113 [64];
  undefined1 auVar114 [60];
  undefined1 auVar115 [64];
  undefined1 auVar116 [64];
  undefined1 auVar117 [64];
  undefined1 auVar118 [64];
  undefined1 auVar119 [60];
  undefined1 auVar120 [64];
  undefined1 auVar121 [60];
  undefined1 auVar122 [64];
  undefined1 auVar123 [64];
  undefined1 auVar124 [64];
  undefined1 auVar125 [64];
  undefined1 auVar126 [60];
  undefined1 auVar127 [64];
  undefined1 auVar128 [62];
  undefined1 auVar129 [60];
  undefined1 auVar130 [58];
  undefined1 auVar131 [60];
  undefined1 auVar132 [62];
  undefined1 auVar133 [60];
  undefined1 auVar134 [58];
  undefined1 auVar135 [60];
  undefined1 auVar136 [62];
  undefined1 auVar137 [60];
  undefined1 auVar138 [58];
  undefined1 auVar139 [60];
  undefined1 auVar140 [62];
  undefined1 auVar141 [60];
  undefined1 auVar142 [58];
  undefined1 auVar143 [60];
  undefined1 auVar144 [62];
  undefined1 auVar145 [60];
  undefined1 auVar146 [58];
  undefined1 auVar147 [60];
  undefined1 auVar148 [60];
  undefined1 auVar149 [60];
  undefined1 auVar150 [60];
  undefined1 auVar151 [60];
  undefined1 auVar152 [60];
  undefined1 auVar153 [60];
  undefined1 auVar154 [60];
  undefined1 auVar155 [64];
  undefined1 auVar156 [64];
  undefined1 auVar157 [64];
  undefined1 auVar158 [64];
  undefined1 auVar159 [64];
  undefined1 auVar160 [64];
  undefined1 auVar161 [60];
  undefined1 auVar162 [60];
  undefined1 auVar163 [64];
  undefined1 auVar164 [64];
  undefined1 auVar165 [64];
  undefined1 auVar166 [64];
  undefined1 auVar167 [64];
  undefined1 auVar168 [64];
  undefined1 auVar169 [60];
  undefined1 auVar170 [60];
  undefined1 auVar171 [64];
  undefined1 auVar172 [64];
  undefined1 auVar173 [64];
  undefined1 auVar174 [64];
  undefined1 auVar175 [64];
  undefined1 auVar176 [64];
  undefined1 auVar177 [60];
  undefined1 auVar178 [64];
  undefined1 auVar179 [64];
  undefined1 auVar180 [64];
  undefined1 auVar181 [64];
  undefined1 auVar182 [60];
  undefined1 auVar183 [64];
  undefined1 auVar184 [60];
  undefined1 auVar185 [64];
  undefined1 auVar186 [64];
  undefined1 auVar187 [64];
  undefined1 auVar188 [64];
  undefined1 auVar189 [60];
  undefined1 auVar190 [64];
  undefined1 auVar191 [60];
  undefined1 auVar192 [64];
  undefined1 auVar193 [64];
  undefined1 auVar194 [64];
  undefined1 auVar195 [64];
  undefined1 auVar196 [60];
  undefined1 auVar197 [64];
  undefined1 auVar198 [57];
  undefined1 auVar199 [57];
  uint3 uVar200;
  undefined1 auVar201 [64];
  undefined1 auVar202 [64];
  undefined1 auVar203 [64];
  undefined1 auVar204 [64];
  uint5 uVar205;
  uint6 uVar206;
  undefined1 auVar207 [57];
  undefined1 auVar208 [57];
  undefined1 auVar209 [61];
  undefined1 auVar210 [64];
  undefined1 auVar211 [64];
  undefined1 auVar212 [58];
  undefined1 auVar213 [61];
  undefined1 auVar214 [64];
  undefined1 auVar215 [64];
  undefined1 auVar216 [58];
  undefined1 auVar217 [64];
  undefined1 auVar218 [61];
  undefined1 auVar219 [64];
  undefined1 auVar220 [64];
  undefined1 auVar221 [58];
  undefined1 auVar222 [61];
  undefined1 auVar223 [64];
  undefined1 auVar224 [64];
  undefined1 auVar225 [58];
  undefined1 auVar226 [61];
  undefined1 auVar227 [64];
  undefined1 auVar228 [64];
  undefined1 auVar229 [58];
  undefined1 auVar230 [61];
  undefined1 auVar231 [64];
  undefined1 auVar232 [64];
  undefined1 auVar233 [58];
  undefined1 auVar234 [64];
  undefined1 auVar235 [61];
  undefined1 auVar236 [64];
  undefined1 auVar237 [64];
  undefined1 auVar238 [58];
  undefined1 auVar239 [61];
  undefined1 auVar240 [64];
  undefined1 auVar241 [64];
  undefined1 auVar242 [58];
  undefined1 auVar243 [64];
  undefined1 auVar244 [61];
  undefined1 auVar245 [64];
  undefined1 auVar246 [64];
  undefined1 auVar247 [58];
  undefined1 auVar248 [61];
  undefined1 auVar249 [64];
  undefined1 auVar250 [64];
  undefined1 auVar251 [58];
  undefined1 auVar252 [64];
  undefined1 auVar253 [61];
  undefined1 auVar254 [64];
  undefined1 auVar255 [64];
  undefined1 auVar256 [58];
  undefined1 auVar257 [61];
  undefined1 auVar258 [64];
  undefined1 auVar259 [64];
  undefined1 auVar260 [58];
  undefined1 auVar261 [64];
  undefined1 auVar262 [61];
  undefined1 auVar263 [64];
  undefined1 auVar264 [64];
  undefined1 auVar265 [58];
  undefined1 auVar266 [61];
  undefined1 auVar267 [64];
  undefined1 auVar268 [58];
  undefined1 auVar269 [61];
  undefined1 auVar270 [64];
  undefined1 auVar271 [64];
  undefined1 auVar272 [56];
  undefined1 auVar273 [58];
  undefined1 auVar274 [61];
  undefined1 auVar275 [64];
  undefined1 auVar276 [64];
  undefined1 auVar277 [58];
  undefined1 auVar278 [61];
  undefined1 auVar279 [64];
  undefined1 auVar280 [64];
  undefined1 auVar281 [58];
  undefined1 auVar282 [61];
  undefined1 auVar283 [58];
  undefined1 auVar284 [61];
  undefined1 auVar285 [59];
  undefined1 auVar286 [57];
  undefined1 auVar287 [56];
  undefined1 auVar288 [58];
  undefined1 auVar289 [61];
  undefined1 auVar290 [59];
  undefined1 auVar291 [57];
  undefined1 auVar292 [56];
  undefined1 auVar293 [58];
  undefined1 auVar294 [61];
  undefined1 auVar295 [59];
  undefined1 auVar296 [57];
  undefined1 auVar297 [56];
  undefined1 auVar298 [58];
  undefined1 auVar299 [61];
  undefined1 auVar300 [64];
  undefined1 auVar301 [64];
  undefined1 auVar302 [58];
  undefined1 auVar303 [61];
  undefined1 auVar304 [64];
  undefined1 auVar305 [58];
  undefined1 auVar306 [61];
  undefined1 auVar307 [64];
  undefined1 auVar308 [64];
  undefined1 auVar309 [58];
  undefined1 auVar310 [61];
  undefined1 auVar311 [64];
  undefined1 auVar312 [58];
  undefined1 auVar313 [64];
  undefined1 auVar314 [64];
  undefined1 auVar315 [64];
  undefined1 auVar316 [64];
  undefined1 auVar317 [64];
  undefined1 auVar318 [64];
  undefined1 auVar319 [64];
  undefined1 auVar320 [64];
  undefined1 auVar321 [64];
  undefined1 auVar322 [64];
  undefined1 auVar323 [64];
  undefined1 auVar324 [64];
  undefined1 auVar325 [64];
  undefined1 auVar326 [64];
  undefined1 auVar327 [64];
  undefined1 auVar328 [64];
  undefined1 auVar329 [64];
  undefined1 auVar330 [64];
  undefined1 auVar331 [64];
  undefined1 auVar332 [64];
  undefined1 auVar333 [64];
  undefined1 auVar334 [61];
  undefined1 auVar335 [59];
  undefined1 auVar336 [57];
  undefined1 auVar337 [56];
  undefined1 auVar338 [58];
  undefined1 auVar339 [64];
  undefined1 auVar340 [61];
  undefined1 auVar341 [59];
  undefined1 auVar342 [57];
  undefined1 auVar343 [56];
  undefined1 auVar344 [58];
  undefined1 auVar345 [64];
  undefined1 auVar346 [61];
  undefined1 auVar347 [59];
  undefined1 auVar348 [57];
  undefined1 auVar349 [56];
  undefined1 auVar350 [58];
  undefined1 auVar351 [64];
  undefined1 auVar352 [61];
  undefined1 auVar353 [59];
  undefined1 auVar354 [57];
  undefined1 auVar355 [57];
  undefined1 auVar356 [54];
  undefined1 auVar357 [57];
  undefined1 auVar358 [52];
  undefined1 auVar359 [57];
  undefined1 auVar360 [50];
  undefined1 auVar361 [56];
  undefined1 auVar362 [58];
  undefined1 auVar363 [61];
  undefined1 auVar364 [59];
  undefined1 auVar365 [57];
  undefined1 auVar366 [57];
  undefined1 auVar367 [54];
  undefined1 auVar368 [57];
  undefined1 auVar369 [52];
  undefined1 auVar370 [57];
  undefined1 auVar371 [50];
  undefined1 auVar372 [56];
  undefined1 auVar373 [58];
  undefined1 auVar374 [64];
  undefined1 auVar375 [64];
  undefined1 auVar376 [61];
  undefined1 auVar377 [64];
  undefined1 auVar378 [64];
  undefined1 auVar379 [58];
  undefined1 auVar380 [61];
  undefined1 auVar381 [64];
  undefined1 auVar382 [64];
  undefined1 auVar383 [58];
  undefined1 auVar384 [61];
  undefined1 auVar385 [64];
  undefined1 auVar386 [64];
  undefined1 auVar387 [58];
  undefined1 auVar388 [61];
  undefined1 auVar389 [64];
  undefined1 auVar390 [64];
  undefined1 auVar391 [56];
  undefined1 auVar392 [58];
  undefined1 auVar393 [61];
  undefined1 auVar394 [64];
  undefined1 auVar395 [64];
  undefined1 auVar396 [56];
  undefined1 auVar397 [58];
  undefined1 auVar398 [61];
  undefined1 auVar399 [64];
  undefined1 auVar400 [64];
  undefined1 auVar401 [58];
  undefined1 auVar402 [61];
  undefined1 auVar403 [64];
  undefined1 auVar404 [64];
  undefined1 auVar405 [58];
  undefined1 auVar406 [64];
  undefined1 auVar407 [61];
  undefined1 auVar408 [64];
  undefined1 auVar409 [64];
  undefined1 auVar410 [58];
  undefined1 auVar411 [61];
  undefined1 auVar412 [64];
  undefined1 auVar413 [64];
  undefined1 auVar414 [58];
  undefined1 auVar415 [64];
  undefined1 auVar416 [61];
  undefined1 auVar417 [64];
  undefined1 auVar418 [64];
  undefined1 auVar419 [58];
  undefined1 auVar420 [61];
  undefined1 auVar421 [64];
  undefined1 auVar422 [64];
  undefined1 auVar423 [58];
  undefined1 auVar424 [64];
  undefined1 auVar425 [64];
  undefined1 auVar426 [64];
  undefined1 auVar427 [64];
  undefined1 auVar428 [64];
  undefined1 auVar429 [64];
  undefined1 auVar430 [64];
  undefined1 auVar431 [64];
  undefined1 auVar432 [64];
  undefined1 auVar433 [64];
  undefined1 auVar434 [64];
  undefined1 auVar435 [64];
  undefined1 auVar436 [64];
  undefined1 auVar437 [64];
  undefined1 auVar438 [64];
  undefined1 auVar439 [64];
  undefined1 auVar440 [64];
  undefined1 auVar441 [64];
  undefined1 auVar442 [64];
  undefined1 auVar443 [64];
  undefined1 auVar444 [64];
  undefined1 auVar445 [64];
  undefined1 auVar446 [64];
  undefined1 auVar447 [64];
  undefined1 auVar448 [64];
  undefined1 auVar449 [64];
  undefined1 auVar450 [64];
  undefined1 auVar451 [56];
  undefined1 auVar452 [56];
  undefined1 auVar453 [56];
  undefined1 auVar454 [56];
  undefined1 auVar455 [56];
  undefined1 auVar456 [56];
  undefined1 auVar457 [56];
  undefined1 auVar458 [56];
  undefined1 auVar459 [56];
  undefined1 auVar460 [56];
  undefined1 auVar461 [56];
  undefined1 auVar462 [56];
  undefined1 auVar463 [56];
  uchar *puVar464;
  byte bVar465;
  byte bVar466;
  undefined1 (*pauVar467) [16];
  undefined1 (*pauVar468) [32];
  uchar *puVar469;
  undefined1 (*pauVar470) [16];
  undefined1 (*pauVar471) [32];
  byte *pbVar472;
  undefined1 (*pauVar473) [32];
  ulonglong uVar474;
  uchar *puVar475;
  uint uVar476;
  uint uVar477;
  uchar *puVar478;
  uchar *puVar479;
  uchar *puVar480;
  int iVar481;
  longlong lVar482;
  undefined1 (*pauVar483) [32];
  uchar *puVar484;
  ulonglong uVar485;
  uint uVar486;
  uchar *puVar487;
  byte *pbVar488;
  int iVar489;
  uint in_XCR0;
  int iVar525;
  undefined1 uVar526;
  undefined2 uVar527;
  undefined1 uVar532;
  undefined2 uVar533;
  undefined1 uVar535;
  undefined2 uVar536;
  undefined1 uVar538;
  undefined1 auVar490 [16];
  undefined1 auVar491 [16];
  undefined1 auVar492 [16];
  undefined1 auVar493 [16];
  undefined1 auVar494 [16];
  undefined1 auVar495 [16];
  undefined1 auVar496 [16];
  undefined1 auVar497 [16];
  undefined1 auVar498 [16];
  longlong lVar530;
  undefined1 auVar499 [16];
  undefined1 auVar500 [16];
  longlong lVar528;
  longlong lVar529;
  longlong lVar543;
  longlong lVar544;
  undefined1 auVar501 [32];
  longlong lVar541;
  undefined1 auVar502 [64];
  undefined1 auVar503 [64];
  undefined1 auVar504 [64];
  undefined1 auVar505 [64];
  undefined1 auVar506 [64];
  undefined1 auVar509 [64];
  undefined1 auVar510 [64];
  undefined2 uVar539;
  undefined1 auVar511 [64];
  undefined1 auVar512 [64];
  undefined1 auVar513 [64];
  undefined1 auVar514 [64];
  undefined1 uVar531;
  undefined1 uVar534;
  undefined1 uVar537;
  undefined1 uVar540;
  undefined1 auVar517 [64];
  undefined1 auVar518 [64];
  undefined1 auVar519 [64];
  undefined1 auVar520 [64];
  undefined1 auVar522 [64];
  longlong lVar542;
  longlong lVar545;
  undefined1 auVar524 [64];
  undefined1 in_ZMM0 [64];
  ushort uVar546;
  undefined1 auVar549 [16];
  undefined1 auVar550 [16];
  undefined1 auVar551 [16];
  undefined1 auVar552 [16];
  undefined1 auVar553 [16];
  undefined1 auVar554 [16];
  undefined1 auVar555 [16];
  undefined1 auVar556 [16];
  undefined1 auVar557 [16];
  undefined1 auVar558 [16];
  undefined1 auVar559 [16];
  undefined1 auVar560 [16];
  undefined1 auVar561 [16];
  undefined1 auVar562 [16];
  undefined1 auVar563 [16];
  undefined1 auVar564 [16];
  undefined1 auVar565 [16];
  undefined1 auVar566 [64];
  undefined1 auVar567 [64];
  undefined1 auVar568 [64];
  undefined1 auVar569 [64];
  undefined1 auVar572 [64];
  undefined1 auVar573 [64];
  undefined1 auVar574 [64];
  undefined1 auVar575 [64];
  undefined1 auVar576 [64];
  undefined1 auVar579 [64];
  undefined1 auVar580 [64];
  undefined1 auVar583 [64];
  undefined1 in_ZMM1 [64];
  undefined1 auVar585 [12];
  undefined1 auVar586 [16];
  undefined1 auVar587 [16];
  undefined1 auVar588 [16];
  undefined1 auVar589 [16];
  longlong lVar601;
  longlong lVar602;
  undefined1 auVar596 [32];
  undefined1 auVar590 [16];
  undefined1 auVar591 [16];
  undefined1 auVar592 [16];
  undefined1 auVar593 [16];
  undefined1 auVar594 [16];
  undefined1 auVar597 [32];
  undefined1 auVar595 [16];
  longlong lVar600;
  undefined1 auVar598 [64];
  undefined1 auVar599 [64];
  undefined1 in_ZMM2 [64];
  undefined1 auVar603 [16];
  undefined1 auVar604 [16];
  undefined1 auVar605 [16];
  longlong lVar608;
  longlong lVar609;
  undefined1 auVar607 [64];
  undefined1 auVar606 [16];
  undefined1 in_ZMM3 [64];
  byte bVar610;
  char cVar652;
  undefined1 auVar612 [12];
  undefined1 auVar636 [16];
  undefined1 auVar637 [16];
  undefined1 auVar638 [16];
  undefined1 auVar639 [16];
  undefined1 auVar616 [13];
  undefined1 auVar640 [16];
  undefined1 auVar618 [13];
  undefined1 auVar619 [13];
  undefined1 auVar620 [13];
  undefined1 auVar621 [13];
  undefined1 auVar641 [16];
  undefined1 auVar613 [12];
  undefined1 auVar614 [12];
  undefined1 auVar622 [13];
  undefined1 auVar623 [13];
  undefined1 auVar624 [13];
  undefined1 auVar644 [16];
  undefined1 auVar645 [16];
  undefined1 auVar615 [13];
  longlong lVar653;
  longlong lVar654;
  undefined1 auVar646 [64];
  undefined1 auVar648 [64];
  undefined1 auVar650 [64];
  undefined1 in_ZMM4 [64];
  undefined1 auVar658 [12];
  ushort uVar1784;
  undefined1 auVar660 [12];
  uint uVar871;
  undefined1 auVar687 [16];
  undefined1 auVar667 [13];
  undefined1 auVar688 [16];
  undefined1 auVar671 [13];
  undefined1 auVar695 [16];
  undefined1 auVar663 [12];
  undefined1 auVar664 [12];
  ushort uVar1783;
  undefined4 uVar655;
  undefined1 auVar665 [13];
  byte bVar872;
  undefined1 auVar697 [64];
  undefined1 auVar705 [64];
  undefined1 auVar719 [64];
  undefined1 auVar723 [64];
  undefined1 auVar732 [64];
  undefined1 auVar736 [64];
  undefined1 auVar745 [64];
  undefined1 auVar749 [64];
  undefined1 auVar758 [64];
  undefined1 auVar762 [64];
  undefined1 auVar771 [64];
  undefined1 auVar775 [64];
  undefined1 auVar776 [64];
  undefined1 auVar778 [64];
  undefined1 auVar659 [12];
  undefined1 auVar668 [13];
  undefined1 auVar689 [16];
  undefined1 auVar669 [13];
  undefined1 auVar690 [16];
  undefined1 auVar670 [13];
  undefined1 auVar691 [16];
  ushort uVar1785;
  ushort uVar1786;
  undefined1 auVar662 [12];
  byte bVar870;
  byte bVar873;
  undefined1 auVar694 [16];
  undefined1 auVar787 [64];
  undefined1 auVar666 [13];
  undefined1 auVar791 [64];
  undefined1 auVar803 [64];
  undefined1 auVar813 [64];
  undefined1 auVar823 [64];
  undefined1 auVar827 [64];
  undefined1 auVar836 [64];
  undefined1 auVar840 [64];
  undefined1 auVar849 [64];
  undefined1 auVar853 [64];
  undefined1 auVar862 [64];
  undefined1 auVar672 [13];
  undefined1 auVar866 [64];
  undefined1 auVar673 [13];
  undefined1 auVar868 [64];
  undefined1 in_ZMM5 [64];
  byte bVar874;
  ushort uVar1787;
  ushort uVar1788;
  ushort uVar1789;
  ushort uVar1790;
  ushort uVar1791;
  ushort uVar1792;
  ushort uVar1793;
  uint uVar875;
  undefined1 auVar876 [12];
  ushort uVar1794;
  ushort uVar1795;
  ushort uVar1796;
  ushort uVar1797;
  ushort uVar1798;
  ushort uVar1799;
  ushort uVar1800;
  ushort uVar1801;
  ushort uVar1802;
  ushort uVar1803;
  ushort uVar1804;
  ushort uVar1805;
  uint uVar1178;
  uint uVar1179;
  undefined1 auVar879 [16];
  undefined1 auVar880 [16];
  undefined1 auVar881 [16];
  undefined1 auVar877 [12];
  undefined1 auVar882 [16];
  undefined1 auVar883 [16];
  uint uVar1177;
  undefined1 auVar894 [64];
  undefined1 auVar908 [64];
  undefined1 auVar922 [64];
  undefined1 auVar936 [64];
  undefined1 auVar950 [64];
  undefined1 auVar964 [64];
  undefined1 auVar978 [64];
  undefined1 auVar982 [64];
  undefined1 auVar994 [64];
  undefined1 auVar998 [64];
  undefined1 auVar1007 [64];
  undefined1 auVar1020 [64];
  undefined1 auVar1035 [64];
  undefined1 auVar1050 [64];
  undefined1 auVar1065 [64];
  undefined1 auVar1080 [64];
  undefined1 auVar1085 [64];
  undefined1 auVar1100 [64];
  undefined1 auVar1114 [64];
  undefined1 auVar1128 [64];
  undefined1 auVar1142 [64];
  undefined1 auVar1157 [64];
  undefined1 auVar1172 [64];
  undefined1 in_ZMM6 [64];
  undefined1 auVar1180 [12];
  undefined1 auVar1181 [12];
  ushort uVar1806;
  ushort uVar1807;
  ushort uVar1808;
  ushort uVar1809;
  ushort uVar1810;
  ushort uVar1811;
  ushort uVar1812;
  ushort uVar1813;
  ushort uVar1814;
  ushort uVar1815;
  ushort uVar1816;
  ushort uVar1817;
  ushort uVar1818;
  undefined1 auVar1183 [16];
  undefined1 auVar1184 [16];
  undefined1 auVar1185 [16];
  undefined1 auVar1186 [16];
  ushort uVar1819;
  ushort uVar1820;
  ushort uVar1821;
  ushort uVar1822;
  ushort uVar1823;
  ushort uVar1824;
  undefined1 auVar1182 [16];
  char cVar1479;
  byte bVar1480;
  undefined1 auVar1201 [64];
  undefined1 auVar1205 [64];
  undefined1 auVar1216 [64];
  undefined1 auVar1230 [64];
  undefined1 auVar1244 [64];
  undefined1 auVar1258 [64];
  undefined1 auVar1272 [64];
  undefined1 auVar1282 [64];
  undefined1 auVar1296 [64];
  undefined1 auVar1300 [64];
  undefined1 auVar1309 [64];
  undefined1 auVar1312 [64];
  undefined1 auVar1323 [64];
  undefined1 auVar1337 [64];
  undefined1 auVar1351 [64];
  undefined1 auVar1365 [64];
  undefined1 auVar1369 [64];
  undefined1 auVar1373 [64];
  undefined1 auVar1187 [16];
  undefined1 auVar1377 [64];
  undefined1 auVar1188 [16];
  undefined1 auVar1189 [16];
  undefined1 auVar1387 [64];
  undefined1 auVar1391 [64];
  undefined1 auVar1393 [64];
  undefined1 auVar1405 [64];
  undefined1 auVar1419 [64];
  undefined1 auVar1433 [64];
  undefined1 auVar1447 [64];
  undefined1 auVar1461 [64];
  undefined1 auVar1475 [64];
  undefined1 in_ZMM7 [64];
  byte bVar1481;
  ushort uVar1825;
  undefined1 auVar1485 [12];
  byte bVar1533;
  byte bVar1534;
  byte bVar1535;
  int iVar1536;
  byte bVar1537;
  byte bVar1538;
  undefined1 auVar1487 [16];
  undefined1 auVar1488 [16];
  undefined1 auVar1489 [16];
  undefined1 auVar1490 [16];
  undefined1 auVar1491 [16];
  undefined1 auVar1492 [16];
  undefined1 auVar1493 [16];
  undefined1 auVar1494 [16];
  undefined1 auVar1482 [12];
  undefined1 auVar1496 [16];
  undefined1 auVar1497 [16];
  undefined1 auVar1498 [16];
  undefined1 auVar1499 [16];
  undefined1 auVar1500 [16];
  undefined1 auVar1501 [16];
  undefined1 auVar1502 [16];
  byte bVar1532;
  byte bVar1539;
  undefined1 auVar1483 [12];
  undefined1 auVar1504 [16];
  undefined1 auVar1484 [12];
  undefined1 auVar1505 [16];
  undefined1 auVar1506 [16];
  undefined1 auVar1507 [16];
  undefined1 auVar1508 [16];
  undefined1 auVar1509 [16];
  undefined1 auVar1510 [16];
  undefined1 auVar1511 [16];
  undefined1 auVar1512 [16];
  undefined1 auVar1486 [12];
  undefined1 auVar1519 [64];
  undefined1 in_ZMM8 [64];
  byte bVar1540;
  undefined1 auVar1544 [12];
  undefined1 auVar1545 [12];
  uint uVar1541;
  byte bVar1601;
  byte bVar1602;
  byte bVar1604;
  uint uVar1605;
  byte bVar1606;
  byte bVar1607;
  byte bVar1610;
  undefined1 auVar1546 [16];
  undefined1 auVar1547 [16];
  undefined1 auVar1548 [16];
  undefined1 auVar1549 [16];
  undefined1 auVar1550 [16];
  undefined1 auVar1551 [16];
  undefined1 auVar1552 [16];
  undefined1 auVar1553 [16];
  undefined1 auVar1542 [12];
  uint uVar1608;
  uint uVar1609;
  undefined1 auVar1555 [16];
  undefined1 auVar1556 [16];
  undefined1 auVar1557 [16];
  undefined1 auVar1558 [16];
  undefined1 auVar1559 [16];
  undefined1 auVar1560 [16];
  undefined1 auVar1563 [16];
  undefined1 auVar1564 [16];
  undefined1 auVar1565 [16];
  undefined1 auVar1567 [16];
  undefined1 auVar1568 [16];
  byte bVar1603;
  undefined1 auVar1543 [12];
  undefined1 auVar1579 [64];
  undefined1 auVar1562 [16];
  undefined1 auVar1580 [64];
  undefined1 auVar1583 [64];
  undefined1 auVar1593 [64];
  undefined1 auVar1597 [64];
  undefined1 auVar1599 [64];
  undefined1 auVar1569 [16];
  undefined1 in_ZMM9 [64];
  undefined1 auVar1611 [12];
  undefined1 auVar1615 [12];
  undefined1 auVar1616 [12];
  undefined1 auVar1619 [16];
  undefined1 auVar1620 [16];
  undefined1 auVar1621 [16];
  undefined1 auVar1622 [16];
  undefined1 auVar1612 [12];
  undefined1 auVar1613 [12];
  undefined1 auVar1624 [16];
  undefined1 auVar1626 [16];
  undefined1 auVar1627 [16];
  undefined1 auVar1628 [16];
  undefined1 auVar1629 [16];
  undefined1 auVar1630 [16];
  undefined1 auVar1631 [16];
  undefined1 auVar1632 [16];
  undefined1 auVar1634 [16];
  undefined1 auVar1636 [16];
  undefined1 auVar1638 [16];
  undefined1 auVar1639 [64];
  undefined1 auVar1641 [64];
  undefined1 auVar1643 [64];
  undefined1 auVar1645 [64];
  undefined1 auVar1614 [12];
  undefined1 auVar1651 [64];
  undefined1 auVar1635 [16];
  undefined1 auVar1656 [64];
  undefined1 auVar1666 [64];
  undefined1 auVar1670 [64];
  undefined1 auVar1672 [64];
  undefined1 in_ZMM10 [64];
  uint uVar1674;
  uint uVar1675;
  int iVar1676;
  uint uVar1708;
  undefined1 auVar1677 [12];
  uint uVar1709;
  uint uVar1711;
  uint uVar1712;
  undefined1 auVar1678 [12];
  undefined1 auVar1685 [16];
  undefined1 auVar1686 [16];
  undefined1 auVar1680 [12];
  undefined1 auVar1688 [16];
  undefined1 auVar1689 [16];
  byte bVar1716;
  byte bVar1719;
  byte bVar1720;
  undefined1 auVar1691 [64];
  undefined1 auVar1693 [64];
  undefined1 auVar1690 [16];
  undefined1 auVar1702 [64];
  uint uVar1717;
  uint uVar1718;
  byte bVar1721;
  undefined1 auVar1705 [64];
  undefined1 in_ZMM11 [64];
  undefined1 auVar1722 [12];
  undefined1 auVar1724 [16];
  undefined1 auVar1726 [16];
  undefined1 auVar1727 [64];
  undefined1 auVar1730 [64];
  undefined1 in_ZMM12 [64];
  undefined1 auVar1735 [12];
  undefined1 auVar1736 [12];
  byte bVar1749;
  byte bVar1750;
  byte bVar1751;
  undefined1 auVar1739 [16];
  undefined1 auVar1737 [12];
  byte bVar1752;
  undefined1 auVar1743 [16];
  undefined1 auVar1744 [16];
  byte bVar1753;
  byte bVar1770;
  byte bVar1771;
  byte bVar1772;
  int iVar1754;
  byte bVar1773;
  byte bVar1774;
  byte bVar1775;
  byte bVar1776;
  undefined1 auVar1756 [12];
  undefined1 auVar1758 [16];
  undefined1 auVar1759 [16];
  undefined1 auVar1760 [16];
  undefined1 in_ZMM14 [64];
  undefined1 auVar1777 [16];
  undefined1 auVar1778 [64];
  undefined1 in_ZMM15 [64];
  uchar *puStack_118;
  undefined1 auVar507 [64];
  undefined1 auVar515 [64];
  undefined1 auVar521 [64];
  undefined1 auVar523 [64];
  undefined1 auVar508 [64];
  undefined1 auVar516 [64];
  undefined1 auVar570 [64];
  undefined1 auVar577 [64];
  undefined1 auVar581 [64];
  undefined1 auVar584 [64];
  undefined1 auVar582 [64];
  undefined1 auVar571 [64];
  undefined1 auVar547 [13];
  undefined1 auVar578 [64];
  undefined1 auVar548 [14];
  ushort uVar611;
  undefined1 auVar635 [16];
  undefined1 auVar647 [64];
  undefined1 auVar617 [13];
  undefined1 auVar642 [16];
  undefined1 auVar649 [64];
  undefined1 auVar643 [16];
  undefined1 auVar651 [64];
  undefined1 auVar625 [14];
  undefined1 auVar626 [14];
  undefined1 auVar627 [14];
  undefined1 auVar628 [14];
  undefined1 auVar629 [14];
  undefined1 auVar630 [14];
  undefined1 auVar631 [14];
  undefined1 auVar632 [14];
  undefined1 auVar633 [14];
  undefined1 auVar634 [14];
  undefined1 auVar698 [64];
  undefined1 auVar710 [64];
  undefined1 auVar711 [64];
  undefined1 auVar712 [64];
  undefined1 auVar724 [64];
  undefined1 auVar725 [64];
  undefined1 auVar737 [64];
  undefined1 auVar738 [64];
  undefined1 auVar750 [64];
  undefined1 auVar751 [64];
  undefined1 auVar763 [64];
  undefined1 auVar764 [64];
  undefined1 auVar794 [64];
  undefined1 auVar795 [64];
  undefined1 auVar796 [64];
  undefined1 auVar808 [64];
  undefined1 auVar818 [64];
  undefined1 auVar828 [64];
  undefined1 auVar829 [64];
  undefined1 auVar841 [64];
  undefined1 auVar842 [64];
  undefined1 auVar854 [64];
  undefined1 auVar855 [64];
  undefined6 uVar656;
  undefined8 uVar657;
  undefined1 auVar779 [64];
  undefined1 auVar809 [64];
  undefined1 auVar819 [64];
  undefined1 auVar706 [64];
  undefined1 auVar720 [64];
  undefined1 auVar733 [64];
  undefined1 auVar746 [64];
  undefined1 auVar759 [64];
  undefined1 auVar772 [64];
  undefined1 auVar780 [64];
  undefined1 auVar788 [64];
  undefined1 auVar804 [64];
  undefined1 auVar661 [12];
  undefined1 auVar814 [64];
  undefined1 auVar824 [64];
  undefined1 auVar837 [64];
  undefined1 auVar850 [64];
  undefined1 auVar863 [64];
  undefined1 auVar699 [64];
  undefined1 auVar713 [64];
  undefined1 auVar726 [64];
  undefined1 auVar739 [64];
  undefined1 auVar752 [64];
  undefined1 auVar765 [64];
  undefined1 auVar781 [64];
  undefined1 auVar797 [64];
  undefined1 auVar810 [64];
  undefined1 auVar820 [64];
  undefined1 auVar830 [64];
  undefined1 auVar843 [64];
  undefined1 auVar856 [64];
  undefined1 auVar700 [64];
  undefined1 auVar707 [64];
  undefined1 auVar714 [64];
  undefined1 auVar721 [64];
  undefined1 auVar727 [64];
  undefined1 auVar734 [64];
  undefined1 auVar740 [64];
  undefined1 auVar747 [64];
  undefined1 auVar753 [64];
  undefined1 auVar760 [64];
  undefined1 auVar766 [64];
  undefined1 auVar773 [64];
  undefined1 auVar684 [16];
  undefined1 auVar777 [64];
  undefined1 auVar782 [64];
  undefined1 auVar789 [64];
  undefined1 auVar685 [16];
  undefined1 auVar792 [64];
  undefined1 auVar686 [16];
  undefined1 auVar798 [64];
  undefined1 auVar799 [64];
  undefined1 auVar805 [64];
  undefined1 auVar680 [14];
  undefined1 auVar693 [16];
  undefined1 auVar815 [64];
  undefined1 auVar825 [64];
  undefined1 auVar831 [64];
  undefined1 auVar838 [64];
  undefined1 auVar844 [64];
  undefined1 auVar851 [64];
  undefined1 auVar857 [64];
  undefined1 auVar864 [64];
  undefined1 auVar696 [16];
  undefined1 auVar867 [64];
  undefined1 auVar869 [64];
  undefined1 auVar701 [64];
  undefined1 auVar715 [64];
  undefined1 auVar728 [64];
  undefined1 auVar741 [64];
  undefined1 auVar754 [64];
  undefined1 auVar767 [64];
  undefined1 auVar674 [14];
  undefined1 auVar783 [64];
  undefined1 auVar675 [14];
  undefined1 auVar800 [64];
  undefined1 auVar676 [14];
  undefined1 auVar677 [14];
  undefined1 auVar678 [14];
  undefined1 auVar679 [14];
  undefined1 auVar811 [64];
  undefined1 auVar821 [64];
  undefined1 auVar832 [64];
  undefined1 auVar845 [64];
  undefined1 auVar858 [64];
  undefined1 auVar681 [14];
  undefined1 auVar682 [14];
  undefined1 auVar683 [14];
  undefined1 auVar702 [64];
  undefined1 auVar708 [64];
  undefined1 auVar716 [64];
  undefined1 auVar722 [64];
  undefined1 auVar729 [64];
  undefined1 auVar735 [64];
  undefined1 auVar742 [64];
  undefined1 auVar748 [64];
  undefined1 auVar755 [64];
  undefined1 auVar761 [64];
  undefined1 auVar768 [64];
  undefined1 auVar774 [64];
  undefined1 auVar784 [64];
  undefined1 auVar790 [64];
  undefined1 auVar801 [64];
  undefined1 auVar802 [64];
  undefined1 auVar806 [64];
  undefined1 auVar692 [16];
  undefined1 auVar816 [64];
  undefined1 auVar826 [64];
  undefined1 auVar833 [64];
  undefined1 auVar839 [64];
  undefined1 auVar846 [64];
  undefined1 auVar852 [64];
  undefined1 auVar859 [64];
  undefined1 auVar865 [64];
  undefined1 auVar703 [64];
  undefined1 auVar717 [64];
  undefined1 auVar730 [64];
  undefined1 auVar743 [64];
  undefined1 auVar756 [64];
  undefined1 auVar769 [64];
  undefined1 auVar785 [64];
  undefined1 auVar812 [64];
  undefined1 auVar822 [64];
  undefined1 auVar834 [64];
  undefined1 auVar847 [64];
  undefined1 auVar860 [64];
  undefined1 auVar704 [64];
  undefined1 auVar718 [64];
  undefined1 auVar731 [64];
  undefined1 auVar744 [64];
  undefined1 auVar757 [64];
  undefined1 auVar770 [64];
  undefined1 auVar786 [64];
  undefined1 auVar835 [64];
  undefined1 auVar848 [64];
  undefined1 auVar861 [64];
  undefined1 auVar709 [64];
  undefined1 auVar793 [64];
  undefined1 auVar807 [64];
  undefined1 auVar817 [64];
  undefined1 auVar885 [64];
  undefined1 auVar886 [64];
  undefined1 auVar887 [64];
  undefined1 auVar899 [64];
  undefined1 auVar900 [64];
  undefined1 auVar901 [64];
  undefined1 auVar913 [64];
  undefined1 auVar914 [64];
  undefined1 auVar915 [64];
  undefined1 auVar927 [64];
  undefined1 auVar928 [64];
  undefined1 auVar929 [64];
  undefined1 auVar941 [64];
  undefined1 auVar942 [64];
  undefined1 auVar943 [64];
  undefined1 auVar955 [64];
  undefined1 auVar956 [64];
  undefined1 auVar957 [64];
  undefined1 auVar969 [64];
  undefined1 auVar970 [64];
  undefined1 auVar971 [64];
  undefined1 auVar985 [64];
  undefined1 auVar986 [64];
  undefined1 auVar987 [64];
  undefined1 auVar1011 [64];
  undefined1 auVar1012 [64];
  undefined1 auVar1013 [64];
  undefined1 auVar1026 [64];
  undefined1 auVar1027 [64];
  undefined1 auVar1028 [64];
  undefined1 auVar1041 [64];
  undefined1 auVar1042 [64];
  undefined1 auVar1043 [64];
  undefined1 auVar1056 [64];
  undefined1 auVar1057 [64];
  undefined1 auVar1058 [64];
  undefined1 auVar1071 [64];
  undefined1 auVar1072 [64];
  undefined1 auVar1073 [64];
  undefined1 auVar1091 [64];
  undefined1 auVar1092 [64];
  undefined1 auVar1093 [64];
  undefined1 auVar1105 [64];
  undefined1 auVar1106 [64];
  undefined1 auVar1107 [64];
  undefined1 auVar1119 [64];
  undefined1 auVar1120 [64];
  undefined1 auVar1121 [64];
  undefined1 auVar1133 [64];
  undefined1 auVar1134 [64];
  undefined1 auVar1135 [64];
  undefined1 auVar1148 [64];
  undefined1 auVar1149 [64];
  undefined1 auVar1150 [64];
  undefined1 auVar1163 [64];
  undefined1 auVar1164 [64];
  undefined1 auVar1165 [64];
  undefined1 auVar999 [64];
  undefined1 auVar1000 [64];
  undefined1 auVar1001 [64];
  undefined1 auVar1002 [64];
  undefined1 auVar1003 [64];
  undefined1 auVar1004 [64];
  undefined1 auVar1005 [64];
  undefined1 auVar1006 [64];
  undefined1 auVar1086 [64];
  undefined1 auVar895 [64];
  undefined1 auVar909 [64];
  undefined1 auVar923 [64];
  undefined1 auVar937 [64];
  undefined1 auVar951 [64];
  undefined1 auVar965 [64];
  undefined1 auVar979 [64];
  undefined1 auVar995 [64];
  undefined1 auVar1021 [64];
  undefined1 auVar1022 [64];
  undefined1 auVar1036 [64];
  undefined1 auVar1037 [64];
  undefined1 auVar1051 [64];
  undefined1 auVar1052 [64];
  undefined1 auVar1066 [64];
  undefined1 auVar1067 [64];
  undefined1 auVar1081 [64];
  undefined1 auVar1082 [64];
  undefined1 auVar1087 [64];
  undefined1 auVar1101 [64];
  undefined1 auVar1115 [64];
  undefined1 auVar1129 [64];
  undefined1 auVar1143 [64];
  undefined1 auVar1144 [64];
  undefined1 auVar1158 [64];
  undefined1 auVar1159 [64];
  undefined1 auVar1173 [64];
  undefined1 auVar1174 [64];
  undefined1 auVar888 [64];
  undefined1 auVar902 [64];
  undefined1 auVar916 [64];
  undefined1 auVar930 [64];
  undefined1 auVar944 [64];
  undefined1 auVar958 [64];
  undefined1 auVar972 [64];
  undefined1 auVar988 [64];
  undefined1 auVar1014 [64];
  undefined1 auVar1029 [64];
  undefined1 auVar1044 [64];
  undefined1 auVar1059 [64];
  undefined1 auVar1074 [64];
  undefined1 auVar1094 [64];
  undefined1 auVar1108 [64];
  undefined1 auVar1122 [64];
  undefined1 auVar1136 [64];
  undefined1 auVar1151 [64];
  undefined1 auVar1166 [64];
  undefined1 auVar889 [64];
  undefined1 auVar896 [64];
  undefined1 auVar903 [64];
  undefined1 auVar910 [64];
  undefined1 auVar917 [64];
  undefined1 auVar924 [64];
  undefined1 auVar931 [64];
  undefined1 auVar938 [64];
  undefined1 auVar945 [64];
  undefined1 auVar952 [64];
  undefined1 auVar959 [64];
  undefined1 auVar966 [64];
  undefined1 auVar973 [64];
  undefined1 auVar974 [64];
  undefined1 auVar980 [64];
  undefined1 auVar878 [16];
  undefined1 auVar983 [64];
  undefined1 auVar989 [64];
  undefined1 auVar990 [64];
  undefined1 auVar996 [64];
  undefined1 auVar1008 [64];
  undefined1 auVar1015 [64];
  undefined1 auVar1016 [64];
  undefined1 auVar1023 [64];
  undefined1 auVar1030 [64];
  undefined1 auVar1031 [64];
  undefined1 auVar1038 [64];
  undefined1 auVar1045 [64];
  undefined1 auVar1046 [64];
  undefined1 auVar1053 [64];
  undefined1 auVar1060 [64];
  undefined1 auVar1061 [64];
  undefined1 auVar1068 [64];
  undefined1 auVar1075 [64];
  undefined1 auVar1076 [64];
  undefined1 auVar1083 [64];
  undefined1 auVar1088 [64];
  undefined1 auVar1095 [64];
  undefined1 auVar1102 [64];
  undefined1 auVar1109 [64];
  undefined1 auVar1116 [64];
  undefined1 auVar1123 [64];
  undefined1 auVar1130 [64];
  undefined1 auVar1137 [64];
  undefined1 auVar1138 [64];
  undefined1 auVar1145 [64];
  undefined1 auVar1152 [64];
  undefined1 auVar1153 [64];
  undefined1 auVar1160 [64];
  undefined1 auVar1167 [64];
  undefined1 auVar1168 [64];
  undefined1 auVar1175 [64];
  undefined1 auVar890 [64];
  undefined1 auVar904 [64];
  undefined1 auVar918 [64];
  undefined1 auVar932 [64];
  undefined1 auVar946 [64];
  undefined1 auVar960 [64];
  undefined1 auVar975 [64];
  undefined1 auVar991 [64];
  undefined1 auVar1017 [64];
  undefined1 auVar1032 [64];
  undefined1 auVar1047 [64];
  undefined1 auVar1062 [64];
  undefined1 auVar1077 [64];
  undefined1 auVar1096 [64];
  undefined1 auVar1110 [64];
  undefined1 auVar1124 [64];
  undefined1 auVar1139 [64];
  undefined1 auVar1154 [64];
  undefined1 auVar1169 [64];
  undefined1 auVar891 [64];
  undefined1 auVar897 [64];
  undefined1 auVar905 [64];
  undefined1 auVar911 [64];
  undefined1 auVar919 [64];
  undefined1 auVar925 [64];
  undefined1 auVar933 [64];
  undefined1 auVar939 [64];
  undefined1 auVar947 [64];
  undefined1 auVar953 [64];
  undefined1 auVar961 [64];
  undefined1 auVar967 [64];
  undefined1 auVar976 [64];
  undefined1 auVar977 [64];
  undefined1 auVar981 [64];
  undefined1 auVar992 [64];
  undefined1 auVar993 [64];
  undefined1 auVar997 [64];
  undefined1 auVar1009 [64];
  undefined1 auVar1018 [64];
  undefined1 auVar1019 [64];
  undefined1 auVar1024 [64];
  undefined1 auVar1033 [64];
  undefined1 auVar1034 [64];
  undefined1 auVar1039 [64];
  undefined1 auVar1048 [64];
  undefined1 auVar1049 [64];
  undefined1 auVar1054 [64];
  undefined1 auVar1063 [64];
  undefined1 auVar1064 [64];
  undefined1 auVar1069 [64];
  undefined1 auVar1078 [64];
  undefined1 auVar1079 [64];
  undefined1 auVar1084 [64];
  undefined1 auVar1089 [64];
  undefined1 auVar1097 [64];
  undefined1 auVar1103 [64];
  undefined1 auVar1111 [64];
  undefined1 auVar1117 [64];
  undefined1 auVar1125 [64];
  undefined1 auVar1131 [64];
  undefined1 auVar1140 [64];
  undefined1 auVar1141 [64];
  undefined1 auVar1146 [64];
  undefined1 auVar1155 [64];
  undefined1 auVar1156 [64];
  undefined1 auVar1161 [64];
  undefined1 auVar1170 [64];
  undefined1 auVar1171 [64];
  undefined1 auVar1176 [64];
  undefined1 auVar892 [64];
  undefined1 auVar906 [64];
  undefined1 auVar920 [64];
  undefined1 auVar934 [64];
  undefined1 auVar948 [64];
  undefined1 auVar962 [64];
  undefined1 auVar1098 [64];
  undefined1 auVar1112 [64];
  undefined1 auVar1126 [64];
  undefined1 auVar893 [64];
  undefined1 auVar907 [64];
  undefined1 auVar921 [64];
  undefined1 auVar935 [64];
  undefined1 auVar949 [64];
  undefined1 auVar963 [64];
  undefined1 auVar1099 [64];
  undefined1 auVar1113 [64];
  undefined1 auVar1127 [64];
  undefined1 auVar884 [64];
  undefined1 auVar898 [64];
  undefined1 auVar912 [64];
  undefined1 auVar926 [64];
  undefined1 auVar940 [64];
  undefined1 auVar954 [64];
  undefined1 auVar968 [64];
  undefined1 auVar984 [64];
  undefined1 auVar1010 [64];
  undefined1 auVar1025 [64];
  undefined1 auVar1040 [64];
  undefined1 auVar1055 [64];
  undefined1 auVar1070 [64];
  undefined1 auVar1090 [64];
  undefined1 auVar1104 [64];
  undefined1 auVar1118 [64];
  undefined1 auVar1132 [64];
  undefined1 auVar1147 [64];
  undefined1 auVar1162 [64];
  undefined1 auVar1192 [64];
  undefined1 auVar1193 [64];
  undefined1 auVar1194 [64];
  undefined1 auVar1207 [64];
  undefined1 auVar1208 [64];
  undefined1 auVar1209 [64];
  undefined1 auVar1221 [64];
  undefined1 auVar1222 [64];
  undefined1 auVar1223 [64];
  undefined1 auVar1235 [64];
  undefined1 auVar1236 [64];
  undefined1 auVar1237 [64];
  undefined1 auVar1249 [64];
  undefined1 auVar1250 [64];
  undefined1 auVar1251 [64];
  undefined1 auVar1263 [64];
  undefined1 auVar1264 [64];
  undefined1 auVar1265 [64];
  undefined1 auVar1277 [64];
  undefined1 auVar1287 [64];
  undefined1 auVar1288 [64];
  undefined1 auVar1289 [64];
  undefined1 auVar1314 [64];
  undefined1 auVar1315 [64];
  undefined1 auVar1316 [64];
  undefined1 auVar1328 [64];
  undefined1 auVar1329 [64];
  undefined1 auVar1330 [64];
  undefined1 auVar1342 [64];
  undefined1 auVar1343 [64];
  undefined1 auVar1344 [64];
  undefined1 auVar1356 [64];
  undefined1 auVar1357 [64];
  undefined1 auVar1358 [64];
  undefined1 auVar1378 [64];
  undefined1 auVar1379 [64];
  undefined1 auVar1380 [64];
  undefined1 auVar1396 [64];
  undefined1 auVar1397 [64];
  undefined1 auVar1398 [64];
  undefined1 auVar1410 [64];
  undefined1 auVar1411 [64];
  undefined1 auVar1412 [64];
  undefined1 auVar1424 [64];
  undefined1 auVar1425 [64];
  undefined1 auVar1426 [64];
  undefined1 auVar1438 [64];
  undefined1 auVar1439 [64];
  undefined1 auVar1440 [64];
  undefined1 auVar1452 [64];
  undefined1 auVar1453 [64];
  undefined1 auVar1454 [64];
  undefined1 auVar1466 [64];
  undefined1 auVar1467 [64];
  undefined1 auVar1468 [64];
  undefined1 auVar1301 [64];
  undefined1 auVar1302 [64];
  undefined1 auVar1303 [64];
  undefined1 auVar1304 [64];
  undefined1 auVar1305 [64];
  undefined1 auVar1306 [64];
  undefined1 auVar1307 [64];
  undefined1 auVar1308 [64];
  undefined1 auVar1278 [64];
  undefined1 auVar1202 [64];
  undefined1 auVar1217 [64];
  undefined1 auVar1231 [64];
  undefined1 auVar1245 [64];
  undefined1 auVar1259 [64];
  undefined1 auVar1273 [64];
  undefined1 auVar1283 [64];
  undefined1 auVar1297 [64];
  undefined1 auVar1324 [64];
  undefined1 auVar1338 [64];
  undefined1 auVar1352 [64];
  undefined1 auVar1366 [64];
  undefined1 auVar1374 [64];
  undefined1 auVar1388 [64];
  undefined1 auVar1406 [64];
  undefined1 auVar1420 [64];
  undefined1 auVar1434 [64];
  undefined1 auVar1448 [64];
  undefined1 auVar1462 [64];
  undefined1 auVar1476 [64];
  undefined1 auVar1195 [64];
  undefined1 auVar1210 [64];
  undefined1 auVar1224 [64];
  undefined1 auVar1238 [64];
  undefined1 auVar1252 [64];
  undefined1 auVar1266 [64];
  undefined1 auVar1279 [64];
  undefined1 auVar1290 [64];
  undefined1 auVar1317 [64];
  undefined1 auVar1331 [64];
  undefined1 auVar1345 [64];
  undefined1 auVar1359 [64];
  undefined1 auVar1381 [64];
  undefined1 auVar1399 [64];
  undefined1 auVar1413 [64];
  undefined1 auVar1427 [64];
  undefined1 auVar1441 [64];
  undefined1 auVar1455 [64];
  undefined1 auVar1469 [64];
  undefined1 auVar1196 [64];
  undefined1 auVar1203 [64];
  undefined1 auVar1211 [64];
  undefined1 auVar1218 [64];
  undefined1 auVar1225 [64];
  undefined1 auVar1232 [64];
  undefined1 auVar1239 [64];
  undefined1 auVar1246 [64];
  undefined1 auVar1253 [64];
  undefined1 auVar1260 [64];
  undefined1 auVar1267 [64];
  undefined1 auVar1268 [64];
  undefined1 auVar1274 [64];
  undefined1 auVar1284 [64];
  undefined1 auVar1291 [64];
  undefined1 auVar1292 [64];
  undefined1 auVar1298 [64];
  undefined1 auVar1310 [64];
  undefined1 auVar1318 [64];
  undefined1 auVar1319 [64];
  undefined1 auVar1325 [64];
  undefined1 auVar1332 [64];
  undefined1 auVar1333 [64];
  undefined1 auVar1339 [64];
  undefined1 auVar1346 [64];
  undefined1 auVar1347 [64];
  undefined1 auVar1353 [64];
  undefined1 auVar1360 [64];
  undefined1 auVar1361 [64];
  undefined1 auVar1367 [64];
  undefined1 auVar1370 [64];
  undefined1 auVar1375 [64];
  undefined1 auVar1382 [64];
  undefined1 auVar1389 [64];
  undefined1 auVar1392 [64];
  undefined1 auVar1190 [16];
  undefined1 auVar1394 [64];
  undefined1 auVar1400 [64];
  undefined1 auVar1407 [64];
  undefined1 auVar1414 [64];
  undefined1 auVar1421 [64];
  undefined1 auVar1428 [64];
  undefined1 auVar1435 [64];
  undefined1 auVar1442 [64];
  undefined1 auVar1443 [64];
  undefined1 auVar1449 [64];
  undefined1 auVar1456 [64];
  undefined1 auVar1457 [64];
  undefined1 auVar1463 [64];
  undefined1 auVar1470 [64];
  undefined1 auVar1471 [64];
  undefined1 auVar1477 [64];
  undefined1 auVar1197 [64];
  undefined1 auVar1212 [64];
  undefined1 auVar1226 [64];
  undefined1 auVar1240 [64];
  undefined1 auVar1254 [64];
  undefined1 auVar1269 [64];
  undefined1 auVar1280 [64];
  undefined1 auVar1293 [64];
  undefined1 auVar1320 [64];
  undefined1 auVar1334 [64];
  undefined1 auVar1348 [64];
  undefined1 auVar1362 [64];
  undefined1 auVar1383 [64];
  undefined1 auVar1401 [64];
  undefined1 auVar1415 [64];
  undefined1 auVar1429 [64];
  undefined1 auVar1444 [64];
  undefined1 auVar1458 [64];
  undefined1 auVar1472 [64];
  undefined1 auVar1198 [64];
  undefined1 auVar1204 [64];
  undefined1 auVar1213 [64];
  undefined1 auVar1219 [64];
  undefined1 auVar1227 [64];
  undefined1 auVar1233 [64];
  undefined1 auVar1241 [64];
  undefined1 auVar1247 [64];
  undefined1 auVar1255 [64];
  undefined1 auVar1261 [64];
  undefined1 auVar1270 [64];
  undefined1 auVar1271 [64];
  undefined1 auVar1275 [64];
  undefined1 auVar1285 [64];
  undefined1 auVar1294 [64];
  undefined1 auVar1295 [64];
  undefined1 auVar1299 [64];
  undefined1 auVar1311 [64];
  undefined1 auVar1321 [64];
  undefined1 auVar1322 [64];
  undefined1 auVar1326 [64];
  undefined1 auVar1335 [64];
  undefined1 auVar1336 [64];
  undefined1 auVar1340 [64];
  undefined1 auVar1349 [64];
  undefined1 auVar1350 [64];
  undefined1 auVar1354 [64];
  undefined1 auVar1363 [64];
  undefined1 auVar1364 [64];
  undefined1 auVar1368 [64];
  undefined1 auVar1371 [64];
  undefined1 auVar1376 [64];
  undefined1 auVar1384 [64];
  undefined1 auVar1390 [64];
  undefined1 auVar1402 [64];
  undefined1 auVar1408 [64];
  undefined1 auVar1416 [64];
  undefined1 auVar1422 [64];
  undefined1 auVar1430 [64];
  undefined1 auVar1436 [64];
  undefined1 auVar1445 [64];
  undefined1 auVar1446 [64];
  undefined1 auVar1450 [64];
  undefined1 auVar1459 [64];
  undefined1 auVar1460 [64];
  undefined1 auVar1464 [64];
  undefined1 auVar1473 [64];
  undefined1 auVar1474 [64];
  undefined1 auVar1478 [64];
  undefined1 auVar1199 [64];
  undefined1 auVar1214 [64];
  undefined1 auVar1228 [64];
  undefined1 auVar1242 [64];
  undefined1 auVar1256 [64];
  undefined1 auVar1281 [64];
  undefined1 auVar1385 [64];
  undefined1 auVar1403 [64];
  undefined1 auVar1417 [64];
  undefined1 auVar1431 [64];
  undefined1 auVar1200 [64];
  undefined1 auVar1215 [64];
  undefined1 auVar1229 [64];
  undefined1 auVar1243 [64];
  undefined1 auVar1257 [64];
  undefined1 auVar1386 [64];
  undefined1 auVar1404 [64];
  undefined1 auVar1418 [64];
  undefined1 auVar1432 [64];
  undefined1 auVar1191 [64];
  undefined1 auVar1206 [64];
  undefined1 auVar1220 [64];
  undefined1 auVar1234 [64];
  undefined1 auVar1248 [64];
  undefined1 auVar1262 [64];
  undefined1 auVar1276 [64];
  undefined1 auVar1286 [64];
  undefined1 auVar1313 [64];
  undefined1 auVar1327 [64];
  undefined1 auVar1341 [64];
  undefined1 auVar1355 [64];
  undefined1 auVar1372 [64];
  undefined1 auVar1395 [64];
  undefined1 auVar1409 [64];
  undefined1 auVar1423 [64];
  undefined1 auVar1437 [64];
  undefined1 auVar1451 [64];
  undefined1 auVar1465 [64];
  undefined1 auVar1514 [64];
  undefined1 auVar1523 [64];
  undefined1 auVar1524 [64];
  undefined1 auVar1515 [64];
  undefined1 auVar1525 [64];
  undefined1 auVar1520 [64];
  undefined1 auVar1526 [64];
  undefined1 auVar1516 [64];
  undefined1 auVar1527 [64];
  undefined1 auVar1521 [64];
  undefined1 auVar1495 [16];
  undefined1 auVar1528 [64];
  undefined1 auVar1503 [16];
  undefined1 auVar1517 [64];
  undefined1 auVar1529 [64];
  undefined1 auVar1522 [64];
  undefined1 auVar1530 [64];
  undefined1 auVar1518 [64];
  undefined1 auVar1531 [64];
  undefined1 auVar1513 [64];
  undefined1 auVar1570 [64];
  undefined1 auVar1584 [64];
  undefined1 auVar1585 [64];
  undefined1 auVar1586 [64];
  undefined1 auVar1571 [64];
  undefined1 auVar1572 [64];
  undefined1 auVar1573 [64];
  undefined1 auVar1594 [64];
  undefined1 auVar1574 [64];
  undefined1 auVar1587 [64];
  undefined1 auVar1554 [16];
  undefined1 auVar1575 [64];
  undefined1 auVar1561 [16];
  undefined1 auVar1581 [64];
  undefined1 auVar1588 [64];
  undefined1 auVar1595 [64];
  undefined1 auVar1566 [16];
  undefined1 auVar1598 [64];
  undefined1 auVar1600 [64];
  undefined1 auVar1576 [64];
  undefined1 auVar1589 [64];
  undefined1 auVar1577 [64];
  undefined1 auVar1582 [64];
  undefined1 auVar1590 [64];
  undefined1 auVar1596 [64];
  undefined1 auVar1578 [64];
  undefined1 auVar1591 [64];
  undefined1 auVar1592 [64];
  undefined1 auVar1657 [64];
  undefined1 auVar1658 [64];
  undefined1 auVar1659 [64];
  undefined1 auVar1650 [64];
  undefined1 auVar1646 [64];
  undefined1 auVar1652 [64];
  undefined1 auVar1647 [64];
  undefined1 auVar1653 [64];
  undefined1 auVar1667 [64];
  undefined1 auVar1660 [64];
  undefined1 auVar1618 [16];
  undefined1 auVar1640 [64];
  undefined1 auVar1623 [16];
  undefined1 auVar1642 [64];
  undefined1 auVar1625 [16];
  undefined1 auVar1644 [64];
  undefined1 auVar1648 [64];
  undefined1 auVar1617 [14];
  undefined1 auVar1654 [64];
  undefined1 auVar1661 [64];
  undefined1 auVar1668 [64];
  undefined1 auVar1637 [16];
  undefined1 auVar1671 [64];
  undefined1 auVar1673 [64];
  undefined1 auVar1662 [64];
  undefined1 auVar1649 [64];
  undefined1 auVar1633 [16];
  undefined1 auVar1655 [64];
  undefined1 auVar1663 [64];
  undefined1 auVar1669 [64];
  undefined1 auVar1664 [64];
  undefined1 auVar1665 [64];
  undefined1 auVar1694 [64];
  undefined1 auVar1695 [64];
  undefined1 auVar1696 [64];
  undefined1 auVar1697 [64];
  undefined1 auVar1698 [64];
  undefined1 auVar1699 [64];
  undefined1 auVar1700 [64];
  undefined1 auVar1701 [64];
  undefined1 auVar1679 [12];
  undefined1 auVar1682 [16];
  undefined1 auVar1692 [64];
  undefined1 auVar1703 [64];
  undefined1 auVar1681 [14];
  undefined1 auVar1684 [16];
  undefined1 auVar1706 [64];
  undefined1 auVar1687 [16];
  undefined1 auVar1704 [64];
  undefined1 auVar1683 [16];
  undefined1 auVar1707 [64];
  byte bVar1710;
  byte bVar1713;
  byte bVar1714;
  byte bVar1715;
  undefined1 auVar1731 [64];
  undefined1 auVar1732 [64];
  undefined1 auVar1728 [64];
  undefined1 auVar1723 [14];
  undefined1 auVar1733 [64];
  undefined1 auVar1729 [64];
  undefined1 auVar1725 [16];
  undefined1 auVar1734 [64];
  undefined1 auVar1738 [14];
  undefined1 auVar1741 [16];
  undefined1 auVar1742 [16];
  undefined1 auVar1740 [16];
  byte bVar1745;
  byte bVar1746;
  byte bVar1747;
  byte bVar1748;
  undefined1 auVar1761 [64];
  undefined1 auVar1762 [64];
  undefined1 auVar1755 [12];
  undefined1 auVar1763 [64];
  undefined1 auVar1764 [64];
  undefined1 auVar1765 [64];
  undefined1 auVar1766 [64];
  undefined1 auVar1757 [16];
  undefined1 auVar1767 [64];
  undefined1 auVar1768 [64];
  undefined1 auVar1769 [64];
  undefined1 auVar1779 [64];
  undefined1 auVar1780 [64];
  undefined1 auVar1781 [64];
  undefined1 auVar1782 [64];
  
  auVar501 = in_ZMM0._0_32_;
  if (png_write_find_filter_dispatch !=
      (_func___cdecl_void_png_struct_def_ptr_png_row_info_struct_ptr *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000140dd1e9c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*png_write_find_filter_dispatch)(param_1,param_2);
    return;
  }
  lVar482 = cpuid_Version_info(1);
  if (((((~*(uint *)(lVar482 + 0xc) & 0x1c401000) == 0) &&
       (lVar482 = cpuid_Extended_Feature_Enumeration_info(7), (~*(uint *)(lVar482 + 4) & 0x128) == 0
       )) && (lVar482 = cpuid(0x80000001), (*(uint *)(lVar482 + 0xc) & 0x20) != 0)) &&
     (uVar657 = xinuse(0), (~(in_XCR0 & (uint)uVar657) & 6) == 0)) {
    png_write_find_filter_dispatch = png_write_find_filter_avx2;
    bVar466 = param_1->do_filter;
    uVar13 = param_2->rowbytes;
    bVar610 = param_2->pixel_depth;
    puVar469 = param_1->row_buf;
    if (uVar13 < 0x1ffffffffffffff) {
      auVar502._0_8_ = 0xfffffffffffffeff;
      if ((bVar466 != 8 & bVar466 >> 3) == 1) {
        if (uVar13 == 0) {
          auVar502._0_8_ = 0;
        }
        else {
          if (uVar13 < 0x10) {
            auVar502._0_8_ = 0;
            uVar474 = 0;
            puVar464 = puVar469;
            auVar596 = auVar501;
          }
          else {
            uVar474 = uVar13 & 0x1fffffffffffff0;
            puVar464 = puVar469 + uVar474;
            lVar482 = 0;
            lVar528 = 0;
            lVar541 = 0;
            lVar543 = 0;
            auVar883._4_4_ = __real_00000100;
            auVar883._0_4_ = __real_00000100;
            auVar883._8_4_ = __real_00000100;
            auVar883._12_4_ = __real_00000100;
            auVar502._0_8_ = 0;
            lVar530 = 0;
            lVar545 = 0;
            lVar600 = 0;
            lVar601 = 0;
            lVar529 = 0;
            lVar544 = 0;
            lVar608 = 0;
            lVar609 = 0;
            lVar542 = 0;
            lVar602 = 0;
            lVar653 = 0;
            lVar654 = 0;
            do {
              auVar1628 = vpmovzxbd_avx(ZEXT416(*(uint *)(puVar469 + auVar502._0_8_ + 1)));
              auVar591 = vpmovzxbd_avx(ZEXT416(*(uint *)(puVar469 + auVar502._0_8_ + 5)));
              auVar1186 = vpsubd_avx(auVar883,auVar1628);
              auVar645 = vpmovsxbd_avx(ZEXT416(*(uint *)(puVar469 + auVar502._0_8_ + 1)));
              auVar645 = vblendvps_avx(auVar1628,auVar1186,auVar645);
              auVar1186 = vpmovzxbd_avx(ZEXT416(*(uint *)(puVar469 + auVar502._0_8_ + 9)));
              auVar1634 = vpsubd_avx(auVar883,auVar591);
              auVar1628 = vpmovsxbd_avx(ZEXT416(*(uint *)(puVar469 + auVar502._0_8_ + 5)));
              auVar1628 = vblendvps_avx(auVar591,auVar1634,auVar1628);
              auVar1634 = vpsubd_avx(auVar883,auVar1186);
              auVar591 = vpmovsxbd_avx(ZEXT416(*(uint *)(puVar469 + auVar502._0_8_ + 9)));
              auVar591 = vblendvps_avx(auVar1186,auVar1634,auVar591);
              auVar1634 = vpmovzxbd_avx(ZEXT416(*(uint *)(puVar469 + auVar502._0_8_ + 0xd)));
              auVar20 = vpsubd_avx(auVar883,auVar1634);
              auVar1186 = vpmovsxbd_avx(ZEXT416(*(uint *)(puVar469 + auVar502._0_8_ + 0xd)));
              auVar1186 = vblendvps_avx(auVar1634,auVar20,auVar1186);
              auVar501 = vpmovzxdq_avx2(auVar645);
              lVar482 = lVar482 + auVar501._0_8_;
              lVar528 = lVar528 + auVar501._8_8_;
              lVar541 = lVar541 + auVar501._16_8_;
              lVar543 = lVar543 + auVar501._24_8_;
              auVar501 = vpmovzxdq_avx2(auVar1628);
              lVar530 = lVar530 + auVar501._0_8_;
              lVar545 = lVar545 + auVar501._8_8_;
              lVar600 = lVar600 + auVar501._16_8_;
              lVar601 = lVar601 + auVar501._24_8_;
              auVar501 = vpmovzxdq_avx2(auVar591);
              lVar529 = lVar529 + auVar501._0_8_;
              lVar544 = lVar544 + auVar501._8_8_;
              lVar608 = lVar608 + auVar501._16_8_;
              lVar609 = lVar609 + auVar501._24_8_;
              auVar501 = vpmovzxdq_avx2(auVar1186);
              lVar542 = lVar542 + auVar501._0_8_;
              lVar602 = lVar602 + auVar501._8_8_;
              lVar653 = lVar653 + auVar501._16_8_;
              lVar654 = lVar654 + auVar501._24_8_;
              auVar502._0_8_ = auVar502._0_8_ + 0x10;
            } while (uVar474 != auVar502._0_8_);
            auVar645._0_8_ = lVar542 + lVar529 + lVar530 + lVar482;
            auVar645._8_8_ = lVar602 + lVar544 + lVar545 + lVar528;
            auVar596._16_8_ = lVar653 + lVar608 + lVar600 + lVar541;
            auVar596._0_16_ = auVar645;
            auVar596._24_8_ = lVar654 + lVar609 + lVar601 + lVar543;
            auVar883 = vpaddq_avx(auVar645,auVar596._16_16_);
            auVar645 = vpshufd_avx(auVar883,0xee);
            auVar883 = vpaddq_avx(auVar883,auVar645);
            auVar501 = ZEXT1632(auVar883);
            auVar502._0_8_ = auVar883._0_8_;
            auVar596 = ZEXT1632(auVar883);
            if (uVar13 == uVar474) goto LAB_140dd0661;
          }
          auVar501 = auVar596;
          lVar482 = 0;
          do {
            bVar465 = puVar464[lVar482 + 1];
            uVar486 = 0x100 - bVar465;
            if (-1 < (char)bVar465) {
              uVar486 = (uint)bVar465;
            }
            auVar502._0_8_ = auVar502._0_8_ + uVar486;
            lVar482 = lVar482 + 1;
          } while (uVar13 - uVar474 != lVar482);
        }
      }
    }
    else {
      bVar466 = bVar466 & -bVar466;
      auVar502._0_8_ = 0xfffffffffffffeff;
    }
LAB_140dd0661:
    uVar486 = bVar610 + 7 >> 3;
    uVar474 = (ulonglong)uVar486;
    if (bVar466 == 0x10) {
      puVar464 = param_1->try_row;
      *puVar464 = '\x01';
      pauVar468 = (undefined1 (*) [32])(puVar464 + 1);
      pauVar2 = (undefined1 (*) [32])(puVar469 + 1);
      pauVar471 = pauVar2;
      if (bVar610 != 0) {
        if (bVar610 < 0xf9) {
          auVar511._0_8_ = 0;
        }
        else {
          auVar511._0_8_ = (ulonglong)(uVar486 & 0xffffffe0);
          pauVar471 = (undefined1 (*) [32])(*pauVar2 + auVar511._0_8_);
          auVar501 = *pauVar2;
          *pauVar468 = auVar501;
          pauVar468 = (undefined1 (*) [32])(*pauVar468 + auVar511._0_8_);
          if (auVar511._0_8_ == uVar474) goto LAB_140dd0712;
        }
        lVar482 = uVar474 - auVar511._0_8_;
        do {
          (*pauVar468)[0] = (*pauVar471)[0];
          pauVar468 = (undefined1 (*) [32])(*pauVar468 + 1);
          pauVar471 = (undefined1 (*) [32])(*pauVar471 + 1);
          lVar482 = lVar482 + -1;
        } while (lVar482 != 0);
      }
LAB_140dd0712:
      auVar511._0_8_ = uVar13 - uVar474;
      if (uVar474 <= uVar13 && auVar511._0_8_ != 0) {
        auVar503._0_8_ = uVar474;
        auVar596 = auVar501;
        if (0xf < auVar511._0_8_) {
          if (auVar511._0_8_ < 0x40) {
            auVar503._0_8_ = 0;
          }
          else {
            auVar503._0_8_ = auVar511._0_8_ & 0xffffffffffffffc0;
            auVar579._0_8_ = 0;
            do {
              auVar501 = vpsubb_avx2(*(undefined1 (*) [32])(*pauVar471 + auVar579._0_8_),
                                     *(undefined1 (*) [32])(puVar469 + auVar579._0_8_ + 1));
              auVar596 = vpsubb_avx2(*(undefined1 (*) [32])(pauVar471[1] + auVar579._0_8_),
                                     *(undefined1 (*) [32])(puVar469 + auVar579._0_8_ + 0x21));
              *(undefined1 (*) [32])(*pauVar468 + auVar579._0_8_) = auVar501;
              *(undefined1 (*) [32])(pauVar468[1] + auVar579._0_8_) = auVar596;
              auVar579._0_8_ = auVar579._0_8_ + 0x40;
            } while (auVar503._0_8_ != auVar579._0_8_);
            if (auVar511._0_8_ == auVar503._0_8_) goto LAB_140dd09b6;
            if ((auVar511._0_8_ & 0x30) == 0) {
              pauVar471 = (undefined1 (*) [32])(*pauVar471 + auVar503._0_8_);
              pauVar468 = (undefined1 (*) [32])(*pauVar468 + auVar503._0_8_);
              puVar469 = puVar469 + auVar503._0_8_;
              auVar503._0_8_ = uVar474 | auVar503._0_8_;
              auVar596 = auVar501;
              goto LAB_140dd0997;
            }
          }
          auVar579._0_8_ = auVar511._0_8_ & 0xfffffffffffffff0;
          puVar469 = puVar469 + auVar579._0_8_;
          do {
            auVar883 = vpsubb_avx(*(undefined1 (*) [16])(*pauVar471 + auVar503._0_8_),
                                  *(undefined1 (*) [16])(*pauVar2 + auVar503._0_8_));
            auVar501 = ZEXT1632(auVar883);
            *(undefined1 (*) [16])(*pauVar468 + auVar503._0_8_) = auVar883;
            auVar503._0_8_ = auVar503._0_8_ + 0x10;
          } while (auVar579._0_8_ != auVar503._0_8_);
          pauVar468 = (undefined1 (*) [32])(*pauVar468 + auVar579._0_8_);
          pauVar471 = (undefined1 (*) [32])(*pauVar471 + auVar579._0_8_);
          auVar503._0_8_ = auVar579._0_8_ + uVar474;
          auVar596 = ZEXT1632(auVar883);
          if (auVar511._0_8_ == auVar579._0_8_) goto LAB_140dd09b6;
        }
LAB_140dd0997:
        auVar501 = auVar596;
        lVar482 = 0;
        do {
          (*pauVar468)[lVar482] = (*pauVar471)[lVar482] - puVar469[lVar482 + 1];
          lVar482 = lVar482 + 1;
        } while (uVar13 - auVar503._0_8_ != lVar482);
      }
LAB_140dd09b6:
      puVar469 = param_1->try_row;
    }
    else if ((bVar466 & 0x10) != 0) {
      puVar464 = param_1->try_row;
      *puVar464 = '\x01';
      pbVar472 = puVar464 + 1;
      pbVar488 = puVar469 + 1;
      if (bVar610 == 0) {
        auVar511._0_8_ = 0;
      }
      else {
        if (bVar610 < 0x79) {
          auVar511._0_8_ = 0;
          auVar503._0_8_ = 0;
          auVar596 = auVar501;
        }
        else {
          auVar503._0_8_ = (ulonglong)(uVar486 & 0xfffffff0);
          uVar476 = *(uint *)(puVar469 + 1);
          uVar477 = *(uint *)(puVar469 + 5);
          uVar871 = *(uint *)(puVar469 + 9);
          uVar875 = *(uint *)(puVar469 + 0xd);
          uVar657 = *(undefined8 *)(puVar469 + 9);
          *(undefined8 *)(puVar464 + 1) = *(undefined8 *)(puVar469 + 1);
          *(undefined8 *)(puVar464 + 9) = uVar657;
          auVar591 = vpmovzxbd_avx(ZEXT416(uVar476));
          auVar1186 = vpmovzxbd_avx(ZEXT416(uVar477));
          auVar1634 = vpmovzxbd_avx(ZEXT416(uVar871));
          auVar20 = vpmovzxbd_avx(ZEXT416(uVar875));
          auVar644._4_4_ = __real_00000100;
          auVar644._0_4_ = __real_00000100;
          auVar644._8_4_ = __real_00000100;
          auVar644._12_4_ = __real_00000100;
          auVar16 = vpsubd_avx(auVar644,auVar591);
          auVar17 = vpsubd_avx(auVar644,auVar1186);
          auVar558 = vpsubd_avx(auVar644,auVar1634);
          auVar18 = vpsubd_avx(auVar644,auVar20);
          auVar883 = vpmovsxbd_avx(ZEXT416(uVar476));
          auVar645 = vpmovsxbd_avx(ZEXT416(uVar477));
          auVar1628 = vpmovsxbd_avx(ZEXT416(uVar871));
          auVar883 = vblendvps_avx(auVar591,auVar16,auVar883);
          auVar645 = vblendvps_avx(auVar1186,auVar17,auVar645);
          auVar1628 = vblendvps_avx(auVar1634,auVar558,auVar1628);
          auVar591 = vpmovsxbd_avx(ZEXT416(uVar875));
          auVar591 = vblendvps_avx(auVar20,auVar18,auVar591);
          auVar1186 = auVar883;
          auVar1634 = auVar645;
          auVar20 = auVar1628;
          auVar16 = auVar591;
          if (auVar503._0_8_ != 0x10) {
            uVar476 = *(uint *)(puVar469 + 0x11);
            uVar477 = *(uint *)(puVar469 + 0x15);
            uVar871 = *(uint *)(puVar469 + 0x19);
            uVar875 = *(uint *)(puVar469 + 0x1d);
            uVar657 = *(undefined8 *)(puVar469 + 0x19);
            *(undefined8 *)(puVar464 + 0x11) = *(undefined8 *)(puVar469 + 0x11);
            *(undefined8 *)(puVar464 + 0x19) = uVar657;
            auVar1634 = vpmovzxbd_avx(ZEXT416(uVar476));
            auVar558 = vpmovzxbd_avx(ZEXT416(uVar477));
            auVar18 = vpmovzxbd_avx(ZEXT416(uVar871));
            auVar499 = vpmovzxbd_avx(ZEXT416(uVar875));
            auVar19 = vpsubd_avx(auVar644,auVar1634);
            auVar559 = vpsubd_avx(auVar644,auVar558);
            auVar590 = vpsubd_avx(auVar644,auVar18);
            auVar644 = vpsubd_avx(auVar644,auVar499);
            auVar1186 = vpmovsxbd_avx(ZEXT416(uVar476));
            auVar20 = vpmovsxbd_avx(ZEXT416(uVar477));
            auVar16 = vpmovsxbd_avx(ZEXT416(uVar871));
            auVar17 = vpmovsxbd_avx(ZEXT416(uVar875));
            auVar1634 = vblendvps_avx(auVar1634,auVar19,auVar1186);
            auVar20 = vblendvps_avx(auVar558,auVar559,auVar20);
            auVar16 = vblendvps_avx(auVar18,auVar590,auVar16);
            auVar17 = vblendvps_avx(auVar499,auVar644,auVar17);
            auVar1186._0_4_ = auVar883._0_4_ + auVar1634._0_4_;
            auVar1186._4_4_ = auVar883._4_4_ + auVar1634._4_4_;
            auVar1186._8_4_ = auVar883._8_4_ + auVar1634._8_4_;
            auVar1186._12_4_ = auVar883._12_4_ + auVar1634._12_4_;
            auVar1634._0_4_ = auVar645._0_4_ + auVar20._0_4_;
            auVar1634._4_4_ = auVar645._4_4_ + auVar20._4_4_;
            auVar1634._8_4_ = auVar645._8_4_ + auVar20._8_4_;
            auVar1634._12_4_ = auVar645._12_4_ + auVar20._12_4_;
            auVar20._0_4_ = auVar1628._0_4_ + auVar16._0_4_;
            auVar20._4_4_ = auVar1628._4_4_ + auVar16._4_4_;
            auVar20._8_4_ = auVar1628._8_4_ + auVar16._8_4_;
            auVar20._12_4_ = auVar1628._12_4_ + auVar16._12_4_;
            auVar16._0_4_ = auVar591._0_4_ + auVar17._0_4_;
            auVar16._4_4_ = auVar591._4_4_ + auVar17._4_4_;
            auVar16._8_4_ = auVar591._8_4_ + auVar17._8_4_;
            auVar16._12_4_ = auVar591._12_4_ + auVar17._12_4_;
          }
          pbVar488 = pbVar488 + auVar503._0_8_;
          pbVar472 = pbVar472 + auVar503._0_8_;
          auVar501 = vpmovzxdq_avx2(auVar16);
          auVar596 = vpmovzxdq_avx2(auVar20);
          auVar25 = vpmovzxdq_avx2(auVar1634);
          auVar26 = vpmovzxdq_avx2(auVar1186);
          auVar1628._0_8_ = auVar25._0_8_ + auVar26._0_8_ + auVar596._0_8_ + auVar501._0_8_;
          auVar1628._8_8_ = auVar25._8_8_ + auVar26._8_8_ + auVar596._8_8_ + auVar501._8_8_;
          auVar597._16_8_ = auVar25._16_8_ + auVar26._16_8_ + auVar596._16_8_ + auVar501._16_8_;
          auVar597._0_16_ = auVar1628;
          auVar597._24_8_ = auVar25._24_8_ + auVar26._24_8_ + auVar596._24_8_ + auVar501._24_8_;
          auVar883 = vpaddq_avx(auVar1628,auVar597._16_16_);
          auVar645 = vpshufd_avx(auVar883,0xee);
          auVar883 = vpaddq_avx(auVar883,auVar645);
          auVar501 = ZEXT1632(auVar883);
          auVar511._0_8_ = auVar883._0_8_;
          auVar596 = ZEXT1632(auVar883);
          if ((uVar486 & 0xfffffff0) == uVar486) goto LAB_140dd08d5;
        }
        auVar501 = auVar596;
        lVar482 = uVar474 - auVar503._0_8_;
        do {
          bVar465 = *pbVar488;
          *pbVar472 = bVar465;
          uVar476 = 0x100 - bVar465;
          if (-1 < (char)bVar465) {
            uVar476 = (uint)bVar465;
          }
          auVar511._0_8_ = auVar511._0_8_ + uVar476;
          pbVar472 = pbVar472 + 1;
          pbVar488 = pbVar488 + 1;
          lVar482 = lVar482 + -1;
        } while (lVar482 != 0);
      }
LAB_140dd08d5:
      auVar503._0_8_ = uVar13 - uVar474;
      if (uVar474 <= uVar13 && auVar503._0_8_ != 0) {
        auVar579._0_8_ = uVar474;
        puVar464 = puVar469;
        auVar596 = auVar501;
        if (7 < auVar503._0_8_) {
          uVar485 = auVar503._0_8_ & 0xfffffffffffffff8;
          lVar530 = 0;
          lVar542 = 0;
          lVar545 = 0;
          lVar482 = 0;
          lVar529 = 0;
          lVar528 = 0;
          lVar544 = 0;
          auVar579._0_8_ = 0;
          auVar591._4_4_ = __real_00000100;
          auVar591._0_4_ = __real_00000100;
          auVar591._8_4_ = __real_00000100;
          auVar591._12_4_ = __real_00000100;
          do {
            auVar883 = vpsubb_avx(ZEXT416(*(uint *)(pbVar488 + auVar579._0_8_)),
                                  ZEXT416(*(uint *)(puVar469 + auVar579._0_8_ + 1)));
            auVar645 = vpsubb_avx(ZEXT416(*(uint *)(pbVar488 + auVar579._0_8_ + 4)),
                                  ZEXT416(*(uint *)(puVar469 + auVar579._0_8_ + 5)));
            *(int *)(pbVar472 + auVar579._0_8_) = auVar883._0_4_;
            *(int *)(pbVar472 + auVar579._0_8_ + 4) = auVar645._0_4_;
            auVar1628 = vpmovzxbd_avx(auVar883);
            auVar1186 = vpmovzxbd_avx(auVar645);
            auVar1634 = vpsubd_avx(auVar591,auVar1628);
            auVar20 = vpsubd_avx(auVar591,auVar1186);
            auVar883 = vpmovsxbd_avx(auVar883);
            auVar645 = vpmovsxbd_avx(auVar645);
            auVar883 = vblendvps_avx(auVar1628,auVar1634,auVar883);
            auVar645 = vblendvps_avx(auVar1186,auVar20,auVar645);
            auVar501 = vpmovzxdq_avx2(auVar883);
            auVar511._0_8_ = auVar511._0_8_ + auVar501._0_8_;
            lVar530 = lVar530 + auVar501._8_8_;
            lVar542 = lVar542 + auVar501._16_8_;
            lVar545 = lVar545 + auVar501._24_8_;
            auVar501 = vpmovzxdq_avx2(auVar645);
            lVar482 = lVar482 + auVar501._0_8_;
            lVar529 = lVar529 + auVar501._8_8_;
            lVar528 = lVar528 + auVar501._16_8_;
            lVar544 = lVar544 + auVar501._24_8_;
            auVar579._0_8_ = auVar579._0_8_ + 8;
          } while (uVar485 != auVar579._0_8_);
          auVar17._0_8_ = lVar482 + auVar511._0_8_;
          auVar17._8_8_ = lVar529 + lVar530;
          auVar25._16_8_ = lVar528 + lVar542;
          auVar25._0_16_ = auVar17;
          auVar25._24_8_ = lVar544 + lVar545;
          auVar883 = vpaddq_avx(auVar17,auVar25._16_16_);
          auVar645 = vpshufd_avx(auVar883,0xee);
          auVar883 = vpaddq_avx(auVar883,auVar645);
          auVar501 = ZEXT1632(auVar883);
          auVar511._0_8_ = auVar883._0_8_;
          auVar579._0_8_ = uVar474 + uVar485;
          puVar464 = puVar469 + uVar485;
          pbVar472 = pbVar472 + uVar485;
          pbVar488 = pbVar488 + uVar485;
          auVar596 = ZEXT1632(auVar883);
          if (auVar503._0_8_ == uVar485) goto LAB_140dd109c;
        }
        auVar501 = auVar596;
        lVar482 = 0;
        do {
          bVar465 = pbVar488[lVar482] - puVar464[lVar482 + 1];
          uVar476 = 0x100 - bVar465;
          if (-1 < (char)bVar465) {
            uVar476 = (uint)bVar465;
          }
          pbVar472[lVar482] = bVar465;
          auVar511._0_8_ = auVar511._0_8_ + uVar476;
          lVar482 = lVar482 + 1;
        } while (uVar13 - auVar579._0_8_ != lVar482);
      }
LAB_140dd109c:
      if (auVar511._0_8_ < auVar502._0_8_) {
        puVar469 = param_1->try_row;
        auVar502._0_8_ = auVar511._0_8_;
        if (param_1->tst_row != (uchar *)0x0) {
          param_1->try_row = param_1->tst_row;
          param_1->tst_row = puVar469;
        }
      }
    }
    if (bVar466 == 0x20) {
      puVar469 = param_1->try_row;
      *puVar469 = '\x02';
      if (uVar13 != 0) {
        puVar464 = param_1->prev_row;
        puVar484 = param_1->row_buf;
        if (uVar13 < 0x10) {
          auVar511._0_8_ = 0;
          auVar596 = auVar501;
        }
        else {
          if (uVar13 < 0x40) {
            auVar503._0_8_ = 0;
          }
          else {
            auVar511._0_8_ = uVar13 & 0xffffffffffffffc0;
            auVar503._0_8_ = 0;
            do {
              auVar501 = vpsubb_avx2(*(undefined1 (*) [32])(puVar484 + auVar503._0_8_ + 1),
                                     *(undefined1 (*) [32])(puVar464 + auVar503._0_8_ + 1));
              auVar596 = vpsubb_avx2(*(undefined1 (*) [32])(puVar484 + auVar503._0_8_ + 0x21),
                                     *(undefined1 (*) [32])(puVar464 + auVar503._0_8_ + 0x21));
              *(undefined1 (*) [32])(puVar469 + auVar503._0_8_ + 1) = auVar501;
              *(undefined1 (*) [32])(puVar469 + auVar503._0_8_ + 0x21) = auVar596;
              auVar503._0_8_ = auVar503._0_8_ + 0x40;
            } while (auVar511._0_8_ != auVar503._0_8_);
            if (uVar13 == auVar511._0_8_) goto LAB_140dd0dc8;
            auVar503._0_8_ = auVar511._0_8_;
            if ((uVar13 & 0x30) == 0) {
              puVar484 = puVar484 + auVar511._0_8_;
              puVar469 = puVar469 + auVar511._0_8_;
              puVar464 = puVar464 + auVar511._0_8_;
              auVar596 = auVar501;
              goto LAB_140dd0da6;
            }
          }
          auVar511._0_8_ = uVar13 & 0xfffffffffffffff0;
          do {
            auVar883 = vpsubb_avx(*(undefined1 (*) [16])(puVar484 + auVar503._0_8_ + 1),
                                  *(undefined1 (*) [16])(puVar464 + auVar503._0_8_ + 1));
            auVar501 = ZEXT1632(auVar883);
            *(undefined1 (*) [16])(puVar469 + auVar503._0_8_ + 1) = auVar883;
            auVar503._0_8_ = auVar503._0_8_ + 0x10;
          } while (auVar511._0_8_ != auVar503._0_8_);
          puVar484 = puVar484 + auVar511._0_8_;
          puVar469 = puVar469 + auVar511._0_8_;
          puVar464 = puVar464 + auVar511._0_8_;
          auVar596 = ZEXT1632(auVar883);
          if (uVar13 == auVar511._0_8_) goto LAB_140dd0dc8;
        }
LAB_140dd0da6:
        auVar501 = auVar596;
        lVar482 = 0;
        do {
          puVar469[lVar482 + 1] = puVar484[lVar482 + 1] - puVar464[lVar482 + 1];
          lVar482 = lVar482 + 1;
        } while (uVar13 - auVar511._0_8_ != lVar482);
      }
LAB_140dd0dc8:
      puVar469 = param_1->try_row;
LAB_140dd0ddd:
      if ((bVar466 & 0x40) != 0) {
        puVar479 = param_1->try_row;
        *puVar479 = '\x03';
        puVar475 = param_1->prev_row;
        puVar480 = param_1->row_buf;
        pbVar472 = puVar479 + 1;
        pbVar488 = puVar475 + 1;
        puVar464 = puVar480 + 1;
        auVar511._0_8_ = 0;
        puVar484 = puVar464;
        if (bVar610 == 0) {
          auVar503._0_8_ = 0;
        }
        else {
          if (uVar486 - 1 < 7) {
            auVar503._0_8_ = 0;
            auVar596 = auVar501;
          }
          else {
            auVar579._0_8_ = (ulonglong)(uVar486 - 1) + 1;
            auVar511._0_8_ = auVar579._0_8_ & 0x1fffffff8;
            puVar484 = puVar464 + auVar511._0_8_;
            pbVar488 = pbVar488 + auVar511._0_8_;
            pbVar472 = pbVar472 + auVar511._0_8_;
            lVar482 = 0;
            lVar529 = 0;
            lVar528 = 0;
            lVar544 = 0;
            auVar503._0_8_ = 0;
            auVar559[1] = DAT_1531f2be0;
            auVar559[0] = DAT_1531f2be0;
            auVar559[2] = DAT_1531f2be0;
            auVar559[3] = DAT_1531f2be0;
            auVar559[4] = DAT_1531f2be0;
            auVar559[5] = DAT_1531f2be0;
            auVar559[6] = DAT_1531f2be0;
            auVar559[7] = DAT_1531f2be0;
            auVar559[8] = DAT_1531f2be0;
            auVar559[9] = DAT_1531f2be0;
            auVar559[10] = DAT_1531f2be0;
            auVar559[0xb] = DAT_1531f2be0;
            auVar559[0xc] = DAT_1531f2be0;
            auVar559[0xd] = DAT_1531f2be0;
            auVar559[0xe] = DAT_1531f2be0;
            auVar559[0xf] = DAT_1531f2be0;
            auVar590._4_4_ = __real_00000100;
            auVar590._0_4_ = __real_00000100;
            auVar590._8_4_ = __real_00000100;
            auVar590._12_4_ = __real_00000100;
            lVar530 = 0;
            lVar542 = 0;
            lVar545 = 0;
            lVar602 = 0;
            do {
              auVar883 = vpsrlw_avx(ZEXT416(*(uint *)(puVar475 + auVar503._0_8_ + 1)),1);
              auVar883 = vpand_avx(auVar883,auVar559);
              auVar645 = vpsubb_avx(ZEXT416(*(uint *)(puVar480 + auVar503._0_8_ + 1)),auVar883);
              auVar883 = vpsrlw_avx(ZEXT416(*(uint *)(puVar475 + auVar503._0_8_ + 5)),1);
              auVar883 = vpand_avx(auVar883,auVar559);
              auVar1186 = vpsubb_avx(ZEXT416(*(uint *)(puVar480 + auVar503._0_8_ + 5)),auVar883);
              *(int *)(puVar479 + auVar503._0_8_ + 1) = auVar645._0_4_;
              *(int *)(puVar479 + auVar503._0_8_ + 5) = auVar1186._0_4_;
              auVar1628 = vpmovzxbd_avx(auVar645);
              auVar591 = vpmovzxbd_avx(auVar1186);
              auVar1634 = vpsubd_avx(auVar590,auVar1628);
              auVar20 = vpsubd_avx(auVar590,auVar591);
              auVar883 = vpmovsxbd_avx(auVar645);
              auVar645 = vpmovsxbd_avx(auVar1186);
              auVar883 = vblendvps_avx(auVar1628,auVar1634,auVar883);
              auVar645 = vblendvps_avx(auVar591,auVar20,auVar645);
              auVar501 = vpmovzxdq_avx2(auVar883);
              lVar482 = lVar482 + auVar501._0_8_;
              lVar529 = lVar529 + auVar501._8_8_;
              lVar528 = lVar528 + auVar501._16_8_;
              lVar544 = lVar544 + auVar501._24_8_;
              auVar501 = vpmovzxdq_avx2(auVar645);
              lVar530 = lVar530 + auVar501._0_8_;
              lVar542 = lVar542 + auVar501._8_8_;
              lVar545 = lVar545 + auVar501._16_8_;
              lVar602 = lVar602 + auVar501._24_8_;
              auVar503._0_8_ = auVar503._0_8_ + 8;
            } while (auVar511._0_8_ != auVar503._0_8_);
            auVar21._0_8_ = lVar530 + lVar482;
            auVar21._8_8_ = lVar542 + lVar529;
            auVar28._16_8_ = lVar545 + lVar528;
            auVar28._0_16_ = auVar21;
            auVar28._24_8_ = lVar602 + lVar544;
            auVar883 = vpaddq_avx(auVar21,auVar28._16_16_);
            auVar645 = vpshufd_avx(auVar883,0xee);
            auVar883 = vpaddq_avx(auVar883,auVar645);
            auVar501 = ZEXT1632(auVar883);
            auVar503._0_8_ = auVar883._0_8_;
            auVar596 = ZEXT1632(auVar883);
            if (auVar579._0_8_ == auVar511._0_8_) goto LAB_140dd0f74;
          }
          auVar501 = auVar596;
          iVar481 = uVar486 - (int)auVar511._0_8_;
          do {
            bVar465 = *puVar484 - (*pbVar488 >> 1);
            *pbVar472 = bVar465;
            uVar476 = 0x100 - bVar465;
            if (-1 < (char)bVar465) {
              uVar476 = (uint)bVar465;
            }
            auVar503._0_8_ = auVar503._0_8_ + uVar476;
            pbVar472 = pbVar472 + 1;
            pbVar488 = pbVar488 + 1;
            puVar484 = puVar484 + 1;
            iVar481 = iVar481 + -1;
          } while (iVar481 != 0);
        }
LAB_140dd0f74:
        auVar511._0_8_ = uVar13 - uVar474;
        if (uVar474 <= uVar13 && auVar511._0_8_ != 0) {
          uVar476 = uVar486;
          auVar596 = auVar501;
          if ((3 < auVar511._0_8_) &&
             (~uVar474 + uVar13 >> 0x20 == 0 && (uint)(~uVar474 + uVar13) <= -uVar486 - 2)) {
            auVar579._0_8_ = auVar511._0_8_ & 0xfffffffffffffffc;
            puVar480 = puVar480 + auVar579._0_8_;
            auVar524 = ZEXT864(auVar503._0_8_);
            auVar503._0_8_ = 0;
            auVar565[1] = DAT_1531f2be0;
            auVar565[0] = DAT_1531f2be0;
            auVar565[2] = DAT_1531f2be0;
            auVar565[3] = DAT_1531f2be0;
            auVar565[4] = DAT_1531f2be0;
            auVar565[5] = DAT_1531f2be0;
            auVar565[6] = DAT_1531f2be0;
            auVar565[7] = DAT_1531f2be0;
            auVar565[8] = DAT_1531f2be0;
            auVar565[9] = DAT_1531f2be0;
            auVar565[10] = DAT_1531f2be0;
            auVar565[0xb] = DAT_1531f2be0;
            auVar565[0xc] = DAT_1531f2be0;
            auVar565[0xd] = DAT_1531f2be0;
            auVar565[0xe] = DAT_1531f2be0;
            auVar565[0xf] = DAT_1531f2be0;
            auVar595._4_4_ = __real_00000100;
            auVar595._0_4_ = __real_00000100;
            auVar595._8_4_ = __real_00000100;
            auVar595._12_4_ = __real_00000100;
            do {
              auVar883 = vpand_avx(ZEXT416(*(uint *)(puVar464 + auVar503._0_8_)),
                                   ZEXT416(*(uint *)(pbVar488 + auVar503._0_8_)));
              auVar645 = vpsrlw_avx(ZEXT416(*(uint *)(puVar464 + auVar503._0_8_) ^
                                            *(uint *)(pbVar488 + auVar503._0_8_)),1);
              auVar645 = vpand_avx(auVar645,auVar565);
              auVar14[0] = auVar883[0] + auVar645[0];
              auVar14[1] = auVar883[1] + auVar645[1];
              auVar14[2] = auVar883[2] + auVar645[2];
              auVar14[3] = auVar883[3] + auVar645[3];
              auVar14[4] = auVar883[4] + auVar645[4];
              auVar14[5] = auVar883[5] + auVar645[5];
              auVar14[6] = auVar883[6] + auVar645[6];
              auVar14[7] = auVar883[7] + auVar645[7];
              auVar14[8] = auVar883[8] + auVar645[8];
              auVar14[9] = auVar883[9] + auVar645[9];
              auVar14[10] = auVar883[10] + auVar645[10];
              auVar14[0xb] = auVar883[0xb] + auVar645[0xb];
              auVar14[0xc] = auVar883[0xc] + auVar645[0xc];
              auVar14[0xd] = auVar883[0xd] + auVar645[0xd];
              auVar14[0xe] = auVar883[0xe] + auVar645[0xe];
              auVar14[0xf] = auVar883[0xf] + auVar645[0xf];
              auVar883 = vpsubb_avx(ZEXT416(*(uint *)(puVar484 + auVar503._0_8_)),auVar14);
              *(int *)(pbVar472 + auVar503._0_8_) = auVar883._0_4_;
              auVar645 = vpmovzxbd_avx(auVar883);
              auVar1628 = vpsubd_avx(auVar595,auVar645);
              auVar883 = vpmovsxbd_avx(auVar883);
              auVar883 = vblendvps_avx(auVar645,auVar1628,auVar883);
              auVar501 = vpmovzxdq_avx2(auVar883);
              auVar24._0_8_ = auVar524._0_8_ + auVar501._0_8_;
              auVar24._8_8_ = auVar524._8_8_ + auVar501._8_8_;
              auVar29._16_8_ = auVar524._16_8_ + auVar501._16_8_;
              auVar29._0_16_ = auVar24;
              auVar29._24_8_ = auVar524._24_8_ + auVar501._24_8_;
              auVar524 = ZEXT3264(auVar29);
              auVar503._0_8_ = auVar503._0_8_ + 4;
            } while (auVar579._0_8_ != auVar503._0_8_);
            auVar883 = vpaddq_avx(auVar24,auVar29._16_16_);
            auVar645 = vpshufd_avx(auVar883,0xee);
            auVar883 = vpaddq_avx(auVar883,auVar645);
            auVar501 = ZEXT1632(auVar883);
            auVar503._0_8_ = auVar883._0_8_;
            pbVar488 = pbVar488 + auVar579._0_8_;
            pbVar472 = pbVar472 + auVar579._0_8_;
            puVar484 = puVar484 + auVar579._0_8_;
            uVar476 = uVar486 + (int)auVar579._0_8_;
            auVar596 = ZEXT1632(auVar883);
            if (auVar511._0_8_ == auVar579._0_8_) goto LAB_140dd11dd;
          }
          auVar501 = auVar596;
          lVar482 = 0;
          do {
            bVar465 = puVar484[lVar482] -
                      (char)((uint)puVar480[lVar482 + 1] + (uint)pbVar488[lVar482] >> 1);
            pbVar472[lVar482] = bVar465;
            uVar477 = 0x100 - bVar465;
            if (-1 < (char)bVar465) {
              uVar477 = (uint)bVar465;
            }
            auVar503._0_8_ = auVar503._0_8_ + uVar477;
            iVar481 = (int)lVar482;
            lVar482 = lVar482 + 1;
          } while (uVar476 + 1 + iVar481 < uVar13);
        }
LAB_140dd11dd:
        if (auVar503._0_8_ < auVar502._0_8_) {
          puVar469 = param_1->try_row;
          auVar502._0_8_ = auVar503._0_8_;
          if (param_1->tst_row != (uchar *)0x0) {
            param_1->try_row = param_1->tst_row;
            param_1->tst_row = puVar469;
          }
        }
      }
    }
    else {
      if ((bVar466 & 0x20) != 0) {
        puVar464 = param_1->try_row;
        *puVar464 = '\x02';
        if (uVar13 == 0) {
          auVar511._0_8_ = 0;
        }
        else {
          puVar484 = param_1->prev_row;
          puVar479 = param_1->row_buf;
          if (uVar13 < 8) {
            auVar511._0_8_ = 0;
            auVar503._0_8_ = 0;
            puVar475 = puVar479;
            puVar480 = puVar484;
            puVar487 = puVar464;
            auVar596 = auVar501;
          }
          else {
            auVar503._0_8_ = uVar13 & 0xfffffffffffffff8;
            puVar475 = puVar479 + auVar503._0_8_;
            puVar480 = puVar484 + auVar503._0_8_;
            puVar487 = puVar464 + auVar503._0_8_;
            lVar482 = 0;
            lVar529 = 0;
            lVar528 = 0;
            lVar544 = 0;
            auVar511._0_8_ = 0;
            auVar558._4_4_ = __real_00000100;
            auVar558._0_4_ = __real_00000100;
            auVar558._8_4_ = __real_00000100;
            auVar558._12_4_ = __real_00000100;
            lVar530 = 0;
            lVar542 = 0;
            lVar545 = 0;
            lVar602 = 0;
            do {
              auVar883 = vpsubb_avx(ZEXT416(*(uint *)(puVar479 + auVar511._0_8_ + 1)),
                                    ZEXT416(*(uint *)(puVar484 + auVar511._0_8_ + 1)));
              auVar645 = vpsubb_avx(ZEXT416(*(uint *)(puVar479 + auVar511._0_8_ + 5)),
                                    ZEXT416(*(uint *)(puVar484 + auVar511._0_8_ + 5)));
              *(int *)(puVar464 + auVar511._0_8_ + 1) = auVar883._0_4_;
              *(int *)(puVar464 + auVar511._0_8_ + 5) = auVar645._0_4_;
              auVar1628 = vpmovzxbd_avx(auVar883);
              auVar591 = vpmovzxbd_avx(auVar645);
              auVar1186 = vpsubd_avx(auVar558,auVar1628);
              auVar1634 = vpsubd_avx(auVar558,auVar591);
              auVar883 = vpmovsxbd_avx(auVar883);
              auVar645 = vpmovsxbd_avx(auVar645);
              auVar883 = vblendvps_avx(auVar1628,auVar1186,auVar883);
              auVar645 = vblendvps_avx(auVar591,auVar1634,auVar645);
              auVar501 = vpmovzxdq_avx2(auVar883);
              lVar482 = lVar482 + auVar501._0_8_;
              lVar529 = lVar529 + auVar501._8_8_;
              lVar528 = lVar528 + auVar501._16_8_;
              lVar544 = lVar544 + auVar501._24_8_;
              auVar501 = vpmovzxdq_avx2(auVar645);
              lVar530 = lVar530 + auVar501._0_8_;
              lVar542 = lVar542 + auVar501._8_8_;
              lVar545 = lVar545 + auVar501._16_8_;
              lVar602 = lVar602 + auVar501._24_8_;
              auVar511._0_8_ = auVar511._0_8_ + 8;
            } while (auVar503._0_8_ != auVar511._0_8_);
            auVar18._0_8_ = lVar530 + lVar482;
            auVar18._8_8_ = lVar542 + lVar529;
            auVar26._16_8_ = lVar545 + lVar528;
            auVar26._0_16_ = auVar18;
            auVar26._24_8_ = lVar602 + lVar544;
            auVar883 = vpaddq_avx(auVar18,auVar26._16_16_);
            auVar645 = vpshufd_avx(auVar883,0xee);
            auVar883 = vpaddq_avx(auVar883,auVar645);
            auVar501 = ZEXT1632(auVar883);
            auVar511._0_8_ = auVar883._0_8_;
            auVar596 = ZEXT1632(auVar883);
            if (uVar13 == auVar503._0_8_) goto LAB_140dd0b4f;
          }
          auVar501 = auVar596;
          lVar482 = 0;
          do {
            bVar465 = puVar475[lVar482 + 1] - puVar480[lVar482 + 1];
            uVar476 = 0x100 - bVar465;
            if (-1 < (char)bVar465) {
              uVar476 = (uint)bVar465;
            }
            puVar487[lVar482 + 1] = bVar465;
            auVar511._0_8_ = auVar511._0_8_ + uVar476;
            lVar482 = lVar482 + 1;
          } while (uVar13 - auVar503._0_8_ != lVar482);
        }
LAB_140dd0b4f:
        if (auVar511._0_8_ < auVar502._0_8_) {
          puVar469 = param_1->try_row;
          auVar502._0_8_ = auVar511._0_8_;
          if (param_1->tst_row != (uchar *)0x0) {
            param_1->try_row = param_1->tst_row;
            param_1->tst_row = puVar469;
          }
        }
      }
      if (bVar466 != 0x40) goto LAB_140dd0ddd;
      puVar464 = param_1->try_row;
      *puVar464 = '\x03';
      puVar484 = param_1->row_buf;
      puVar464 = puVar464 + 1;
      pbVar472 = param_1->prev_row + 1;
      puVar469 = puVar484 + 1;
      puVar479 = puVar469;
      if (bVar610 != 0) {
        auVar511._0_8_ = 0;
        if (0x1e < uVar486 - 1) {
          auVar579._0_8_ = (ulonglong)(uVar486 - 1) + 1;
          auVar511._0_8_ = auVar579._0_8_ & 0xffffffffffffffe0;
          pbVar488 = pbVar472 + auVar511._0_8_;
          puVar479 = puVar464 + auVar511._0_8_;
          auVar503._0_8_ = 0;
          auVar501[1] = DAT_1531f2be0;
          auVar501[0] = DAT_1531f2be0;
          auVar501[2] = DAT_1531f2be0;
          auVar501[3] = DAT_1531f2be0;
          auVar501[4] = DAT_1531f2be0;
          auVar501[5] = DAT_1531f2be0;
          auVar501[6] = DAT_1531f2be0;
          auVar501[7] = DAT_1531f2be0;
          auVar501[8] = DAT_1531f2be0;
          auVar501[9] = DAT_1531f2be0;
          auVar501[10] = DAT_1531f2be0;
          auVar501[0xb] = DAT_1531f2be0;
          auVar501[0xc] = DAT_1531f2be0;
          auVar501[0xd] = DAT_1531f2be0;
          auVar501[0xe] = DAT_1531f2be0;
          auVar501[0xf] = DAT_1531f2be0;
          auVar501[0x10] = DAT_1531f2be0;
          auVar501[0x11] = DAT_1531f2be0;
          auVar501[0x12] = DAT_1531f2be0;
          auVar501[0x13] = DAT_1531f2be0;
          auVar501[0x14] = DAT_1531f2be0;
          auVar501[0x15] = DAT_1531f2be0;
          auVar501[0x16] = DAT_1531f2be0;
          auVar501[0x17] = DAT_1531f2be0;
          auVar501[0x18] = DAT_1531f2be0;
          auVar501[0x19] = DAT_1531f2be0;
          auVar501[0x1a] = DAT_1531f2be0;
          auVar501[0x1b] = DAT_1531f2be0;
          auVar501[0x1c] = DAT_1531f2be0;
          auVar501[0x1d] = DAT_1531f2be0;
          auVar501[0x1e] = DAT_1531f2be0;
          auVar501[0x1f] = DAT_1531f2be0;
          do {
            auVar596 = vpsrlw_avx2(*(undefined1 (*) [32])(pbVar472 + auVar503._0_8_),1);
            auVar596 = vpand_avx2(auVar596,auVar501);
            auVar596 = vpsubb_avx2(*(undefined1 (*) [32])(puVar469 + auVar503._0_8_),auVar596);
            *(undefined1 (*) [32])(puVar464 + auVar503._0_8_) = auVar596;
            auVar503._0_8_ = auVar503._0_8_ + 0x20;
          } while (auVar511._0_8_ != auVar503._0_8_);
          puVar464 = puVar479;
          puVar479 = puVar469 + auVar511._0_8_;
          pbVar472 = pbVar488;
          if (auVar579._0_8_ == auVar511._0_8_) goto LAB_140dd0c6e;
        }
        iVar481 = uVar486 - (int)auVar511._0_8_;
        do {
          *puVar464 = *puVar479 - (*pbVar472 >> 1);
          puVar464 = puVar464 + 1;
          pbVar472 = pbVar472 + 1;
          puVar479 = puVar479 + 1;
          iVar481 = iVar481 + -1;
        } while (iVar481 != 0);
      }
LAB_140dd0c6e:
      auVar511._0_8_ = uVar13 - uVar474;
      if (uVar474 <= uVar13 && auVar511._0_8_ != 0) {
        uVar476 = uVar486;
        auVar596 = auVar501;
        if ((0xf < auVar511._0_8_) &&
           (~uVar474 + uVar13 >> 0x20 == 0 && (uint)(~uVar474 + uVar13) <= -uVar486 - 2)) {
          if (auVar511._0_8_ < 0x20) {
            auVar579._0_8_ = 0;
          }
          else {
            auVar579._0_8_ = auVar511._0_8_ & 0xffffffffffffffe0;
            auVar503._0_8_ = 0;
            auVar501[1] = DAT_1531f2be0;
            auVar501[0] = DAT_1531f2be0;
            auVar501[2] = DAT_1531f2be0;
            auVar501[3] = DAT_1531f2be0;
            auVar501[4] = DAT_1531f2be0;
            auVar501[5] = DAT_1531f2be0;
            auVar501[6] = DAT_1531f2be0;
            auVar501[7] = DAT_1531f2be0;
            auVar501[8] = DAT_1531f2be0;
            auVar501[9] = DAT_1531f2be0;
            auVar501[10] = DAT_1531f2be0;
            auVar501[0xb] = DAT_1531f2be0;
            auVar501[0xc] = DAT_1531f2be0;
            auVar501[0xd] = DAT_1531f2be0;
            auVar501[0xe] = DAT_1531f2be0;
            auVar501[0xf] = DAT_1531f2be0;
            auVar501[0x10] = DAT_1531f2be0;
            auVar501[0x11] = DAT_1531f2be0;
            auVar501[0x12] = DAT_1531f2be0;
            auVar501[0x13] = DAT_1531f2be0;
            auVar501[0x14] = DAT_1531f2be0;
            auVar501[0x15] = DAT_1531f2be0;
            auVar501[0x16] = DAT_1531f2be0;
            auVar501[0x17] = DAT_1531f2be0;
            auVar501[0x18] = DAT_1531f2be0;
            auVar501[0x19] = DAT_1531f2be0;
            auVar501[0x1a] = DAT_1531f2be0;
            auVar501[0x1b] = DAT_1531f2be0;
            auVar501[0x1c] = DAT_1531f2be0;
            auVar501[0x1d] = DAT_1531f2be0;
            auVar501[0x1e] = DAT_1531f2be0;
            auVar501[0x1f] = DAT_1531f2be0;
            do {
              auVar596 = vpand_avx2(*(undefined1 (*) [32])(puVar469 + auVar503._0_8_),
                                    *(undefined1 (*) [32])(pbVar472 + auVar503._0_8_));
              auVar597 = vpsrlw_avx2(*(undefined1 (*) [32])(puVar469 + auVar503._0_8_) ^
                                     *(undefined1 (*) [32])(pbVar472 + auVar503._0_8_),1);
              auVar597 = vpand_avx2(auVar597,auVar501);
              auVar27[0] = auVar596[0] + auVar597[0];
              auVar27[1] = auVar596[1] + auVar597[1];
              auVar27[2] = auVar596[2] + auVar597[2];
              auVar27[3] = auVar596[3] + auVar597[3];
              auVar27[4] = auVar596[4] + auVar597[4];
              auVar27[5] = auVar596[5] + auVar597[5];
              auVar27[6] = auVar596[6] + auVar597[6];
              auVar27[7] = auVar596[7] + auVar597[7];
              auVar27[8] = auVar596[8] + auVar597[8];
              auVar27[9] = auVar596[9] + auVar597[9];
              auVar27[10] = auVar596[10] + auVar597[10];
              auVar27[0xb] = auVar596[0xb] + auVar597[0xb];
              auVar27[0xc] = auVar596[0xc] + auVar597[0xc];
              auVar27[0xd] = auVar596[0xd] + auVar597[0xd];
              auVar27[0xe] = auVar596[0xe] + auVar597[0xe];
              auVar27[0xf] = auVar596[0xf] + auVar597[0xf];
              auVar27[0x10] = auVar596[0x10] + auVar597[0x10];
              auVar27[0x11] = auVar596[0x11] + auVar597[0x11];
              auVar27[0x12] = auVar596[0x12] + auVar597[0x12];
              auVar27[0x13] = auVar596[0x13] + auVar597[0x13];
              auVar27[0x14] = auVar596[0x14] + auVar597[0x14];
              auVar27[0x15] = auVar596[0x15] + auVar597[0x15];
              auVar27[0x16] = auVar596[0x16] + auVar597[0x16];
              auVar27[0x17] = auVar596[0x17] + auVar597[0x17];
              auVar27[0x18] = auVar596[0x18] + auVar597[0x18];
              auVar27[0x19] = auVar596[0x19] + auVar597[0x19];
              auVar27[0x1a] = auVar596[0x1a] + auVar597[0x1a];
              auVar27[0x1b] = auVar596[0x1b] + auVar597[0x1b];
              auVar27[0x1c] = auVar596[0x1c] + auVar597[0x1c];
              auVar27[0x1d] = auVar596[0x1d] + auVar597[0x1d];
              auVar27[0x1e] = auVar596[0x1e] + auVar597[0x1e];
              auVar27[0x1f] = auVar596[0x1f] + auVar597[0x1f];
              auVar596 = vpsubb_avx2(*(undefined1 (*) [32])(puVar479 + auVar503._0_8_),auVar27);
              *(undefined1 (*) [32])(puVar464 + auVar503._0_8_) = auVar596;
              auVar503._0_8_ = auVar503._0_8_ + 0x20;
            } while (auVar579._0_8_ != auVar503._0_8_);
            if (auVar511._0_8_ == auVar579._0_8_) goto LAB_140dd0cf7;
            if ((auVar511._0_8_ & 0x10) == 0) {
              puVar479 = puVar479 + auVar579._0_8_;
              puVar464 = puVar464 + auVar579._0_8_;
              pbVar472 = pbVar472 + auVar579._0_8_;
              puVar484 = puVar484 + auVar579._0_8_;
              uVar476 = (int)auVar579._0_8_ + uVar486;
              auVar596 = auVar501;
              goto LAB_140dd0cbe;
            }
          }
          auVar503._0_8_ = auVar511._0_8_ & 0xfffffffffffffff0;
          puVar484 = puVar484 + auVar503._0_8_;
          auVar499[1] = DAT_1531f2be0;
          auVar499[0] = DAT_1531f2be0;
          auVar499[2] = DAT_1531f2be0;
          auVar499[3] = DAT_1531f2be0;
          auVar499[4] = DAT_1531f2be0;
          auVar499[5] = DAT_1531f2be0;
          auVar499[6] = DAT_1531f2be0;
          auVar499[7] = DAT_1531f2be0;
          auVar499[8] = DAT_1531f2be0;
          auVar499[9] = DAT_1531f2be0;
          auVar499[10] = DAT_1531f2be0;
          auVar499[0xb] = DAT_1531f2be0;
          auVar499[0xc] = DAT_1531f2be0;
          auVar499[0xd] = DAT_1531f2be0;
          auVar499[0xe] = DAT_1531f2be0;
          auVar499[0xf] = DAT_1531f2be0;
          auVar501 = ZEXT1632(auVar499);
          do {
            auVar883 = vpand_avx(*(undefined1 (*) [16])(puVar469 + auVar579._0_8_),
                                 *(undefined1 (*) [16])(pbVar472 + auVar579._0_8_));
            auVar645 = vpsrlw_avx(*(undefined1 (*) [16])(puVar469 + auVar579._0_8_) ^
                                  *(undefined1 (*) [16])(pbVar472 + auVar579._0_8_),1);
            auVar645 = vpand_avx(auVar645,auVar499);
            auVar19[0] = auVar883[0] + auVar645[0];
            auVar19[1] = auVar883[1] + auVar645[1];
            auVar19[2] = auVar883[2] + auVar645[2];
            auVar19[3] = auVar883[3] + auVar645[3];
            auVar19[4] = auVar883[4] + auVar645[4];
            auVar19[5] = auVar883[5] + auVar645[5];
            auVar19[6] = auVar883[6] + auVar645[6];
            auVar19[7] = auVar883[7] + auVar645[7];
            auVar19[8] = auVar883[8] + auVar645[8];
            auVar19[9] = auVar883[9] + auVar645[9];
            auVar19[10] = auVar883[10] + auVar645[10];
            auVar19[0xb] = auVar883[0xb] + auVar645[0xb];
            auVar19[0xc] = auVar883[0xc] + auVar645[0xc];
            auVar19[0xd] = auVar883[0xd] + auVar645[0xd];
            auVar19[0xe] = auVar883[0xe] + auVar645[0xe];
            auVar19[0xf] = auVar883[0xf] + auVar645[0xf];
            auVar883 = vpsubb_avx(*(undefined1 (*) [16])(puVar479 + auVar579._0_8_),auVar19);
            *(undefined1 (*) [16])(puVar464 + auVar579._0_8_) = auVar883;
            auVar579._0_8_ = auVar579._0_8_ + 0x10;
          } while (auVar503._0_8_ != auVar579._0_8_);
          puVar479 = puVar479 + auVar503._0_8_;
          pbVar472 = pbVar472 + auVar503._0_8_;
          puVar464 = puVar464 + auVar503._0_8_;
          uVar476 = uVar486 + (int)auVar503._0_8_;
          auVar596 = ZEXT1632(auVar499);
          if (auVar511._0_8_ == auVar503._0_8_) goto LAB_140dd0cf7;
        }
LAB_140dd0cbe:
        auVar501 = auVar596;
        lVar482 = 0;
        do {
          puVar464[lVar482] =
               puVar479[lVar482] -
               (char)((uint)puVar484[lVar482 + 1] + (uint)pbVar472[lVar482] >> 1);
          iVar481 = (int)lVar482;
          lVar482 = lVar482 + 1;
        } while (uVar476 + 1 + iVar481 < uVar13);
      }
LAB_140dd0cf7:
      puVar469 = param_1->try_row;
    }
    if (bVar466 != 0x80) {
      if (-1 < (char)bVar466) goto LAB_140dd1962;
      puVar479 = param_1->try_row;
      *puVar479 = '\x04';
      puVar475 = param_1->prev_row;
      puVar480 = param_1->row_buf;
      pbVar472 = puVar479 + 1;
      puVar464 = puVar475 + 1;
      puVar484 = puVar480 + 1;
      puVar487 = puVar464;
      puStack_118 = puVar484;
      if (bVar610 == 0) {
        auVar511._0_8_ = 0;
      }
      else {
        if (bVar610 < 0x39) {
          auVar511._0_8_ = 0;
          auVar503._0_8_ = 0;
        }
        else {
          uVar476 = uVar486 & 0xfffffff8;
          auVar503._0_8_ = (ulonglong)uVar476;
          auVar883 = vpsubb_avx(ZEXT416(*(uint *)(puVar480 + 1)),ZEXT416(*(uint *)(puVar475 + 1)));
          auVar591 = vpsubb_avx(ZEXT416(*(uint *)(puVar480 + 5)),ZEXT416(*(uint *)(puVar475 + 5)));
          *(int *)(puVar479 + 1) = auVar883._0_4_;
          *(int *)(puVar479 + 5) = auVar591._0_4_;
          auVar645 = vpmovzxbd_avx(auVar883);
          auVar1628 = vpmovzxbd_avx(auVar591);
          auVar593._4_4_ = __real_00000100;
          auVar593._0_4_ = __real_00000100;
          auVar593._8_4_ = __real_00000100;
          auVar593._12_4_ = __real_00000100;
          auVar1186 = vpsubd_avx(auVar593,auVar645);
          auVar1634 = vpsubd_avx(auVar593,auVar1628);
          auVar883 = vpmovsxbd_avx(auVar883);
          auVar883 = vblendvps_avx(auVar645,auVar1186,auVar883);
          auVar645 = vpmovsxbd_avx(auVar591);
          auVar645 = vblendvps_avx(auVar1628,auVar1634,auVar645);
          auVar560 = auVar645;
          auVar500 = auVar883;
          if (auVar503._0_8_ != 8) {
            auVar1628 = vpsubb_avx(ZEXT416(*(uint *)(puVar480 + 9)),ZEXT416(*(uint *)(puVar475 + 9))
                                  );
            auVar1634 = vpsubb_avx(ZEXT416(*(uint *)(puVar480 + 0xd)),
                                   ZEXT416(*(uint *)(puVar475 + 0xd)));
            *(int *)(puVar479 + 9) = auVar1628._0_4_;
            auVar591 = vpmovzxbd_avx(auVar1628);
            auVar1186 = vpmovzxbd_avx(auVar1634);
            auVar20 = vpsubd_avx(auVar593,auVar591);
            auVar1628 = vpmovsxbd_avx(auVar1628);
            auVar1628 = vblendvps_avx(auVar591,auVar20,auVar1628);
            auVar20 = vpsubd_avx(auVar593,auVar1186);
            auVar591 = vpmovsxbd_avx(auVar1634);
            auVar591 = vblendvps_avx(auVar1186,auVar20,auVar591);
            *(int *)(puVar479 + 0xd) = auVar1634._0_4_;
            auVar500._0_4_ = auVar883._0_4_ + auVar1628._0_4_;
            auVar500._4_4_ = auVar883._4_4_ + auVar1628._4_4_;
            auVar500._8_4_ = auVar883._8_4_ + auVar1628._8_4_;
            auVar500._12_4_ = auVar883._12_4_ + auVar1628._12_4_;
            auVar560._0_4_ = auVar645._0_4_ + auVar591._0_4_;
            auVar560._4_4_ = auVar645._4_4_ + auVar591._4_4_;
            auVar560._8_4_ = auVar645._8_4_ + auVar591._8_4_;
            auVar560._12_4_ = auVar645._12_4_ + auVar591._12_4_;
            if (uVar476 != 0x10) {
              auVar883 = vpsubb_avx(ZEXT416(*(uint *)(puVar480 + 0x11)),
                                    ZEXT416(*(uint *)(puVar475 + 0x11)));
              auVar591 = vpsubb_avx(ZEXT416(*(uint *)(puVar480 + 0x15)),
                                    ZEXT416(*(uint *)(puVar475 + 0x15)));
              *(int *)(puVar479 + 0x11) = auVar883._0_4_;
              auVar645 = vpmovzxbd_avx(auVar883);
              auVar1628 = vpmovzxbd_avx(auVar591);
              auVar1186 = vpsubd_avx(auVar593,auVar645);
              auVar883 = vpmovsxbd_avx(auVar883);
              auVar883 = vblendvps_avx(auVar645,auVar1186,auVar883);
              auVar1186 = vpsubd_avx(auVar593,auVar1628);
              auVar645 = vpmovsxbd_avx(auVar591);
              auVar645 = vblendvps_avx(auVar1628,auVar1186,auVar645);
              *(int *)(puVar479 + 0x15) = auVar591._0_4_;
              auVar500._0_4_ = auVar500._0_4_ + auVar883._0_4_;
              auVar500._4_4_ = auVar500._4_4_ + auVar883._4_4_;
              auVar500._8_4_ = auVar500._8_4_ + auVar883._8_4_;
              auVar500._12_4_ = auVar500._12_4_ + auVar883._12_4_;
              auVar560._0_4_ = auVar560._0_4_ + auVar645._0_4_;
              auVar560._4_4_ = auVar560._4_4_ + auVar645._4_4_;
              auVar560._8_4_ = auVar560._8_4_ + auVar645._8_4_;
              auVar560._12_4_ = auVar560._12_4_ + auVar645._12_4_;
              if (uVar476 != 0x18) {
                auVar883 = vpsubb_avx(ZEXT416(*(uint *)(puVar480 + 0x19)),
                                      ZEXT416(*(uint *)(puVar475 + 0x19)));
                auVar645 = vpsubb_avx(ZEXT416(*(uint *)(puVar480 + 0x1d)),
                                      ZEXT416(*(uint *)(puVar475 + 0x1d)));
                *(int *)(puVar479 + 0x19) = auVar883._0_4_;
                *(int *)(puVar479 + 0x1d) = auVar645._0_4_;
                auVar1628 = vpmovzxbd_avx(auVar883);
                auVar591 = vpmovzxbd_avx(auVar645);
                auVar1186 = vpsubd_avx(auVar593,auVar1628);
                auVar1634 = vpsubd_avx(auVar593,auVar591);
                auVar883 = vpmovsxbd_avx(auVar883);
                auVar645 = vpmovsxbd_avx(auVar645);
                auVar883 = vblendvps_avx(auVar1628,auVar1186,auVar883);
                auVar645 = vblendvps_avx(auVar591,auVar1634,auVar645);
                auVar500._0_4_ = auVar500._0_4_ + auVar883._0_4_;
                auVar500._4_4_ = auVar500._4_4_ + auVar883._4_4_;
                auVar500._8_4_ = auVar500._8_4_ + auVar883._8_4_;
                auVar500._12_4_ = auVar500._12_4_ + auVar883._12_4_;
                auVar560._0_4_ = auVar560._0_4_ + auVar645._0_4_;
                auVar560._4_4_ = auVar560._4_4_ + auVar645._4_4_;
                auVar560._8_4_ = auVar560._8_4_ + auVar645._8_4_;
                auVar560._12_4_ = auVar560._12_4_ + auVar645._12_4_;
              }
            }
          }
          puStack_118 = puVar484 + auVar503._0_8_;
          puVar487 = puVar464 + auVar503._0_8_;
          pbVar472 = pbVar472 + auVar503._0_8_;
          auVar501 = vpmovzxdq_avx2(auVar560);
          auVar596 = vpmovzxdq_avx2(auVar500);
          auVar22._0_8_ = auVar501._0_8_ + auVar596._0_8_;
          auVar22._8_8_ = auVar501._8_8_ + auVar596._8_8_;
          auVar30._16_8_ = auVar501._16_8_ + auVar596._16_8_;
          auVar30._0_16_ = auVar22;
          auVar30._24_8_ = auVar501._24_8_ + auVar596._24_8_;
          auVar883 = vpaddq_avx(auVar22,auVar30._16_16_);
          auVar645 = vpshufd_avx(auVar883,0xee);
          auVar883 = vpaddq_avx(auVar883,auVar645);
          auVar511._0_8_ = auVar883._0_8_;
          if (uVar476 == uVar486) goto LAB_140dd170d;
        }
        lVar482 = uVar474 - auVar503._0_8_;
        do {
          bVar466 = *puStack_118 - *puVar487;
          *pbVar472 = bVar466;
          uVar486 = 0x100 - bVar466;
          if (-1 < (char)bVar466) {
            uVar486 = (uint)bVar466;
          }
          auVar511._0_8_ = auVar511._0_8_ + uVar486;
          pbVar472 = pbVar472 + 1;
          puVar487 = puVar487 + 1;
          puStack_118 = puStack_118 + 1;
          lVar482 = lVar482 + -1;
        } while (lVar482 != 0);
      }
LAB_140dd170d:
      auVar503._0_8_ = uVar13 - uVar474;
      if (uVar474 <= uVar13 && auVar503._0_8_ != 0) {
        if (3 < auVar503._0_8_) {
          auVar579._0_8_ = auVar503._0_8_ & 0xfffffffffffffffc;
          puVar475 = puVar475 + auVar579._0_8_;
          puVar480 = puVar480 + auVar579._0_8_;
          uVar474 = uVar474 + auVar579._0_8_;
          auVar524 = ZEXT864(auVar511._0_8_);
          auVar511._0_8_ = 0;
          auVar564._4_4_ = __real_00000100;
          auVar564._0_4_ = __real_00000100;
          auVar564._8_4_ = __real_00000100;
          auVar564._12_4_ = __real_00000100;
          do {
            auVar883 = vpmovzxbd_avx(ZEXT416(*(uint *)(puVar487 + auVar511._0_8_)));
            auVar1628 = vpmovzxbd_avx(ZEXT416(*(uint *)(puVar464 + auVar511._0_8_)));
            auVar591 = vpmovzxbd_avx(ZEXT416(*(uint *)(puVar484 + auVar511._0_8_)));
            auVar645 = vpsubd_avx(auVar883,auVar1628);
            auVar1186 = vpsubd_avx(auVar591,auVar1628);
            auVar15._0_4_ = auVar1186._0_4_ + auVar645._0_4_;
            auVar15._4_4_ = auVar1186._4_4_ + auVar645._4_4_;
            auVar15._8_4_ = auVar1186._8_4_ + auVar645._8_4_;
            auVar15._12_4_ = auVar1186._12_4_ + auVar645._12_4_;
            auVar645 = vpminud_avx(auVar883,auVar1628);
            auVar883 = vpmaxud_avx(auVar883,auVar1628);
            auVar1186 = vpsubd_avx(auVar883,auVar645);
            auVar645 = vpminud_avx(auVar591,auVar1628);
            auVar883 = vpmaxud_avx(auVar591,auVar1628);
            auVar591 = vpsubd_avx(auVar883,auVar645);
            auVar883 = vpabsd_avx(auVar15);
            auVar1628 = vpminud_avx(auVar591,auVar883);
            auVar645 = vpmaxud_avx(auVar1628,auVar1186);
            auVar645 = vpcmpeqd_avx(auVar1628,auVar645);
            auVar645 = vpackssdw_avx(auVar645,auVar645);
            auVar645 = vpacksswb_avx(auVar645,auVar645);
            auVar883 = vpcmpgtd_avx(auVar591,auVar883);
            auVar883 = vpackssdw_avx(auVar883,auVar883);
            auVar883 = vpacksswb_avx(auVar883,auVar883);
            auVar883 = vpblendvb_avx(ZEXT416(*(uint *)(puVar487 + auVar511._0_8_)),
                                     ZEXT416(*(uint *)(puVar464 + auVar511._0_8_)),auVar883);
            auVar883 = vpblendvb_avx(auVar883,ZEXT416(*(uint *)(puVar484 + auVar511._0_8_)),auVar645
                                    );
            auVar883 = vpsubb_avx(ZEXT416(*(uint *)(puStack_118 + auVar511._0_8_)),auVar883);
            *(int *)(pbVar472 + auVar511._0_8_) = auVar883._0_4_;
            auVar645 = vpmovzxbd_avx(auVar883);
            auVar1628 = vpsubd_avx(auVar564,auVar645);
            auVar883 = vpmovsxbd_avx(auVar883);
            auVar883 = vblendvps_avx(auVar645,auVar1628,auVar883);
            auVar501 = vpmovzxdq_avx2(auVar883);
            auVar23._0_8_ = auVar524._0_8_ + auVar501._0_8_;
            auVar23._8_8_ = auVar524._8_8_ + auVar501._8_8_;
            auVar31._16_8_ = auVar524._16_8_ + auVar501._16_8_;
            auVar31._0_16_ = auVar23;
            auVar31._24_8_ = auVar524._24_8_ + auVar501._24_8_;
            auVar524 = ZEXT3264(auVar31);
            auVar511._0_8_ = auVar511._0_8_ + 4;
          } while (auVar579._0_8_ != auVar511._0_8_);
          auVar883 = vpaddq_avx(auVar23,auVar31._16_16_);
          auVar645 = vpshufd_avx(auVar883,0xee);
          auVar883 = vpaddq_avx(auVar883,auVar645);
          auVar511._0_8_ = auVar883._0_8_;
          puVar487 = puVar487 + auVar579._0_8_;
          pbVar472 = pbVar472 + auVar579._0_8_;
          puStack_118 = puStack_118 + auVar579._0_8_;
          if (auVar503._0_8_ == auVar579._0_8_) goto LAB_140dd1baa;
        }
        lVar482 = 0;
        do {
          bVar466 = puVar475[lVar482 + 1];
          uVar476 = (uint)puVar487[lVar482] - (uint)bVar466;
          iVar481 = (uint)puVar480[lVar482 + 1] - (uint)bVar466;
          uVar486 = -uVar476;
          if ((int)-uVar476 < 0) {
            uVar486 = uVar476;
          }
          bVar610 = (byte)-iVar481;
          if (-iVar481 < 0) {
            bVar610 = (byte)iVar481;
          }
          uVar477 = -(iVar481 + uVar476);
          if ((int)uVar477 < 0) {
            uVar477 = iVar481 + uVar476;
          }
          if (bVar610 <= uVar477) {
            bVar466 = puVar487[lVar482];
          }
          bVar465 = puVar480[lVar482 + 1];
          if (uVar477 < (uVar486 & 0xff)) {
            bVar465 = bVar466;
          }
          if ((uint)bVar610 < (uVar486 & 0xff)) {
            bVar465 = bVar466;
          }
          bVar465 = puStack_118[lVar482] - bVar465;
          uVar486 = 0x100 - bVar465;
          if (-1 < (char)bVar465) {
            uVar486 = (uint)bVar465;
          }
          pbVar472[lVar482] = bVar465;
          auVar511._0_8_ = auVar511._0_8_ + uVar486;
          lVar482 = lVar482 + 1;
        } while (uVar13 - uVar474 != lVar482);
      }
LAB_140dd1baa:
      if (auVar511._0_8_ < auVar502._0_8_) {
        puVar469 = param_1->try_row;
        if (param_1->tst_row != (uchar *)0x0) {
          param_1->try_row = param_1->tst_row;
          param_1->tst_row = puVar469;
        }
      }
      goto LAB_140dd1962;
    }
    puVar469 = param_1->try_row;
    *puVar469 = '\x04';
    puVar464 = param_1->prev_row;
    puVar484 = param_1->row_buf;
    pauVar483 = (undefined1 (*) [32])(puVar469 + 1);
    pauVar2 = (undefined1 (*) [32])(puVar464 + 1);
    pauVar471 = (undefined1 (*) [32])(puVar484 + 1);
    pauVar473 = pauVar2;
    pauVar468 = pauVar471;
    if (bVar610 != 0) {
      if (bVar610 < 0xf9) {
        auVar502._0_8_ = 0;
      }
      else {
        auVar502._0_8_ = (ulonglong)(uVar486 & 0xffffffe0);
        pauVar468 = (undefined1 (*) [32])(*pauVar471 + auVar502._0_8_);
        auVar501 = vpsubb_avx2(*pauVar471,*pauVar2);
        pauVar473 = (undefined1 (*) [32])(*pauVar2 + auVar502._0_8_);
        *pauVar483 = auVar501;
        pauVar483 = (undefined1 (*) [32])(*pauVar483 + auVar502._0_8_);
        if (auVar502._0_8_ == uVar474) goto LAB_140dd1308;
      }
      lVar482 = uVar474 - auVar502._0_8_;
      do {
        (*pauVar483)[0] = (*pauVar468)[0] - (*pauVar473)[0];
        pauVar483 = (undefined1 (*) [32])(*pauVar483 + 1);
        pauVar473 = (undefined1 (*) [32])(*pauVar473 + 1);
        pauVar468 = (undefined1 (*) [32])(*pauVar468 + 1);
        lVar482 = lVar482 + -1;
      } while (lVar482 != 0);
    }
LAB_140dd1308:
    auVar502._0_8_ = uVar13 - uVar474;
    if (uVar474 <= uVar13 && auVar502._0_8_ != 0) {
      if (0xf < auVar502._0_8_) {
        if (auVar502._0_8_ < 0x20) {
          auVar503._0_8_ = 0;
        }
        else {
          auVar503._0_8_ = auVar502._0_8_ & 0xffffffffffffffe0;
          auVar511._0_8_ = 0;
          auVar501 = vpcmpeqd_avx2(auVar501,auVar501);
          do {
            auVar561._8_8_ = *(undefined8 *)(*pauVar473 + auVar511._0_8_ + 8);
            auVar561._0_8_ = *(undefined8 *)(*pauVar473 + auVar511._0_8_ + 8);
            auVar6._8_8_ = 0;
            auVar6._0_8_ = *(ulonglong *)(*pauVar473 + auVar511._0_8_);
            auVar25 = vpmovzxbd_avx2(auVar6);
            auVar594._8_8_ = *(undefined8 *)(*pauVar473 + auVar511._0_8_ + 0x18);
            auVar594._0_8_ = *(undefined8 *)(*pauVar473 + auVar511._0_8_ + 0x18);
            auVar26 = vpmovzxbd_avx2(auVar561);
            auVar27 = vpmovzxbd_avx2(auVar594);
            auVar7._8_8_ = 0;
            auVar7._0_8_ = *(ulonglong *)(*pauVar473 + auVar511._0_8_ + 0x10);
            auVar28 = vpmovzxbd_avx2(auVar7);
            auVar596 = *(undefined1 (*) [32])(*pauVar2 + auVar511._0_8_);
            auVar562._8_8_ = *(undefined8 *)(puVar464 + auVar511._0_8_ + 9);
            auVar562._0_8_ = *(undefined8 *)(puVar464 + auVar511._0_8_ + 9);
            auVar29 = vpmovzxbd_avx2(auVar562);
            auVar8._8_8_ = 0;
            auVar8._0_8_ = *(ulonglong *)(*pauVar2 + auVar511._0_8_);
            auVar30 = vpmovzxbd_avx2(auVar8);
            auVar563._8_8_ = *(undefined8 *)(puVar464 + auVar511._0_8_ + 0x19);
            auVar563._0_8_ = *(undefined8 *)(puVar464 + auVar511._0_8_ + 0x19);
            auVar31 = vpmovzxbd_avx2(auVar563);
            auVar9._8_8_ = 0;
            auVar9._0_8_ = *(ulonglong *)(puVar464 + auVar511._0_8_ + 0x11);
            auVar32 = vpmovzxbd_avx2(auVar9);
            auVar597 = *(undefined1 (*) [32])(*pauVar471 + auVar511._0_8_);
            auVar1690._8_8_ = *(undefined8 *)(puVar484 + auVar511._0_8_ + 9);
            auVar1690._0_8_ = *(undefined8 *)(puVar484 + auVar511._0_8_ + 9);
            auVar10._8_8_ = 0;
            auVar10._0_8_ = *(ulonglong *)(*pauVar471 + auVar511._0_8_);
            auVar33 = vpmovzxbd_avx2(auVar10);
            auVar34 = vpmovzxbd_avx2(auVar1690);
            auVar11._8_8_ = 0;
            auVar11._0_8_ = *(ulonglong *)(puVar484 + auVar511._0_8_ + 0x11);
            auVar35 = vpmovzxbd_avx2(auVar11);
            auVar39 = vpsubd_avx2(auVar28,auVar32);
            auVar35 = vpsubd_avx2(auVar35,auVar32);
            auVar1744._8_8_ = *(undefined8 *)(puVar484 + auVar511._0_8_ + 0x19);
            auVar1744._0_8_ = *(undefined8 *)(puVar484 + auVar511._0_8_ + 0x19);
            auVar28 = vpmovzxbd_avx2(auVar1744);
            auVar27 = vpsubd_avx2(auVar27,auVar31);
            auVar25 = vpsubd_avx2(auVar25,auVar30);
            auVar26 = vpsubd_avx2(auVar26,auVar29);
            auVar32._0_4_ = auVar35._0_4_ + auVar39._0_4_;
            auVar32._4_4_ = auVar35._4_4_ + auVar39._4_4_;
            auVar32._8_4_ = auVar35._8_4_ + auVar39._8_4_;
            auVar32._12_4_ = auVar35._12_4_ + auVar39._12_4_;
            auVar32._16_4_ = auVar35._16_4_ + auVar39._16_4_;
            auVar32._20_4_ = auVar35._20_4_ + auVar39._20_4_;
            auVar32._24_4_ = auVar35._24_4_ + auVar39._24_4_;
            auVar32._28_4_ = auVar35._28_4_ + auVar39._28_4_;
            auVar28 = vpsubd_avx2(auVar28,auVar31);
            auVar35._0_4_ = auVar28._0_4_ + auVar27._0_4_;
            auVar35._4_4_ = auVar28._4_4_ + auVar27._4_4_;
            auVar35._8_4_ = auVar28._8_4_ + auVar27._8_4_;
            auVar35._12_4_ = auVar28._12_4_ + auVar27._12_4_;
            auVar35._16_4_ = auVar28._16_4_ + auVar27._16_4_;
            auVar35._20_4_ = auVar28._20_4_ + auVar27._20_4_;
            auVar35._24_4_ = auVar28._24_4_ + auVar27._24_4_;
            auVar35._28_4_ = auVar28._28_4_ + auVar27._28_4_;
            auVar27 = vpsubd_avx2(auVar33,auVar30);
            auVar33._0_4_ = auVar27._0_4_ + auVar25._0_4_;
            auVar33._4_4_ = auVar27._4_4_ + auVar25._4_4_;
            auVar33._8_4_ = auVar27._8_4_ + auVar25._8_4_;
            auVar33._12_4_ = auVar27._12_4_ + auVar25._12_4_;
            auVar33._16_4_ = auVar27._16_4_ + auVar25._16_4_;
            auVar33._20_4_ = auVar27._20_4_ + auVar25._20_4_;
            auVar33._24_4_ = auVar27._24_4_ + auVar25._24_4_;
            auVar33._28_4_ = auVar27._28_4_ + auVar25._28_4_;
            auVar25 = vpsubd_avx2(auVar34,auVar29);
            auVar34._0_4_ = auVar25._0_4_ + auVar26._0_4_;
            auVar34._4_4_ = auVar25._4_4_ + auVar26._4_4_;
            auVar34._8_4_ = auVar25._8_4_ + auVar26._8_4_;
            auVar34._12_4_ = auVar25._12_4_ + auVar26._12_4_;
            auVar34._16_4_ = auVar25._16_4_ + auVar26._16_4_;
            auVar34._20_4_ = auVar25._20_4_ + auVar26._20_4_;
            auVar34._24_4_ = auVar25._24_4_ + auVar26._24_4_;
            auVar34._28_4_ = auVar25._28_4_ + auVar26._28_4_;
            auVar26 = vpminub_avx2(auVar597,auVar596);
            auVar25 = vpmaxub_avx2(auVar597,auVar596);
            auVar25 = vpsubb_avx2(auVar25,auVar26);
            auVar39 = vpmovzxbd_avx2(auVar25._16_16_);
            auVar883 = vpshufd_avx(auVar25._16_16_,0xee);
            auVar36 = vpmovzxbd_avx2(auVar883);
            auVar37 = vpmovzxbd_avx2(auVar25._0_16_);
            auVar883 = vpshufd_avx(auVar25._0_16_,0xee);
            auVar38 = vpmovzxbd_avx2(auVar883);
            auVar26 = vpabsd_avx2(auVar32);
            auVar27 = vpabsd_avx2(auVar35);
            auVar28 = vpabsd_avx2(auVar33);
            auVar29 = vpabsd_avx2(auVar34);
            auVar25 = vpcmpgtd_avx2(auVar39,auVar26);
            auVar30 = vpcmpgtd_avx2(auVar36,auVar27);
            auVar30 = vpackssdw_avx2(auVar25,auVar30);
            auVar25 = vpcmpgtd_avx2(auVar37,auVar28);
            auVar31 = vpcmpgtd_avx2(auVar38,auVar29);
            auVar31 = vpackssdw_avx2(auVar25,auVar31);
            auVar25 = *(undefined1 (*) [32])(*pauVar473 + auVar511._0_8_);
            auVar30 = vpermq_avx2(auVar30,0xd8);
            auVar31 = vpermq_avx2(auVar31,0xd8);
            auVar30 = vpacksswb_avx2(auVar31,auVar30);
            auVar31 = vpminub_avx2(auVar25,auVar596);
            auVar30 = vpermq_avx2(auVar30,0xd8);
            auVar30 = vpblendvb_avx2(auVar25,auVar596,auVar30);
            auVar596 = vpmaxub_avx2(auVar25,auVar596);
            auVar32 = vpsubb_avx2(auVar596,auVar31);
            auVar883 = vpshufd_avx(auVar32._0_16_,0xee);
            auVar31 = vpmovzxbd_avx2(auVar883);
            auVar25 = vpcmpgtd_avx2(auVar31,auVar38);
            auVar596 = vpminud_avx2(auVar31,auVar29);
            auVar596 = vpcmpeqd_avx2(auVar31,auVar596);
            auVar31 = vpor_avx2(auVar25,auVar596 ^ auVar501);
            auVar29 = vpmovzxbd_avx2(auVar32._0_16_);
            auVar25 = vpcmpgtd_avx2(auVar29,auVar37);
            auVar596 = vpminud_avx2(auVar29,auVar28);
            auVar596 = vpcmpeqd_avx2(auVar29,auVar596);
            auVar596 = vpor_avx2(auVar596 ^ auVar501,auVar25);
            auVar596 = vpackssdw_avx2(auVar596,auVar31);
            auVar883 = vpshufd_avx(auVar32._16_16_,0xee);
            auVar29 = vpmovzxbd_avx2(auVar883);
            auVar28 = vpcmpgtd_avx2(auVar29,auVar36);
            auVar25 = vpminud_avx2(auVar29,auVar27);
            auVar25 = vpcmpeqd_avx2(auVar29,auVar25);
            auVar29 = vpor_avx2(auVar28,auVar25 ^ auVar501);
            auVar28 = vpmovzxbd_avx2(auVar32._16_16_);
            auVar27 = vpcmpgtd_avx2(auVar28,auVar39);
            auVar25 = vpminud_avx2(auVar28,auVar26);
            auVar25 = vpcmpeqd_avx2(auVar28,auVar25);
            auVar25 = vpor_avx2(auVar27,auVar25 ^ auVar501);
            auVar25 = vpackssdw_avx2(auVar25,auVar29);
            auVar25 = vpermq_avx2(auVar25,0xd8);
            auVar596 = vpermq_avx2(auVar596,0xd8);
            auVar596 = vpacksswb_avx2(auVar596,auVar25);
            auVar596 = vpermq_avx2(auVar596,0xd8);
            auVar596 = vpblendvb_avx2(auVar597,auVar30,auVar596);
            auVar596 = vpsubb_avx2(*(undefined1 (*) [32])(*pauVar468 + auVar511._0_8_),auVar596);
            *(undefined1 (*) [32])(*pauVar483 + auVar511._0_8_) = auVar596;
            auVar511._0_8_ = auVar511._0_8_ + 0x20;
          } while (auVar503._0_8_ != auVar511._0_8_);
          if (auVar502._0_8_ == auVar503._0_8_) goto LAB_140dd1956;
          if ((auVar502._0_8_ & 0x10) == 0) {
            uVar474 = uVar474 + auVar503._0_8_;
            puVar484 = puVar484 + auVar503._0_8_;
            puVar464 = puVar464 + auVar503._0_8_;
            pauVar473 = (undefined1 (*) [32])(*pauVar473 + auVar503._0_8_);
            pauVar483 = (undefined1 (*) [32])(*pauVar483 + auVar503._0_8_);
            pauVar468 = (undefined1 (*) [32])(*pauVar468 + auVar503._0_8_);
            goto LAB_140dd148b;
          }
        }
        auVar511._0_8_ = auVar502._0_8_ & 0xfffffffffffffff0;
        uVar474 = uVar474 + auVar511._0_8_;
        auVar501 = vpcmpeqd_avx2(auVar501,auVar501);
        do {
          auVar883 = *(undefined1 (*) [16])(*pauVar473 + auVar503._0_8_);
          auVar596 = vpmovzxbd_avx2(auVar883);
          auVar592._8_8_ = *(undefined8 *)(*pauVar473 + auVar503._0_8_ + 8);
          auVar592._0_8_ = *(undefined8 *)(*pauVar473 + auVar503._0_8_ + 8);
          auVar597 = vpmovzxbd_avx2(auVar592);
          auVar645 = *(undefined1 (*) [16])(*pauVar2 + auVar503._0_8_);
          auVar606._8_8_ = *(undefined8 *)(puVar464 + auVar503._0_8_ + 9);
          auVar606._0_8_ = *(undefined8 *)(puVar464 + auVar503._0_8_ + 9);
          auVar25 = vpmovzxbd_avx2(auVar645);
          auVar26 = vpmovzxbd_avx2(auVar606);
          auVar1628 = *(undefined1 (*) [16])(*pauVar471 + auVar503._0_8_);
          auVar27 = vpmovzxbd_avx2(auVar1628);
          auVar1569._8_8_ = *(undefined8 *)(puVar484 + auVar503._0_8_ + 9);
          auVar1569._0_8_ = *(undefined8 *)(puVar484 + auVar503._0_8_ + 9);
          auVar28 = vpmovzxbd_avx2(auVar1569);
          auVar597 = vpsubd_avx2(auVar597,auVar26);
          auVar596 = vpsubd_avx2(auVar596,auVar25);
          auVar26 = vpsubd_avx2(auVar28,auVar26);
          auVar39._0_4_ = auVar26._0_4_ + auVar597._0_4_;
          auVar39._4_4_ = auVar26._4_4_ + auVar597._4_4_;
          auVar39._8_4_ = auVar26._8_4_ + auVar597._8_4_;
          auVar39._12_4_ = auVar26._12_4_ + auVar597._12_4_;
          auVar39._16_4_ = auVar26._16_4_ + auVar597._16_4_;
          auVar39._20_4_ = auVar26._20_4_ + auVar597._20_4_;
          auVar39._24_4_ = auVar26._24_4_ + auVar597._24_4_;
          auVar39._28_4_ = auVar26._28_4_ + auVar597._28_4_;
          auVar597 = vpsubd_avx2(auVar27,auVar25);
          auVar36._0_4_ = auVar597._0_4_ + auVar596._0_4_;
          auVar36._4_4_ = auVar597._4_4_ + auVar596._4_4_;
          auVar36._8_4_ = auVar597._8_4_ + auVar596._8_4_;
          auVar36._12_4_ = auVar597._12_4_ + auVar596._12_4_;
          auVar36._16_4_ = auVar597._16_4_ + auVar596._16_4_;
          auVar36._20_4_ = auVar597._20_4_ + auVar596._20_4_;
          auVar36._24_4_ = auVar597._24_4_ + auVar596._24_4_;
          auVar36._28_4_ = auVar597._28_4_ + auVar596._28_4_;
          auVar1186 = vpminub_avx(auVar883,auVar645);
          auVar591 = vpmaxub_avx(auVar883,auVar645);
          auVar1186 = vpsubb_avx(auVar591,auVar1186);
          auVar591 = vpshufd_avx(auVar1186,0xee);
          auVar28 = vpmovzxbd_avx2(auVar591);
          auVar29 = vpmovzxbd_avx2(auVar1186);
          auVar1186 = vpminub_avx(auVar1628,auVar645);
          auVar591 = vpmaxub_avx(auVar1628,auVar645);
          auVar1186 = vpsubb_avx(auVar591,auVar1186);
          auVar591 = vpshufd_avx(auVar1186,0xee);
          auVar30 = vpmovzxbd_avx2(auVar591);
          auVar31 = vpmovzxbd_avx2(auVar1186);
          auVar596 = vpabsd_avx2(auVar39);
          auVar597 = vpabsd_avx2(auVar36);
          auVar26 = vpcmpgtd_avx2(auVar29,auVar31);
          auVar27 = vpcmpgtd_avx2(auVar28,auVar30);
          auVar25 = vpminud_avx2(auVar29,auVar597);
          auVar25 = vpcmpeqd_avx2(auVar25,auVar29);
          auVar26 = vpor_avx2(auVar26,auVar25 ^ auVar501);
          auVar25 = vpminud_avx2(auVar28,auVar596);
          auVar25 = vpcmpeqd_avx2(auVar25,auVar28);
          auVar25 = vpor_avx2(auVar27,auVar25 ^ auVar501);
          auVar25 = vpackssdw_avx2(auVar26,auVar25);
          auVar591 = vpacksswb_avx(auVar25._0_16_,auVar25._16_16_);
          auVar596 = vpcmpgtd_avx2(auVar30,auVar596);
          auVar597 = vpcmpgtd_avx2(auVar31,auVar597);
          auVar596 = vpackssdw_avx2(auVar597,auVar596);
          auVar1186 = vpacksswb_avx(auVar596._0_16_,auVar596._16_16_);
          auVar1186 = vpshufd_avx(auVar1186,0xd8);
          auVar883 = vpblendvb_avx(auVar883,auVar645,auVar1186);
          auVar645 = vpshufd_avx(auVar591,0xd8);
          auVar883 = vpblendvb_avx(auVar1628,auVar883,auVar645);
          auVar883 = vpsubb_avx(*(undefined1 (*) [16])(*pauVar468 + auVar503._0_8_),auVar883);
          *(undefined1 (*) [16])(*pauVar483 + auVar503._0_8_) = auVar883;
          auVar503._0_8_ = auVar503._0_8_ + 0x10;
        } while (auVar511._0_8_ != auVar503._0_8_);
        puVar464 = puVar464 + auVar511._0_8_;
        pauVar483 = (undefined1 (*) [32])(*pauVar483 + auVar511._0_8_);
        pauVar473 = (undefined1 (*) [32])(*pauVar473 + auVar511._0_8_);
        puVar484 = puVar484 + auVar511._0_8_;
        pauVar468 = (undefined1 (*) [32])(*pauVar468 + auVar511._0_8_);
        if (auVar502._0_8_ == auVar511._0_8_) goto LAB_140dd1956;
      }
LAB_140dd148b:
      lVar482 = 0;
      do {
        bVar466 = puVar464[lVar482 + 1];
        iVar481 = (uint)(byte)(*pauVar473)[lVar482] - (uint)bVar466;
        iVar489 = (uint)puVar484[lVar482 + 1] - (uint)bVar466;
        bVar610 = (byte)-iVar481;
        if (-iVar481 < 0) {
          bVar610 = (byte)iVar481;
        }
        bVar465 = (byte)-iVar489;
        if (-iVar489 < 0) {
          bVar465 = (byte)iVar489;
        }
        uVar486 = -(iVar489 + iVar481);
        if ((int)uVar486 < 0) {
          uVar486 = iVar489 + iVar481;
        }
        if (bVar465 <= uVar486) {
          bVar466 = (*pauVar473)[lVar482];
        }
        bVar874 = puVar484[lVar482 + 1];
        if (uVar486 < bVar610) {
          bVar874 = bVar466;
        }
        if ((uint)bVar465 < (uint)bVar610) {
          bVar874 = bVar466;
        }
        (*pauVar483)[lVar482] = (*pauVar468)[lVar482] - bVar874;
        lVar482 = lVar482 + 1;
      } while (uVar13 - uVar474 != lVar482);
    }
LAB_140dd1956:
    puVar469 = param_1->try_row;
LAB_140dd1962:
    png_compress_IDAT(param_1,puVar469,param_2->rowbytes + 1,0);
    puVar469 = param_1->prev_row;
    if (puVar469 != (uchar *)0x0) {
      param_1->prev_row = param_1->row_buf;
      param_1->row_buf = puVar469;
    }
    png_write_finish_row(param_1);
    uVar486 = param_1->flush_rows + 1;
    param_1->flush_rows = uVar486;
    if (param_1->flush_dist - 1 < uVar486) {
      png_write_flush(param_1);
      return;
    }
    return;
  }
  png_write_find_filter_dispatch = png_write_find_filter_generic;
  bVar466 = param_1->do_filter;
  uVar13 = param_2->rowbytes;
  bVar610 = param_2->pixel_depth;
  puVar469 = param_1->row_buf;
  if (uVar13 < 0x1ffffffffffffff) {
    auVar502._0_8_ = 0xfffffffffffffeff;
    if ((bVar466 != 8 & bVar466 >> 3) == 1) {
      if (uVar13 == 0) {
        auVar502._0_8_ = 0;
      }
      else {
        if (uVar13 < 4) {
          auVar502._0_8_ = 0;
          uVar474 = 0;
          puVar464 = puVar469;
        }
        else {
          uVar474 = uVar13 & 0x1fffffffffffffc;
          puVar464 = puVar469 + uVar474;
          auVar502._16_48_ = in_ZMM0._16_48_;
          auVar502._0_8_ = 0;
          in_ZMM3._4_4_ = _UNK_1531f2ba4;
          in_ZMM3._0_4_ = ___xmm_00000000000000000000010000000100;
          in_ZMM3._8_4_ = _UNK_1531f2ba8;
          in_ZMM3._12_4_ = _UNK_1531f2bac;
          auVar511 = ZEXT4864(in_ZMM1._16_48_) << 0x80;
          auVar503 = ZEXT4864(in_ZMM2._16_48_) << 0x80;
          do {
            uVar546 = *(ushort *)(puVar469 + auVar502._0_8_ + 1);
            auVar647._16_48_ = in_ZMM4._16_48_;
            uVar611 = *(ushort *)(puVar469 + auVar502._0_8_ + 3);
            auVar704._16_48_ = in_ZMM5._16_48_;
            auVar893._16_48_ = in_ZMM6._16_48_;
            auVar893._0_16_ = ZEXT216(uVar546);
            auVar892._15_49_ = auVar893._15_49_;
            auVar892._0_15_ = ZEXT215(uVar546);
            auVar891._14_50_ = auVar892._14_50_;
            auVar891._0_14_ = ZEXT214(uVar546);
            auVar890._13_51_ = auVar891._13_51_;
            auVar890._0_13_ = ZEXT213(uVar546);
            auVar889._12_52_ = auVar890._12_52_;
            auVar889._0_12_ = ZEXT212(uVar546);
            auVar888._11_53_ = auVar889._11_53_;
            auVar888._0_11_ = ZEXT211(uVar546);
            auVar887._10_54_ = auVar888._10_54_;
            auVar887._2_8_ = 0;
            auVar887._0_2_ = uVar546;
            auVar886._9_55_ = auVar887._9_55_;
            auVar886._2_7_ = 0;
            auVar886._0_2_ = uVar546;
            auVar211._56_8_ = 0;
            auVar211._0_56_ = auVar886._8_56_;
            auVar210._58_6_ = 0;
            auVar210._0_58_ = SUB6458(auVar211 << 0x40,6);
            auVar209[0x3c] = 0;
            auVar209._0_60_ = SUB6460(auVar210 << 0x30,4);
            auVar885[2] = (char)(uVar546 >> 8);
            auVar885._0_2_ = uVar546;
            auVar885._3_61_ = auVar209 << 8;
            auVar884._2_62_ = auVar885._2_62_;
            cVar1479 = (char)uVar546;
            uVar1787 = uVar546 & 0xff;
            auVar897._0_14_ = auVar884._0_14_;
            auVar897._14_2_ = 0;
            auVar897._16_48_ = auVar893._16_48_;
            auVar896._14_50_ = auVar897._14_50_;
            auVar896._0_12_ = auVar884._0_12_;
            auVar896._12_2_ = 0;
            auVar895._12_52_ = auVar896._12_52_;
            auVar895._0_10_ = auVar884._0_10_;
            auVar895._10_2_ = 0;
            auVar894._10_54_ = auVar895._10_54_;
            auVar894._0_10_ = (unkuint10)0 << 0x40;
            auVar212._56_2_ = 0;
            auVar212._0_56_ = auVar894._8_56_;
            auVar41._2_58_ = auVar212 << 0x10;
            auVar41._0_2_ = auVar885._2_2_;
            in_ZMM6._0_4_ = CONCAT22(0,uVar1787);
            in_ZMM6._4_60_ = auVar41;
            auVar1200._16_48_ = in_ZMM7._16_48_;
            auVar1200._0_16_ = ZEXT216(uVar611);
            auVar1199._15_49_ = auVar1200._15_49_;
            auVar1199._0_15_ = ZEXT215(uVar611);
            auVar1198._14_50_ = auVar1199._14_50_;
            auVar1198._0_14_ = ZEXT214(uVar611);
            auVar1197._13_51_ = auVar1198._13_51_;
            auVar1197._0_13_ = ZEXT213(uVar611);
            auVar1196._12_52_ = auVar1197._12_52_;
            auVar1196._0_12_ = ZEXT212(uVar611);
            auVar1195._11_53_ = auVar1196._11_53_;
            auVar1195._0_11_ = ZEXT211(uVar611);
            auVar1194._10_54_ = auVar1195._10_54_;
            auVar1194._2_8_ = 0;
            auVar1194._0_2_ = uVar611;
            auVar1193._9_55_ = auVar1194._9_55_;
            auVar1193._2_7_ = 0;
            auVar1193._0_2_ = uVar611;
            auVar215._56_8_ = 0;
            auVar215._0_56_ = auVar1193._8_56_;
            auVar214._58_6_ = 0;
            auVar214._0_58_ = SUB6458(auVar215 << 0x40,6);
            auVar213[0x3c] = 0;
            auVar213._0_60_ = SUB6460(auVar214 << 0x30,4);
            uVar526 = (undefined1)(uVar611 >> 8);
            auVar1192[2] = uVar526;
            auVar1192._0_2_ = uVar611;
            auVar1192._3_61_ = auVar213 << 8;
            auVar1191._2_62_ = auVar1192._2_62_;
            cVar652 = (char)uVar611;
            uVar1806 = uVar611 & 0xff;
            auVar1204._0_14_ = auVar1191._0_14_;
            auVar1204._14_2_ = 0;
            auVar1204._16_48_ = auVar1200._16_48_;
            auVar1203._14_50_ = auVar1204._14_50_;
            auVar1203._0_12_ = auVar1191._0_12_;
            auVar1203._12_2_ = 0;
            auVar1202._12_52_ = auVar1203._12_52_;
            auVar1202._0_10_ = auVar1191._0_10_;
            auVar1202._10_2_ = 0;
            auVar1201._10_54_ = auVar1202._10_54_;
            auVar1201._0_10_ = (unkuint10)0 << 0x40;
            auVar216._56_2_ = 0;
            auVar216._0_56_ = auVar1201._8_56_;
            auVar42._2_58_ = auVar216 << 0x10;
            auVar42._0_2_ = auVar1192._2_2_;
            in_ZMM7._0_4_ = CONCAT22(0,uVar1806);
            in_ZMM7._4_60_ = auVar42;
            auVar1487._0_4_ = ___xmm_00000000000000000000010000000100 - in_ZMM6._0_4_;
            auVar1487._4_4_ = _UNK_1531f2ba4 - auVar41._0_4_;
            auVar1487._8_4_ = _UNK_1531f2ba8 - auVar894._8_4_;
            auVar1487._12_4_ = _UNK_1531f2bac - auVar896._12_4_;
            auVar1546._0_4_ = ___xmm_00000000000000000000010000000100 - in_ZMM7._0_4_;
            auVar1546._4_4_ = _UNK_1531f2ba4 - auVar42._0_4_;
            auVar1546._8_4_ = _UNK_1531f2ba8 - auVar1201._8_4_;
            auVar1546._12_4_ = _UNK_1531f2bac - auVar1203._12_4_;
            auVar1640._16_48_ = in_ZMM10._16_48_;
            auVar579 = ZEXT4864(auVar1640._16_48_) << 0x80;
            auVar1611[0] = -(cVar1479 < '\0');
            auVar1611[1] = -(cVar1479 < '\0');
            auVar1611[2] = -(cVar1479 < '\0');
            auVar1611[3] = -(cVar1479 < '\0');
            auVar1611[4] = -((short)uVar546 < 0);
            auVar1611[5] = -((short)uVar546 < 0);
            auVar1611[6] = -((short)uVar546 < 0);
            auVar1611[7] = -((short)uVar546 < 0);
            auVar1611[8] = -('\0' < auVar579[8]);
            auVar1611[9] = -('\0' < auVar579[9]);
            auVar1611[10] = -('\0' < auVar579[10]);
            auVar1611[0xb] = -('\0' < auVar579[0xb]);
            auVar1618[0xc] = -('\0' < auVar579[0xc]);
            auVar1618._0_12_ = auVar1611;
            auVar1618[0xd] = -('\0' < auVar579[0xd]);
            auVar1618[0xe] = -('\0' < auVar579[0xe]);
            auVar1618[0xf] = -('\0' < auVar579[0xf]);
            auVar704._0_16_ = ZEXT216(uVar611);
            auVar703._15_49_ = auVar704._15_49_;
            auVar703._0_15_ = ZEXT215(uVar611);
            auVar702._14_50_ = auVar703._14_50_;
            auVar702._0_14_ = ZEXT214(uVar611);
            auVar701._13_51_ = auVar702._13_51_;
            auVar701._0_13_ = ZEXT213(uVar611);
            auVar700._12_52_ = auVar701._12_52_;
            auVar700._0_12_ = ZEXT212(uVar611);
            auVar699._11_53_ = auVar700._11_53_;
            auVar699._0_11_ = ZEXT211(uVar611);
            auVar698._10_54_ = auVar699._10_54_;
            auVar698._2_8_ = 0;
            auVar698._0_2_ = uVar611;
            auVar697._9_55_ = auVar698._9_55_;
            auVar697._2_7_ = 0;
            auVar697._0_2_ = uVar611;
            auVar217._56_8_ = 0;
            auVar217._0_56_ = auVar697._8_56_;
            auVar45._57_7_ = 0;
            auVar45._0_57_ = SUB6457(auVar217 << 0x40,7);
            auVar44._58_6_ = 0;
            auVar44._0_58_ = SUB6458(auVar45 << 0x38,6);
            auVar43._59_5_ = 0;
            auVar43._0_59_ = SUB6459(auVar44 << 0x30,5);
            auVar775._1_60_ = SUB6460(auVar43 << 0x28,4);
            auVar775[0] = uVar526;
            auVar775._61_3_ = 0;
            auVar524._62_2_ = 0;
            auVar524._0_62_ = SUB6462(auVar775 << 0x18,2);
            auVar524 = auVar524 << 0x10;
            auVar708._0_14_ = auVar524._0_14_;
            auVar708._14_2_ = 0;
            auVar708._16_48_ = auVar704._16_48_;
            auVar707._14_50_ = auVar708._14_50_;
            auVar707._0_12_ = auVar524._0_12_;
            auVar707._12_2_ = 0;
            auVar706._12_52_ = auVar707._12_52_;
            auVar706._0_10_ = auVar524._0_10_;
            auVar706._10_2_ = 0;
            auVar705._10_54_ = auVar706._10_54_;
            auVar705._0_10_ = (unkuint10)0;
            auVar47._2_56_ = auVar705._8_56_;
            auVar47._0_2_ = SUB642(auVar775 << 0x18,2);
            auVar47._58_6_ = 0;
            auVar46._60_4_ = 0;
            auVar46._0_60_ = SUB6460(auVar47 << 0x30,4);
            in_ZMM5 = auVar46 << 0x20;
            auVar579 = ZEXT4864(auVar647._16_48_) << 0x80;
            auVar612[0] = -(cVar652 < '\0');
            auVar612[1] = -(cVar652 < '\0');
            auVar612[2] = -(cVar652 < '\0');
            auVar612[3] = -(cVar652 < '\0');
            auVar612[4] = -((short)uVar611 < 0);
            auVar612[5] = -((short)uVar611 < 0);
            auVar612[6] = -((short)uVar611 < 0);
            auVar612[7] = -((short)uVar611 < 0);
            auVar612[8] = -('\0' < auVar579[8]);
            auVar612[9] = -('\0' < auVar579[9]);
            auVar612[10] = -('\0' < auVar579[10]);
            auVar612[0xb] = -('\0' < auVar579[0xb]);
            auVar635[0xc] = -('\0' < auVar579[0xc]);
            auVar635._0_12_ = auVar612;
            auVar635[0xd] = -('\0' < auVar579[0xd]);
            auVar635[0xe] = -('\0' < auVar579[0xe]);
            auVar635[0xf] = -('\0' < auVar579[0xf]);
            in_ZMM8._0_16_ = auVar1487 & auVar1618;
            auVar1640._0_12_ = ~auVar1611 & in_ZMM6._0_12_ | in_ZMM8._0_12_;
            in_ZMM9._0_16_ = auVar1546 & auVar635;
            auVar647._0_12_ = ~auVar612 & in_ZMM7._0_12_ | in_ZMM9._0_12_;
            auVar1640._12_4_ = 0;
            auVar1639._12_52_ = auVar1640._12_52_;
            auVar1639._0_8_ = auVar1640._0_8_;
            auVar1639._8_4_ = auVar1640._4_4_;
            in_ZMM10._8_56_ = auVar1639._8_56_;
            in_ZMM10._0_8_ = CONCAT44(0,auVar1640._0_4_);
            in_ZMM2._0_8_ = auVar503._0_8_ + in_ZMM10._0_8_;
            in_ZMM2._16_48_ = auVar503._16_48_;
            in_ZMM2._8_8_ = auVar503._8_8_ + auVar1639._8_8_;
            auVar647._12_4_ = 0;
            auVar646._12_52_ = auVar647._12_52_;
            auVar646._0_8_ = auVar647._0_8_;
            auVar646._8_4_ = auVar647._4_4_;
            in_ZMM4._8_56_ = auVar646._8_56_;
            in_ZMM4._0_8_ = CONCAT44(0,auVar647._0_4_);
            auVar566._0_8_ = auVar511._0_8_ + in_ZMM4._0_8_;
            auVar566._16_48_ = auVar511._16_48_;
            auVar566._8_8_ = auVar511._8_8_ + auVar646._8_8_;
            auVar502._0_8_ = auVar502._0_8_ + 4;
            auVar511 = auVar566;
            auVar503 = in_ZMM2;
          } while (uVar474 != auVar502._0_8_);
          in_ZMM1._0_8_ = auVar566._0_8_ + in_ZMM2._0_8_;
          in_ZMM1._8_8_ = auVar566._8_8_ + in_ZMM2._8_8_;
          in_ZMM1._16_48_ = auVar566._16_48_;
          auVar490._8_4_ = (int)in_ZMM1._8_8_;
          auVar490._0_8_ = in_ZMM1._8_8_;
          auVar490._12_4_ = (int)((ulonglong)in_ZMM1._8_8_ >> 0x20);
          auVar502._0_8_ = in_ZMM1._8_8_ + in_ZMM1._0_8_;
          auVar502._8_8_ = auVar490._8_8_ + in_ZMM1._8_8_;
          in_ZMM0 = auVar502;
          if (uVar13 == uVar474) goto LAB_140dce0d0;
        }
        lVar482 = 0;
        do {
          bVar465 = puVar464[lVar482 + 1];
          uVar486 = 0x100 - bVar465;
          if (-1 < (char)bVar465) {
            uVar486 = (uint)bVar465;
          }
          auVar502._0_8_ = auVar502._0_8_ + uVar486;
          lVar482 = lVar482 + 1;
        } while (uVar13 - uVar474 != lVar482);
      }
    }
  }
  else {
    bVar466 = bVar466 & -bVar466;
    auVar502._0_8_ = 0xfffffffffffffeff;
  }
LAB_140dce0d0:
  uVar486 = bVar610 + 7 >> 3;
  uVar474 = (ulonglong)uVar486;
  if (bVar466 == 0x10) {
    puVar464 = param_1->try_row;
    *puVar464 = '\x01';
    pauVar467 = (undefined1 (*) [16])(puVar464 + 1);
    pauVar1 = (undefined1 (*) [16])(puVar469 + 1);
    pauVar470 = pauVar1;
    if (bVar610 != 0) {
      if (bVar610 < 0x79) {
        auVar511._0_8_ = 0;
      }
      else {
        auVar511._0_8_ = (ulonglong)(uVar486 & 0xfffffff0);
        auVar883 = *pauVar1;
        *pauVar467 = auVar883;
        if (auVar511._0_8_ != 0x10) {
          auVar883 = *(undefined1 (*) [16])(puVar469 + 0x11);
          *(undefined1 (*) [16])(puVar464 + 0x11) = auVar883;
        }
        in_ZMM0._0_16_ = auVar883;
        pauVar470 = (undefined1 (*) [16])(*pauVar1 + auVar511._0_8_);
        pauVar467 = (undefined1 (*) [16])(*pauVar467 + auVar511._0_8_);
        if ((uVar486 & 0xfffffff0) == uVar486) goto LAB_140dce1a0;
      }
      lVar482 = uVar474 - auVar511._0_8_;
      do {
        (*pauVar467)[0] = (*pauVar470)[0];
        pauVar467 = (undefined1 (*) [16])(*pauVar467 + 1);
        pauVar470 = (undefined1 (*) [16])(*pauVar470 + 1);
        lVar482 = lVar482 + -1;
      } while (lVar482 != 0);
    }
LAB_140dce1a0:
    auVar511._0_8_ = uVar13 - uVar474;
    if (uVar474 <= uVar13 && auVar511._0_8_ != 0) {
      auVar503._0_8_ = uVar474;
      if (7 < auVar511._0_8_) {
        if (auVar511._0_8_ < 0x20) {
          auVar503._0_8_ = 0;
        }
        else {
          auVar503._0_8_ = auVar511._0_8_ & 0xffffffffffffffe0;
          auVar579._0_8_ = 0;
          do {
            pcVar3 = *pauVar470 + auVar579._0_8_;
            pcVar5 = pauVar470[1] + auVar579._0_8_;
            puVar464 = puVar469 + auVar579._0_8_ + 1;
            auVar492[0] = *pcVar3 - *puVar464;
            auVar492[1] = pcVar3[1] - puVar464[1];
            auVar492[2] = pcVar3[2] - puVar464[2];
            auVar492[3] = pcVar3[3] - puVar464[3];
            auVar492[4] = pcVar3[4] - puVar464[4];
            auVar492[5] = pcVar3[5] - puVar464[5];
            auVar492[6] = pcVar3[6] - puVar464[6];
            auVar492[7] = pcVar3[7] - puVar464[7];
            auVar492[8] = pcVar3[8] - puVar464[8];
            auVar492[9] = pcVar3[9] - puVar464[9];
            auVar492[10] = pcVar3[10] - puVar464[10];
            auVar492[0xb] = pcVar3[0xb] - puVar464[0xb];
            auVar492[0xc] = pcVar3[0xc] - puVar464[0xc];
            auVar492[0xd] = pcVar3[0xd] - puVar464[0xd];
            auVar492[0xe] = pcVar3[0xe] - puVar464[0xe];
            auVar492[0xf] = pcVar3[0xf] - puVar464[0xf];
            in_ZMM0._0_16_ = auVar492;
            auVar883 = *(undefined1 (*) [16])(puVar469 + auVar579._0_8_ + 0x11);
            in_ZMM2._0_16_ = auVar883;
            auVar551[0] = *pcVar5 - auVar883[0];
            auVar551[1] = pcVar5[1] - auVar883[1];
            auVar551[2] = pcVar5[2] - auVar883[2];
            auVar551[3] = pcVar5[3] - auVar883[3];
            auVar551[4] = pcVar5[4] - auVar883[4];
            auVar551[5] = pcVar5[5] - auVar883[5];
            auVar551[6] = pcVar5[6] - auVar883[6];
            auVar551[7] = pcVar5[7] - auVar883[7];
            auVar551[8] = pcVar5[8] - auVar883[8];
            auVar551[9] = pcVar5[9] - auVar883[9];
            auVar551[10] = pcVar5[10] - auVar883[10];
            auVar551[0xb] = pcVar5[0xb] - auVar883[0xb];
            auVar551[0xc] = pcVar5[0xc] - auVar883[0xc];
            auVar551[0xd] = pcVar5[0xd] - auVar883[0xd];
            auVar551[0xe] = pcVar5[0xe] - auVar883[0xe];
            auVar551[0xf] = pcVar5[0xf] - auVar883[0xf];
            in_ZMM1._0_16_ = auVar551;
            *(undefined1 (*) [16])(*pauVar467 + auVar579._0_8_) = auVar492;
            *(undefined1 (*) [16])(pauVar467[1] + auVar579._0_8_) = auVar551;
            auVar579._0_8_ = auVar579._0_8_ + 0x20;
          } while (auVar503._0_8_ != auVar579._0_8_);
          if (auVar511._0_8_ == auVar503._0_8_) goto LAB_140dce626;
          if ((auVar511._0_8_ & 0x18) == 0) {
            pauVar470 = (undefined1 (*) [16])(*pauVar470 + auVar503._0_8_);
            pauVar467 = (undefined1 (*) [16])(*pauVar467 + auVar503._0_8_);
            puVar469 = puVar469 + auVar503._0_8_;
            auVar503._0_8_ = uVar474 + auVar503._0_8_;
            goto LAB_140dce5f9;
          }
        }
        auVar579._0_8_ = auVar511._0_8_ & 0xfffffffffffffff8;
        puVar469 = puVar469 + auVar579._0_8_;
        do {
          uVar657 = *(undefined8 *)(*pauVar470 + auVar503._0_8_);
          uVar485 = *(ulonglong *)(*pauVar1 + auVar503._0_8_);
          in_ZMM1._8_8_ = 0;
          in_ZMM1._0_8_ = uVar485;
          in_ZMM0._0_8_ =
               CONCAT17((char)((ulonglong)uVar657 >> 0x38) - (char)(uVar485 >> 0x38),
                        CONCAT16((char)((ulonglong)uVar657 >> 0x30) - (char)(uVar485 >> 0x30),
                                 CONCAT15((char)((ulonglong)uVar657 >> 0x28) -
                                          (char)(uVar485 >> 0x28),
                                          CONCAT14((char)((ulonglong)uVar657 >> 0x20) -
                                                   (char)(uVar485 >> 0x20),
                                                   CONCAT13((char)((ulonglong)uVar657 >> 0x18) -
                                                            (char)(uVar485 >> 0x18),
                                                            CONCAT12((char)((ulonglong)uVar657 >>
                                                                           0x10) -
                                                                     (char)(uVar485 >> 0x10),
                                                                     CONCAT11((char)((ulonglong)
                                                                                     uVar657 >> 8) -
                                                                              (char)(uVar485 >> 8),
                                                                              (char)uVar657 -
                                                                              (char)uVar485)))))));
          in_ZMM0._8_8_ = 0;
          *(ulonglong *)(*pauVar467 + auVar503._0_8_) = in_ZMM0._0_8_;
          auVar503._0_8_ = auVar503._0_8_ + 8;
        } while (auVar579._0_8_ != auVar503._0_8_);
        pauVar470 = (undefined1 (*) [16])(*pauVar470 + auVar579._0_8_);
        pauVar467 = (undefined1 (*) [16])(*pauVar467 + auVar579._0_8_);
        auVar503._0_8_ = auVar579._0_8_ + uVar474;
        if (auVar511._0_8_ == auVar579._0_8_) goto LAB_140dce626;
      }
LAB_140dce5f9:
      lVar482 = 0;
      do {
        (*pauVar467)[lVar482] = (*pauVar470)[lVar482] - puVar469[lVar482 + 1];
        lVar482 = lVar482 + 1;
      } while (uVar13 - auVar503._0_8_ != lVar482);
    }
LAB_140dce626:
    puVar469 = param_1->try_row;
  }
  else if ((bVar466 & 0x10) != 0) {
    puVar464 = param_1->try_row;
    *puVar464 = '\x01';
    auVar511._0_8_ = (ulonglong)uVar486;
    pbVar488 = puVar464 + 1;
    pbVar472 = puVar469 + 1;
    if (bVar610 == 0) {
      auVar503._0_8_ = 0;
    }
    else {
      if (bVar610 < 0x19) {
        auVar503._0_8_ = 0;
        auVar579._0_8_ = 0;
      }
      else {
        uVar476 = uVar486 & 0xfffffffc;
        auVar579._0_8_ = (ulonglong)uVar476;
        uVar546 = *(ushort *)(puVar469 + 1);
        auVar567._16_48_ = in_ZMM1._16_48_;
        uVar611 = *(ushort *)(puVar469 + 3);
        auVar649._16_48_ = in_ZMM4._16_48_;
        *(ushort *)(puVar464 + 1) = uVar546;
        *(ushort *)(puVar464 + 3) = uVar611;
        iVar1676 = _UNK_1531f2bac;
        iVar1536 = _UNK_1531f2ba8;
        iVar489 = _UNK_1531f2ba4;
        iVar481 = ___xmm_00000000000000000000010000000100;
        in_ZMM3 = ZEXT4864(in_ZMM3._16_48_) << 0x80;
        auVar718._16_48_ = in_ZMM5._16_48_;
        auVar718._0_16_ = ZEXT216(uVar546);
        auVar717._15_49_ = auVar718._15_49_;
        auVar717._0_15_ = ZEXT215(uVar546);
        auVar716._14_50_ = auVar717._14_50_;
        auVar716._0_14_ = ZEXT214(uVar546);
        auVar715._13_51_ = auVar716._13_51_;
        auVar715._0_13_ = ZEXT213(uVar546);
        auVar714._12_52_ = auVar715._12_52_;
        auVar714._0_12_ = ZEXT212(uVar546);
        auVar713._11_53_ = auVar714._11_53_;
        auVar713._0_11_ = ZEXT211(uVar546);
        auVar712._10_54_ = auVar713._10_54_;
        auVar712._2_8_ = 0;
        auVar712._0_2_ = uVar546;
        auVar711._9_55_ = auVar712._9_55_;
        auVar711._2_7_ = 0;
        auVar711._0_2_ = uVar546;
        auVar220._56_8_ = 0;
        auVar220._0_56_ = auVar711._8_56_;
        auVar219._58_6_ = 0;
        auVar219._0_58_ = SUB6458(auVar220 << 0x40,6);
        auVar218[0x3c] = 0;
        auVar218._0_60_ = SUB6460(auVar219 << 0x30,4);
        auVar710[2] = (char)(uVar546 >> 8);
        auVar710._0_2_ = uVar546;
        auVar710._3_61_ = auVar218 << 8;
        auVar709._2_62_ = auVar710._2_62_;
        cVar1479 = (char)uVar546;
        uVar1783 = uVar546 & 0xff;
        auVar722._0_14_ = auVar709._0_14_;
        auVar722._14_2_ = 0;
        auVar722._16_48_ = auVar718._16_48_;
        auVar721._14_50_ = auVar722._14_50_;
        auVar721._0_12_ = auVar709._0_12_;
        auVar721._12_2_ = 0;
        auVar720._12_52_ = auVar721._12_52_;
        auVar720._0_10_ = auVar709._0_10_;
        auVar720._10_2_ = 0;
        auVar719._10_54_ = auVar720._10_54_;
        auVar719._0_10_ = (unkuint10)0 << 0x40;
        auVar221._56_2_ = 0;
        auVar221._0_56_ = auVar719._8_56_;
        auVar48._2_58_ = auVar221 << 0x10;
        auVar48._0_2_ = auVar710._2_2_;
        in_ZMM5._0_4_ = CONCAT22(0,uVar1783);
        in_ZMM5._4_60_ = auVar48;
        auVar907._16_48_ = in_ZMM6._16_48_;
        auVar907._0_16_ = ZEXT216(uVar611);
        auVar906._15_49_ = auVar907._15_49_;
        auVar906._0_15_ = ZEXT215(uVar611);
        auVar905._14_50_ = auVar906._14_50_;
        auVar905._0_14_ = ZEXT214(uVar611);
        auVar904._13_51_ = auVar905._13_51_;
        auVar904._0_13_ = ZEXT213(uVar611);
        auVar903._12_52_ = auVar904._12_52_;
        auVar903._0_12_ = ZEXT212(uVar611);
        auVar902._11_53_ = auVar903._11_53_;
        auVar902._0_11_ = ZEXT211(uVar611);
        auVar901._10_54_ = auVar902._10_54_;
        auVar901._2_8_ = 0;
        auVar901._0_2_ = uVar611;
        auVar900._9_55_ = auVar901._9_55_;
        auVar900._2_7_ = 0;
        auVar900._0_2_ = uVar611;
        auVar224._56_8_ = 0;
        auVar224._0_56_ = auVar900._8_56_;
        auVar223._58_6_ = 0;
        auVar223._0_58_ = SUB6458(auVar224 << 0x40,6);
        auVar222[0x3c] = 0;
        auVar222._0_60_ = SUB6460(auVar223 << 0x30,4);
        auVar899[2] = (char)(uVar611 >> 8);
        auVar899._0_2_ = uVar611;
        auVar899._3_61_ = auVar222 << 8;
        auVar898._2_62_ = auVar899._2_62_;
        cVar652 = (char)uVar611;
        uVar1788 = uVar611 & 0xff;
        auVar911._0_14_ = auVar898._0_14_;
        auVar911._14_2_ = 0;
        auVar911._16_48_ = auVar907._16_48_;
        auVar910._14_50_ = auVar911._14_50_;
        auVar910._0_12_ = auVar898._0_12_;
        auVar910._12_2_ = 0;
        auVar909._12_52_ = auVar910._12_52_;
        auVar909._0_10_ = auVar898._0_10_;
        auVar909._10_2_ = 0;
        auVar908._10_54_ = auVar909._10_54_;
        auVar908._0_10_ = (unkuint10)0 << 0x40;
        auVar225._56_2_ = 0;
        auVar225._0_56_ = auVar908._8_56_;
        auVar49._2_58_ = auVar225 << 0x10;
        auVar49._0_2_ = auVar899._2_2_;
        in_ZMM6._0_4_ = CONCAT22(0,uVar1788);
        in_ZMM6._4_60_ = auVar49;
        in_ZMM2._4_4_ = _UNK_1531f2ba4;
        in_ZMM2._0_4_ = ___xmm_00000000000000000000010000000100;
        in_ZMM2._8_4_ = _UNK_1531f2ba8;
        in_ZMM2._12_4_ = _UNK_1531f2bac;
        auVar1205._16_48_ = in_ZMM7._16_48_;
        auVar1182._0_4_ = ___xmm_00000000000000000000010000000100 - in_ZMM5._0_4_;
        auVar1182._4_4_ = _UNK_1531f2ba4 - auVar48._0_4_;
        auVar1182._8_4_ = _UNK_1531f2ba8 - auVar719._8_4_;
        auVar1182._12_4_ = _UNK_1531f2bac - auVar721._12_4_;
        auVar1488._0_4_ = ___xmm_00000000000000000000010000000100 - in_ZMM6._0_4_;
        auVar1488._4_4_ = _UNK_1531f2ba4 - auVar49._0_4_;
        auVar1488._8_4_ = _UNK_1531f2ba8 - auVar908._8_4_;
        auVar1488._12_4_ = _UNK_1531f2bac - auVar910._12_4_;
        auVar503 = ZEXT4864(in_ZMM0._16_48_) << 0x80;
        auVar491[0] = -(cVar1479 < '\0');
        auVar491[1] = -(cVar1479 < '\0');
        auVar491[2] = -(cVar1479 < '\0');
        auVar491[3] = -(cVar1479 < '\0');
        auVar491[4] = -((short)uVar546 < 0);
        auVar491[5] = -((short)uVar546 < 0);
        auVar491[6] = -((short)uVar546 < 0);
        auVar491[7] = -((short)uVar546 < 0);
        auVar491[8] = -('\0' < auVar503[8]);
        auVar491[9] = -('\0' < auVar503[9]);
        auVar491[10] = -('\0' < auVar503[10]);
        auVar491[0xb] = -('\0' < auVar503[0xb]);
        auVar491[0xc] = -('\0' < auVar503[0xc]);
        auVar491[0xd] = -('\0' < auVar503[0xd]);
        auVar491[0xe] = -('\0' < auVar503[0xe]);
        auVar491[0xf] = -('\0' < auVar503[0xf]);
        auVar503 = ZEXT4864(auVar567._16_48_) << 0x80;
        auVar549[0] = -(cVar652 < '\0');
        auVar549[1] = -(cVar652 < '\0');
        auVar549[2] = -(cVar652 < '\0');
        auVar549[3] = -(cVar652 < '\0');
        auVar549[4] = -((short)uVar611 < 0);
        auVar549[5] = -((short)uVar611 < 0);
        auVar549[6] = -((short)uVar611 < 0);
        auVar549[7] = -((short)uVar611 < 0);
        auVar549[8] = -('\0' < auVar503[8]);
        auVar549[9] = -('\0' < auVar503[9]);
        auVar549[10] = -('\0' < auVar503[10]);
        auVar549[0xb] = -('\0' < auVar503[0xb]);
        auVar549[0xc] = -('\0' < auVar503[0xc]);
        auVar549[0xd] = -('\0' < auVar503[0xd]);
        auVar549[0xe] = -('\0' < auVar503[0xe]);
        auVar549[0xf] = -('\0' < auVar503[0xf]);
        auVar1205._0_16_ = auVar1182 & auVar491;
        auVar504._0_16_ = ~auVar491 & in_ZMM5._0_16_ | auVar1205._0_16_;
        auVar504._16_48_ = in_ZMM0._16_48_;
        in_ZMM8._0_16_ = auVar1488 & auVar549;
        auVar567._0_16_ = ~auVar549 & in_ZMM6._0_16_ | in_ZMM8._0_16_;
        auVar505 = auVar504;
        auVar568 = auVar567;
        in_ZMM7 = auVar1205;
        if (auVar579._0_8_ == 4) {
LAB_140dce4de:
          auVar508._16_48_ = auVar505._16_48_;
          auVar508._0_12_ = auVar505._0_12_;
          auVar508._12_4_ = 0;
          auVar507._12_52_ = auVar508._12_52_;
          auVar507._0_8_ = auVar505._0_8_;
          auVar507._8_4_ = auVar505._4_4_;
          auVar506._8_56_ = auVar507._8_56_;
          auVar506._0_4_ = auVar505._0_4_;
          auVar506._4_4_ = 0;
          auVar571._16_48_ = auVar568._16_48_;
          auVar571._0_12_ = auVar568._0_12_;
          auVar571._12_4_ = 0;
          auVar570._12_52_ = auVar571._12_52_;
          auVar570._0_8_ = auVar568._0_8_;
          auVar570._8_4_ = auVar568._4_4_;
          auVar569._8_56_ = auVar570._8_56_;
          auVar569._0_4_ = auVar568._0_4_;
          auVar569._4_4_ = 0;
        }
        else {
          uVar546 = *(ushort *)(puVar469 + 5);
          uVar611 = *(ushort *)(puVar469 + 7);
          *(ushort *)(puVar464 + 5) = uVar546;
          *(ushort *)(puVar464 + 7) = uVar611;
          auVar921._0_16_ = ZEXT216(uVar546);
          auVar921._16_48_ = auVar907._16_48_;
          auVar920._15_49_ = auVar921._15_49_;
          auVar920._0_15_ = ZEXT215(uVar546);
          auVar919._14_50_ = auVar920._14_50_;
          auVar919._0_14_ = ZEXT214(uVar546);
          auVar918._13_51_ = auVar919._13_51_;
          auVar918._0_13_ = ZEXT213(uVar546);
          auVar917._12_52_ = auVar918._12_52_;
          auVar917._0_12_ = ZEXT212(uVar546);
          auVar916._11_53_ = auVar917._11_53_;
          auVar916._0_11_ = ZEXT211(uVar546);
          auVar915._10_54_ = auVar916._10_54_;
          auVar915._2_8_ = 0;
          auVar915._0_2_ = uVar546;
          auVar914._9_55_ = auVar915._9_55_;
          auVar914._2_7_ = 0;
          auVar914._0_2_ = uVar546;
          auVar228._56_8_ = 0;
          auVar228._0_56_ = auVar914._8_56_;
          auVar227._58_6_ = 0;
          auVar227._0_58_ = SUB6458(auVar228 << 0x40,6);
          auVar226[0x3c] = 0;
          auVar226._0_60_ = SUB6460(auVar227 << 0x30,4);
          auVar913[2] = (char)(uVar546 >> 8);
          auVar913._0_2_ = uVar546;
          auVar913._3_61_ = auVar226 << 8;
          auVar912._2_62_ = auVar913._2_62_;
          cVar1479 = (char)uVar546;
          uVar1789 = uVar546 & 0xff;
          auVar925._0_14_ = auVar912._0_14_;
          auVar925._14_2_ = 0;
          auVar925._16_48_ = auVar907._16_48_;
          auVar924._14_50_ = auVar925._14_50_;
          auVar924._0_12_ = auVar912._0_12_;
          auVar924._12_2_ = 0;
          auVar923._12_52_ = auVar924._12_52_;
          auVar923._0_10_ = auVar912._0_10_;
          auVar923._10_2_ = 0;
          auVar922._10_54_ = auVar923._10_54_;
          auVar922._0_10_ = (unkuint10)0 << 0x40;
          auVar229._56_2_ = 0;
          auVar229._0_56_ = auVar922._8_56_;
          auVar50._2_58_ = auVar229 << 0x10;
          auVar50._0_2_ = auVar913._2_2_;
          in_ZMM6._0_4_ = CONCAT22(0,uVar1789);
          in_ZMM6._4_60_ = auVar50;
          auVar1215._0_16_ = ZEXT216(uVar611);
          auVar1215._16_48_ = auVar1205._16_48_;
          auVar1214._15_49_ = auVar1215._15_49_;
          auVar1214._0_15_ = ZEXT215(uVar611);
          auVar1213._14_50_ = auVar1214._14_50_;
          auVar1213._0_14_ = ZEXT214(uVar611);
          auVar1212._13_51_ = auVar1213._13_51_;
          auVar1212._0_13_ = ZEXT213(uVar611);
          auVar1211._12_52_ = auVar1212._12_52_;
          auVar1211._0_12_ = ZEXT212(uVar611);
          auVar1210._11_53_ = auVar1211._11_53_;
          auVar1210._0_11_ = ZEXT211(uVar611);
          auVar1209._10_54_ = auVar1210._10_54_;
          auVar1209._2_8_ = 0;
          auVar1209._0_2_ = uVar611;
          auVar1208._9_55_ = auVar1209._9_55_;
          auVar1208._2_7_ = 0;
          auVar1208._0_2_ = uVar611;
          auVar232._56_8_ = 0;
          auVar232._0_56_ = auVar1208._8_56_;
          auVar231._58_6_ = 0;
          auVar231._0_58_ = SUB6458(auVar232 << 0x40,6);
          auVar230[0x3c] = 0;
          auVar230._0_60_ = SUB6460(auVar231 << 0x30,4);
          uVar526 = (undefined1)(uVar611 >> 8);
          auVar1207[2] = uVar526;
          auVar1207._0_2_ = uVar611;
          auVar1207._3_61_ = auVar230 << 8;
          auVar1206._2_62_ = auVar1207._2_62_;
          cVar652 = (char)uVar611;
          uVar1807 = uVar611 & 0xff;
          auVar1219._0_14_ = auVar1206._0_14_;
          auVar1219._14_2_ = 0;
          auVar1219._16_48_ = auVar1205._16_48_;
          auVar1218._14_50_ = auVar1219._14_50_;
          auVar1218._0_12_ = auVar1206._0_12_;
          auVar1218._12_2_ = 0;
          auVar1217._12_52_ = auVar1218._12_52_;
          auVar1217._0_10_ = auVar1206._0_10_;
          auVar1217._10_2_ = 0;
          auVar1216._10_54_ = auVar1217._10_54_;
          auVar1216._0_10_ = (unkuint10)0 << 0x40;
          auVar233._56_2_ = 0;
          auVar233._0_56_ = auVar1216._8_56_;
          auVar51._2_58_ = auVar233 << 0x10;
          auVar51._0_2_ = auVar1207._2_2_;
          in_ZMM7._0_4_ = CONCAT22(0,uVar1807);
          in_ZMM7._4_60_ = auVar51;
          auVar1489._0_4_ = iVar481 - in_ZMM6._0_4_;
          auVar1489._4_4_ = iVar489 - auVar50._0_4_;
          auVar1489._8_4_ = iVar1536 - auVar922._8_4_;
          auVar1489._12_4_ = iVar1676 - auVar924._12_4_;
          auVar1547._0_4_ = iVar481 - in_ZMM7._0_4_;
          auVar1547._4_4_ = iVar489 - auVar51._0_4_;
          auVar1547._8_4_ = iVar1536 - auVar1216._8_4_;
          auVar1547._12_4_ = iVar1676 - auVar1218._12_4_;
          auVar503 = ZEXT4864(in_ZMM10._16_48_) << 0x80;
          auVar1619[0] = -(cVar1479 < '\0');
          auVar1619[1] = -(cVar1479 < '\0');
          auVar1619[2] = -(cVar1479 < '\0');
          auVar1619[3] = -(cVar1479 < '\0');
          auVar1619[4] = -((short)uVar546 < 0);
          auVar1619[5] = -((short)uVar546 < 0);
          auVar1619[6] = -((short)uVar546 < 0);
          auVar1619[7] = -((short)uVar546 < 0);
          auVar1619[8] = -('\0' < auVar503[8]);
          auVar1619[9] = -('\0' < auVar503[9]);
          auVar1619[10] = -('\0' < auVar503[10]);
          auVar1619[0xb] = -('\0' < auVar503[0xb]);
          auVar1619[0xc] = -('\0' < auVar503[0xc]);
          auVar1619[0xd] = -('\0' < auVar503[0xd]);
          auVar1619[0xe] = -('\0' < auVar503[0xe]);
          auVar1619[0xf] = -('\0' < auVar503[0xf]);
          auVar731._0_16_ = ZEXT216(uVar611);
          auVar731._16_48_ = auVar718._16_48_;
          auVar730._15_49_ = auVar731._15_49_;
          auVar730._0_15_ = ZEXT215(uVar611);
          auVar729._14_50_ = auVar730._14_50_;
          auVar729._0_14_ = ZEXT214(uVar611);
          auVar728._13_51_ = auVar729._13_51_;
          auVar728._0_13_ = ZEXT213(uVar611);
          auVar727._12_52_ = auVar728._12_52_;
          auVar727._0_12_ = ZEXT212(uVar611);
          auVar726._11_53_ = auVar727._11_53_;
          auVar726._0_11_ = ZEXT211(uVar611);
          auVar725._10_54_ = auVar726._10_54_;
          auVar725._2_8_ = 0;
          auVar725._0_2_ = uVar611;
          auVar724._9_55_ = auVar725._9_55_;
          auVar724._2_7_ = 0;
          auVar724._0_2_ = uVar611;
          auVar234._56_8_ = 0;
          auVar234._0_56_ = auVar724._8_56_;
          auVar55._57_7_ = 0;
          auVar55._0_57_ = SUB6457(auVar234 << 0x40,7);
          auVar54._58_6_ = 0;
          auVar54._0_58_ = SUB6458(auVar55 << 0x38,6);
          auVar53._59_5_ = 0;
          auVar53._0_59_ = SUB6459(auVar54 << 0x30,5);
          auVar52._1_60_ = SUB6460(auVar53 << 0x28,4);
          auVar52[0] = uVar526;
          auVar52._61_3_ = 0;
          auVar723._62_2_ = 0;
          auVar723._0_62_ = SUB6462(auVar52 << 0x18,2);
          auVar723 = auVar723 << 0x10;
          auVar735._0_14_ = auVar723._0_14_;
          auVar735._14_2_ = 0;
          auVar735._16_48_ = auVar718._16_48_;
          auVar734._14_50_ = auVar735._14_50_;
          auVar734._0_12_ = auVar723._0_12_;
          auVar734._12_2_ = 0;
          auVar733._12_52_ = auVar734._12_52_;
          auVar733._0_10_ = auVar723._0_10_;
          auVar733._10_2_ = 0;
          auVar732._10_54_ = auVar733._10_54_;
          auVar732._0_10_ = (unkuint10)0;
          auVar57._2_56_ = auVar732._8_56_;
          auVar57._0_2_ = SUB642(auVar52 << 0x18,2);
          auVar57._58_6_ = 0;
          auVar56._60_4_ = 0;
          auVar56._0_60_ = SUB6460(auVar57 << 0x30,4);
          in_ZMM5 = auVar56 << 0x20;
          auVar503 = ZEXT4864(auVar649._16_48_) << 0x80;
          auVar636[0] = -(cVar652 < '\0');
          auVar636[1] = -(cVar652 < '\0');
          auVar636[2] = -(cVar652 < '\0');
          auVar636[3] = -(cVar652 < '\0');
          auVar636[4] = -((short)uVar611 < 0);
          auVar636[5] = -((short)uVar611 < 0);
          auVar636[6] = -((short)uVar611 < 0);
          auVar636[7] = -((short)uVar611 < 0);
          auVar636[8] = -('\0' < auVar503[8]);
          auVar636[9] = -('\0' < auVar503[9]);
          auVar636[10] = -('\0' < auVar503[10]);
          auVar636[0xb] = -('\0' < auVar503[0xb]);
          auVar636[0xc] = -('\0' < auVar503[0xc]);
          auVar636[0xd] = -('\0' < auVar503[0xd]);
          auVar636[0xe] = -('\0' < auVar503[0xe]);
          auVar636[0xf] = -('\0' < auVar503[0xf]);
          in_ZMM8._0_16_ = auVar1489 & auVar1619;
          in_ZMM10._0_16_ = ~auVar1619 & in_ZMM6._0_16_ | in_ZMM8._0_16_;
          in_ZMM9._0_16_ = auVar1547 & auVar636;
          auVar883 = ~auVar636 & in_ZMM7._0_16_ | in_ZMM9._0_16_;
          auVar505._0_4_ = auVar504._0_4_ + in_ZMM10._0_4_;
          auVar505._4_4_ = auVar504._4_4_ + in_ZMM10._4_4_;
          auVar505._8_4_ = auVar504._8_4_ + in_ZMM10._8_4_;
          auVar505._12_4_ = auVar504._12_4_ + in_ZMM10._12_4_;
          auVar505._16_48_ = in_ZMM0._16_48_;
          auVar568._0_4_ = auVar567._0_4_ + auVar883._0_4_;
          auVar568._4_4_ = auVar567._4_4_ + auVar883._4_4_;
          auVar568._8_4_ = auVar567._8_4_ + auVar883._8_4_;
          auVar568._12_4_ = auVar567._12_4_ + auVar883._12_4_;
          auVar568._16_48_ = auVar567._16_48_;
          if (uVar476 == 8) goto LAB_140dce4de;
          uVar546 = *(ushort *)(puVar469 + 9);
          uVar611 = *(ushort *)(puVar469 + 0xb);
          *(ushort *)(puVar464 + 9) = uVar546;
          *(ushort *)(puVar464 + 0xb) = uVar611;
          auVar935._0_16_ = ZEXT216(uVar546);
          auVar935._16_48_ = auVar907._16_48_;
          auVar934._15_49_ = auVar935._15_49_;
          auVar934._0_15_ = ZEXT215(uVar546);
          auVar933._14_50_ = auVar934._14_50_;
          auVar933._0_14_ = ZEXT214(uVar546);
          auVar932._13_51_ = auVar933._13_51_;
          auVar932._0_13_ = ZEXT213(uVar546);
          auVar931._12_52_ = auVar932._12_52_;
          auVar931._0_12_ = ZEXT212(uVar546);
          auVar930._11_53_ = auVar931._11_53_;
          auVar930._0_11_ = ZEXT211(uVar546);
          auVar929._10_54_ = auVar930._10_54_;
          auVar929._2_8_ = 0;
          auVar929._0_2_ = uVar546;
          auVar928._9_55_ = auVar929._9_55_;
          auVar928._2_7_ = 0;
          auVar928._0_2_ = uVar546;
          auVar237._56_8_ = 0;
          auVar237._0_56_ = auVar928._8_56_;
          auVar236._58_6_ = 0;
          auVar236._0_58_ = SUB6458(auVar237 << 0x40,6);
          auVar235[0x3c] = 0;
          auVar235._0_60_ = SUB6460(auVar236 << 0x30,4);
          auVar927[2] = (char)(uVar546 >> 8);
          auVar927._0_2_ = uVar546;
          auVar927._3_61_ = auVar235 << 8;
          auVar926._2_62_ = auVar927._2_62_;
          cVar1479 = (char)uVar546;
          uVar1790 = uVar546 & 0xff;
          auVar939._0_14_ = auVar926._0_14_;
          auVar939._14_2_ = 0;
          auVar939._16_48_ = auVar907._16_48_;
          auVar938._14_50_ = auVar939._14_50_;
          auVar938._0_12_ = auVar926._0_12_;
          auVar938._12_2_ = 0;
          auVar937._12_52_ = auVar938._12_52_;
          auVar937._0_10_ = auVar926._0_10_;
          auVar937._10_2_ = 0;
          auVar936._10_54_ = auVar937._10_54_;
          auVar936._0_10_ = (unkuint10)0 << 0x40;
          auVar238._56_2_ = 0;
          auVar238._0_56_ = auVar936._8_56_;
          auVar58._2_58_ = auVar238 << 0x10;
          auVar58._0_2_ = auVar927._2_2_;
          in_ZMM6._0_4_ = CONCAT22(0,uVar1790);
          in_ZMM6._4_60_ = auVar58;
          auVar1229._0_16_ = ZEXT216(uVar611);
          auVar1229._16_48_ = auVar1205._16_48_;
          auVar1228._15_49_ = auVar1229._15_49_;
          auVar1228._0_15_ = ZEXT215(uVar611);
          auVar1227._14_50_ = auVar1228._14_50_;
          auVar1227._0_14_ = ZEXT214(uVar611);
          auVar1226._13_51_ = auVar1227._13_51_;
          auVar1226._0_13_ = ZEXT213(uVar611);
          auVar1225._12_52_ = auVar1226._12_52_;
          auVar1225._0_12_ = ZEXT212(uVar611);
          auVar1224._11_53_ = auVar1225._11_53_;
          auVar1224._0_11_ = ZEXT211(uVar611);
          auVar1223._10_54_ = auVar1224._10_54_;
          auVar1223._2_8_ = 0;
          auVar1223._0_2_ = uVar611;
          auVar1222._9_55_ = auVar1223._9_55_;
          auVar1222._2_7_ = 0;
          auVar1222._0_2_ = uVar611;
          auVar241._56_8_ = 0;
          auVar241._0_56_ = auVar1222._8_56_;
          auVar240._58_6_ = 0;
          auVar240._0_58_ = SUB6458(auVar241 << 0x40,6);
          auVar239[0x3c] = 0;
          auVar239._0_60_ = SUB6460(auVar240 << 0x30,4);
          uVar526 = (undefined1)(uVar611 >> 8);
          auVar1221[2] = uVar526;
          auVar1221._0_2_ = uVar611;
          auVar1221._3_61_ = auVar239 << 8;
          auVar1220._2_62_ = auVar1221._2_62_;
          cVar652 = (char)uVar611;
          uVar1808 = uVar611 & 0xff;
          auVar1233._0_14_ = auVar1220._0_14_;
          auVar1233._14_2_ = 0;
          auVar1233._16_48_ = auVar1205._16_48_;
          auVar1232._14_50_ = auVar1233._14_50_;
          auVar1232._0_12_ = auVar1220._0_12_;
          auVar1232._12_2_ = 0;
          auVar1231._12_52_ = auVar1232._12_52_;
          auVar1231._0_10_ = auVar1220._0_10_;
          auVar1231._10_2_ = 0;
          auVar1230._10_54_ = auVar1231._10_54_;
          auVar1230._0_10_ = (unkuint10)0 << 0x40;
          auVar242._56_2_ = 0;
          auVar242._0_56_ = auVar1230._8_56_;
          auVar59._2_58_ = auVar242 << 0x10;
          auVar59._0_2_ = auVar1221._2_2_;
          in_ZMM7._0_4_ = CONCAT22(0,uVar1808);
          in_ZMM7._4_60_ = auVar59;
          auVar1490._0_4_ = iVar481 - in_ZMM6._0_4_;
          auVar1490._4_4_ = iVar489 - auVar58._0_4_;
          auVar1490._8_4_ = iVar1536 - auVar936._8_4_;
          auVar1490._12_4_ = iVar1676 - auVar938._12_4_;
          auVar1548._0_4_ = iVar481 - in_ZMM7._0_4_;
          auVar1548._4_4_ = iVar489 - auVar59._0_4_;
          auVar1548._8_4_ = iVar1536 - auVar1230._8_4_;
          auVar1548._12_4_ = iVar1676 - auVar1232._12_4_;
          auVar503 = ZEXT4864(in_ZMM10._16_48_) << 0x80;
          auVar1620[0] = -(cVar1479 < '\0');
          auVar1620[1] = -(cVar1479 < '\0');
          auVar1620[2] = -(cVar1479 < '\0');
          auVar1620[3] = -(cVar1479 < '\0');
          auVar1620[4] = -((short)uVar546 < 0);
          auVar1620[5] = -((short)uVar546 < 0);
          auVar1620[6] = -((short)uVar546 < 0);
          auVar1620[7] = -((short)uVar546 < 0);
          auVar1620[8] = -('\0' < auVar503[8]);
          auVar1620[9] = -('\0' < auVar503[9]);
          auVar1620[10] = -('\0' < auVar503[10]);
          auVar1620[0xb] = -('\0' < auVar503[0xb]);
          auVar1620[0xc] = -('\0' < auVar503[0xc]);
          auVar1620[0xd] = -('\0' < auVar503[0xd]);
          auVar1620[0xe] = -('\0' < auVar503[0xe]);
          auVar1620[0xf] = -('\0' < auVar503[0xf]);
          auVar744._0_16_ = ZEXT216(uVar611);
          auVar744._16_48_ = auVar718._16_48_;
          auVar743._15_49_ = auVar744._15_49_;
          auVar743._0_15_ = ZEXT215(uVar611);
          auVar742._14_50_ = auVar743._14_50_;
          auVar742._0_14_ = ZEXT214(uVar611);
          auVar741._13_51_ = auVar742._13_51_;
          auVar741._0_13_ = ZEXT213(uVar611);
          auVar740._12_52_ = auVar741._12_52_;
          auVar740._0_12_ = ZEXT212(uVar611);
          auVar739._11_53_ = auVar740._11_53_;
          auVar739._0_11_ = ZEXT211(uVar611);
          auVar738._10_54_ = auVar739._10_54_;
          auVar738._2_8_ = 0;
          auVar738._0_2_ = uVar611;
          auVar737._9_55_ = auVar738._9_55_;
          auVar737._2_7_ = 0;
          auVar737._0_2_ = uVar611;
          auVar243._56_8_ = 0;
          auVar243._0_56_ = auVar737._8_56_;
          auVar63._57_7_ = 0;
          auVar63._0_57_ = SUB6457(auVar243 << 0x40,7);
          auVar62._58_6_ = 0;
          auVar62._0_58_ = SUB6458(auVar63 << 0x38,6);
          auVar61._59_5_ = 0;
          auVar61._0_59_ = SUB6459(auVar62 << 0x30,5);
          auVar60._1_60_ = SUB6460(auVar61 << 0x28,4);
          auVar60[0] = uVar526;
          auVar60._61_3_ = 0;
          auVar736._62_2_ = 0;
          auVar736._0_62_ = SUB6462(auVar60 << 0x18,2);
          auVar736 = auVar736 << 0x10;
          auVar748._0_14_ = auVar736._0_14_;
          auVar748._14_2_ = 0;
          auVar748._16_48_ = auVar718._16_48_;
          auVar747._14_50_ = auVar748._14_50_;
          auVar747._0_12_ = auVar736._0_12_;
          auVar747._12_2_ = 0;
          auVar746._12_52_ = auVar747._12_52_;
          auVar746._0_10_ = auVar736._0_10_;
          auVar746._10_2_ = 0;
          auVar745._10_54_ = auVar746._10_54_;
          auVar745._0_10_ = (unkuint10)0;
          auVar65._2_56_ = auVar745._8_56_;
          auVar65._0_2_ = SUB642(auVar60 << 0x18,2);
          auVar65._58_6_ = 0;
          auVar64._60_4_ = 0;
          auVar64._0_60_ = SUB6460(auVar65 << 0x30,4);
          in_ZMM5 = auVar64 << 0x20;
          auVar503 = ZEXT4864(auVar649._16_48_) << 0x80;
          auVar637[0] = -(cVar652 < '\0');
          auVar637[1] = -(cVar652 < '\0');
          auVar637[2] = -(cVar652 < '\0');
          auVar637[3] = -(cVar652 < '\0');
          auVar637[4] = -((short)uVar611 < 0);
          auVar637[5] = -((short)uVar611 < 0);
          auVar637[6] = -((short)uVar611 < 0);
          auVar637[7] = -((short)uVar611 < 0);
          auVar637[8] = -('\0' < auVar503[8]);
          auVar637[9] = -('\0' < auVar503[9]);
          auVar637[10] = -('\0' < auVar503[10]);
          auVar637[0xb] = -('\0' < auVar503[0xb]);
          auVar637[0xc] = -('\0' < auVar503[0xc]);
          auVar637[0xd] = -('\0' < auVar503[0xd]);
          auVar637[0xe] = -('\0' < auVar503[0xe]);
          auVar637[0xf] = -('\0' < auVar503[0xf]);
          in_ZMM8._0_16_ = auVar1490 & auVar1620;
          in_ZMM10._0_16_ = ~auVar1620 & in_ZMM6._0_16_ | in_ZMM8._0_16_;
          in_ZMM9._0_16_ = auVar1548 & auVar637;
          auVar883 = ~auVar637 & in_ZMM7._0_16_ | in_ZMM9._0_16_;
          auVar505._0_4_ = auVar505._0_4_ + in_ZMM10._0_4_;
          auVar505._4_4_ = auVar505._4_4_ + in_ZMM10._4_4_;
          auVar505._8_4_ = auVar505._8_4_ + in_ZMM10._8_4_;
          auVar505._12_4_ = auVar505._12_4_ + in_ZMM10._12_4_;
          auVar568._0_4_ = auVar568._0_4_ + auVar883._0_4_;
          auVar568._4_4_ = auVar568._4_4_ + auVar883._4_4_;
          auVar568._8_4_ = auVar568._8_4_ + auVar883._8_4_;
          auVar568._12_4_ = auVar568._12_4_ + auVar883._12_4_;
          if (uVar476 == 0xc) goto LAB_140dce4de;
          uVar546 = *(ushort *)(puVar469 + 0xd);
          uVar611 = *(ushort *)(puVar469 + 0xf);
          *(ushort *)(puVar464 + 0xd) = uVar546;
          *(ushort *)(puVar464 + 0xf) = uVar611;
          auVar949._0_16_ = ZEXT216(uVar546);
          auVar949._16_48_ = auVar907._16_48_;
          auVar948._15_49_ = auVar949._15_49_;
          auVar948._0_15_ = ZEXT215(uVar546);
          auVar947._14_50_ = auVar948._14_50_;
          auVar947._0_14_ = ZEXT214(uVar546);
          auVar946._13_51_ = auVar947._13_51_;
          auVar946._0_13_ = ZEXT213(uVar546);
          auVar945._12_52_ = auVar946._12_52_;
          auVar945._0_12_ = ZEXT212(uVar546);
          auVar944._11_53_ = auVar945._11_53_;
          auVar944._0_11_ = ZEXT211(uVar546);
          auVar943._10_54_ = auVar944._10_54_;
          auVar943._2_8_ = 0;
          auVar943._0_2_ = uVar546;
          auVar942._9_55_ = auVar943._9_55_;
          auVar942._2_7_ = 0;
          auVar942._0_2_ = uVar546;
          auVar246._56_8_ = 0;
          auVar246._0_56_ = auVar942._8_56_;
          auVar245._58_6_ = 0;
          auVar245._0_58_ = SUB6458(auVar246 << 0x40,6);
          auVar244[0x3c] = 0;
          auVar244._0_60_ = SUB6460(auVar245 << 0x30,4);
          auVar941[2] = (char)(uVar546 >> 8);
          auVar941._0_2_ = uVar546;
          auVar941._3_61_ = auVar244 << 8;
          auVar940._2_62_ = auVar941._2_62_;
          cVar1479 = (char)uVar546;
          uVar1791 = uVar546 & 0xff;
          auVar953._0_14_ = auVar940._0_14_;
          auVar953._14_2_ = 0;
          auVar953._16_48_ = auVar907._16_48_;
          auVar952._14_50_ = auVar953._14_50_;
          auVar952._0_12_ = auVar940._0_12_;
          auVar952._12_2_ = 0;
          auVar951._12_52_ = auVar952._12_52_;
          auVar951._0_10_ = auVar940._0_10_;
          auVar951._10_2_ = 0;
          auVar950._10_54_ = auVar951._10_54_;
          auVar950._0_10_ = (unkuint10)0 << 0x40;
          auVar247._56_2_ = 0;
          auVar247._0_56_ = auVar950._8_56_;
          auVar66._2_58_ = auVar247 << 0x10;
          auVar66._0_2_ = auVar941._2_2_;
          in_ZMM6._0_4_ = CONCAT22(0,uVar1791);
          in_ZMM6._4_60_ = auVar66;
          auVar1243._0_16_ = ZEXT216(uVar611);
          auVar1243._16_48_ = auVar1205._16_48_;
          auVar1242._15_49_ = auVar1243._15_49_;
          auVar1242._0_15_ = ZEXT215(uVar611);
          auVar1241._14_50_ = auVar1242._14_50_;
          auVar1241._0_14_ = ZEXT214(uVar611);
          auVar1240._13_51_ = auVar1241._13_51_;
          auVar1240._0_13_ = ZEXT213(uVar611);
          auVar1239._12_52_ = auVar1240._12_52_;
          auVar1239._0_12_ = ZEXT212(uVar611);
          auVar1238._11_53_ = auVar1239._11_53_;
          auVar1238._0_11_ = ZEXT211(uVar611);
          auVar1237._10_54_ = auVar1238._10_54_;
          auVar1237._2_8_ = 0;
          auVar1237._0_2_ = uVar611;
          auVar1236._9_55_ = auVar1237._9_55_;
          auVar1236._2_7_ = 0;
          auVar1236._0_2_ = uVar611;
          auVar250._56_8_ = 0;
          auVar250._0_56_ = auVar1236._8_56_;
          auVar249._58_6_ = 0;
          auVar249._0_58_ = SUB6458(auVar250 << 0x40,6);
          auVar248[0x3c] = 0;
          auVar248._0_60_ = SUB6460(auVar249 << 0x30,4);
          uVar526 = (undefined1)(uVar611 >> 8);
          auVar1235[2] = uVar526;
          auVar1235._0_2_ = uVar611;
          auVar1235._3_61_ = auVar248 << 8;
          auVar1234._2_62_ = auVar1235._2_62_;
          cVar652 = (char)uVar611;
          uVar1809 = uVar611 & 0xff;
          auVar1247._0_14_ = auVar1234._0_14_;
          auVar1247._14_2_ = 0;
          auVar1247._16_48_ = auVar1205._16_48_;
          auVar1246._14_50_ = auVar1247._14_50_;
          auVar1246._0_12_ = auVar1234._0_12_;
          auVar1246._12_2_ = 0;
          auVar1245._12_52_ = auVar1246._12_52_;
          auVar1245._0_10_ = auVar1234._0_10_;
          auVar1245._10_2_ = 0;
          auVar1244._10_54_ = auVar1245._10_54_;
          auVar1244._0_10_ = (unkuint10)0 << 0x40;
          auVar251._56_2_ = 0;
          auVar251._0_56_ = auVar1244._8_56_;
          auVar67._2_58_ = auVar251 << 0x10;
          auVar67._0_2_ = auVar1235._2_2_;
          in_ZMM7._0_4_ = CONCAT22(0,uVar1809);
          in_ZMM7._4_60_ = auVar67;
          auVar1491._0_4_ = iVar481 - in_ZMM6._0_4_;
          auVar1491._4_4_ = iVar489 - auVar66._0_4_;
          auVar1491._8_4_ = iVar1536 - auVar950._8_4_;
          auVar1491._12_4_ = iVar1676 - auVar952._12_4_;
          auVar1549._0_4_ = iVar481 - in_ZMM7._0_4_;
          auVar1549._4_4_ = iVar489 - auVar67._0_4_;
          auVar1549._8_4_ = iVar1536 - auVar1244._8_4_;
          auVar1549._12_4_ = iVar1676 - auVar1246._12_4_;
          auVar503 = ZEXT4864(in_ZMM10._16_48_) << 0x80;
          auVar1621[0] = -(cVar1479 < '\0');
          auVar1621[1] = -(cVar1479 < '\0');
          auVar1621[2] = -(cVar1479 < '\0');
          auVar1621[3] = -(cVar1479 < '\0');
          auVar1621[4] = -((short)uVar546 < 0);
          auVar1621[5] = -((short)uVar546 < 0);
          auVar1621[6] = -((short)uVar546 < 0);
          auVar1621[7] = -((short)uVar546 < 0);
          auVar1621[8] = -('\0' < auVar503[8]);
          auVar1621[9] = -('\0' < auVar503[9]);
          auVar1621[10] = -('\0' < auVar503[10]);
          auVar1621[0xb] = -('\0' < auVar503[0xb]);
          auVar1621[0xc] = -('\0' < auVar503[0xc]);
          auVar1621[0xd] = -('\0' < auVar503[0xd]);
          auVar1621[0xe] = -('\0' < auVar503[0xe]);
          auVar1621[0xf] = -('\0' < auVar503[0xf]);
          auVar757._0_16_ = ZEXT216(uVar611);
          auVar757._16_48_ = auVar718._16_48_;
          auVar756._15_49_ = auVar757._15_49_;
          auVar756._0_15_ = ZEXT215(uVar611);
          auVar755._14_50_ = auVar756._14_50_;
          auVar755._0_14_ = ZEXT214(uVar611);
          auVar754._13_51_ = auVar755._13_51_;
          auVar754._0_13_ = ZEXT213(uVar611);
          auVar753._12_52_ = auVar754._12_52_;
          auVar753._0_12_ = ZEXT212(uVar611);
          auVar752._11_53_ = auVar753._11_53_;
          auVar752._0_11_ = ZEXT211(uVar611);
          auVar751._10_54_ = auVar752._10_54_;
          auVar751._2_8_ = 0;
          auVar751._0_2_ = uVar611;
          auVar750._9_55_ = auVar751._9_55_;
          auVar750._2_7_ = 0;
          auVar750._0_2_ = uVar611;
          auVar252._56_8_ = 0;
          auVar252._0_56_ = auVar750._8_56_;
          auVar71._57_7_ = 0;
          auVar71._0_57_ = SUB6457(auVar252 << 0x40,7);
          auVar70._58_6_ = 0;
          auVar70._0_58_ = SUB6458(auVar71 << 0x38,6);
          auVar69._59_5_ = 0;
          auVar69._0_59_ = SUB6459(auVar70 << 0x30,5);
          auVar68._1_60_ = SUB6460(auVar69 << 0x28,4);
          auVar68[0] = uVar526;
          auVar68._61_3_ = 0;
          auVar749._62_2_ = 0;
          auVar749._0_62_ = SUB6462(auVar68 << 0x18,2);
          auVar749 = auVar749 << 0x10;
          auVar761._0_14_ = auVar749._0_14_;
          auVar761._14_2_ = 0;
          auVar761._16_48_ = auVar718._16_48_;
          auVar760._14_50_ = auVar761._14_50_;
          auVar760._0_12_ = auVar749._0_12_;
          auVar760._12_2_ = 0;
          auVar759._12_52_ = auVar760._12_52_;
          auVar759._0_10_ = auVar749._0_10_;
          auVar759._10_2_ = 0;
          auVar758._10_54_ = auVar759._10_54_;
          auVar758._0_10_ = (unkuint10)0;
          auVar73._2_56_ = auVar758._8_56_;
          auVar73._0_2_ = SUB642(auVar68 << 0x18,2);
          auVar73._58_6_ = 0;
          auVar72._60_4_ = 0;
          auVar72._0_60_ = SUB6460(auVar73 << 0x30,4);
          in_ZMM5 = auVar72 << 0x20;
          auVar503 = ZEXT4864(auVar649._16_48_) << 0x80;
          auVar638[0] = -(cVar652 < '\0');
          auVar638[1] = -(cVar652 < '\0');
          auVar638[2] = -(cVar652 < '\0');
          auVar638[3] = -(cVar652 < '\0');
          auVar638[4] = -((short)uVar611 < 0);
          auVar638[5] = -((short)uVar611 < 0);
          auVar638[6] = -((short)uVar611 < 0);
          auVar638[7] = -((short)uVar611 < 0);
          auVar638[8] = -('\0' < auVar503[8]);
          auVar638[9] = -('\0' < auVar503[9]);
          auVar638[10] = -('\0' < auVar503[10]);
          auVar638[0xb] = -('\0' < auVar503[0xb]);
          auVar638[0xc] = -('\0' < auVar503[0xc]);
          auVar638[0xd] = -('\0' < auVar503[0xd]);
          auVar638[0xe] = -('\0' < auVar503[0xe]);
          auVar638[0xf] = -('\0' < auVar503[0xf]);
          in_ZMM8._0_16_ = auVar1491 & auVar1621;
          in_ZMM10._0_16_ = ~auVar1621 & in_ZMM6._0_16_ | in_ZMM8._0_16_;
          in_ZMM9._0_16_ = auVar1549 & auVar638;
          auVar883 = ~auVar638 & in_ZMM7._0_16_ | in_ZMM9._0_16_;
          auVar505._0_4_ = auVar505._0_4_ + in_ZMM10._0_4_;
          auVar505._4_4_ = auVar505._4_4_ + in_ZMM10._4_4_;
          auVar505._8_4_ = auVar505._8_4_ + in_ZMM10._8_4_;
          auVar505._12_4_ = auVar505._12_4_ + in_ZMM10._12_4_;
          auVar568._0_4_ = auVar568._0_4_ + auVar883._0_4_;
          auVar568._4_4_ = auVar568._4_4_ + auVar883._4_4_;
          auVar568._8_4_ = auVar568._8_4_ + auVar883._8_4_;
          auVar568._12_4_ = auVar568._12_4_ + auVar883._12_4_;
          if (uVar476 == 0x10) goto LAB_140dce4de;
          uVar546 = *(ushort *)(puVar469 + 0x11);
          uVar611 = *(ushort *)(puVar469 + 0x13);
          *(ushort *)(puVar464 + 0x11) = uVar546;
          *(ushort *)(puVar464 + 0x13) = uVar611;
          auVar963._0_16_ = ZEXT216(uVar546);
          auVar963._16_48_ = auVar907._16_48_;
          auVar962._15_49_ = auVar963._15_49_;
          auVar962._0_15_ = ZEXT215(uVar546);
          auVar961._14_50_ = auVar962._14_50_;
          auVar961._0_14_ = ZEXT214(uVar546);
          auVar960._13_51_ = auVar961._13_51_;
          auVar960._0_13_ = ZEXT213(uVar546);
          auVar959._12_52_ = auVar960._12_52_;
          auVar959._0_12_ = ZEXT212(uVar546);
          auVar958._11_53_ = auVar959._11_53_;
          auVar958._0_11_ = ZEXT211(uVar546);
          auVar957._10_54_ = auVar958._10_54_;
          auVar957._2_8_ = 0;
          auVar957._0_2_ = uVar546;
          auVar956._9_55_ = auVar957._9_55_;
          auVar956._2_7_ = 0;
          auVar956._0_2_ = uVar546;
          auVar255._56_8_ = 0;
          auVar255._0_56_ = auVar956._8_56_;
          auVar254._58_6_ = 0;
          auVar254._0_58_ = SUB6458(auVar255 << 0x40,6);
          auVar253[0x3c] = 0;
          auVar253._0_60_ = SUB6460(auVar254 << 0x30,4);
          auVar955[2] = (char)(uVar546 >> 8);
          auVar955._0_2_ = uVar546;
          auVar955._3_61_ = auVar253 << 8;
          auVar954._2_62_ = auVar955._2_62_;
          cVar1479 = (char)uVar546;
          uVar1792 = uVar546 & 0xff;
          auVar967._0_14_ = auVar954._0_14_;
          auVar967._14_2_ = 0;
          auVar967._16_48_ = auVar907._16_48_;
          auVar966._14_50_ = auVar967._14_50_;
          auVar966._0_12_ = auVar954._0_12_;
          auVar966._12_2_ = 0;
          auVar965._12_52_ = auVar966._12_52_;
          auVar965._0_10_ = auVar954._0_10_;
          auVar965._10_2_ = 0;
          auVar964._10_54_ = auVar965._10_54_;
          auVar964._0_10_ = (unkuint10)0 << 0x40;
          auVar256._56_2_ = 0;
          auVar256._0_56_ = auVar964._8_56_;
          auVar74._2_58_ = auVar256 << 0x10;
          auVar74._0_2_ = auVar955._2_2_;
          in_ZMM6._0_4_ = CONCAT22(0,uVar1792);
          in_ZMM6._4_60_ = auVar74;
          auVar1257._0_16_ = ZEXT216(uVar611);
          auVar1257._16_48_ = auVar1205._16_48_;
          auVar1256._15_49_ = auVar1257._15_49_;
          auVar1256._0_15_ = ZEXT215(uVar611);
          auVar1255._14_50_ = auVar1256._14_50_;
          auVar1255._0_14_ = ZEXT214(uVar611);
          auVar1254._13_51_ = auVar1255._13_51_;
          auVar1254._0_13_ = ZEXT213(uVar611);
          auVar1253._12_52_ = auVar1254._12_52_;
          auVar1253._0_12_ = ZEXT212(uVar611);
          auVar1252._11_53_ = auVar1253._11_53_;
          auVar1252._0_11_ = ZEXT211(uVar611);
          auVar1251._10_54_ = auVar1252._10_54_;
          auVar1251._2_8_ = 0;
          auVar1251._0_2_ = uVar611;
          auVar1250._9_55_ = auVar1251._9_55_;
          auVar1250._2_7_ = 0;
          auVar1250._0_2_ = uVar611;
          auVar259._56_8_ = 0;
          auVar259._0_56_ = auVar1250._8_56_;
          auVar258._58_6_ = 0;
          auVar258._0_58_ = SUB6458(auVar259 << 0x40,6);
          auVar257[0x3c] = 0;
          auVar257._0_60_ = SUB6460(auVar258 << 0x30,4);
          uVar526 = (undefined1)(uVar611 >> 8);
          auVar1249[2] = uVar526;
          auVar1249._0_2_ = uVar611;
          auVar1249._3_61_ = auVar257 << 8;
          auVar1248._2_62_ = auVar1249._2_62_;
          cVar652 = (char)uVar611;
          uVar1810 = uVar611 & 0xff;
          auVar1261._0_14_ = auVar1248._0_14_;
          auVar1261._14_2_ = 0;
          auVar1261._16_48_ = auVar1205._16_48_;
          auVar1260._14_50_ = auVar1261._14_50_;
          auVar1260._0_12_ = auVar1248._0_12_;
          auVar1260._12_2_ = 0;
          auVar1259._12_52_ = auVar1260._12_52_;
          auVar1259._0_10_ = auVar1248._0_10_;
          auVar1259._10_2_ = 0;
          auVar1258._10_54_ = auVar1259._10_54_;
          auVar1258._0_10_ = (unkuint10)0 << 0x40;
          auVar260._56_2_ = 0;
          auVar260._0_56_ = auVar1258._8_56_;
          auVar75._2_58_ = auVar260 << 0x10;
          auVar75._0_2_ = auVar1249._2_2_;
          in_ZMM7._0_4_ = CONCAT22(0,uVar1810);
          in_ZMM7._4_60_ = auVar75;
          auVar1492._0_4_ = iVar481 - in_ZMM6._0_4_;
          auVar1492._4_4_ = iVar489 - auVar74._0_4_;
          auVar1492._8_4_ = iVar1536 - auVar964._8_4_;
          auVar1492._12_4_ = iVar1676 - auVar966._12_4_;
          auVar1550._0_4_ = iVar481 - in_ZMM7._0_4_;
          auVar1550._4_4_ = iVar489 - auVar75._0_4_;
          auVar1550._8_4_ = iVar1536 - auVar1258._8_4_;
          auVar1550._12_4_ = iVar1676 - auVar1260._12_4_;
          auVar503 = ZEXT4864(in_ZMM10._16_48_) << 0x80;
          auVar1622[0] = -(cVar1479 < '\0');
          auVar1622[1] = -(cVar1479 < '\0');
          auVar1622[2] = -(cVar1479 < '\0');
          auVar1622[3] = -(cVar1479 < '\0');
          auVar1622[4] = -((short)uVar546 < 0);
          auVar1622[5] = -((short)uVar546 < 0);
          auVar1622[6] = -((short)uVar546 < 0);
          auVar1622[7] = -((short)uVar546 < 0);
          auVar1622[8] = -('\0' < auVar503[8]);
          auVar1622[9] = -('\0' < auVar503[9]);
          auVar1622[10] = -('\0' < auVar503[10]);
          auVar1622[0xb] = -('\0' < auVar503[0xb]);
          auVar1622[0xc] = -('\0' < auVar503[0xc]);
          auVar1622[0xd] = -('\0' < auVar503[0xd]);
          auVar1622[0xe] = -('\0' < auVar503[0xe]);
          auVar1622[0xf] = -('\0' < auVar503[0xf]);
          auVar770._0_16_ = ZEXT216(uVar611);
          auVar770._16_48_ = auVar718._16_48_;
          auVar769._15_49_ = auVar770._15_49_;
          auVar769._0_15_ = ZEXT215(uVar611);
          auVar768._14_50_ = auVar769._14_50_;
          auVar768._0_14_ = ZEXT214(uVar611);
          auVar767._13_51_ = auVar768._13_51_;
          auVar767._0_13_ = ZEXT213(uVar611);
          auVar766._12_52_ = auVar767._12_52_;
          auVar766._0_12_ = ZEXT212(uVar611);
          auVar765._11_53_ = auVar766._11_53_;
          auVar765._0_11_ = ZEXT211(uVar611);
          auVar764._10_54_ = auVar765._10_54_;
          auVar764._2_8_ = 0;
          auVar764._0_2_ = uVar611;
          auVar763._9_55_ = auVar764._9_55_;
          auVar763._2_7_ = 0;
          auVar763._0_2_ = uVar611;
          auVar261._56_8_ = 0;
          auVar261._0_56_ = auVar763._8_56_;
          auVar79._57_7_ = 0;
          auVar79._0_57_ = SUB6457(auVar261 << 0x40,7);
          auVar78._58_6_ = 0;
          auVar78._0_58_ = SUB6458(auVar79 << 0x38,6);
          auVar77._59_5_ = 0;
          auVar77._0_59_ = SUB6459(auVar78 << 0x30,5);
          auVar76._1_60_ = SUB6460(auVar77 << 0x28,4);
          auVar76[0] = uVar526;
          auVar76._61_3_ = 0;
          auVar762._62_2_ = 0;
          auVar762._0_62_ = SUB6462(auVar76 << 0x18,2);
          auVar762 = auVar762 << 0x10;
          auVar774._0_14_ = auVar762._0_14_;
          auVar774._14_2_ = 0;
          auVar774._16_48_ = auVar718._16_48_;
          auVar773._14_50_ = auVar774._14_50_;
          auVar773._0_12_ = auVar762._0_12_;
          auVar773._12_2_ = 0;
          auVar772._12_52_ = auVar773._12_52_;
          auVar772._0_10_ = auVar762._0_10_;
          auVar772._10_2_ = 0;
          auVar771._10_54_ = auVar772._10_54_;
          auVar771._0_10_ = (unkuint10)0;
          auVar81._2_56_ = auVar771._8_56_;
          auVar81._0_2_ = SUB642(auVar76 << 0x18,2);
          auVar81._58_6_ = 0;
          auVar80._60_4_ = 0;
          auVar80._0_60_ = SUB6460(auVar81 << 0x30,4);
          in_ZMM5 = auVar80 << 0x20;
          auVar503 = ZEXT4864(auVar649._16_48_) << 0x80;
          auVar639[0] = -(cVar652 < '\0');
          auVar639[1] = -(cVar652 < '\0');
          auVar639[2] = -(cVar652 < '\0');
          auVar639[3] = -(cVar652 < '\0');
          auVar639[4] = -((short)uVar611 < 0);
          auVar639[5] = -((short)uVar611 < 0);
          auVar639[6] = -((short)uVar611 < 0);
          auVar639[7] = -((short)uVar611 < 0);
          auVar639[8] = -('\0' < auVar503[8]);
          auVar639[9] = -('\0' < auVar503[9]);
          auVar639[10] = -('\0' < auVar503[10]);
          auVar639[0xb] = -('\0' < auVar503[0xb]);
          auVar639[0xc] = -('\0' < auVar503[0xc]);
          auVar639[0xd] = -('\0' < auVar503[0xd]);
          auVar639[0xe] = -('\0' < auVar503[0xe]);
          auVar639[0xf] = -('\0' < auVar503[0xf]);
          in_ZMM8._0_16_ = auVar1492 & auVar1622;
          in_ZMM10._0_16_ = ~auVar1622 & in_ZMM6._0_16_ | in_ZMM8._0_16_;
          in_ZMM9._0_16_ = auVar1550 & auVar639;
          auVar883 = ~auVar639 & in_ZMM7._0_16_ | in_ZMM9._0_16_;
          auVar505._0_4_ = auVar505._0_4_ + in_ZMM10._0_4_;
          auVar505._4_4_ = auVar505._4_4_ + in_ZMM10._4_4_;
          auVar505._8_4_ = auVar505._8_4_ + in_ZMM10._8_4_;
          auVar505._12_4_ = auVar505._12_4_ + in_ZMM10._12_4_;
          auVar568._0_4_ = auVar568._0_4_ + auVar883._0_4_;
          auVar568._4_4_ = auVar568._4_4_ + auVar883._4_4_;
          auVar568._8_4_ = auVar568._8_4_ + auVar883._8_4_;
          auVar568._12_4_ = auVar568._12_4_ + auVar883._12_4_;
          if (uVar476 == 0x14) goto LAB_140dce4de;
          uVar546 = *(ushort *)(puVar469 + 0x15);
          uVar611 = *(ushort *)(puVar469 + 0x17);
          *(ushort *)(puVar464 + 0x15) = uVar546;
          *(ushort *)(puVar464 + 0x17) = uVar611;
          auVar1099._0_16_ = ZEXT216(uVar546);
          auVar1099._16_48_ = auVar907._16_48_;
          auVar1098._15_49_ = auVar1099._15_49_;
          auVar1098._0_15_ = ZEXT215(uVar546);
          auVar1097._14_50_ = auVar1098._14_50_;
          auVar1097._0_14_ = ZEXT214(uVar546);
          auVar1096._13_51_ = auVar1097._13_51_;
          auVar1096._0_13_ = ZEXT213(uVar546);
          auVar1095._12_52_ = auVar1096._12_52_;
          auVar1095._0_12_ = ZEXT212(uVar546);
          auVar1094._11_53_ = auVar1095._11_53_;
          auVar1094._0_11_ = ZEXT211(uVar546);
          auVar1093._10_54_ = auVar1094._10_54_;
          auVar1093._2_8_ = 0;
          auVar1093._0_2_ = uVar546;
          auVar1092._9_55_ = auVar1093._9_55_;
          auVar1092._2_7_ = 0;
          auVar1092._0_2_ = uVar546;
          auVar400._56_8_ = 0;
          auVar400._0_56_ = auVar1092._8_56_;
          auVar399._58_6_ = 0;
          auVar399._0_58_ = SUB6458(auVar400 << 0x40,6);
          auVar398[0x3c] = 0;
          auVar398._0_60_ = SUB6460(auVar399 << 0x30,4);
          auVar1091[2] = (char)(uVar546 >> 8);
          auVar1091._0_2_ = uVar546;
          auVar1091._3_61_ = auVar398 << 8;
          auVar1090._2_62_ = auVar1091._2_62_;
          cVar1479 = (char)uVar546;
          uVar1800 = uVar546 & 0xff;
          auVar1103._0_14_ = auVar1090._0_14_;
          auVar1103._14_2_ = 0;
          auVar1103._16_48_ = auVar907._16_48_;
          auVar1102._14_50_ = auVar1103._14_50_;
          auVar1102._0_12_ = auVar1090._0_12_;
          auVar1102._12_2_ = 0;
          auVar1101._12_52_ = auVar1102._12_52_;
          auVar1101._0_10_ = auVar1090._0_10_;
          auVar1101._10_2_ = 0;
          auVar1100._10_54_ = auVar1101._10_54_;
          auVar1100._0_10_ = (unkuint10)0 << 0x40;
          auVar401._56_2_ = 0;
          auVar401._0_56_ = auVar1100._8_56_;
          auVar153._2_58_ = auVar401 << 0x10;
          auVar153._0_2_ = auVar1091._2_2_;
          in_ZMM6._0_4_ = CONCAT22(0,uVar1800);
          in_ZMM6._4_60_ = auVar153;
          auVar1404._0_16_ = ZEXT216(uVar611);
          auVar1404._16_48_ = auVar1205._16_48_;
          auVar1403._15_49_ = auVar1404._15_49_;
          auVar1403._0_15_ = ZEXT215(uVar611);
          auVar1402._14_50_ = auVar1403._14_50_;
          auVar1402._0_14_ = ZEXT214(uVar611);
          auVar1401._13_51_ = auVar1402._13_51_;
          auVar1401._0_13_ = ZEXT213(uVar611);
          auVar1400._12_52_ = auVar1401._12_52_;
          auVar1400._0_12_ = ZEXT212(uVar611);
          auVar1399._11_53_ = auVar1400._11_53_;
          auVar1399._0_11_ = ZEXT211(uVar611);
          auVar1398._10_54_ = auVar1399._10_54_;
          auVar1398._2_8_ = 0;
          auVar1398._0_2_ = uVar611;
          auVar1397._9_55_ = auVar1398._9_55_;
          auVar1397._2_7_ = 0;
          auVar1397._0_2_ = uVar611;
          auVar404._56_8_ = 0;
          auVar404._0_56_ = auVar1397._8_56_;
          auVar403._58_6_ = 0;
          auVar403._0_58_ = SUB6458(auVar404 << 0x40,6);
          auVar402[0x3c] = 0;
          auVar402._0_60_ = SUB6460(auVar403 << 0x30,4);
          uVar526 = (undefined1)(uVar611 >> 8);
          auVar1396[2] = uVar526;
          auVar1396._0_2_ = uVar611;
          auVar1396._3_61_ = auVar402 << 8;
          auVar1395._2_62_ = auVar1396._2_62_;
          cVar652 = (char)uVar611;
          uVar1819 = uVar611 & 0xff;
          auVar1408._0_14_ = auVar1395._0_14_;
          auVar1408._14_2_ = 0;
          auVar1408._16_48_ = auVar1205._16_48_;
          auVar1407._14_50_ = auVar1408._14_50_;
          auVar1407._0_12_ = auVar1395._0_12_;
          auVar1407._12_2_ = 0;
          auVar1406._12_52_ = auVar1407._12_52_;
          auVar1406._0_10_ = auVar1395._0_10_;
          auVar1406._10_2_ = 0;
          auVar1405._10_54_ = auVar1406._10_54_;
          auVar1405._0_10_ = (unkuint10)0 << 0x40;
          auVar405._56_2_ = 0;
          auVar405._0_56_ = auVar1405._8_56_;
          auVar154._2_58_ = auVar405 << 0x10;
          auVar154._0_2_ = auVar1396._2_2_;
          in_ZMM7._0_4_ = CONCAT22(0,uVar1819);
          in_ZMM7._4_60_ = auVar154;
          auVar1509._0_4_ = iVar481 - in_ZMM6._0_4_;
          auVar1509._4_4_ = iVar489 - auVar153._0_4_;
          auVar1509._8_4_ = iVar1536 - auVar1100._8_4_;
          auVar1509._12_4_ = iVar1676 - auVar1102._12_4_;
          auVar1564._0_4_ = iVar481 - in_ZMM7._0_4_;
          auVar1564._4_4_ = iVar489 - auVar154._0_4_;
          auVar1564._8_4_ = iVar1536 - auVar1405._8_4_;
          auVar1564._12_4_ = iVar1676 - auVar1407._12_4_;
          auVar503 = ZEXT4864(in_ZMM10._16_48_) << 0x80;
          auVar1636[0] = -(cVar1479 < '\0');
          auVar1636[1] = -(cVar1479 < '\0');
          auVar1636[2] = -(cVar1479 < '\0');
          auVar1636[3] = -(cVar1479 < '\0');
          auVar1636[4] = -((short)uVar546 < 0);
          auVar1636[5] = -((short)uVar546 < 0);
          auVar1636[6] = -((short)uVar546 < 0);
          auVar1636[7] = -((short)uVar546 < 0);
          auVar1636[8] = -('\0' < auVar503[8]);
          auVar1636[9] = -('\0' < auVar503[9]);
          auVar1636[10] = -('\0' < auVar503[10]);
          auVar1636[0xb] = -('\0' < auVar503[0xb]);
          auVar1636[0xc] = -('\0' < auVar503[0xc]);
          auVar1636[0xd] = -('\0' < auVar503[0xd]);
          auVar1636[0xe] = -('\0' < auVar503[0xe]);
          auVar1636[0xf] = -('\0' < auVar503[0xf]);
          auVar835._0_16_ = ZEXT216(uVar611);
          auVar835._16_48_ = auVar718._16_48_;
          auVar834._15_49_ = auVar835._15_49_;
          auVar834._0_15_ = ZEXT215(uVar611);
          auVar833._14_50_ = auVar834._14_50_;
          auVar833._0_14_ = ZEXT214(uVar611);
          auVar832._13_51_ = auVar833._13_51_;
          auVar832._0_13_ = ZEXT213(uVar611);
          auVar831._12_52_ = auVar832._12_52_;
          auVar831._0_12_ = ZEXT212(uVar611);
          auVar830._11_53_ = auVar831._11_53_;
          auVar830._0_11_ = ZEXT211(uVar611);
          auVar829._10_54_ = auVar830._10_54_;
          auVar829._2_8_ = 0;
          auVar829._0_2_ = uVar611;
          auVar828._9_55_ = auVar829._9_55_;
          auVar828._2_7_ = 0;
          auVar828._0_2_ = uVar611;
          auVar406._56_8_ = 0;
          auVar406._0_56_ = auVar828._8_56_;
          auVar158._57_7_ = 0;
          auVar158._0_57_ = SUB6457(auVar406 << 0x40,7);
          auVar157._58_6_ = 0;
          auVar157._0_58_ = SUB6458(auVar158 << 0x38,6);
          auVar156._59_5_ = 0;
          auVar156._0_59_ = SUB6459(auVar157 << 0x30,5);
          auVar155._1_60_ = SUB6460(auVar156 << 0x28,4);
          auVar155[0] = uVar526;
          auVar155._61_3_ = 0;
          auVar827._62_2_ = 0;
          auVar827._0_62_ = SUB6462(auVar155 << 0x18,2);
          auVar827 = auVar827 << 0x10;
          auVar839._0_14_ = auVar827._0_14_;
          auVar839._14_2_ = 0;
          auVar839._16_48_ = auVar718._16_48_;
          auVar838._14_50_ = auVar839._14_50_;
          auVar838._0_12_ = auVar827._0_12_;
          auVar838._12_2_ = 0;
          auVar837._12_52_ = auVar838._12_52_;
          auVar837._0_10_ = auVar827._0_10_;
          auVar837._10_2_ = 0;
          auVar836._10_54_ = auVar837._10_54_;
          auVar836._0_10_ = (unkuint10)0;
          auVar160._2_56_ = auVar836._8_56_;
          auVar160._0_2_ = SUB642(auVar155 << 0x18,2);
          auVar160._58_6_ = 0;
          auVar159._60_4_ = 0;
          auVar159._0_60_ = SUB6460(auVar160 << 0x30,4);
          in_ZMM5 = auVar159 << 0x20;
          auVar503 = ZEXT4864(auVar649._16_48_) << 0x80;
          auVar641[0] = -(cVar652 < '\0');
          auVar641[1] = -(cVar652 < '\0');
          auVar641[2] = -(cVar652 < '\0');
          auVar641[3] = -(cVar652 < '\0');
          auVar641[4] = -((short)uVar611 < 0);
          auVar641[5] = -((short)uVar611 < 0);
          auVar641[6] = -((short)uVar611 < 0);
          auVar641[7] = -((short)uVar611 < 0);
          auVar641[8] = -('\0' < auVar503[8]);
          auVar641[9] = -('\0' < auVar503[9]);
          auVar641[10] = -('\0' < auVar503[10]);
          auVar641[0xb] = -('\0' < auVar503[0xb]);
          auVar641[0xc] = -('\0' < auVar503[0xc]);
          auVar641[0xd] = -('\0' < auVar503[0xd]);
          auVar641[0xe] = -('\0' < auVar503[0xe]);
          auVar641[0xf] = -('\0' < auVar503[0xf]);
          in_ZMM8._0_16_ = auVar1509 & auVar1636;
          in_ZMM10._0_16_ = ~auVar1636 & in_ZMM6._0_16_ | in_ZMM8._0_16_;
          in_ZMM9._0_16_ = auVar1564 & auVar641;
          auVar883 = ~auVar641 & in_ZMM7._0_16_ | in_ZMM9._0_16_;
          uVar477 = auVar505._0_4_ + in_ZMM10._0_4_;
          iVar525 = auVar505._4_4_ + in_ZMM10._4_4_;
          auVar520._0_8_ = CONCAT44(iVar525,uVar477);
          auVar521._8_4_ = auVar505._8_4_ + in_ZMM10._8_4_;
          auVar521._0_8_ = auVar520._0_8_;
          auVar521._12_4_ = 0;
          auVar521._16_48_ = in_ZMM0._16_48_;
          auVar520._12_52_ = auVar521._12_52_;
          auVar520._8_4_ = iVar525;
          auVar506._8_56_ = auVar520._8_56_;
          auVar506._0_8_ = CONCAT44(0,uVar477);
          uVar477 = auVar568._0_4_ + auVar883._0_4_;
          iVar525 = auVar568._4_4_ + auVar883._4_4_;
          auVar580._0_8_ = CONCAT44(iVar525,uVar477);
          auVar581._8_4_ = auVar568._8_4_ + auVar883._8_4_;
          auVar581._0_8_ = auVar580._0_8_;
          auVar581._12_4_ = 0;
          auVar581._16_48_ = auVar567._16_48_;
          auVar580._12_52_ = auVar581._12_52_;
          auVar580._8_4_ = iVar525;
          auVar569._8_56_ = auVar580._8_56_;
          auVar569._0_8_ = CONCAT44(0,uVar477);
          if (uVar476 != 0x18) {
            uVar546 = *(ushort *)(puVar469 + 0x19);
            uVar611 = *(ushort *)(puVar469 + 0x1b);
            *(ushort *)(puVar464 + 0x19) = uVar546;
            *(ushort *)(puVar464 + 0x1b) = uVar611;
            auVar1113._0_16_ = ZEXT216(uVar546);
            auVar1113._16_48_ = auVar907._16_48_;
            auVar1112._15_49_ = auVar1113._15_49_;
            auVar1112._0_15_ = ZEXT215(uVar546);
            auVar1111._14_50_ = auVar1112._14_50_;
            auVar1111._0_14_ = ZEXT214(uVar546);
            auVar1110._13_51_ = auVar1111._13_51_;
            auVar1110._0_13_ = ZEXT213(uVar546);
            auVar1109._12_52_ = auVar1110._12_52_;
            auVar1109._0_12_ = ZEXT212(uVar546);
            auVar1108._11_53_ = auVar1109._11_53_;
            auVar1108._0_11_ = ZEXT211(uVar546);
            auVar1107._10_54_ = auVar1108._10_54_;
            auVar1107._2_8_ = 0;
            auVar1107._0_2_ = uVar546;
            auVar1106._9_55_ = auVar1107._9_55_;
            auVar1106._2_7_ = 0;
            auVar1106._0_2_ = uVar546;
            auVar409._56_8_ = 0;
            auVar409._0_56_ = auVar1106._8_56_;
            auVar408._58_6_ = 0;
            auVar408._0_58_ = SUB6458(auVar409 << 0x40,6);
            auVar407[0x3c] = 0;
            auVar407._0_60_ = SUB6460(auVar408 << 0x30,4);
            auVar1105[2] = (char)(uVar546 >> 8);
            auVar1105._0_2_ = uVar546;
            auVar1105._3_61_ = auVar407 << 8;
            auVar1104._2_62_ = auVar1105._2_62_;
            cVar1479 = (char)uVar546;
            uVar1801 = uVar546 & 0xff;
            auVar1117._0_14_ = auVar1104._0_14_;
            auVar1117._14_2_ = 0;
            auVar1117._16_48_ = auVar907._16_48_;
            auVar1116._14_50_ = auVar1117._14_50_;
            auVar1116._0_12_ = auVar1104._0_12_;
            auVar1116._12_2_ = 0;
            auVar1115._12_52_ = auVar1116._12_52_;
            auVar1115._0_10_ = auVar1104._0_10_;
            auVar1115._10_2_ = 0;
            auVar1114._10_54_ = auVar1115._10_54_;
            auVar1114._0_10_ = (unkuint10)0 << 0x40;
            auVar410._56_2_ = 0;
            auVar410._0_56_ = auVar1114._8_56_;
            auVar161._2_58_ = auVar410 << 0x10;
            auVar161._0_2_ = auVar1105._2_2_;
            in_ZMM6._0_4_ = CONCAT22(0,uVar1801);
            in_ZMM6._4_60_ = auVar161;
            auVar1418._0_16_ = ZEXT216(uVar611);
            auVar1418._16_48_ = auVar1205._16_48_;
            auVar1417._15_49_ = auVar1418._15_49_;
            auVar1417._0_15_ = ZEXT215(uVar611);
            auVar1416._14_50_ = auVar1417._14_50_;
            auVar1416._0_14_ = ZEXT214(uVar611);
            auVar1415._13_51_ = auVar1416._13_51_;
            auVar1415._0_13_ = ZEXT213(uVar611);
            auVar1414._12_52_ = auVar1415._12_52_;
            auVar1414._0_12_ = ZEXT212(uVar611);
            auVar1413._11_53_ = auVar1414._11_53_;
            auVar1413._0_11_ = ZEXT211(uVar611);
            auVar1412._10_54_ = auVar1413._10_54_;
            auVar1412._2_8_ = 0;
            auVar1412._0_2_ = uVar611;
            auVar1411._9_55_ = auVar1412._9_55_;
            auVar1411._2_7_ = 0;
            auVar1411._0_2_ = uVar611;
            auVar413._56_8_ = 0;
            auVar413._0_56_ = auVar1411._8_56_;
            auVar412._58_6_ = 0;
            auVar412._0_58_ = SUB6458(auVar413 << 0x40,6);
            auVar411[0x3c] = 0;
            auVar411._0_60_ = SUB6460(auVar412 << 0x30,4);
            uVar526 = (undefined1)(uVar611 >> 8);
            auVar1410[2] = uVar526;
            auVar1410._0_2_ = uVar611;
            auVar1410._3_61_ = auVar411 << 8;
            auVar1409._2_62_ = auVar1410._2_62_;
            cVar652 = (char)uVar611;
            uVar1820 = uVar611 & 0xff;
            auVar1422._0_14_ = auVar1409._0_14_;
            auVar1422._14_2_ = 0;
            auVar1422._16_48_ = auVar1205._16_48_;
            auVar1421._14_50_ = auVar1422._14_50_;
            auVar1421._0_12_ = auVar1409._0_12_;
            auVar1421._12_2_ = 0;
            auVar1420._12_52_ = auVar1421._12_52_;
            auVar1420._0_10_ = auVar1409._0_10_;
            auVar1420._10_2_ = 0;
            auVar1419._10_54_ = auVar1420._10_54_;
            auVar1419._0_10_ = (unkuint10)0 << 0x40;
            auVar414._56_2_ = 0;
            auVar414._0_56_ = auVar1419._8_56_;
            auVar162._2_58_ = auVar414 << 0x10;
            auVar162._0_2_ = auVar1410._2_2_;
            in_ZMM7._0_4_ = CONCAT22(0,uVar1820);
            in_ZMM7._4_60_ = auVar162;
            auVar1510._0_4_ = iVar481 - in_ZMM6._0_4_;
            auVar1510._4_4_ = iVar489 - auVar161._0_4_;
            auVar1510._8_4_ = iVar1536 - auVar1114._8_4_;
            auVar1510._12_4_ = iVar1676 - auVar1116._12_4_;
            auVar1565._0_4_ = iVar481 - in_ZMM7._0_4_;
            auVar1565._4_4_ = iVar489 - auVar162._0_4_;
            auVar1565._8_4_ = iVar1536 - auVar1419._8_4_;
            auVar1565._12_4_ = iVar1676 - auVar1421._12_4_;
            auVar503 = ZEXT4864(in_ZMM10._16_48_) << 0x80;
            auVar1615[0] = -(cVar1479 < '\0');
            auVar1615[1] = -(cVar1479 < '\0');
            auVar1615[2] = -(cVar1479 < '\0');
            auVar1615[3] = -(cVar1479 < '\0');
            auVar1615[4] = -((short)uVar546 < 0);
            auVar1615[5] = -((short)uVar546 < 0);
            auVar1615[6] = -((short)uVar546 < 0);
            auVar1615[7] = -((short)uVar546 < 0);
            auVar1615[8] = -('\0' < auVar503[8]);
            auVar1615[9] = -('\0' < auVar503[9]);
            auVar1615[10] = -('\0' < auVar503[10]);
            auVar1615[0xb] = -('\0' < auVar503[0xb]);
            auVar1637[0xc] = -('\0' < auVar503[0xc]);
            auVar1637._0_12_ = auVar1615;
            auVar1637[0xd] = -('\0' < auVar503[0xd]);
            auVar1637[0xe] = -('\0' < auVar503[0xe]);
            auVar1637[0xf] = -('\0' < auVar503[0xf]);
            auVar848._0_16_ = ZEXT216(uVar611);
            auVar848._16_48_ = auVar718._16_48_;
            auVar847._15_49_ = auVar848._15_49_;
            auVar847._0_15_ = ZEXT215(uVar611);
            auVar846._14_50_ = auVar847._14_50_;
            auVar846._0_14_ = ZEXT214(uVar611);
            auVar845._13_51_ = auVar846._13_51_;
            auVar845._0_13_ = ZEXT213(uVar611);
            auVar844._12_52_ = auVar845._12_52_;
            auVar844._0_12_ = ZEXT212(uVar611);
            auVar843._11_53_ = auVar844._11_53_;
            auVar843._0_11_ = ZEXT211(uVar611);
            auVar842._10_54_ = auVar843._10_54_;
            auVar842._2_8_ = 0;
            auVar842._0_2_ = uVar611;
            auVar841._9_55_ = auVar842._9_55_;
            auVar841._2_7_ = 0;
            auVar841._0_2_ = uVar611;
            auVar415._56_8_ = 0;
            auVar415._0_56_ = auVar841._8_56_;
            auVar166._57_7_ = 0;
            auVar166._0_57_ = SUB6457(auVar415 << 0x40,7);
            auVar165._58_6_ = 0;
            auVar165._0_58_ = SUB6458(auVar166 << 0x38,6);
            auVar164._59_5_ = 0;
            auVar164._0_59_ = SUB6459(auVar165 << 0x30,5);
            auVar163._1_60_ = SUB6460(auVar164 << 0x28,4);
            auVar163[0] = uVar526;
            auVar163._61_3_ = 0;
            auVar840._62_2_ = 0;
            auVar840._0_62_ = SUB6462(auVar163 << 0x18,2);
            auVar840 = auVar840 << 0x10;
            auVar852._0_14_ = auVar840._0_14_;
            auVar852._14_2_ = 0;
            auVar852._16_48_ = auVar718._16_48_;
            auVar851._14_50_ = auVar852._14_50_;
            auVar851._0_12_ = auVar840._0_12_;
            auVar851._12_2_ = 0;
            auVar850._12_52_ = auVar851._12_52_;
            auVar850._0_10_ = auVar840._0_10_;
            auVar850._10_2_ = 0;
            auVar849._10_54_ = auVar850._10_54_;
            auVar849._0_10_ = (unkuint10)0;
            auVar168._2_56_ = auVar849._8_56_;
            auVar168._0_2_ = SUB642(auVar163 << 0x18,2);
            auVar168._58_6_ = 0;
            auVar167._60_4_ = 0;
            auVar167._0_60_ = SUB6460(auVar168 << 0x30,4);
            in_ZMM5 = auVar167 << 0x20;
            auVar503 = ZEXT4864(auVar649._16_48_) << 0x80;
            auVar613[0] = -(cVar652 < '\0');
            auVar613[1] = -(cVar652 < '\0');
            auVar613[2] = -(cVar652 < '\0');
            auVar613[3] = -(cVar652 < '\0');
            auVar613[4] = -((short)uVar611 < 0);
            auVar613[5] = -((short)uVar611 < 0);
            auVar613[6] = -((short)uVar611 < 0);
            auVar613[7] = -((short)uVar611 < 0);
            auVar613[8] = -('\0' < auVar503[8]);
            auVar613[9] = -('\0' < auVar503[9]);
            auVar613[10] = -('\0' < auVar503[10]);
            auVar613[0xb] = -('\0' < auVar503[0xb]);
            auVar642[0xc] = -('\0' < auVar503[0xc]);
            auVar642._0_12_ = auVar613;
            auVar642[0xd] = -('\0' < auVar503[0xd]);
            auVar642[0xe] = -('\0' < auVar503[0xe]);
            auVar642[0xf] = -('\0' < auVar503[0xf]);
            in_ZMM8._0_16_ = auVar1510 & auVar1637;
            auVar1671._0_12_ = ~auVar1615 & in_ZMM6._0_12_ | in_ZMM8._0_12_;
            in_ZMM9._0_16_ = auVar1565 & auVar642;
            auVar649._0_12_ = ~auVar613 & in_ZMM7._0_12_ | in_ZMM9._0_12_;
            auVar1671._12_4_ = 0;
            auVar1671._16_48_ = in_ZMM10._16_48_;
            auVar1670._12_52_ = auVar1671._12_52_;
            auVar1670._0_8_ = auVar1671._0_8_;
            auVar1670._8_4_ = auVar1671._4_4_;
            in_ZMM10._8_56_ = auVar1670._8_56_;
            in_ZMM10._0_8_ = CONCAT44(0,auVar1671._0_4_);
            auVar649._12_4_ = 0;
            auVar648._12_52_ = auVar649._12_52_;
            auVar648._0_8_ = auVar649._0_8_;
            auVar648._8_4_ = auVar649._4_4_;
            auVar506._0_8_ = auVar506._0_8_ + in_ZMM10._0_8_;
            auVar506._8_8_ = auVar520._8_8_ + auVar1670._8_8_;
            auVar506._16_48_ = in_ZMM0._16_48_;
            auVar569._0_8_ = auVar569._0_8_ + auVar649._0_4_;
            auVar569._8_8_ = auVar580._8_8_ + auVar648._8_8_;
            auVar569._16_48_ = auVar567._16_48_;
            if (uVar476 != 0x1c) {
              uVar546 = *(ushort *)(puVar469 + 0x1d);
              uVar611 = *(ushort *)(puVar469 + 0x1f);
              *(ushort *)(puVar464 + 0x1d) = uVar546;
              *(ushort *)(puVar464 + 0x1f) = uVar611;
              auVar1127._0_16_ = ZEXT216(uVar546);
              auVar1127._16_48_ = auVar907._16_48_;
              auVar1126._15_49_ = auVar1127._15_49_;
              auVar1126._0_15_ = ZEXT215(uVar546);
              auVar1125._14_50_ = auVar1126._14_50_;
              auVar1125._0_14_ = ZEXT214(uVar546);
              auVar1124._13_51_ = auVar1125._13_51_;
              auVar1124._0_13_ = ZEXT213(uVar546);
              auVar1123._12_52_ = auVar1124._12_52_;
              auVar1123._0_12_ = ZEXT212(uVar546);
              auVar1122._11_53_ = auVar1123._11_53_;
              auVar1122._0_11_ = ZEXT211(uVar546);
              auVar1121._10_54_ = auVar1122._10_54_;
              auVar1121._2_8_ = 0;
              auVar1121._0_2_ = uVar546;
              auVar1120._9_55_ = auVar1121._9_55_;
              auVar1120._2_7_ = 0;
              auVar1120._0_2_ = uVar546;
              auVar418._56_8_ = 0;
              auVar418._0_56_ = auVar1120._8_56_;
              auVar417._58_6_ = 0;
              auVar417._0_58_ = SUB6458(auVar418 << 0x40,6);
              auVar416[0x3c] = 0;
              auVar416._0_60_ = SUB6460(auVar417 << 0x30,4);
              auVar1119[2] = (char)(uVar546 >> 8);
              auVar1119._0_2_ = uVar546;
              auVar1119._3_61_ = auVar416 << 8;
              auVar1118._2_62_ = auVar1119._2_62_;
              cVar1479 = (char)uVar546;
              uVar1802 = uVar546 & 0xff;
              auVar1131._0_14_ = auVar1118._0_14_;
              auVar1131._14_2_ = 0;
              auVar1131._16_48_ = auVar907._16_48_;
              auVar1130._14_50_ = auVar1131._14_50_;
              auVar1130._0_12_ = auVar1118._0_12_;
              auVar1130._12_2_ = 0;
              auVar1129._12_52_ = auVar1130._12_52_;
              auVar1129._0_10_ = auVar1118._0_10_;
              auVar1129._10_2_ = 0;
              auVar1128._10_54_ = auVar1129._10_54_;
              auVar1128._0_10_ = (unkuint10)0 << 0x40;
              auVar419._56_2_ = 0;
              auVar419._0_56_ = auVar1128._8_56_;
              auVar169._2_58_ = auVar419 << 0x10;
              auVar169._0_2_ = auVar1119._2_2_;
              in_ZMM6._0_4_ = CONCAT22(0,uVar1802);
              in_ZMM6._4_60_ = auVar169;
              auVar1432._0_16_ = ZEXT216(uVar611);
              auVar1432._16_48_ = auVar1205._16_48_;
              auVar1431._15_49_ = auVar1432._15_49_;
              auVar1431._0_15_ = ZEXT215(uVar611);
              auVar1430._14_50_ = auVar1431._14_50_;
              auVar1430._0_14_ = ZEXT214(uVar611);
              auVar1429._13_51_ = auVar1430._13_51_;
              auVar1429._0_13_ = ZEXT213(uVar611);
              auVar1428._12_52_ = auVar1429._12_52_;
              auVar1428._0_12_ = ZEXT212(uVar611);
              auVar1427._11_53_ = auVar1428._11_53_;
              auVar1427._0_11_ = ZEXT211(uVar611);
              auVar1426._10_54_ = auVar1427._10_54_;
              auVar1426._2_8_ = 0;
              auVar1426._0_2_ = uVar611;
              auVar1425._9_55_ = auVar1426._9_55_;
              auVar1425._2_7_ = 0;
              auVar1425._0_2_ = uVar611;
              auVar422._56_8_ = 0;
              auVar422._0_56_ = auVar1425._8_56_;
              auVar421._58_6_ = 0;
              auVar421._0_58_ = SUB6458(auVar422 << 0x40,6);
              auVar420[0x3c] = 0;
              auVar420._0_60_ = SUB6460(auVar421 << 0x30,4);
              uVar526 = (undefined1)(uVar611 >> 8);
              auVar1424[2] = uVar526;
              auVar1424._0_2_ = uVar611;
              auVar1424._3_61_ = auVar420 << 8;
              auVar1423._2_62_ = auVar1424._2_62_;
              cVar652 = (char)uVar611;
              uVar1821 = uVar611 & 0xff;
              auVar1436._0_14_ = auVar1423._0_14_;
              auVar1436._14_2_ = 0;
              auVar1436._16_48_ = auVar1205._16_48_;
              auVar1435._14_50_ = auVar1436._14_50_;
              auVar1435._0_12_ = auVar1423._0_12_;
              auVar1435._12_2_ = 0;
              auVar1434._12_52_ = auVar1435._12_52_;
              auVar1434._0_10_ = auVar1423._0_10_;
              auVar1434._10_2_ = 0;
              auVar1433._10_54_ = auVar1434._10_54_;
              auVar1433._0_10_ = (unkuint10)0 << 0x40;
              auVar423._56_2_ = 0;
              auVar423._0_56_ = auVar1433._8_56_;
              auVar170._2_58_ = auVar423 << 0x10;
              auVar170._0_2_ = auVar1424._2_2_;
              in_ZMM7._0_4_ = CONCAT22(0,uVar1821);
              in_ZMM7._4_60_ = auVar170;
              auVar1511._0_4_ = iVar481 - in_ZMM6._0_4_;
              auVar1511._4_4_ = iVar489 - auVar169._0_4_;
              auVar1511._8_4_ = iVar1536 - auVar1128._8_4_;
              auVar1511._12_4_ = iVar1676 - auVar1130._12_4_;
              auVar589._0_4_ = iVar481 - in_ZMM7._0_4_;
              auVar589._4_4_ = iVar489 - auVar170._0_4_;
              auVar589._8_4_ = iVar1536 - auVar1433._8_4_;
              auVar589._12_4_ = iVar1676 - auVar1435._12_4_;
              auVar503 = ZEXT4864(in_ZMM9._16_48_) << 0x80;
              auVar1544[0] = -(cVar1479 < '\0');
              auVar1544[1] = -(cVar1479 < '\0');
              auVar1544[2] = -(cVar1479 < '\0');
              auVar1544[3] = -(cVar1479 < '\0');
              auVar1544[4] = -((short)uVar546 < 0);
              auVar1544[5] = -((short)uVar546 < 0);
              auVar1544[6] = -((short)uVar546 < 0);
              auVar1544[7] = -((short)uVar546 < 0);
              auVar1544[8] = -('\0' < auVar503[8]);
              auVar1544[9] = -('\0' < auVar503[9]);
              auVar1544[10] = -('\0' < auVar503[10]);
              auVar1544[0xb] = -('\0' < auVar503[0xb]);
              auVar1566[0xc] = -('\0' < auVar503[0xc]);
              auVar1566._0_12_ = auVar1544;
              auVar1566[0xd] = -('\0' < auVar503[0xd]);
              auVar1566[0xe] = -('\0' < auVar503[0xe]);
              auVar1566[0xf] = -('\0' < auVar503[0xf]);
              auVar861._0_16_ = ZEXT216(uVar611);
              auVar861._16_48_ = auVar718._16_48_;
              auVar860._15_49_ = auVar861._15_49_;
              auVar860._0_15_ = ZEXT215(uVar611);
              auVar859._14_50_ = auVar860._14_50_;
              auVar859._0_14_ = ZEXT214(uVar611);
              auVar858._13_51_ = auVar859._13_51_;
              auVar858._0_13_ = ZEXT213(uVar611);
              auVar857._12_52_ = auVar858._12_52_;
              auVar857._0_12_ = ZEXT212(uVar611);
              auVar856._11_53_ = auVar857._11_53_;
              auVar856._0_11_ = ZEXT211(uVar611);
              auVar855._10_54_ = auVar856._10_54_;
              auVar855._2_8_ = 0;
              auVar855._0_2_ = uVar611;
              auVar854._9_55_ = auVar855._9_55_;
              auVar854._2_7_ = 0;
              auVar854._0_2_ = uVar611;
              auVar424._56_8_ = 0;
              auVar424._0_56_ = auVar854._8_56_;
              auVar174._57_7_ = 0;
              auVar174._0_57_ = SUB6457(auVar424 << 0x40,7);
              auVar173._58_6_ = 0;
              auVar173._0_58_ = SUB6458(auVar174 << 0x38,6);
              auVar172._59_5_ = 0;
              auVar172._0_59_ = SUB6459(auVar173 << 0x30,5);
              auVar171._1_60_ = SUB6460(auVar172 << 0x28,4);
              auVar171[0] = uVar526;
              auVar171._61_3_ = 0;
              auVar853._62_2_ = 0;
              auVar853._0_62_ = SUB6462(auVar171 << 0x18,2);
              auVar853 = auVar853 << 0x10;
              auVar865._0_14_ = auVar853._0_14_;
              auVar865._14_2_ = 0;
              auVar865._16_48_ = auVar718._16_48_;
              auVar864._14_50_ = auVar865._14_50_;
              auVar864._0_12_ = auVar853._0_12_;
              auVar864._12_2_ = 0;
              auVar863._12_52_ = auVar864._12_52_;
              auVar863._0_10_ = auVar853._0_10_;
              auVar863._10_2_ = 0;
              auVar862._10_54_ = auVar863._10_54_;
              auVar862._0_10_ = (unkuint10)0;
              auVar176._2_56_ = auVar862._8_56_;
              auVar176._0_2_ = SUB642(auVar171 << 0x18,2);
              auVar176._58_6_ = 0;
              auVar175._60_4_ = 0;
              auVar175._0_60_ = SUB6460(auVar176 << 0x30,4);
              in_ZMM5 = auVar175 << 0x20;
              auVar503 = ZEXT4864(auVar649._16_48_) << 0x80;
              auVar614[0] = -(cVar652 < '\0');
              auVar614[1] = -(cVar652 < '\0');
              auVar614[2] = -(cVar652 < '\0');
              auVar614[3] = -(cVar652 < '\0');
              auVar614[4] = -((short)uVar611 < 0);
              auVar614[5] = -((short)uVar611 < 0);
              auVar614[6] = -((short)uVar611 < 0);
              auVar614[7] = -((short)uVar611 < 0);
              auVar614[8] = -('\0' < auVar503[8]);
              auVar614[9] = -('\0' < auVar503[9]);
              auVar614[10] = -('\0' < auVar503[10]);
              auVar614[0xb] = -('\0' < auVar503[0xb]);
              auVar643[0xc] = -('\0' < auVar503[0xc]);
              auVar643._0_12_ = auVar614;
              auVar643[0xd] = -('\0' < auVar503[0xd]);
              auVar643[0xe] = -('\0' < auVar503[0xe]);
              auVar643[0xf] = -('\0' < auVar503[0xf]);
              in_ZMM8._0_16_ = auVar1511 & auVar1566;
              auVar1598._0_12_ = ~auVar1544 & in_ZMM6._0_12_ | in_ZMM8._0_12_;
              in_ZMM2._0_16_ = auVar589 & auVar643;
              auVar651._0_12_ = ~auVar614 & in_ZMM7._0_12_ | in_ZMM2._0_12_;
              auVar1598._12_4_ = 0;
              auVar1598._16_48_ = in_ZMM9._16_48_;
              auVar1597._12_52_ = auVar1598._12_52_;
              auVar1597._0_8_ = auVar1598._0_8_;
              auVar1597._8_4_ = auVar1598._4_4_;
              in_ZMM9._8_56_ = auVar1597._8_56_;
              in_ZMM9._0_8_ = CONCAT44(0,auVar1598._0_4_);
              auVar651._12_4_ = 0;
              auVar651._16_48_ = auVar649._16_48_;
              auVar650._12_52_ = auVar651._12_52_;
              auVar650._0_8_ = auVar651._0_8_;
              auVar650._8_4_ = auVar651._4_4_;
              auVar506._0_8_ = auVar506._0_8_ + in_ZMM9._0_8_;
              auVar506._8_8_ = auVar506._8_8_ + auVar1597._8_8_;
              auVar569._0_8_ = auVar569._0_8_ + auVar651._0_4_;
              auVar569._8_8_ = auVar569._8_8_ + auVar650._8_8_;
            }
          }
        }
        in_ZMM0._0_8_ = auVar506._0_8_ + auVar569._0_8_;
        in_ZMM0._16_48_ = auVar506._16_48_;
        in_ZMM0._8_8_ = auVar506._8_8_ + auVar569._8_8_;
        pbVar472 = pbVar472 + auVar579._0_8_;
        pbVar488 = pbVar488 + auVar579._0_8_;
        auVar550._8_4_ = (int)in_ZMM0._8_8_;
        auVar550._0_8_ = in_ZMM0._8_8_;
        in_ZMM1._16_48_ = auVar569._16_48_;
        auVar550._12_4_ = (int)((ulonglong)in_ZMM0._8_8_ >> 0x20);
        in_ZMM1._0_8_ = in_ZMM0._8_8_ + in_ZMM0._0_8_;
        in_ZMM1._8_8_ = auVar550._8_8_ + in_ZMM0._8_8_;
        auVar503._0_8_ = in_ZMM1._0_8_;
        if (uVar476 == uVar486) goto LAB_140dce535;
      }
      lVar482 = auVar511._0_8_ - auVar579._0_8_;
      do {
        bVar465 = *pbVar472;
        *pbVar488 = bVar465;
        uVar476 = 0x100 - bVar465;
        if (-1 < (char)bVar465) {
          uVar476 = (uint)bVar465;
        }
        auVar503._0_8_ = auVar503._0_8_ + uVar476;
        pbVar488 = pbVar488 + 1;
        pbVar472 = pbVar472 + 1;
        lVar482 = lVar482 + -1;
      } while (lVar482 != 0);
    }
LAB_140dce535:
    iVar1676 = _UNK_1531f2bac;
    iVar1536 = _UNK_1531f2ba8;
    iVar489 = _UNK_1531f2ba4;
    iVar481 = ___xmm_00000000000000000000010000000100;
    auVar579._0_8_ = uVar13 - auVar511._0_8_;
    if (auVar511._0_8_ <= uVar13 && auVar579._0_8_ != 0) {
      puVar464 = puVar469;
      if (3 < auVar579._0_8_) {
        uVar485 = auVar579._0_8_ & 0xfffffffffffffffc;
        auVar511._0_8_ = auVar511._0_8_ + uVar485;
        auVar509._16_48_ = in_ZMM0._16_48_;
        auVar509._8_8_ = 0;
        auVar509._0_8_ = auVar503._0_8_;
        in_ZMM1 = ZEXT4864(in_ZMM1._16_48_) << 0x80;
        auVar503._0_8_ = 0;
        in_ZMM3._4_4_ = _UNK_1531f2ba4;
        in_ZMM3._0_4_ = ___xmm_00000000000000000000010000000100;
        in_ZMM3._8_4_ = _UNK_1531f2ba8;
        in_ZMM3._12_4_ = _UNK_1531f2bac;
        auVar524 = ZEXT4864(in_ZMM2._16_48_) << 0x80;
        do {
          auVar792._16_48_ = in_ZMM5._16_48_;
          auVar993._16_48_ = in_ZMM6._16_48_;
          bVar874 = (char)*(undefined2 *)(pbVar472 + auVar503._0_8_) -
                    (char)*(undefined2 *)(puVar469 + auVar503._0_8_ + 1);
          cVar652 = (char)((ushort)*(undefined2 *)(pbVar472 + auVar503._0_8_) >> 8) -
                    (char)((ushort)*(undefined2 *)(puVar469 + auVar503._0_8_ + 1) >> 8);
          uVar611 = CONCAT11(cVar652,bVar874);
          auVar666._0_12_ = ZEXT212(uVar611);
          auVar666[0xc] = 0;
          auVar675[0xd] = 0;
          auVar675._0_13_ = auVar666;
          bVar465 = (char)*(undefined2 *)(pbVar472 + auVar503._0_8_ + 2) -
                    (char)*(undefined2 *)(puVar469 + auVar503._0_8_ + 3);
          cVar1479 = (char)((ushort)*(undefined2 *)(pbVar472 + auVar503._0_8_ + 2) >> 8) -
                     (char)((ushort)*(undefined2 *)(puVar469 + auVar503._0_8_ + 3) >> 8);
          uVar546 = CONCAT11(cVar1479,bVar465);
          auVar616._0_12_ = ZEXT212(uVar546);
          auVar616[0xc] = 0;
          auVar626[0xd] = 0;
          auVar626._0_13_ = auVar616;
          *(ushort *)(pbVar488 + auVar503._0_8_) = uVar611;
          *(ushort *)(pbVar488 + auVar503._0_8_ + 2) = uVar546;
          auVar993._14_2_ = 0;
          auVar993._0_14_ = auVar675;
          auVar992._15_49_ = auVar993._15_49_;
          auVar992[0xe] = 0;
          auVar992._0_14_ = auVar675;
          auVar991._14_50_ = auVar992._14_50_;
          auVar991[0xd] = 0;
          auVar991._0_13_ = auVar666;
          auVar990._13_51_ = auVar991._13_51_;
          auVar990[0xc] = 0;
          auVar990._0_12_ = auVar666._0_12_;
          auVar989._12_52_ = auVar990._12_52_;
          auVar989._0_12_ = ZEXT212(uVar611);
          auVar988._11_53_ = auVar989._11_53_;
          auVar988._0_11_ = ZEXT211(uVar611);
          auVar987._10_54_ = auVar988._10_54_;
          auVar987._2_8_ = 0;
          auVar987._0_2_ = uVar611;
          auVar986._9_55_ = auVar987._9_55_;
          auVar986._2_7_ = 0;
          auVar986._0_2_ = uVar611;
          auVar280._56_8_ = 0;
          auVar280._0_56_ = auVar986._8_56_;
          auVar279._58_6_ = 0;
          auVar279._0_58_ = SUB6458(auVar280 << 0x40,6);
          auVar278[0x3c] = 0;
          auVar278._0_60_ = SUB6460(auVar279 << 0x30,4);
          auVar985[2] = cVar652;
          auVar985._0_2_ = uVar611;
          auVar985._3_61_ = auVar278 << 8;
          auVar984._2_62_ = auVar985._2_62_;
          uVar1794 = CONCAT11(0,bVar874);
          auVar997._0_14_ = auVar984._0_14_;
          auVar997._14_2_ = 0;
          auVar997._16_48_ = auVar993._16_48_;
          auVar996._14_50_ = auVar997._14_50_;
          auVar996._0_12_ = auVar984._0_12_;
          auVar996._12_2_ = 0;
          auVar995._12_52_ = auVar996._12_52_;
          auVar995._0_10_ = auVar984._0_10_;
          auVar995._10_2_ = 0;
          auVar994._10_54_ = auVar995._10_54_;
          auVar994._0_10_ = (unkuint10)0 << 0x40;
          auVar281._56_2_ = 0;
          auVar281._0_56_ = auVar994._8_56_;
          auVar89._2_58_ = auVar281 << 0x10;
          auVar89._0_2_ = auVar985._2_2_;
          in_ZMM6._0_4_ = CONCAT22(0,uVar1794);
          in_ZMM6._4_60_ = auVar89;
          auVar1295._16_48_ = in_ZMM7._16_48_;
          auVar1295._14_2_ = 0;
          auVar1295._0_14_ = auVar626;
          auVar1294._15_49_ = auVar1295._15_49_;
          auVar1294[0xe] = 0;
          auVar1294._0_14_ = auVar626;
          auVar1293._14_50_ = auVar1294._14_50_;
          auVar1293[0xd] = 0;
          auVar1293._0_13_ = auVar616;
          auVar1292._13_51_ = auVar1293._13_51_;
          auVar1292[0xc] = 0;
          auVar1292._0_12_ = auVar616._0_12_;
          auVar1291._12_52_ = auVar1292._12_52_;
          auVar1291._0_12_ = ZEXT212(uVar546);
          auVar1290._11_53_ = auVar1291._11_53_;
          auVar1290._0_11_ = ZEXT211(uVar546);
          auVar1289._10_54_ = auVar1290._10_54_;
          auVar1289._2_8_ = 0;
          auVar1289._0_2_ = uVar546;
          auVar1288._9_55_ = auVar1289._9_55_;
          auVar1288._2_7_ = 0;
          auVar1288._0_2_ = uVar546;
          auVar448._56_8_ = 0;
          auVar448._0_56_ = auVar1288._8_56_;
          auVar447._58_6_ = 0;
          auVar447._0_58_ = SUB6458(auVar448 << 0x40,6);
          auVar282[0x3c] = 0;
          auVar282._0_60_ = SUB6460(auVar447 << 0x30,4);
          auVar1287[2] = cVar1479;
          auVar1287._0_2_ = uVar546;
          auVar1287._3_61_ = auVar282 << 8;
          auVar1286._2_62_ = auVar1287._2_62_;
          uVar1813 = CONCAT11(0,bVar465);
          auVar1299._0_14_ = auVar1286._0_14_;
          auVar1299._14_2_ = 0;
          auVar1299._16_48_ = auVar1295._16_48_;
          auVar1298._14_50_ = auVar1299._14_50_;
          auVar1298._0_12_ = auVar1286._0_12_;
          auVar1298._12_2_ = 0;
          auVar1297._12_52_ = auVar1298._12_52_;
          auVar1297._0_10_ = auVar1286._0_10_;
          auVar1297._10_2_ = 0;
          auVar1296._10_54_ = auVar1297._10_54_;
          auVar1296._0_10_ = (unkuint10)0 << 0x40;
          auVar283._56_2_ = 0;
          auVar283._0_56_ = auVar1296._8_56_;
          auVar90._2_58_ = auVar283 << 0x10;
          auVar90._0_2_ = auVar1287._2_2_;
          in_ZMM7._0_4_ = CONCAT22(0,uVar1813);
          in_ZMM7._4_60_ = auVar90;
          auVar1494._0_4_ = iVar481 - in_ZMM6._0_4_;
          auVar1494._4_4_ = iVar489 - auVar89._0_4_;
          auVar1494._8_4_ = iVar1536 - auVar994._8_4_;
          auVar1494._12_4_ = iVar1676 - auVar996._12_4_;
          auVar1553._0_4_ = iVar481 - in_ZMM7._0_4_;
          auVar1553._4_4_ = iVar489 - auVar90._0_4_;
          auVar1553._8_4_ = iVar1536 - auVar1296._8_4_;
          auVar1553._12_4_ = iVar1676 - auVar1298._12_4_;
          auVar1644._16_48_ = in_ZMM10._16_48_;
          auVar775 = ZEXT4864(auVar1644._16_48_) << 0x80;
          auVar1613[0] = -((char)bVar874 < '\0');
          auVar1613[1] = -((char)bVar874 < '\0');
          auVar1613[2] = -((char)bVar874 < '\0');
          auVar1613[3] = -((char)bVar874 < '\0');
          auVar1613[4] = -(cVar652 < '\0');
          auVar1613[5] = -(cVar652 < '\0');
          auVar1613[6] = -(cVar652 < '\0');
          auVar1613[7] = -(cVar652 < '\0');
          auVar1613[8] = -('\0' < auVar775[8]);
          auVar1613[9] = -('\0' < auVar775[9]);
          auVar1613[10] = -('\0' < auVar775[10]);
          auVar1613[0xb] = -('\0' < auVar775[0xb]);
          auVar1625[0xc] = -('\0' < auVar775[0xc]);
          auVar1625._0_12_ = auVar1613;
          auVar1625[0xd] = -('\0' < auVar775[0xd]);
          auVar1625[0xe] = -('\0' < auVar775[0xe]);
          auVar1625[0xf] = -('\0' < auVar775[0xf]);
          auVar775 = ZEXT4864(auVar792._16_48_) << 0x80;
          auVar659[0] = -((char)bVar465 < '\0');
          auVar659[1] = -((char)bVar465 < '\0');
          auVar659[2] = -((char)bVar465 < '\0');
          auVar659[3] = -((char)bVar465 < '\0');
          auVar659[4] = -(cVar1479 < '\0');
          auVar659[5] = -(cVar1479 < '\0');
          auVar659[6] = -(cVar1479 < '\0');
          auVar659[7] = -(cVar1479 < '\0');
          auVar659[8] = -('\0' < auVar775[8]);
          auVar659[9] = -('\0' < auVar775[9]);
          auVar659[10] = -('\0' < auVar775[10]);
          auVar659[0xb] = -('\0' < auVar775[0xb]);
          auVar685[0xc] = -('\0' < auVar775[0xc]);
          auVar685._0_12_ = auVar659;
          auVar685[0xd] = -('\0' < auVar775[0xd]);
          auVar685[0xe] = -('\0' < auVar775[0xe]);
          auVar685[0xf] = -('\0' < auVar775[0xf]);
          in_ZMM8._0_16_ = auVar1494 & auVar1625;
          auVar1644._0_12_ = ~auVar1613 & in_ZMM6._0_12_ | in_ZMM8._0_12_;
          in_ZMM9._0_16_ = auVar1553 & auVar685;
          auVar792._0_12_ = ~auVar659 & in_ZMM7._0_12_ | in_ZMM9._0_12_;
          auVar1644._12_4_ = 0;
          auVar1643._12_52_ = auVar1644._12_52_;
          auVar1643._0_8_ = auVar1644._0_8_;
          auVar1643._8_4_ = auVar1644._4_4_;
          in_ZMM10._8_56_ = auVar1643._8_56_;
          in_ZMM10._0_8_ = CONCAT44(0,auVar1644._0_4_);
          auVar510._0_8_ = auVar509._0_8_ + in_ZMM10._0_8_;
          auVar510._16_48_ = auVar509._16_48_;
          auVar510._8_8_ = auVar509._8_8_ + auVar1643._8_8_;
          auVar792._12_4_ = 0;
          auVar791._12_52_ = auVar792._12_52_;
          auVar791._0_8_ = auVar792._0_8_;
          auVar791._8_4_ = auVar792._4_4_;
          in_ZMM5._8_56_ = auVar791._8_56_;
          in_ZMM5._0_8_ = CONCAT44(0,auVar792._0_4_);
          auVar599._0_8_ = auVar524._0_8_ + in_ZMM5._0_8_;
          auVar599._16_48_ = auVar524._16_48_;
          auVar599._8_8_ = auVar524._8_8_ + auVar791._8_8_;
          auVar503._0_8_ = auVar503._0_8_ + 4;
          auVar509 = auVar510;
          auVar524 = auVar599;
        } while (uVar485 != auVar503._0_8_);
        in_ZMM2._0_8_ = auVar599._0_8_ + auVar510._0_8_;
        in_ZMM2._8_8_ = auVar599._8_8_ + auVar510._8_8_;
        in_ZMM2._16_48_ = auVar599._16_48_;
        auVar496._8_4_ = (int)in_ZMM2._8_8_;
        auVar496._0_8_ = in_ZMM2._8_8_;
        auVar496._12_4_ = (int)((ulonglong)in_ZMM2._8_8_ >> 0x20);
        auVar503._0_8_ = in_ZMM2._8_8_ + in_ZMM2._0_8_;
        auVar503._8_8_ = auVar496._8_8_ + in_ZMM2._8_8_;
        auVar503._16_48_ = auVar510._16_48_;
        pbVar488 = pbVar488 + uVar485;
        pbVar472 = pbVar472 + uVar485;
        puVar464 = puVar469 + uVar485;
        in_ZMM0 = auVar503;
        if (auVar579._0_8_ == uVar485) goto LAB_140dceddb;
      }
      lVar482 = 0;
      do {
        bVar465 = pbVar472[lVar482] - puVar464[lVar482 + 1];
        auVar579._0_8_ = (ulonglong)(0x100 - bVar465);
        if (-1 < (char)bVar465) {
          auVar579._0_8_ = (ulonglong)bVar465;
        }
        pbVar488[lVar482] = bVar465;
        auVar503._0_8_ = auVar503._0_8_ + auVar579._0_8_;
        lVar482 = lVar482 + 1;
      } while (uVar13 - auVar511._0_8_ != lVar482);
    }
LAB_140dceddb:
    if (auVar503._0_8_ < auVar502._0_8_) {
      puVar469 = param_1->try_row;
      auVar502._0_8_ = auVar503._0_8_;
      if (param_1->tst_row != (uchar *)0x0) {
        param_1->try_row = param_1->tst_row;
        param_1->tst_row = puVar469;
      }
    }
  }
  if (bVar466 == 0x20) {
    puVar469 = param_1->try_row;
    *puVar469 = '\x02';
    if (uVar13 != 0) {
      puVar464 = param_1->prev_row;
      puVar484 = param_1->row_buf;
      if (uVar13 < 8) {
        auVar511._0_8_ = 0;
      }
      else {
        if (uVar13 < 0x20) {
          auVar503._0_8_ = 0;
        }
        else {
          auVar511._0_8_ = uVar13 & 0xffffffffffffffe0;
          auVar503._0_8_ = 0;
          do {
            puVar479 = puVar484 + auVar503._0_8_ + 1;
            puVar475 = puVar484 + auVar503._0_8_ + 0x11;
            puVar480 = puVar464 + auVar503._0_8_ + 1;
            auVar494[0] = *puVar479 - *puVar480;
            auVar494[1] = puVar479[1] - puVar480[1];
            auVar494[2] = puVar479[2] - puVar480[2];
            auVar494[3] = puVar479[3] - puVar480[3];
            auVar494[4] = puVar479[4] - puVar480[4];
            auVar494[5] = puVar479[5] - puVar480[5];
            auVar494[6] = puVar479[6] - puVar480[6];
            auVar494[7] = puVar479[7] - puVar480[7];
            auVar494[8] = puVar479[8] - puVar480[8];
            auVar494[9] = puVar479[9] - puVar480[9];
            auVar494[10] = puVar479[10] - puVar480[10];
            auVar494[0xb] = puVar479[0xb] - puVar480[0xb];
            auVar494[0xc] = puVar479[0xc] - puVar480[0xc];
            auVar494[0xd] = puVar479[0xd] - puVar480[0xd];
            auVar494[0xe] = puVar479[0xe] - puVar480[0xe];
            auVar494[0xf] = puVar479[0xf] - puVar480[0xf];
            in_ZMM0._0_16_ = auVar494;
            auVar883 = *(undefined1 (*) [16])(puVar464 + auVar503._0_8_ + 0x11);
            auVar553[0] = *puVar475 - auVar883[0];
            auVar553[1] = puVar475[1] - auVar883[1];
            auVar553[2] = puVar475[2] - auVar883[2];
            auVar553[3] = puVar475[3] - auVar883[3];
            auVar553[4] = puVar475[4] - auVar883[4];
            auVar553[5] = puVar475[5] - auVar883[5];
            auVar553[6] = puVar475[6] - auVar883[6];
            auVar553[7] = puVar475[7] - auVar883[7];
            auVar553[8] = puVar475[8] - auVar883[8];
            auVar553[9] = puVar475[9] - auVar883[9];
            auVar553[10] = puVar475[10] - auVar883[10];
            auVar553[0xb] = puVar475[0xb] - auVar883[0xb];
            auVar553[0xc] = puVar475[0xc] - auVar883[0xc];
            auVar553[0xd] = puVar475[0xd] - auVar883[0xd];
            auVar553[0xe] = puVar475[0xe] - auVar883[0xe];
            auVar553[0xf] = puVar475[0xf] - auVar883[0xf];
            in_ZMM1._0_16_ = auVar553;
            *(undefined1 (*) [16])(puVar469 + auVar503._0_8_ + 1) = auVar494;
            *(undefined1 (*) [16])(puVar469 + auVar503._0_8_ + 0x11) = auVar553;
            auVar503._0_8_ = auVar503._0_8_ + 0x20;
          } while (auVar511._0_8_ != auVar503._0_8_);
          if (uVar13 == auVar511._0_8_) goto LAB_140dcea66;
          auVar503._0_8_ = auVar511._0_8_;
          if ((uVar13 & 0x18) == 0) {
            puVar484 = puVar484 + auVar511._0_8_;
            puVar469 = puVar469 + auVar511._0_8_;
            puVar464 = puVar464 + auVar511._0_8_;
            goto LAB_140dcea45;
          }
        }
        auVar511._0_8_ = uVar13 & 0xfffffffffffffff8;
        do {
          uVar657 = *(undefined8 *)(puVar484 + auVar503._0_8_ + 1);
          auVar579._0_8_ = *(ulonglong *)(puVar464 + auVar503._0_8_ + 1);
          in_ZMM1._8_8_ = 0;
          in_ZMM1._0_8_ = auVar579._0_8_;
          in_ZMM0._0_8_ =
               CONCAT17((char)((ulonglong)uVar657 >> 0x38) - (char)(auVar579._0_8_ >> 0x38),
                        CONCAT16((char)((ulonglong)uVar657 >> 0x30) - (char)(auVar579._0_8_ >> 0x30)
                                 ,CONCAT15((char)((ulonglong)uVar657 >> 0x28) -
                                           (char)(auVar579._0_8_ >> 0x28),
                                           CONCAT14((char)((ulonglong)uVar657 >> 0x20) -
                                                    (char)(auVar579._0_8_ >> 0x20),
                                                    CONCAT13((char)((ulonglong)uVar657 >> 0x18) -
                                                             (char)(auVar579._0_8_ >> 0x18),
                                                             CONCAT12((char)((ulonglong)uVar657 >>
                                                                            0x10) -
                                                                      (char)(auVar579._0_8_ >> 0x10)
                                                                      ,CONCAT11((char)((ulonglong)
                                                                                       uVar657 >> 8)
                                                                                - (char)(auVar579.
                                                  _0_8_ >> 8),(char)uVar657 - (char)auVar579._0_8_))
                                                  )))));
          in_ZMM0._8_8_ = 0;
          *(ulonglong *)(puVar469 + auVar503._0_8_ + 1) = in_ZMM0._0_8_;
          auVar503._0_8_ = auVar503._0_8_ + 8;
        } while (auVar511._0_8_ != auVar503._0_8_);
        puVar469 = puVar469 + auVar511._0_8_;
        puVar484 = puVar484 + auVar511._0_8_;
        puVar464 = puVar464 + auVar511._0_8_;
        if (uVar13 == auVar511._0_8_) goto LAB_140dcea66;
      }
LAB_140dcea45:
      lVar482 = 0;
      do {
        puVar469[lVar482 + 1] = puVar484[lVar482 + 1] - puVar464[lVar482 + 1];
        lVar482 = lVar482 + 1;
      } while (uVar13 - auVar511._0_8_ != lVar482);
    }
LAB_140dcea66:
    puVar469 = param_1->try_row;
LAB_140dcea7c:
    if ((bVar466 & 0x40) != 0) {
      puVar479 = param_1->try_row;
      *puVar479 = '\x03';
      iVar1676 = _UNK_1531f2bac;
      iVar1536 = _UNK_1531f2ba8;
      iVar489 = _UNK_1531f2ba4;
      iVar481 = ___xmm_00000000000000000000010000000100;
      auVar883 = ___xmm_7f7f7f7f7f7f7f7f7f7f7f7f7f7f7f7f;
      puVar475 = param_1->prev_row;
      puVar480 = param_1->row_buf;
      pbVar472 = puVar479 + 1;
      pbVar488 = puVar475 + 1;
      puVar464 = puVar480 + 1;
      auVar511._0_8_ = 0;
      puVar484 = puVar464;
      if (bVar610 == 0) {
        auVar579._0_8_ = 0;
      }
      else {
        if (uVar486 - 1 < 3) {
          auVar579._0_8_ = 0;
        }
        else {
          uVar485 = (ulonglong)(uVar486 - 1) + 1;
          auVar511._0_8_ = uVar485 & 0x1fffffffc;
          puVar484 = puVar464 + auVar511._0_8_;
          pbVar488 = pbVar488 + auVar511._0_8_;
          pbVar472 = pbVar472 + auVar511._0_8_;
          auVar503._0_8_ = 0;
          auVar579 = ZEXT4864(in_ZMM1._16_48_) << 0x80;
          auVar524 = ZEXT4864(in_ZMM3._16_48_) << 0x80;
          do {
            auVar983._16_48_ = in_ZMM6._16_48_;
            auVar786._16_48_ = in_ZMM5._16_48_;
            auVar1285._16_48_ = in_ZMM7._16_48_;
            auVar1522._16_48_ = in_ZMM8._16_48_;
            auVar645 = ZEXT216(*(ushort *)(puVar475 + auVar503._0_8_ + 1) >> 1) & auVar883;
            bVar874 = (char)*(undefined2 *)(puVar480 + auVar503._0_8_ + 1) - auVar645[0];
            cVar652 = (char)((ushort)*(undefined2 *)(puVar480 + auVar503._0_8_ + 1) >> 8) -
                      auVar645[1];
            uVar546 = CONCAT11(-auVar645[9],-auVar645[8]);
            uVar476 = CONCAT13(-auVar645[0xb],CONCAT12(-auVar645[10],uVar546));
            auVar1628 = ZEXT216(*(ushort *)(puVar475 + auVar503._0_8_ + 3) >> 1) & auVar883;
            bVar465 = (char)*(undefined2 *)(puVar480 + auVar503._0_8_ + 3) - auVar1628[0];
            cVar1479 = (char)((ushort)*(undefined2 *)(puVar480 + auVar503._0_8_ + 3) >> 8) -
                       auVar1628[1];
            uVar611 = CONCAT11(-auVar1628[9],-auVar1628[8]);
            uVar200 = CONCAT12(-auVar1628[10],uVar611);
            uVar477 = CONCAT13(-auVar1628[0xb],uVar200);
            uVar205 = CONCAT14(-auVar1628[0xc],uVar477);
            uVar206 = CONCAT15(-auVar1628[0xd],uVar205);
            *(ushort *)(puVar479 + auVar503._0_8_ + 1) = CONCAT11(cVar652,bVar874);
            *(ushort *)(puVar479 + auVar503._0_8_ + 3) = CONCAT11(cVar1479,bVar465);
            auVar272._48_8_ = 0;
            auVar272._0_48_ = auVar1285._16_48_;
            auVar1281._15_49_ = SUB5649(auVar272 << 0x40,7);
            auVar1281._0_15_ =
                 ZEXT615(CONCAT15(-auVar645[0xd],CONCAT14(-auVar645[0xc],uVar476))) << 0x40;
            auVar453._50_6_ = 0;
            auVar453._0_50_ = auVar1281._14_50_;
            auVar1280._13_51_ = SUB5651(auVar453 << 0x30,5);
            auVar1280._0_13_ = ZEXT413(uVar476) << 0x40;
            auVar452._52_4_ = 0;
            auVar452._0_52_ = auVar1280._12_52_;
            auVar1279._11_53_ = SUB5653(auVar452 << 0x20,3);
            auVar1279._0_11_ = ZEXT211(uVar546) << 0x40;
            auVar451._54_2_ = 0;
            auVar451._0_54_ = auVar1279._10_54_;
            auVar1278._9_55_ = SUB5655(auVar451 << 0x10,1);
            auVar1278._0_9_ = (unkuint9)0;
            auVar271._56_8_ = 0;
            auVar271._0_56_ = auVar1278._8_56_;
            auVar270._58_6_ = 0;
            auVar270._0_58_ = SUB6458(auVar271 << 0x40,6);
            auVar269[0x3c] = 0;
            auVar269._0_60_ = SUB6460(auVar270 << 0x30,4);
            auVar1277[2] = cVar652;
            auVar1277._0_2_ = CONCAT11(cVar652,bVar874);
            auVar1277._3_61_ = auVar269 << 8;
            auVar1276._2_62_ = auVar1277._2_62_;
            uVar1812 = CONCAT11(0,bVar874);
            auVar1285._0_14_ = auVar1276._0_14_;
            auVar1285._14_2_ = 0;
            auVar1284._14_50_ = auVar1285._14_50_;
            auVar1284._0_12_ = auVar1276._0_12_;
            auVar1284._12_2_ = 0;
            auVar1283._12_52_ = auVar1284._12_52_;
            auVar1283._0_10_ = auVar1276._0_10_;
            auVar1283._10_2_ = 0;
            auVar1282._10_54_ = auVar1283._10_54_;
            auVar1282._0_10_ = (unkuint10)0 << 0x40;
            auVar273._56_2_ = 0;
            auVar273._0_56_ = auVar1282._8_56_;
            auVar84._2_58_ = auVar273 << 0x10;
            auVar84._0_2_ = auVar1277._2_2_;
            in_ZMM7._0_4_ = CONCAT22(0,uVar1812);
            in_ZMM7._4_60_ = auVar84;
            auVar457._48_8_ = 0;
            auVar457._0_48_ = auVar1522._16_48_;
            auVar1518._15_49_ = SUB5649(auVar457 << 0x40,7);
            auVar1518._0_15_ = ZEXT615(uVar206) << 0x40;
            auVar456._50_6_ = 0;
            auVar456._0_50_ = auVar1518._14_50_;
            auVar1517._13_51_ = SUB5651(auVar456 << 0x30,5);
            auVar1517._0_13_ = ZEXT413(uVar477) << 0x40;
            auVar455._52_4_ = 0;
            auVar455._0_52_ = auVar1517._12_52_;
            auVar1516._11_53_ = SUB5653(auVar455 << 0x20,3);
            auVar1516._0_11_ = ZEXT211(uVar611) << 0x40;
            auVar454._54_2_ = 0;
            auVar454._0_54_ = auVar1516._10_54_;
            auVar1515._9_55_ = SUB5655(auVar454 << 0x10,1);
            auVar1515._0_9_ = (unkuint9)0;
            auVar276._56_8_ = 0;
            auVar276._0_56_ = auVar1515._8_56_;
            auVar275._58_6_ = 0;
            auVar275._0_58_ = SUB6458(auVar276 << 0x40,6);
            auVar274[0x3c] = 0;
            auVar274._0_60_ = SUB6460(auVar275 << 0x30,4);
            auVar1514[2] = cVar1479;
            auVar1514._0_2_ = CONCAT11(cVar1479,bVar465);
            auVar1514._3_61_ = auVar274 << 8;
            auVar1513._2_62_ = auVar1514._2_62_;
            uVar1825 = CONCAT11(0,bVar465);
            auVar1522._0_14_ = auVar1513._0_14_;
            auVar1522._14_2_ = 0;
            auVar1521._14_50_ = auVar1522._14_50_;
            auVar1521._0_12_ = auVar1513._0_12_;
            auVar1521._12_2_ = 0;
            auVar1520._12_52_ = auVar1521._12_52_;
            auVar1520._0_10_ = auVar1513._0_10_;
            auVar1520._10_2_ = 0;
            auVar1519._10_54_ = auVar1520._10_54_;
            auVar1519._0_10_ = (unkuint10)0 << 0x40;
            auVar277._56_2_ = 0;
            auVar277._0_56_ = auVar1519._8_56_;
            auVar85._2_58_ = auVar277 << 0x10;
            auVar85._0_2_ = auVar1514._2_2_;
            in_ZMM8._0_4_ = CONCAT22(0,uVar1825);
            in_ZMM8._4_60_ = auVar85;
            auVar1552._0_4_ = iVar481 - in_ZMM7._0_4_;
            auVar1552._4_4_ = iVar489 - auVar84._0_4_;
            auVar1552._8_4_ = iVar1536 - auVar1282._8_4_;
            auVar1552._12_4_ = iVar1676 - auVar1284._12_4_;
            auVar1624._0_4_ = iVar481 - in_ZMM8._0_4_;
            auVar1624._4_4_ = iVar489 - auVar85._0_4_;
            auVar1624._8_4_ = iVar1536 - auVar1519._8_4_;
            auVar1624._12_4_ = iVar1676 - auVar1521._12_4_;
            auVar1692._16_48_ = in_ZMM11._16_48_;
            auVar775 = ZEXT4864(auVar1692._16_48_) << 0x80;
            auVar1677[0] = -((char)bVar874 < '\0');
            auVar1677[1] = -((char)bVar874 < '\0');
            auVar1677[2] = -((char)bVar874 < '\0');
            auVar1677[3] = -((char)bVar874 < '\0');
            auVar1677[4] = -(cVar652 < '\0');
            auVar1677[5] = -(cVar652 < '\0');
            auVar1677[6] = -(cVar652 < '\0');
            auVar1677[7] = -(cVar652 < '\0');
            auVar1677[8] = -('\0' < auVar775[8]);
            auVar1677[9] = -('\0' < auVar775[9]);
            auVar1677[10] = -('\0' < auVar775[10]);
            auVar1677[0xb] = -('\0' < auVar775[0xb]);
            auVar1682[0xc] = -('\0' < auVar775[0xc]);
            auVar1682._0_12_ = auVar1677;
            auVar1682[0xd] = -('\0' < auVar775[0xd]);
            auVar1682[0xe] = -('\0' < auVar775[0xe]);
            auVar1682[0xf] = -('\0' < auVar775[0xf]);
            auVar786._0_16_ = ZEXT716(CONCAT16(-auVar1628[0xe],uVar206)) << 0x40;
            auVar785._15_49_ = auVar786._15_49_;
            auVar785._0_15_ = ZEXT615(uVar206) << 0x40;
            auVar784._14_50_ = auVar785._14_50_;
            auVar784._0_14_ = ZEXT514(uVar205) << 0x40;
            auVar783._13_51_ = auVar784._13_51_;
            auVar783._0_13_ = ZEXT413(uVar477) << 0x40;
            auVar782._12_52_ = auVar783._12_52_;
            auVar782._0_12_ = ZEXT312(uVar200) << 0x40;
            auVar781._11_53_ = auVar782._11_53_;
            auVar781._0_11_ = ZEXT211(uVar611) << 0x40;
            auVar780._10_54_ = auVar781._10_54_;
            auVar780._0_10_ = (unkuint10)(byte)-auVar1628[8] << 0x40;
            auVar779._9_55_ = auVar780._9_55_;
            auVar779._0_9_ = (unkuint9)0;
            auVar204._56_8_ = 0;
            auVar204._0_56_ = auVar779._8_56_;
            auVar203._57_7_ = 0;
            auVar203._0_57_ = SUB6457(auVar204 << 0x40,7);
            auVar202._58_6_ = 0;
            auVar202._0_58_ = SUB6458(auVar203 << 0x38,6);
            auVar201._59_5_ = 0;
            auVar201._0_59_ = SUB6459(auVar202 << 0x30,5);
            auVar86._1_60_ = SUB6460(auVar201 << 0x28,4);
            auVar86[0] = cVar1479;
            auVar86._61_3_ = 0;
            auVar778._62_2_ = 0;
            auVar778._0_62_ = SUB6462(auVar86 << 0x18,2);
            auVar778 = auVar778 << 0x10;
            auVar790._0_14_ = auVar778._0_14_;
            auVar790._14_2_ = 0;
            auVar790._16_48_ = auVar786._16_48_;
            auVar789._14_50_ = auVar790._14_50_;
            auVar789._0_12_ = auVar778._0_12_;
            auVar789._12_2_ = 0;
            auVar788._12_52_ = auVar789._12_52_;
            auVar788._0_10_ = auVar778._0_10_;
            auVar788._10_2_ = 0;
            auVar787._10_54_ = auVar788._10_54_;
            auVar787._0_10_ = (unkuint10)0 << 0x40;
            auVar88._2_56_ = auVar787._8_56_;
            auVar88._0_2_ = SUB642(auVar86 << 0x18,2);
            auVar88._58_6_ = 0;
            auVar87._60_4_ = 0;
            auVar87._0_60_ = SUB6460(auVar88 << 0x30,4);
            in_ZMM5 = auVar87 << 0x20;
            auVar775 = ZEXT4864(auVar983._16_48_) << 0x80;
            auVar876[0] = -((char)bVar465 < '\0');
            auVar876[1] = -((char)bVar465 < '\0');
            auVar876[2] = -((char)bVar465 < '\0');
            auVar876[3] = -((char)bVar465 < '\0');
            auVar876[4] = -(cVar1479 < '\0');
            auVar876[5] = -(cVar1479 < '\0');
            auVar876[6] = -(cVar1479 < '\0');
            auVar876[7] = -(cVar1479 < '\0');
            auVar876[8] = -('\0' < auVar775[8]);
            auVar876[9] = -('\0' < auVar775[9]);
            auVar876[10] = -('\0' < auVar775[10]);
            auVar876[0xb] = -('\0' < auVar775[0xb]);
            auVar878[0xc] = -('\0' < auVar775[0xc]);
            auVar878._0_12_ = auVar876;
            auVar878[0xd] = -('\0' < auVar775[0xd]);
            auVar878[0xe] = -('\0' < auVar775[0xe]);
            auVar878[0xf] = -('\0' < auVar775[0xf]);
            in_ZMM9._0_16_ = auVar1552 & auVar1682;
            auVar1692._0_12_ = ~auVar1677 & in_ZMM7._0_12_ | in_ZMM9._0_12_;
            in_ZMM10._0_16_ = auVar1624 & auVar878;
            auVar983._0_12_ = ~auVar876 & in_ZMM8._0_12_ | in_ZMM10._0_12_;
            auVar1692._12_4_ = 0;
            auVar1691._12_52_ = auVar1692._12_52_;
            auVar1691._0_8_ = auVar1692._0_8_;
            auVar1691._8_4_ = auVar1692._4_4_;
            in_ZMM11._8_56_ = auVar1691._8_56_;
            in_ZMM11._0_8_ = CONCAT44(0,auVar1692._0_4_);
            auVar607._0_8_ = auVar524._0_8_ + in_ZMM11._0_8_;
            auVar607._16_48_ = auVar524._16_48_;
            auVar607._8_8_ = auVar524._8_8_ + auVar1691._8_8_;
            auVar983._12_4_ = 0;
            auVar982._12_52_ = auVar983._12_52_;
            auVar982._0_8_ = auVar983._0_8_;
            auVar982._8_4_ = auVar983._4_4_;
            in_ZMM6._8_56_ = auVar982._8_56_;
            in_ZMM6._0_8_ = CONCAT44(0,auVar983._0_4_);
            auVar573._0_8_ = auVar579._0_8_ + in_ZMM6._0_8_;
            auVar573._16_48_ = auVar579._16_48_;
            auVar573._8_8_ = auVar579._8_8_ + auVar982._8_8_;
            auVar503._0_8_ = auVar503._0_8_ + 4;
            auVar579 = auVar573;
            auVar524 = auVar607;
          } while (auVar511._0_8_ != auVar503._0_8_);
          in_ZMM1._0_8_ = auVar573._0_8_ + auVar607._0_8_;
          in_ZMM1._8_8_ = auVar573._8_8_ + auVar607._8_8_;
          in_ZMM1._16_48_ = auVar573._16_48_;
          auVar495._8_4_ = (int)in_ZMM1._8_8_;
          auVar495._0_8_ = in_ZMM1._8_8_;
          auVar495._12_4_ = (int)((ulonglong)in_ZMM1._8_8_ >> 0x20);
          in_ZMM0._0_8_ = in_ZMM1._8_8_ + in_ZMM1._0_8_;
          in_ZMM0._8_8_ = auVar495._8_8_ + in_ZMM1._8_8_;
          auVar579._0_8_ = in_ZMM0._0_8_;
          if (uVar485 == auVar511._0_8_) goto LAB_140dcec56;
        }
        iVar481 = uVar486 - (int)auVar511._0_8_;
        do {
          bVar465 = *puVar484 - (*pbVar488 >> 1);
          *pbVar472 = bVar465;
          uVar476 = 0x100 - bVar465;
          if (-1 < (char)bVar465) {
            uVar476 = (uint)bVar465;
          }
          auVar579._0_8_ = auVar579._0_8_ + uVar476;
          pbVar472 = pbVar472 + 1;
          pbVar488 = pbVar488 + 1;
          puVar484 = puVar484 + 1;
          iVar481 = iVar481 + -1;
        } while (iVar481 != 0);
      }
LAB_140dcec56:
      iVar1676 = _UNK_1531f2bac;
      iVar1536 = _UNK_1531f2ba8;
      iVar489 = _UNK_1531f2ba4;
      iVar481 = ___xmm_00000000000000000000010000000100;
      auVar883 = ___xmm_7f7f7f7f7f7f7f7f7f7f7f7f7f7f7f7f;
      auVar511._0_8_ = uVar13 - uVar474;
      if (uVar474 <= uVar13 && auVar511._0_8_ != 0) {
        uVar476 = uVar486;
        if ((1 < auVar511._0_8_) &&
           (~uVar474 + uVar13 >> 0x20 == 0 && (uint)(~uVar474 + uVar13) <= -uVar486 - 2)) {
          auVar503._0_8_ = auVar511._0_8_ & 0xfffffffffffffffe;
          puVar480 = puVar480 + auVar503._0_8_;
          auVar519._16_48_ = in_ZMM0._16_48_;
          auVar519._8_8_ = 0;
          auVar519._0_8_ = auVar579._0_8_;
          auVar579._0_8_ = 0;
          auVar579._16_48_ = in_ZMM1._16_48_;
          do {
            auVar826._16_48_ = in_ZMM5._16_48_;
            auVar1394._16_48_ = in_ZMM7._16_48_;
            uVar546 = *(ushort *)(puVar464 + auVar579._0_8_) &
                      *(ushort *)(pbVar488 + auVar579._0_8_);
            auVar645 = ZEXT216((ushort)((*(ushort *)(puVar464 + auVar579._0_8_) ^
                                        *(ushort *)(pbVar488 + auVar579._0_8_)) >> 1)) & auVar883;
            bVar465 = (char)*(undefined2 *)(puVar484 + auVar579._0_8_) -
                      (auVar645[0] + (char)uVar546);
            cVar1479 = (char)((ushort)*(undefined2 *)(puVar484 + auVar579._0_8_) >> 8) -
                       (auVar645[1] + (char)(uVar546 >> 8));
            uVar546 = CONCAT11(-auVar645[9],-auVar645[8]);
            uVar476 = CONCAT13(-auVar645[0xb],CONCAT12(-auVar645[10],uVar546));
            *(ushort *)(pbVar472 + auVar579._0_8_) = CONCAT11(cVar1479,bVar465);
            auVar396._48_8_ = 0;
            auVar396._0_48_ = auVar826._16_48_;
            auVar822._15_49_ = SUB5649(auVar396 << 0x40,7);
            auVar822._0_15_ =
                 ZEXT615(CONCAT15(-auVar645[0xd],CONCAT14(-auVar645[0xc],uVar476))) << 0x40;
            auVar463._50_6_ = 0;
            auVar463._0_50_ = auVar822._14_50_;
            auVar821._13_51_ = SUB5651(auVar463 << 0x30,5);
            auVar821._0_13_ = ZEXT413(uVar476) << 0x40;
            auVar462._52_4_ = 0;
            auVar462._0_52_ = auVar821._12_52_;
            auVar820._11_53_ = SUB5653(auVar462 << 0x20,3);
            auVar820._0_11_ = ZEXT211(uVar546) << 0x40;
            auVar461._54_2_ = 0;
            auVar461._0_54_ = auVar820._10_54_;
            auVar819._9_55_ = SUB5655(auVar461 << 0x10,1);
            auVar819._0_9_ = (unkuint9)0;
            auVar395._56_8_ = 0;
            auVar395._0_56_ = auVar819._8_56_;
            auVar394._58_6_ = 0;
            auVar394._0_58_ = SUB6458(auVar395 << 0x40,6);
            auVar393[0x3c] = 0;
            auVar393._0_60_ = SUB6460(auVar394 << 0x30,4);
            auVar818[2] = cVar1479;
            auVar818._0_2_ = CONCAT11(cVar1479,bVar465);
            auVar818._3_61_ = auVar393 << 8;
            auVar817._2_62_ = auVar818._2_62_;
            uVar1786 = CONCAT11(0,bVar465);
            auVar826._0_14_ = auVar817._0_14_;
            auVar826._14_2_ = 0;
            auVar825._14_50_ = auVar826._14_50_;
            auVar825._0_12_ = auVar817._0_12_;
            auVar825._12_2_ = 0;
            auVar824._12_52_ = auVar825._12_52_;
            auVar824._0_10_ = auVar817._0_10_;
            auVar824._10_2_ = 0;
            auVar823._10_54_ = auVar824._10_54_;
            auVar823._0_10_ = (unkuint10)0 << 0x40;
            auVar397._56_2_ = 0;
            auVar397._0_56_ = auVar823._8_56_;
            auVar152._2_58_ = auVar397 << 0x10;
            auVar152._0_2_ = auVar818._2_2_;
            in_ZMM5._0_4_ = CONCAT22(0,uVar1786);
            in_ZMM5._4_60_ = auVar152;
            auVar882._0_4_ = iVar481 - in_ZMM5._0_4_;
            auVar882._4_4_ = iVar489 - auVar152._0_4_;
            auVar882._8_4_ = iVar1536 - auVar823._8_4_;
            auVar882._12_4_ = iVar1676 - auVar825._12_4_;
            auVar524 = ZEXT4864(auVar1394._16_48_) << 0x80;
            auVar1181[0] = -((char)bVar465 < '\0');
            auVar1181[1] = -((char)bVar465 < '\0');
            auVar1181[2] = -((char)bVar465 < '\0');
            auVar1181[3] = -((char)bVar465 < '\0');
            auVar1181[4] = -(cVar1479 < '\0');
            auVar1181[5] = -(cVar1479 < '\0');
            auVar1181[6] = -(cVar1479 < '\0');
            auVar1181[7] = -(cVar1479 < '\0');
            auVar1181[8] = -('\0' < auVar524[8]);
            auVar1181[9] = -('\0' < auVar524[9]);
            auVar1181[10] = -('\0' < auVar524[10]);
            auVar1181[0xb] = -('\0' < auVar524[0xb]);
            auVar1190[0xc] = -('\0' < auVar524[0xc]);
            auVar1190._0_12_ = auVar1181;
            auVar1190[0xd] = -('\0' < auVar524[0xd]);
            auVar1190[0xe] = -('\0' < auVar524[0xe]);
            auVar1190[0xf] = -('\0' < auVar524[0xf]);
            in_ZMM6._0_16_ = auVar882 & auVar1190;
            auVar1394._0_12_ = ~auVar1181 & in_ZMM5._0_12_ | in_ZMM6._0_12_;
            auVar1394._12_4_ = 0;
            auVar1393._12_52_ = auVar1394._12_52_;
            auVar1393._0_8_ = auVar1394._0_8_;
            auVar1393._8_4_ = auVar1394._4_4_;
            in_ZMM7._8_56_ = auVar1393._8_56_;
            in_ZMM7._0_8_ = CONCAT44(0,auVar1394._0_4_);
            in_ZMM0._0_8_ = auVar519._0_8_ + in_ZMM7._0_8_;
            in_ZMM0._16_48_ = auVar519._16_48_;
            in_ZMM0._8_8_ = auVar519._8_8_ + auVar1393._8_8_;
            auVar579._0_8_ = auVar579._0_8_ + 2;
            auVar519 = in_ZMM0;
          } while (auVar503._0_8_ != auVar579._0_8_);
          auVar556._8_4_ = (int)in_ZMM0._8_8_;
          auVar556._0_8_ = in_ZMM0._8_8_;
          auVar556._12_4_ = (int)((ulonglong)in_ZMM0._8_8_ >> 0x20);
          auVar579._0_8_ = in_ZMM0._8_8_ + in_ZMM0._0_8_;
          auVar579._8_8_ = auVar556._8_8_ + in_ZMM0._8_8_;
          pbVar488 = pbVar488 + auVar503._0_8_;
          pbVar472 = pbVar472 + auVar503._0_8_;
          puVar484 = puVar484 + auVar503._0_8_;
          in_ZMM1 = auVar579;
          uVar476 = uVar486 + (int)auVar503._0_8_;
          if (auVar511._0_8_ == auVar503._0_8_) goto LAB_140dcf76c;
        }
        lVar482 = 0;
        do {
          bVar465 = puVar484[lVar482] -
                    (char)((uint)puVar480[lVar482 + 1] + (uint)pbVar488[lVar482] >> 1);
          pbVar472[lVar482] = bVar465;
          uVar477 = 0x100 - bVar465;
          if (-1 < (char)bVar465) {
            uVar477 = (uint)bVar465;
          }
          auVar579._0_8_ = auVar579._0_8_ + uVar477;
          iVar481 = (int)lVar482;
          lVar482 = lVar482 + 1;
        } while (iVar481 + uVar476 + 1 < uVar13);
      }
LAB_140dcf76c:
      if (auVar579._0_8_ < auVar502._0_8_) {
        puVar469 = param_1->try_row;
        auVar502._0_8_ = auVar579._0_8_;
        if (param_1->tst_row != (uchar *)0x0) {
          param_1->try_row = param_1->tst_row;
          param_1->tst_row = puVar469;
        }
      }
    }
  }
  else {
    if ((bVar466 & 0x20) != 0) {
      puVar464 = param_1->try_row;
      *puVar464 = '\x02';
      iVar1676 = _UNK_1531f2bac;
      iVar1536 = _UNK_1531f2ba8;
      iVar489 = _UNK_1531f2ba4;
      iVar481 = ___xmm_00000000000000000000010000000100;
      if (uVar13 == 0) {
        auVar511._0_8_ = 0;
      }
      else {
        puVar484 = param_1->prev_row;
        puVar479 = param_1->row_buf;
        if (uVar13 < 4) {
          auVar511._0_8_ = 0;
          auVar503._0_8_ = 0;
          puVar475 = puVar479;
          puVar487 = puVar464;
          puVar480 = puVar484;
        }
        else {
          auVar503._0_8_ = uVar13 & 0xfffffffffffffffc;
          puVar475 = puVar479 + auVar503._0_8_;
          puVar480 = puVar484 + auVar503._0_8_;
          puVar487 = puVar464 + auVar503._0_8_;
          auVar511._16_48_ = in_ZMM0._16_48_;
          auVar511._0_8_ = 0;
          in_ZMM3._4_4_ = _UNK_1531f2ba4;
          in_ZMM3._0_4_ = ___xmm_00000000000000000000010000000100;
          in_ZMM3._8_4_ = _UNK_1531f2ba8;
          in_ZMM3._12_4_ = _UNK_1531f2bac;
          auVar579 = ZEXT4864(in_ZMM1._16_48_) << 0x80;
          auVar524 = ZEXT4864(in_ZMM2._16_48_) << 0x80;
          do {
            auVar777._16_48_ = in_ZMM5._16_48_;
            auVar977._16_48_ = in_ZMM6._16_48_;
            bVar874 = (char)*(undefined2 *)(puVar479 + auVar511._0_8_ + 1) -
                      (char)*(undefined2 *)(puVar484 + auVar511._0_8_ + 1);
            cVar652 = (char)((ushort)*(undefined2 *)(puVar479 + auVar511._0_8_ + 1) >> 8) -
                      (char)((ushort)*(undefined2 *)(puVar484 + auVar511._0_8_ + 1) >> 8);
            uVar611 = CONCAT11(cVar652,bVar874);
            auVar665._0_12_ = ZEXT212(uVar611);
            auVar665[0xc] = 0;
            auVar674[0xd] = 0;
            auVar674._0_13_ = auVar665;
            bVar465 = (char)*(undefined2 *)(puVar479 + auVar511._0_8_ + 3) -
                      (char)*(undefined2 *)(puVar484 + auVar511._0_8_ + 3);
            cVar1479 = (char)((ushort)*(undefined2 *)(puVar479 + auVar511._0_8_ + 3) >> 8) -
                       (char)((ushort)*(undefined2 *)(puVar484 + auVar511._0_8_ + 3) >> 8);
            uVar546 = CONCAT11(cVar1479,bVar465);
            auVar615._0_12_ = ZEXT212(uVar546);
            auVar615[0xc] = 0;
            auVar625[0xd] = 0;
            auVar625._0_13_ = auVar615;
            *(ushort *)(puVar464 + auVar511._0_8_ + 1) = uVar611;
            *(ushort *)(puVar464 + auVar511._0_8_ + 3) = uVar546;
            auVar977._14_2_ = 0;
            auVar977._0_14_ = auVar674;
            auVar976._15_49_ = auVar977._15_49_;
            auVar976[0xe] = 0;
            auVar976._0_14_ = auVar674;
            auVar975._14_50_ = auVar976._14_50_;
            auVar975[0xd] = 0;
            auVar975._0_13_ = auVar665;
            auVar974._13_51_ = auVar975._13_51_;
            auVar974[0xc] = 0;
            auVar974._0_12_ = auVar665._0_12_;
            auVar973._12_52_ = auVar974._12_52_;
            auVar973._0_12_ = ZEXT212(uVar611);
            auVar972._11_53_ = auVar973._11_53_;
            auVar972._0_11_ = ZEXT211(uVar611);
            auVar971._10_54_ = auVar972._10_54_;
            auVar971._2_8_ = 0;
            auVar971._0_2_ = uVar611;
            auVar970._9_55_ = auVar971._9_55_;
            auVar970._2_7_ = 0;
            auVar970._0_2_ = uVar611;
            auVar264._56_8_ = 0;
            auVar264._0_56_ = auVar970._8_56_;
            auVar263._58_6_ = 0;
            auVar263._0_58_ = SUB6458(auVar264 << 0x40,6);
            auVar262[0x3c] = 0;
            auVar262._0_60_ = SUB6460(auVar263 << 0x30,4);
            auVar969[2] = cVar652;
            auVar969._0_2_ = uVar611;
            auVar969._3_61_ = auVar262 << 8;
            auVar968._2_62_ = auVar969._2_62_;
            uVar1793 = CONCAT11(0,bVar874);
            auVar981._0_14_ = auVar968._0_14_;
            auVar981._14_2_ = 0;
            auVar981._16_48_ = auVar977._16_48_;
            auVar980._14_50_ = auVar981._14_50_;
            auVar980._0_12_ = auVar968._0_12_;
            auVar980._12_2_ = 0;
            auVar979._12_52_ = auVar980._12_52_;
            auVar979._0_10_ = auVar968._0_10_;
            auVar979._10_2_ = 0;
            auVar978._10_54_ = auVar979._10_54_;
            auVar978._0_10_ = (unkuint10)0 << 0x40;
            auVar265._56_2_ = 0;
            auVar265._0_56_ = auVar978._8_56_;
            auVar82._2_58_ = auVar265 << 0x10;
            auVar82._0_2_ = auVar969._2_2_;
            in_ZMM6._0_4_ = CONCAT22(0,uVar1793);
            in_ZMM6._4_60_ = auVar82;
            auVar1271._16_48_ = in_ZMM7._16_48_;
            auVar1271._14_2_ = 0;
            auVar1271._0_14_ = auVar625;
            auVar1270._15_49_ = auVar1271._15_49_;
            auVar1270[0xe] = 0;
            auVar1270._0_14_ = auVar625;
            auVar1269._14_50_ = auVar1270._14_50_;
            auVar1269[0xd] = 0;
            auVar1269._0_13_ = auVar615;
            auVar1268._13_51_ = auVar1269._13_51_;
            auVar1268[0xc] = 0;
            auVar1268._0_12_ = auVar615._0_12_;
            auVar1267._12_52_ = auVar1268._12_52_;
            auVar1267._0_12_ = ZEXT212(uVar546);
            auVar1266._11_53_ = auVar1267._11_53_;
            auVar1266._0_11_ = ZEXT211(uVar546);
            auVar1265._10_54_ = auVar1266._10_54_;
            auVar1265._2_8_ = 0;
            auVar1265._0_2_ = uVar546;
            auVar1264._9_55_ = auVar1265._9_55_;
            auVar1264._2_7_ = 0;
            auVar1264._0_2_ = uVar546;
            auVar446._56_8_ = 0;
            auVar446._0_56_ = auVar1264._8_56_;
            auVar267._58_6_ = 0;
            auVar267._0_58_ = SUB6458(auVar446 << 0x40,6);
            auVar266[0x3c] = 0;
            auVar266._0_60_ = SUB6460(auVar267 << 0x30,4);
            auVar1263[2] = cVar1479;
            auVar1263._0_2_ = uVar546;
            auVar1263._3_61_ = auVar266 << 8;
            auVar1262._2_62_ = auVar1263._2_62_;
            uVar1811 = CONCAT11(0,bVar465);
            auVar1275._0_14_ = auVar1262._0_14_;
            auVar1275._14_2_ = 0;
            auVar1275._16_48_ = auVar1271._16_48_;
            auVar1274._14_50_ = auVar1275._14_50_;
            auVar1274._0_12_ = auVar1262._0_12_;
            auVar1274._12_2_ = 0;
            auVar1273._12_52_ = auVar1274._12_52_;
            auVar1273._0_10_ = auVar1262._0_10_;
            auVar1273._10_2_ = 0;
            auVar1272._10_54_ = auVar1273._10_54_;
            auVar1272._0_10_ = (unkuint10)0 << 0x40;
            auVar268._56_2_ = 0;
            auVar268._0_56_ = auVar1272._8_56_;
            auVar83._2_58_ = auVar268 << 0x10;
            auVar83._0_2_ = auVar1263._2_2_;
            in_ZMM7._0_4_ = CONCAT22(0,uVar1811);
            in_ZMM7._4_60_ = auVar83;
            auVar1493._0_4_ = iVar481 - in_ZMM6._0_4_;
            auVar1493._4_4_ = iVar489 - auVar82._0_4_;
            auVar1493._8_4_ = iVar1536 - auVar978._8_4_;
            auVar1493._12_4_ = iVar1676 - auVar980._12_4_;
            auVar1551._0_4_ = iVar481 - in_ZMM7._0_4_;
            auVar1551._4_4_ = iVar489 - auVar83._0_4_;
            auVar1551._8_4_ = iVar1536 - auVar1272._8_4_;
            auVar1551._12_4_ = iVar1676 - auVar1274._12_4_;
            auVar1642._16_48_ = in_ZMM10._16_48_;
            auVar775 = ZEXT4864(auVar1642._16_48_) << 0x80;
            auVar1612[0] = -((char)bVar874 < '\0');
            auVar1612[1] = -((char)bVar874 < '\0');
            auVar1612[2] = -((char)bVar874 < '\0');
            auVar1612[3] = -((char)bVar874 < '\0');
            auVar1612[4] = -(cVar652 < '\0');
            auVar1612[5] = -(cVar652 < '\0');
            auVar1612[6] = -(cVar652 < '\0');
            auVar1612[7] = -(cVar652 < '\0');
            auVar1612[8] = -('\0' < auVar775[8]);
            auVar1612[9] = -('\0' < auVar775[9]);
            auVar1612[10] = -('\0' < auVar775[10]);
            auVar1612[0xb] = -('\0' < auVar775[0xb]);
            auVar1623[0xc] = -('\0' < auVar775[0xc]);
            auVar1623._0_12_ = auVar1612;
            auVar1623[0xd] = -('\0' < auVar775[0xd]);
            auVar1623[0xe] = -('\0' < auVar775[0xe]);
            auVar1623[0xf] = -('\0' < auVar775[0xf]);
            auVar775 = ZEXT4864(auVar777._16_48_) << 0x80;
            auVar658[0] = -((char)bVar465 < '\0');
            auVar658[1] = -((char)bVar465 < '\0');
            auVar658[2] = -((char)bVar465 < '\0');
            auVar658[3] = -((char)bVar465 < '\0');
            auVar658[4] = -(cVar1479 < '\0');
            auVar658[5] = -(cVar1479 < '\0');
            auVar658[6] = -(cVar1479 < '\0');
            auVar658[7] = -(cVar1479 < '\0');
            auVar658[8] = -('\0' < auVar775[8]);
            auVar658[9] = -('\0' < auVar775[9]);
            auVar658[10] = -('\0' < auVar775[10]);
            auVar658[0xb] = -('\0' < auVar775[0xb]);
            auVar684[0xc] = -('\0' < auVar775[0xc]);
            auVar684._0_12_ = auVar658;
            auVar684[0xd] = -('\0' < auVar775[0xd]);
            auVar684[0xe] = -('\0' < auVar775[0xe]);
            auVar684[0xf] = -('\0' < auVar775[0xf]);
            in_ZMM8._0_16_ = auVar1493 & auVar1623;
            auVar1642._0_12_ = ~auVar1612 & in_ZMM6._0_12_ | in_ZMM8._0_12_;
            in_ZMM9._0_16_ = auVar1551 & auVar684;
            auVar777._0_12_ = ~auVar658 & in_ZMM7._0_12_ | in_ZMM9._0_12_;
            auVar1642._12_4_ = 0;
            auVar1641._12_52_ = auVar1642._12_52_;
            auVar1641._0_8_ = auVar1642._0_8_;
            auVar1641._8_4_ = auVar1642._4_4_;
            in_ZMM10._8_56_ = auVar1641._8_56_;
            in_ZMM10._0_8_ = CONCAT44(0,auVar1642._0_4_);
            auVar598._0_8_ = auVar524._0_8_ + in_ZMM10._0_8_;
            auVar598._16_48_ = auVar524._16_48_;
            auVar598._8_8_ = auVar524._8_8_ + auVar1641._8_8_;
            auVar777._12_4_ = 0;
            auVar776._12_52_ = auVar777._12_52_;
            auVar776._0_8_ = auVar777._0_8_;
            auVar776._8_4_ = auVar777._4_4_;
            in_ZMM5._8_56_ = auVar776._8_56_;
            in_ZMM5._0_8_ = CONCAT44(0,auVar777._0_4_);
            auVar572._0_8_ = auVar579._0_8_ + in_ZMM5._0_8_;
            auVar572._16_48_ = auVar579._16_48_;
            auVar572._8_8_ = auVar579._8_8_ + auVar776._8_8_;
            auVar511._0_8_ = auVar511._0_8_ + 4;
            auVar579 = auVar572;
            auVar524 = auVar598;
          } while (auVar503._0_8_ != auVar511._0_8_);
          in_ZMM1._0_8_ = auVar572._0_8_ + auVar598._0_8_;
          in_ZMM1._8_8_ = auVar572._8_8_ + auVar598._8_8_;
          in_ZMM1._16_48_ = auVar572._16_48_;
          auVar493._8_4_ = (int)in_ZMM1._8_8_;
          auVar493._0_8_ = in_ZMM1._8_8_;
          auVar493._12_4_ = (int)((ulonglong)in_ZMM1._8_8_ >> 0x20);
          auVar511._0_8_ = in_ZMM1._8_8_ + in_ZMM1._0_8_;
          auVar511._8_8_ = auVar493._8_8_ + in_ZMM1._8_8_;
          in_ZMM0 = auVar511;
          if (uVar13 == auVar503._0_8_) goto LAB_140dce82f;
        }
        lVar482 = 0;
        do {
          bVar465 = puVar475[lVar482 + 1] - puVar480[lVar482 + 1];
          auVar579._0_8_ = (ulonglong)(0x100 - bVar465);
          if (-1 < (char)bVar465) {
            auVar579._0_8_ = (ulonglong)bVar465;
          }
          puVar487[lVar482 + 1] = bVar465;
          auVar511._0_8_ = auVar511._0_8_ + auVar579._0_8_;
          lVar482 = lVar482 + 1;
        } while (uVar13 - auVar503._0_8_ != lVar482);
      }
LAB_140dce82f:
      if (auVar511._0_8_ < auVar502._0_8_) {
        puVar469 = param_1->try_row;
        auVar502._0_8_ = auVar511._0_8_;
        if (param_1->tst_row != (uchar *)0x0) {
          param_1->try_row = param_1->tst_row;
          param_1->tst_row = puVar469;
        }
      }
    }
    if (bVar466 != 0x40) goto LAB_140dcea7c;
    puVar464 = param_1->try_row;
    *puVar464 = '\x03';
    auVar883 = ___xmm_7f7f7f7f7f7f7f7f7f7f7f7f7f7f7f7f;
    puVar484 = param_1->row_buf;
    puVar464 = puVar464 + 1;
    pbVar472 = param_1->prev_row + 1;
    puVar469 = puVar484 + 1;
    puVar479 = puVar469;
    if (bVar610 != 0) {
      auVar511._0_8_ = 0;
      if (0xe < uVar486 - 1) {
        auVar503._0_8_ = (ulonglong)(uVar486 - 1) + 1;
        auVar511._0_8_ = auVar503._0_8_ & 0xfffffffffffffff0;
        pbVar488 = pbVar472 + auVar511._0_8_;
        puVar475 = puVar464 + auVar511._0_8_;
        auVar579._0_8_ = 0;
        in_ZMM0._0_16_ = ___xmm_7f7f7f7f7f7f7f7f7f7f7f7f7f7f7f7f;
        do {
          puVar479 = puVar469 + auVar579._0_8_;
          puVar4 = (ushort *)(pbVar472 + auVar579._0_8_);
          auVar586._0_2_ = *puVar4 >> 1;
          auVar586._2_2_ = puVar4[1] >> 1;
          auVar586._4_2_ = puVar4[2] >> 1;
          auVar586._6_2_ = puVar4[3] >> 1;
          auVar586._8_2_ = puVar4[4] >> 1;
          auVar586._10_2_ = puVar4[5] >> 1;
          auVar586._12_2_ = puVar4[6] >> 1;
          auVar586._14_2_ = puVar4[7] >> 1;
          auVar586 = auVar586 & auVar883;
          auVar552[0] = *puVar479 - auVar586[0];
          auVar552[1] = puVar479[1] - auVar586[1];
          auVar552[2] = puVar479[2] - auVar586[2];
          auVar552[3] = puVar479[3] - auVar586[3];
          auVar552[4] = puVar479[4] - auVar586[4];
          auVar552[5] = puVar479[5] - auVar586[5];
          auVar552[6] = puVar479[6] - auVar586[6];
          auVar552[7] = puVar479[7] - auVar586[7];
          auVar552[8] = puVar479[8] - auVar586[8];
          auVar552[9] = puVar479[9] - auVar586[9];
          auVar552[10] = puVar479[10] - auVar586[10];
          auVar552[0xb] = puVar479[0xb] - auVar586[0xb];
          auVar552[0xc] = puVar479[0xc] - auVar586[0xc];
          auVar552[0xd] = puVar479[0xd] - auVar586[0xd];
          auVar552[0xe] = puVar479[0xe] - auVar586[0xe];
          auVar552[0xf] = puVar479[0xf] - auVar586[0xf];
          in_ZMM1._0_16_ = auVar552;
          *(undefined1 (*) [16])(puVar464 + auVar579._0_8_) = auVar552;
          auVar579._0_8_ = auVar579._0_8_ + 0x10;
        } while (auVar511._0_8_ != auVar579._0_8_);
        puVar479 = puVar469 + auVar511._0_8_;
        pbVar472 = pbVar488;
        puVar464 = puVar475;
        if (auVar503._0_8_ == auVar511._0_8_) goto LAB_140dce93e;
      }
      iVar481 = uVar486 - (int)auVar511._0_8_;
      do {
        *puVar464 = *puVar479 - (*pbVar472 >> 1);
        puVar464 = puVar464 + 1;
        pbVar472 = pbVar472 + 1;
        puVar479 = puVar479 + 1;
        iVar481 = iVar481 + -1;
      } while (iVar481 != 0);
    }
LAB_140dce93e:
    auVar883 = ___xmm_7f7f7f7f7f7f7f7f7f7f7f7f7f7f7f7f;
    auVar511._0_8_ = uVar13 - uVar474;
    if (uVar474 <= uVar13 && auVar511._0_8_ != 0) {
      uVar476 = uVar486;
      if ((7 < auVar511._0_8_) &&
         (~uVar474 + uVar13 >> 0x20 == 0 && (uint)(~uVar474 + uVar13) <= -uVar486 - 2)) {
        if (auVar511._0_8_ < 0x10) {
          auVar503._0_8_ = 0;
        }
        else {
          auVar503._0_8_ = auVar511._0_8_ & 0xfffffffffffffff0;
          auVar579._0_8_ = 0;
          in_ZMM0._0_16_ = ___xmm_7f7f7f7f7f7f7f7f7f7f7f7f7f7f7f7f;
          do {
            puVar475 = puVar479 + auVar579._0_8_;
            auVar1628 = *(undefined1 (*) [16])(puVar469 + auVar579._0_8_) &
                        *(undefined1 (*) [16])(pbVar472 + auVar579._0_8_);
            auVar645 = *(undefined1 (*) [16])(puVar469 + auVar579._0_8_) ^
                       *(undefined1 (*) [16])(pbVar472 + auVar579._0_8_);
            auVar605._0_2_ = auVar645._0_2_ >> 1;
            auVar605._2_2_ = auVar645._2_2_ >> 1;
            auVar605._4_2_ = auVar645._4_2_ >> 1;
            auVar605._6_2_ = auVar645._6_2_ >> 1;
            auVar605._8_2_ = auVar645._8_2_ >> 1;
            auVar605._10_2_ = auVar645._10_2_ >> 1;
            auVar605._12_2_ = auVar645._12_2_ >> 1;
            auVar605._14_2_ = auVar645._14_2_ >> 1;
            auVar605 = auVar605 & auVar883;
            auVar555[0] = *puVar475 - (auVar605[0] + auVar1628[0]);
            auVar555[1] = puVar475[1] - (auVar605[1] + auVar1628[1]);
            auVar555[2] = puVar475[2] - (auVar605[2] + auVar1628[2]);
            auVar555[3] = puVar475[3] - (auVar605[3] + auVar1628[3]);
            auVar555[4] = puVar475[4] - (auVar605[4] + auVar1628[4]);
            auVar555[5] = puVar475[5] - (auVar605[5] + auVar1628[5]);
            auVar555[6] = puVar475[6] - (auVar605[6] + auVar1628[6]);
            auVar555[7] = puVar475[7] - (auVar605[7] + auVar1628[7]);
            auVar555[8] = puVar475[8] - (auVar605[8] + auVar1628[8]);
            auVar555[9] = puVar475[9] - (auVar605[9] + auVar1628[9]);
            auVar555[10] = puVar475[10] - (auVar605[10] + auVar1628[10]);
            auVar555[0xb] = puVar475[0xb] - (auVar605[0xb] + auVar1628[0xb]);
            auVar555[0xc] = puVar475[0xc] - (auVar605[0xc] + auVar1628[0xc]);
            auVar555[0xd] = puVar475[0xd] - (auVar605[0xd] + auVar1628[0xd]);
            auVar555[0xe] = puVar475[0xe] - (auVar605[0xe] + auVar1628[0xe]);
            auVar555[0xf] = puVar475[0xf] - (auVar605[0xf] + auVar1628[0xf]);
            in_ZMM1._0_16_ = auVar555;
            *(undefined1 (*) [16])(puVar464 + auVar579._0_8_) = auVar555;
            auVar579._0_8_ = auVar579._0_8_ + 0x10;
          } while (auVar503._0_8_ != auVar579._0_8_);
          if (auVar511._0_8_ == auVar503._0_8_) goto LAB_140dceec8;
          if ((auVar511._0_8_ & 8) == 0) {
            puVar479 = puVar479 + auVar503._0_8_;
            puVar464 = puVar464 + auVar503._0_8_;
            pbVar472 = pbVar472 + auVar503._0_8_;
            puVar484 = puVar484 + auVar503._0_8_;
            uVar476 = (int)auVar503._0_8_ + uVar486;
            goto LAB_140dcee95;
          }
        }
        auVar883 = ___xmm_7f7f7f7f7f7f7f7f7f7f7f7f7f7f7f7f;
        auVar579._0_8_ = auVar511._0_8_ & 0xfffffffffffffff8;
        puVar484 = puVar484 + auVar579._0_8_;
        in_ZMM0._0_16_ = ___xmm_7f7f7f7f7f7f7f7f7f7f7f7f7f7f7f7f;
        do {
          uVar657 = *(undefined8 *)(puVar479 + auVar503._0_8_);
          uVar40 = *(ulonglong *)(puVar469 + auVar503._0_8_) &
                   *(ulonglong *)(pbVar472 + auVar503._0_8_);
          uVar485 = *(ulonglong *)(puVar469 + auVar503._0_8_) ^
                    *(ulonglong *)(pbVar472 + auVar503._0_8_);
          auVar603._0_2_ = (ushort)uVar485 >> 1;
          auVar603._2_2_ = (ushort)(uVar485 >> 0x10) >> 1;
          auVar603._4_2_ = (ushort)(uVar485 >> 0x20) >> 1;
          auVar603._6_2_ = (ushort)(uVar485 >> 0x31);
          auVar603._8_8_ = 0;
          auVar603 = auVar603 & auVar883;
          in_ZMM1._0_8_ =
               CONCAT17((char)((ulonglong)uVar657 >> 0x38) - (auVar603[7] + (char)(uVar40 >> 0x38)),
                        CONCAT16((char)((ulonglong)uVar657 >> 0x30) -
                                 (auVar603[6] + (char)(uVar40 >> 0x30)),
                                 CONCAT15((char)((ulonglong)uVar657 >> 0x28) -
                                          (auVar603[5] + (char)(uVar40 >> 0x28)),
                                          CONCAT14((char)((ulonglong)uVar657 >> 0x20) -
                                                   (auVar603[4] + (char)(uVar40 >> 0x20)),
                                                   CONCAT13((char)((ulonglong)uVar657 >> 0x18) -
                                                            (auVar603[3] + (char)(uVar40 >> 0x18)),
                                                            CONCAT12((char)((ulonglong)uVar657 >>
                                                                           0x10) -
                                                                     (auVar603[2] +
                                                                     (char)(uVar40 >> 0x10)),
                                                                     CONCAT11((char)((ulonglong)
                                                                                     uVar657 >> 8) -
                                                                              (auVar603[1] +
                                                                              (char)(uVar40 >> 8)),
                                                                              (char)uVar657 -
                                                                              (auVar603[0] +
                                                                              (char)uVar40))))))));
          in_ZMM1[8] = -auVar603[8];
          in_ZMM1[9] = -auVar603[9];
          in_ZMM1[10] = -auVar603[10];
          in_ZMM1[0xb] = -auVar603[0xb];
          in_ZMM1[0xc] = -auVar603[0xc];
          in_ZMM1[0xd] = -auVar603[0xd];
          in_ZMM1[0xe] = -auVar603[0xe];
          in_ZMM1[0xf] = -auVar603[0xf];
          *(ulonglong *)(puVar464 + auVar503._0_8_) = in_ZMM1._0_8_;
          auVar503._0_8_ = auVar503._0_8_ + 8;
        } while (auVar579._0_8_ != auVar503._0_8_);
        pbVar472 = pbVar472 + auVar579._0_8_;
        puVar464 = puVar464 + auVar579._0_8_;
        puVar479 = puVar479 + auVar579._0_8_;
        uVar476 = uVar486 + (int)auVar579._0_8_;
        if (auVar511._0_8_ == auVar579._0_8_) goto LAB_140dceec8;
      }
LAB_140dcee95:
      lVar482 = 0;
      do {
        puVar464[lVar482] =
             puVar479[lVar482] - (char)((uint)puVar484[lVar482 + 1] + (uint)pbVar472[lVar482] >> 1);
        iVar481 = (int)lVar482;
        lVar482 = lVar482 + 1;
      } while (uVar476 + 1 + iVar481 < uVar13);
    }
LAB_140dceec8:
    puVar469 = param_1->try_row;
  }
  auVar574._16_48_ = in_ZMM1._16_48_;
  if (bVar466 == 0x80) {
    puVar475 = param_1->try_row;
    *puVar475 = '\x04';
    puVar480 = param_1->prev_row;
    puVar487 = param_1->row_buf;
    pauVar467 = (undefined1 (*) [16])(puVar475 + 1);
    puVar469 = puVar480 + 1;
    puVar464 = puVar487 + 1;
    puVar479 = puVar469;
    puVar484 = puVar464;
    if (bVar610 != 0) {
      if (bVar610 < 0x79) {
        auVar502._0_8_ = 0;
      }
      else {
        auVar502._0_8_ = (ulonglong)(uVar486 & 0xfffffff0);
        auVar497[0] = *puVar464 - *puVar469;
        auVar497[1] = puVar487[2] - puVar480[2];
        auVar497[2] = puVar487[3] - puVar480[3];
        auVar497[3] = puVar487[4] - puVar480[4];
        auVar497[4] = puVar487[5] - puVar480[5];
        auVar497[5] = puVar487[6] - puVar480[6];
        auVar497[6] = puVar487[7] - puVar480[7];
        auVar497[7] = puVar487[8] - puVar480[8];
        auVar497[8] = puVar487[9] - puVar480[9];
        auVar497[9] = puVar487[10] - puVar480[10];
        auVar497[10] = puVar487[0xb] - puVar480[0xb];
        auVar497[0xb] = puVar487[0xc] - puVar480[0xc];
        auVar497[0xc] = puVar487[0xd] - puVar480[0xd];
        auVar497[0xd] = puVar487[0xe] - puVar480[0xe];
        auVar497[0xe] = puVar487[0xf] - puVar480[0xf];
        auVar497[0xf] = puVar487[0x10] - puVar480[0x10];
        *pauVar467 = auVar497;
        if (auVar502._0_8_ != 0x10) {
          auVar497[0] = puVar487[0x11] - puVar480[0x11];
          auVar497[1] = puVar487[0x12] - puVar480[0x12];
          auVar497[2] = puVar487[0x13] - puVar480[0x13];
          auVar497[3] = puVar487[0x14] - puVar480[0x14];
          auVar497[4] = puVar487[0x15] - puVar480[0x15];
          auVar497[5] = puVar487[0x16] - puVar480[0x16];
          auVar497[6] = puVar487[0x17] - puVar480[0x17];
          auVar497[7] = puVar487[0x18] - puVar480[0x18];
          auVar497[8] = puVar487[0x19] - puVar480[0x19];
          auVar497[9] = puVar487[0x1a] - puVar480[0x1a];
          auVar497[10] = puVar487[0x1b] - puVar480[0x1b];
          auVar497[0xb] = puVar487[0x1c] - puVar480[0x1c];
          auVar497[0xc] = puVar487[0x1d] - puVar480[0x1d];
          auVar497[0xd] = puVar487[0x1e] - puVar480[0x1e];
          auVar497[0xe] = puVar487[0x1f] - puVar480[0x1f];
          auVar497[0xf] = puVar487[0x20] - puVar480[0x20];
          *(undefined1 (*) [16])(puVar475 + 0x11) = auVar497;
        }
        in_ZMM0._0_16_ = auVar497;
        puVar484 = puVar464 + auVar502._0_8_;
        puVar479 = puVar469 + auVar502._0_8_;
        pauVar467 = (undefined1 (*) [16])(*pauVar467 + auVar502._0_8_);
        if ((uVar486 & 0xfffffff0) == uVar486) goto LAB_140dcf008;
      }
      lVar482 = uVar474 - auVar502._0_8_;
      do {
        (*pauVar467)[0] = *puVar484 - *puVar479;
        pauVar467 = (undefined1 (*) [16])(*pauVar467 + 1);
        puVar479 = puVar479 + 1;
        puVar484 = puVar484 + 1;
        lVar482 = lVar482 + -1;
      } while (lVar482 != 0);
    }
LAB_140dcf008:
    auVar883 = ___xmm_80000000800000008000000080000000;
    auVar502._0_8_ = uVar13 - uVar474;
    if (uVar474 <= uVar13 && auVar502._0_8_ != 0) {
      if (7 < auVar502._0_8_) {
        if (auVar502._0_8_ < 0x10) {
          auVar511._0_8_ = 0;
        }
        else {
          auVar511._0_8_ = auVar502._0_8_ & 0xfffffffffffffff0;
          auVar503._0_8_ = 0;
          in_ZMM0 = ZEXT4864(in_ZMM0._16_48_) << 0x80;
          do {
            auVar645 = *(undefined1 (*) [16])(puVar479 + auVar503._0_8_);
            auVar1578._16_48_ = in_ZMM9._16_48_;
            auVar1578._0_15_ = auVar645._0_15_;
            auVar1578[0xf] = 0;
            bVar1480 = auVar645[7];
            auVar1577._15_49_ = auVar1578._15_49_;
            auVar1577._0_14_ = auVar645._0_14_;
            auVar1577[0xe] = bVar1480;
            auVar1576._14_50_ = auVar1577._14_50_;
            auVar1576._0_13_ = auVar645._0_13_;
            auVar1576[0xd] = 0;
            bVar1607 = auVar645[6];
            auVar1575._13_51_ = auVar1576._13_51_;
            auVar1575._0_12_ = auVar645._0_12_;
            auVar1575[0xc] = bVar1607;
            auVar1574._12_52_ = auVar1575._12_52_;
            auVar1574._0_11_ = auVar645._0_11_;
            auVar1574[0xb] = 0;
            bVar1606 = auVar645[5];
            auVar1573._11_53_ = auVar1574._11_53_;
            auVar1573._0_10_ = auVar645._0_10_;
            auVar1573[10] = bVar1606;
            auVar1572._10_54_ = auVar1573._10_54_;
            auVar1572._0_9_ = auVar645._0_9_;
            auVar1572[9] = 0;
            bVar1604 = auVar645[4];
            auVar1571._9_55_ = auVar1572._9_55_;
            auVar1571._0_8_ = auVar645._0_8_;
            auVar1571[8] = bVar1604;
            auVar336[0x38] = 0;
            auVar336._0_56_ = auVar1571._8_56_;
            bVar1603 = auVar645[3];
            auVar130._1_57_ = auVar336 << 8;
            auVar130[0] = bVar1603;
            auVar335[0x3a] = 0;
            auVar335._0_58_ = auVar130;
            bVar1602 = auVar645[2];
            auVar129._1_59_ = auVar335 << 8;
            auVar129[0] = bVar1602;
            auVar334[0x3c] = 0;
            auVar334._0_60_ = auVar129;
            bVar1601 = auVar645[1];
            auVar128._1_61_ = auVar334 << 8;
            auVar128[0] = bVar1601;
            bVar1540 = auVar645[0];
            auVar1570._0_2_ = CONCAT11(0,bVar1540);
            auVar1570._2_62_ = auVar128;
            auVar1371._16_48_ = in_ZMM7._16_48_;
            auVar1371._0_14_ = auVar1570._0_14_;
            auVar1371._14_2_ = 0;
            auVar1370._14_50_ = auVar1371._14_50_;
            auVar1370._0_12_ = auVar1570._0_12_;
            auVar1370._12_2_ = auVar130._0_2_;
            auVar1369._12_52_ = auVar1370._12_52_;
            auVar1369._0_10_ = auVar1570._0_10_;
            auVar1369._10_2_ = 0;
            auVar337._2_54_ = auVar1369._10_54_;
            auVar337._0_2_ = auVar129._0_2_;
            auVar338._56_2_ = 0;
            auVar338._0_56_ = auVar337;
            auVar131._2_58_ = auVar338 << 0x10;
            auVar131._0_2_ = auVar128._0_2_;
            uVar527 = in_ZMM0._8_2_;
            iVar1536 = CONCAT22(uVar527,auVar1571._8_2_);
            uVar533 = in_ZMM0._10_2_;
            auVar1543._0_8_ = CONCAT26(uVar533,CONCAT24(auVar1573._10_2_,iVar1536));
            auVar1543._8_2_ = auVar1575._12_2_;
            uVar536 = in_ZMM0._12_2_;
            auVar1543._10_2_ = uVar536;
            auVar1561._12_2_ = auVar1577._14_2_;
            auVar1561._0_12_ = auVar1543;
            uVar539 = in_ZMM0._14_2_;
            auVar1561._14_2_ = uVar539;
            bVar1745 = auVar645[8];
            uVar526 = in_ZMM0[8];
            bVar1746 = auVar645[9];
            uVar531 = in_ZMM0[9];
            uVar655 = CONCAT13(uVar531,CONCAT12(bVar1746,CONCAT11(uVar526,bVar1745)));
            bVar1747 = auVar645[10];
            uVar532 = in_ZMM0[10];
            uVar656 = CONCAT15(uVar532,CONCAT14(bVar1747,uVar655));
            bVar1748 = auVar645[0xb];
            uVar534 = in_ZMM0[0xb];
            uVar657 = CONCAT17(uVar534,CONCAT16(bVar1748,uVar656));
            bVar1749 = auVar645[0xc];
            uVar535 = in_ZMM0[0xc];
            auVar1735._0_10_ = CONCAT19(uVar535,CONCAT18(bVar1749,uVar657));
            bVar1750 = auVar645[0xd];
            auVar1735[10] = bVar1750;
            uVar537 = in_ZMM0[0xd];
            auVar1735[0xb] = uVar537;
            bVar1751 = auVar645[0xe];
            auVar1738[0xc] = bVar1751;
            auVar1738._0_12_ = auVar1735;
            uVar538 = in_ZMM0[0xe];
            auVar1738[0xd] = uVar538;
            bVar1752 = auVar645[0xf];
            auVar1740[0xe] = bVar1752;
            auVar1740._0_14_ = auVar1738;
            uVar540 = in_ZMM0[0xf];
            auVar1740[0xf] = uVar540;
            auVar1649._16_48_ = in_ZMM10._16_48_;
            auVar1649._14_2_ = 0;
            auVar1649._0_14_ = auVar1738;
            auVar1648._14_50_ = auVar1649._14_50_;
            auVar1648._12_2_ = (short)((ulonglong)uVar657 >> 0x30);
            auVar1648._0_12_ = auVar1735;
            auVar1647._12_52_ = auVar1648._12_52_;
            auVar1647._10_2_ = 0;
            auVar1647._0_10_ = auVar1735._0_10_;
            auVar1646._10_54_ = auVar1647._10_54_;
            auVar1646._8_2_ = (short)((uint6)uVar656 >> 0x20);
            auVar1646._0_8_ = uVar657;
            auVar339._56_8_ = 0;
            auVar339._0_56_ = auVar1646._8_56_;
            auVar1645._6_58_ = SUB6458(auVar339 << 0x40,6);
            auVar1645._4_2_ = (short)((uint)uVar655 >> 0x10);
            auVar1645._0_4_ = uVar655;
            iVar525 = CONCAT22(uVar527,(short)(auVar1735._0_10_ >> 0x40));
            auVar1736._0_8_ = CONCAT26(uVar533,CONCAT24(auVar1735._10_2_,iVar525));
            auVar1736._8_2_ = auVar1738._12_2_;
            auVar1736._10_2_ = uVar536;
            auVar1741._12_2_ = auVar1740._14_2_;
            auVar1741._0_12_ = auVar1736;
            auVar1741._14_2_ = uVar539;
            auVar1628 = *(undefined1 (*) [16])(puVar469 + auVar503._0_8_);
            auVar1769._16_48_ = in_ZMM14._16_48_;
            auVar1769._0_15_ = auVar1628._0_15_;
            auVar1769[0xf] = 0;
            bVar1776 = auVar1628[7];
            auVar1768._15_49_ = auVar1769._15_49_;
            auVar1768._0_14_ = auVar1628._0_14_;
            auVar1768[0xe] = bVar1776;
            auVar1767._14_50_ = auVar1768._14_50_;
            auVar1767._0_13_ = auVar1628._0_13_;
            auVar1767[0xd] = 0;
            bVar1775 = auVar1628[6];
            auVar1766._13_51_ = auVar1767._13_51_;
            auVar1766._0_12_ = auVar1628._0_12_;
            auVar1766[0xc] = bVar1775;
            auVar1765._12_52_ = auVar1766._12_52_;
            auVar1765._0_11_ = auVar1628._0_11_;
            auVar1765[0xb] = 0;
            bVar1774 = auVar1628[5];
            auVar1764._11_53_ = auVar1765._11_53_;
            auVar1764._0_10_ = auVar1628._0_10_;
            auVar1764[10] = bVar1774;
            auVar1763._10_54_ = auVar1764._10_54_;
            auVar1763._0_9_ = auVar1628._0_9_;
            auVar1763[9] = 0;
            bVar1773 = auVar1628[4];
            auVar1762._9_55_ = auVar1763._9_55_;
            auVar1762._0_8_ = auVar1628._0_8_;
            auVar1762[8] = bVar1773;
            auVar342[0x38] = 0;
            auVar342._0_56_ = auVar1762._8_56_;
            bVar1772 = auVar1628[3];
            auVar134._1_57_ = auVar342 << 8;
            auVar134[0] = bVar1772;
            auVar341[0x3a] = 0;
            auVar341._0_58_ = auVar134;
            bVar1771 = auVar1628[2];
            auVar133._1_59_ = auVar341 << 8;
            auVar133[0] = bVar1771;
            auVar340[0x3c] = 0;
            auVar340._0_60_ = auVar133;
            bVar1770 = auVar1628[1];
            auVar132._1_61_ = auVar340 << 8;
            auVar132[0] = bVar1770;
            bVar1753 = auVar1628[0];
            auVar1761._0_2_ = CONCAT11(0,bVar1753);
            auVar1761._2_62_ = auVar132;
            auVar1729._16_48_ = in_ZMM12._16_48_;
            auVar1729._0_14_ = auVar1761._0_14_;
            auVar1729._14_2_ = 0;
            auVar1728._14_50_ = auVar1729._14_50_;
            auVar1728._0_12_ = auVar1761._0_12_;
            auVar1728._12_2_ = auVar134._0_2_;
            auVar1727._12_52_ = auVar1728._12_52_;
            auVar1727._0_10_ = auVar1761._0_10_;
            auVar1727._10_2_ = 0;
            auVar343._2_54_ = auVar1727._10_54_;
            auVar343._0_2_ = auVar133._0_2_;
            auVar344._56_2_ = 0;
            auVar344._0_56_ = auVar343;
            auVar135._2_58_ = auVar344 << 0x10;
            auVar135._0_2_ = auVar132._0_2_;
            iVar1754 = CONCAT22(uVar527,auVar1762._8_2_);
            auVar1755._0_8_ = CONCAT26(uVar533,CONCAT24(auVar1764._10_2_,iVar1754));
            auVar1755._8_2_ = auVar1766._12_2_;
            auVar1755._10_2_ = uVar536;
            auVar1757._12_2_ = auVar1768._14_2_;
            auVar1757._0_12_ = auVar1755;
            auVar1757._14_2_ = uVar539;
            auVar1707._16_48_ = in_ZMM11._16_48_;
            bVar1710 = auVar1628[8];
            bVar1713 = auVar1628[9];
            uVar655 = CONCAT13(uVar531,CONCAT12(bVar1713,CONCAT11(uVar526,bVar1710)));
            bVar1714 = auVar1628[10];
            uVar656 = CONCAT15(uVar532,CONCAT14(bVar1714,uVar655));
            bVar1715 = auVar1628[0xb];
            uVar657 = CONCAT17(uVar534,CONCAT16(bVar1715,uVar656));
            bVar1716 = auVar1628[0xc];
            auVar1678._0_10_ = CONCAT19(uVar535,CONCAT18(bVar1716,uVar657));
            bVar1719 = auVar1628[0xd];
            auVar1678[10] = bVar1719;
            auVar1678[0xb] = uVar537;
            bVar1720 = auVar1628[0xe];
            auVar1681[0xc] = bVar1720;
            auVar1681._0_12_ = auVar1678;
            auVar1681[0xd] = uVar538;
            bVar1721 = auVar1628[0xf];
            auVar1683[0xe] = bVar1721;
            auVar1683._0_14_ = auVar1681;
            auVar1683[0xf] = uVar540;
            auVar1782._16_48_ = in_ZMM15._16_48_;
            auVar1782._14_2_ = 0;
            auVar1782._0_14_ = auVar1681;
            auVar1781._14_50_ = auVar1782._14_50_;
            auVar1781._12_2_ = (short)((ulonglong)uVar657 >> 0x30);
            auVar1781._0_12_ = auVar1678;
            auVar1780._12_52_ = auVar1781._12_52_;
            auVar1780._10_2_ = 0;
            auVar1780._0_10_ = auVar1678._0_10_;
            auVar1779._10_54_ = auVar1780._10_54_;
            auVar1779._8_2_ = (short)((uint6)uVar656 >> 0x20);
            auVar1779._0_8_ = uVar657;
            auVar345._56_8_ = 0;
            auVar345._0_56_ = auVar1779._8_56_;
            auVar1778._6_58_ = SUB6458(auVar345 << 0x40,6);
            auVar1778._4_2_ = (short)((uint)uVar655 >> 0x10);
            auVar1778._0_4_ = uVar655;
            iVar1676 = CONCAT22(uVar527,(short)(auVar1678._0_10_ >> 0x40));
            auVar1679._0_8_ = CONCAT26(uVar533,CONCAT24(auVar1678._10_2_,iVar1676));
            auVar1679._8_2_ = auVar1681._12_2_;
            auVar1679._10_2_ = uVar536;
            auVar1684._12_2_ = auVar1683._14_2_;
            auVar1684._0_12_ = auVar1679;
            auVar1684._14_2_ = uVar539;
            auVar591 = *(undefined1 (*) [16])(puVar464 + auVar503._0_8_);
            auVar1531._16_48_ = in_ZMM8._16_48_;
            auVar1531._0_15_ = auVar591._0_15_;
            auVar1531[0xf] = 0;
            bVar1539 = auVar591[7];
            auVar1530._15_49_ = auVar1531._15_49_;
            auVar1530._0_14_ = auVar591._0_14_;
            auVar1530[0xe] = bVar1539;
            auVar1529._14_50_ = auVar1530._14_50_;
            auVar1529._0_13_ = auVar591._0_13_;
            auVar1529[0xd] = 0;
            bVar1538 = auVar591[6];
            auVar1528._13_51_ = auVar1529._13_51_;
            auVar1528._0_12_ = auVar591._0_12_;
            auVar1528[0xc] = bVar1538;
            auVar1527._12_52_ = auVar1528._12_52_;
            auVar1527._0_11_ = auVar591._0_11_;
            auVar1527[0xb] = 0;
            bVar1537 = auVar591[5];
            auVar1526._11_53_ = auVar1527._11_53_;
            auVar1526._0_10_ = auVar591._0_10_;
            auVar1526[10] = bVar1537;
            auVar1525._10_54_ = auVar1526._10_54_;
            auVar1525._0_9_ = auVar591._0_9_;
            auVar1525[9] = 0;
            bVar1535 = auVar591[4];
            auVar1524._9_55_ = auVar1525._9_55_;
            auVar1524._0_8_ = auVar591._0_8_;
            auVar1524[8] = bVar1535;
            auVar348[0x38] = 0;
            auVar348._0_56_ = auVar1524._8_56_;
            bVar1534 = auVar591[3];
            auVar138._1_57_ = auVar348 << 8;
            auVar138[0] = bVar1534;
            auVar347[0x3a] = 0;
            auVar347._0_58_ = auVar138;
            bVar1533 = auVar591[2];
            auVar137._1_59_ = auVar347 << 8;
            auVar137[0] = bVar1533;
            auVar346[0x3c] = 0;
            auVar346._0_60_ = auVar137;
            bVar1532 = auVar591[1];
            auVar136._1_61_ = auVar346 << 8;
            auVar136[0] = bVar1532;
            bVar1481 = auVar591[0];
            auVar1523._0_2_ = CONCAT11(0,bVar1481);
            auVar1523._2_62_ = auVar136;
            bVar466 = auVar591[8];
            bVar610 = auVar591[9];
            uVar655 = CONCAT13(uVar531,CONCAT12(bVar610,CONCAT11(uVar526,bVar466)));
            bVar465 = auVar591[10];
            uVar656 = CONCAT15(uVar532,CONCAT14(bVar465,uVar655));
            bVar874 = auVar591[0xb];
            uVar657 = CONCAT17(uVar534,CONCAT16(bVar874,uVar656));
            bVar870 = auVar591[0xc];
            auVar661._0_10_ = CONCAT19(uVar535,CONCAT18(bVar870,uVar657));
            bVar872 = auVar591[0xd];
            auVar661[10] = bVar872;
            auVar661[0xb] = uVar537;
            bVar1610 = auVar591[0xe];
            auVar680[0xc] = bVar1610;
            auVar680._0_12_ = auVar661;
            auVar680[0xd] = uVar538;
            bVar873 = auVar591[0xf];
            auVar692[0xe] = bVar873;
            auVar692._0_14_ = auVar680;
            auVar692[0xf] = uVar540;
            auVar1089._16_48_ = in_ZMM6._16_48_;
            iVar481 = CONCAT22(uVar527,(short)(auVar661._0_10_ >> 0x40));
            auVar662._0_8_ = CONCAT26(uVar533,CONCAT24(auVar661._10_2_,iVar481));
            auVar662._8_2_ = auVar680._12_2_;
            auVar662._10_2_ = uVar536;
            auVar693._12_2_ = auVar692._14_2_;
            auVar693._0_12_ = auVar662;
            auVar693._14_2_ = uVar539;
            auVar1707._0_14_ = auVar1523._0_14_;
            auVar1707._14_2_ = 0;
            auVar1706._14_50_ = auVar1707._14_50_;
            auVar1706._0_12_ = auVar1523._0_12_;
            auVar1706._12_2_ = auVar138._0_2_;
            auVar1705._12_52_ = auVar1706._12_52_;
            auVar1705._0_10_ = auVar1523._0_10_;
            auVar1705._10_2_ = 0;
            auVar349._2_54_ = auVar1705._10_54_;
            auVar349._0_2_ = auVar137._0_2_;
            auVar350._56_2_ = 0;
            auVar350._0_56_ = auVar349;
            auVar139._2_58_ = auVar350 << 0x10;
            auVar139._0_2_ = auVar136._0_2_;
            iVar489 = CONCAT22(uVar527,auVar1524._8_2_);
            auVar1483._0_8_ = CONCAT26(uVar533,CONCAT24(auVar1526._10_2_,iVar489));
            auVar1483._8_2_ = auVar1528._12_2_;
            auVar1483._10_2_ = uVar536;
            auVar1503._12_2_ = auVar1530._14_2_;
            auVar1503._0_12_ = auVar1483;
            auVar1503._14_2_ = uVar539;
            auVar1089._14_2_ = 0;
            auVar1089._0_14_ = auVar680;
            auVar1088._14_50_ = auVar1089._14_50_;
            auVar1088._12_2_ = (short)((ulonglong)uVar657 >> 0x30);
            auVar1088._0_12_ = auVar661;
            auVar1087._12_52_ = auVar1088._12_52_;
            auVar1087._10_2_ = 0;
            auVar1087._0_10_ = auVar661._0_10_;
            auVar1086._10_54_ = auVar1087._10_54_;
            auVar1086._8_2_ = (short)((uint6)uVar656 >> 0x20);
            auVar1086._0_8_ = uVar657;
            auVar351._56_8_ = 0;
            auVar351._0_56_ = auVar1086._8_56_;
            auVar1085._6_58_ = SUB6458(auVar351 << 0x40,6);
            auVar1085._4_2_ = (short)((uint)uVar655 >> 0x10);
            auVar1085._0_4_ = uVar655;
            uVar486 = iVar481 + iVar1676 * -2 + iVar525;
            uVar476 = (int)((ulonglong)auVar662._0_8_ >> 0x20) +
                      (int)((ulonglong)auVar1679._0_8_ >> 0x20) * -2 +
                      (int)((ulonglong)auVar1736._0_8_ >> 0x20);
            uVar477 = auVar662._8_4_ + auVar1679._8_4_ * -2 + auVar1736._8_4_;
            uVar871 = auVar693._12_4_ + auVar1684._12_4_ * -2 + auVar1741._12_4_;
            uVar875 = (uint)CONCAT11(uVar526,bVar466) + (uint)CONCAT11(uVar526,bVar1710) * -2 +
                      (uint)CONCAT11(uVar526,bVar1745);
            uVar1177 = auVar1085._4_4_ + auVar1778._4_4_ * -2 + auVar1645._4_4_;
            uVar1178 = auVar1086._8_4_ + auVar1779._8_4_ * -2 + auVar1646._8_4_;
            uVar1179 = auVar1088._12_4_ + auVar1781._12_4_ * -2 + auVar1648._12_4_;
            uVar1541 = iVar489 + iVar1754 * -2 + iVar1536;
            uVar1605 = (int)((ulonglong)auVar1483._0_8_ >> 0x20) +
                       (int)((ulonglong)auVar1755._0_8_ >> 0x20) * -2 +
                       (int)((ulonglong)auVar1543._0_8_ >> 0x20);
            uVar1608 = auVar1483._8_4_ + auVar1755._8_4_ * -2 + auVar1543._8_4_;
            uVar1609 = auVar1503._12_4_ + auVar1757._12_4_ * -2 + auVar1561._12_4_;
            uVar1674 = (uint)auVar1523._0_2_ + (uint)auVar1761._0_2_ * -2 + (uint)auVar1570._0_2_;
            uVar1675 = auVar139._0_4_ + auVar135._0_4_ * -2 + auVar131._0_4_;
            uVar1708 = auVar349._0_4_ + auVar343._0_4_ * -2 + auVar337._0_4_;
            uVar1709 = auVar1706._12_4_ + auVar1728._12_4_ * -2 + auVar1370._12_4_;
            cVar1479 = ((bVar1480 < bVar1776) * bVar1776 | (bVar1480 >= bVar1776) * bVar1480) -
                       ((bVar1776 < bVar1480) * bVar1776 | (bVar1776 >= bVar1480) * bVar1480);
            bVar1480 = ((bVar1751 < bVar1720) * bVar1720 | (bVar1751 >= bVar1720) * bVar1751) -
                       ((bVar1720 < bVar1751) * bVar1720 | (bVar1720 >= bVar1751) * bVar1751);
            auVar207._9_48_ = auVar1371._16_48_;
            auVar207._0_9_ = (unkuint9)bVar1480 << 0x38;
            auVar360._1_49_ = auVar207._8_49_;
            auVar360[0] = cVar1479;
            auVar359._50_7_ = 0;
            auVar359._0_50_ = auVar360;
            auVar358._1_51_ = SUB5751(auVar359 << 0x38,6);
            auVar358[0] = ((bVar1607 < bVar1775) * bVar1775 | (bVar1607 >= bVar1775) * bVar1607) -
                          ((bVar1775 < bVar1607) * bVar1775 | (bVar1775 >= bVar1607) * bVar1607);
            auVar357._52_5_ = 0;
            auVar357._0_52_ = auVar358;
            auVar356._1_53_ = SUB5753(auVar357 << 0x28,4);
            auVar356[0] = ((bVar1606 < bVar1774) * bVar1774 | (bVar1606 >= bVar1774) * bVar1606) -
                          ((bVar1774 < bVar1606) * bVar1774 | (bVar1774 >= bVar1606) * bVar1606);
            auVar355._54_3_ = 0;
            auVar355._0_54_ = auVar356;
            auVar198[1] = ((bVar1604 < bVar1773) * bVar1773 | (bVar1604 >= bVar1773) * bVar1604) -
                          ((bVar1773 < bVar1604) * bVar1773 | (bVar1773 >= bVar1604) * bVar1604);
            auVar198[0] = cVar1479;
            auVar198._2_55_ = SUB5755(auVar355 << 0x18,2);
            auVar354[0x38] = 0;
            auVar354._0_56_ = auVar198._1_56_;
            auVar142._1_57_ = auVar354 << 8;
            auVar142[0] = ((bVar1603 < bVar1772) * bVar1772 | (bVar1603 >= bVar1772) * bVar1603) -
                          ((bVar1772 < bVar1603) * bVar1772 | (bVar1772 >= bVar1603) * bVar1603);
            auVar353[0x3a] = 0;
            auVar353._0_58_ = auVar142;
            auVar141._1_59_ = auVar353 << 8;
            auVar141[0] = ((bVar1602 < bVar1771) * bVar1771 | (bVar1602 >= bVar1771) * bVar1602) -
                          ((bVar1771 < bVar1602) * bVar1771 | (bVar1771 >= bVar1602) * bVar1602);
            auVar352[0x3c] = 0;
            auVar352._0_60_ = auVar141;
            auVar140._1_61_ = auVar352 << 8;
            auVar140[0] = ((bVar1601 < bVar1770) * bVar1770 | (bVar1601 >= bVar1770) * bVar1601) -
                          ((bVar1770 < bVar1601) * bVar1770 | (bVar1770 >= bVar1601) * bVar1601);
            uVar1818 = CONCAT11(0,((bVar1540 < bVar1753) * bVar1753 |
                                  (bVar1540 >= bVar1753) * bVar1540) -
                                  ((bVar1753 < bVar1540) * bVar1753 |
                                  (bVar1753 >= bVar1540) * bVar1540));
            auVar1372._2_62_ = auVar140;
            auVar1376._0_14_ = auVar1372._0_14_;
            auVar1376._14_2_ = 0;
            auVar1376._16_48_ = auVar1371._16_48_;
            auVar1375._14_50_ = auVar1376._14_50_;
            auVar1375._0_12_ = auVar1372._0_12_;
            auVar1375._12_2_ = auVar142._0_2_;
            auVar1374._12_52_ = auVar1375._12_52_;
            auVar1374._0_10_ = auVar1372._0_10_;
            auVar1374._10_2_ = 0;
            auVar361._2_54_ = auVar1374._10_54_;
            auVar361._0_2_ = auVar141._0_2_;
            auVar362._56_2_ = 0;
            auVar362._0_56_ = auVar361;
            auVar143._2_58_ = auVar362 << 0x10;
            auVar143._0_2_ = auVar140._0_2_;
            auVar1373._0_4_ = CONCAT22(0,uVar1818);
            auVar1373._4_60_ = auVar143;
            cVar1479 = ((bVar1539 < bVar1776) * bVar1776 | (bVar1539 >= bVar1776) * bVar1539) -
                       ((bVar1776 < bVar1539) * bVar1776 | (bVar1776 >= bVar1539) * bVar1539);
            bVar1610 = ((bVar1610 < bVar1720) * bVar1720 | (bVar1610 >= bVar1720) * bVar1610) -
                       ((bVar1720 < bVar1610) * bVar1720 | (bVar1720 >= bVar1610) * bVar1610);
            auVar208._9_48_ = auVar1578._16_48_;
            auVar208._0_9_ = (unkuint9)bVar1610 << 0x38;
            auVar371._1_49_ = auVar208._8_49_;
            auVar371[0] = cVar1479;
            auVar370._50_7_ = 0;
            auVar370._0_50_ = auVar371;
            auVar369._1_51_ = SUB5751(auVar370 << 0x38,6);
            auVar369[0] = ((bVar1538 < bVar1775) * bVar1775 | (bVar1538 >= bVar1775) * bVar1538) -
                          ((bVar1775 < bVar1538) * bVar1775 | (bVar1775 >= bVar1538) * bVar1538);
            auVar368._52_5_ = 0;
            auVar368._0_52_ = auVar369;
            auVar367._1_53_ = SUB5753(auVar368 << 0x28,4);
            auVar367[0] = ((bVar1537 < bVar1774) * bVar1774 | (bVar1537 >= bVar1774) * bVar1537) -
                          ((bVar1774 < bVar1537) * bVar1774 | (bVar1774 >= bVar1537) * bVar1537);
            auVar366._54_3_ = 0;
            auVar366._0_54_ = auVar367;
            auVar199[1] = ((bVar1535 < bVar1773) * bVar1773 | (bVar1535 >= bVar1773) * bVar1535) -
                          ((bVar1773 < bVar1535) * bVar1773 | (bVar1773 >= bVar1535) * bVar1535);
            auVar199[0] = cVar1479;
            auVar199._2_55_ = SUB5755(auVar366 << 0x18,2);
            auVar365[0x38] = 0;
            auVar365._0_56_ = auVar199._1_56_;
            auVar146._1_57_ = auVar365 << 8;
            auVar146[0] = ((bVar1534 < bVar1772) * bVar1772 | (bVar1534 >= bVar1772) * bVar1534) -
                          ((bVar1772 < bVar1534) * bVar1772 | (bVar1772 >= bVar1534) * bVar1534);
            auVar364[0x3a] = 0;
            auVar364._0_58_ = auVar146;
            auVar145._1_59_ = auVar364 << 8;
            auVar145[0] = ((bVar1533 < bVar1771) * bVar1771 | (bVar1533 >= bVar1771) * bVar1533) -
                          ((bVar1771 < bVar1533) * bVar1771 | (bVar1771 >= bVar1533) * bVar1533);
            auVar363[0x3c] = 0;
            auVar363._0_60_ = auVar145;
            auVar144._1_61_ = auVar363 << 8;
            auVar144[0] = ((bVar1532 < bVar1770) * bVar1770 | (bVar1532 >= bVar1770) * bVar1532) -
                          ((bVar1770 < bVar1532) * bVar1770 | (bVar1770 >= bVar1532) * bVar1532);
            auVar1579._0_2_ =
                 CONCAT11(0,((bVar1481 < bVar1753) * bVar1753 | (bVar1481 >= bVar1753) * bVar1481) -
                            ((bVar1753 < bVar1481) * bVar1753 | (bVar1753 >= bVar1481) * bVar1481));
            auVar1579._2_62_ = auVar144;
            auVar1582._0_14_ = auVar1579._0_14_;
            auVar1582._14_2_ = 0;
            auVar1582._16_48_ = auVar1578._16_48_;
            auVar1581._14_50_ = auVar1582._14_50_;
            auVar1581._0_12_ = auVar1579._0_12_;
            auVar1581._12_2_ = auVar146._0_2_;
            auVar1580._12_52_ = auVar1581._12_52_;
            auVar1580._0_10_ = auVar1579._0_10_;
            auVar1580._10_2_ = 0;
            auVar372._2_54_ = auVar1580._10_54_;
            auVar372._0_2_ = auVar145._0_2_;
            auVar373._56_2_ = 0;
            auVar373._0_56_ = auVar372;
            auVar147._2_58_ = auVar373 << 0x10;
            auVar147._0_2_ = auVar144._0_2_;
            uVar1711 = (int)uVar486 >> 0x1f;
            uVar1712 = (int)uVar476 >> 0x1f;
            uVar1717 = (int)uVar477 >> 0x1f;
            uVar1718 = (int)uVar871 >> 0x1f;
            auVar694._0_4_ = (uVar486 ^ uVar1711) - uVar1711;
            auVar694._4_4_ = (uVar476 ^ uVar1712) - uVar1712;
            auVar694._8_4_ = (uVar477 ^ uVar1717) - uVar1717;
            auVar694._12_4_ = (uVar871 ^ uVar1718) - uVar1718;
            uVar486 = (int)uVar875 >> 0x1f;
            uVar476 = (int)uVar1177 >> 0x1f;
            uVar477 = (int)uVar1178 >> 0x1f;
            uVar871 = (int)uVar1179 >> 0x1f;
            auVar880._0_4_ = (uVar875 ^ uVar486) - uVar486;
            auVar880._4_4_ = (uVar1177 ^ uVar476) - uVar476;
            auVar880._8_4_ = (uVar1178 ^ uVar477) - uVar477;
            auVar880._12_4_ = (uVar1179 ^ uVar871) - uVar871;
            uVar486 = (int)uVar1541 >> 0x1f;
            uVar476 = (int)uVar1605 >> 0x1f;
            uVar477 = (int)uVar1608 >> 0x1f;
            uVar871 = (int)uVar1609 >> 0x1f;
            auVar1504._0_4_ = (uVar1541 ^ uVar486) - uVar486;
            auVar1504._4_4_ = (uVar1605 ^ uVar476) - uVar476;
            auVar1504._8_4_ = (uVar1608 ^ uVar477) - uVar477;
            auVar1504._12_4_ = (uVar1609 ^ uVar871) - uVar871;
            uVar486 = (int)uVar1674 >> 0x1f;
            uVar476 = (int)uVar1675 >> 0x1f;
            uVar477 = (int)uVar1708 >> 0x1f;
            uVar871 = (int)uVar1709 >> 0x1f;
            auVar1685._0_4_ = (uVar1674 ^ uVar486) - uVar486;
            auVar1685._4_4_ = (uVar1675 ^ uVar476) - uVar476;
            auVar1685._8_4_ = (uVar1708 ^ uVar477) - uVar477;
            auVar1685._12_4_ = (uVar1709 ^ uVar871) - uVar871;
            auVar1777._0_4_ = -(uint)(auVar1579._0_2_ < auVar1373._0_4_);
            auVar1777._4_4_ = -(uint)(auVar147._0_4_ < auVar143._0_4_);
            auVar1777._8_4_ = -(uint)(auVar372._0_4_ < auVar361._0_4_);
            auVar1777._12_4_ = -(uint)(auVar1581._12_4_ < auVar1375._12_4_);
            in_ZMM15._16_48_ = auVar1782._16_48_;
            in_ZMM15._0_16_ = auVar1777;
            auVar1562._0_4_ = -(uint)(auVar1685._0_4_ < (int)(uint)auVar1579._0_2_);
            auVar1562._4_4_ = -(uint)(auVar1685._4_4_ < (int)auVar147._0_4_);
            auVar1562._8_4_ = -(uint)(auVar1685._8_4_ < auVar372._0_4_);
            auVar1562._12_4_ = -(uint)(auVar1685._12_4_ < auVar1581._12_4_);
            auVar1685 = auVar1685 ^ auVar883;
            auVar1186 = auVar1373._0_16_ | auVar883;
            auVar1187._0_4_ = -(uint)(auVar1685._0_4_ < auVar1186._0_4_);
            auVar1187._4_4_ = -(uint)(auVar1685._4_4_ < auVar1186._4_4_);
            auVar1187._8_4_ = -(uint)(auVar1685._8_4_ < auVar1186._8_4_);
            auVar1187._12_4_ = -(uint)(auVar1685._12_4_ < auVar1186._12_4_);
            uVar546 = CONCAT11(uVar526,((bVar1745 < bVar1710) * bVar1710 |
                                       (bVar1745 >= bVar1710) * bVar1745) -
                                       ((bVar1710 < bVar1745) * bVar1710 |
                                       (bVar1710 >= bVar1745) * bVar1745));
            auVar1651._0_4_ =
                 CONCAT13(uVar531,CONCAT12(((bVar1746 < bVar1713) * bVar1713 |
                                           (bVar1746 >= bVar1713) * bVar1746) -
                                           ((bVar1713 < bVar1746) * bVar1713 |
                                           (bVar1713 >= bVar1746) * bVar1746),uVar546));
            uVar656 = CONCAT15(uVar532,CONCAT14(((bVar1747 < bVar1714) * bVar1714 |
                                                (bVar1747 >= bVar1714) * bVar1747) -
                                                ((bVar1714 < bVar1747) * bVar1714 |
                                                (bVar1714 >= bVar1747) * bVar1747),auVar1651._0_4_))
            ;
            auVar1652._0_8_ =
                 CONCAT17(uVar534,CONCAT16(((bVar1748 < bVar1715) * bVar1715 |
                                           (bVar1748 >= bVar1715) * bVar1748) -
                                           ((bVar1715 < bVar1748) * bVar1715 |
                                           (bVar1715 >= bVar1748) * bVar1748),uVar656));
            auVar1614._0_10_ =
                 CONCAT19(uVar535,CONCAT18(((bVar1749 < bVar1716) * bVar1716 |
                                           (bVar1749 >= bVar1716) * bVar1749) -
                                           ((bVar1716 < bVar1749) * bVar1716 |
                                           (bVar1716 >= bVar1749) * bVar1749),auVar1652._0_8_));
            auVar1614[10] =
                 ((bVar1750 < bVar1719) * bVar1719 | (bVar1750 >= bVar1719) * bVar1750) -
                 ((bVar1719 < bVar1750) * bVar1719 | (bVar1719 >= bVar1750) * bVar1750);
            auVar1614[0xb] = uVar537;
            auVar1617[0xc] = bVar1480;
            auVar1617._0_12_ = auVar1614;
            auVar1617[0xd] = uVar538;
            auVar1633[0xe] =
                 ((bVar1752 < bVar1721) * bVar1721 | (bVar1752 >= bVar1721) * bVar1752) -
                 ((bVar1721 < bVar1752) * bVar1721 | (bVar1721 >= bVar1752) * bVar1752);
            auVar1633._0_14_ = auVar1617;
            auVar1633[0xf] = uVar540;
            iVar489 = CONCAT22(uVar527,auVar198._1_2_);
            auVar1756._0_8_ = CONCAT26(uVar533,CONCAT24(auVar356._0_2_,iVar489));
            auVar1756._8_2_ = auVar358._0_2_;
            auVar1756._10_2_ = uVar536;
            auVar1758._12_2_ = auVar360._0_2_;
            auVar1758._0_12_ = auVar1756;
            auVar1758._14_2_ = uVar539;
            iVar481 = CONCAT22(uVar527,auVar199._1_2_);
            auVar1737._0_8_ = CONCAT26(uVar533,CONCAT24(auVar367._0_2_,iVar481));
            auVar1737._8_2_ = auVar369._0_2_;
            auVar1737._10_2_ = uVar536;
            auVar1742._12_2_ = auVar371._0_2_;
            auVar1742._0_12_ = auVar1737;
            auVar1742._14_2_ = uVar539;
            auVar1686._0_4_ = -(uint)(iVar481 < iVar489);
            iVar489 = (int)((ulonglong)auVar1737._0_8_ >> 0x20);
            auVar1686._4_4_ = -(uint)(iVar489 < (int)((ulonglong)auVar1756._0_8_ >> 0x20));
            auVar1686._8_4_ = -(uint)(auVar1737._8_4_ < auVar1756._8_4_);
            auVar1686._12_4_ = -(uint)(auVar1742._12_4_ < auVar1758._12_4_);
            auVar1743._0_4_ = -(uint)(auVar1504._0_4_ < iVar481);
            auVar1743._4_4_ = -(uint)(auVar1504._4_4_ < iVar489);
            auVar1743._8_4_ = -(uint)(auVar1504._8_4_ < auVar1737._8_4_);
            auVar1743._12_4_ = -(uint)(auVar1504._12_4_ < auVar1742._12_4_);
            auVar1504 = auVar1504 ^ auVar883;
            auVar1758 = auVar1758 | auVar883;
            auVar1759._0_4_ = -(uint)(auVar1504._0_4_ < auVar1758._0_4_);
            auVar1759._4_4_ = -(uint)(auVar1504._4_4_ < auVar1758._4_4_);
            auVar1759._8_4_ = -(uint)(auVar1504._8_4_ < auVar1758._8_4_);
            auVar1759._12_4_ = -(uint)(auVar1504._12_4_ < auVar1758._12_4_);
            auVar1655._14_2_ = 0;
            auVar1655._0_14_ = auVar1617;
            auVar1655._16_48_ = auVar1649._16_48_;
            auVar1654._14_50_ = auVar1655._14_50_;
            auVar1654._12_2_ = (short)((ulonglong)auVar1652._0_8_ >> 0x30);
            auVar1654._0_12_ = auVar1614;
            auVar1653._12_52_ = auVar1654._12_52_;
            auVar1653._10_2_ = 0;
            auVar1653._0_10_ = auVar1614._0_10_;
            auVar1652._10_54_ = auVar1653._10_54_;
            auVar1652._8_2_ = (short)((uint6)uVar656 >> 0x20);
            auVar374._56_8_ = 0;
            auVar374._0_56_ = auVar1652._8_56_;
            auVar1651._6_58_ = SUB6458(auVar374 << 0x40,6);
            auVar1651._4_2_ = (short)((uint)auVar1651._0_4_ >> 0x10);
            auVar1650._4_60_ = auVar1651._4_60_;
            auVar1650._0_4_ = CONCAT22(0,uVar546);
            uVar546 = CONCAT11(uVar526,((bVar466 < bVar1710) * bVar1710 |
                                       (bVar466 >= bVar1710) * bVar466) -
                                       ((bVar1710 < bVar466) * bVar1710 |
                                       (bVar1710 >= bVar466) * bVar466));
            auVar1730._0_4_ =
                 CONCAT13(uVar531,CONCAT12(((bVar610 < bVar1713) * bVar1713 |
                                           (bVar610 >= bVar1713) * bVar610) -
                                           ((bVar1713 < bVar610) * bVar1713 |
                                           (bVar1713 >= bVar610) * bVar610),uVar546));
            uVar656 = CONCAT15(uVar532,CONCAT14(((bVar465 < bVar1714) * bVar1714 |
                                                (bVar465 >= bVar1714) * bVar465) -
                                                ((bVar1714 < bVar465) * bVar1714 |
                                                (bVar1714 >= bVar465) * bVar465),auVar1730._0_4_));
            auVar1731._0_8_ =
                 CONCAT17(uVar534,CONCAT16(((bVar874 < bVar1715) * bVar1715 |
                                           (bVar874 >= bVar1715) * bVar874) -
                                           ((bVar1715 < bVar874) * bVar1715 |
                                           (bVar1715 >= bVar874) * bVar874),uVar656));
            auVar1722._0_10_ =
                 CONCAT19(uVar535,CONCAT18(((bVar870 < bVar1716) * bVar1716 |
                                           (bVar870 >= bVar1716) * bVar870) -
                                           ((bVar1716 < bVar870) * bVar1716 |
                                           (bVar1716 >= bVar870) * bVar870),auVar1731._0_8_));
            auVar1722[10] =
                 ((bVar872 < bVar1719) * bVar1719 | (bVar872 >= bVar1719) * bVar872) -
                 ((bVar1719 < bVar872) * bVar1719 | (bVar1719 >= bVar872) * bVar872);
            auVar1722[0xb] = uVar537;
            auVar1723[0xc] = bVar1610;
            auVar1723._0_12_ = auVar1722;
            auVar1723[0xd] = uVar538;
            auVar1725[0xe] =
                 ((bVar873 < bVar1721) * bVar1721 | (bVar873 >= bVar1721) * bVar873) -
                 ((bVar1721 < bVar873) * bVar1721 | (bVar1721 >= bVar873) * bVar873);
            auVar1725._0_14_ = auVar1723;
            auVar1725[0xf] = uVar540;
            auVar1734._14_2_ = 0;
            auVar1734._0_14_ = auVar1723;
            auVar1734._16_48_ = auVar1729._16_48_;
            auVar1733._14_50_ = auVar1734._14_50_;
            auVar1733._12_2_ = (short)((ulonglong)auVar1731._0_8_ >> 0x30);
            auVar1733._0_12_ = auVar1722;
            auVar1732._12_52_ = auVar1733._12_52_;
            auVar1732._10_2_ = 0;
            auVar1732._0_10_ = auVar1722._0_10_;
            auVar1731._10_54_ = auVar1732._10_54_;
            auVar1731._8_2_ = (short)((uint6)uVar656 >> 0x20);
            auVar375._56_8_ = 0;
            auVar375._0_56_ = auVar1731._8_56_;
            auVar1730._6_58_ = SUB6458(auVar375 << 0x40,6);
            auVar1730._4_2_ = (short)((uint)auVar1730._0_4_ >> 0x10);
            auVar1186 = packssdw(auVar1187 | auVar1777,auVar1759 | auVar1686);
            auVar1760._0_4_ = -(uint)(uVar546 < auVar1650._0_4_);
            auVar1760._4_4_ = -(uint)(auVar1730._4_4_ < auVar1651._4_4_);
            auVar1760._8_4_ = -(uint)(auVar1731._8_4_ < auVar1652._8_4_);
            auVar1760._12_4_ = -(uint)(auVar1733._12_4_ < auVar1654._12_4_);
            in_ZMM14._16_48_ = auVar1769._16_48_;
            in_ZMM14._0_16_ = auVar1760;
            auVar1726._0_4_ = -(uint)(auVar880._0_4_ < (int)(uint)uVar546);
            auVar1726._4_4_ = -(uint)(auVar880._4_4_ < (int)auVar1730._4_4_);
            auVar1726._8_4_ = -(uint)(auVar880._8_4_ < auVar1731._8_4_);
            auVar1726._12_4_ = -(uint)(auVar880._12_4_ < auVar1733._12_4_);
            auVar880 = auVar880 ^ auVar883;
            auVar1634 = auVar1650._0_16_ | auVar883;
            auVar1635._0_4_ = -(uint)(auVar880._0_4_ < auVar1634._0_4_);
            auVar1635._4_4_ = -(uint)(auVar880._4_4_ < auVar1634._4_4_);
            auVar1635._8_4_ = -(uint)(auVar880._8_4_ < auVar1634._8_4_);
            auVar1635._12_4_ = -(uint)(auVar880._12_4_ < auVar1634._12_4_);
            iVar481 = CONCAT22(uVar527,(short)(auVar1614._0_10_ >> 0x40));
            auVar1484._0_8_ = CONCAT26(uVar533,CONCAT24(auVar1614._10_2_,iVar481));
            auVar1484._8_2_ = auVar1617._12_2_;
            auVar1484._10_2_ = uVar536;
            auVar1505._12_2_ = auVar1633._14_2_;
            auVar1505._0_12_ = auVar1484;
            auVar1505._14_2_ = uVar539;
            iVar489 = CONCAT22(uVar527,(short)(auVar1722._0_10_ >> 0x40));
            auVar1680._0_8_ = CONCAT26(uVar533,CONCAT24(auVar1722._10_2_,iVar489));
            auVar1680._8_2_ = auVar1723._12_2_;
            auVar1680._10_2_ = uVar536;
            auVar1687._12_2_ = auVar1725._14_2_;
            auVar1687._0_12_ = auVar1680;
            auVar1687._14_2_ = uVar539;
            auVar881._0_4_ = -(uint)(iVar489 < iVar481);
            iVar481 = (int)((ulonglong)auVar1680._0_8_ >> 0x20);
            auVar881._4_4_ = -(uint)(iVar481 < (int)((ulonglong)auVar1484._0_8_ >> 0x20));
            auVar881._8_4_ = -(uint)(auVar1680._8_4_ < auVar1484._8_4_);
            auVar881._12_4_ = -(uint)(auVar1687._12_4_ < auVar1505._12_4_);
            in_ZMM6._16_48_ = auVar1089._16_48_;
            in_ZMM6._0_16_ = auVar881;
            auVar1688._0_4_ = -(uint)(auVar694._0_4_ < iVar489);
            auVar1688._4_4_ = -(uint)(auVar694._4_4_ < iVar481);
            auVar1688._8_4_ = -(uint)(auVar694._8_4_ < auVar1680._8_4_);
            auVar1688._12_4_ = -(uint)(auVar694._12_4_ < auVar1687._12_4_);
            in_ZMM11._16_48_ = auVar1707._16_48_;
            in_ZMM11._0_16_ = auVar1688;
            auVar694 = auVar694 ^ auVar883;
            auVar1505 = auVar1505 | auVar883;
            auVar1506._0_4_ = -(uint)(auVar694._0_4_ < auVar1505._0_4_);
            auVar1506._4_4_ = -(uint)(auVar694._4_4_ < auVar1505._4_4_);
            auVar1506._8_4_ = -(uint)(auVar694._8_4_ < auVar1505._8_4_);
            auVar1506._12_4_ = -(uint)(auVar694._12_4_ < auVar1505._12_4_);
            in_ZMM8._0_16_ = auVar1506 | auVar881;
            in_ZMM8._16_48_ = auVar1531._16_48_;
            in_ZMM10._0_16_ = packssdw(auVar1635 | auVar1760,in_ZMM8._0_16_);
            in_ZMM10._16_48_ = auVar1649._16_48_;
            auVar1186 = packsswb(auVar1186,in_ZMM10._0_16_);
            in_ZMM12._0_16_ = packssdw(auVar1726,auVar1688);
            in_ZMM12._16_48_ = auVar1729._16_48_;
            auVar1634 = packssdw(auVar1562,auVar1743);
            auVar1634 = packsswb(auVar1634,in_ZMM12._0_16_);
            in_ZMM9._0_16_ = (~auVar1634 & auVar645 | auVar1628 & auVar1634) & auVar1186;
            in_ZMM9._16_48_ = auVar1578._16_48_;
            in_ZMM7._0_16_ = ~auVar1186 & auVar591 | in_ZMM9._0_16_;
            in_ZMM7._16_48_ = auVar1371._16_48_;
            puVar475 = puVar484 + auVar503._0_8_;
            auVar588[0] = *puVar475 - in_ZMM7[0];
            auVar588[1] = puVar475[1] - in_ZMM7[1];
            auVar588[2] = puVar475[2] - in_ZMM7[2];
            auVar588[3] = puVar475[3] - in_ZMM7[3];
            auVar588[4] = puVar475[4] - in_ZMM7[4];
            auVar588[5] = puVar475[5] - in_ZMM7[5];
            auVar588[6] = puVar475[6] - in_ZMM7[6];
            auVar588[7] = puVar475[7] - in_ZMM7[7];
            auVar588[8] = puVar475[8] - in_ZMM7[8];
            auVar588[9] = puVar475[9] - in_ZMM7[9];
            auVar588[10] = puVar475[10] - in_ZMM7[10];
            auVar588[0xb] = puVar475[0xb] - in_ZMM7[0xb];
            auVar588[0xc] = puVar475[0xc] - in_ZMM7[0xc];
            auVar588[0xd] = puVar475[0xd] - in_ZMM7[0xd];
            auVar588[0xe] = puVar475[0xe] - in_ZMM7[0xe];
            auVar588[0xf] = puVar475[0xf] - in_ZMM7[0xf];
            *(undefined1 (*) [16])(*pauVar467 + auVar503._0_8_) = auVar588;
            auVar503._0_8_ = auVar503._0_8_ + 0x10;
          } while (auVar511._0_8_ != auVar503._0_8_);
          if (auVar502._0_8_ == auVar511._0_8_) goto LAB_140dcfa74;
          if ((auVar502._0_8_ & 8) == 0) {
            uVar474 = uVar474 + auVar511._0_8_;
            puVar487 = puVar487 + auVar511._0_8_;
            puVar480 = puVar480 + auVar511._0_8_;
            puVar479 = puVar479 + auVar511._0_8_;
            pauVar467 = (undefined1 (*) [16])(*pauVar467 + auVar511._0_8_);
            puVar484 = puVar484 + auVar511._0_8_;
            goto LAB_140dcf20e;
          }
        }
        auVar883 = ___xmm_80000000800000008000000080000000;
        auVar503._0_8_ = auVar502._0_8_ & 0xfffffffffffffff8;
        puVar480 = puVar480 + auVar503._0_8_;
        puVar487 = puVar487 + auVar503._0_8_;
        uVar474 = uVar474 + auVar503._0_8_;
        auVar524 = ZEXT4864(in_ZMM0._16_48_) << 0x80;
        do {
          auVar579._0_8_ = *(ulonglong *)(puVar479 + auVar511._0_8_);
          auVar587._8_8_ = 0;
          auVar587._0_8_ = auVar579._0_8_;
          auVar1701._16_48_ = in_ZMM11._16_48_;
          auVar1701._8_8_ = 0;
          auVar1701._0_8_ = auVar579._0_8_;
          auVar1700._15_49_ = auVar1701._15_49_;
          auVar1700._8_6_ = 0;
          auVar1700._0_8_ = auVar579._0_8_;
          auVar1700[0xe] = (char)(auVar579._0_8_ >> 0x38);
          auVar1699._14_50_ = auVar1700._14_50_;
          auVar1699._8_6_ = 0;
          auVar1699._0_8_ = auVar579._0_8_;
          auVar1698._13_51_ = auVar1699._13_51_;
          auVar1698._8_4_ = 0;
          auVar1698._0_8_ = auVar579._0_8_;
          auVar1698[0xc] = (char)(auVar579._0_8_ >> 0x30);
          auVar1697._12_52_ = auVar1698._12_52_;
          auVar1697._8_4_ = 0;
          auVar1697._0_8_ = auVar579._0_8_;
          auVar1696._11_53_ = auVar1697._11_53_;
          auVar1696._8_2_ = 0;
          auVar1696._0_8_ = auVar579._0_8_;
          auVar1696[10] = (char)(auVar579._0_8_ >> 0x28);
          auVar1695._10_54_ = auVar1696._10_54_;
          auVar1695._8_2_ = 0;
          auVar1695._0_8_ = auVar579._0_8_;
          auVar1694._9_55_ = auVar1695._9_55_;
          auVar1694[8] = (char)(auVar579._0_8_ >> 0x20);
          auVar1694._0_8_ = auVar579._0_8_;
          auVar286[0x38] = 0;
          auVar286._0_56_ = auVar1694._8_56_;
          auVar93._1_57_ = auVar286 << 8;
          auVar93[0] = (char)(auVar579._0_8_ >> 0x18);
          auVar285[0x3a] = 0;
          auVar285._0_58_ = auVar93;
          auVar92._1_59_ = auVar285 << 8;
          auVar92[0] = (char)(auVar579._0_8_ >> 0x10);
          auVar284[0x3c] = 0;
          auVar284._0_60_ = auVar92;
          auVar91._1_61_ = auVar284 << 8;
          auVar91[0] = (char)(auVar579._0_8_ >> 8);
          auVar1693._0_2_ = CONCAT11(0,(byte)auVar579._0_8_);
          auVar1693._2_62_ = auVar91;
          uVar527 = auVar524._8_2_;
          iVar1536 = CONCAT22(uVar527,auVar1694._8_2_);
          uVar533 = auVar524._10_2_;
          auVar1542._0_8_ = CONCAT26(uVar533,CONCAT24(auVar1696._10_2_,iVar1536));
          auVar1542._8_2_ = auVar1698._12_2_;
          uVar536 = auVar524._12_2_;
          auVar1542._10_2_ = uVar536;
          auVar1554._12_2_ = auVar1700._14_2_;
          auVar1554._0_12_ = auVar1542;
          uVar539 = auVar524._14_2_;
          auVar1554._14_2_ = uVar539;
          auVar1704._0_14_ = auVar1693._0_14_;
          auVar1704._14_2_ = 0;
          auVar1704._16_48_ = auVar1701._16_48_;
          auVar1703._14_50_ = auVar1704._14_50_;
          auVar1703._0_12_ = auVar1693._0_12_;
          auVar1703._12_2_ = auVar93._0_2_;
          auVar1702._12_52_ = auVar1703._12_52_;
          auVar1702._0_10_ = auVar1693._0_10_;
          auVar1702._10_2_ = 0;
          auVar287._2_54_ = auVar1702._10_54_;
          auVar287._0_2_ = auVar92._0_2_;
          auVar288._56_2_ = 0;
          auVar288._0_56_ = auVar287;
          auVar94._2_58_ = auVar288 << 0x10;
          auVar94._0_2_ = auVar91._0_2_;
          auVar579._0_8_ = *(ulonglong *)(puVar469 + auVar511._0_8_);
          auVar604._8_8_ = 0;
          auVar604._0_8_ = auVar579._0_8_;
          auVar1308._16_48_ = in_ZMM7._16_48_;
          auVar1308._8_8_ = 0;
          auVar1308._0_8_ = auVar579._0_8_;
          auVar1307._15_49_ = auVar1308._15_49_;
          auVar1307._8_6_ = 0;
          auVar1307._0_8_ = auVar579._0_8_;
          auVar1307[0xe] = (char)(auVar579._0_8_ >> 0x38);
          auVar1306._14_50_ = auVar1307._14_50_;
          auVar1306._8_6_ = 0;
          auVar1306._0_8_ = auVar579._0_8_;
          auVar1305._13_51_ = auVar1306._13_51_;
          auVar1305._8_4_ = 0;
          auVar1305._0_8_ = auVar579._0_8_;
          auVar1305[0xc] = (char)(auVar579._0_8_ >> 0x30);
          auVar1304._12_52_ = auVar1305._12_52_;
          auVar1304._8_4_ = 0;
          auVar1304._0_8_ = auVar579._0_8_;
          auVar1303._11_53_ = auVar1304._11_53_;
          auVar1303._8_2_ = 0;
          auVar1303._0_8_ = auVar579._0_8_;
          auVar1303[10] = (char)(auVar579._0_8_ >> 0x28);
          auVar1302._10_54_ = auVar1303._10_54_;
          auVar1302._8_2_ = 0;
          auVar1302._0_8_ = auVar579._0_8_;
          auVar1301._9_55_ = auVar1302._9_55_;
          auVar1301[8] = (char)(auVar579._0_8_ >> 0x20);
          auVar1301._0_8_ = auVar579._0_8_;
          auVar291[0x38] = 0;
          auVar291._0_56_ = auVar1301._8_56_;
          auVar97._1_57_ = auVar291 << 8;
          auVar97[0] = (char)(auVar579._0_8_ >> 0x18);
          auVar290[0x3a] = 0;
          auVar290._0_58_ = auVar97;
          auVar96._1_59_ = auVar290 << 8;
          auVar96[0] = (char)(auVar579._0_8_ >> 0x10);
          auVar289[0x3c] = 0;
          auVar289._0_60_ = auVar96;
          auVar95._1_61_ = auVar289 << 8;
          auVar95[0] = (char)(auVar579._0_8_ >> 8);
          auVar1300._0_2_ = CONCAT11(0,(byte)auVar579._0_8_);
          auVar1300._2_62_ = auVar95;
          iVar489 = CONCAT22(uVar527,auVar1301._8_2_);
          auVar1482._0_8_ = CONCAT26(uVar533,CONCAT24(auVar1303._10_2_,iVar489));
          auVar1482._8_2_ = auVar1305._12_2_;
          auVar1482._10_2_ = uVar536;
          auVar1495._12_2_ = auVar1307._14_2_;
          auVar1495._0_12_ = auVar1482;
          auVar1495._14_2_ = uVar539;
          auVar1311._0_14_ = auVar1300._0_14_;
          auVar1311._14_2_ = 0;
          auVar1311._16_48_ = auVar1308._16_48_;
          auVar1310._14_50_ = auVar1311._14_50_;
          auVar1310._0_12_ = auVar1300._0_12_;
          auVar1310._12_2_ = auVar97._0_2_;
          auVar1309._12_52_ = auVar1310._12_52_;
          auVar1309._0_10_ = auVar1300._0_10_;
          auVar1309._10_2_ = 0;
          auVar292._2_54_ = auVar1309._10_54_;
          auVar292._0_2_ = auVar96._0_2_;
          auVar293._56_2_ = 0;
          auVar293._0_56_ = auVar292;
          auVar98._2_58_ = auVar293 << 0x10;
          auVar98._0_2_ = auVar95._0_2_;
          auVar579._0_8_ = *(ulonglong *)(puVar464 + auVar511._0_8_);
          auVar640._8_8_ = 0;
          auVar640._0_8_ = auVar579._0_8_;
          auVar1006._16_48_ = in_ZMM6._16_48_;
          auVar1006._8_8_ = 0;
          auVar1006._0_8_ = auVar579._0_8_;
          auVar1005._15_49_ = auVar1006._15_49_;
          auVar1005._8_6_ = 0;
          auVar1005._0_8_ = auVar579._0_8_;
          auVar1005[0xe] = (char)(auVar579._0_8_ >> 0x38);
          auVar1004._14_50_ = auVar1005._14_50_;
          auVar1004._8_6_ = 0;
          auVar1004._0_8_ = auVar579._0_8_;
          auVar1003._13_51_ = auVar1004._13_51_;
          auVar1003._8_4_ = 0;
          auVar1003._0_8_ = auVar579._0_8_;
          auVar1003[0xc] = (char)(auVar579._0_8_ >> 0x30);
          auVar1002._12_52_ = auVar1003._12_52_;
          auVar1002._8_4_ = 0;
          auVar1002._0_8_ = auVar579._0_8_;
          auVar1001._11_53_ = auVar1002._11_53_;
          auVar1001._8_2_ = 0;
          auVar1001._0_8_ = auVar579._0_8_;
          auVar1001[10] = (char)(auVar579._0_8_ >> 0x28);
          auVar1000._10_54_ = auVar1001._10_54_;
          auVar1000._8_2_ = 0;
          auVar1000._0_8_ = auVar579._0_8_;
          auVar999._9_55_ = auVar1000._9_55_;
          auVar999[8] = (char)(auVar579._0_8_ >> 0x20);
          auVar999._0_8_ = auVar579._0_8_;
          auVar296[0x38] = 0;
          auVar296._0_56_ = auVar999._8_56_;
          auVar101._1_57_ = auVar296 << 8;
          auVar101[0] = (char)(auVar579._0_8_ >> 0x18);
          auVar295[0x3a] = 0;
          auVar295._0_58_ = auVar101;
          auVar100._1_59_ = auVar295 << 8;
          auVar100[0] = (char)(auVar579._0_8_ >> 0x10);
          auVar294[0x3c] = 0;
          auVar294._0_60_ = auVar100;
          auVar99._1_61_ = auVar294 << 8;
          auVar99[0] = (char)(auVar579._0_8_ >> 8);
          auVar998._0_2_ = CONCAT11(0,(byte)auVar579._0_8_);
          auVar998._2_62_ = auVar99;
          iVar481 = CONCAT22(uVar527,auVar999._8_2_);
          auVar660._0_8_ = CONCAT26(uVar533,CONCAT24(auVar1001._10_2_,iVar481));
          auVar660._8_2_ = auVar1003._12_2_;
          auVar660._10_2_ = uVar536;
          auVar686._12_2_ = auVar1005._14_2_;
          auVar686._0_12_ = auVar660;
          auVar686._14_2_ = uVar539;
          auVar1009._0_14_ = auVar998._0_14_;
          auVar1009._14_2_ = 0;
          auVar1009._16_48_ = auVar1006._16_48_;
          auVar1008._14_50_ = auVar1009._14_50_;
          auVar1008._0_12_ = auVar998._0_12_;
          auVar1008._12_2_ = auVar101._0_2_;
          auVar1007._12_52_ = auVar1008._12_52_;
          auVar1007._0_10_ = auVar998._0_10_;
          auVar1007._10_2_ = 0;
          auVar297._2_54_ = auVar1007._10_54_;
          auVar297._0_2_ = auVar100._0_2_;
          auVar298._56_2_ = 0;
          auVar298._0_56_ = auVar297;
          auVar102._2_58_ = auVar298 << 0x10;
          auVar102._0_2_ = auVar99._0_2_;
          uVar1674 = (uint)auVar1693._0_2_ - (uint)auVar1300._0_2_;
          uVar1708 = auVar94._0_4_ - auVar98._0_4_;
          uVar1711 = auVar287._0_4_ - auVar292._0_4_;
          uVar1717 = auVar1703._12_4_ - auVar1310._12_4_;
          uVar1541 = iVar1536 - iVar489;
          iVar1536 = (int)((ulonglong)auVar1482._0_8_ >> 0x20);
          uVar1605 = (int)((ulonglong)auVar1542._0_8_ >> 0x20) - iVar1536;
          uVar1608 = auVar1542._8_4_ - auVar1482._8_4_;
          uVar1609 = auVar1554._12_4_ - auVar1495._12_4_;
          uVar875 = (uint)auVar998._0_2_ - (uint)auVar1300._0_2_;
          uVar1177 = auVar102._0_4_ - auVar98._0_4_;
          uVar1178 = auVar297._0_4_ - auVar292._0_4_;
          uVar1179 = auVar1008._12_4_ - auVar1310._12_4_;
          uVar486 = iVar481 - iVar489;
          uVar476 = (int)((ulonglong)auVar660._0_8_ >> 0x20) - iVar1536;
          uVar477 = auVar660._8_4_ - auVar1482._8_4_;
          uVar871 = auVar686._12_4_ - auVar1495._12_4_;
          auVar1183._0_4_ = (uVar1541 ^ (int)uVar1541 >> 0x1f) - ((int)uVar1541 >> 0x1f);
          auVar1183._4_4_ = (uVar1605 ^ (int)uVar1605 >> 0x1f) - ((int)uVar1605 >> 0x1f);
          auVar1183._8_4_ = (uVar1608 ^ (int)uVar1608 >> 0x1f) - ((int)uVar1608 >> 0x1f);
          auVar1183._12_4_ = (uVar1609 ^ (int)uVar1609 >> 0x1f) - ((int)uVar1609 >> 0x1f);
          auVar1555._0_4_ = (uVar1674 ^ (int)uVar1674 >> 0x1f) - ((int)uVar1674 >> 0x1f);
          auVar1555._4_4_ = (uVar1708 ^ (int)uVar1708 >> 0x1f) - ((int)uVar1708 >> 0x1f);
          auVar1555._8_4_ = (uVar1711 ^ (int)uVar1711 >> 0x1f) - ((int)uVar1711 >> 0x1f);
          auVar1555._12_4_ = (uVar1717 ^ (int)uVar1717 >> 0x1f) - ((int)uVar1717 >> 0x1f);
          auVar1496._0_4_ = (uVar486 ^ (int)uVar486 >> 0x1f) - ((int)uVar486 >> 0x1f);
          auVar1496._4_4_ = (uVar476 ^ (int)uVar476 >> 0x1f) - ((int)uVar476 >> 0x1f);
          auVar1496._8_4_ = (uVar477 ^ (int)uVar477 >> 0x1f) - ((int)uVar477 >> 0x1f);
          auVar1496._12_4_ = (uVar871 ^ (int)uVar871 >> 0x1f) - ((int)uVar871 >> 0x1f);
          auVar1626._0_4_ = (uVar875 ^ (int)uVar875 >> 0x1f) - ((int)uVar875 >> 0x1f);
          auVar1626._4_4_ = (uVar1177 ^ (int)uVar1177 >> 0x1f) - ((int)uVar1177 >> 0x1f);
          auVar1626._8_4_ = (uVar1178 ^ (int)uVar1178 >> 0x1f) - ((int)uVar1178 >> 0x1f);
          auVar1626._12_4_ = (uVar1179 ^ (int)uVar1179 >> 0x1f) - ((int)uVar1179 >> 0x1f);
          uVar1675 = (int)(uVar486 + uVar1541) >> 0x1f;
          uVar1709 = (int)(uVar476 + uVar1605) >> 0x1f;
          uVar1712 = (int)(uVar477 + uVar1608) >> 0x1f;
          uVar1718 = (int)(uVar871 + uVar1609) >> 0x1f;
          auVar687._0_4_ = (uVar486 + uVar1541 ^ uVar1675) - uVar1675;
          auVar687._4_4_ = (uVar476 + uVar1605 ^ uVar1709) - uVar1709;
          auVar687._8_4_ = (uVar477 + uVar1608 ^ uVar1712) - uVar1712;
          auVar687._12_4_ = (uVar871 + uVar1609 ^ uVar1718) - uVar1718;
          uVar486 = (int)(uVar875 + uVar1674) >> 0x1f;
          uVar476 = (int)(uVar1177 + uVar1708) >> 0x1f;
          uVar477 = (int)(uVar1178 + uVar1711) >> 0x1f;
          uVar871 = (int)(uVar1179 + uVar1717) >> 0x1f;
          auVar879._0_4_ = (uVar875 + uVar1674 ^ uVar486) - uVar486;
          auVar879._4_4_ = (uVar1177 + uVar1708 ^ uVar476) - uVar476;
          auVar879._8_4_ = (uVar1178 + uVar1711 ^ uVar477) - uVar477;
          auVar879._12_4_ = (uVar1179 + uVar1717 ^ uVar871) - uVar871;
          auVar645 = auVar1626 ^ auVar883;
          auVar1555 = auVar1555 ^ auVar883;
          auVar1724._0_4_ = -(uint)(auVar645._0_4_ < auVar1555._0_4_);
          auVar1724._4_4_ = -(uint)(auVar645._4_4_ < auVar1555._4_4_);
          auVar1724._8_4_ = -(uint)(auVar645._8_4_ < auVar1555._8_4_);
          auVar1724._12_4_ = -(uint)(auVar645._12_4_ < auVar1555._12_4_);
          in_ZMM11._0_16_ = auVar1496 ^ auVar883;
          in_ZMM11._16_48_ = auVar1701._16_48_;
          auVar1183 = auVar1183 ^ auVar883;
          auVar1739._0_4_ = -(uint)(in_ZMM11._0_4_ < auVar1183._0_4_);
          auVar1739._4_4_ = -(uint)(in_ZMM11._4_4_ < auVar1183._4_4_);
          auVar1739._8_4_ = -(uint)(in_ZMM11._8_4_ < auVar1183._8_4_);
          auVar1739._12_4_ = -(uint)(in_ZMM11._12_4_ < auVar1183._12_4_);
          auVar1627._0_4_ = -(uint)(auVar879._0_4_ < auVar1626._0_4_);
          auVar1627._4_4_ = -(uint)(auVar879._4_4_ < auVar1626._4_4_);
          auVar1627._8_4_ = -(uint)(auVar879._8_4_ < auVar1626._8_4_);
          auVar1627._12_4_ = -(uint)(auVar879._12_4_ < auVar1626._12_4_);
          in_ZMM6._0_16_ = auVar879 ^ auVar883;
          in_ZMM6._16_48_ = auVar1006._16_48_;
          auVar1556._0_4_ = -(uint)(in_ZMM6._0_4_ < auVar1555._0_4_);
          auVar1556._4_4_ = -(uint)(in_ZMM6._4_4_ < auVar1555._4_4_);
          auVar1556._8_4_ = -(uint)(in_ZMM6._8_4_ < auVar1555._8_4_);
          auVar1556._12_4_ = -(uint)(in_ZMM6._12_4_ < auVar1555._12_4_);
          auVar1497._0_4_ = -(uint)(auVar687._0_4_ < auVar1496._0_4_);
          auVar1497._4_4_ = -(uint)(auVar687._4_4_ < auVar1496._4_4_);
          auVar1497._8_4_ = -(uint)(auVar687._8_4_ < auVar1496._8_4_);
          auVar1497._12_4_ = -(uint)(auVar687._12_4_ < auVar1496._12_4_);
          auVar687 = auVar687 ^ auVar883;
          auVar1184._0_4_ = -(uint)(auVar687._0_4_ < auVar1183._0_4_);
          auVar1184._4_4_ = -(uint)(auVar687._4_4_ < auVar1183._4_4_);
          auVar1184._8_4_ = -(uint)(auVar687._8_4_ < auVar1183._8_4_);
          auVar1184._12_4_ = -(uint)(auVar687._12_4_ < auVar1183._12_4_);
          in_ZMM7._0_16_ = auVar1184 | auVar1739;
          in_ZMM7._16_48_ = auVar1308._16_48_;
          auVar645 = packssdw(auVar1556 | auVar1724,in_ZMM7._0_16_);
          auVar645 = packsswb(auVar645,auVar645);
          auVar1628 = packssdw(auVar1627,auVar1497);
          auVar1628 = packsswb(auVar1628,auVar1628);
          auVar645 = ~auVar645 & auVar640 |
                     (~auVar1628 & auVar587 | auVar604 & auVar1628) & auVar645;
          uVar657 = *(undefined8 *)(puVar484 + auVar511._0_8_);
          *(ulonglong *)(*pauVar467 + auVar511._0_8_) =
               CONCAT17((char)((ulonglong)uVar657 >> 0x38) - auVar645[7],
                        CONCAT16((char)((ulonglong)uVar657 >> 0x30) - auVar645[6],
                                 CONCAT15((char)((ulonglong)uVar657 >> 0x28) - auVar645[5],
                                          CONCAT14((char)((ulonglong)uVar657 >> 0x20) - auVar645[4],
                                                   CONCAT13((char)((ulonglong)uVar657 >> 0x18) -
                                                            auVar645[3],
                                                            CONCAT12((char)((ulonglong)uVar657 >>
                                                                           0x10) - auVar645[2],
                                                                     CONCAT11((char)((ulonglong)
                                                                                     uVar657 >> 8) -
                                                                              auVar645[1],
                                                                              (char)uVar657 -
                                                                              auVar645[0])))))));
          auVar511._0_8_ = auVar511._0_8_ + 8;
        } while (auVar503._0_8_ != auVar511._0_8_);
        pauVar467 = (undefined1 (*) [16])(*pauVar467 + auVar503._0_8_);
        puVar479 = puVar479 + auVar503._0_8_;
        puVar484 = puVar484 + auVar503._0_8_;
        if (auVar502._0_8_ == auVar503._0_8_) goto LAB_140dcfa74;
      }
LAB_140dcf20e:
      lVar482 = 0;
      do {
        bVar466 = puVar480[lVar482 + 1];
        iVar481 = (uint)puVar479[lVar482] - (uint)bVar466;
        iVar489 = (uint)puVar487[lVar482 + 1] - (uint)bVar466;
        bVar610 = (byte)-iVar481;
        if (-iVar481 < 0) {
          bVar610 = (byte)iVar481;
        }
        bVar465 = (byte)-iVar489;
        if (-iVar489 < 0) {
          bVar465 = (byte)iVar489;
        }
        uVar486 = -(iVar489 + iVar481);
        if ((int)uVar486 < 0) {
          uVar486 = iVar489 + iVar481;
        }
        if (bVar465 <= uVar486) {
          bVar466 = puVar479[lVar482];
        }
        bVar874 = puVar487[lVar482 + 1];
        if (uVar486 < bVar610) {
          bVar874 = bVar466;
        }
        if ((uint)bVar465 < (uint)bVar610) {
          bVar874 = bVar466;
        }
        (*pauVar467)[lVar482] = puVar484[lVar482] - bVar874;
        lVar482 = lVar482 + 1;
      } while (uVar13 - uVar474 != lVar482);
    }
LAB_140dcfa74:
    puVar469 = param_1->try_row;
    goto LAB_140dcfa85;
  }
  if (-1 < (char)bVar466) goto LAB_140dcfa85;
  puVar480 = param_1->try_row;
  *puVar480 = '\x04';
  puVar487 = param_1->prev_row;
  puVar478 = param_1->row_buf;
  pbVar472 = puVar480 + 1;
  puVar464 = puVar487 + 1;
  puVar484 = puVar478 + 1;
  puVar475 = puVar464;
  puVar479 = puVar484;
  if (bVar610 == 0) {
    auVar511._0_8_ = 0;
  }
  else {
    if (bVar610 < 0x19) {
      auVar511._0_8_ = 0;
      auVar503._0_8_ = 0;
    }
    else {
      uVar476 = uVar486 & 0xfffffffc;
      auVar503._0_8_ = (ulonglong)uVar476;
      bVar466 = (char)*(undefined2 *)(puVar478 + 1) - (char)*(undefined2 *)(puVar487 + 1);
      cVar1479 = (char)((ushort)*(undefined2 *)(puVar478 + 1) >> 8) -
                 (char)((ushort)*(undefined2 *)(puVar487 + 1) >> 8);
      uVar546 = CONCAT11(cVar1479,bVar466);
      auVar547._0_12_ = ZEXT212(uVar546);
      auVar547[0xc] = 0;
      auVar548[0xd] = 0;
      auVar548._0_13_ = auVar547;
      bVar610 = (char)*(undefined2 *)(puVar478 + 3) - (char)*(undefined2 *)(puVar487 + 3);
      cVar652 = (char)((ushort)*(undefined2 *)(puVar478 + 3) >> 8) -
                (char)((ushort)*(undefined2 *)(puVar487 + 3) >> 8);
      uVar611 = CONCAT11(cVar652,bVar610);
      auVar617._0_12_ = ZEXT212(uVar611);
      auVar617[0xc] = 0;
      auVar627[0xd] = 0;
      auVar627._0_13_ = auVar617;
      *(ushort *)(puVar480 + 1) = uVar546;
      *(ushort *)(puVar480 + 3) = uVar611;
      iVar1676 = _UNK_1531f2bac;
      iVar1536 = _UNK_1531f2ba8;
      iVar489 = _UNK_1531f2ba4;
      iVar481 = ___xmm_00000000000000000000010000000100;
      auVar802._16_48_ = in_ZMM5._16_48_;
      auVar802._14_2_ = 0;
      auVar802._0_14_ = auVar548;
      auVar801._15_49_ = auVar802._15_49_;
      auVar801[0xe] = 0;
      auVar801._0_14_ = auVar548;
      auVar800._14_50_ = auVar801._14_50_;
      auVar800[0xd] = 0;
      auVar800._0_13_ = auVar547;
      auVar799._13_51_ = auVar800._13_51_;
      auVar799[0xc] = 0;
      auVar799._0_12_ = auVar547._0_12_;
      auVar798._12_52_ = auVar799._12_52_;
      auVar798._0_12_ = ZEXT212(uVar546);
      auVar797._11_53_ = auVar798._11_53_;
      auVar797._0_11_ = ZEXT211(uVar546);
      auVar796._10_54_ = auVar797._10_54_;
      auVar796._2_8_ = 0;
      auVar796._0_2_ = uVar546;
      auVar795._9_55_ = auVar796._9_55_;
      auVar795._2_7_ = 0;
      auVar795._0_2_ = uVar546;
      auVar301._56_8_ = 0;
      auVar301._0_56_ = auVar795._8_56_;
      auVar300._58_6_ = 0;
      auVar300._0_58_ = SUB6458(auVar301 << 0x40,6);
      auVar299[0x3c] = 0;
      auVar299._0_60_ = SUB6460(auVar300 << 0x30,4);
      auVar794[2] = cVar1479;
      auVar794._0_2_ = uVar546;
      auVar794._3_61_ = auVar299 << 8;
      auVar793._2_62_ = auVar794._2_62_;
      uVar1784 = CONCAT11(0,bVar466);
      auVar806._0_14_ = auVar793._0_14_;
      auVar806._14_2_ = 0;
      auVar806._16_48_ = auVar802._16_48_;
      auVar805._14_50_ = auVar806._14_50_;
      auVar805._0_12_ = auVar793._0_12_;
      auVar805._12_2_ = 0;
      auVar804._12_52_ = auVar805._12_52_;
      auVar804._0_10_ = auVar793._0_10_;
      auVar804._10_2_ = 0;
      auVar803._10_54_ = auVar804._10_54_;
      auVar803._0_10_ = (unkuint10)0 << 0x40;
      auVar302._56_2_ = 0;
      auVar302._0_56_ = auVar803._8_56_;
      auVar103._2_58_ = auVar302 << 0x10;
      auVar103._0_2_ = auVar794._2_2_;
      in_ZMM5._0_4_ = CONCAT22(0,uVar1784);
      in_ZMM5._4_60_ = auVar103;
      auVar1019._16_48_ = in_ZMM6._16_48_;
      auVar1019._14_2_ = 0;
      auVar1019._0_14_ = auVar627;
      auVar1018._15_49_ = auVar1019._15_49_;
      auVar1018[0xe] = 0;
      auVar1018._0_14_ = auVar627;
      auVar1017._14_50_ = auVar1018._14_50_;
      auVar1017[0xd] = 0;
      auVar1017._0_13_ = auVar617;
      auVar1016._13_51_ = auVar1017._13_51_;
      auVar1016[0xc] = 0;
      auVar1016._0_12_ = auVar617._0_12_;
      auVar1015._12_52_ = auVar1016._12_52_;
      auVar1015._0_12_ = ZEXT212(uVar611);
      auVar1014._11_53_ = auVar1015._11_53_;
      auVar1014._0_11_ = ZEXT211(uVar611);
      auVar1013._10_54_ = auVar1014._10_54_;
      auVar1013._2_8_ = 0;
      auVar1013._0_2_ = uVar611;
      auVar1012._9_55_ = auVar1013._9_55_;
      auVar1012._2_7_ = 0;
      auVar1012._0_2_ = uVar611;
      auVar449._56_8_ = 0;
      auVar449._0_56_ = auVar1012._8_56_;
      auVar304._58_6_ = 0;
      auVar304._0_58_ = SUB6458(auVar449 << 0x40,6);
      auVar303[0x3c] = 0;
      auVar303._0_60_ = SUB6460(auVar304 << 0x30,4);
      auVar1011[2] = cVar652;
      auVar1011._0_2_ = uVar611;
      auVar1011._3_61_ = auVar303 << 8;
      auVar1010._2_62_ = auVar1011._2_62_;
      uVar1795 = CONCAT11(0,bVar610);
      auVar1024._0_14_ = auVar1010._0_14_;
      auVar1024._14_2_ = 0;
      auVar1024._16_48_ = auVar1019._16_48_;
      auVar1023._14_50_ = auVar1024._14_50_;
      auVar1023._0_12_ = auVar1010._0_12_;
      auVar1023._12_2_ = 0;
      auVar1022._12_52_ = auVar1023._12_52_;
      auVar1022._0_10_ = auVar1010._0_10_;
      auVar1022._10_2_ = 0;
      auVar1021._10_54_ = auVar1022._10_54_;
      auVar1021._0_10_ = (unkuint10)0 << 0x40;
      auVar305._56_2_ = 0;
      auVar305._0_56_ = auVar1021._8_56_;
      auVar104._2_58_ = auVar305 << 0x10;
      auVar104._0_2_ = auVar1011._2_2_;
      auVar1020._0_4_ = CONCAT22(0,uVar1795);
      auVar1020._4_60_ = auVar104;
      auVar1312._16_48_ = in_ZMM7._16_48_;
      auVar1185._0_4_ = ___xmm_00000000000000000000010000000100 - in_ZMM5._0_4_;
      auVar1185._4_4_ = _UNK_1531f2ba4 - auVar103._0_4_;
      auVar1185._8_4_ = _UNK_1531f2ba8 - auVar803._8_4_;
      auVar1185._12_4_ = _UNK_1531f2bac - auVar805._12_4_;
      auVar1498._0_4_ = ___xmm_00000000000000000000010000000100 - auVar1020._0_4_;
      auVar1498._4_4_ = _UNK_1531f2ba4 - auVar104._0_4_;
      auVar1498._8_4_ = _UNK_1531f2ba8 - auVar1021._8_4_;
      auVar1498._12_4_ = _UNK_1531f2bac - auVar1023._12_4_;
      auVar511 = ZEXT4864(in_ZMM0._16_48_) << 0x80;
      auVar498[0] = -((char)bVar466 < '\0');
      auVar498[1] = -((char)bVar466 < '\0');
      auVar498[2] = -((char)bVar466 < '\0');
      auVar498[3] = -((char)bVar466 < '\0');
      auVar498[4] = -(cVar1479 < '\0');
      auVar498[5] = -(cVar1479 < '\0');
      auVar498[6] = -(cVar1479 < '\0');
      auVar498[7] = -(cVar1479 < '\0');
      auVar498[8] = -('\0' < auVar511[8]);
      auVar498[9] = -('\0' < auVar511[9]);
      auVar498[10] = -('\0' < auVar511[10]);
      auVar498[0xb] = -('\0' < auVar511[0xb]);
      auVar498[0xc] = -('\0' < auVar511[0xc]);
      auVar498[0xd] = -('\0' < auVar511[0xd]);
      auVar498[0xe] = -('\0' < auVar511[0xe]);
      auVar498[0xf] = -('\0' < auVar511[0xf]);
      auVar511 = ZEXT4864(auVar574._16_48_) << 0x80;
      auVar554[0] = -((char)bVar610 < '\0');
      auVar554[1] = -((char)bVar610 < '\0');
      auVar554[2] = -((char)bVar610 < '\0');
      auVar554[3] = -((char)bVar610 < '\0');
      auVar554[4] = -(cVar652 < '\0');
      auVar554[5] = -(cVar652 < '\0');
      auVar554[6] = -(cVar652 < '\0');
      auVar554[7] = -(cVar652 < '\0');
      auVar554[8] = -('\0' < auVar511[8]);
      auVar554[9] = -('\0' < auVar511[9]);
      auVar554[10] = -('\0' < auVar511[10]);
      auVar554[0xb] = -('\0' < auVar511[0xb]);
      auVar554[0xc] = -('\0' < auVar511[0xc]);
      auVar554[0xd] = -('\0' < auVar511[0xd]);
      auVar554[0xe] = -('\0' < auVar511[0xe]);
      auVar554[0xf] = -('\0' < auVar511[0xf]);
      auVar1312._0_16_ = auVar1185 & auVar498;
      auVar512._0_16_ = ~auVar498 & in_ZMM5._0_16_ | auVar1312._0_16_;
      auVar512._16_48_ = in_ZMM0._16_48_;
      auVar574._0_16_ = ~auVar554 & auVar1020._0_16_ | auVar1498 & auVar554;
      auVar513 = auVar512;
      auVar575 = auVar574;
      in_ZMM7 = auVar1312;
      if (auVar503._0_8_ == 4) {
LAB_140dcf64d:
        auVar516._16_48_ = auVar513._16_48_;
        auVar516._0_12_ = auVar513._0_12_;
        auVar516._12_4_ = 0;
        auVar515._12_52_ = auVar516._12_52_;
        auVar515._0_8_ = auVar513._0_8_;
        auVar515._8_4_ = auVar513._4_4_;
        auVar514._8_56_ = auVar515._8_56_;
        auVar514._0_4_ = auVar513._0_4_;
        auVar514._4_4_ = 0;
        auVar578._16_48_ = auVar575._16_48_;
        auVar578._0_12_ = auVar575._0_12_;
        auVar578._12_4_ = 0;
        auVar577._12_52_ = auVar578._12_52_;
        auVar577._0_8_ = auVar575._0_8_;
        auVar577._8_4_ = auVar575._4_4_;
        auVar576._8_56_ = auVar577._8_56_;
        auVar576._0_4_ = auVar575._0_4_;
        auVar576._4_4_ = 0;
        auVar557 = auVar576._0_16_;
      }
      else {
        bVar610 = (char)*(undefined2 *)(puVar478 + 5) - (char)*(undefined2 *)(puVar487 + 5);
        cVar652 = (char)((ushort)*(undefined2 *)(puVar478 + 5) >> 8) -
                  (char)((ushort)*(undefined2 *)(puVar487 + 5) >> 8);
        uVar611 = CONCAT11(cVar652,bVar610);
        auVar667._0_12_ = ZEXT212(uVar611);
        auVar667[0xc] = 0;
        auVar676[0xd] = 0;
        auVar676._0_13_ = auVar667;
        bVar466 = (char)*(undefined2 *)(puVar478 + 7) - (char)*(undefined2 *)(puVar487 + 7);
        cVar1479 = (char)((ushort)*(undefined2 *)(puVar478 + 7) >> 8) -
                   (char)((ushort)*(undefined2 *)(puVar487 + 7) >> 8);
        uVar546 = CONCAT11(cVar1479,bVar466);
        auVar618._0_12_ = ZEXT212(uVar546);
        auVar618[0xc] = 0;
        auVar628[0xd] = 0;
        auVar628._0_13_ = auVar618;
        *(ushort *)(puVar480 + 5) = uVar611;
        *(ushort *)(puVar480 + 7) = uVar546;
        auVar1034._14_2_ = 0;
        auVar1034._0_14_ = auVar676;
        auVar1034._16_48_ = auVar1019._16_48_;
        auVar1033._15_49_ = auVar1034._15_49_;
        auVar1033[0xe] = 0;
        auVar1033._0_14_ = auVar676;
        auVar1032._14_50_ = auVar1033._14_50_;
        auVar1032[0xd] = 0;
        auVar1032._0_13_ = auVar667;
        auVar1031._13_51_ = auVar1032._13_51_;
        auVar1031[0xc] = 0;
        auVar1031._0_12_ = auVar667._0_12_;
        auVar1030._12_52_ = auVar1031._12_52_;
        auVar1030._0_12_ = ZEXT212(uVar611);
        auVar1029._11_53_ = auVar1030._11_53_;
        auVar1029._0_11_ = ZEXT211(uVar611);
        auVar1028._10_54_ = auVar1029._10_54_;
        auVar1028._2_8_ = 0;
        auVar1028._0_2_ = uVar611;
        auVar1027._9_55_ = auVar1028._9_55_;
        auVar1027._2_7_ = 0;
        auVar1027._0_2_ = uVar611;
        auVar308._56_8_ = 0;
        auVar308._0_56_ = auVar1027._8_56_;
        auVar307._58_6_ = 0;
        auVar307._0_58_ = SUB6458(auVar308 << 0x40,6);
        auVar306[0x3c] = 0;
        auVar306._0_60_ = SUB6460(auVar307 << 0x30,4);
        auVar1026[2] = cVar652;
        auVar1026._0_2_ = uVar611;
        auVar1026._3_61_ = auVar306 << 8;
        auVar1025._2_62_ = auVar1026._2_62_;
        uVar1796 = CONCAT11(0,bVar610);
        auVar1039._0_14_ = auVar1025._0_14_;
        auVar1039._14_2_ = 0;
        auVar1039._16_48_ = auVar1019._16_48_;
        auVar1038._14_50_ = auVar1039._14_50_;
        auVar1038._0_12_ = auVar1025._0_12_;
        auVar1038._12_2_ = 0;
        auVar1037._12_52_ = auVar1038._12_52_;
        auVar1037._0_10_ = auVar1025._0_10_;
        auVar1037._10_2_ = 0;
        auVar1036._10_54_ = auVar1037._10_54_;
        auVar1036._0_10_ = (unkuint10)0 << 0x40;
        auVar309._56_2_ = 0;
        auVar309._0_56_ = auVar1036._8_56_;
        auVar105._2_58_ = auVar309 << 0x10;
        auVar105._0_2_ = auVar1026._2_2_;
        auVar1035._0_4_ = CONCAT22(0,uVar1796);
        auVar1035._4_60_ = auVar105;
        auVar1322._14_2_ = 0;
        auVar1322._0_14_ = auVar628;
        auVar1322._16_48_ = auVar1312._16_48_;
        auVar1321._15_49_ = auVar1322._15_49_;
        auVar1321[0xe] = 0;
        auVar1321._0_14_ = auVar628;
        auVar1320._14_50_ = auVar1321._14_50_;
        auVar1320[0xd] = 0;
        auVar1320._0_13_ = auVar618;
        auVar1319._13_51_ = auVar1320._13_51_;
        auVar1319[0xc] = 0;
        auVar1319._0_12_ = auVar618._0_12_;
        auVar1318._12_52_ = auVar1319._12_52_;
        auVar1318._0_12_ = ZEXT212(uVar546);
        auVar1317._11_53_ = auVar1318._11_53_;
        auVar1317._0_11_ = ZEXT211(uVar546);
        auVar1316._10_54_ = auVar1317._10_54_;
        auVar1316._2_8_ = 0;
        auVar1316._0_2_ = uVar546;
        auVar1315._9_55_ = auVar1316._9_55_;
        auVar1315._2_7_ = 0;
        auVar1315._0_2_ = uVar546;
        auVar450._56_8_ = 0;
        auVar450._0_56_ = auVar1315._8_56_;
        auVar311._58_6_ = 0;
        auVar311._0_58_ = SUB6458(auVar450 << 0x40,6);
        auVar310[0x3c] = 0;
        auVar310._0_60_ = SUB6460(auVar311 << 0x30,4);
        auVar1314[2] = cVar1479;
        auVar1314._0_2_ = uVar546;
        auVar1314._3_61_ = auVar310 << 8;
        auVar1313._2_62_ = auVar1314._2_62_;
        uVar1814 = CONCAT11(0,bVar466);
        auVar1326._0_14_ = auVar1313._0_14_;
        auVar1326._14_2_ = 0;
        auVar1326._16_48_ = auVar1312._16_48_;
        auVar1325._14_50_ = auVar1326._14_50_;
        auVar1325._0_12_ = auVar1313._0_12_;
        auVar1325._12_2_ = 0;
        auVar1324._12_52_ = auVar1325._12_52_;
        auVar1324._0_10_ = auVar1313._0_10_;
        auVar1324._10_2_ = 0;
        auVar1323._10_54_ = auVar1324._10_54_;
        auVar1323._0_10_ = (unkuint10)0 << 0x40;
        auVar312._56_2_ = 0;
        auVar312._0_56_ = auVar1323._8_56_;
        auVar106._2_58_ = auVar312 << 0x10;
        auVar106._0_2_ = auVar1314._2_2_;
        in_ZMM7._0_4_ = CONCAT22(0,uVar1814);
        in_ZMM7._4_60_ = auVar106;
        auVar1499._0_4_ = iVar481 - auVar1035._0_4_;
        auVar1499._4_4_ = iVar489 - auVar105._0_4_;
        auVar1499._8_4_ = iVar1536 - auVar1036._8_4_;
        auVar1499._12_4_ = iVar1676 - auVar1038._12_4_;
        auVar1557._0_4_ = iVar481 - in_ZMM7._0_4_;
        auVar1557._4_4_ = iVar489 - auVar106._0_4_;
        auVar1557._8_4_ = iVar1536 - auVar1323._8_4_;
        auVar1557._12_4_ = iVar1676 - auVar1325._12_4_;
        auVar511 = ZEXT4864(in_ZMM10._16_48_) << 0x80;
        auVar1629[0] = -((char)bVar610 < '\0');
        auVar1629[1] = -((char)bVar610 < '\0');
        auVar1629[2] = -((char)bVar610 < '\0');
        auVar1629[3] = -((char)bVar610 < '\0');
        auVar1629[4] = -(cVar652 < '\0');
        auVar1629[5] = -(cVar652 < '\0');
        auVar1629[6] = -(cVar652 < '\0');
        auVar1629[7] = -(cVar652 < '\0');
        auVar1629[8] = -('\0' < auVar511[8]);
        auVar1629[9] = -('\0' < auVar511[9]);
        auVar1629[10] = -('\0' < auVar511[10]);
        auVar1629[0xb] = -('\0' < auVar511[0xb]);
        auVar1629[0xc] = -('\0' < auVar511[0xc]);
        auVar1629[0xd] = -('\0' < auVar511[0xd]);
        auVar1629[0xe] = -('\0' < auVar511[0xe]);
        auVar1629[0xf] = -('\0' < auVar511[0xf]);
        auVar511 = ZEXT4864(auVar802._16_48_) << 0x80;
        auVar688[0] = -((char)bVar466 < '\0');
        auVar688[1] = -((char)bVar466 < '\0');
        auVar688[2] = -((char)bVar466 < '\0');
        auVar688[3] = -((char)bVar466 < '\0');
        auVar688[4] = -(cVar1479 < '\0');
        auVar688[5] = -(cVar1479 < '\0');
        auVar688[6] = -(cVar1479 < '\0');
        auVar688[7] = -(cVar1479 < '\0');
        auVar688[8] = -('\0' < auVar511[8]);
        auVar688[9] = -('\0' < auVar511[9]);
        auVar688[10] = -('\0' < auVar511[10]);
        auVar688[0xb] = -('\0' < auVar511[0xb]);
        auVar688[0xc] = -('\0' < auVar511[0xc]);
        auVar688[0xd] = -('\0' < auVar511[0xd]);
        auVar688[0xe] = -('\0' < auVar511[0xe]);
        auVar688[0xf] = -('\0' < auVar511[0xf]);
        in_ZMM10._0_16_ = ~auVar1629 & auVar1035._0_16_ | auVar1499 & auVar1629;
        in_ZMM9._0_16_ = auVar1557 & auVar688;
        in_ZMM5._0_16_ = ~auVar688 & in_ZMM7._0_16_ | in_ZMM9._0_16_;
        in_ZMM5._16_48_ = auVar802._16_48_;
        auVar513._0_4_ = auVar512._0_4_ + in_ZMM10._0_4_;
        auVar513._4_4_ = auVar512._4_4_ + in_ZMM10._4_4_;
        auVar513._8_4_ = auVar512._8_4_ + in_ZMM10._8_4_;
        auVar513._12_4_ = auVar512._12_4_ + in_ZMM10._12_4_;
        auVar513._16_48_ = in_ZMM0._16_48_;
        auVar575._0_4_ = auVar574._0_4_ + in_ZMM5._0_4_;
        auVar575._4_4_ = auVar574._4_4_ + in_ZMM5._4_4_;
        auVar575._8_4_ = auVar574._8_4_ + in_ZMM5._8_4_;
        auVar575._12_4_ = auVar574._12_4_ + in_ZMM5._12_4_;
        auVar575._16_48_ = auVar574._16_48_;
        if (uVar476 == 8) goto LAB_140dcf64d;
        bVar610 = (char)*(undefined2 *)(puVar478 + 9) - (char)*(undefined2 *)(puVar487 + 9);
        cVar652 = (char)((ushort)*(undefined2 *)(puVar478 + 9) >> 8) -
                  (char)((ushort)*(undefined2 *)(puVar487 + 9) >> 8);
        uVar611 = CONCAT11(cVar652,bVar610);
        auVar668._0_12_ = ZEXT212(uVar611);
        auVar668[0xc] = 0;
        auVar677[0xd] = 0;
        auVar677._0_13_ = auVar668;
        bVar466 = (char)*(undefined2 *)(puVar478 + 0xb) - (char)*(undefined2 *)(puVar487 + 0xb);
        cVar1479 = (char)((ushort)*(undefined2 *)(puVar478 + 0xb) >> 8) -
                   (char)((ushort)*(undefined2 *)(puVar487 + 0xb) >> 8);
        uVar546 = CONCAT11(cVar1479,bVar466);
        auVar619._0_12_ = ZEXT212(uVar546);
        auVar619[0xc] = 0;
        auVar629[0xd] = 0;
        auVar629._0_13_ = auVar619;
        *(ushort *)(puVar480 + 9) = uVar611;
        *(ushort *)(puVar480 + 0xb) = uVar546;
        auVar1049._14_2_ = 0;
        auVar1049._0_14_ = auVar677;
        auVar1049._16_48_ = auVar1019._16_48_;
        auVar1048._15_49_ = auVar1049._15_49_;
        auVar1048[0xe] = 0;
        auVar1048._0_14_ = auVar677;
        auVar1047._14_50_ = auVar1048._14_50_;
        auVar1047[0xd] = 0;
        auVar1047._0_13_ = auVar668;
        auVar1046._13_51_ = auVar1047._13_51_;
        auVar1046[0xc] = 0;
        auVar1046._0_12_ = auVar668._0_12_;
        auVar1045._12_52_ = auVar1046._12_52_;
        auVar1045._0_12_ = ZEXT212(uVar611);
        auVar1044._11_53_ = auVar1045._11_53_;
        auVar1044._0_11_ = ZEXT211(uVar611);
        auVar1043._10_54_ = auVar1044._10_54_;
        auVar1043._2_8_ = 0;
        auVar1043._0_2_ = uVar611;
        auVar1042._9_55_ = auVar1043._9_55_;
        auVar1042._2_7_ = 0;
        auVar1042._0_2_ = uVar611;
        auVar317._56_8_ = 0;
        auVar317._0_56_ = auVar1042._8_56_;
        auVar316._57_7_ = 0;
        auVar316._0_57_ = SUB6457(auVar317 << 0x40,7);
        auVar315._58_6_ = 0;
        auVar315._0_58_ = SUB6458(auVar316 << 0x38,6);
        auVar314._59_5_ = 0;
        auVar314._0_59_ = SUB6459(auVar315 << 0x30,5);
        auVar313._60_4_ = 0;
        auVar313._0_60_ = SUB6460(auVar314 << 0x28,4);
        auVar1041._3_61_ = SUB6461(auVar313 << 0x20,3);
        auVar1041[2] = cVar652;
        auVar1041._0_2_ = uVar611;
        auVar1040._2_62_ = auVar1041._2_62_;
        uVar1797 = CONCAT11(0,bVar610);
        auVar1054._0_14_ = auVar1040._0_14_;
        auVar1054._14_2_ = 0;
        auVar1054._16_48_ = auVar1019._16_48_;
        auVar1053._14_50_ = auVar1054._14_50_;
        auVar1053._0_12_ = auVar1040._0_12_;
        auVar1053._12_2_ = 0;
        auVar1052._12_52_ = auVar1053._12_52_;
        auVar1052._0_10_ = auVar1040._0_10_;
        auVar1052._10_2_ = 0;
        auVar1051._10_54_ = auVar1052._10_54_;
        auVar1051._0_10_ = (unkuint10)0 << 0x40;
        auVar108._56_8_ = 0;
        auVar108._0_56_ = auVar1051._8_56_;
        auVar107._2_58_ = SUB6458(auVar108 << 0x40,6);
        auVar107._0_2_ = auVar1041._2_2_;
        auVar1050._0_4_ = CONCAT22(0,uVar1797);
        auVar1050._4_60_ = auVar107;
        auVar1336._14_2_ = 0;
        auVar1336._0_14_ = auVar629;
        auVar1336._16_48_ = auVar1312._16_48_;
        auVar1335._15_49_ = auVar1336._15_49_;
        auVar1335[0xe] = 0;
        auVar1335._0_14_ = auVar629;
        auVar1334._14_50_ = auVar1335._14_50_;
        auVar1334[0xd] = 0;
        auVar1334._0_13_ = auVar619;
        auVar1333._13_51_ = auVar1334._13_51_;
        auVar1333[0xc] = 0;
        auVar1333._0_12_ = auVar619._0_12_;
        auVar1332._12_52_ = auVar1333._12_52_;
        auVar1332._0_12_ = ZEXT212(uVar546);
        auVar1331._11_53_ = auVar1332._11_53_;
        auVar1331._0_11_ = ZEXT211(uVar546);
        auVar1330._10_54_ = auVar1331._10_54_;
        auVar1330._2_8_ = 0;
        auVar1330._0_2_ = uVar546;
        auVar1329._9_55_ = auVar1330._9_55_;
        auVar1329._2_7_ = 0;
        auVar1329._0_2_ = uVar546;
        auVar111._56_8_ = 0;
        auVar111._0_56_ = auVar1329._8_56_;
        auVar110._57_7_ = 0;
        auVar110._0_57_ = SUB6457(auVar111 << 0x40,7);
        auVar319._58_6_ = 0;
        auVar319._0_58_ = SUB6458(auVar110 << 0x38,6);
        auVar318._59_5_ = 0;
        auVar318._0_59_ = SUB6459(auVar319 << 0x30,5);
        auVar109._60_4_ = 0;
        auVar109._0_60_ = SUB6460(auVar318 << 0x28,4);
        auVar1328._3_61_ = SUB6461(auVar109 << 0x20,3);
        auVar1328[2] = cVar1479;
        auVar1328._0_2_ = uVar546;
        auVar1327._2_62_ = auVar1328._2_62_;
        uVar1815 = CONCAT11(0,bVar466);
        auVar1340._0_14_ = auVar1327._0_14_;
        auVar1340._14_2_ = 0;
        auVar1340._16_48_ = auVar1312._16_48_;
        auVar1339._14_50_ = auVar1340._14_50_;
        auVar1339._0_12_ = auVar1327._0_12_;
        auVar1339._12_2_ = 0;
        auVar1338._12_52_ = auVar1339._12_52_;
        auVar1338._0_10_ = auVar1327._0_10_;
        auVar1338._10_2_ = 0;
        auVar1337._10_54_ = auVar1338._10_54_;
        auVar1337._0_10_ = (unkuint10)0 << 0x40;
        auVar113._56_8_ = 0;
        auVar113._0_56_ = auVar1337._8_56_;
        auVar112._2_58_ = SUB6458(auVar113 << 0x40,6);
        auVar112._0_2_ = auVar1328._2_2_;
        in_ZMM7._0_4_ = CONCAT22(0,uVar1815);
        in_ZMM7._4_60_ = auVar112;
        auVar1500._0_4_ = iVar481 - auVar1050._0_4_;
        auVar1500._4_4_ = iVar489 - auVar107._0_4_;
        auVar1500._8_4_ = iVar1536 - auVar1051._8_4_;
        auVar1500._12_4_ = iVar1676 - auVar1053._12_4_;
        auVar1558._0_4_ = iVar481 - in_ZMM7._0_4_;
        auVar1558._4_4_ = iVar489 - auVar112._0_4_;
        auVar1558._8_4_ = iVar1536 - auVar1337._8_4_;
        auVar1558._12_4_ = iVar1676 - auVar1339._12_4_;
        auVar511 = ZEXT4864(in_ZMM10._16_48_) << 0x80;
        auVar1630[0] = -((char)bVar610 < '\0');
        auVar1630[1] = -((char)bVar610 < '\0');
        auVar1630[2] = -((char)bVar610 < '\0');
        auVar1630[3] = -((char)bVar610 < '\0');
        auVar1630[4] = -(cVar652 < '\0');
        auVar1630[5] = -(cVar652 < '\0');
        auVar1630[6] = -(cVar652 < '\0');
        auVar1630[7] = -(cVar652 < '\0');
        auVar1630[8] = -('\0' < auVar511[8]);
        auVar1630[9] = -('\0' < auVar511[9]);
        auVar1630[10] = -('\0' < auVar511[10]);
        auVar1630[0xb] = -('\0' < auVar511[0xb]);
        auVar1630[0xc] = -('\0' < auVar511[0xc]);
        auVar1630[0xd] = -('\0' < auVar511[0xd]);
        auVar1630[0xe] = -('\0' < auVar511[0xe]);
        auVar1630[0xf] = -('\0' < auVar511[0xf]);
        auVar511 = ZEXT4864(auVar802._16_48_) << 0x80;
        auVar689[0] = -((char)bVar466 < '\0');
        auVar689[1] = -((char)bVar466 < '\0');
        auVar689[2] = -((char)bVar466 < '\0');
        auVar689[3] = -((char)bVar466 < '\0');
        auVar689[4] = -(cVar1479 < '\0');
        auVar689[5] = -(cVar1479 < '\0');
        auVar689[6] = -(cVar1479 < '\0');
        auVar689[7] = -(cVar1479 < '\0');
        auVar689[8] = -('\0' < auVar511[8]);
        auVar689[9] = -('\0' < auVar511[9]);
        auVar689[10] = -('\0' < auVar511[10]);
        auVar689[0xb] = -('\0' < auVar511[0xb]);
        auVar689[0xc] = -('\0' < auVar511[0xc]);
        auVar689[0xd] = -('\0' < auVar511[0xd]);
        auVar689[0xe] = -('\0' < auVar511[0xe]);
        auVar689[0xf] = -('\0' < auVar511[0xf]);
        in_ZMM10._0_16_ = ~auVar1630 & auVar1050._0_16_ | auVar1500 & auVar1630;
        in_ZMM9._0_16_ = auVar1558 & auVar689;
        in_ZMM5._0_16_ = ~auVar689 & in_ZMM7._0_16_ | in_ZMM9._0_16_;
        auVar513._0_4_ = auVar513._0_4_ + in_ZMM10._0_4_;
        auVar513._4_4_ = auVar513._4_4_ + in_ZMM10._4_4_;
        auVar513._8_4_ = auVar513._8_4_ + in_ZMM10._8_4_;
        auVar513._12_4_ = auVar513._12_4_ + in_ZMM10._12_4_;
        auVar575._0_4_ = auVar575._0_4_ + in_ZMM5._0_4_;
        auVar575._4_4_ = auVar575._4_4_ + in_ZMM5._4_4_;
        auVar575._8_4_ = auVar575._8_4_ + in_ZMM5._8_4_;
        auVar575._12_4_ = auVar575._12_4_ + in_ZMM5._12_4_;
        if (uVar476 == 0xc) goto LAB_140dcf64d;
        bVar610 = (char)*(undefined2 *)(puVar478 + 0xd) - (char)*(undefined2 *)(puVar487 + 0xd);
        cVar652 = (char)((ushort)*(undefined2 *)(puVar478 + 0xd) >> 8) -
                  (char)((ushort)*(undefined2 *)(puVar487 + 0xd) >> 8);
        uVar611 = CONCAT11(cVar652,bVar610);
        auVar669._0_12_ = ZEXT212(uVar611);
        auVar669[0xc] = 0;
        auVar678[0xd] = 0;
        auVar678._0_13_ = auVar669;
        bVar466 = (char)*(undefined2 *)(puVar478 + 0xf) - (char)*(undefined2 *)(puVar487 + 0xf);
        cVar1479 = (char)((ushort)*(undefined2 *)(puVar478 + 0xf) >> 8) -
                   (char)((ushort)*(undefined2 *)(puVar487 + 0xf) >> 8);
        uVar546 = CONCAT11(cVar1479,bVar466);
        auVar620._0_12_ = ZEXT212(uVar546);
        auVar620[0xc] = 0;
        auVar630[0xd] = 0;
        auVar630._0_13_ = auVar620;
        *(ushort *)(puVar480 + 0xd) = uVar611;
        *(ushort *)(puVar480 + 0xf) = uVar546;
        auVar1064._14_2_ = 0;
        auVar1064._0_14_ = auVar678;
        auVar1064._16_48_ = auVar1019._16_48_;
        auVar1063._15_49_ = auVar1064._15_49_;
        auVar1063[0xe] = 0;
        auVar1063._0_14_ = auVar678;
        auVar1062._14_50_ = auVar1063._14_50_;
        auVar1062[0xd] = 0;
        auVar1062._0_13_ = auVar669;
        auVar1061._13_51_ = auVar1062._13_51_;
        auVar1061[0xc] = 0;
        auVar1061._0_12_ = auVar669._0_12_;
        auVar1060._12_52_ = auVar1061._12_52_;
        auVar1060._0_12_ = ZEXT212(uVar611);
        auVar1059._11_53_ = auVar1060._11_53_;
        auVar1059._0_11_ = ZEXT211(uVar611);
        auVar1058._10_54_ = auVar1059._10_54_;
        auVar1058._2_8_ = 0;
        auVar1058._0_2_ = uVar611;
        auVar1057._9_55_ = auVar1058._9_55_;
        auVar1057._2_7_ = 0;
        auVar1057._0_2_ = uVar611;
        auVar324._56_8_ = 0;
        auVar324._0_56_ = auVar1057._8_56_;
        auVar323._57_7_ = 0;
        auVar323._0_57_ = SUB6457(auVar324 << 0x40,7);
        auVar322._58_6_ = 0;
        auVar322._0_58_ = SUB6458(auVar323 << 0x38,6);
        auVar321._59_5_ = 0;
        auVar321._0_59_ = SUB6459(auVar322 << 0x30,5);
        auVar320._60_4_ = 0;
        auVar320._0_60_ = SUB6460(auVar321 << 0x28,4);
        auVar1056._3_61_ = SUB6461(auVar320 << 0x20,3);
        auVar1056[2] = cVar652;
        auVar1056._0_2_ = uVar611;
        auVar1055._2_62_ = auVar1056._2_62_;
        uVar1798 = CONCAT11(0,bVar610);
        auVar1069._0_14_ = auVar1055._0_14_;
        auVar1069._14_2_ = 0;
        auVar1069._16_48_ = auVar1019._16_48_;
        auVar1068._14_50_ = auVar1069._14_50_;
        auVar1068._0_12_ = auVar1055._0_12_;
        auVar1068._12_2_ = 0;
        auVar1067._12_52_ = auVar1068._12_52_;
        auVar1067._0_10_ = auVar1055._0_10_;
        auVar1067._10_2_ = 0;
        auVar1066._10_54_ = auVar1067._10_54_;
        auVar1066._0_10_ = (unkuint10)0 << 0x40;
        auVar115._56_8_ = 0;
        auVar115._0_56_ = auVar1066._8_56_;
        auVar114._2_58_ = SUB6458(auVar115 << 0x40,6);
        auVar114._0_2_ = auVar1056._2_2_;
        auVar1065._0_4_ = CONCAT22(0,uVar1798);
        auVar1065._4_60_ = auVar114;
        auVar1350._14_2_ = 0;
        auVar1350._0_14_ = auVar630;
        auVar1350._16_48_ = auVar1312._16_48_;
        auVar1349._15_49_ = auVar1350._15_49_;
        auVar1349[0xe] = 0;
        auVar1349._0_14_ = auVar630;
        auVar1348._14_50_ = auVar1349._14_50_;
        auVar1348[0xd] = 0;
        auVar1348._0_13_ = auVar620;
        auVar1347._13_51_ = auVar1348._13_51_;
        auVar1347[0xc] = 0;
        auVar1347._0_12_ = auVar620._0_12_;
        auVar1346._12_52_ = auVar1347._12_52_;
        auVar1346._0_12_ = ZEXT212(uVar546);
        auVar1345._11_53_ = auVar1346._11_53_;
        auVar1345._0_11_ = ZEXT211(uVar546);
        auVar1344._10_54_ = auVar1345._10_54_;
        auVar1344._2_8_ = 0;
        auVar1344._0_2_ = uVar546;
        auVar1343._9_55_ = auVar1344._9_55_;
        auVar1343._2_7_ = 0;
        auVar1343._0_2_ = uVar546;
        auVar118._56_8_ = 0;
        auVar118._0_56_ = auVar1343._8_56_;
        auVar117._57_7_ = 0;
        auVar117._0_57_ = SUB6457(auVar118 << 0x40,7);
        auVar326._58_6_ = 0;
        auVar326._0_58_ = SUB6458(auVar117 << 0x38,6);
        auVar325._59_5_ = 0;
        auVar325._0_59_ = SUB6459(auVar326 << 0x30,5);
        auVar116._60_4_ = 0;
        auVar116._0_60_ = SUB6460(auVar325 << 0x28,4);
        auVar1342._3_61_ = SUB6461(auVar116 << 0x20,3);
        auVar1342[2] = cVar1479;
        auVar1342._0_2_ = uVar546;
        auVar1341._2_62_ = auVar1342._2_62_;
        uVar1816 = CONCAT11(0,bVar466);
        auVar1354._0_14_ = auVar1341._0_14_;
        auVar1354._14_2_ = 0;
        auVar1354._16_48_ = auVar1312._16_48_;
        auVar1353._14_50_ = auVar1354._14_50_;
        auVar1353._0_12_ = auVar1341._0_12_;
        auVar1353._12_2_ = 0;
        auVar1352._12_52_ = auVar1353._12_52_;
        auVar1352._0_10_ = auVar1341._0_10_;
        auVar1352._10_2_ = 0;
        auVar1351._10_54_ = auVar1352._10_54_;
        auVar1351._0_10_ = (unkuint10)0 << 0x40;
        auVar120._56_8_ = 0;
        auVar120._0_56_ = auVar1351._8_56_;
        auVar119._2_58_ = SUB6458(auVar120 << 0x40,6);
        auVar119._0_2_ = auVar1342._2_2_;
        in_ZMM7._0_4_ = CONCAT22(0,uVar1816);
        in_ZMM7._4_60_ = auVar119;
        auVar1501._0_4_ = iVar481 - auVar1065._0_4_;
        auVar1501._4_4_ = iVar489 - auVar114._0_4_;
        auVar1501._8_4_ = iVar1536 - auVar1066._8_4_;
        auVar1501._12_4_ = iVar1676 - auVar1068._12_4_;
        auVar1559._0_4_ = iVar481 - in_ZMM7._0_4_;
        auVar1559._4_4_ = iVar489 - auVar119._0_4_;
        auVar1559._8_4_ = iVar1536 - auVar1351._8_4_;
        auVar1559._12_4_ = iVar1676 - auVar1353._12_4_;
        auVar511 = ZEXT4864(in_ZMM10._16_48_) << 0x80;
        auVar1631[0] = -((char)bVar610 < '\0');
        auVar1631[1] = -((char)bVar610 < '\0');
        auVar1631[2] = -((char)bVar610 < '\0');
        auVar1631[3] = -((char)bVar610 < '\0');
        auVar1631[4] = -(cVar652 < '\0');
        auVar1631[5] = -(cVar652 < '\0');
        auVar1631[6] = -(cVar652 < '\0');
        auVar1631[7] = -(cVar652 < '\0');
        auVar1631[8] = -('\0' < auVar511[8]);
        auVar1631[9] = -('\0' < auVar511[9]);
        auVar1631[10] = -('\0' < auVar511[10]);
        auVar1631[0xb] = -('\0' < auVar511[0xb]);
        auVar1631[0xc] = -('\0' < auVar511[0xc]);
        auVar1631[0xd] = -('\0' < auVar511[0xd]);
        auVar1631[0xe] = -('\0' < auVar511[0xe]);
        auVar1631[0xf] = -('\0' < auVar511[0xf]);
        auVar511 = ZEXT4864(auVar802._16_48_) << 0x80;
        auVar690[0] = -((char)bVar466 < '\0');
        auVar690[1] = -((char)bVar466 < '\0');
        auVar690[2] = -((char)bVar466 < '\0');
        auVar690[3] = -((char)bVar466 < '\0');
        auVar690[4] = -(cVar1479 < '\0');
        auVar690[5] = -(cVar1479 < '\0');
        auVar690[6] = -(cVar1479 < '\0');
        auVar690[7] = -(cVar1479 < '\0');
        auVar690[8] = -('\0' < auVar511[8]);
        auVar690[9] = -('\0' < auVar511[9]);
        auVar690[10] = -('\0' < auVar511[10]);
        auVar690[0xb] = -('\0' < auVar511[0xb]);
        auVar690[0xc] = -('\0' < auVar511[0xc]);
        auVar690[0xd] = -('\0' < auVar511[0xd]);
        auVar690[0xe] = -('\0' < auVar511[0xe]);
        auVar690[0xf] = -('\0' < auVar511[0xf]);
        in_ZMM10._0_16_ = ~auVar1631 & auVar1065._0_16_ | auVar1501 & auVar1631;
        in_ZMM9._0_16_ = auVar1559 & auVar690;
        in_ZMM5._0_16_ = ~auVar690 & in_ZMM7._0_16_ | in_ZMM9._0_16_;
        auVar513._0_4_ = auVar513._0_4_ + in_ZMM10._0_4_;
        auVar513._4_4_ = auVar513._4_4_ + in_ZMM10._4_4_;
        auVar513._8_4_ = auVar513._8_4_ + in_ZMM10._8_4_;
        auVar513._12_4_ = auVar513._12_4_ + in_ZMM10._12_4_;
        auVar575._0_4_ = auVar575._0_4_ + in_ZMM5._0_4_;
        auVar575._4_4_ = auVar575._4_4_ + in_ZMM5._4_4_;
        auVar575._8_4_ = auVar575._8_4_ + in_ZMM5._8_4_;
        auVar575._12_4_ = auVar575._12_4_ + in_ZMM5._12_4_;
        if (uVar476 == 0x10) goto LAB_140dcf64d;
        bVar610 = (char)*(undefined2 *)(puVar478 + 0x11) - (char)*(undefined2 *)(puVar487 + 0x11);
        cVar652 = (char)((ushort)*(undefined2 *)(puVar478 + 0x11) >> 8) -
                  (char)((ushort)*(undefined2 *)(puVar487 + 0x11) >> 8);
        uVar611 = CONCAT11(cVar652,bVar610);
        auVar670._0_12_ = ZEXT212(uVar611);
        auVar670[0xc] = 0;
        auVar679[0xd] = 0;
        auVar679._0_13_ = auVar670;
        bVar466 = (char)*(undefined2 *)(puVar478 + 0x13) - (char)*(undefined2 *)(puVar487 + 0x13);
        cVar1479 = (char)((ushort)*(undefined2 *)(puVar478 + 0x13) >> 8) -
                   (char)((ushort)*(undefined2 *)(puVar487 + 0x13) >> 8);
        uVar546 = CONCAT11(cVar1479,bVar466);
        auVar621._0_12_ = ZEXT212(uVar546);
        auVar621[0xc] = 0;
        auVar631[0xd] = 0;
        auVar631._0_13_ = auVar621;
        *(ushort *)(puVar480 + 0x11) = uVar611;
        *(ushort *)(puVar480 + 0x13) = uVar546;
        auVar1079._14_2_ = 0;
        auVar1079._0_14_ = auVar679;
        auVar1079._16_48_ = auVar1019._16_48_;
        auVar1078._15_49_ = auVar1079._15_49_;
        auVar1078[0xe] = 0;
        auVar1078._0_14_ = auVar679;
        auVar1077._14_50_ = auVar1078._14_50_;
        auVar1077[0xd] = 0;
        auVar1077._0_13_ = auVar670;
        auVar1076._13_51_ = auVar1077._13_51_;
        auVar1076[0xc] = 0;
        auVar1076._0_12_ = auVar670._0_12_;
        auVar1075._12_52_ = auVar1076._12_52_;
        auVar1075._0_12_ = ZEXT212(uVar611);
        auVar1074._11_53_ = auVar1075._11_53_;
        auVar1074._0_11_ = ZEXT211(uVar611);
        auVar1073._10_54_ = auVar1074._10_54_;
        auVar1073._2_8_ = 0;
        auVar1073._0_2_ = uVar611;
        auVar1072._9_55_ = auVar1073._9_55_;
        auVar1072._2_7_ = 0;
        auVar1072._0_2_ = uVar611;
        auVar331._56_8_ = 0;
        auVar331._0_56_ = auVar1072._8_56_;
        auVar330._57_7_ = 0;
        auVar330._0_57_ = SUB6457(auVar331 << 0x40,7);
        auVar329._58_6_ = 0;
        auVar329._0_58_ = SUB6458(auVar330 << 0x38,6);
        auVar328._59_5_ = 0;
        auVar328._0_59_ = SUB6459(auVar329 << 0x30,5);
        auVar327._60_4_ = 0;
        auVar327._0_60_ = SUB6460(auVar328 << 0x28,4);
        auVar1071._3_61_ = SUB6461(auVar327 << 0x20,3);
        auVar1071[2] = cVar652;
        auVar1071._0_2_ = uVar611;
        auVar1070._2_62_ = auVar1071._2_62_;
        uVar1799 = CONCAT11(0,bVar610);
        auVar1084._0_14_ = auVar1070._0_14_;
        auVar1084._14_2_ = 0;
        auVar1084._16_48_ = auVar1019._16_48_;
        auVar1083._14_50_ = auVar1084._14_50_;
        auVar1083._0_12_ = auVar1070._0_12_;
        auVar1083._12_2_ = 0;
        auVar1082._12_52_ = auVar1083._12_52_;
        auVar1082._0_10_ = auVar1070._0_10_;
        auVar1082._10_2_ = 0;
        auVar1081._10_54_ = auVar1082._10_54_;
        auVar1081._0_10_ = (unkuint10)0 << 0x40;
        auVar122._56_8_ = 0;
        auVar122._0_56_ = auVar1081._8_56_;
        auVar121._2_58_ = SUB6458(auVar122 << 0x40,6);
        auVar121._0_2_ = auVar1071._2_2_;
        auVar1080._0_4_ = CONCAT22(0,uVar1799);
        auVar1080._4_60_ = auVar121;
        auVar1364._14_2_ = 0;
        auVar1364._0_14_ = auVar631;
        auVar1364._16_48_ = auVar1312._16_48_;
        auVar1363._15_49_ = auVar1364._15_49_;
        auVar1363[0xe] = 0;
        auVar1363._0_14_ = auVar631;
        auVar1362._14_50_ = auVar1363._14_50_;
        auVar1362[0xd] = 0;
        auVar1362._0_13_ = auVar621;
        auVar1361._13_51_ = auVar1362._13_51_;
        auVar1361[0xc] = 0;
        auVar1361._0_12_ = auVar621._0_12_;
        auVar1360._12_52_ = auVar1361._12_52_;
        auVar1360._0_12_ = ZEXT212(uVar546);
        auVar1359._11_53_ = auVar1360._11_53_;
        auVar1359._0_11_ = ZEXT211(uVar546);
        auVar1358._10_54_ = auVar1359._10_54_;
        auVar1358._2_8_ = 0;
        auVar1358._0_2_ = uVar546;
        auVar1357._9_55_ = auVar1358._9_55_;
        auVar1357._2_7_ = 0;
        auVar1357._0_2_ = uVar546;
        auVar125._56_8_ = 0;
        auVar125._0_56_ = auVar1357._8_56_;
        auVar124._57_7_ = 0;
        auVar124._0_57_ = SUB6457(auVar125 << 0x40,7);
        auVar333._58_6_ = 0;
        auVar333._0_58_ = SUB6458(auVar124 << 0x38,6);
        auVar332._59_5_ = 0;
        auVar332._0_59_ = SUB6459(auVar333 << 0x30,5);
        auVar123._60_4_ = 0;
        auVar123._0_60_ = SUB6460(auVar332 << 0x28,4);
        auVar1356._3_61_ = SUB6461(auVar123 << 0x20,3);
        auVar1356[2] = cVar1479;
        auVar1356._0_2_ = uVar546;
        auVar1355._2_62_ = auVar1356._2_62_;
        uVar1817 = CONCAT11(0,bVar466);
        auVar1368._0_14_ = auVar1355._0_14_;
        auVar1368._14_2_ = 0;
        auVar1368._16_48_ = auVar1312._16_48_;
        auVar1367._14_50_ = auVar1368._14_50_;
        auVar1367._0_12_ = auVar1355._0_12_;
        auVar1367._12_2_ = 0;
        auVar1366._12_52_ = auVar1367._12_52_;
        auVar1366._0_10_ = auVar1355._0_10_;
        auVar1366._10_2_ = 0;
        auVar1365._10_54_ = auVar1366._10_54_;
        auVar1365._0_10_ = (unkuint10)0 << 0x40;
        auVar127._56_8_ = 0;
        auVar127._0_56_ = auVar1365._8_56_;
        auVar126._2_58_ = SUB6458(auVar127 << 0x40,6);
        auVar126._0_2_ = auVar1356._2_2_;
        in_ZMM7._0_4_ = CONCAT22(0,uVar1817);
        in_ZMM7._4_60_ = auVar126;
        auVar1502._0_4_ = iVar481 - auVar1080._0_4_;
        auVar1502._4_4_ = iVar489 - auVar121._0_4_;
        auVar1502._8_4_ = iVar1536 - auVar1081._8_4_;
        auVar1502._12_4_ = iVar1676 - auVar1083._12_4_;
        auVar1560._0_4_ = iVar481 - in_ZMM7._0_4_;
        auVar1560._4_4_ = iVar489 - auVar126._0_4_;
        auVar1560._8_4_ = iVar1536 - auVar1365._8_4_;
        auVar1560._12_4_ = iVar1676 - auVar1367._12_4_;
        auVar511 = ZEXT4864(in_ZMM10._16_48_) << 0x80;
        auVar1632[0] = -((char)bVar610 < '\0');
        auVar1632[1] = -((char)bVar610 < '\0');
        auVar1632[2] = -((char)bVar610 < '\0');
        auVar1632[3] = -((char)bVar610 < '\0');
        auVar1632[4] = -(cVar652 < '\0');
        auVar1632[5] = -(cVar652 < '\0');
        auVar1632[6] = -(cVar652 < '\0');
        auVar1632[7] = -(cVar652 < '\0');
        auVar1632[8] = -('\0' < auVar511[8]);
        auVar1632[9] = -('\0' < auVar511[9]);
        auVar1632[10] = -('\0' < auVar511[10]);
        auVar1632[0xb] = -('\0' < auVar511[0xb]);
        auVar1632[0xc] = -('\0' < auVar511[0xc]);
        auVar1632[0xd] = -('\0' < auVar511[0xd]);
        auVar1632[0xe] = -('\0' < auVar511[0xe]);
        auVar1632[0xf] = -('\0' < auVar511[0xf]);
        auVar511 = ZEXT4864(auVar802._16_48_) << 0x80;
        auVar691[0] = -((char)bVar466 < '\0');
        auVar691[1] = -((char)bVar466 < '\0');
        auVar691[2] = -((char)bVar466 < '\0');
        auVar691[3] = -((char)bVar466 < '\0');
        auVar691[4] = -(cVar1479 < '\0');
        auVar691[5] = -(cVar1479 < '\0');
        auVar691[6] = -(cVar1479 < '\0');
        auVar691[7] = -(cVar1479 < '\0');
        auVar691[8] = -('\0' < auVar511[8]);
        auVar691[9] = -('\0' < auVar511[9]);
        auVar691[10] = -('\0' < auVar511[10]);
        auVar691[0xb] = -('\0' < auVar511[0xb]);
        auVar691[0xc] = -('\0' < auVar511[0xc]);
        auVar691[0xd] = -('\0' < auVar511[0xd]);
        auVar691[0xe] = -('\0' < auVar511[0xe]);
        auVar691[0xf] = -('\0' < auVar511[0xf]);
        in_ZMM10._0_16_ = ~auVar1632 & auVar1080._0_16_ | auVar1502 & auVar1632;
        in_ZMM9._0_16_ = auVar1560 & auVar691;
        in_ZMM5._0_16_ = ~auVar691 & in_ZMM7._0_16_ | in_ZMM9._0_16_;
        auVar513._0_4_ = auVar513._0_4_ + in_ZMM10._0_4_;
        auVar513._4_4_ = auVar513._4_4_ + in_ZMM10._4_4_;
        auVar513._8_4_ = auVar513._8_4_ + in_ZMM10._8_4_;
        auVar513._12_4_ = auVar513._12_4_ + in_ZMM10._12_4_;
        auVar575._0_4_ = auVar575._0_4_ + in_ZMM5._0_4_;
        auVar575._4_4_ = auVar575._4_4_ + in_ZMM5._4_4_;
        auVar575._8_4_ = auVar575._8_4_ + in_ZMM5._8_4_;
        auVar575._12_4_ = auVar575._12_4_ + in_ZMM5._12_4_;
        if (uVar476 == 0x14) goto LAB_140dcf64d;
        bVar610 = (char)*(undefined2 *)(puVar478 + 0x15) - (char)*(undefined2 *)(puVar487 + 0x15);
        cVar652 = (char)((ushort)*(undefined2 *)(puVar478 + 0x15) >> 8) -
                  (char)((ushort)*(undefined2 *)(puVar487 + 0x15) >> 8);
        uVar611 = CONCAT11(cVar652,bVar610);
        auVar671._0_12_ = ZEXT212(uVar611);
        auVar671[0xc] = 0;
        auVar681[0xd] = 0;
        auVar681._0_13_ = auVar671;
        bVar466 = (char)*(undefined2 *)(puVar478 + 0x17) - (char)*(undefined2 *)(puVar487 + 0x17);
        cVar1479 = (char)((ushort)*(undefined2 *)(puVar478 + 0x17) >> 8) -
                   (char)((ushort)*(undefined2 *)(puVar487 + 0x17) >> 8);
        uVar546 = CONCAT11(cVar1479,bVar466);
        auVar622._0_12_ = ZEXT212(uVar546);
        auVar622[0xc] = 0;
        auVar632[0xd] = 0;
        auVar632._0_13_ = auVar622;
        *(ushort *)(puVar480 + 0x15) = uVar611;
        *(ushort *)(puVar480 + 0x17) = uVar546;
        auVar1141._14_2_ = 0;
        auVar1141._0_14_ = auVar681;
        auVar1141._16_48_ = auVar1019._16_48_;
        auVar1140._15_49_ = auVar1141._15_49_;
        auVar1140[0xe] = 0;
        auVar1140._0_14_ = auVar681;
        auVar1139._14_50_ = auVar1140._14_50_;
        auVar1139[0xd] = 0;
        auVar1139._0_13_ = auVar671;
        auVar1138._13_51_ = auVar1139._13_51_;
        auVar1138[0xc] = 0;
        auVar1138._0_12_ = auVar671._0_12_;
        auVar1137._12_52_ = auVar1138._12_52_;
        auVar1137._0_12_ = ZEXT212(uVar611);
        auVar1136._11_53_ = auVar1137._11_53_;
        auVar1136._0_11_ = ZEXT211(uVar611);
        auVar1135._10_54_ = auVar1136._10_54_;
        auVar1135._2_8_ = 0;
        auVar1135._0_2_ = uVar611;
        auVar1134._9_55_ = auVar1135._9_55_;
        auVar1134._2_7_ = 0;
        auVar1134._0_2_ = uVar611;
        auVar429._56_8_ = 0;
        auVar429._0_56_ = auVar1134._8_56_;
        auVar428._57_7_ = 0;
        auVar428._0_57_ = SUB6457(auVar429 << 0x40,7);
        auVar427._58_6_ = 0;
        auVar427._0_58_ = SUB6458(auVar428 << 0x38,6);
        auVar426._59_5_ = 0;
        auVar426._0_59_ = SUB6459(auVar427 << 0x30,5);
        auVar425._60_4_ = 0;
        auVar425._0_60_ = SUB6460(auVar426 << 0x28,4);
        auVar1133._3_61_ = SUB6461(auVar425 << 0x20,3);
        auVar1133[2] = cVar652;
        auVar1133._0_2_ = uVar611;
        auVar1132._2_62_ = auVar1133._2_62_;
        uVar1803 = CONCAT11(0,bVar610);
        auVar1146._0_14_ = auVar1132._0_14_;
        auVar1146._14_2_ = 0;
        auVar1146._16_48_ = auVar1019._16_48_;
        auVar1145._14_50_ = auVar1146._14_50_;
        auVar1145._0_12_ = auVar1132._0_12_;
        auVar1145._12_2_ = 0;
        auVar1144._12_52_ = auVar1145._12_52_;
        auVar1144._0_10_ = auVar1132._0_10_;
        auVar1144._10_2_ = 0;
        auVar1143._10_54_ = auVar1144._10_54_;
        auVar1143._0_10_ = (unkuint10)0 << 0x40;
        auVar178._56_8_ = 0;
        auVar178._0_56_ = auVar1143._8_56_;
        auVar177._2_58_ = SUB6458(auVar178 << 0x40,6);
        auVar177._0_2_ = auVar1133._2_2_;
        auVar1142._0_4_ = CONCAT22(0,uVar1803);
        auVar1142._4_60_ = auVar177;
        auVar1446._14_2_ = 0;
        auVar1446._0_14_ = auVar632;
        auVar1446._16_48_ = auVar1312._16_48_;
        auVar1445._15_49_ = auVar1446._15_49_;
        auVar1445[0xe] = 0;
        auVar1445._0_14_ = auVar632;
        auVar1444._14_50_ = auVar1445._14_50_;
        auVar1444[0xd] = 0;
        auVar1444._0_13_ = auVar622;
        auVar1443._13_51_ = auVar1444._13_51_;
        auVar1443[0xc] = 0;
        auVar1443._0_12_ = auVar622._0_12_;
        auVar1442._12_52_ = auVar1443._12_52_;
        auVar1442._0_12_ = ZEXT212(uVar546);
        auVar1441._11_53_ = auVar1442._11_53_;
        auVar1441._0_11_ = ZEXT211(uVar546);
        auVar1440._10_54_ = auVar1441._10_54_;
        auVar1440._2_8_ = 0;
        auVar1440._0_2_ = uVar546;
        auVar1439._9_55_ = auVar1440._9_55_;
        auVar1439._2_7_ = 0;
        auVar1439._0_2_ = uVar546;
        auVar181._56_8_ = 0;
        auVar181._0_56_ = auVar1439._8_56_;
        auVar180._57_7_ = 0;
        auVar180._0_57_ = SUB6457(auVar181 << 0x40,7);
        auVar431._58_6_ = 0;
        auVar431._0_58_ = SUB6458(auVar180 << 0x38,6);
        auVar430._59_5_ = 0;
        auVar430._0_59_ = SUB6459(auVar431 << 0x30,5);
        auVar179._60_4_ = 0;
        auVar179._0_60_ = SUB6460(auVar430 << 0x28,4);
        auVar1438._3_61_ = SUB6461(auVar179 << 0x20,3);
        auVar1438[2] = cVar1479;
        auVar1438._0_2_ = uVar546;
        auVar1437._2_62_ = auVar1438._2_62_;
        uVar1822 = CONCAT11(0,bVar466);
        auVar1450._0_14_ = auVar1437._0_14_;
        auVar1450._14_2_ = 0;
        auVar1450._16_48_ = auVar1312._16_48_;
        auVar1449._14_50_ = auVar1450._14_50_;
        auVar1449._0_12_ = auVar1437._0_12_;
        auVar1449._12_2_ = 0;
        auVar1448._12_52_ = auVar1449._12_52_;
        auVar1448._0_10_ = auVar1437._0_10_;
        auVar1448._10_2_ = 0;
        auVar1447._10_54_ = auVar1448._10_54_;
        auVar1447._0_10_ = (unkuint10)0 << 0x40;
        auVar183._56_8_ = 0;
        auVar183._0_56_ = auVar1447._8_56_;
        auVar182._2_58_ = SUB6458(auVar183 << 0x40,6);
        auVar182._0_2_ = auVar1438._2_2_;
        in_ZMM7._0_4_ = CONCAT22(0,uVar1822);
        in_ZMM7._4_60_ = auVar182;
        auVar1512._0_4_ = iVar481 - auVar1142._0_4_;
        auVar1512._4_4_ = iVar489 - auVar177._0_4_;
        auVar1512._8_4_ = iVar1536 - auVar1143._8_4_;
        auVar1512._12_4_ = iVar1676 - auVar1145._12_4_;
        auVar1567._0_4_ = iVar481 - in_ZMM7._0_4_;
        auVar1567._4_4_ = iVar489 - auVar182._0_4_;
        auVar1567._8_4_ = iVar1536 - auVar1447._8_4_;
        auVar1567._12_4_ = iVar1676 - auVar1449._12_4_;
        auVar511 = ZEXT4864(in_ZMM10._16_48_) << 0x80;
        auVar1638[0] = -((char)bVar610 < '\0');
        auVar1638[1] = -((char)bVar610 < '\0');
        auVar1638[2] = -((char)bVar610 < '\0');
        auVar1638[3] = -((char)bVar610 < '\0');
        auVar1638[4] = -(cVar652 < '\0');
        auVar1638[5] = -(cVar652 < '\0');
        auVar1638[6] = -(cVar652 < '\0');
        auVar1638[7] = -(cVar652 < '\0');
        auVar1638[8] = -('\0' < auVar511[8]);
        auVar1638[9] = -('\0' < auVar511[9]);
        auVar1638[10] = -('\0' < auVar511[10]);
        auVar1638[0xb] = -('\0' < auVar511[0xb]);
        auVar1638[0xc] = -('\0' < auVar511[0xc]);
        auVar1638[0xd] = -('\0' < auVar511[0xd]);
        auVar1638[0xe] = -('\0' < auVar511[0xe]);
        auVar1638[0xf] = -('\0' < auVar511[0xf]);
        auVar511 = ZEXT4864(auVar802._16_48_) << 0x80;
        auVar695[0] = -((char)bVar466 < '\0');
        auVar695[1] = -((char)bVar466 < '\0');
        auVar695[2] = -((char)bVar466 < '\0');
        auVar695[3] = -((char)bVar466 < '\0');
        auVar695[4] = -(cVar1479 < '\0');
        auVar695[5] = -(cVar1479 < '\0');
        auVar695[6] = -(cVar1479 < '\0');
        auVar695[7] = -(cVar1479 < '\0');
        auVar695[8] = -('\0' < auVar511[8]);
        auVar695[9] = -('\0' < auVar511[9]);
        auVar695[10] = -('\0' < auVar511[10]);
        auVar695[0xb] = -('\0' < auVar511[0xb]);
        auVar695[0xc] = -('\0' < auVar511[0xc]);
        auVar695[0xd] = -('\0' < auVar511[0xd]);
        auVar695[0xe] = -('\0' < auVar511[0xe]);
        auVar695[0xf] = -('\0' < auVar511[0xf]);
        in_ZMM10._0_16_ = ~auVar1638 & auVar1142._0_16_ | auVar1512 & auVar1638;
        in_ZMM9._0_16_ = auVar1567 & auVar695;
        in_ZMM5._0_16_ = ~auVar695 & in_ZMM7._0_16_ | in_ZMM9._0_16_;
        uVar477 = auVar513._0_4_ + in_ZMM10._0_4_;
        iVar525 = auVar513._4_4_ + in_ZMM10._4_4_;
        auVar522._0_8_ = CONCAT44(iVar525,uVar477);
        auVar523._8_4_ = auVar513._8_4_ + in_ZMM10._8_4_;
        auVar523._0_8_ = auVar522._0_8_;
        auVar523._12_4_ = 0;
        auVar523._16_48_ = in_ZMM0._16_48_;
        auVar522._12_52_ = auVar523._12_52_;
        auVar522._8_4_ = iVar525;
        auVar514._8_56_ = auVar522._8_56_;
        auVar514._0_8_ = CONCAT44(0,uVar477);
        uVar477 = auVar575._0_4_ + in_ZMM5._0_4_;
        iVar525 = auVar575._4_4_ + in_ZMM5._4_4_;
        auVar583._0_8_ = CONCAT44(iVar525,uVar477);
        auVar584._8_4_ = auVar575._8_4_ + in_ZMM5._8_4_;
        auVar584._0_8_ = auVar583._0_8_;
        auVar584._12_4_ = 0;
        auVar584._16_48_ = auVar574._16_48_;
        auVar583._12_52_ = auVar584._12_52_;
        auVar583._8_4_ = iVar525;
        auVar582._8_56_ = auVar583._8_56_;
        auVar511._0_8_ = CONCAT44(0,uVar477);
        auVar582._0_8_ = auVar511._0_8_;
        auVar557 = auVar582._0_16_;
        if (uVar476 != 0x18) {
          bVar610 = (char)*(undefined2 *)(puVar478 + 0x19) - (char)*(undefined2 *)(puVar487 + 0x19);
          cVar652 = (char)((ushort)*(undefined2 *)(puVar478 + 0x19) >> 8) -
                    (char)((ushort)*(undefined2 *)(puVar487 + 0x19) >> 8);
          uVar611 = CONCAT11(cVar652,bVar610);
          auVar672._0_12_ = ZEXT212(uVar611);
          auVar672[0xc] = 0;
          auVar682[0xd] = 0;
          auVar682._0_13_ = auVar672;
          bVar466 = (char)*(undefined2 *)(puVar478 + 0x1b) - (char)*(undefined2 *)(puVar487 + 0x1b);
          cVar1479 = (char)((ushort)*(undefined2 *)(puVar478 + 0x1b) >> 8) -
                     (char)((ushort)*(undefined2 *)(puVar487 + 0x1b) >> 8);
          uVar546 = CONCAT11(cVar1479,bVar466);
          auVar623._0_12_ = ZEXT212(uVar546);
          auVar623[0xc] = 0;
          auVar633[0xd] = 0;
          auVar633._0_13_ = auVar623;
          *(ushort *)(puVar480 + 0x19) = uVar611;
          *(ushort *)(puVar480 + 0x1b) = uVar546;
          auVar1156._14_2_ = 0;
          auVar1156._0_14_ = auVar682;
          auVar1156._16_48_ = auVar1019._16_48_;
          auVar1155._15_49_ = auVar1156._15_49_;
          auVar1155[0xe] = 0;
          auVar1155._0_14_ = auVar682;
          auVar1154._14_50_ = auVar1155._14_50_;
          auVar1154[0xd] = 0;
          auVar1154._0_13_ = auVar672;
          auVar1153._13_51_ = auVar1154._13_51_;
          auVar1153[0xc] = 0;
          auVar1153._0_12_ = auVar672._0_12_;
          auVar1152._12_52_ = auVar1153._12_52_;
          auVar1152._0_12_ = ZEXT212(uVar611);
          auVar1151._11_53_ = auVar1152._11_53_;
          auVar1151._0_11_ = ZEXT211(uVar611);
          auVar1150._10_54_ = auVar1151._10_54_;
          auVar1150._2_8_ = 0;
          auVar1150._0_2_ = uVar611;
          auVar1149._9_55_ = auVar1150._9_55_;
          auVar1149._2_7_ = 0;
          auVar1149._0_2_ = uVar611;
          auVar436._56_8_ = 0;
          auVar436._0_56_ = auVar1149._8_56_;
          auVar435._57_7_ = 0;
          auVar435._0_57_ = SUB6457(auVar436 << 0x40,7);
          auVar434._58_6_ = 0;
          auVar434._0_58_ = SUB6458(auVar435 << 0x38,6);
          auVar433._59_5_ = 0;
          auVar433._0_59_ = SUB6459(auVar434 << 0x30,5);
          auVar432._60_4_ = 0;
          auVar432._0_60_ = SUB6460(auVar433 << 0x28,4);
          auVar1148._3_61_ = SUB6461(auVar432 << 0x20,3);
          auVar1148[2] = cVar652;
          auVar1148._0_2_ = uVar611;
          auVar1147._2_62_ = auVar1148._2_62_;
          uVar1804 = CONCAT11(0,bVar610);
          auVar1161._0_14_ = auVar1147._0_14_;
          auVar1161._14_2_ = 0;
          auVar1161._16_48_ = auVar1019._16_48_;
          auVar1160._14_50_ = auVar1161._14_50_;
          auVar1160._0_12_ = auVar1147._0_12_;
          auVar1160._12_2_ = 0;
          auVar1159._12_52_ = auVar1160._12_52_;
          auVar1159._0_10_ = auVar1147._0_10_;
          auVar1159._10_2_ = 0;
          auVar1158._10_54_ = auVar1159._10_54_;
          auVar1158._0_10_ = (unkuint10)0 << 0x40;
          auVar185._56_8_ = 0;
          auVar185._0_56_ = auVar1158._8_56_;
          auVar184._2_58_ = SUB6458(auVar185 << 0x40,6);
          auVar184._0_2_ = auVar1148._2_2_;
          auVar1157._0_4_ = CONCAT22(0,uVar1804);
          auVar1157._4_60_ = auVar184;
          auVar1460._14_2_ = 0;
          auVar1460._0_14_ = auVar633;
          auVar1460._16_48_ = auVar1312._16_48_;
          auVar1459._15_49_ = auVar1460._15_49_;
          auVar1459[0xe] = 0;
          auVar1459._0_14_ = auVar633;
          auVar1458._14_50_ = auVar1459._14_50_;
          auVar1458[0xd] = 0;
          auVar1458._0_13_ = auVar623;
          auVar1457._13_51_ = auVar1458._13_51_;
          auVar1457[0xc] = 0;
          auVar1457._0_12_ = auVar623._0_12_;
          auVar1456._12_52_ = auVar1457._12_52_;
          auVar1456._0_12_ = ZEXT212(uVar546);
          auVar1455._11_53_ = auVar1456._11_53_;
          auVar1455._0_11_ = ZEXT211(uVar546);
          auVar1454._10_54_ = auVar1455._10_54_;
          auVar1454._2_8_ = 0;
          auVar1454._0_2_ = uVar546;
          auVar1453._9_55_ = auVar1454._9_55_;
          auVar1453._2_7_ = 0;
          auVar1453._0_2_ = uVar546;
          auVar188._56_8_ = 0;
          auVar188._0_56_ = auVar1453._8_56_;
          auVar187._57_7_ = 0;
          auVar187._0_57_ = SUB6457(auVar188 << 0x40,7);
          auVar438._58_6_ = 0;
          auVar438._0_58_ = SUB6458(auVar187 << 0x38,6);
          auVar437._59_5_ = 0;
          auVar437._0_59_ = SUB6459(auVar438 << 0x30,5);
          auVar186._60_4_ = 0;
          auVar186._0_60_ = SUB6460(auVar437 << 0x28,4);
          auVar1452._3_61_ = SUB6461(auVar186 << 0x20,3);
          auVar1452[2] = cVar1479;
          auVar1452._0_2_ = uVar546;
          auVar1451._2_62_ = auVar1452._2_62_;
          uVar1823 = CONCAT11(0,bVar466);
          auVar1464._0_14_ = auVar1451._0_14_;
          auVar1464._14_2_ = 0;
          auVar1464._16_48_ = auVar1312._16_48_;
          auVar1463._14_50_ = auVar1464._14_50_;
          auVar1463._0_12_ = auVar1451._0_12_;
          auVar1463._12_2_ = 0;
          auVar1462._12_52_ = auVar1463._12_52_;
          auVar1462._0_10_ = auVar1451._0_10_;
          auVar1462._10_2_ = 0;
          auVar1461._10_54_ = auVar1462._10_54_;
          auVar1461._0_10_ = (unkuint10)0 << 0x40;
          auVar190._56_8_ = 0;
          auVar190._0_56_ = auVar1461._8_56_;
          auVar189._2_58_ = SUB6458(auVar190 << 0x40,6);
          auVar189._0_2_ = auVar1452._2_2_;
          in_ZMM7._0_4_ = CONCAT22(0,uVar1823);
          in_ZMM7._4_60_ = auVar189;
          auVar1485._0_4_ = iVar481 - auVar1157._0_4_;
          auVar1485._4_4_ = iVar489 - auVar184._0_4_;
          auVar1485._8_4_ = iVar1536 - auVar1158._8_4_;
          auVar1568._0_4_ = iVar481 - in_ZMM7._0_4_;
          auVar1568._4_4_ = iVar489 - auVar189._0_4_;
          auVar1568._8_4_ = iVar1536 - auVar1461._8_4_;
          auVar1568._12_4_ = iVar1676 - auVar1463._12_4_;
          auVar579 = ZEXT4864(in_ZMM10._16_48_) << 0x80;
          auVar1616[0] = -((char)bVar610 < '\0');
          auVar1616[1] = -((char)bVar610 < '\0');
          auVar1616[2] = -((char)bVar610 < '\0');
          auVar1616[3] = -((char)bVar610 < '\0');
          auVar1616[4] = -(cVar652 < '\0');
          auVar1616[5] = -(cVar652 < '\0');
          auVar1616[6] = -(cVar652 < '\0');
          auVar1616[7] = -(cVar652 < '\0');
          auVar1616[8] = -('\0' < auVar579[8]);
          auVar1616[9] = -('\0' < auVar579[9]);
          auVar1616[10] = -('\0' < auVar579[10]);
          auVar1616[0xb] = -('\0' < auVar579[0xb]);
          auVar579 = ZEXT4864(auVar802._16_48_) << 0x80;
          auVar663[0] = -((char)bVar466 < '\0');
          auVar663[1] = -((char)bVar466 < '\0');
          auVar663[2] = -((char)bVar466 < '\0');
          auVar663[3] = -((char)bVar466 < '\0');
          auVar663[4] = -(cVar1479 < '\0');
          auVar663[5] = -(cVar1479 < '\0');
          auVar663[6] = -(cVar1479 < '\0');
          auVar663[7] = -(cVar1479 < '\0');
          auVar663[8] = -('\0' < auVar579[8]);
          auVar663[9] = -('\0' < auVar579[9]);
          auVar663[10] = -('\0' < auVar579[10]);
          auVar663[0xb] = -('\0' < auVar579[0xb]);
          auVar696[0xc] = -('\0' < auVar579[0xc]);
          auVar696._0_12_ = auVar663;
          auVar696[0xd] = -('\0' < auVar579[0xd]);
          auVar696[0xe] = -('\0' < auVar579[0xe]);
          auVar696[0xf] = -('\0' < auVar579[0xf]);
          auVar1673._0_12_ = ~auVar1616 & auVar1157._0_12_ | auVar1485 & auVar1616;
          in_ZMM9._0_16_ = auVar1568 & auVar696;
          auVar867._0_12_ = ~auVar663 & in_ZMM7._0_12_ | in_ZMM9._0_12_;
          auVar1673._12_4_ = 0;
          auVar1673._16_48_ = in_ZMM10._16_48_;
          auVar1672._12_52_ = auVar1673._12_52_;
          auVar1672._0_8_ = auVar1673._0_8_;
          auVar1672._8_4_ = auVar1673._4_4_;
          in_ZMM10._8_56_ = auVar1672._8_56_;
          in_ZMM10._0_8_ = CONCAT44(0,auVar1673._0_4_);
          auVar867._12_4_ = 0;
          auVar867._16_48_ = auVar802._16_48_;
          auVar866._12_52_ = auVar867._12_52_;
          auVar866._0_8_ = auVar867._0_8_;
          auVar866._8_4_ = auVar867._4_4_;
          in_ZMM5._8_56_ = auVar866._8_56_;
          in_ZMM5._0_8_ = CONCAT44(0,auVar867._0_4_);
          auVar514._0_8_ = auVar514._0_8_ + in_ZMM10._0_8_;
          auVar514._8_8_ = auVar522._8_8_ + auVar1672._8_8_;
          auVar514._16_48_ = in_ZMM0._16_48_;
          auVar557._0_8_ = auVar511._0_8_ + in_ZMM5._0_8_;
          auVar557._8_8_ = auVar583._8_8_ + auVar866._8_8_;
          if (uVar476 != 0x1c) {
            bVar610 = (char)*(undefined2 *)(puVar478 + 0x1d) -
                      (char)*(undefined2 *)(puVar487 + 0x1d);
            cVar652 = (char)((ushort)*(undefined2 *)(puVar478 + 0x1d) >> 8) -
                      (char)((ushort)*(undefined2 *)(puVar487 + 0x1d) >> 8);
            uVar611 = CONCAT11(cVar652,bVar610);
            auVar673._0_12_ = ZEXT212(uVar611);
            auVar673[0xc] = 0;
            auVar683[0xd] = 0;
            auVar683._0_13_ = auVar673;
            bVar466 = (char)*(undefined2 *)(puVar478 + 0x1f) -
                      (char)*(undefined2 *)(puVar487 + 0x1f);
            cVar1479 = (char)((ushort)*(undefined2 *)(puVar478 + 0x1f) >> 8) -
                       (char)((ushort)*(undefined2 *)(puVar487 + 0x1f) >> 8);
            uVar546 = CONCAT11(cVar1479,bVar466);
            auVar624._0_12_ = ZEXT212(uVar546);
            auVar624[0xc] = 0;
            auVar634[0xd] = 0;
            auVar634._0_13_ = auVar624;
            *(ushort *)(puVar480 + 0x1d) = uVar611;
            *(ushort *)(puVar480 + 0x1f) = uVar546;
            auVar1171._14_2_ = 0;
            auVar1171._0_14_ = auVar683;
            auVar1171._16_48_ = auVar1019._16_48_;
            auVar1170._15_49_ = auVar1171._15_49_;
            auVar1170[0xe] = 0;
            auVar1170._0_14_ = auVar683;
            auVar1169._14_50_ = auVar1170._14_50_;
            auVar1169[0xd] = 0;
            auVar1169._0_13_ = auVar673;
            auVar1168._13_51_ = auVar1169._13_51_;
            auVar1168[0xc] = 0;
            auVar1168._0_12_ = auVar673._0_12_;
            auVar1167._12_52_ = auVar1168._12_52_;
            auVar1167._0_12_ = ZEXT212(uVar611);
            auVar1166._11_53_ = auVar1167._11_53_;
            auVar1166._0_11_ = ZEXT211(uVar611);
            auVar1165._10_54_ = auVar1166._10_54_;
            auVar1165._2_8_ = 0;
            auVar1165._0_2_ = uVar611;
            auVar1164._9_55_ = auVar1165._9_55_;
            auVar1164._2_7_ = 0;
            auVar1164._0_2_ = uVar611;
            auVar443._56_8_ = 0;
            auVar443._0_56_ = auVar1164._8_56_;
            auVar442._57_7_ = 0;
            auVar442._0_57_ = SUB6457(auVar443 << 0x40,7);
            auVar441._58_6_ = 0;
            auVar441._0_58_ = SUB6458(auVar442 << 0x38,6);
            auVar440._59_5_ = 0;
            auVar440._0_59_ = SUB6459(auVar441 << 0x30,5);
            auVar439._60_4_ = 0;
            auVar439._0_60_ = SUB6460(auVar440 << 0x28,4);
            auVar1163._3_61_ = SUB6461(auVar439 << 0x20,3);
            auVar1163[2] = cVar652;
            auVar1163._0_2_ = uVar611;
            auVar1162._2_62_ = auVar1163._2_62_;
            uVar1805 = CONCAT11(0,bVar610);
            auVar1176._0_14_ = auVar1162._0_14_;
            auVar1176._14_2_ = 0;
            auVar1176._16_48_ = auVar1019._16_48_;
            auVar1175._14_50_ = auVar1176._14_50_;
            auVar1175._0_12_ = auVar1162._0_12_;
            auVar1175._12_2_ = 0;
            auVar1174._12_52_ = auVar1175._12_52_;
            auVar1174._0_10_ = auVar1162._0_10_;
            auVar1174._10_2_ = 0;
            auVar1173._10_54_ = auVar1174._10_54_;
            auVar1173._0_10_ = (unkuint10)0 << 0x40;
            auVar192._56_8_ = 0;
            auVar192._0_56_ = auVar1173._8_56_;
            auVar191._2_58_ = SUB6458(auVar192 << 0x40,6);
            auVar191._0_2_ = auVar1163._2_2_;
            auVar1172._0_4_ = CONCAT22(0,uVar1805);
            auVar1172._4_60_ = auVar191;
            auVar1474._14_2_ = 0;
            auVar1474._0_14_ = auVar634;
            auVar1474._16_48_ = auVar1312._16_48_;
            auVar1473._15_49_ = auVar1474._15_49_;
            auVar1473[0xe] = 0;
            auVar1473._0_14_ = auVar634;
            auVar1472._14_50_ = auVar1473._14_50_;
            auVar1472[0xd] = 0;
            auVar1472._0_13_ = auVar624;
            auVar1471._13_51_ = auVar1472._13_51_;
            auVar1471[0xc] = 0;
            auVar1471._0_12_ = auVar624._0_12_;
            auVar1470._12_52_ = auVar1471._12_52_;
            auVar1470._0_12_ = ZEXT212(uVar546);
            auVar1469._11_53_ = auVar1470._11_53_;
            auVar1469._0_11_ = ZEXT211(uVar546);
            auVar1468._10_54_ = auVar1469._10_54_;
            auVar1468._2_8_ = 0;
            auVar1468._0_2_ = uVar546;
            auVar1467._9_55_ = auVar1468._9_55_;
            auVar1467._2_7_ = 0;
            auVar1467._0_2_ = uVar546;
            auVar195._56_8_ = 0;
            auVar195._0_56_ = auVar1467._8_56_;
            auVar194._57_7_ = 0;
            auVar194._0_57_ = SUB6457(auVar195 << 0x40,7);
            auVar445._58_6_ = 0;
            auVar445._0_58_ = SUB6458(auVar194 << 0x38,6);
            auVar444._59_5_ = 0;
            auVar444._0_59_ = SUB6459(auVar445 << 0x30,5);
            auVar193._60_4_ = 0;
            auVar193._0_60_ = SUB6460(auVar444 << 0x28,4);
            auVar1466._3_61_ = SUB6461(auVar193 << 0x20,3);
            auVar1466[2] = cVar1479;
            auVar1466._0_2_ = uVar546;
            auVar1465._2_62_ = auVar1466._2_62_;
            uVar1824 = CONCAT11(0,bVar466);
            auVar1478._0_14_ = auVar1465._0_14_;
            auVar1478._14_2_ = 0;
            auVar1478._16_48_ = auVar1312._16_48_;
            auVar1477._14_50_ = auVar1478._14_50_;
            auVar1477._0_12_ = auVar1465._0_12_;
            auVar1477._12_2_ = 0;
            auVar1476._12_52_ = auVar1477._12_52_;
            auVar1476._0_10_ = auVar1465._0_10_;
            auVar1476._10_2_ = 0;
            auVar1475._10_54_ = auVar1476._10_54_;
            auVar1475._0_10_ = (unkuint10)0 << 0x40;
            auVar197._56_8_ = 0;
            auVar197._0_56_ = auVar1475._8_56_;
            auVar196._2_58_ = SUB6458(auVar197 << 0x40,6);
            auVar196._0_2_ = auVar1466._2_2_;
            in_ZMM7._0_4_ = CONCAT22(0,uVar1824);
            in_ZMM7._4_60_ = auVar196;
            auVar1486._0_4_ = iVar481 - auVar1172._0_4_;
            auVar1486._4_4_ = iVar489 - auVar191._0_4_;
            auVar1486._8_4_ = iVar1536 - auVar1173._8_4_;
            auVar585._0_4_ = iVar481 - in_ZMM7._0_4_;
            auVar585._4_4_ = iVar489 - auVar196._0_4_;
            auVar585._8_4_ = iVar1536 - auVar1475._8_4_;
            auVar511 = ZEXT4864(in_ZMM9._16_48_) << 0x80;
            auVar1545[0] = -((char)bVar610 < '\0');
            auVar1545[1] = -((char)bVar610 < '\0');
            auVar1545[2] = -((char)bVar610 < '\0');
            auVar1545[3] = -((char)bVar610 < '\0');
            auVar1545[4] = -(cVar652 < '\0');
            auVar1545[5] = -(cVar652 < '\0');
            auVar1545[6] = -(cVar652 < '\0');
            auVar1545[7] = -(cVar652 < '\0');
            auVar1545[8] = -('\0' < auVar511[8]);
            auVar1545[9] = -('\0' < auVar511[9]);
            auVar1545[10] = -('\0' < auVar511[10]);
            auVar1545[0xb] = -('\0' < auVar511[0xb]);
            auVar511 = ZEXT4864(auVar802._16_48_) << 0x80;
            auVar664[0] = -((char)bVar466 < '\0');
            auVar664[1] = -((char)bVar466 < '\0');
            auVar664[2] = -((char)bVar466 < '\0');
            auVar664[3] = -((char)bVar466 < '\0');
            auVar664[4] = -(cVar1479 < '\0');
            auVar664[5] = -(cVar1479 < '\0');
            auVar664[6] = -(cVar1479 < '\0');
            auVar664[7] = -(cVar1479 < '\0');
            auVar664[8] = -('\0' < auVar511[8]);
            auVar664[9] = -('\0' < auVar511[9]);
            auVar664[10] = -('\0' < auVar511[10]);
            auVar664[0xb] = -('\0' < auVar511[0xb]);
            auVar1600._0_12_ = ~auVar1545 & auVar1172._0_12_ | auVar1486 & auVar1545;
            auVar869._0_12_ = ~auVar664 & in_ZMM7._0_12_ | auVar585 & auVar664;
            auVar1600._12_4_ = 0;
            auVar1600._16_48_ = in_ZMM9._16_48_;
            auVar1599._12_52_ = auVar1600._12_52_;
            auVar1599._0_8_ = auVar1600._0_8_;
            auVar1599._8_4_ = auVar1600._4_4_;
            in_ZMM9._8_56_ = auVar1599._8_56_;
            in_ZMM9._0_8_ = CONCAT44(0,auVar1600._0_4_);
            auVar869._12_4_ = 0;
            auVar869._16_48_ = auVar802._16_48_;
            auVar868._12_52_ = auVar869._12_52_;
            auVar868._0_8_ = auVar869._0_8_;
            auVar868._8_4_ = auVar869._4_4_;
            in_ZMM5._8_56_ = auVar868._8_56_;
            in_ZMM5._0_8_ = CONCAT44(0,auVar869._0_4_);
            auVar514._0_8_ = auVar514._0_8_ + in_ZMM9._0_8_;
            auVar514._8_8_ = auVar514._8_8_ + auVar1599._8_8_;
            auVar557._0_8_ = auVar557._0_8_ + in_ZMM5._0_8_;
            auVar557._8_8_ = auVar557._8_8_ + auVar868._8_8_;
          }
        }
      }
      in_ZMM0._0_8_ = auVar514._0_8_ + auVar557._0_8_;
      in_ZMM0._16_48_ = auVar514._16_48_;
      in_ZMM0._8_8_ = auVar514._8_8_ + auVar557._8_8_;
      puVar479 = puVar484 + auVar503._0_8_;
      puVar475 = puVar464 + auVar503._0_8_;
      pbVar472 = pbVar472 + auVar503._0_8_;
      auVar511._0_8_ = in_ZMM0._8_8_ + in_ZMM0._0_8_;
      if (uVar476 == uVar486) goto LAB_140dcf6bd;
    }
    lVar482 = uVar474 - auVar503._0_8_;
    do {
      bVar466 = *puVar479 - *puVar475;
      *pbVar472 = bVar466;
      uVar486 = 0x100 - bVar466;
      if (-1 < (char)bVar466) {
        uVar486 = (uint)bVar466;
      }
      auVar511._0_8_ = auVar511._0_8_ + uVar486;
      pbVar472 = pbVar472 + 1;
      puVar475 = puVar475 + 1;
      puVar479 = puVar479 + 1;
      lVar482 = lVar482 + -1;
    } while (lVar482 != 0);
  }
LAB_140dcf6bd:
  iVar1536 = _UNK_1531f2ba8;
  iVar489 = _UNK_1531f2ba4;
  iVar481 = ___xmm_00000000000000000000010000000100;
  auVar883 = ___xmm_80000000800000008000000080000000;
  auVar503._0_8_ = uVar13 - uVar474;
  if (uVar474 <= uVar13 && auVar503._0_8_ != 0) {
    if (1 < auVar503._0_8_) {
      auVar579._0_8_ = auVar503._0_8_ & 0xfffffffffffffffe;
      puVar487 = puVar487 + auVar579._0_8_;
      puVar478 = puVar478 + auVar579._0_8_;
      uVar474 = uVar474 + auVar579._0_8_;
      auVar517._16_48_ = in_ZMM0._16_48_;
      auVar517._8_8_ = 0;
      auVar517._0_8_ = auVar511._0_8_;
      auVar511._0_8_ = 0;
      do {
        uVar546 = *(ushort *)(puVar475 + auVar511._0_8_);
        auVar1665._16_48_ = in_ZMM10._16_48_;
        auVar1665._0_16_ = ZEXT216(uVar546);
        auVar1664._15_49_ = auVar1665._15_49_;
        auVar1664._0_15_ = ZEXT215(uVar546);
        auVar1663._14_50_ = auVar1664._14_50_;
        auVar1663._0_14_ = ZEXT214(uVar546);
        auVar1662._13_51_ = auVar1663._13_51_;
        auVar1662._0_13_ = ZEXT213(uVar546);
        auVar1661._12_52_ = auVar1662._12_52_;
        auVar1661._0_12_ = ZEXT212(uVar546);
        auVar1660._11_53_ = auVar1661._11_53_;
        auVar1660._0_11_ = ZEXT211(uVar546);
        auVar1659._10_54_ = auVar1660._10_54_;
        auVar1659._2_8_ = 0;
        auVar1659._0_2_ = uVar546;
        auVar1658._9_55_ = auVar1659._9_55_;
        auVar1658._2_7_ = 0;
        auVar1658._0_2_ = uVar546;
        auVar378._56_8_ = 0;
        auVar378._0_56_ = auVar1658._8_56_;
        auVar377._58_6_ = 0;
        auVar377._0_58_ = SUB6458(auVar378 << 0x40,6);
        auVar376[0x3c] = 0;
        auVar376._0_60_ = SUB6460(auVar377 << 0x30,4);
        auVar1657[2] = (char)(uVar546 >> 8);
        auVar1657._0_2_ = uVar546;
        auVar1657._3_61_ = auVar376 << 8;
        auVar1656._2_62_ = auVar1657._2_62_;
        auVar1656._0_2_ = uVar546 & 0xff;
        auVar1669._0_14_ = auVar1656._0_14_;
        auVar1669._14_2_ = 0;
        auVar1669._16_48_ = auVar1665._16_48_;
        auVar1668._14_50_ = auVar1669._14_50_;
        auVar1668._0_12_ = auVar1656._0_12_;
        auVar1668._12_2_ = 0;
        auVar1667._12_52_ = auVar1668._12_52_;
        auVar1667._0_10_ = auVar1656._0_10_;
        auVar1667._10_2_ = 0;
        auVar1666._10_54_ = auVar1667._10_54_;
        auVar1666._0_10_ = (unkuint10)0 << 0x40;
        auVar379._56_2_ = 0;
        auVar379._0_56_ = auVar1666._8_56_;
        auVar148._2_58_ = auVar379 << 0x10;
        auVar148._0_2_ = auVar1657._2_2_;
        uVar611 = *(ushort *)(puVar464 + auVar511._0_8_);
        auVar816._16_48_ = in_ZMM5._16_48_;
        auVar1386._16_48_ = in_ZMM7._16_48_;
        auVar1386._0_16_ = ZEXT216(uVar611);
        auVar1385._15_49_ = auVar1386._15_49_;
        auVar1385._0_15_ = ZEXT215(uVar611);
        auVar1384._14_50_ = auVar1385._14_50_;
        auVar1384._0_14_ = ZEXT214(uVar611);
        auVar1383._13_51_ = auVar1384._13_51_;
        auVar1383._0_13_ = ZEXT213(uVar611);
        auVar1382._12_52_ = auVar1383._12_52_;
        auVar1382._0_12_ = ZEXT212(uVar611);
        auVar1381._11_53_ = auVar1382._11_53_;
        auVar1381._0_11_ = ZEXT211(uVar611);
        auVar1380._10_54_ = auVar1381._10_54_;
        auVar1380._2_8_ = 0;
        auVar1380._0_2_ = uVar611;
        auVar1379._9_55_ = auVar1380._9_55_;
        auVar1379._2_7_ = 0;
        auVar1379._0_2_ = uVar611;
        auVar382._56_8_ = 0;
        auVar382._0_56_ = auVar1379._8_56_;
        auVar381._58_6_ = 0;
        auVar381._0_58_ = SUB6458(auVar382 << 0x40,6);
        auVar380[0x3c] = 0;
        auVar380._0_60_ = SUB6460(auVar381 << 0x30,4);
        auVar1378[2] = (char)(uVar611 >> 8);
        auVar1378._0_2_ = uVar611;
        auVar1378._3_61_ = auVar380 << 8;
        auVar1377._2_62_ = auVar1378._2_62_;
        auVar1377._0_2_ = uVar611 & 0xff;
        auVar1390._0_14_ = auVar1377._0_14_;
        auVar1390._14_2_ = 0;
        auVar1390._16_48_ = auVar1386._16_48_;
        auVar1389._14_50_ = auVar1390._14_50_;
        auVar1389._0_12_ = auVar1377._0_12_;
        auVar1389._12_2_ = 0;
        auVar1388._12_52_ = auVar1389._12_52_;
        auVar1388._0_10_ = auVar1377._0_10_;
        auVar1388._10_2_ = 0;
        auVar1387._10_54_ = auVar1388._10_54_;
        auVar1387._0_10_ = (unkuint10)0 << 0x40;
        auVar383._56_2_ = 0;
        auVar383._0_56_ = auVar1387._8_56_;
        auVar149._2_58_ = auVar383 << 0x10;
        auVar149._0_2_ = auVar1378._2_2_;
        uVar12 = *(ushort *)(puVar484 + auVar511._0_8_);
        auVar1592._16_48_ = in_ZMM9._16_48_;
        auVar1592._0_16_ = ZEXT216(uVar12);
        auVar1591._15_49_ = auVar1592._15_49_;
        auVar1591._0_15_ = ZEXT215(uVar12);
        auVar1590._14_50_ = auVar1591._14_50_;
        auVar1590._0_14_ = ZEXT214(uVar12);
        auVar1589._13_51_ = auVar1590._13_51_;
        auVar1589._0_13_ = ZEXT213(uVar12);
        auVar1588._12_52_ = auVar1589._12_52_;
        auVar1588._0_12_ = ZEXT212(uVar12);
        auVar1587._11_53_ = auVar1588._11_53_;
        auVar1587._0_11_ = ZEXT211(uVar12);
        auVar1586._10_54_ = auVar1587._10_54_;
        auVar1586._2_8_ = 0;
        auVar1586._0_2_ = uVar12;
        auVar1585._9_55_ = auVar1586._9_55_;
        auVar1585._2_7_ = 0;
        auVar1585._0_2_ = uVar12;
        auVar386._56_8_ = 0;
        auVar386._0_56_ = auVar1585._8_56_;
        auVar385._58_6_ = 0;
        auVar385._0_58_ = SUB6458(auVar386 << 0x40,6);
        auVar384[0x3c] = 0;
        auVar384._0_60_ = SUB6460(auVar385 << 0x30,4);
        auVar1584[2] = (char)(uVar12 >> 8);
        auVar1584._0_2_ = uVar12;
        auVar1584._3_61_ = auVar384 << 8;
        auVar1583._2_62_ = auVar1584._2_62_;
        auVar1583._0_2_ = uVar12 & 0xff;
        auVar1596._0_14_ = auVar1583._0_14_;
        auVar1596._14_2_ = 0;
        auVar1596._16_48_ = auVar1592._16_48_;
        auVar1595._14_50_ = auVar1596._14_50_;
        auVar1595._0_12_ = auVar1583._0_12_;
        auVar1595._12_2_ = 0;
        auVar1594._12_52_ = auVar1595._12_52_;
        auVar1594._0_10_ = auVar1583._0_10_;
        auVar1594._10_2_ = 0;
        auVar1593._10_54_ = auVar1594._10_54_;
        auVar1593._0_10_ = (unkuint10)0 << 0x40;
        auVar387._56_2_ = 0;
        auVar387._0_56_ = auVar1593._8_56_;
        auVar150._2_58_ = auVar387 << 0x10;
        auVar150._0_2_ = auVar1584._2_2_;
        uVar875 = (uint)auVar1656._0_2_ - (uint)auVar1377._0_2_;
        uVar1178 = auVar148._0_4_ - auVar149._0_4_;
        uVar1541 = auVar1666._8_4_ - auVar1387._8_4_;
        uVar1608 = auVar1668._12_4_ - auVar1389._12_4_;
        uVar486 = (uint)auVar1583._0_2_ - (uint)auVar1377._0_2_;
        uVar476 = auVar150._0_4_ - auVar149._0_4_;
        uVar477 = auVar1593._8_4_ - auVar1387._8_4_;
        uVar871 = auVar1595._12_4_ - auVar1389._12_4_;
        auVar1188._0_4_ = (uVar875 ^ (int)uVar875 >> 0x1f) - ((int)uVar875 >> 0x1f);
        auVar1188._4_4_ = (uVar1178 ^ (int)uVar1178 >> 0x1f) - ((int)uVar1178 >> 0x1f);
        auVar1188._8_4_ = (uVar1541 ^ (int)uVar1541 >> 0x1f) - ((int)uVar1541 >> 0x1f);
        auVar1188._12_4_ = (uVar1608 ^ (int)uVar1608 >> 0x1f) - ((int)uVar1608 >> 0x1f);
        auVar1507._0_4_ = (uVar486 ^ (int)uVar486 >> 0x1f) - ((int)uVar486 >> 0x1f);
        auVar1507._4_4_ = (uVar476 ^ (int)uVar476 >> 0x1f) - ((int)uVar476 >> 0x1f);
        auVar1507._8_4_ = (uVar477 ^ (int)uVar477 >> 0x1f) - ((int)uVar477 >> 0x1f);
        auVar1507._12_4_ = (uVar871 ^ (int)uVar871 >> 0x1f) - ((int)uVar871 >> 0x1f);
        uVar1177 = (int)(uVar486 + uVar875) >> 0x1f;
        uVar1179 = (int)(uVar476 + uVar1178) >> 0x1f;
        uVar1605 = (int)(uVar477 + uVar1541) >> 0x1f;
        uVar1609 = (int)(uVar871 + uVar1608) >> 0x1f;
        auVar1563._0_4_ = (uVar486 + uVar875 ^ uVar1177) - uVar1177;
        auVar1563._4_4_ = (uVar476 + uVar1178 ^ uVar1179) - uVar1179;
        auVar1563._8_4_ = (uVar477 + uVar1541 ^ uVar1605) - uVar1605;
        auVar1563._12_4_ = (uVar871 + uVar1608 ^ uVar1609) - uVar1609;
        in_ZMM10._0_16_ = auVar1507 ^ auVar883;
        in_ZMM10._16_48_ = auVar1665._16_48_;
        auVar1188 = auVar1188 ^ auVar883;
        auVar1689._0_4_ = -(uint)(in_ZMM10._0_4_ < auVar1188._0_4_);
        auVar1689._4_4_ = -(uint)(in_ZMM10._4_4_ < auVar1188._4_4_);
        auVar1689._8_4_ = -(uint)(in_ZMM10._8_4_ < auVar1188._8_4_);
        auVar1689._12_4_ = -(uint)(in_ZMM10._12_4_ < auVar1188._12_4_);
        auVar1508._0_4_ = -(uint)(auVar1563._0_4_ < auVar1507._0_4_);
        auVar1508._4_4_ = -(uint)(auVar1563._4_4_ < auVar1507._4_4_);
        auVar1508._8_4_ = -(uint)(auVar1563._8_4_ < auVar1507._8_4_);
        auVar1508._12_4_ = -(uint)(auVar1563._12_4_ < auVar1507._12_4_);
        in_ZMM9._0_16_ = auVar1563 ^ auVar883;
        in_ZMM9._16_48_ = auVar1592._16_48_;
        auVar1189._0_4_ = -(uint)(in_ZMM9._0_4_ < auVar1188._0_4_);
        auVar1189._4_4_ = -(uint)(in_ZMM9._4_4_ < auVar1188._4_4_);
        auVar1189._8_4_ = -(uint)(in_ZMM9._8_4_ < auVar1188._8_4_);
        auVar1189._12_4_ = -(uint)(in_ZMM9._12_4_ < auVar1188._12_4_);
        auVar645 = packssdw(auVar1189 | auVar1689,auVar1189 | auVar1689);
        auVar645 = packsswb(auVar645,auVar645);
        auVar1628 = packssdw(auVar1508,auVar1508);
        auVar1628 = packsswb(auVar1628,auVar1628);
        auVar645 = ~auVar645 & ZEXT216(uVar12) |
                   (~auVar1628 & ZEXT216(uVar546) | ZEXT216(uVar611) & auVar1628) & auVar645;
        bVar466 = (char)*(undefined2 *)(puVar479 + auVar511._0_8_) - auVar645[0];
        cVar1479 = (char)((ushort)*(undefined2 *)(puVar479 + auVar511._0_8_) >> 8) - auVar645[1];
        uVar546 = CONCAT11(-auVar645[9],-auVar645[8]);
        uVar486 = CONCAT13(-auVar645[0xb],CONCAT12(-auVar645[10],uVar546));
        *(ushort *)(pbVar472 + auVar511._0_8_) = CONCAT11(cVar1479,bVar466);
        auVar391._48_8_ = 0;
        auVar391._0_48_ = auVar816._16_48_;
        auVar812._15_49_ = SUB5649(auVar391 << 0x40,7);
        auVar812._0_15_ = ZEXT615(CONCAT15(-auVar645[0xd],CONCAT14(-auVar645[0xc],uVar486))) << 0x40
        ;
        auVar460._50_6_ = 0;
        auVar460._0_50_ = auVar812._14_50_;
        auVar811._13_51_ = SUB5651(auVar460 << 0x30,5);
        auVar811._0_13_ = ZEXT413(uVar486) << 0x40;
        auVar459._52_4_ = 0;
        auVar459._0_52_ = auVar811._12_52_;
        auVar810._11_53_ = SUB5653(auVar459 << 0x20,3);
        auVar810._0_11_ = ZEXT211(uVar546) << 0x40;
        auVar458._54_2_ = 0;
        auVar458._0_54_ = auVar810._10_54_;
        auVar809._9_55_ = SUB5655(auVar458 << 0x10,1);
        auVar809._0_9_ = (unkuint9)0;
        auVar390._56_8_ = 0;
        auVar390._0_56_ = auVar809._8_56_;
        auVar389._58_6_ = 0;
        auVar389._0_58_ = SUB6458(auVar390 << 0x40,6);
        auVar388[0x3c] = 0;
        auVar388._0_60_ = SUB6460(auVar389 << 0x30,4);
        auVar808[2] = cVar1479;
        auVar808._0_2_ = CONCAT11(cVar1479,bVar466);
        auVar808._3_61_ = auVar388 << 8;
        auVar807._2_62_ = auVar808._2_62_;
        uVar1785 = CONCAT11(0,bVar466);
        auVar816._0_14_ = auVar807._0_14_;
        auVar816._14_2_ = 0;
        auVar815._14_50_ = auVar816._14_50_;
        auVar815._0_12_ = auVar807._0_12_;
        auVar815._12_2_ = 0;
        auVar814._12_52_ = auVar815._12_52_;
        auVar814._0_10_ = auVar807._0_10_;
        auVar814._10_2_ = 0;
        auVar813._10_54_ = auVar814._10_54_;
        auVar813._0_10_ = (unkuint10)0 << 0x40;
        auVar392._56_2_ = 0;
        auVar392._0_56_ = auVar813._8_56_;
        auVar151._2_58_ = auVar392 << 0x10;
        auVar151._0_2_ = auVar808._2_2_;
        in_ZMM5._0_4_ = CONCAT22(0,uVar1785);
        in_ZMM5._4_60_ = auVar151;
        auVar877._0_4_ = iVar481 - in_ZMM5._0_4_;
        auVar877._4_4_ = iVar489 - auVar151._0_4_;
        auVar877._8_4_ = iVar1536 - auVar813._8_4_;
        auVar524 = ZEXT4864(auVar1386._16_48_) << 0x80;
        auVar1180[0] = -((char)bVar466 < '\0');
        auVar1180[1] = -((char)bVar466 < '\0');
        auVar1180[2] = -((char)bVar466 < '\0');
        auVar1180[3] = -((char)bVar466 < '\0');
        auVar1180[4] = -(cVar1479 < '\0');
        auVar1180[5] = -(cVar1479 < '\0');
        auVar1180[6] = -(cVar1479 < '\0');
        auVar1180[7] = -(cVar1479 < '\0');
        auVar1180[8] = -('\0' < auVar524[8]);
        auVar1180[9] = -('\0' < auVar524[9]);
        auVar1180[10] = -('\0' < auVar524[10]);
        auVar1180[0xb] = -('\0' < auVar524[0xb]);
        auVar1392._0_12_ = ~auVar1180 & in_ZMM5._0_12_ | auVar877 & auVar1180;
        auVar1392._12_4_ = 0;
        auVar1392._16_48_ = auVar1386._16_48_;
        auVar1391._12_52_ = auVar1392._12_52_;
        auVar1391._0_8_ = auVar1392._0_8_;
        auVar1391._8_4_ = auVar1392._4_4_;
        in_ZMM7._8_56_ = auVar1391._8_56_;
        in_ZMM7._0_8_ = CONCAT44(0,auVar1392._0_4_);
        auVar518._0_8_ = auVar517._0_8_ + in_ZMM7._0_8_;
        auVar518._16_48_ = auVar517._16_48_;
        auVar518._8_8_ = auVar517._8_8_ + auVar1391._8_8_;
        auVar511._0_8_ = auVar511._0_8_ + 2;
        auVar517 = auVar518;
      } while (auVar579._0_8_ != auVar511._0_8_);
      auVar511._0_8_ = auVar518._8_8_ + auVar518._0_8_;
      puVar475 = puVar475 + auVar579._0_8_;
      puVar479 = puVar479 + auVar579._0_8_;
      pbVar472 = pbVar472 + auVar579._0_8_;
      if (auVar503._0_8_ == auVar579._0_8_) goto LAB_140dcfd6b;
    }
    lVar482 = 0;
    do {
      bVar466 = puVar487[lVar482 + 1];
      uVar476 = (uint)puVar475[lVar482] - (uint)bVar466;
      iVar481 = (uint)puVar478[lVar482 + 1] - (uint)bVar466;
      uVar486 = -uVar476;
      if ((int)-uVar476 < 0) {
        uVar486 = uVar476;
      }
      bVar610 = (byte)-iVar481;
      if (-iVar481 < 0) {
        bVar610 = (byte)iVar481;
      }
      uVar477 = -(iVar481 + uVar476);
      if ((int)uVar477 < 0) {
        uVar477 = iVar481 + uVar476;
      }
      if (bVar610 <= uVar477) {
        bVar466 = puVar475[lVar482];
      }
      bVar465 = puVar478[lVar482 + 1];
      if (uVar477 < (uVar486 & 0xff)) {
        bVar465 = bVar466;
      }
      if ((uint)bVar610 < (uVar486 & 0xff)) {
        bVar465 = bVar466;
      }
      bVar465 = puVar479[lVar482] - bVar465;
      uVar486 = 0x100 - bVar465;
      if (-1 < (char)bVar465) {
        uVar486 = (uint)bVar465;
      }
      pbVar472[lVar482] = bVar465;
      auVar511._0_8_ = auVar511._0_8_ + uVar486;
      lVar482 = lVar482 + 1;
    } while (uVar13 - uVar474 != lVar482);
  }
LAB_140dcfd6b:
  if (auVar511._0_8_ < auVar502._0_8_) {
    puVar469 = param_1->try_row;
    if (param_1->tst_row != (uchar *)0x0) {
      param_1->try_row = param_1->tst_row;
      param_1->tst_row = puVar469;
    }
  }
LAB_140dcfa85:
  png_compress_IDAT(param_1,puVar469,param_2->rowbytes + 1,0);
  puVar469 = param_1->prev_row;
  if (puVar469 != (uchar *)0x0) {
    param_1->prev_row = param_1->row_buf;
    param_1->row_buf = puVar469;
  }
  png_write_finish_row(param_1);
  uVar486 = param_1->flush_rows + 1;
  param_1->flush_rows = uVar486;
  if (param_1->flush_dist - 1 < uVar486) {
    png_write_flush(param_1);
    return;
  }
  return;
}

