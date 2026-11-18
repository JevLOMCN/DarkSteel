// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: libPNG
// Functions: 29

// png_create_read_struct @ 140db4a40

png_struct_def_conflict * __cdecl
png_create_read_struct
          (char *param_1,void *param_2,
          _func___cdecl_void_png_struct_def_ptr_char_ptr_conflict *param_3,
          _func___cdecl_void_png_struct_def_ptr_char_ptr_conflict *param_4)

{
  byte *pbVar1;
  png_struct_def_conflict *ppVar2;
  
  ppVar2 = png_create_png_struct
                     (param_1,param_2,param_3,param_4,(void *)0x0,
                      (_func___cdecl_void_ptr_png_struct_def_ptr_ulong64_conflict *)0x0,
                      (_func___cdecl_void_png_struct_def_ptr_void_ptr_conflict *)0x0);
  if (ppVar2 != (png_struct_def_conflict *)0x0) {
    ppVar2->mode = 0x8000;
    ppVar2->IDAT_read_size = 0x2000;
    pbVar1 = (byte *)((longlong)&ppVar2->flags + 2);
    *pbVar1 = *pbVar1 | 0x30;
    png_set_read_fn(ppVar2,(void *)0x0,
                    (_func___cdecl_void_png_struct_def_ptr_uchar_ptr_ulong64_conflict *)0x0);
  }
  return ppVar2;
}

// png_create_read_struct_2 @ 140db4aa0

png_struct_def_conflict * __cdecl
png_create_read_struct_2
          (char *param_1,void *param_2,
          _func___cdecl_void_png_struct_def_ptr_char_ptr_conflict *param_3,
          _func___cdecl_void_png_struct_def_ptr_char_ptr_conflict *param_4,void *param_5,
          _func___cdecl_void_ptr_png_struct_def_ptr_ulong64_conflict *param_6,
          _func___cdecl_void_png_struct_def_ptr_void_ptr_conflict *param_7)

{
  byte *pbVar1;
  png_struct_def_conflict *ppVar2;
  
  ppVar2 = png_create_png_struct(param_1,param_2,param_3,param_4,param_5,param_6,param_7);
  if (ppVar2 != (png_struct_def_conflict *)0x0) {
    ppVar2->mode = 0x8000;
    ppVar2->IDAT_read_size = 0x2000;
    pbVar1 = (byte *)((longlong)&ppVar2->flags + 2);
    *pbVar1 = *pbVar1 | 0x30;
    png_set_read_fn(ppVar2,(void *)0x0,
                    (_func___cdecl_void_png_struct_def_ptr_uchar_ptr_ulong64_conflict *)0x0);
  }
  return ppVar2;
}

// png_read_info @ 140db4b00

void __cdecl png_read_info(png_struct_def_conflict *param_1,png_info_def *param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  
  if (param_2 == (png_info_def *)0x0 || param_1 == (png_struct_def_conflict *)0x0) {
    return;
  }
  png_read_sig(param_1,param_2);
LAB_140db4b3e:
  while( true ) {
    while( true ) {
      while( true ) {
        uVar1 = png_read_chunk_header(param_1);
        uVar3 = param_1->chunk_name;
        if (uVar3 == 0x49444154) {
          uVar3 = param_1->mode;
          if ((uVar3 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
            png_chunk_error(param_1,"Missing IHDR before IDAT");
          }
          if (((uVar3 & 2) == 0) && (param_1->color_type == '\x03')) {
                    /* WARNING: Subroutine does not return */
            png_chunk_error(param_1,"Missing PLTE before IDAT");
          }
          if ((uVar3 & 8) != 0) {
            png_chunk_benign_error(param_1,"Too many IDATs found");
            uVar3 = param_1->mode;
          }
          param_1->mode = uVar3 | 4;
          iVar2 = png_chunk_unknown_handling(param_1,0x49444154);
          if (iVar2 != 0) {
            png_handle_unknown(param_1,param_2,uVar1,iVar2);
            uVar1 = 0;
          }
          param_1->idat_size = uVar1;
          return;
        }
        if ((param_1->mode & 4) != 0) {
          param_1->mode = param_1->mode | 0x2008;
        }
        if (uVar3 != 0x49454e44) break;
        png_handle_IEND(param_1,param_2,uVar1);
      }
      if (uVar3 != 0x49484452) break;
      png_handle_IHDR(param_1,param_2,uVar1);
    }
    iVar2 = png_chunk_unknown_handling(param_1,uVar3);
    if (iVar2 == 0) break;
    png_handle_unknown(param_1,param_2,uVar1,iVar2);
    if (uVar3 == 0x504c5445) {
      *(byte *)&param_1->mode = (byte)param_1->mode | 2;
    }
  }
  if ((int)uVar3 < 0x7043414c) {
    if ((int)uVar3 < 0x67414d41) {
      if ((int)uVar3 < 0x6348524d) {
        if (uVar3 == 0x504c5445) {
          png_handle_PLTE(param_1,param_2,uVar1);
        }
        else {
          if (uVar3 != 0x624b4744) goto LAB_140db4e5e;
          png_handle_bKGD(param_1,param_2,uVar1);
        }
      }
      else if (uVar3 == 0x6348524d) {
        png_handle_cHRM(param_1,param_2,uVar1);
      }
      else {
        if (uVar3 != 0x65584966) goto LAB_140db4e5e;
        png_handle_eXIf(param_1,param_2,uVar1);
      }
      goto LAB_140db4b3e;
    }
    if (0x6943434f < (int)uVar3) {
      if (uVar3 == 0x69434350) {
        png_handle_iCCP(param_1,param_2,uVar1);
      }
      else if (uVar3 == 0x69545874) {
        png_handle_iTXt(param_1,param_2,uVar1);
      }
      else {
        if (uVar3 != 0x6f464673) goto LAB_140db4e5e;
        png_handle_oFFs(param_1,param_2,uVar1);
      }
      goto LAB_140db4b3e;
    }
    if (uVar3 == 0x67414d41) {
      png_handle_gAMA(param_1,param_2,uVar1);
      goto LAB_140db4b3e;
    }
    if (uVar3 == 0x68495354) {
      png_handle_hIST(param_1,param_2,uVar1);
      goto LAB_140db4b3e;
    }
  }
  else if ((int)uVar3 < 0x73524742) {
    if ((int)uVar3 < 0x73424954) {
      if (uVar3 == 0x7043414c) {
        png_handle_pCAL(param_1,param_2,uVar1);
        goto LAB_140db4b3e;
      }
      if (uVar3 == 0x70485973) {
        png_handle_pHYs(param_1,param_2,uVar1);
        goto LAB_140db4b3e;
      }
    }
    else {
      if (uVar3 == 0x73424954) {
        png_handle_sBIT(param_1,param_2,uVar1);
        goto LAB_140db4b3e;
      }
      if (uVar3 == 0x7343414c) {
        png_handle_sCAL(param_1,param_2,uVar1);
        goto LAB_140db4b3e;
      }
      if (uVar3 == 0x73504c54) {
        png_handle_sPLT(param_1,param_2,uVar1);
        goto LAB_140db4b3e;
      }
    }
  }
  else if ((int)uVar3 < 0x74494d45) {
    if (uVar3 == 0x73524742) {
      png_handle_sRGB(param_1,param_2,uVar1);
      goto LAB_140db4b3e;
    }
    if (uVar3 == 0x74455874) {
      png_handle_tEXt(param_1,param_2,uVar1);
      goto LAB_140db4b3e;
    }
  }
  else {
    if (uVar3 == 0x74494d45) {
      png_handle_tIME(param_1,param_2,uVar1);
      goto LAB_140db4b3e;
    }
    if (uVar3 == 0x74524e53) {
      png_handle_tRNS(param_1,param_2,uVar1);
      goto LAB_140db4b3e;
    }
    if (uVar3 == 0x7a545874) {
      png_handle_zTXt(param_1,param_2,uVar1);
      goto LAB_140db4b3e;
    }
  }
LAB_140db4e5e:
  png_handle_unknown(param_1,param_2,uVar1,0);
  goto LAB_140db4b3e;
}

// png_read_update_info @ 140db4f10

void __cdecl png_read_update_info(png_struct_def_conflict *param_1,png_info_def *param_2)

{
  if (param_1 == (png_struct_def_conflict *)0x0) {
    return;
  }
  if ((param_1->flags & 0x40) == 0) {
    png_read_start_row(param_1);
    png_read_transform_info(param_1,param_2);
    return;
  }
  png_app_error(param_1,"png_read_update_info/png_start_read_image: duplicate call");
  return;
}

// png_start_read_image @ 140db4f60

void __cdecl png_start_read_image(png_struct_def_conflict *param_1)

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
  
  if (param_1 == (png_struct_def_conflict *)0x0) {
    return;
  }
  if ((param_1->flags & 0x40) == 0) {
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
  png_app_error(param_1,"png_start_read_image/png_read_update_info: duplicate call");
  return;
}

// png_read_row @ 140db4f90

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl png_read_row(png_struct_def_conflict *param_1,uchar *param_2,uchar *param_3)

{
  uchar uVar1;
  byte bVar2;
  code *pcVar3;
  uchar *puVar4;
  int iVar5;
  longlong lVar6;
  int iVar7;
  uint uVar8;
  byte *_Src;
  uint uVar9;
  size_t _Size;
  undefined1 auStackY_78 [32];
  png_row_info_struct local_48;
  ulonglong local_30;
  
  local_30 = __security_cookie.value ^ (ulonglong)auStackY_78;
  if (param_1 == (png_struct_def_conflict *)0x0) goto LAB_140db53e8;
  if ((param_1->flags & 0x40) == 0) {
    png_read_start_row(param_1);
  }
  local_48.width = param_1->iwidth;
  local_48.color_type = param_1->color_type;
  local_48.bit_depth = param_1->bit_depth;
  local_48.channels = param_1->channels;
  local_48.pixel_depth = param_1->pixel_depth;
  if ((ulonglong)local_48.pixel_depth < 8) {
    local_48.rowbytes = (ulonglong)local_48.pixel_depth * (ulonglong)local_48.width + 7 >> 3;
    uVar1 = param_1->interlaced;
  }
  else {
    local_48.rowbytes = (ulonglong)(local_48.pixel_depth >> 3) * (ulonglong)local_48.width;
    uVar1 = param_1->interlaced;
  }
  if ((uVar1 != '\0') && ((param_1->transformations & 2) != 0)) {
    uVar8 = param_1->row_number;
    switch(param_1->pass) {
    case '\0':
      if ((uVar8 & 7) != 0) {
LAB_140db51d5:
        if (param_3 == (uchar *)0x0) goto LAB_140db51eb;
LAB_140db51da:
        png_combine_row(param_1,param_3,1);
LAB_140db51eb:
        png_read_finish_row(param_1);
        return;
      }
      break;
    case '\x01':
      if (((uVar8 & 7) != 0) || (param_1->width < 5)) goto LAB_140db51d5;
      break;
    case '\x02':
      if ((uVar8 & 7) != 4) {
        uVar8 = uVar8 & 4;
LAB_140db5195:
        if (uVar8 == 0 || param_3 == (uchar *)0x0) goto LAB_140db51eb;
        goto LAB_140db51da;
      }
      break;
    case '\x03':
      if (((uVar8 & 3) != 0) || (param_1->width < 3)) goto LAB_140db51d5;
      break;
    case '\x04':
      if ((uVar8 & 3) != 2) {
        uVar8 = uVar8 & 2;
        goto LAB_140db5195;
      }
      break;
    case '\x05':
      if (((uVar8 & 1) != 0) || (param_1->width < 2)) goto LAB_140db51d5;
      break;
    default:
      if ((uVar8 & 1) == 0) goto LAB_140db51eb;
    }
  }
  if ((param_1->mode & 4) == 0) {
                    /* WARNING: Subroutine does not return */
    png_error(param_1,"Invalid attempt to read row data");
  }
  *param_1->row_buf = 0xff;
  _Size = local_48.rowbytes + 1;
  png_read_IDAT_data(param_1,param_1->row_buf,_Size);
  _Src = param_1->row_buf;
  bVar2 = *_Src;
  if (bVar2 != 0) {
    if (4 < bVar2) {
                    /* WARNING: Subroutine does not return */
      png_error(param_1,"bad adaptive filter value");
    }
    png_read_filter_row(param_1,&local_48,_Src + 1,param_1->prev_row + 1,(uint)bVar2);
    _Src = param_1->row_buf;
    _Size = local_48.rowbytes + 1;
  }
  memcpy(param_1->prev_row,_Src,_Size);
  if ((((param_1->mng_features_permitted & 4) != 0) && (param_1->filter_type == '@')) &&
     ((local_48.color_type & 2) != 0)) {
    if (local_48.bit_depth == '\x10') {
      if (local_48.color_type == 2) {
        lVar6 = 6;
      }
      else {
        if (local_48.color_type != 6) goto LAB_140db52e3;
        lVar6 = 8;
      }
      if (local_48.width != 0) {
        puVar4 = param_1->row_buf + 6;
        uVar8 = local_48.width;
        do {
          uVar9 = (uint)(ushort)(*(ushort *)(puVar4 + -3) << 8 | *(ushort *)(puVar4 + -3) >> 8);
          iVar5 = (ushort)(*(ushort *)(puVar4 + -5) << 8 | *(ushort *)(puVar4 + -5) >> 8) + uVar9;
          iVar7 = (ushort)(*(ushort *)(puVar4 + -1) << 8 | *(ushort *)(puVar4 + -1) >> 8) + uVar9;
          puVar4[-5] = (uchar)((uint)iVar5 >> 8);
          puVar4[-4] = (uchar)iVar5;
          puVar4[-1] = (uchar)((uint)iVar7 >> 8);
          *puVar4 = (uchar)iVar7;
          puVar4 = puVar4 + lVar6;
          uVar8 = uVar8 - 1;
        } while (uVar8 != 0);
      }
    }
    else if (local_48.bit_depth == '\b') {
      if (local_48.color_type == 2) {
        lVar6 = 3;
      }
      else {
        if (local_48.color_type != 6) goto LAB_140db52e3;
        lVar6 = 4;
      }
      if (local_48.width != 0) {
        puVar4 = param_1->row_buf + 1;
        if (local_48.width != 1) {
          uVar8 = local_48.width & 0xfffffffe;
          do {
            *puVar4 = *puVar4 + puVar4[1];
            puVar4[2] = puVar4[2] + puVar4[1];
            puVar4[lVar6] = puVar4[lVar6] + puVar4[lVar6 + 1];
            puVar4[lVar6 + 2] = puVar4[lVar6 + 2] + puVar4[lVar6 + 1];
            puVar4 = puVar4 + lVar6 * 2;
            uVar8 = uVar8 - 2;
          } while (uVar8 != 0);
        }
        if ((local_48.width & 1) != 0) {
          *puVar4 = *puVar4 + puVar4[1];
          puVar4[2] = puVar4[2] + puVar4[1];
        }
      }
    }
  }
LAB_140db52e3:
  if ((param_1->transformations != 0) || (-1 < param_1->num_palette_max)) {
    png_do_read_transformations(param_1,&local_48);
  }
  if (param_1->transformed_pixel_depth == 0) {
    param_1->transformed_pixel_depth = local_48.pixel_depth;
    if (param_1->maximum_pixel_depth < local_48.pixel_depth) {
                    /* WARNING: Subroutine does not return */
      png_error(param_1,"sequential row overflow");
    }
  }
  else if (param_1->transformed_pixel_depth != local_48.pixel_depth) {
                    /* WARNING: Subroutine does not return */
    png_error(param_1,"internal sequential row size calculation error");
  }
  if ((param_1->interlaced == '\0') || ((param_1->transformations & 2) == 0)) {
    if (param_2 != (uchar *)0x0) {
      png_combine_row(param_1,param_2,-1);
    }
    if (param_3 != (uchar *)0x0) {
      iVar5 = -1;
      goto LAB_140db53bc;
    }
  }
  else {
    if (param_1->pass < 6) {
      png_do_read_interlace
                (&local_48,param_1->row_buf + 1,(uint)param_1->pass,param_1->transformations);
    }
    if (param_3 != (uchar *)0x0) {
      png_combine_row(param_1,param_3,1);
    }
    if (param_2 != (uchar *)0x0) {
      iVar5 = 0;
      param_3 = param_2;
LAB_140db53bc:
      png_combine_row(param_1,param_3,iVar5);
    }
  }
  png_read_finish_row(param_1);
  if (param_1->read_row_fn != (_func___cdecl_void_png_struct_def_ptr_uint_int_conflict *)0x0) {
    (*param_1->read_row_fn)(param_1,param_1->row_number,(int)param_1->pass);
  }
LAB_140db53e8:
  if ((local_30 ^ (ulonglong)auStackY_78) == __security_cookie.value) {
    return;
  }
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}

// png_read_rows @ 140db5440

void __cdecl
png_read_rows(png_struct_def_conflict *param_1,uchar **param_2,uchar **param_3,uint param_4)

{
  longlong lVar1;
  
  if (param_1 != (png_struct_def_conflict *)0x0) {
    if (param_3 == (uchar **)0x0 || param_2 == (uchar **)0x0) {
      if (param_2 == (uchar **)0x0) {
        if (param_4 != 0 && param_3 != (uchar **)0x0) {
          lVar1 = 0;
          do {
            png_read_row(param_1,(uchar *)0x0,param_3[lVar1]);
            lVar1 = lVar1 + 1;
          } while (param_4 != (uint)lVar1);
        }
      }
      else if (param_4 != 0) {
        lVar1 = 0;
        do {
          png_read_row(param_1,param_2[lVar1],(uchar *)0x0);
          lVar1 = lVar1 + 1;
        } while (param_4 != (uint)lVar1);
      }
    }
    else if (param_4 != 0) {
      lVar1 = 0;
      do {
        png_read_row(param_1,param_2[lVar1],param_3[lVar1]);
        lVar1 = lVar1 + 1;
      } while (param_4 != (uint)lVar1);
    }
  }
  return;
}

// png_read_image @ 140db5510

void __cdecl png_read_image(png_struct_def_conflict *param_1,uchar **param_2)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  
  if (param_1 != (png_struct_def_conflict *)0x0) {
    if ((param_1->flags & 0x40) == 0) {
      iVar2 = png_set_interlace_handling(param_1);
      if ((param_1->flags & 0x40) == 0) {
        png_read_start_row(param_1);
      }
      else {
        png_app_error(param_1,"png_start_read_image/png_read_update_info: duplicate call");
      }
    }
    else {
      if ((param_1->interlaced != '\0') && ((param_1->transformations & 2) == 0)) {
        png_warning(param_1,"Interlace handling should be turned on when using png_read_image");
        param_1->num_rows = param_1->height;
      }
      iVar2 = png_set_interlace_handling(param_1);
    }
    uVar1 = param_1->height;
    if (uVar1 != 0 && 0 < iVar2) {
      iVar4 = 0;
      do {
        lVar3 = 0;
        do {
          png_read_row(param_1,param_2[lVar3],(uchar *)0x0);
          lVar3 = lVar3 + 1;
        } while (uVar1 != (uint)lVar3);
        iVar4 = iVar4 + 1;
      } while (iVar4 != iVar2);
    }
  }
  return;
}

// png_read_end @ 140db5610

void __cdecl png_read_end(png_struct_def_conflict *param_1,png_info_def *param_2)

{
  byte *pbVar1;
  uchar uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  
  if (param_1 != (png_struct_def_conflict *)0x0) {
    iVar4 = png_chunk_unknown_handling(param_1,0x49444154);
    if (iVar4 == 0) {
      png_read_finish_IDAT(param_1);
      uVar2 = param_1->color_type;
    }
    else {
      uVar2 = param_1->color_type;
    }
    if ((uVar2 == '\x03') && ((int)(uint)param_1->num_palette <= param_1->num_palette_max)) {
      png_benign_error(param_1,"Read palette index exceeding num_palette");
    }
    if (param_2 == (png_info_def *)0x0) {
      do {
        uVar5 = png_read_chunk_header(param_1);
        uVar3 = param_1->chunk_name;
        if (uVar3 == 0x49444154) {
LAB_140db5690:
          png_crc_finish(param_1,uVar5);
        }
        else {
          pbVar1 = (byte *)((longlong)&param_1->mode + 1);
          *pbVar1 = *pbVar1 | 0x20;
          if (uVar3 == 0x49454e44) {
            png_handle_IEND(param_1,(png_info_def *)0x0,uVar5);
          }
          else {
            if (uVar3 != 0x49484452) goto LAB_140db5690;
            png_handle_IHDR(param_1,(png_info_def *)0x0,uVar5);
          }
        }
      } while ((param_1->mode & 0x10) == 0);
    }
    else {
      do {
        uVar5 = png_read_chunk_header(param_1);
        uVar3 = param_1->chunk_name;
        if (uVar3 == 0x49444154) {
          iVar4 = png_chunk_unknown_handling(param_1,0x49444154);
          if (iVar4 == 0) {
LAB_140db57f0:
            if ((int)uVar3 < 0x7043414c) {
              if ((int)uVar3 < 0x67414d41) {
                if ((int)uVar3 < 0x624b4744) {
                  if (uVar3 == 0x49444154) {
                    if (((uVar5 != 0) && ((param_1->flags & 8) == 0)) ||
                       ((param_1->mode & 0x2000) != 0)) {
                      png_benign_error(param_1,"..Too many IDATs found");
                    }
                    png_crc_finish(param_1,uVar5);
                  }
                  else {
                    if (uVar3 != 0x504c5445) {
LAB_140db5ae4:
                      iVar4 = 0;
                      goto LAB_140db576a;
                    }
                    png_handle_PLTE(param_1,param_2,uVar5);
                  }
                }
                else if (uVar3 == 0x624b4744) {
                  png_handle_bKGD(param_1,param_2,uVar5);
                }
                else if (uVar3 == 0x6348524d) {
                  png_handle_cHRM(param_1,param_2,uVar5);
                }
                else {
                  if (uVar3 != 0x65584966) goto LAB_140db5ae4;
                  png_handle_eXIf(param_1,param_2,uVar5);
                }
              }
              else if ((int)uVar3 < 0x69434350) {
                if (uVar3 == 0x67414d41) {
                  png_handle_gAMA(param_1,param_2,uVar5);
                }
                else {
                  if (uVar3 != 0x68495354) goto LAB_140db5ae4;
                  png_handle_hIST(param_1,param_2,uVar5);
                }
              }
              else if (uVar3 == 0x69434350) {
                png_handle_iCCP(param_1,param_2,uVar5);
              }
              else if (uVar3 == 0x69545874) {
                png_handle_iTXt(param_1,param_2,uVar5);
              }
              else {
                if (uVar3 != 0x6f464673) goto LAB_140db5ae4;
                png_handle_oFFs(param_1,param_2,uVar5);
              }
            }
            else if ((int)uVar3 < 0x73524742) {
              if ((int)uVar3 < 0x73424954) {
                if (uVar3 == 0x7043414c) {
                  png_handle_pCAL(param_1,param_2,uVar5);
                }
                else {
                  if (uVar3 != 0x70485973) goto LAB_140db5ae4;
                  png_handle_pHYs(param_1,param_2,uVar5);
                }
              }
              else if (uVar3 == 0x73424954) {
                png_handle_sBIT(param_1,param_2,uVar5);
              }
              else if (uVar3 == 0x7343414c) {
                png_handle_sCAL(param_1,param_2,uVar5);
              }
              else {
                if (uVar3 != 0x73504c54) goto LAB_140db5ae4;
                png_handle_sPLT(param_1,param_2,uVar5);
              }
            }
            else if ((int)uVar3 < 0x74494d45) {
              if (uVar3 == 0x73524742) {
                png_handle_sRGB(param_1,param_2,uVar5);
              }
              else {
                if (uVar3 != 0x74455874) goto LAB_140db5ae4;
                png_handle_tEXt(param_1,param_2,uVar5);
              }
            }
            else if (uVar3 == 0x74494d45) {
              png_handle_tIME(param_1,param_2,uVar5);
            }
            else if (uVar3 == 0x74524e53) {
              png_handle_tRNS(param_1,param_2,uVar5);
            }
            else {
              if (uVar3 != 0x7a545874) goto LAB_140db5ae4;
              png_handle_zTXt(param_1,param_2,uVar5);
            }
          }
          else {
            if (((uVar5 != 0) && ((param_1->flags & 8) == 0)) || ((param_1->mode & 0x2000) != 0)) {
              png_benign_error(param_1,".Too many IDATs found");
            }
LAB_140db576a:
            png_handle_unknown(param_1,param_2,uVar5,iVar4);
          }
        }
        else {
          pbVar1 = (byte *)((longlong)&param_1->mode + 1);
          *pbVar1 = *pbVar1 | 0x20;
          if (uVar3 == 0x49484452) {
            png_handle_IHDR(param_1,param_2,uVar5);
          }
          else if (uVar3 == 0x49454e44) {
            png_handle_IEND(param_1,param_2,uVar5);
          }
          else {
            iVar4 = png_chunk_unknown_handling(param_1,uVar3);
            if (iVar4 == 0) goto LAB_140db57f0;
            png_handle_unknown(param_1,param_2,uVar5,iVar4);
            if (uVar3 == 0x504c5445) {
              *(byte *)&param_1->mode = (byte)param_1->mode | 2;
            }
          }
        }
      } while ((param_1->mode & 0x10) == 0);
    }
  }
  return;
}

// png_destroy_read_struct @ 140db5b10

void __cdecl
png_destroy_read_struct
          (png_struct_def_conflict **param_1,png_info_def **param_2,png_info_def **param_3)

{
  png_struct_def_conflict *ppVar1;
  uint uVar2;
  uint uVar3;
  
  if ((param_1 != (png_struct_def_conflict **)0x0) &&
     (ppVar1 = *param_1, ppVar1 != (png_struct_def_conflict *)0x0)) {
    png_destroy_info_struct(ppVar1,param_3);
    png_destroy_info_struct(ppVar1,param_2);
    *param_1 = (png_struct_def_conflict *)0x0;
    png_destroy_gamma_table(ppVar1);
    png_free(ppVar1,ppVar1->big_row_buf);
    ppVar1->big_row_buf = (uchar *)0x0;
    png_free(ppVar1,ppVar1->big_prev_row);
    ppVar1->big_prev_row = (uchar *)0x0;
    png_free(ppVar1,ppVar1->read_buffer);
    ppVar1->read_buffer = (uchar *)0x0;
    png_free(ppVar1,ppVar1->palette_lookup);
    ppVar1->palette_lookup = (uchar *)0x0;
    png_free(ppVar1,ppVar1->quantize_index);
    ppVar1->quantize_index = (uchar *)0x0;
    uVar3 = ppVar1->free_me;
    if ((uVar3 & 0x1000) != 0) {
      png_zfree(ppVar1,ppVar1->palette);
      ppVar1->palette = (png_color_struct *)0x0;
      uVar3 = ppVar1->free_me;
    }
    uVar2 = uVar3 & 0xffffefff;
    ppVar1->free_me = uVar2;
    if ((uVar3 & 0x2000) != 0) {
      png_free(ppVar1,ppVar1->trans_alpha);
      ppVar1->trans_alpha = (uchar *)0x0;
      uVar2 = ppVar1->free_me;
    }
    ppVar1->free_me = uVar2 & 0xffffdfff;
    inflateEnd(&ppVar1->zstream);
    png_free(ppVar1,ppVar1->save_buffer);
    ppVar1->save_buffer = (uchar *)0x0;
    png_free(ppVar1,(ppVar1->unknown_chunk).data);
    (ppVar1->unknown_chunk).data = (uchar *)0x0;
    png_free(ppVar1,ppVar1->chunk_list);
    ppVar1->chunk_list = (uchar *)0x0;
    png_free(ppVar1,ppVar1->riffled_palette);
    ppVar1->riffled_palette = (uchar *)0x0;
    png_destroy_png_struct(ppVar1);
    return;
  }
  return;
}

// png_set_read_status_fn @ 140db5ce0

void __cdecl
png_set_read_status_fn
          (png_struct_def_conflict *param_1,
          _func___cdecl_void_png_struct_def_ptr_uint_int_conflict *param_2)

{
  if (param_1 != (png_struct_def_conflict *)0x0) {
    param_1->read_row_fn = param_2;
  }
  return;
}

// png_read_png @ 140db5d00

/* WARNING: Type propagation algorithm not settling */

void __cdecl
png_read_png(png_struct_def_conflict *param_1,png_info_def *param_2,int param_3,void *param_4)

{
  byte *pbVar1;
  byte bVar2;
  uchar **ppuVar3;
  ulonglong uVar4;
  uchar *puVar5;
  
  if (param_2 == (png_info_def *)0x0 || param_1 == (png_struct_def_conflict *)0x0) {
    return;
  }
  png_read_info(param_1,param_2);
  if (0x1fffffff < param_2->height) {
                    /* WARNING: Subroutine does not return */
    png_error(param_1,"Image is too high to process with png_read_png()");
  }
  if ((short)param_3 < 0) {
    png_set_scale_16(param_1);
  }
  if ((param_3 & 1U) != 0) {
    png_set_strip_16(param_1);
  }
  if ((param_3 & 2U) != 0) {
    png_set_strip_alpha(param_1);
  }
  if ((param_3 & 4U) != 0) {
    png_set_packing(param_1);
  }
  if ((param_3 & 8U) != 0) {
    png_set_packswap(param_1);
  }
  if ((param_3 & 0x10U) != 0) {
    png_set_expand(param_1);
  }
  if ((param_3 & 0x20U) != 0) {
    png_set_invert_mono(param_1);
  }
  if (((param_3 & 0x40U) != 0) && ((param_2->valid & 2) != 0)) {
    png_set_shift(param_1,&param_2->sig_bit);
  }
  if ((char)param_3 < '\0') {
    png_set_bgr(param_1);
  }
  if ((param_3 & 0x100U) != 0) {
    png_set_swap_alpha(param_1);
  }
  if ((param_3 & 0x200U) != 0) {
    png_set_swap(param_1);
  }
  if ((param_3 & 0x400U) != 0) {
    png_set_invert_alpha(param_1);
  }
  if ((param_3 & 0x2000U) != 0) {
    png_set_gray_to_rgb(param_1);
  }
  if ((param_3 & 0x4000U) == 0) {
    png_set_interlace_handling(param_1);
    bVar2 = (byte)param_1->flags;
  }
  else {
    png_set_expand_16(param_1);
    png_set_interlace_handling(param_1);
    bVar2 = (byte)param_1->flags;
  }
  if ((bVar2 & 0x40) == 0) {
    png_read_start_row(param_1);
    png_read_transform_info(param_1,param_2);
  }
  else {
    png_app_error(param_1,"png_read_update_info/png_start_read_image: duplicate call");
  }
  png_free_data(param_1,param_2,0x40,0);
  if (param_2->row_pointers == (uchar **)0x0) {
    ppuVar3 = png_malloc(param_1,(ulonglong)param_2->height << 3);
    param_2->row_pointers = ppuVar3;
    if (param_2->height == 0) {
      *(byte *)&param_2->free_me = (byte)param_2->free_me | 0x40;
    }
    else {
      uVar4 = 0;
      do {
        param_2->row_pointers[uVar4] = (uchar *)0x0;
        uVar4 = uVar4 + 1;
      } while (uVar4 < param_2->height);
      *(byte *)&param_2->free_me = (byte)param_2->free_me | 0x40;
      if (param_2->height != 0) {
        uVar4 = 0;
        do {
          puVar5 = png_malloc(param_1,param_2->rowbytes);
          param_2->row_pointers[uVar4] = puVar5;
          uVar4 = uVar4 + 1;
        } while (uVar4 < param_2->height);
      }
    }
  }
  png_read_image(param_1,param_2->row_pointers);
  pbVar1 = (byte *)((longlong)&param_2->valid + 1);
  *pbVar1 = *pbVar1 | 0x80;
  png_read_end(param_1,param_2);
  return;
}

// png_image_begin_read_from_stdio @ 140db5f90

int __cdecl png_image_begin_read_from_stdio(png_image *param_1,_iobuf *param_2)

{
  int iVar1;
  char *pcVar2;
  
  if (param_1 == (png_image *)0x0) {
    return 0;
  }
  if (param_1->version == 1) {
    if (param_2 != (_iobuf *)0x0) {
      iVar1 = png_image_read_init(param_1);
      if (iVar1 == 0) {
        return 0;
      }
      param_1->opaque->png_ptr->io_ptr = param_2;
      iVar1 = png_safe_execute(param_1,png_image_read_header,param_1);
      return iVar1;
    }
    pcVar2 = "png_image_begin_read_from_stdio: invalid argument";
  }
  else {
    pcVar2 = "png_image_begin_read_from_stdio: incorrect PNG_IMAGE_VERSION";
  }
  iVar1 = png_image_error(param_1,pcVar2);
  return iVar1;
}

// png_image_read_init @ 140db6010

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

int __cdecl png_image_read_init(png_image *param_1)

{
  byte *pbVar1;
  code *pcVar2;
  int iVar3;
  png_struct_def_conflict *ppVar4;
  png_info_def *ppVar5;
  png_control *ppVar6;
  undefined1 auStackY_78 [32];
  png_info_def *local_40;
  png_struct_def_conflict *local_38;
  ulonglong local_30;
  
  local_30 = __security_cookie.value ^ (ulonglong)auStackY_78;
  if (param_1->opaque != (png_control *)0x0) {
    if ((local_30 ^ (ulonglong)auStackY_78) != __security_cookie.value) {
      pcVar2 = (code *)swi(3);
      iVar3 = (*pcVar2)();
      return iVar3;
    }
    iVar3 = png_image_error(param_1,"png_image_read: opaque pointer not NULL");
    return iVar3;
  }
  ppVar4 = png_create_png_struct
                     ("1.6.44",param_1,png_safe_error,png_safe_warning,(void *)0x0,
                      (_func___cdecl_void_ptr_png_struct_def_ptr_ulong64_conflict *)0x0,
                      (_func___cdecl_void_png_struct_def_ptr_void_ptr_conflict *)0x0);
  if (ppVar4 == (png_struct_def_conflict *)0x0) {
    local_38 = (png_struct_def_conflict *)0x0;
    param_1->opaque = (png_control *)0x0;
    param_1->version = 0;
    param_1->width = 0;
    param_1->message[0x2c] = '\0';
    param_1->message[0x2d] = '\0';
    param_1->message[0x2e] = '\0';
    param_1->message[0x2f] = '\0';
    param_1->message[0x30] = '\0';
    param_1->message[0x31] = '\0';
    param_1->message[0x32] = '\0';
    param_1->message[0x33] = '\0';
    param_1->message[0x34] = '\0';
    param_1->message[0x35] = '\0';
    param_1->message[0x36] = '\0';
    param_1->message[0x37] = '\0';
    param_1->message[0x38] = '\0';
    param_1->message[0x39] = '\0';
    param_1->message[0x3a] = '\0';
    param_1->message[0x3b] = '\0';
    param_1->message[0x1c] = '\0';
    param_1->message[0x1d] = '\0';
    param_1->message[0x1e] = '\0';
    param_1->message[0x1f] = '\0';
    param_1->message[0x20] = '\0';
    param_1->message[0x21] = '\0';
    param_1->message[0x22] = '\0';
    param_1->message[0x23] = '\0';
    param_1->message[0x24] = '\0';
    param_1->message[0x25] = '\0';
    param_1->message[0x26] = '\0';
    param_1->message[0x27] = '\0';
    param_1->message[0x28] = '\0';
    param_1->message[0x29] = '\0';
    param_1->message[0x2a] = '\0';
    param_1->message[0x2b] = '\0';
    param_1->message[0xc] = '\0';
    param_1->message[0xd] = '\0';
    param_1->message[0xe] = '\0';
    param_1->message[0xf] = '\0';
    param_1->message[0x10] = '\0';
    param_1->message[0x11] = '\0';
    param_1->message[0x12] = '\0';
    param_1->message[0x13] = '\0';
    param_1->message[0x14] = '\0';
    param_1->message[0x15] = '\0';
    param_1->message[0x16] = '\0';
    param_1->message[0x17] = '\0';
    param_1->message[0x18] = '\0';
    param_1->message[0x19] = '\0';
    param_1->message[0x1a] = '\0';
    param_1->message[0x1b] = '\0';
    param_1->warning_or_error = 0;
    param_1->message[0] = '\0';
    param_1->message[1] = '\0';
    param_1->message[2] = '\0';
    param_1->message[3] = '\0';
    param_1->message[4] = '\0';
    param_1->message[5] = '\0';
    param_1->message[6] = '\0';
    param_1->message[7] = '\0';
    param_1->message[8] = '\0';
    param_1->message[9] = '\0';
    param_1->message[10] = '\0';
    param_1->message[0xb] = '\0';
    param_1->height = 0;
    param_1->format = 0;
    param_1->flags = 0;
    param_1->colormap_entries = 0;
    *(undefined8 *)(param_1->message + 0x3c) = 0;
    param_1->version = 1;
  }
  else {
    ppVar4->mode = 0x8000;
    ppVar4->IDAT_read_size = 0x2000;
    pbVar1 = (byte *)((longlong)&ppVar4->flags + 2);
    *pbVar1 = *pbVar1 | 0x30;
    png_set_read_fn(ppVar4,(void *)0x0,
                    (_func___cdecl_void_png_struct_def_ptr_uchar_ptr_ulong64_conflict *)0x0);
    param_1->opaque = (png_control *)0x0;
    param_1->version = 0;
    param_1->width = 0;
    param_1->message[0x2c] = '\0';
    param_1->message[0x2d] = '\0';
    param_1->message[0x2e] = '\0';
    param_1->message[0x2f] = '\0';
    param_1->message[0x30] = '\0';
    param_1->message[0x31] = '\0';
    param_1->message[0x32] = '\0';
    param_1->message[0x33] = '\0';
    param_1->message[0x34] = '\0';
    param_1->message[0x35] = '\0';
    param_1->message[0x36] = '\0';
    param_1->message[0x37] = '\0';
    param_1->message[0x38] = '\0';
    param_1->message[0x39] = '\0';
    param_1->message[0x3a] = '\0';
    param_1->message[0x3b] = '\0';
    param_1->message[0x1c] = '\0';
    param_1->message[0x1d] = '\0';
    param_1->message[0x1e] = '\0';
    param_1->message[0x1f] = '\0';
    param_1->message[0x20] = '\0';
    param_1->message[0x21] = '\0';
    param_1->message[0x22] = '\0';
    param_1->message[0x23] = '\0';
    param_1->message[0x24] = '\0';
    param_1->message[0x25] = '\0';
    param_1->message[0x26] = '\0';
    param_1->message[0x27] = '\0';
    param_1->message[0x28] = '\0';
    param_1->message[0x29] = '\0';
    param_1->message[0x2a] = '\0';
    param_1->message[0x2b] = '\0';
    param_1->message[0xc] = '\0';
    param_1->message[0xd] = '\0';
    param_1->message[0xe] = '\0';
    param_1->message[0xf] = '\0';
    param_1->message[0x10] = '\0';
    param_1->message[0x11] = '\0';
    param_1->message[0x12] = '\0';
    param_1->message[0x13] = '\0';
    param_1->message[0x14] = '\0';
    param_1->message[0x15] = '\0';
    param_1->message[0x16] = '\0';
    param_1->message[0x17] = '\0';
    param_1->message[0x18] = '\0';
    param_1->message[0x19] = '\0';
    param_1->message[0x1a] = '\0';
    param_1->message[0x1b] = '\0';
    param_1->warning_or_error = 0;
    param_1->message[0] = '\0';
    param_1->message[1] = '\0';
    param_1->message[2] = '\0';
    param_1->message[3] = '\0';
    param_1->message[4] = '\0';
    param_1->message[5] = '\0';
    param_1->message[6] = '\0';
    param_1->message[7] = '\0';
    param_1->message[8] = '\0';
    param_1->message[9] = '\0';
    param_1->message[10] = '\0';
    param_1->message[0xb] = '\0';
    param_1->height = 0;
    param_1->format = 0;
    param_1->flags = 0;
    param_1->colormap_entries = 0;
    *(undefined8 *)(param_1->message + 0x3c) = 0;
    param_1->version = 1;
    local_38 = ppVar4;
    ppVar5 = png_create_info_struct(ppVar4);
    local_40 = ppVar5;
    if (ppVar5 != (png_info_def *)0x0) {
      ppVar6 = png_malloc_warn(ppVar4,0x30);
      if (ppVar6 != (png_control *)0x0) {
        ppVar6->size = 0;
        *(undefined8 *)&ppVar6->field_0x28 = 0;
        ppVar6->error_buf = (void *)0x0;
        ppVar6->memory = (uchar *)0x0;
        ppVar6->png_ptr = ppVar4;
        ppVar6->info_ptr = ppVar5;
        param_1->opaque = ppVar6;
        return 1;
      }
      png_destroy_info_struct(ppVar4,&local_40);
    }
    png_destroy_read_struct(&local_38,(png_info_def **)0x0,(png_info_def **)0x0);
  }
  iVar3 = png_image_error(param_1,"png_image_read: out of memory");
  return iVar3;
}

// png_image_read_header @ 140db61c0

int __cdecl png_image_read_header(void *param_1)

{
  byte bVar1;
  png_struct_def_conflict *ppVar2;
  png_info_def *ppVar3;
  uint uVar4;
  uint uVar5;
  
  ppVar2 = (png_struct_def_conflict *)**(undefined8 **)param_1;
  ppVar3 = (png_info_def *)(*(undefined8 **)param_1)[1];
  png_set_benign_errors(ppVar2,1);
  png_read_info(ppVar2,ppVar3);
  *(uint *)((longlong)param_1 + 0xc) = ppVar2->width;
  *(uint *)((longlong)param_1 + 0x10) = ppVar2->height;
  bVar1 = ppVar2->color_type;
  uVar4 = bVar1 & 2;
  if ((bVar1 & 4) == 0) {
    uVar4 = ppVar2->num_trans != 0 | uVar4;
  }
  else {
    uVar4 = uVar4 | 1;
  }
  uVar5 = uVar4 + 4;
  if (ppVar2->bit_depth != '\x10') {
    uVar5 = uVar4;
  }
  *(uint *)((longlong)param_1 + 0x14) = uVar5 + (bVar1 & 1) * 8;
  if (((uVar5 & 2) != 0) && (((ppVar2->colorspace).flags & 0x8042) == 2)) {
    *(byte *)((longlong)param_1 + 0x18) = *(byte *)((longlong)param_1 + 0x18) | 1;
  }
  if (ppVar2->color_type == '\x03') {
    uVar4 = (uint)ppVar2->num_palette;
  }
  else {
    uVar4 = 0x100;
    if (ppVar2->color_type == '\0') {
      uVar4 = 1 << (ppVar2->bit_depth & 0x1f);
    }
  }
  uVar5 = 0x100;
  if (uVar4 < 0x100) {
    uVar5 = uVar4;
  }
  *(uint *)((longlong)param_1 + 0x1c) = uVar5;
  return 1;
}

// png_image_begin_read_from_file @ 140db62b0

int __cdecl png_image_begin_read_from_file(png_image *param_1,char *param_2)

{
  undefined1 *puVar1;
  int iVar2;
  FILE *_File;
  int *piVar3;
  char *pcVar4;
  
  if (param_1 == (png_image *)0x0) {
    return 0;
  }
  if (param_1->version == 1) {
    if (param_2 == (char *)0x0) {
      pcVar4 = "png_image_begin_read_from_file: invalid argument";
    }
    else {
      _File = fopen(param_2,"rb");
      if (_File != (FILE *)0x0) {
        iVar2 = png_image_read_init(param_1);
        if (iVar2 == 0) {
          fclose(_File);
          return 0;
        }
        param_1->opaque->png_ptr->io_ptr = _File;
        param_1->opaque->owned_file = 1;
        iVar2 = png_safe_execute(param_1,png_image_read_header,param_1);
        return iVar2;
      }
      piVar3 = _errno();
      pcVar4 = strerror(*piVar3);
    }
  }
  else {
    pcVar4 = "png_image_begin_read_from_file: incorrect PNG_IMAGE_VERSION";
  }
  iVar2 = png_image_error(param_1,pcVar4);
  return iVar2;
}

// png_image_begin_read_from_memory @ 140db6370

int __cdecl png_image_begin_read_from_memory(png_image *param_1,void *param_2,ulong64 param_3)

{
  int iVar1;
  char *pcVar2;
  
  if (param_1 == (png_image *)0x0) {
    return 0;
  }
  if (param_1->version == 1) {
    if (param_3 != 0 && param_2 != (void *)0x0) {
      iVar1 = png_image_read_init(param_1);
      if (iVar1 == 0) {
        return 0;
      }
      param_1->opaque->memory = param_2;
      param_1->opaque->size = param_3;
      param_1->opaque->png_ptr->io_ptr = param_1;
      param_1->opaque->png_ptr->read_data_fn = png_image_memory_read;
      iVar1 = png_safe_execute(param_1,png_image_read_header,param_1);
      return iVar1;
    }
    pcVar2 = "png_image_begin_read_from_memory: invalid argument";
  }
  else {
    pcVar2 = "png_image_begin_read_from_memory: incorrect PNG_IMAGE_VERSION";
  }
  iVar1 = png_image_error(param_1,pcVar2);
  return iVar1;
}

// png_image_memory_read @ 140db6420

void __cdecl png_image_memory_read(png_struct_def_conflict *param_1,uchar *param_2,ulong64 param_3)

{
  longlong lVar1;
  void *_Src;
  ulonglong uVar2;
  
  if (param_1 != (png_struct_def_conflict *)0x0) {
    if ((param_1->io_ptr == (longlong *)0x0) || (lVar1 = *(longlong *)param_1->io_ptr, lVar1 == 0))
    {
                    /* WARNING: Subroutine does not return */
      png_error(param_1,"invalid memory read");
    }
    _Src = *(void **)(lVar1 + 0x18);
    if ((_Src == (void *)0x0) || (uVar2 = *(ulonglong *)(lVar1 + 0x20), uVar2 < param_3)) {
                    /* WARNING: Subroutine does not return */
      png_error(param_1,"read beyond end of data");
    }
    memcpy(param_2,_Src,param_3);
    *(ulong64 *)(lVar1 + 0x18) = (longlong)_Src + param_3;
    *(ulonglong *)(lVar1 + 0x20) = uVar2 - param_3;
  }
  return;
}

// png_image_finish_read @ 140db64a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

int __cdecl
png_image_finish_read
          (png_image *param_1,png_color_struct *param_2,void *param_3,int param_4,void *param_5)

{
  code *pcVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  char *pcVar6;
  undefined1 auStack_98 [32];
  png_image *local_78;
  void *local_70;
  ulonglong local_68;
  void *pvStack_60;
  png_color_struct *local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_98;
  if (param_1 == (png_image *)0x0) {
    if ((local_28 ^ (ulonglong)auStack_98) == __security_cookie.value) {
      return 0;
    }
LAB_140db6670:
    pcVar1 = (code *)swi(3);
    iVar2 = (*pcVar1)();
    return iVar2;
  }
  if (param_1->version == 1) {
    uVar3 = param_1->format;
    uVar4 = 1;
    if ((uVar3 & 8) == 0) {
      uVar4 = (uVar3 & 3) + 1;
    }
    if ((uint)(0x7fffffff / (ulonglong)uVar4) < param_1->width) {
      pcVar6 = "png_image_finish_read: row_stride too large";
    }
    else {
      uVar4 = uVar4 * param_1->width;
      if (param_4 == 0) {
        param_4 = uVar4;
      }
      uVar5 = -param_4;
      if (-param_4 < 0) {
        uVar5 = param_4;
      }
      if (((param_3 == (void *)0x0) || (param_1->opaque == (png_control *)0x0)) || (uVar5 < uVar4))
      {
        pcVar6 = "png_image_finish_read: invalid argument";
      }
      else {
        uVar4 = 1;
        if ((uVar3 & 8) == 0) {
          uVar4 = ((uVar3 >> 2 & 1) != 0) + 1;
        }
        if ((uint)((0xffffffff / (ulonglong)uVar4) / (ulonglong)uVar5) < param_1->height) {
          pcVar6 = "png_image_finish_read: image too large";
        }
        else {
          if (((uVar3 & 8) == 0) || ((param_5 != (void *)0x0 && (param_1->colormap_entries != 0))))
          {
            uStack_50 = 0;
            local_38 = 0;
            uStack_30 = 0;
            local_48 = 0;
            uStack_40 = 0;
            local_68 = (ulonglong)(uint)param_4;
            pvStack_60 = param_5;
            local_78 = param_1;
            local_70 = param_3;
            local_58 = param_2;
            if ((uVar3 & 8) == 0) {
              uVar3 = png_safe_execute(param_1,png_image_read_direct,&local_78);
            }
            else {
              iVar2 = png_safe_execute(param_1,png_image_read_colormap,&local_78);
              if (iVar2 == 0) {
                uVar3 = 0;
              }
              else {
                iVar2 = png_safe_execute(param_1,png_image_read_colormapped,&local_78);
                uVar3 = (uint)(iVar2 != 0);
              }
            }
            png_image_free(param_1);
            if ((local_28 ^ (ulonglong)auStack_98) == __security_cookie.value) {
              return uVar3;
            }
            goto LAB_140db6670;
          }
          pcVar6 = "png_image_finish_read[color-map]: no color-map";
        }
      }
    }
  }
  else {
    pcVar6 = "png_image_finish_read: damaged PNG_IMAGE_VERSION";
  }
  iVar2 = png_image_error(param_1,pcVar6);
  return iVar2;
}

// png_image_read_colormap @ 140db6680

/* WARNING: Type propagation algorithm not settling */

int __cdecl png_image_read_colormap(void *param_1)

{
  byte bVar1;
  uchar uVar2;
  undefined8 *puVar3;
  png_struct_def_conflict *ppVar4;
  byte *pbVar5;
  bool bVar6;
  uint uVar7;
  ushort uVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  int iVar21;
  int iVar22;
  uint uVar23;
  int iVar24;
  int iVar25;
  uint uVar26;
  size_t _Size;
  uchar *puVar27;
  uint uVar28;
  uint uVar29;
  int iVar30;
  ulonglong uVar31;
  int iVar32;
  uint uVar33;
  uint uVar34;
  int iVar35;
  int iVar36;
  uint uVar37;
  uint uVar38;
  uint uVar39;
  int iVar40;
  uint uVar41;
  uint uVar42;
  ulonglong uVar43;
  uint uVar44;
  int iVar45;
  int iVar46;
  int iVar47;
  int iVar48;
  int iVar49;
  int iVar50;
  int iVar51;
  int iVar52;
  int iVar53;
  int iVar54;
  uint uVar55;
  int iVar56;
  int iVar57;
  int iVar58;
  int iVar59;
  int iVar60;
  int iVar61;
  ulonglong uVar62;
  int iVar63;
  int iVar64;
  int iVar65;
  uchar *puVar66;
  int iVar67;
  bool bVar68;
  undefined1 auVar69 [16];
  undefined1 auStackY_1e8 [32];
  int iVar70;
  png_color_16_struct local_52;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_1e8;
  puVar3 = *(undefined8 **)param_1;
  ppVar4 = *(png_struct_def_conflict **)*puVar3;
  uVar33 = *(uint *)((longlong)puVar3 + 0x14);
  uVar9 = uVar33 & 4;
  iVar10 = 2 - (uint)(uVar9 == 0);
  bVar1 = ppVar4->color_type;
  if ((bVar1 & 4) == 0) {
    if (ppVar4->num_trans == 0 || (uVar33 & 1) != 0) goto LAB_140db66fa;
LAB_140db6725:
    uVar31 = 0;
    uVar34 = 0;
    if (uVar9 == 0) {
      pbVar5 = *(byte **)((longlong)param_1 + 0x20);
      if (pbVar5 == (byte *)0x0) {
                    /* WARNING: Subroutine does not return */
        png_error(ppVar4,"background color must be supplied to remove alpha/transparency");
      }
      uVar31 = (ulonglong)pbVar5[1];
      if ((uVar33 & 2) == 0) {
        uVar34 = (uint)pbVar5[1];
        goto LAB_140db675c;
      }
      uVar37 = (uint)*pbVar5;
      uVar34 = (uint)pbVar5[2];
      uVar8 = (ppVar4->colorspace).flags;
    }
    else {
LAB_140db675c:
      uVar8 = (ppVar4->colorspace).flags;
      uVar37 = uVar34;
    }
  }
  else {
    if ((uVar33 & 1) == 0) goto LAB_140db6725;
LAB_140db66fa:
    uVar34 = 0xffff;
    if (uVar9 == 0) {
      uVar34 = 0xff;
    }
    uVar31 = (ulonglong)uVar34;
    uVar8 = (ppVar4->colorspace).flags;
    uVar37 = uVar34;
  }
  if ((uVar8 & 1) == 0) {
    if ((ppVar4->bit_depth != '\x10') || (iVar13 = 100000, (*(byte *)(puVar3 + 3) & 4) != 0)) {
      iVar13 = 0xb18f;
    }
    (ppVar4->colorspace).gamma = iVar13;
    (ppVar4->colorspace).flags = uVar8 | 1;
  }
  uVar28 = (uint)uVar31;
  switch(bVar1) {
  case 0:
    if (ppVar4->bit_depth < 9) {
      uVar14 = 1 << (ppVar4->bit_depth & 0x1f);
      if (*(uint *)((longlong)puVar3 + 0x1c) < uVar14) {
                    /* WARNING: Subroutine does not return */
        png_error(ppVar4,"gray[8] color-map: too few entries");
      }
      uVar44 = 0;
      if (ppVar4->num_trans == 0) {
        uVar55 = 0x100;
        uVar9 = 0;
      }
      else {
        uVar55 = (uint)(ppVar4->trans_color).gray;
        uVar15 = 0xffff;
        if (uVar9 == 0) {
          uVar15 = 0xff;
        }
        uVar9 = 0;
        if ((uVar33 & 1) == 0) {
          uVar9 = uVar15;
        }
      }
      uVar33 = 0;
      do {
        uVar15 = uVar37;
        uVar16 = uVar55;
        uVar23 = uVar28;
        uVar38 = uVar34;
        uVar39 = uVar9;
        iVar13 = iVar10;
        if (uVar55 != uVar44) {
          uVar15 = uVar33;
          uVar16 = uVar44;
          uVar23 = uVar33;
          uVar38 = uVar33;
          uVar39 = 0xff;
          iVar13 = 3;
        }
        png_create_colormap_entry(param_1,uVar16,uVar15,uVar23,uVar38,uVar39,iVar13);
        uVar44 = uVar44 + 1;
        uVar33 = uVar33 + 0xff / (byte)((char)uVar14 - 1U);
      } while (uVar14 != uVar44);
      uVar33 = 0;
      if (ppVar4->bit_depth < 8) {
        png_set_packing(ppVar4);
      }
    }
    else {
      if (*(uint *)((longlong)puVar3 + 0x1c) < 0x100) {
                    /* WARNING: Subroutine does not return */
        png_error(ppVar4,"gray[16] color-map: too few entries");
      }
      uVar14 = 0;
      do {
        png_create_colormap_entry(param_1,uVar14,uVar14,uVar14,uVar14,0xff,1);
        uVar14 = uVar14 + 1;
      } while (uVar14 != 0x100);
      if (ppVar4->num_trans == 0) {
        uVar33 = 0;
        uVar14 = 0x100;
        goto LAB_140db82ba;
      }
      uVar14 = 0;
      if ((uVar33 & 1) == 0) {
        if ((uVar37 == uVar28) && (uVar28 == uVar34)) {
          uVar33 = uVar34;
          if (uVar9 != 0) {
            uVar33 = uVar34 * 0xff >> 0xf;
            uVar33 = ((uint)png_sRGB_delta[uVar33] * (uVar34 * 0xff & 0x7fff) >> 0xc) +
                     (uint)png_sRGB_base[uVar33] >> 8 & 0xff;
            png_create_colormap_entry(param_1,uVar33,uVar34,uVar34,uVar34,0xffff,2);
          }
          local_52.index = '\0';
          auVar69 = pshuflw(ZEXT416(uVar33),ZEXT416(uVar33),0);
          local_52._2_8_ = auVar69._0_8_;
          uVar33 = 0;
          png_set_background_fixed(ppVar4,&local_52,1,0,0);
          uVar14 = 0x100;
          goto LAB_140db82ba;
        }
        uVar14 = 0xffff;
        if (uVar9 == 0) {
          uVar14 = 0xff;
        }
      }
      png_create_colormap_entry(param_1,0xfe,uVar37,uVar28,uVar34,uVar14,iVar10);
      uVar14 = 0x100;
      uVar33 = 2;
      iVar13 = 1;
      uVar8 = ppVar4->num_trans;
joined_r0x000140db7b38:
      if ((uVar8 != 0) && ((ppVar4->color_type & 4) == 0)) {
        png_set_tRNS_to_alpha(ppVar4);
      }
LAB_140db82b0:
      if (iVar13 != 3) {
        if (iVar13 != 1) goto LAB_140db82dc;
        goto LAB_140db82ba;
      }
    }
    break;
  default:
                    /* WARNING: Subroutine does not return */
    png_error(ppVar4,"invalid PNG color type");
  case 2:
  case 6:
    if ((uVar33 & 2) == 0) {
      png_set_rgb_to_gray_fixed(ppVar4,1,-1,-1);
      if (ppVar4->color_type == '\x06') {
        if ((uVar33 & 1) != 0) goto LAB_140db757a;
        if (*(uint *)((longlong)puVar3 + 0x1c) < 0x100) goto LAB_140db8c23;
LAB_140db74e3:
        iVar13 = (ppVar4->colorspace).gamma;
        if ((iVar13 < 100000) &&
           ((iVar13 == 0 || (iVar13 = png_gamma_significant((iVar13 * 0xb + 2) / 5), iVar13 == 0))))
        goto LAB_140db7ee7;
        uVar33 = 0;
        do {
          png_create_colormap_entry(param_1,uVar33,uVar33,uVar33,uVar33,0xff,3);
          uVar33 = uVar33 + 1;
        } while (uVar33 != 0x100);
        iVar13 = 3;
        bVar6 = true;
        bVar68 = true;
        uVar2 = ppVar4->color_type;
      }
      else {
        if ((uVar33 & 1) != 0 && ppVar4->num_trans != 0) {
LAB_140db757a:
          if (*(uint *)((longlong)puVar3 + 0x1c) < 0x100) {
                    /* WARNING: Subroutine does not return */
            png_error(ppVar4,"rgb[ga] color-map: too few entries");
          }
          uVar14 = make_ga_colormap(param_1);
          uVar33 = 1;
          uVar8 = ppVar4->num_trans;
          goto joined_r0x000140db7edc;
        }
        if (*(uint *)((longlong)puVar3 + 0x1c) < 0x100) {
LAB_140db8c23:
                    /* WARNING: Subroutine does not return */
          png_error(ppVar4,"rgb[gray] color-map: too few entries");
        }
        if (ppVar4->num_trans != 0) goto LAB_140db74e3;
LAB_140db7ee7:
        uVar33 = 0;
        do {
          png_create_colormap_entry(param_1,uVar33,uVar33,uVar33,uVar33,0xff,1);
          uVar33 = uVar33 + 1;
        } while (uVar33 != 0x100);
        iVar13 = 1;
        bVar6 = false;
        bVar68 = false;
        uVar2 = ppVar4->color_type;
      }
      if ((uVar2 == '\x06') || (bVar68 = bVar6, ppVar4->num_trans != 0)) {
        if (bVar68) {
          uVar33 = uVar28;
          if (uVar9 == 0) {
            uVar33 = (uint)png_sRGB_table[uVar31];
          }
          uVar8 = png_gamma_16bit_correct(uVar33,(ppVar4->colorspace).gamma);
          uVar33 = (uint)uVar8 * 0xff + 0x807f >> 0x10;
LAB_140db7fcd:
          png_create_colormap_entry(param_1,uVar33,uVar28,uVar28,uVar28,0,iVar10);
          uVar28 = uVar33;
        }
        else if (uVar9 != 0) {
          uVar33 = uVar28 * 0xff >> 0xf;
          uVar33 = ((uint)png_sRGB_delta[uVar33] * (uVar28 * 0xff & 0x7fff) >> 0xc) +
                   (uint)png_sRGB_base[uVar33] >> 8 & 0xff;
          iVar10 = 2;
          goto LAB_140db7fcd;
        }
        local_52.index = '\0';
        auVar69 = pshuflw(ZEXT416(uVar28),ZEXT416(uVar28),0);
        local_52._2_8_ = auVar69._0_8_;
        uVar33 = 0;
        png_set_background_fixed(ppVar4,&local_52,1,0,0);
        uVar14 = 0x100;
        uVar8 = ppVar4->num_trans;
        goto joined_r0x000140db7b38;
      }
      uVar33 = 0;
      uVar14 = 0x100;
      goto LAB_140db82b0;
    }
    if ((bVar1 == 6) || (ppVar4->num_trans != 0)) {
      if ((uVar33 & 1) != 0) {
        if (*(uint *)((longlong)puVar3 + 0x1c) < 0xf4) {
                    /* WARNING: Subroutine does not return */
          png_error(ppVar4,"rgb+alpha color-map: too few entries");
        }
        uVar33 = make_rgb_colormap(param_1);
        png_create_colormap_entry(param_1,uVar33,0xff,0xff,0xff,0,1);
        png_create_colormap_entry(param_1,uVar33 + 1,0,0,0,0x80,1);
        png_create_colormap_entry(param_1,uVar33 + 2,0,0,0x7f,0x80,1);
        png_create_colormap_entry(param_1,uVar33 + 3,0,0,0xff,0x80,1);
        png_create_colormap_entry(param_1,uVar33 + 4,0,0x7f,0,0x80,1);
        png_create_colormap_entry(param_1,uVar33 + 5,0,0x7f,0x7f,0x80,1);
        png_create_colormap_entry(param_1,uVar33 + 6,0,0x7f,0xff,0x80,1);
        png_create_colormap_entry(param_1,uVar33 + 7,0,0xff,0,0x80,1);
        png_create_colormap_entry(param_1,uVar33 + 8,0,0xff,0x7f,0x80,1);
        png_create_colormap_entry(param_1,uVar33 + 9,0,0xff,0xff,0x80,1);
        png_create_colormap_entry(param_1,uVar33 + 10,0x7f,0,0,0x80,1);
        png_create_colormap_entry(param_1,uVar33 + 0xb,0x7f,0,0x7f,0x80,1);
        png_create_colormap_entry(param_1,uVar33 + 0xc,0x7f,0,0xff,0x80,1);
        png_create_colormap_entry(param_1,uVar33 + 0xd,0x7f,0x7f,0,0x80,1);
        png_create_colormap_entry(param_1,uVar33 + 0xe,0x7f,0x7f,0x7f,0x80,1);
        png_create_colormap_entry(param_1,uVar33 + 0xf,0x7f,0x7f,0xff,0x80,1);
        png_create_colormap_entry(param_1,uVar33 + 0x10,0x7f,0xff,0,0x80,1);
        png_create_colormap_entry(param_1,uVar33 + 0x11,0x7f,0xff,0x7f,0x80,1);
        png_create_colormap_entry(param_1,uVar33 + 0x12,0x7f,0xff,0xff,0x80,1);
        png_create_colormap_entry(param_1,uVar33 + 0x13,0xff,0,0,0x80,1);
        png_create_colormap_entry(param_1,uVar33 + 0x14,0xff,0,0x7f,0x80,1);
        png_create_colormap_entry(param_1,uVar33 + 0x15,0xff,0,0xff,0x80,1);
        png_create_colormap_entry(param_1,uVar33 + 0x16,0xff,0x7f,0,0x80,1);
        png_create_colormap_entry(param_1,uVar33 + 0x17,0xff,0x7f,0x7f,0x80,1);
        png_create_colormap_entry(param_1,uVar33 + 0x18,0xff,0x7f,0xff,0x80,1);
        png_create_colormap_entry(param_1,uVar33 + 0x19,0xff,0xff,0,0x80,1);
        png_create_colormap_entry(param_1,uVar33 + 0x1a,0xff,0xff,0x7f,0x80,1);
        uVar14 = uVar33 + 0x1c;
        png_create_colormap_entry(param_1,uVar33 + 0x1b,0xff,0xff,0xff,0x80,1);
        uVar33 = 4;
        iVar13 = 1;
        uVar8 = ppVar4->num_trans;
        goto joined_r0x000140db7b38;
      }
      if (*(uint *)((longlong)puVar3 + 0x1c) < 0xf4) {
                    /* WARNING: Subroutine does not return */
        png_error(ppVar4,"rgb-alpha color-map: too few entries");
      }
      _Size = (ulonglong)(uVar9 >> 2) * 3 + 3;
      uVar14 = make_rgb_colormap(param_1);
      png_create_colormap_entry(param_1,uVar14,uVar37,uVar28,uVar34,0,iVar10);
      uVar33 = uVar37;
      uVar44 = uVar28;
      uVar55 = uVar28;
      if (uVar9 != 0) {
        uVar33 = uVar37 * 0xff >> 0xf;
        uVar33 = ((uint)png_sRGB_delta[uVar33] * (uVar37 * 0xff & 0x7fff) >> 0xc) +
                 (uint)png_sRGB_base[uVar33] >> 8 & 0xff;
        uVar44 = uVar28 * 0xff >> 0xf;
        uVar44 = ((uint)png_sRGB_delta[uVar44] * (uVar28 * 0xff & 0x7fff) >> 0xc) +
                 (uint)png_sRGB_base[uVar44] >> 8 & 0xff;
        uVar55 = uVar34 * 0xff >> 0xf;
        uVar55 = ((uint)png_sRGB_delta[uVar55] * (uVar34 * 0xff & 0x7fff) >> 0xc) +
                 (uint)png_sRGB_base[uVar55] >> 8 & 0xff;
      }
      iVar10 = (int)_Size;
      iVar10 = memcmp((void *)((ulonglong)(uVar14 * iVar10) +
                              *(longlong *)((longlong)param_1 + 0x18)),
                      (void *)((ulonglong)
                               (((uVar55 * 5 + 0x82 >> 8) +
                                 ((uVar44 * 5 + 0x82 >> 8) + (uVar33 * 5 + 0x82 >> 8) * 6) * 6 &
                                0xff) * iVar10) + *(longlong *)((longlong)param_1 + 0x18)),_Size);
      if (iVar10 == 0) {
        local_52.index = '\0';
        local_52.green = (ushort)uVar31;
        local_52.red = (ushort)uVar37;
        local_52.blue = (ushort)uVar34;
        local_52.gray = (ushort)uVar31;
        png_set_background_fixed(ppVar4,&local_52,1,0,0);
        goto LAB_140db8158;
      }
      iVar13 = uVar34 * 0x7f7f;
      iVar10 = uVar28 * 0x7f7f;
      uVar33 = (uint)png_sRGB_table[0] * 0x8080 + iVar10;
      uVar38 = uVar33 + (uVar33 >> 0x10) + 0x8000 >> 0x10;
      uVar33 = (uint)png_sRGB_table[0] * 0x8080 + iVar13;
      uVar23 = uVar33 + (uVar33 >> 0x10) + 0x8000 >> 0x10;
      uVar33 = (uint)png_sRGB_table[0x7f] * 0x8080 + iVar13;
      uVar39 = uVar33 + (uVar33 >> 0x10) + 0x8000 >> 0x10;
      iVar40 = (uint)png_sRGB_table[0xff] * 0x8080;
      uVar33 = iVar13 + iVar40;
      uVar15 = uVar33 + (uVar33 >> 0x10) + 0x8000 >> 0x10;
      uVar33 = (uint)png_sRGB_table[0x7f] * 0x8080 + iVar10;
      uVar16 = (uVar33 >> 0x10) + uVar33 + 0x8000 >> 0x10;
      uVar33 = iVar40 + iVar10;
      uVar55 = (uVar33 >> 0x10) + uVar33 + 0x8000 >> 0x10;
      uVar28 = (uint)png_sRGB_table[0];
      uVar44 = (uint)png_sRGB_table[0x7f];
      iVar32 = (uint)png_sRGB_table[0xff] * 0x80;
      iVar36 = 1;
      iVar63 = 9;
      iVar67 = 8;
      iVar25 = 7;
      iVar10 = 6;
      iVar13 = 5;
      iVar56 = 2;
      iVar60 = 3;
      iVar40 = 4;
      uVar33 = 0;
      do {
        if (uVar9 == 0) {
          iVar70 = (uint)png_sRGB_table[uVar34] * 0x7f;
          iVar30 = (uint)png_sRGB_table[uVar31] * 0x7f;
          uVar41 = (uint)png_sRGB_table[uVar37] * 0x7f + (uint)png_sRGB_table[uVar33] * 0x80;
          uVar11 = uVar41 >> 0xf;
          uVar29 = ((uint)png_sRGB_delta[uVar11] * (uVar41 & 0x7fff) >> 0xc) +
                   (uint)png_sRGB_base[uVar11] >> 8 & 0xff;
          uVar11 = iVar30 + uVar28 * 0x80;
          uVar41 = uVar11 >> 0xf;
          uVar26 = ((uint)png_sRGB_delta[uVar41] * (uVar11 & 0x7fff) >> 0xc) +
                   (uint)png_sRGB_base[uVar41] >> 8 & 0xff;
          uVar42 = uVar28 * 0x80 + iVar70;
          uVar17 = uVar42 >> 0xf;
          uVar12 = ((uint)png_sRGB_delta[uVar17] * (uVar42 & 0x7fff) >> 0xc) +
                   (uint)png_sRGB_base[uVar17] >> 8 & 0xff;
          png_create_colormap_entry(param_1,uVar14 + iVar36,uVar29,uVar26,uVar12,0,1);
          uVar11 = iVar70 + uVar44 * 0x80;
          uVar41 = uVar11 >> 0xf;
          uVar11 = ((uint)png_sRGB_delta[uVar41] * (uVar11 & 0x7fff) >> 0xc) +
                   (uint)png_sRGB_base[uVar41] >> 8;
          uVar7 = uVar11 & 0xff;
          png_create_colormap_entry(param_1,uVar14 + iVar56,uVar29,uVar26,uVar11 & 0xff,0,1);
          uVar41 = iVar70 + iVar32;
          uVar11 = uVar41 >> 0xf;
          uVar41 = ((uint)png_sRGB_delta[uVar11] * (uVar41 & 0x7fff) >> 0xc) +
                   (uint)png_sRGB_base[uVar11] >> 8 & 0xff;
          png_create_colormap_entry(param_1,uVar14 + iVar60,uVar29,uVar26,uVar41,0,1);
          uVar11 = iVar30 + uVar44 * 0x80;
          uVar26 = uVar11 >> 0xf;
          uVar11 = ((uint)png_sRGB_delta[uVar26] * (uVar11 & 0x7fff) >> 0xc) +
                   (uint)png_sRGB_base[uVar26] >> 8 & 0xff;
          png_create_colormap_entry(param_1,uVar14 + iVar40,uVar29,uVar11,uVar12,0,1);
          png_create_colormap_entry(param_1,uVar14 + iVar13,uVar29,uVar11,uVar7,0,1);
          png_create_colormap_entry(param_1,uVar14 + iVar10,uVar29,uVar11,uVar41,0,1);
          uVar12 = iVar30 + iVar32;
          uVar11 = uVar12 >> 0xf;
          uVar11 = ((uint)png_sRGB_delta[uVar11] * (uVar12 & 0x7fff) >> 0xc) +
                   (uint)png_sRGB_base[uVar11] >> 8 & 0xff;
          png_create_colormap_entry
                    (param_1,uVar14 + iVar25,uVar29,uVar11,
                     ((uint)png_sRGB_delta[uVar17] * (uVar42 & 0x7fff) >> 0xc) +
                     (uint)png_sRGB_base[uVar17] >> 8 & 0xff,0,1);
          png_create_colormap_entry(param_1,uVar14 + iVar67,uVar29,uVar11,uVar7,0,1);
          iVar70 = 1;
        }
        else {
          uVar11 = ((uint)png_sRGB_table[uVar33] * 0x80 + uVar37 * 0x7f) * 0x101;
          uVar29 = (uVar11 >> 0x10) + uVar11 + 0x8000 >> 0x10;
          png_create_colormap_entry(param_1,uVar14 + iVar36,uVar29,uVar38,uVar23,0,2);
          png_create_colormap_entry(param_1,uVar14 + iVar56,uVar29,uVar38,uVar39,0,2);
          png_create_colormap_entry(param_1,iVar60 + uVar14,uVar29,uVar38,uVar15,0,2);
          png_create_colormap_entry(param_1,uVar14 + iVar40,uVar29,uVar16,uVar23,0,2);
          png_create_colormap_entry(param_1,uVar14 + iVar13,uVar29,uVar16,uVar39,0,2);
          png_create_colormap_entry(param_1,uVar14 + iVar10,uVar29,uVar16,uVar15,0,2);
          png_create_colormap_entry(param_1,uVar14 + iVar25,uVar29,uVar55,uVar23,0,2);
          png_create_colormap_entry(param_1,uVar14 + iVar67,uVar29,uVar55,uVar39,0,2);
          iVar70 = 2;
          uVar11 = uVar55;
          uVar41 = uVar15;
        }
        png_create_colormap_entry(param_1,uVar14 + iVar63,uVar29,uVar11,uVar41,0,iVar70);
        iVar36 = iVar36 + 9;
        iVar63 = iVar63 + 9;
        iVar67 = iVar67 + 9;
        iVar25 = iVar25 + 9;
        iVar10 = iVar10 + 9;
        iVar13 = iVar13 + 9;
        iVar56 = iVar56 + 9;
        iVar60 = iVar60 + 9;
        iVar40 = iVar40 + 9;
        bVar68 = uVar33 < 0x80;
        uVar33 = uVar33 * 2 | 0x7f;
      } while (bVar68);
      uVar14 = uVar14 + iVar36;
      uVar33 = 4;
      uVar8 = ppVar4->num_trans;
joined_r0x000140db7edc:
      iVar13 = 1;
      goto joined_r0x000140db7b38;
    }
    if (*(uint *)((longlong)puVar3 + 0x1c) < 0xd8) {
                    /* WARNING: Subroutine does not return */
      png_error(ppVar4,"rgb color-map: too few entries");
    }
    uVar14 = make_rgb_colormap(param_1);
LAB_140db8158:
    uVar33 = 3;
    goto LAB_140db82ba;
  case 3:
    uVar31 = (ulonglong)ppVar4->num_trans;
    if (uVar31 == 0) {
      puVar27 = (uchar *)0x0;
    }
    else {
      puVar27 = ppVar4->trans_alpha;
    }
    uVar8 = ppVar4->num_palette;
    uVar43 = 0x100;
    if (uVar8 < 0x100) {
      uVar43 = (ulonglong)(uint)uVar8;
    }
    uVar14 = (uint)uVar43;
    if (*(uint *)((longlong)puVar3 + 0x1c) < uVar14) {
                    /* WARNING: Subroutine does not return */
      png_error(ppVar4,"palette color-map: too few entries");
    }
    if (uVar8 != 0) {
      puVar66 = &ppVar4->palette->blue;
      uVar62 = 0;
      do {
        while( true ) {
          if ((puVar27 != (uchar *)0x0 && (uVar33 & 1) == 0) && uVar62 < uVar31) break;
LAB_140db7c70:
          uVar16 = 0xff;
          if (puVar27 != (uchar *)0x0 && uVar62 < uVar31) {
            uVar16 = (uint)puVar27[uVar62];
          }
          uVar55 = (uint)puVar66[-1];
          uVar44 = (uint)((png_color_struct *)(puVar66 + -2))->red;
          uVar15 = (uint)*puVar66;
          iVar13 = 3;
LAB_140db7bf6:
          png_create_colormap_entry(param_1,(uint)uVar62,uVar44,uVar55,uVar15,uVar16,iVar13);
          uVar62 = uVar62 + 1;
          puVar66 = puVar66 + 3;
          if (uVar43 == uVar62) goto LAB_140db7e8c;
        }
        bVar1 = puVar27[uVar62];
        if (bVar1 == 0xff) goto LAB_140db7c70;
        if (bVar1 == 0) {
          uVar16 = 0;
          uVar44 = uVar37;
          uVar55 = uVar28;
          uVar15 = uVar34;
          iVar13 = iVar10;
          goto LAB_140db7bf6;
        }
        uVar55 = decode_gamma(param_1,(uint)*puVar66,3);
        uVar15 = decode_gamma(param_1,uVar34,iVar10);
        uVar44 = (uint)bVar1;
        uVar55 = (bVar1 ^ 0xff) * uVar15 + uVar55 * bVar1;
        if (uVar9 == 0) {
          uVar55 = ((uint)png_sRGB_delta[uVar55 >> 0xf] * (uVar55 & 0x7fff) >> 0xc) +
                   (uint)png_sRGB_base[uVar55 >> 0xf] >> 8 & 0xff;
        }
        else {
          uVar55 = uVar55 * 0x101 + (uVar55 * 0x101 >> 0x10) + 0x8000 >> 0x10;
          uVar44 = (uint)CONCAT11(bVar1,bVar1);
        }
        bVar1 = puVar27[uVar62];
        uVar15 = decode_gamma(param_1,(uint)puVar66[-1],3);
        uVar16 = decode_gamma(param_1,uVar28,iVar10);
        uVar15 = (bVar1 ^ 0xff) * uVar16 + uVar15 * bVar1;
        if (uVar9 == 0) {
          uVar15 = ((uint)png_sRGB_delta[uVar15 >> 0xf] * (uVar15 & 0x7fff) >> 0xc) +
                   (uint)png_sRGB_base[uVar15 >> 0xf] >> 8 & 0xff;
        }
        else {
          uVar15 = (uVar15 * 0x101 >> 0x10) + uVar15 * 0x101 + 0x8000 >> 0x10;
        }
        bVar1 = puVar27[uVar62];
        uVar16 = decode_gamma(param_1,(uint)((png_color_struct *)(puVar66 + -2))->red,3);
        uVar23 = decode_gamma(param_1,uVar37,iVar10);
        uVar16 = (bVar1 ^ 0xff) * uVar23 + uVar16 * bVar1;
        if (uVar9 == 0) {
          uVar16 = ((uint)png_sRGB_delta[uVar16 >> 0xf] * (uVar16 & 0x7fff) >> 0xc) +
                   (uint)png_sRGB_base[uVar16 >> 0xf] >> 8 & 0xff;
        }
        else {
          uVar16 = uVar16 * 0x101 + (uVar16 * 0x101 >> 0x10) + 0x8000 >> 0x10;
        }
        png_create_colormap_entry(param_1,(uint)uVar62,uVar16,uVar15,uVar55,uVar44,iVar10);
        uVar62 = uVar62 + 1;
        puVar66 = puVar66 + 3;
      } while (uVar43 != uVar62);
    }
LAB_140db7e8c:
    uVar33 = 0;
    if (ppVar4->bit_depth < 8) {
      png_set_packing(ppVar4);
    }
    break;
  case 4:
    if ((uVar33 & 1) == 0) {
      if (((uVar33 & 2) == 0) || ((uVar37 == uVar28 && (uVar28 == uVar34)))) {
        if (*(uint *)((longlong)puVar3 + 0x1c) < 0x100) {
                    /* WARNING: Subroutine does not return */
          png_error(ppVar4,"gray-alpha color-map: too few entries");
        }
        uVar33 = 0;
        do {
          png_create_colormap_entry(param_1,uVar33,uVar33,uVar33,uVar33,0xff,1);
          uVar33 = uVar33 + 1;
        } while (uVar33 != 0x100);
        uVar33 = uVar28;
        if (uVar9 != 0) {
          uVar33 = uVar28 * 0xff >> 0xf;
          uVar33 = ((uint)png_sRGB_delta[uVar33] * (uVar28 * 0xff & 0x7fff) >> 0xc) +
                   (uint)png_sRGB_base[uVar33] >> 8 & 0xff;
          png_create_colormap_entry(param_1,uVar33,uVar28,uVar28,uVar28,0xffff,2);
        }
        local_52.index = '\0';
        auVar69 = pshuflw(ZEXT416(uVar33),ZEXT416(uVar33),0);
        local_52._2_8_ = auVar69._0_8_;
        uVar33 = 0;
        png_set_background_fixed(ppVar4,&local_52,1,0,0);
        uVar14 = 0x100;
      }
      else {
        if (*(uint *)((longlong)puVar3 + 0x1c) < 0x100) {
                    /* WARNING: Subroutine does not return */
          png_error(ppVar4,"ga-alpha color-map: too few entries");
        }
        uVar14 = 0x73;
        uVar33 = 0;
        do {
          uVar44 = (uVar14 & 0xffff) * 0x1bb5 >> 0x10;
          uVar55 = ((uVar14 - uVar44 & 0xffff) >> 1) + uVar44 >> 7;
          uVar44 = uVar33 + 1;
          png_create_colormap_entry(param_1,uVar33,uVar55,uVar55,uVar55,0xff,1);
          uVar14 = uVar14 + 0x100;
          uVar33 = uVar44;
        } while (uVar44 != 0xe7);
        uVar33 = 0xffff;
        if (uVar9 == 0) {
          uVar33 = 0xff;
        }
        png_create_colormap_entry(param_1,0xe7,uVar37,uVar28,uVar34,uVar33,iVar10);
        if (uVar9 == 0) {
          uVar37 = (uint)png_sRGB_table[uVar37];
          uVar28 = (uint)png_sRGB_table[uVar31];
          uVar34 = (uint)png_sRGB_table[uVar34];
        }
        iVar45 = (uint)png_sRGB_table[0xff] * 0x33;
        iVar57 = uVar37 * 0xcc;
        iVar35 = uVar28 * 0xcc;
        iVar64 = uVar34 * 0xcc;
        iVar10 = (uint)png_sRGB_table[0xcc] * 0x33;
        iVar24 = iVar10 + uVar34 * -0x33;
        iVar40 = (uint)png_sRGB_table[0x99] * 0x33;
        iVar18 = iVar40 + uVar34 * -0x33;
        iVar25 = (uint)png_sRGB_table[0x66] * 0x33;
        iVar19 = iVar25 + uVar34 * -0x33;
        iVar13 = (uint)png_sRGB_table[0x33] * 0x33;
        iVar20 = iVar13 + uVar34 * -0x33;
        iVar21 = (uint)png_sRGB_table[0] * 0x33;
        iVar46 = iVar10 + uVar28 * -0x33;
        iVar47 = iVar40 + uVar28 * -0x33;
        iVar48 = iVar25 + uVar28 * -0x33;
        iVar49 = iVar13 + uVar28 * -0x33;
        iVar50 = iVar10 + uVar37 * -0x33;
        iVar51 = iVar40 + uVar37 * -0x33;
        iVar52 = iVar25 + uVar37 * -0x33;
        iVar53 = iVar13 + uVar37 * -0x33;
        iVar54 = 0;
        iVar58 = 0;
        iVar22 = 0;
        iVar59 = 0;
        iVar61 = 0;
        iVar65 = 0;
        uVar33 = 0xe8;
        iVar32 = iVar40;
        iVar36 = iVar40;
        iVar56 = iVar25;
        iVar60 = iVar25;
        iVar63 = iVar13;
        iVar67 = iVar13;
        iVar70 = iVar10;
        iVar30 = iVar10;
        do {
          uVar9 = iVar64 + iVar21 + iVar22;
          uVar14 = uVar9 >> 0xf;
          uVar44 = iVar35 + iVar21 + iVar58;
          uVar15 = uVar44 >> 0xf;
          uVar55 = iVar57 + iVar21 + iVar54;
          uVar16 = uVar55 >> 0xf;
          png_create_colormap_entry
                    (param_1,uVar33,
                     ((uint)png_sRGB_delta[uVar16] * (uVar55 & 0x7fff) >> 0xc) +
                     (uint)png_sRGB_base[uVar16] >> 8 & 0xff,
                     ((uint)png_sRGB_delta[uVar15] * (uVar44 & 0x7fff) >> 0xc) +
                     (uint)png_sRGB_base[uVar15] >> 8 & 0xff,
                     ((uint)png_sRGB_delta[uVar14] * (uVar9 & 0x7fff) >> 0xc) +
                     (uint)png_sRGB_base[uVar14] >> 8 & 0xff,0xff,1);
          uVar9 = (uint)(iVar64 + iVar13) >> 0xf;
          uVar14 = (uint)(iVar63 + iVar35) >> 0xf;
          uVar44 = (uint)(iVar67 + iVar57) >> 0xf;
          png_create_colormap_entry
                    (param_1,uVar33 + 1,
                     ((uint)png_sRGB_delta[uVar44] * (iVar67 + iVar57 & 0x7fffU) >> 0xc) +
                     (uint)png_sRGB_base[uVar44] >> 8 & 0xff,
                     ((uint)png_sRGB_delta[uVar14] * (iVar63 + iVar35 & 0x7fffU) >> 0xc) +
                     (uint)png_sRGB_base[uVar14] >> 8 & 0xff,
                     ((uint)png_sRGB_delta[uVar9] * (iVar64 + iVar13 & 0x7fffU) >> 0xc) +
                     (uint)png_sRGB_base[uVar9] >> 8 & 0xff,0xff,1);
          uVar9 = (uint)(iVar56 + iVar64) >> 0xf;
          uVar14 = (uint)(iVar25 + iVar35) >> 0xf;
          uVar44 = (uint)(iVar60 + iVar57) >> 0xf;
          png_create_colormap_entry
                    (param_1,uVar33 + 2,
                     ((uint)png_sRGB_delta[uVar44] * (iVar60 + iVar57 & 0x7fffU) >> 0xc) +
                     (uint)png_sRGB_base[uVar44] >> 8 & 0xff,
                     ((uint)png_sRGB_delta[uVar14] * (iVar25 + iVar35 & 0x7fffU) >> 0xc) +
                     (uint)png_sRGB_base[uVar14] >> 8 & 0xff,
                     ((uint)png_sRGB_delta[uVar9] * (iVar56 + iVar64 & 0x7fffU) >> 0xc) +
                     (uint)png_sRGB_base[uVar9] >> 8 & 0xff,0xff,1);
          uVar9 = (uint)(iVar32 + iVar64) >> 0xf;
          uVar14 = (uint)(iVar40 + iVar35) >> 0xf;
          uVar44 = (uint)(iVar36 + iVar57) >> 0xf;
          png_create_colormap_entry
                    (param_1,uVar33 + 3,
                     ((uint)png_sRGB_delta[uVar44] * (iVar36 + iVar57 & 0x7fffU) >> 0xc) +
                     (uint)png_sRGB_base[uVar44] >> 8 & 0xff,
                     ((uint)png_sRGB_delta[uVar14] * (iVar40 + iVar35 & 0x7fffU) >> 0xc) +
                     (uint)png_sRGB_base[uVar14] >> 8 & 0xff,
                     ((uint)png_sRGB_delta[uVar9] * (iVar32 + iVar64 & 0x7fffU) >> 0xc) +
                     (uint)png_sRGB_base[uVar9] >> 8 & 0xff,0xff,1);
          uVar9 = (uint)(iVar10 + iVar64) >> 0xf;
          uVar14 = (uint)(iVar35 + iVar30) >> 0xf;
          uVar44 = (uint)(iVar57 + iVar70) >> 0xf;
          png_create_colormap_entry
                    (param_1,uVar33 + 4,
                     ((uint)png_sRGB_delta[uVar44] * (iVar57 + iVar70 & 0x7fffU) >> 0xc) +
                     (uint)png_sRGB_base[uVar44] >> 8 & 0xff,
                     ((uint)png_sRGB_delta[uVar14] * (iVar35 + iVar30 & 0x7fffU) >> 0xc) +
                     (uint)png_sRGB_base[uVar14] >> 8 & 0xff,
                     ((uint)png_sRGB_delta[uVar9] * (iVar10 + iVar64 & 0x7fffU) >> 0xc) +
                     (uint)png_sRGB_base[uVar9] >> 8 & 0xff,0xff,1);
          uVar14 = iVar64 + iVar45 + iVar59;
          uVar44 = uVar14 >> 0xf;
          uVar55 = iVar35 + iVar45 + iVar61;
          uVar16 = uVar55 >> 0xf;
          uVar15 = iVar57 + iVar45 + iVar65;
          uVar23 = uVar15 >> 0xf;
          uVar9 = uVar33 + 6;
          png_create_colormap_entry
                    (param_1,uVar33 + 5,
                     ((uint)png_sRGB_delta[uVar23] * (uVar15 & 0x7fff) >> 0xc) +
                     (uint)png_sRGB_base[uVar23] >> 8 & 0xff,
                     ((uint)png_sRGB_delta[uVar16] * (uVar55 & 0x7fff) >> 0xc) +
                     (uint)png_sRGB_base[uVar16] >> 8 & 0xff,
                     ((uint)png_sRGB_delta[uVar44] * (uVar14 & 0x7fff) >> 0xc) +
                     (uint)png_sRGB_base[uVar44] >> 8 & 0xff,0xff,1);
          iVar65 = iVar65 + iVar45 + uVar37 * -0x33;
          iVar61 = iVar61 + iVar45 + uVar28 * -0x33;
          iVar59 = iVar59 + iVar45 + uVar34 * -0x33;
          iVar70 = iVar70 + iVar50;
          iVar30 = iVar30 + iVar46;
          iVar10 = iVar10 + iVar24;
          iVar36 = iVar36 + iVar51;
          iVar40 = iVar40 + iVar47;
          iVar32 = iVar32 + iVar18;
          iVar60 = iVar60 + iVar52;
          iVar25 = iVar25 + iVar48;
          iVar56 = iVar56 + iVar19;
          iVar67 = iVar67 + iVar53;
          iVar63 = iVar63 + iVar49;
          iVar13 = iVar13 + iVar20;
          iVar22 = iVar22 + iVar21 + uVar34 * -0x33;
          iVar58 = iVar58 + iVar21 + uVar28 * -0x33;
          iVar54 = iVar54 + iVar21 + uVar37 * -0x33;
          uVar33 = uVar9;
        } while (uVar9 != 0x100);
        uVar14 = 0x100;
        uVar33 = 1;
      }
    }
    else {
      if (*(uint *)((longlong)puVar3 + 0x1c) < 0x100) {
                    /* WARNING: Subroutine does not return */
        png_error(ppVar4,"gray+alpha color-map: too few entries");
      }
      uVar14 = make_ga_colormap(param_1);
      uVar33 = 1;
    }
LAB_140db82ba:
    png_set_alpha_mode_fixed(ppVar4,0,220000);
  }
  if (8 < ppVar4->bit_depth) {
    png_set_scale_16(ppVar4);
  }
LAB_140db82dc:
  if ((uVar14 < 0x101) && (uVar14 <= *(uint *)((longlong)puVar3 + 0x1c))) {
    *(uint *)((longlong)puVar3 + 0x1c) = uVar14;
                    /* WARNING: Could not recover jumptable at 0x000140db8311. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    iVar10 = (*(code *)((longlong)&DAT_1531f1640 + (longlong)(int)(&DAT_1531f1640)[uVar33]))();
    return iVar10;
  }
                    /* WARNING: Subroutine does not return */
  png_error(ppVar4,"color map overflow (BAD internal error)");
}

// png_image_read_colormapped @ 140db8ca0

int __cdecl png_image_read_colormapped(void *param_1)

{
  png_image *ppVar1;
  png_struct_def_conflict *ppVar2;
  png_info_def *ppVar3;
  int iVar4;
  ulong64 uVar5;
  void *pvVar6;
  uint uVar7;
  longlong lVar8;
  uchar *puVar9;
  
  ppVar1 = *(png_image **)param_1;
  ppVar2 = ppVar1->opaque->png_ptr;
  ppVar3 = ppVar1->opaque->info_ptr;
  iVar4 = 0;
  png_set_keep_unknown_chunks(ppVar2,1,(uchar *)0x0,-1);
  png_set_keep_unknown_chunks(ppVar2,0,"bKGD",6);
  if (*(int *)((longlong)param_1 + 0x48) == 0) {
    iVar4 = png_set_interlace_handling(ppVar2);
  }
  if (ppVar2 != (png_struct_def_conflict *)0x0) {
    if ((ppVar2->flags & 0x40) == 0) {
      png_read_start_row(ppVar2);
      png_read_transform_info(ppVar2,ppVar3);
    }
    else {
      png_app_error(ppVar2,"png_read_update_info/png_start_read_image: duplicate call");
    }
  }
  switch(*(undefined4 *)((longlong)param_1 + 0x48)) {
  case 0:
    if (((ppVar3->color_type == '\x03') || (ppVar3->color_type == '\0')) &&
       (ppVar3->bit_depth == '\b')) {
LAB_140db8e0b:
      lVar8 = (longlong)*(int *)((longlong)param_1 + 0x10);
      if (lVar8 < 0) {
        *(ulonglong *)((longlong)param_1 + 0x30) =
             *(longlong *)((longlong)param_1 + 8) - (ulonglong)(ppVar1->height - 1) * lVar8;
        *(longlong *)((longlong)param_1 + 0x38) = lVar8;
      }
      else {
        *(longlong *)((longlong)param_1 + 0x30) = *(longlong *)((longlong)param_1 + 8);
        *(longlong *)((longlong)param_1 + 0x38) = lVar8;
      }
      if (iVar4 == 0) {
        uVar5 = png_get_rowbytes(ppVar2,ppVar3);
        pvVar6 = png_malloc(ppVar2,uVar5);
        *(void **)((longlong)param_1 + 0x28) = pvVar6;
        iVar4 = png_safe_execute(ppVar1,png_image_read_and_map,param_1);
        *(undefined8 *)((longlong)param_1 + 0x28) = 0;
        png_free(ppVar2,pvVar6);
      }
      else {
        if ((0 < iVar4) && (uVar7 = ppVar1->height, uVar7 != 0)) {
          while( true ) {
            if (uVar7 != 0) {
              puVar9 = *(uchar **)((longlong)param_1 + 0x30);
              do {
                png_read_row(ppVar2,puVar9,(uchar *)0x0);
                puVar9 = puVar9 + lVar8;
                uVar7 = uVar7 - 1;
              } while (uVar7 != 0);
            }
            if (iVar4 < 2) break;
            iVar4 = iVar4 + -1;
            uVar7 = ppVar1->height;
          }
        }
        iVar4 = 1;
      }
      return iVar4;
    }
    break;
  case 1:
  case 2:
    if (((ppVar3->color_type == '\x04') && (ppVar3->bit_depth == '\b')) &&
       ((ppVar2->screen_gamma == 220000 && (ppVar1->colormap_entries == 0x100))))
    goto LAB_140db8e0b;
    break;
  case 3:
    if (((ppVar3->color_type == '\x02') && (ppVar3->bit_depth == '\b')) &&
       ((ppVar2->screen_gamma == 220000 && (ppVar1->colormap_entries == 0xd8)))) goto LAB_140db8e0b;
    break;
  case 4:
    if ((((ppVar3->color_type == '\x06') && (ppVar3->bit_depth == '\b')) &&
        (ppVar2->screen_gamma == 220000)) && (ppVar1->colormap_entries == 0xf4)) goto LAB_140db8e0b;
  }
                    /* WARNING: Subroutine does not return */
  png_error(ppVar2,"bad color-map processing (internal error)");
}

// png_image_read_direct @ 140db8f00

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */

int __cdecl png_image_read_direct(void *param_1)

{
  png_image *ppVar1;
  png_struct_def_conflict *ppVar2;
  png_info_def *ppVar3;
  undefined1 *puVar4;
  undefined2 uVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  ulong64 uVar10;
  void *pvVar11;
  int iVar12;
  longlong lVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  char cVar19;
  uchar *puVar20;
  uint uVar21;
  code *pcVar22;
  bool bVar23;
  undefined1 auStackY_a8 [32];
  png_color_16_struct local_54;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_a8;
  ppVar1 = *(png_image **)param_1;
  ppVar2 = ppVar1->opaque->png_ptr;
  ppVar3 = ppVar1->opaque->info_ptr;
  uVar16 = ppVar1->format;
  uVar21 = uVar16 & 4;
  png_set_expand(ppVar2);
  uVar6 = ppVar2->color_type & 2;
  if ((ppVar2->color_type & 4) == 0) {
    uVar6 = ppVar2->num_trans != 0 | uVar6;
  }
  else {
    uVar6 = uVar6 | 1;
  }
  uVar8 = uVar6 + 4;
  if (ppVar2->bit_depth != '\x10') {
    uVar8 = uVar6;
  }
  uVar6 = uVar8 ^ uVar16;
  uVar15 = 0;
  if ((uVar6 & 2) != 0) {
    if ((uVar16 & 2) == 0) {
      uVar15 = uVar8 & 1;
      png_set_rgb_to_gray_fixed(ppVar2,1,-1,-1);
    }
    else {
      png_set_gray_to_rgb(ppVar2);
      uVar15 = 0;
    }
    uVar6 = uVar6 & 0xfffffffd;
  }
  if (((uVar8 & 4) == 0) || (iVar7 = 100000, (ppVar1->flags & 4) != 0)) {
    iVar7 = -1;
  }
  cVar19 = '\0';
  png_set_alpha_mode_fixed(ppVar2,0,iVar7);
  uVar17 = uVar8 & 1;
  if (uVar21 == 0) {
    uVar17 = 0;
  }
  uVar14 = -(uint)(uVar21 == 0) | 100000;
  uVar18 = 2;
  if ((uVar6 & 0x40) == 0) {
    uVar18 = uVar17;
  }
  if (uVar15 != 0) {
    iVar7 = png_muldiv((int *)&local_54,uVar14,(ppVar2->colorspace).gamma,100000);
    if ((iVar7 == 0) || (iVar7 = png_gamma_significant(local_54._0_4_), iVar7 != 0)) {
      bVar23 = uVar18 == 1;
      if (bVar23) {
        uVar18 = 0;
      }
      cVar19 = bVar23 + '\x01';
    }
    else {
      cVar19 = '\0';
    }
  }
  if ((uVar6 & 4) == 0) {
    uVar15 = uVar6 & 0xffffffbf;
  }
  else if (uVar21 == 0) {
    png_set_scale_16(ppVar2);
    uVar15 = uVar6 & 0xffffffbb;
  }
  else {
    png_set_expand_16(ppVar2);
    uVar15 = uVar6 & 0xffffffbb;
  }
  if ((uVar6 & 1) == 0) {
    bVar23 = false;
  }
  else {
    if ((uVar8 & 1) == 0) {
      uVar6 = 0xffff;
      if (uVar21 == 0) {
        uVar6 = 0xff;
      }
      if ((uVar16 & 0x20) != 0) {
        uVar15 = uVar15 & 0xffffff9f;
      }
      png_set_add_alpha(ppVar2,uVar6,(uVar16 & 0x20) >> 5 ^ 1);
      bVar23 = false;
    }
    else if (cVar19 == '\0') {
      if (uVar21 == 0) {
        puVar4 = *(undefined1 **)((longlong)param_1 + 0x20);
        if (puVar4 == (undefined1 *)0x0) {
          bVar23 = true;
          cVar19 = '\0';
          uVar18 = 2;
        }
        else {
          uVar5 = (undefined2)local_54._0_4_;
          local_54.red._1_1_ = 0;
          local_54._0_3_ = CONCAT12(*puVar4,uVar5) & 0xffff00;
          local_54.green = (ushort)(byte)puVar4[1];
          local_54.blue = (ushort)(byte)puVar4[2];
          local_54.gray = (ushort)(byte)puVar4[1];
          cVar19 = '\0';
          png_set_background_fixed(ppVar2,&local_54,1,0,0);
          bVar23 = false;
        }
      }
      else {
        png_set_strip_alpha(ppVar2);
        cVar19 = '\0';
        bVar23 = false;
      }
    }
    else {
      bVar23 = false;
      cVar19 = '\x02';
    }
    uVar15 = uVar15 & 0xfffffffe;
  }
  png_set_alpha_mode_fixed(ppVar2,uVar18,uVar14);
  uVar6 = uVar15;
  if ((uVar15 & 0x10) != 0) {
    if ((uVar16 & 2) == 0) {
      uVar16 = uVar16 & 0xffffffed;
      uVar6 = uVar15 & 0xffffffef;
    }
    else {
      png_set_bgr(ppVar2);
      uVar6 = uVar15 & 0xffffffef;
    }
  }
  if ((uVar15 & 0x20) != 0) {
    if ((uVar16 & 1) == 0) {
      uVar16 = uVar16 & 0xffffffde;
    }
    else if (cVar19 != '\x02') {
      png_set_swap_alpha(ppVar2);
    }
    uVar6 = uVar6 & 0xffffffdf;
  }
  if (uVar21 != 0) {
    png_set_swap(ppVar2);
  }
  if (uVar6 != 0) {
                    /* WARNING: Subroutine does not return */
    png_error(ppVar2,"png_read_image: unsupported transformation");
  }
  iVar7 = 0;
  png_set_keep_unknown_chunks(ppVar2,1,(uchar *)0x0,-1);
  png_set_keep_unknown_chunks(ppVar2,0,"bKGD",6);
  if (cVar19 != '\x02' && !bVar23) {
    iVar7 = png_set_interlace_handling(ppVar2);
  }
  if ((ppVar2->flags & 0x40) == 0) {
    png_read_start_row(ppVar2);
    png_read_transform_info(ppVar2,ppVar3);
  }
  else {
    png_app_error(ppVar2,"png_read_update_info/png_start_read_image: duplicate call");
  }
  uVar6 = ppVar3->color_type & 2;
  if ((ppVar3->color_type & 4) == 0) {
    if (bVar23) {
                    /* WARNING: Subroutine does not return */
      png_error(ppVar2,"png_image_read: alpha channel lost");
    }
  }
  else if (!bVar23) {
    uVar6 = uVar6 | ((uVar16 & 1) != 0 || cVar19 != '\x02');
  }
  uVar8 = uVar6 + 4;
  if (ppVar3->bit_depth != '\x10') {
    uVar8 = uVar6;
  }
  iVar9 = uVar8 + (uVar16 & 0x40);
  uVar6 = ppVar2->transformations;
  iVar12 = (uVar6 & 1) * 0x10;
  uVar17 = iVar12 + iVar9;
  uVar15 = iVar12 + 0x20 + iVar9;
  uVar8 = uVar15;
  if ((uVar16 & 0x20) == 0) {
    uVar8 = uVar17;
  }
  if (cVar19 != '\x02') {
    uVar8 = uVar17;
  }
  if ((((uVar6 & 0x20000) != 0) || (((uVar6 & 0x1000000) != 0 && ((ppVar2->flags & 0x80) == 0)))) &&
     (uVar8 = uVar15, cVar19 == '\x02')) {
                    /* WARNING: Subroutine does not return */
    png_error(ppVar2,"unexpected alpha swap transformation");
  }
  if (uVar8 != uVar16) {
                    /* WARNING: Subroutine does not return */
    png_error(ppVar2,"png_read_image: invalid transformations");
  }
  lVar13 = (longlong)*(int *)((longlong)param_1 + 0x10) << (sbyte)(uVar21 >> 2);
  if ((longlong)*(int *)((longlong)param_1 + 0x10) < 0) {
    *(ulonglong *)((longlong)param_1 + 0x30) =
         *(longlong *)((longlong)param_1 + 8) - (ulonglong)(ppVar1->height - 1) * lVar13;
    *(longlong *)((longlong)param_1 + 0x38) = lVar13;
  }
  else {
    *(longlong *)((longlong)param_1 + 0x30) = *(longlong *)((longlong)param_1 + 8);
    *(longlong *)((longlong)param_1 + 0x38) = lVar13;
  }
  if ((bVar23) || (cVar19 == '\x02')) {
    pcVar22 = png_image_read_composite;
    if (!bVar23) {
      pcVar22 = png_image_read_background;
    }
    uVar10 = png_get_rowbytes(ppVar2,ppVar3);
    pvVar11 = png_malloc(ppVar2,uVar10);
    *(void **)((longlong)param_1 + 0x28) = pvVar11;
    iVar9 = png_safe_execute(ppVar1,pcVar22,param_1);
    *(undefined8 *)((longlong)param_1 + 0x28) = 0;
    png_free(ppVar2,pvVar11);
  }
  else {
    iVar9 = 1;
    if ((0 < iVar7) && (uVar16 = ppVar1->height, uVar16 != 0)) {
      while( true ) {
        if (uVar16 != 0) {
          puVar20 = *(uchar **)((longlong)param_1 + 0x30);
          do {
            png_read_row(ppVar2,puVar20,(uchar *)0x0);
            puVar20 = puVar20 + lVar13;
            uVar16 = uVar16 - 1;
          } while (uVar16 != 0);
        }
        if (iVar7 < 2) break;
        iVar7 = iVar7 + -1;
        uVar16 = ppVar1->height;
      }
    }
  }
  if ((local_48 ^ (ulonglong)auStackY_a8) != __security_cookie.value) {
    pcVar22 = (code *)swi(3);
    iVar7 = (*pcVar22)();
    return iVar7;
  }
  return iVar9;
}

// png_create_colormap_entry @ 140db9490

void __cdecl
png_create_colormap_entry
          (png_image_read_control *param_1,uint param_2,uint param_3,uint param_4,uint param_5,
          uint param_6,int param_7)

{
  uint uVar1;
  png_image *ppVar2;
  void *pvVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  ulonglong uVar7;
  uint uVar8;
  uint uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  uint uVar13;
  uint uVar14;
  ulonglong uVar15;
  bool bVar16;
  
  uVar10 = (ulonglong)param_4;
  uVar11 = (ulonglong)param_3;
  uVar12 = (ulonglong)param_5;
  ppVar2 = param_1->image;
  uVar1 = ppVar2->format;
  bVar16 = (uVar1 & 2) == 0;
  if (0xff < param_2) {
                    /* WARNING: Subroutine does not return */
    png_error(ppVar2->opaque->png_ptr,"color-map index out of range");
  }
  uVar8 = param_6;
  if ((param_7 == 3) && (param_7 = param_1->file_encoding, param_7 == 0)) {
    iVar5 = (ppVar2->opaque->png_ptr->colorspace).gamma;
    iVar4 = png_gamma_significant(iVar5);
    if (iVar4 == 0) {
      param_1->file_encoding = 4;
      uVar11 = (ulonglong)(param_3 * 0x101);
      uVar10 = (ulonglong)(param_4 * 0x101);
      uVar12 = (ulonglong)(param_5 * 0x101);
    }
    else {
      if ((99999 < iVar5) ||
         ((iVar5 != 0 && (iVar4 = png_gamma_significant((iVar5 * 0xb + 2) / 5), iVar4 != 0)))) {
        param_1->file_encoding = 3;
        iVar5 = png_reciprocal(iVar5);
        param_1->gamma_to_linear = iVar5;
        param_7 = param_1->file_encoding;
        goto joined_r0x000140db950b;
      }
      param_1->file_encoding = 1;
      param_7 = 1;
      if ((uVar1 & 4) == 0 && (!bVar16 || param_4 == param_5 && param_3 == param_4))
      goto LAB_140db989e;
      uVar11 = (ulonglong)png_sRGB_table[uVar11];
      uVar10 = (ulonglong)png_sRGB_table[uVar10];
      uVar12 = (ulonglong)png_sRGB_table[uVar12];
    }
    uVar8 = param_6 * 0x101;
    if (bVar16 && (param_4 != param_5 || param_3 != param_4)) {
      iVar5 = (int)uVar12 * 0x93e + (int)uVar10 * 0x5b8a + (int)uVar11 * 0x1b38;
      if ((uVar1 & 4) != 0) {
        uVar14 = iVar5 + 0x4000U >> 0xf;
        uVar10 = (ulonglong)uVar14;
        param_7 = 2;
        uVar12 = (ulonglong)uVar14;
        uVar11 = uVar10;
        goto LAB_140db989e;
      }
      uVar8 = iVar5 + 0x80;
      uVar8 = ((uVar8 & 0xffffff00) - (uVar8 >> 8)) + 0x40;
      uVar14 = uVar8 >> 0x16;
      uVar14 = ((uint)png_sRGB_delta[uVar14] * (uVar8 >> 7 & 0x7fff) >> 0xc) +
               (uint)png_sRGB_base[uVar14] >> 8 & 0xff;
      uVar10 = (ulonglong)uVar14;
      uVar11 = uVar10;
    }
    else {
      param_7 = 2;
      if ((uVar1 & 4) != 0) goto LAB_140db989e;
      uVar8 = (int)uVar11 * 0xff;
      uVar9 = uVar8 >> 0xf;
      uVar14 = (int)uVar10 * 0xff;
      uVar6 = uVar14 >> 0xf;
      uVar10 = (ulonglong)
               (((uint)png_sRGB_delta[uVar6] * (uVar14 & 0x7fff) >> 0xc) +
                (uint)png_sRGB_base[uVar6] >> 8 & 0xff);
      uVar14 = (int)uVar12 * 0xff;
      uVar6 = uVar14 >> 0xf;
      uVar14 = ((uint)png_sRGB_delta[uVar6] * (uVar14 & 0x7fff) >> 0xc) + (uint)png_sRGB_base[uVar6]
               >> 8 & 0xff;
      uVar11 = (ulonglong)
               (((uint)png_sRGB_delta[uVar9] * (uVar8 & 0x7fff) >> 0xc) + (uint)png_sRGB_base[uVar9]
                >> 8 & 0xff);
    }
    uVar8 = param_6 * 0xffff + 0x807f >> 0x10;
    uVar12 = (ulonglong)uVar14;
    param_7 = 1;
  }
  else {
joined_r0x000140db950b:
    if (param_7 - 1U < 4) {
                    /* WARNING: Could not recover jumptable at 0x000140db951f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)(&DAT_1531f1668 + *(int *)(&DAT_1531f1668 + (ulonglong)(param_7 - 1U) * 4)))
                (&DAT_1531f1668 + *(int *)(&DAT_1531f1668 + (ulonglong)(param_7 - 1U) * 4));
      return;
    }
  }
LAB_140db989e:
  if (param_7 != ((uVar1 & 4) >> 2) + 1) {
                    /* WARNING: Subroutine does not return */
    png_error(ppVar2->opaque->png_ptr,"bad encoding (internal error)");
  }
  uVar14 = ppVar2->format;
  uVar6 = uVar14 & 0x21;
  uVar7 = (ulonglong)(uVar6 == 0x21);
  uVar9 = uVar14 >> 3 & 2;
  uVar14 = uVar14 & 3;
  uVar15 = (ulonglong)((uVar14 + 1) * param_2);
  pvVar3 = param_1->colormap;
  uVar13 = (uint)(uVar6 == 0x21);
  if ((uVar1 & 4) == 0) {
    switch(uVar14) {
    case 1:
      *(char *)((longlong)pvVar3 + (uVar7 ^ 1) + uVar15) = (char)uVar8;
    case 0:
      *(char *)((longlong)pvVar3 + (uVar6 == 0x21) + uVar15) = (char)uVar10;
      break;
    case 3:
      *(char *)((longlong)pvVar3 + (ulonglong)(uVar6 != 0x21) * 3 + uVar15) = (char)uVar8;
    case 2:
      uVar7 = uVar7 | uVar9;
      *(char *)((longlong)pvVar3 + (uVar7 ^ 2) + uVar15) = (char)uVar12;
      *(char *)((longlong)pvVar3 + (ulonglong)(uVar6 == 0x21) + 1 + uVar15) = (char)uVar10;
      *(char *)((longlong)pvVar3 + uVar7 + uVar15) = (char)uVar11;
    }
  }
  else {
    switch(uVar14) {
    case 1:
      *(short *)((longlong)pvVar3 + (ulonglong)(uVar13 ^ 1) * 2 + uVar15 * 2) = (short)uVar8;
    case 0:
      if (uVar8 < 0xffff) {
        if (uVar8 == 0) {
          uVar10 = 0;
        }
        else {
          uVar10 = (ulonglong)(uVar8 * (int)uVar10 + 0x7fff) / 0xffff;
        }
      }
      *(short *)((longlong)pvVar3 + (ulonglong)(uVar6 == 0x21) * 2 + uVar15 * 2) = (short)uVar10;
      break;
    case 3:
      *(short *)((longlong)pvVar3 + (ulonglong)((uint)(uVar6 != 0x21) * 6) + uVar15 * 2) =
           (short)uVar8;
    case 2:
      if (uVar8 < 0xffff) {
        if (uVar8 == 0) {
          uVar11 = 0;
          uVar10 = 0;
          uVar12 = 0;
        }
        else {
          uVar12 = (ulonglong)((int)uVar12 * uVar8 + 0x7fff) / 0xffff;
          uVar10 = (ulonglong)((int)uVar10 * uVar8 + 0x7fff) / 0xffff;
          uVar11 = (ulonglong)((int)uVar11 * uVar8 + 0x7fff) / 0xffff;
        }
      }
      uVar9 = uVar9 | uVar13;
      *(short *)((longlong)pvVar3 + (ulonglong)(uVar9 ^ 2) * 2 + uVar15 * 2) = (short)uVar12;
      *(short *)((longlong)pvVar3 + (ulonglong)(uVar6 == 0x21) * 2 + uVar15 * 2 + 2) = (short)uVar10
      ;
      *(short *)((longlong)pvVar3 + (ulonglong)uVar9 * 2 + uVar15 * 2) = (short)uVar11;
    }
  }
  return;
}

// make_ga_colormap @ 140db9a90

int __cdecl make_ga_colormap(png_image_read_control *param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  uVar3 = 0x73;
  uVar2 = 0;
  do {
    uVar1 = (uVar3 & 0xffff) * 0x1bb5 >> 0x10;
    uVar4 = ((uVar3 - uVar1 & 0xffff) >> 1) + uVar1 >> 7;
    uVar1 = uVar2 + 1;
    png_create_colormap_entry(param_1,uVar2,uVar4,uVar4,uVar4,0xff,1);
    uVar3 = uVar3 + 0x100;
    uVar2 = uVar1;
  } while (uVar1 != 0xe7);
  png_create_colormap_entry(param_1,0xe7,0xff,0xff,0xff,0,1);
  png_create_colormap_entry(param_1,0xe8,0,0,0,0x33,1);
  png_create_colormap_entry(param_1,0xe9,0x33,0x33,0x33,0x33,1);
  png_create_colormap_entry(param_1,0xea,0x66,0x66,0x66,0x33,1);
  png_create_colormap_entry(param_1,0xeb,0x99,0x99,0x99,0x33,1);
  png_create_colormap_entry(param_1,0xec,0xcc,0xcc,0xcc,0x33,1);
  png_create_colormap_entry(param_1,0xed,0xff,0xff,0xff,0x33,1);
  png_create_colormap_entry(param_1,0xee,0,0,0,0x66,1);
  png_create_colormap_entry(param_1,0xef,0x33,0x33,0x33,0x66,1);
  png_create_colormap_entry(param_1,0xf0,0x66,0x66,0x66,0x66,1);
  png_create_colormap_entry(param_1,0xf1,0x99,0x99,0x99,0x66,1);
  png_create_colormap_entry(param_1,0xf2,0xcc,0xcc,0xcc,0x66,1);
  png_create_colormap_entry(param_1,0xf3,0xff,0xff,0xff,0x66,1);
  png_create_colormap_entry(param_1,0xf4,0,0,0,0x99,1);
  png_create_colormap_entry(param_1,0xf5,0x33,0x33,0x33,0x99,1);
  png_create_colormap_entry(param_1,0xf6,0x66,0x66,0x66,0x99,1);
  png_create_colormap_entry(param_1,0xf7,0x99,0x99,0x99,0x99,1);
  png_create_colormap_entry(param_1,0xf8,0xcc,0xcc,0xcc,0x99,1);
  png_create_colormap_entry(param_1,0xf9,0xff,0xff,0xff,0x99,1);
  png_create_colormap_entry(param_1,0xfa,0,0,0,0xcc,1);
  png_create_colormap_entry(param_1,0xfb,0x33,0x33,0x33,0xcc,1);
  png_create_colormap_entry(param_1,0xfc,0x66,0x66,0x66,0xcc,1);
  png_create_colormap_entry(param_1,0xfd,0x99,0x99,0x99,0xcc,1);
  png_create_colormap_entry(param_1,0xfe,0xcc,0xcc,0xcc,0xcc,1);
  png_create_colormap_entry(param_1,0xff,0xff,0xff,0xff,0xcc,1);
  return 0x100;
}

// make_rgb_colormap @ 140db9fc0

int __cdecl make_rgb_colormap(png_image_read_control *param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  
  iVar5 = 0;
  uVar3 = 0;
  do {
    uVar4 = iVar5 * 0x33;
    uVar1 = 0;
    uVar2 = uVar3;
    do {
      png_create_colormap_entry(param_1,uVar2,uVar4,uVar1,0,0xff,1);
      png_create_colormap_entry(param_1,uVar2 + 1,uVar4,uVar1,0x33,0xff,1);
      png_create_colormap_entry(param_1,uVar2 + 2,uVar4,uVar1,0x66,0xff,1);
      png_create_colormap_entry(param_1,uVar2 + 3,uVar4,uVar1,0x99,0xff,1);
      png_create_colormap_entry(param_1,uVar2 + 4,uVar4,uVar1,0xcc,0xff,1);
      uVar3 = uVar2 + 6;
      png_create_colormap_entry(param_1,uVar2 + 5,uVar4,uVar1,0xff,0xff,1);
      uVar1 = uVar1 + 0x33;
      uVar2 = uVar3;
    } while (uVar1 != 0x132);
    iVar5 = iVar5 + 1;
  } while (iVar5 != 6);
  return uVar3;
}

// decode_gamma @ 140dba130

/* WARNING: Type propagation algorithm not settling */

uint __cdecl decode_gamma(png_image_read_control *param_1,uint param_2,int param_3)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  
  if (param_3 == 3) {
    param_3 = param_1->file_encoding;
  }
  if (param_3 == 0) {
    iVar3 = (param_1->image->opaque->png_ptr->colorspace).gamma;
    iVar2 = png_gamma_significant(iVar3);
    if (iVar2 == 0) {
      param_1->file_encoding = 4;
      goto LAB_140dba1f6;
    }
    if ((iVar3 < 100000) &&
       ((iVar3 == 0 || (iVar2 = png_gamma_significant((iVar3 * 0xb + 2) / 5), iVar2 == 0)))) {
      param_1->file_encoding = 1;
      goto LAB_140dba206;
    }
    param_1->file_encoding = 3;
    iVar3 = png_reciprocal(iVar3);
    param_1->gamma_to_linear = iVar3;
    param_3 = param_1->file_encoding;
  }
  if (param_3 == 1) {
LAB_140dba206:
    return (uint)png_sRGB_table[param_2];
  }
  if (param_3 != 4) {
    if (param_3 != 3) {
      return param_2;
    }
    uVar1 = png_gamma_16bit_correct(param_2 * 0x101,param_1->gamma_to_linear);
    return (uint)uVar1;
  }
LAB_140dba1f6:
  return param_2 * 0x101;
}

// png_image_read_and_map @ 140dba230

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl png_image_read_and_map(void *param_1)

{
  ushort uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  undefined8 *puVar5;
  png_struct_def_conflict *ppVar6;
  longlong lVar7;
  longlong lVar8;
  short sVar9;
  short sVar10;
  longlong lVar11;
  char *pcVar12;
  uchar *puVar13;
  ulonglong uVar14;
  byte bVar15;
  char cVar16;
  uchar uVar17;
  uint uVar18;
  ushort *puVar19;
  byte *pbVar20;
  uchar *puVar21;
  uint uVar22;
  uint uVar23;
  uint uVar24;
  char cVar25;
  uint uVar26;
  char cVar27;
  ulonglong uVar29;
  byte bVar30;
  undefined1 auVar31 [16];
  uint local_94;
  char cVar28;
  
  sVar10 = _UNK_1531f0d92;
  sVar9 = ___xmm_00000000000000000000000000820082;
  puVar5 = *(undefined8 **)param_1;
  ppVar6 = *(png_struct_def_conflict **)*puVar5;
  local_94 = 1;
  if (ppVar6->interlaced != '\0') {
    if (ppVar6->interlaced != '\x01') {
                    /* WARNING: Subroutine does not return */
      png_error(ppVar6,"unknown interlace type");
    }
    local_94 = 7;
  }
  uVar2 = *(uint *)((longlong)puVar5 + 0xc);
  uVar29 = (ulonglong)uVar2;
  uVar3 = *(uint *)(puVar5 + 2);
  iVar4 = *(int *)((longlong)param_1 + 0x48);
  lVar7 = *(longlong *)((longlong)param_1 + 0x30);
  lVar8 = *(longlong *)((longlong)param_1 + 0x38);
  uVar14 = 0;
  do {
    uVar23 = 1;
    uVar22 = 0;
    uVar18 = 1;
    uVar24 = 0;
    uVar26 = (uint)uVar14;
    if (ppVar6->interlaced == '\x01') {
      bVar15 = (byte)(7 - uVar26 >> 1);
      bVar30 = 3;
      if (1 < uVar26) {
        bVar30 = bVar15;
      }
      uVar24 = (uVar26 & 1) << (3U - (char)(uVar26 + 1 >> 1) & 0x1f) & 7;
      if ((~(-1 << (bVar30 & 0x1f)) + uVar2) - uVar24 >> (bVar30 & 0x1f) != 0) {
        uVar18 = 1 << (bVar15 & 0x1f);
        uVar23 = 8 >> ((byte)(uVar26 - 1 >> 1) & 0x1f);
        uVar22 = (uVar26 & 1 ^ 1) << (3U - (char)(uVar14 >> 1) & 0x1f) & 7;
        if (uVar26 < 3) {
          uVar23 = 8;
        }
        goto LAB_140dba3a6;
      }
    }
    else {
LAB_140dba3a6:
      if (uVar22 < uVar3) {
        if (iVar4 - 1U < 4) {
          uVar14 = (ulonglong)uVar24;
          switch(iVar4) {
          case 1:
            do {
              pbVar20 = *(byte **)((longlong)param_1 + 0x28);
              png_read_row(ppVar6,pbVar20,(uchar *)0x0);
              if (uVar24 < uVar2) {
                lVar11 = (ulonglong)uVar22 * lVar8 + lVar7;
                pcVar12 = (char *)(lVar11 + uVar14);
                do {
                  bVar30 = pbVar20[1];
                  if (bVar30 < 0xe6) {
                    cVar16 = -0x19;
                    if (0x19 < bVar30) {
                      cVar16 = (char)((uint)*pbVar20 * 5 + 0x82 >> 8) +
                               (char)((uint)bVar30 + (uint)bVar30 * 4 + 0x82 >> 8) * '\x06' + -0x1e;
                    }
                  }
                  else {
                    cVar16 = (char)((uint)*pbVar20 * 0xe7 + 0x80 >> 8);
                  }
                  *pcVar12 = cVar16;
                  pcVar12 = pcVar12 + uVar18;
                  pbVar20 = pbVar20 + 2;
                } while (pcVar12 < (char *)(lVar11 + uVar29));
              }
              uVar22 = uVar22 + uVar23;
            } while (uVar22 < uVar3);
            break;
          case 2:
            do {
              puVar21 = *(uchar **)((longlong)param_1 + 0x28);
              png_read_row(ppVar6,puVar21,(uchar *)0x0);
              if (uVar24 < uVar2) {
                lVar11 = (ulonglong)uVar22 * lVar8 + lVar7;
                puVar13 = (uchar *)(lVar11 + uVar14);
                do {
                  uVar17 = *puVar21;
                  if (*puVar21 == 0xfe) {
                    uVar17 = 0xff;
                  }
                  if (puVar21[1] == '\0') {
                    uVar17 = 0xfe;
                  }
                  *puVar13 = uVar17;
                  puVar13 = puVar13 + uVar18;
                  puVar21 = puVar21 + 2;
                } while (puVar13 < (uchar *)(lVar11 + uVar29));
              }
              uVar22 = uVar22 + uVar23;
            } while (uVar22 < uVar3);
            break;
          case 3:
            do {
              puVar19 = *(ushort **)((longlong)param_1 + 0x28);
              png_read_row(ppVar6,(uchar *)puVar19,(uchar *)0x0);
              if (uVar24 < uVar2) {
                lVar11 = (ulonglong)uVar22 * lVar8 + lVar7;
                pcVar12 = (char *)(lVar11 + uVar14);
                do {
                  uVar1 = *puVar19;
                  bVar30 = (byte)(uVar1 >> 8);
                  auVar31 = psllw(ZEXT316(CONCAT12(bVar30,uVar1) & 0xff00ff),2);
                  *pcVar12 = (char)((uint)(byte)puVar19[1] + (uint)(byte)puVar19[1] * 4 + 0x82 >> 8)
                             + ((char)((ushort)(auVar31._2_2_ + (ushort)bVar30 + sVar10) >> 8) +
                               (char)((ushort)(auVar31._0_2_ + (uVar1 & 0xff) + sVar9) >> 8) *
                               '\x06') * '\x06';
                  puVar19 = (ushort *)((longlong)puVar19 + 3);
                  pcVar12 = pcVar12 + uVar18;
                } while (pcVar12 < (char *)(lVar11 + uVar29));
              }
              uVar22 = uVar22 + uVar23;
            } while (uVar22 < uVar3);
            break;
          case 4:
            do {
              puVar19 = *(ushort **)((longlong)param_1 + 0x28);
              png_read_row(ppVar6,(uchar *)puVar19,(uchar *)0x0);
              if (uVar24 < uVar2) {
                lVar11 = (ulonglong)uVar22 * lVar8 + lVar7;
                pcVar12 = (char *)(lVar11 + uVar14);
                do {
                  if (*(byte *)((longlong)puVar19 + 3) < 0xc4) {
                    cVar16 = -0x28;
                    if (0x3f < *(byte *)((longlong)puVar19 + 3)) {
                      bVar30 = (byte)*puVar19;
                      cVar16 = ((char)bVar30 < '\0') * '\t';
                      bVar15 = bVar30 & 0x40;
                      cVar27 = cVar16 + -0x1e;
                      cVar28 = cVar27;
                      if (bVar15 == 0) {
                        cVar27 = ((char)bVar30 < '\0') * '\t' + -0x27;
                        cVar28 = cVar16 + -0x27;
                      }
                      cVar25 = cVar28 + '\x03';
                      cVar16 = cVar28 + '\x03';
                      if (-1 < (char)bVar30) {
                        cVar25 = cVar27;
                        cVar16 = cVar28;
                      }
                      cVar16 = cVar16 + '\x03';
                      if (bVar15 == 0) {
                        cVar16 = cVar25;
                      }
                      cVar16 = ((bVar15 >> 6) - ((char)bVar30 >> 7)) + cVar16;
                    }
                  }
                  else {
                    uVar1 = *puVar19;
                    bVar30 = (byte)(uVar1 >> 8);
                    auVar31 = psllw(ZEXT316(CONCAT12(bVar30,uVar1) & 0xff00ff),2);
                    cVar16 = (char)((uint)(byte)puVar19[1] + (uint)(byte)puVar19[1] * 4 + 0x82 >> 8)
                             + ((char)((ushort)(auVar31._2_2_ + (ushort)bVar30 + sVar10) >> 8) +
                               (char)((ushort)(auVar31._0_2_ + (uVar1 & 0xff) + sVar9) >> 8) *
                               '\x06') * '\x06';
                  }
                  *pcVar12 = cVar16;
                  puVar19 = puVar19 + 2;
                  pcVar12 = pcVar12 + uVar18;
                } while (pcVar12 < (char *)(lVar11 + uVar29));
              }
              uVar22 = uVar22 + uVar23;
            } while (uVar22 < uVar3);
          }
        }
        else {
          do {
            png_read_row(ppVar6,*(uchar **)((longlong)param_1 + 0x28),(uchar *)0x0);
            uVar22 = uVar22 + uVar23;
          } while (uVar22 < uVar3);
        }
      }
    }
    uVar14 = (ulonglong)(uVar26 + 1);
    if (uVar26 + 1 == local_94) {
      return 1;
    }
  } while( true );
}

// png_image_read_composite @ 140dba750

int __cdecl png_image_read_composite(void *param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  undefined8 *puVar4;
  png_struct_def_conflict *ppVar5;
  longlong lVar6;
  uchar *puVar7;
  byte bVar8;
  uint uVar9;
  uint uVar10;
  longlong lVar11;
  byte *pbVar12;
  uint uVar13;
  byte bVar14;
  uint uVar15;
  byte *pbVar16;
  uint uVar17;
  ulonglong uVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  uint local_90;
  uint local_8c;
  uint local_80;
  
  puVar4 = *(undefined8 **)param_1;
  ppVar5 = *(png_struct_def_conflict **)*puVar4;
  local_8c = 1;
  if (ppVar5->interlaced != '\0') {
    if (ppVar5->interlaced != '\x01') {
                    /* WARNING: Subroutine does not return */
      png_error(ppVar5,"unknown interlace type");
    }
    local_8c = 7;
  }
  iVar1 = *(int *)((longlong)puVar4 + 0xc);
  uVar2 = *(uint *)(puVar4 + 2);
  lVar6 = *(longlong *)((longlong)param_1 + 0x38);
  uVar3 = *(uint *)((longlong)puVar4 + 0x14);
  uVar21 = uVar3 & 2;
  uVar9 = uVar21 + 1;
  uVar10 = uVar9 * iVar1;
  uVar18 = 0;
  do {
    local_80 = 1;
    local_90 = 0;
    uVar19 = 0;
    uVar17 = (uint)uVar18;
    uVar15 = uVar9;
    if (ppVar5->interlaced == '\x01') {
      bVar8 = (byte)(7 - uVar17 >> 1);
      bVar14 = 3;
      if (1 < uVar17) {
        bVar14 = bVar8;
      }
      local_90 = (uVar17 & 1) << (3U - (char)(uVar17 + 1 >> 1) & 0x1f) & 7;
      if ((~(-1 << (bVar14 & 0x1f)) + iVar1) - local_90 >> (bVar14 & 0x1f) != 0) {
        uVar15 = uVar9 << (bVar8 & 0x1f);
        local_90 = local_90 * uVar9;
        uVar19 = (uVar17 & 1 ^ 1) << (3U - (char)(uVar18 >> 1) & 0x1f) & 7;
        local_80 = 8 >> ((byte)(uVar17 - 1 >> 1) & 0x1f);
        if (uVar17 < 3) {
          local_80 = 8;
        }
        goto LAB_140dba8e1;
      }
    }
    else {
LAB_140dba8e1:
      if (uVar19 < uVar2) {
        do {
          puVar7 = *(uchar **)((longlong)param_1 + 0x28);
          png_read_row(ppVar5,puVar7,(uchar *)0x0);
          if (local_90 < uVar10) {
            lVar11 = (ulonglong)uVar19 * lVar6 + *(longlong *)((longlong)param_1 + 0x30);
            pbVar12 = (byte *)(lVar11 + (ulonglong)local_90);
            pbVar16 = puVar7 + 1;
            do {
              bVar14 = pbVar16[(ulonglong)(uVar3 >> 1 & 1) * 2];
              if (bVar14 != 0) {
                if (bVar14 == 0xff) {
                  *pbVar12 = pbVar16[-1];
                  if (uVar21 != 0) {
                    pbVar12[1] = *pbVar16;
                    pbVar12[2] = pbVar16[1];
                  }
                }
                else {
                  bVar14 = ~bVar14;
                  uVar20 = (uint)png_sRGB_table[*pbVar12] * (uint)bVar14 +
                           (uint)pbVar16[-1] * 0xffff;
                  uVar13 = uVar20 >> 0xf;
                  *pbVar12 = (byte)(((uint)png_sRGB_delta[uVar13] * (uVar20 & 0x7fff) >> 0xc) +
                                    (uint)png_sRGB_base[uVar13] >> 8);
                  if (uVar21 != 0) {
                    uVar13 = (uint)png_sRGB_table[pbVar12[1]] * (uint)bVar14 +
                             (uint)*pbVar16 * 0xffff;
                    uVar20 = uVar13 >> 0xf;
                    pbVar12[1] = (byte)(((uint)png_sRGB_delta[uVar20] * (uVar13 & 0x7fff) >> 0xc) +
                                        (uint)png_sRGB_base[uVar20] >> 8);
                    uVar13 = (uint)png_sRGB_table[pbVar12[2]] * (uint)bVar14 +
                             (uint)pbVar16[1] * 0xffff;
                    uVar20 = uVar13 >> 0xf;
                    pbVar12[2] = (byte)(((uint)png_sRGB_delta[uVar20] * (uVar13 & 0x7fff) >> 0xc) +
                                        (uint)png_sRGB_base[uVar20] >> 8);
                  }
                }
              }
              pbVar12 = pbVar12 + uVar15;
              pbVar16 = pbVar16 + (ulonglong)uVar21 + 2;
            } while (pbVar12 < (byte *)(lVar11 + (ulonglong)uVar10));
          }
          uVar19 = uVar19 + local_80;
        } while (uVar19 < uVar2);
      }
    }
    uVar18 = (ulonglong)(uVar17 + 1);
    if (uVar17 + 1 == local_8c) {
      return 1;
    }
  } while( true );
}

// png_image_read_background @ 140dbaad0

int __cdecl png_image_read_background(void *param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  longlong *plVar4;
  png_struct_def_conflict *ppVar5;
  png_info_def *ppVar6;
  longlong lVar7;
  uchar *puVar8;
  uchar uVar9;
  byte bVar10;
  longlong lVar11;
  byte *pbVar12;
  ushort *puVar13;
  ulonglong uVar14;
  byte bVar15;
  uint uVar16;
  uint uVar17;
  ushort *puVar18;
  byte *pbVar19;
  uint uVar20;
  ulonglong uVar21;
  uint uVar22;
  ushort uVar23;
  ushort uVar24;
  uint uVar25;
  longlong lVar26;
  uint uVar27;
  uint uVar28;
  int iVar29;
  bool bVar30;
  uint local_7c;
  
  plVar4 = *(longlong **)param_1;
  ppVar5 = *(png_struct_def_conflict **)*plVar4;
  if ((ppVar5->transformations & 0x600000) == 0) {
                    /* WARNING: Subroutine does not return */
    png_error(ppVar5,"lost rgb to gray");
  }
  if ((char)ppVar5->transformations < '\0') {
                    /* WARNING: Subroutine does not return */
    png_error(ppVar5,"unexpected compose");
  }
  ppVar6 = (png_info_def *)((undefined8 *)*plVar4)[1];
  uVar2 = *(uint *)(plVar4 + 2);
  uVar3 = *(uint *)((longlong)plVar4 + 0xc);
  uVar9 = png_get_channels(ppVar5,ppVar6);
  if (uVar9 != '\x02') {
                    /* WARNING: Subroutine does not return */
    png_error(ppVar5,"lost/gained channels");
  }
  uVar27 = *(uint *)((longlong)plVar4 + 0x14);
  if ((uVar27 & 5) == 1) {
                    /* WARNING: Subroutine does not return */
    png_error(ppVar5,"unexpected 8-bit transformation");
  }
  local_7c = 1;
  if (ppVar5->interlaced != '\0') {
    if (ppVar5->interlaced != '\x01') {
                    /* WARNING: Subroutine does not return */
      png_error(ppVar5,"unknown interlace type");
    }
    local_7c = 7;
  }
  uVar9 = ppVar6->bit_depth;
  if (uVar9 == '\x10') {
    lVar7 = *(longlong *)((longlong)param_1 + 0x30);
    lVar26 = *(longlong *)((longlong)param_1 + 0x38) / 2;
    iVar1 = (uVar27 & 1) + 1;
    bVar30 = (uVar27 & 0x21) == 0x21;
    uVar21 = (ulonglong)bVar30;
    uVar25 = iVar1 * uVar3;
    if ((uVar27 & 1) == 0) {
      uVar14 = 0;
      do {
        uVar17 = 1;
        uVar20 = 0;
        uVar16 = 0;
        uVar28 = (uint)uVar14;
        uVar27 = 1;
        if (ppVar5->interlaced == '\x01') {
          bVar10 = (byte)(7 - uVar28 >> 1);
          bVar15 = 3;
          if (1 < uVar28) {
            bVar15 = bVar10;
          }
          uVar20 = (uVar28 & 1) << (3U - (char)(uVar28 + 1 >> 1) & 0x1f) & 7;
          if ((~(-1 << (bVar15 & 0x1f)) + uVar3) - uVar20 >> (bVar15 & 0x1f) != 0) {
            uVar27 = 1 << (bVar10 & 0x1f);
            uVar17 = 8 >> ((byte)(uVar28 - 1 >> 1) & 0x1f);
            uVar16 = (uVar28 & 1 ^ 1) << (3U - (char)(uVar14 >> 1) & 0x1f) & 7;
            if (uVar28 < 3) {
              uVar17 = 8;
            }
            goto LAB_140dbafe4;
          }
        }
        else {
LAB_140dbafe4:
          if (uVar16 < uVar2) {
            do {
              png_read_row(ppVar5,*(uchar **)((longlong)param_1 + 0x28),(uchar *)0x0);
              if (uVar20 < uVar25) {
                puVar13 = (ushort *)
                          (lVar26 * 2 * (ulonglong)uVar16 +
                          lVar7 + uVar21 * 2 + (ulonglong)uVar20 * 2);
                lVar11 = lVar7 + (ulonglong)uVar16 * lVar26 * 2;
                uVar14 = lVar11 + (ulonglong)uVar20 * 2;
                puVar18 = *(ushort **)((longlong)param_1 + 0x28);
                do {
                  uVar23 = *puVar18;
                  uVar24 = puVar18[1];
                  if (uVar24 != 0xffff) {
                    if (uVar24 == 0) {
                      uVar23 = 0;
                    }
                    else {
                      uVar23 = (ushort)(((uint)uVar24 * (uint)uVar23 + 0x7fff) / 0xffff);
                    }
                  }
                  *puVar13 = uVar23;
                  puVar18 = puVar18 + 2;
                  uVar14 = uVar14 + (ulonglong)uVar27 * 2;
                  puVar13 = (ushort *)((longlong)puVar13 + (ulonglong)(uVar27 * 2));
                } while (uVar14 < lVar11 + (ulonglong)uVar25 * 2);
              }
              uVar16 = uVar16 + uVar17;
            } while (uVar16 < uVar2);
          }
        }
        uVar14 = (ulonglong)(uVar28 + 1);
      } while (uVar28 + 1 != local_7c);
    }
    else {
      uVar14 = 0;
      do {
        uVar16 = 1;
        uVar28 = 0;
        uVar27 = 0;
        uVar20 = (uint)uVar14;
        iVar29 = iVar1;
        if (ppVar5->interlaced == '\x01') {
          bVar10 = (byte)(7 - uVar20 >> 1);
          bVar15 = 3;
          if (1 < uVar20) {
            bVar15 = bVar10;
          }
          uVar28 = (uVar20 & 1) << (3U - (char)(uVar20 + 1 >> 1) & 0x1f) & 7;
          if ((~(-1 << (bVar15 & 0x1f)) + uVar3) - uVar28 >> (bVar15 & 0x1f) != 0) {
            iVar29 = iVar1 << (bVar10 & 0x1f);
            uVar28 = uVar28 * iVar1;
            uVar16 = 8 >> ((byte)(uVar20 - 1 >> 1) & 0x1f);
            uVar27 = (uVar20 & 1 ^ 1) << (3U - (char)(uVar14 >> 1) & 0x1f) & 7;
            if (uVar20 < 3) {
              uVar16 = 8;
            }
            goto LAB_140dbb1a5;
          }
        }
        else {
LAB_140dbb1a5:
          if (uVar27 < uVar2) {
            do {
              png_read_row(ppVar5,*(uchar **)((longlong)param_1 + 0x28),(uchar *)0x0);
              if (uVar28 < uVar25) {
                uVar14 = lVar26 * 2 * (ulonglong)uVar27 + lVar7 + (ulonglong)uVar28 * 2;
                puVar18 = *(ushort **)((longlong)param_1 + 0x28);
                do {
                  uVar23 = puVar18[1];
                  uVar17 = (uint)uVar23;
                  if (uVar17 == 0) {
                    uVar24 = 0;
                  }
                  else {
                    uVar24 = *puVar18;
                    if (uVar17 != 0xffff) {
                      uVar24 = (ushort)((ulonglong)(uVar24 * uVar17 + 0x7fff) / 0xffff);
                    }
                  }
                  *(ushort *)(uVar14 + uVar21 * 2) = uVar24;
                  *(ushort *)(uVar14 + (ulonglong)!bVar30 * 2) = uVar23;
                  puVar18 = puVar18 + 2;
                  uVar14 = uVar14 + (uint)(iVar29 * 2);
                } while (uVar14 < lVar7 + (ulonglong)uVar27 * lVar26 * 2 + (ulonglong)uVar25 * 2);
              }
              uVar27 = uVar27 + uVar16;
            } while (uVar27 < uVar2);
          }
        }
        uVar14 = (ulonglong)(uVar20 + 1);
      } while (uVar20 + 1 != local_7c);
    }
  }
  else if (uVar9 == '\b') {
    lVar7 = *(longlong *)((longlong)param_1 + 0x30);
    lVar26 = *(longlong *)((longlong)param_1 + 0x38);
    uVar21 = 0;
    do {
      uVar28 = 0;
      uVar16 = 1;
      uVar27 = 0;
      uVar20 = (uint)uVar21;
      uVar25 = 1;
      if (ppVar5->interlaced == '\x01') {
        bVar10 = (byte)(7 - uVar20 >> 1);
        bVar15 = 3;
        if (1 < uVar20) {
          bVar15 = bVar10;
        }
        uVar25 = (uVar20 & 1) << (3U - (char)(uVar20 + 1 >> 1) & 0x1f);
        uVar27 = uVar25 & 7;
        if ((~(-1 << (bVar15 & 0x1f)) + uVar3) - (uVar25 & 7) >> (bVar15 & 0x1f) != 0) {
          uVar16 = 1 << (bVar10 & 0x1f);
          uVar28 = (uVar20 & 1 ^ 1) << (3U - (char)(uVar21 >> 1) & 0x1f) & 7;
          uVar25 = 8 >> ((byte)(uVar20 - 1 >> 1) & 0x1f);
          if (uVar20 < 3) {
            uVar25 = 8;
          }
          goto LAB_140dbaca3;
        }
      }
      else {
LAB_140dbaca3:
        if (*(longlong *)((longlong)param_1 + 0x20) == 0) {
          if (uVar28 < uVar2) {
            do {
              puVar8 = *(uchar **)((longlong)param_1 + 0x28);
              png_read_row(ppVar5,puVar8,(uchar *)0x0);
              if (uVar27 < uVar3) {
                lVar11 = (ulonglong)uVar28 * lVar26 + lVar7;
                pbVar12 = (byte *)(lVar11 + (ulonglong)uVar27);
                pbVar19 = puVar8 + 1;
                do {
                  if (*pbVar19 != 0) {
                    bVar15 = pbVar19[-1];
                    uVar17 = (uint)*pbVar19;
                    if (uVar17 != 0xff) {
                      uVar17 = (uVar17 ^ 0xff) * (uint)png_sRGB_table[*pbVar12] +
                               png_sRGB_table[bVar15] * uVar17;
                      uVar22 = uVar17 >> 0xf;
                      bVar15 = (byte)(((uint)png_sRGB_delta[uVar22] * (uVar17 & 0x7fff) >> 0xc) +
                                      (uint)png_sRGB_base[uVar22] >> 8);
                    }
                    *pbVar12 = bVar15;
                  }
                  pbVar12 = pbVar12 + uVar16;
                  pbVar19 = pbVar19 + 2;
                } while (pbVar12 < (byte *)((ulonglong)uVar3 + lVar11));
              }
              uVar28 = uVar28 + uVar25;
            } while (uVar28 < uVar2);
          }
        }
        else if (uVar28 < uVar2) {
          bVar15 = *(byte *)(*(longlong *)((longlong)param_1 + 0x20) + 1);
          uVar23 = png_sRGB_table[bVar15];
          do {
            puVar8 = *(uchar **)((longlong)param_1 + 0x28);
            png_read_row(ppVar5,puVar8,(uchar *)0x0);
            if (uVar27 < uVar3) {
              lVar11 = (ulonglong)uVar28 * lVar26 + lVar7;
              pbVar12 = (byte *)(lVar11 + (ulonglong)uVar27);
              pbVar19 = puVar8 + 1;
              do {
                bVar10 = bVar15;
                if (*pbVar19 != 0) {
                  bVar10 = pbVar19[-1];
                  uVar17 = (uint)*pbVar19;
                  if (uVar17 != 0xff) {
                    uVar17 = (uVar17 ^ 0xff) * (uint)uVar23 + png_sRGB_table[bVar10] * uVar17;
                    uVar22 = uVar17 >> 0xf;
                    bVar10 = (byte)(((uint)png_sRGB_delta[uVar22] * (uVar17 & 0x7fff) >> 0xc) +
                                    (uint)png_sRGB_base[uVar22] >> 8);
                  }
                }
                *pbVar12 = bVar10;
                pbVar12 = pbVar12 + uVar16;
                pbVar19 = pbVar19 + 2;
              } while (pbVar12 < (byte *)((ulonglong)uVar3 + lVar11));
            }
            uVar28 = uVar28 + uVar25;
          } while (uVar28 < uVar2);
        }
      }
      uVar21 = (ulonglong)(uVar20 + 1);
    } while (uVar20 + 1 != local_7c);
  }
  return 1;
}

