// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: libPNG
// Functions: 39

// png_write_info_before_PLTE @ 140dbb2f0

void __cdecl png_write_info_before_PLTE(png_struct_def_conflict *param_1,png_info_def *param_2)

{
  byte *pbVar1;
  uint uVar2;
  ushort uVar3;
  int iVar4;
  png_unknown_chunk_t *ppVar5;
  ulong64 uVar6;
  png_unknown_chunk_t *ppVar7;
  
  if (param_2 == (png_info_def *)0x0 || param_1 == (png_struct_def_conflict *)0x0) {
    return;
  }
  if ((param_1->mode & 0x400) != 0) {
    return;
  }
  png_write_sig(param_1);
  if (((param_1->mode & 0x1000) != 0) && (param_1->mng_features_permitted != 0)) {
    png_warning(param_1,"MNG features are not allowed in a PNG datastream");
    param_1->mng_features_permitted = 0;
  }
  png_write_IHDR(param_1,param_2->width,param_2->height,(uint)param_2->bit_depth,
                 (uint)param_2->color_type,(uint)param_2->compression_type,
                 (uint)param_2->filter_type,(uint)param_2->interlace_type);
  uVar3 = (param_2->colorspace).flags;
  if ((uVar3 & 0x8008) == 8) {
    if ((param_2->valid & 1) != 0) {
      png_write_gAMA_fixed(param_1,(param_2->colorspace).gamma);
      uVar3 = (param_2->colorspace).flags;
      goto LAB_140dbb3b1;
    }
  }
  else {
LAB_140dbb3b1:
    if ((short)uVar3 < 0) goto LAB_140dbb401;
  }
  uVar2 = param_2->valid;
  if ((uVar2 & 0x1000) == 0) {
    if ((uVar2 & 0x800) != 0) {
      png_write_sRGB(param_1,(uint)(param_2->colorspace).rendering_intent);
    }
  }
  else {
    if ((uVar2 & 0x800) != 0) {
      png_app_warning(param_1,"profile matches sRGB but writing iCCP instead");
    }
    png_write_iCCP(param_1,param_2->iccp_name,param_2->iccp_profile);
  }
LAB_140dbb401:
  if ((param_2->valid & 2) != 0) {
    png_write_sBIT(param_1,&param_2->sig_bit,(uint)param_2->color_type);
  }
  if ((((param_2->colorspace).flags & 0x8010) == 0x10) && ((param_2->valid & 4) != 0)) {
    png_write_cHRM_fixed(param_1,&(param_2->colorspace).end_points_xy);
  }
  iVar4 = param_2->unknown_chunks_num;
  if (((longlong)iVar4 != 0) && (0 < iVar4)) {
    ppVar5 = param_2->unknown_chunks;
    ppVar7 = ppVar5 + iVar4;
    do {
      if ((((ppVar5->location & 1) != 0) &&
          (iVar4 = png_handle_as_unknown(param_1,ppVar5->name), iVar4 != 1)) &&
         (((iVar4 == 3 || ((ppVar5->name[3] & 0x20) != 0)) ||
          ((iVar4 == 0 && (param_1->unknown_default == 3)))))) {
        uVar6 = ppVar5->size;
        if (uVar6 == 0) {
          png_warning(param_1,"Writing zero-length unknown chunk");
          uVar6 = ppVar5->size;
        }
        png_write_chunk(param_1,ppVar5->name,ppVar5->data,uVar6);
      }
      ppVar5 = ppVar5 + 1;
    } while (ppVar5 < ppVar7);
  }
  pbVar1 = (byte *)((longlong)&param_1->mode + 1);
  *pbVar1 = *pbVar1 | 4;
  return;
}

// png_write_info @ 140dbb500

/* WARNING: Type propagation algorithm not settling */

void __cdecl png_write_info(png_struct_def_conflict *param_1,png_info_def *param_2)

{
  byte *pbVar1;
  ushort uVar2;
  uint uVar3;
  char cVar4;
  ushort uVar5;
  int iVar6;
  ulonglong uVar7;
  png_text_struct *ppVar8;
  ulonglong uVar9;
  longlong lVar10;
  png_unknown_chunk_t *ppVar11;
  ulong64 uVar12;
  longlong lVar13;
  png_unknown_chunk_t *ppVar14;
  
  if (param_2 == (png_info_def *)0x0 || param_1 == (png_struct_def_conflict *)0x0) {
    return;
  }
  png_write_info_before_PLTE(param_1,param_2);
  uVar3 = param_2->valid;
  if ((uVar3 & 8) == 0) {
    if (param_2->color_type == '\x03') {
                    /* WARNING: Subroutine does not return */
      png_error(param_1,"Valid palette required for paletted images");
    }
  }
  else {
    png_write_PLTE(param_1,param_2->palette,(uint)param_2->num_palette);
    uVar3 = param_2->valid;
  }
  if ((uVar3 & 0x10) != 0) {
    if ((((param_1->transformations & 0x80000) != 0) && (param_2->color_type == '\x03')) &&
       (uVar2 = param_2->num_trans, uVar2 != 0)) {
      uVar5 = 0x100;
      if (uVar2 < 0x100) {
        uVar5 = uVar2;
      }
      uVar7 = (ulonglong)(uVar5 & 3);
      if (uVar2 < 4) {
        uVar9 = 0;
      }
      else {
        uVar9 = 0;
        do {
          param_2->trans_alpha[uVar9] = ~param_2->trans_alpha[uVar9];
          param_2->trans_alpha[uVar9 + 1] = ~param_2->trans_alpha[uVar9 + 1];
          param_2->trans_alpha[uVar9 + 2] = ~param_2->trans_alpha[uVar9 + 2];
          param_2->trans_alpha[uVar9 + 3] = ~param_2->trans_alpha[uVar9 + 3];
          uVar9 = uVar9 + 4;
        } while ((uVar5 & 0x1fc) != uVar9);
      }
      for (; uVar7 != 0; uVar7 = uVar7 - 1) {
        param_2->trans_alpha[uVar9] = ~param_2->trans_alpha[uVar9];
        uVar9 = uVar9 + 1;
      }
    }
    png_write_tRNS(param_1,param_2->trans_alpha,&param_2->trans_color,(uint)param_2->num_trans,
                   (uint)param_2->color_type);
    uVar3 = param_2->valid;
  }
  if ((uVar3 & 0x20) != 0) {
    png_write_bKGD(param_1,&param_2->background,(uint)param_2->color_type);
    uVar3 = param_2->valid;
  }
  if ((uVar3 & 0x10000) != 0) {
    png_write_eXIf(param_1,param_2->exif,param_2->num_exif);
    pbVar1 = (byte *)((longlong)&param_1->mode + 1);
    *pbVar1 = *pbVar1 | 0x40;
    uVar3 = param_2->valid;
  }
  if ((uVar3 & 0x40) != 0) {
    png_write_hIST(param_1,param_2->hist,(uint)param_2->num_palette);
    uVar3 = param_2->valid;
  }
  if ((uVar3 & 0x100) != 0) {
    png_write_oFFs(param_1,param_2->x_offset,param_2->y_offset,(uint)param_2->offset_unit_type);
    uVar3 = param_2->valid;
  }
  if ((uVar3 & 0x400) != 0) {
    png_write_pCAL(param_1,param_2->pcal_purpose,param_2->pcal_X0,param_2->pcal_X1,
                   (uint)param_2->pcal_type,(uint)param_2->pcal_nparams,param_2->pcal_units,
                   param_2->pcal_params);
    uVar3 = param_2->valid;
  }
  if ((uVar3 & 0x4000) == 0) {
    cVar4 = (char)uVar3;
  }
  else {
    png_write_sCAL_s(param_1,(uint)param_2->scal_unit,param_2->scal_s_width,param_2->scal_s_height);
    uVar3 = param_2->valid;
    cVar4 = (char)uVar3;
  }
  if (cVar4 < '\0') {
    png_write_pHYs(param_1,param_2->x_pixels_per_unit,param_2->y_pixels_per_unit,
                   (uint)param_2->phys_unit_type);
    uVar3 = param_2->valid;
  }
  if ((uVar3 & 0x200) != 0) {
    png_write_tIME(param_1,&param_2->mod_time);
    pbVar1 = (byte *)((longlong)&param_1->mode + 1);
    *pbVar1 = *pbVar1 | 2;
    uVar3 = param_2->valid;
  }
  if (((uVar3 & 0x2000) != 0) && (0 < param_2->splt_palettes_num)) {
    lVar10 = 0;
    lVar13 = 0;
    do {
      png_write_sPLT(param_1,(png_sPLT_struct *)((longlong)&param_2->splt_palettes->name + lVar10));
      lVar13 = lVar13 + 1;
      lVar10 = lVar10 + 0x20;
    } while (lVar13 < param_2->splt_palettes_num);
  }
  if (0 < param_2->num_text) {
    lVar10 = 0;
    lVar13 = 0;
    do {
      ppVar8 = param_2->text;
      iVar6 = *(int *)((longlong)&ppVar8->compression + lVar10);
      if (iVar6 < 1) {
        if (iVar6 == -1) {
          png_write_tEXt(param_1,*(char **)((longlong)&ppVar8->key + lVar10),
                         *(char **)((longlong)&ppVar8->text + lVar10),0);
          ppVar8 = param_2->text;
          goto LAB_140dbb855;
        }
        if (iVar6 == 0) {
          png_write_zTXt(param_1,*(char **)((longlong)&ppVar8->key + lVar10),
                         *(char **)((longlong)&ppVar8->text + lVar10),0);
          *(undefined4 *)((longlong)&param_2->text->compression + lVar10) = 0xfffffffe;
        }
      }
      else {
        png_write_iTXt(param_1,iVar6,*(char **)((longlong)&ppVar8->key + lVar10),
                       *(char **)((longlong)&ppVar8->lang + lVar10),
                       *(char **)((longlong)&ppVar8->lang_key + lVar10),
                       *(char **)((longlong)&ppVar8->text + lVar10));
        ppVar8 = param_2->text;
        if (*(int *)((longlong)&ppVar8->compression + lVar10) == -1) {
LAB_140dbb855:
          *(undefined4 *)((longlong)&ppVar8->compression + lVar10) = 0xfffffffd;
        }
        else {
          *(undefined4 *)((longlong)&ppVar8->compression + lVar10) = 0xfffffffe;
        }
      }
      lVar13 = lVar13 + 1;
      lVar10 = lVar10 + 0x38;
    } while (lVar13 < param_2->num_text);
  }
  iVar6 = param_2->unknown_chunks_num;
  if (((longlong)iVar6 != 0) && (0 < iVar6)) {
    ppVar11 = param_2->unknown_chunks;
    ppVar14 = ppVar11 + iVar6;
    do {
      if ((((ppVar11->location & 2) != 0) &&
          (iVar6 = png_handle_as_unknown(param_1,ppVar11->name), iVar6 != 1)) &&
         (((iVar6 == 3 || ((ppVar11->name[3] & 0x20) != 0)) ||
          ((iVar6 == 0 && (param_1->unknown_default == 3)))))) {
        uVar12 = ppVar11->size;
        if (uVar12 == 0) {
          png_warning(param_1,"Writing zero-length unknown chunk");
          uVar12 = ppVar11->size;
        }
        png_write_chunk(param_1,ppVar11->name,ppVar11->data,uVar12);
      }
      ppVar11 = ppVar11 + 1;
    } while (ppVar11 < ppVar14);
  }
  return;
}

// png_write_end @ 140dbb9b0

void __cdecl png_write_end(png_struct_def_conflict *param_1,png_info_def *param_2)

{
  int iVar1;
  png_text_struct *ppVar2;
  longlong lVar3;
  png_unknown_chunk_t *ppVar4;
  ulong64 uVar5;
  longlong lVar6;
  png_unknown_chunk_t *ppVar7;
  
  if (param_1 == (png_struct_def_conflict *)0x0) {
    return;
  }
  if ((param_1->mode & 4) == 0) {
                    /* WARNING: Subroutine does not return */
    png_error(param_1,"No IDATs written into file");
  }
  if ((param_1->color_type == '\x03') &&
     ((int)(uint)param_1->num_palette <= param_1->num_palette_max)) {
    png_benign_error(param_1,"Wrote palette index exceeding num_palette");
  }
  if (param_2 != (png_info_def *)0x0) {
    if (((param_2->valid & 0x200) != 0) && ((param_1->mode & 0x200) == 0)) {
      png_write_tIME(param_1,&param_2->mod_time);
    }
    if (0 < param_2->num_text) {
      lVar3 = 0;
      lVar6 = 0;
      do {
        ppVar2 = param_2->text;
        iVar1 = *(int *)((longlong)&ppVar2->compression + lVar3);
        if (iVar1 < 1) {
          if (iVar1 < 0) {
            if (iVar1 == -1) {
              png_write_tEXt(param_1,*(char **)((longlong)&ppVar2->key + lVar3),
                             *(char **)((longlong)&ppVar2->text + lVar3),0);
              ppVar2 = param_2->text;
              goto LAB_140dbba40;
            }
          }
          else {
            png_write_zTXt(param_1,*(char **)((longlong)&ppVar2->key + lVar3),
                           *(char **)((longlong)&ppVar2->text + lVar3),0);
            *(undefined4 *)((longlong)&param_2->text->compression + lVar3) = 0xfffffffe;
          }
        }
        else {
          png_write_iTXt(param_1,iVar1,*(char **)((longlong)&ppVar2->key + lVar3),
                         *(char **)((longlong)&ppVar2->lang + lVar3),
                         *(char **)((longlong)&ppVar2->lang_key + lVar3),
                         *(char **)((longlong)&ppVar2->text + lVar3));
          ppVar2 = param_2->text;
          if (*(int *)((longlong)&ppVar2->compression + lVar3) == -1) {
LAB_140dbba40:
            *(undefined4 *)((longlong)&ppVar2->compression + lVar3) = 0xfffffffd;
          }
          else {
            *(undefined4 *)((longlong)&ppVar2->compression + lVar3) = 0xfffffffe;
          }
        }
        lVar6 = lVar6 + 1;
        lVar3 = lVar3 + 0x38;
      } while (lVar6 < param_2->num_text);
    }
    if (((param_2->valid & 0x10000) != 0) && ((param_1->mode & 0x4000) == 0)) {
      png_write_eXIf(param_1,param_2->exif,param_2->num_exif);
    }
    iVar1 = param_2->unknown_chunks_num;
    if (((longlong)iVar1 != 0) && (0 < iVar1)) {
      ppVar4 = param_2->unknown_chunks;
      ppVar7 = ppVar4 + iVar1;
      do {
        if ((((ppVar4->location & 8) != 0) &&
            (iVar1 = png_handle_as_unknown(param_1,ppVar4->name), iVar1 != 1)) &&
           (((iVar1 == 3 || ((ppVar4->name[3] & 0x20) != 0)) ||
            ((iVar1 == 0 && (param_1->unknown_default == 3)))))) {
          uVar5 = ppVar4->size;
          if (uVar5 == 0) {
            png_warning(param_1,"Writing zero-length unknown chunk");
            uVar5 = ppVar4->size;
          }
          png_write_chunk(param_1,ppVar4->name,ppVar4->data,uVar5);
        }
        ppVar4 = ppVar4 + 1;
      } while (ppVar4 < ppVar7);
    }
  }
  *(byte *)&param_1->mode = (byte)param_1->mode | 8;
  png_write_IEND(param_1);
  return;
}

// png_convert_from_struct_tm @ 140dbbc00

void __cdecl png_convert_from_struct_tm(png_time_struct *param_1,tm *param_2)

{
  param_1->year = (short)param_2->tm_year + 0x76c;
  param_1->month = (char)param_2->tm_mon + '\x01';
  param_1->day = (uchar)param_2->tm_mday;
  param_1->hour = (uchar)param_2->tm_hour;
  param_1->minute = (uchar)param_2->tm_min;
  param_1->second = (uchar)param_2->tm_sec;
  return;
}

// png_convert_from_time_t @ 140dbbc40

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl png_convert_from_time_t(png_time_struct *param_1,long64 param_2)

{
  code *pcVar1;
  tm *ptVar2;
  undefined1 auStack_38 [32];
  long64 local_18;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStack_38;
  local_18 = param_2;
  ptVar2 = _gmtime64(&local_18);
  if (ptVar2 == (tm *)0x0) {
    param_1->year = 0;
    param_1->month = '\0';
    param_1->day = '\0';
    param_1->hour = '\0';
    param_1->minute = '\0';
    param_1->second = '\0';
    param_1->field_0x7 = 0;
    if ((local_10 ^ (ulonglong)auStack_38) != __security_cookie.value) goto LAB_140dbbcca;
  }
  else {
    param_1->year = (short)ptVar2->tm_year + 0x76c;
    param_1->month = (char)ptVar2->tm_mon + '\x01';
    param_1->day = (uchar)ptVar2->tm_mday;
    param_1->hour = (uchar)ptVar2->tm_hour;
    param_1->minute = (uchar)ptVar2->tm_min;
    param_1->second = (uchar)ptVar2->tm_sec;
    if ((local_10 ^ (ulonglong)auStack_38) != __security_cookie.value) {
LAB_140dbbcca:
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  return;
}

// png_create_write_struct @ 140dbbce0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

png_struct_def_conflict * __cdecl
png_create_write_struct
          (char *param_1,void *param_2,
          _func___cdecl_void_png_struct_def_ptr_char_ptr_conflict *param_3,
          _func___cdecl_void_png_struct_def_ptr_char_ptr_conflict *param_4)

{
  byte *pbVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  png_struct_def_conflict *ppVar5;
  
  ppVar5 = png_create_png_struct
                     (param_1,param_2,param_3,param_4,(void *)0x0,
                      (_func___cdecl_void_ptr_png_struct_def_ptr_ulong64_conflict *)0x0,
                      (_func___cdecl_void_png_struct_def_ptr_void_ptr_conflict *)0x0);
  uVar3 = _UNK_1531f16b8;
  if (ppVar5 != (png_struct_def_conflict *)0x0) {
    uVar2 = _UNK_1531f16b4;
    ppVar5->zbuffer_size = ___xmm_0000000f00000008ffffffff00002000;
    uVar4 = _UNK_1531f16b8;
    ppVar5->zlib_level = uVar2;
    _UNK_1531f16b8 = (undefined4)uVar3;
    _UNK_1531f16bc = SUB84(uVar3,4);
    uVar2 = _UNK_1531f16bc;
    ppVar5->zlib_method = _UNK_1531f16b8;
    _UNK_1531f16b8 = uVar4;
    ppVar5->zlib_window_bits = uVar2;
    ppVar5->zlib_text_strategy = 0;
    ppVar5->zlib_text_window_bits = 0xf;
    uVar3 = _UNK_1531f16c8;
    ppVar5->zlib_text_mem_level = 8;
    uVar2 = _UNK_1531f16c4;
    ppVar5->zlib_mem_level = ___xmm_00000008ffffffff0000000100000008;
    uVar4 = _UNK_1531f16c8;
    ppVar5->zlib_strategy = uVar2;
    _UNK_1531f16c8 = (undefined4)uVar3;
    _UNK_1531f16cc = SUB84(uVar3,4);
    uVar2 = _UNK_1531f16cc;
    ppVar5->zlib_text_level = _UNK_1531f16c8;
    _UNK_1531f16c8 = uVar4;
    ppVar5->zlib_text_method = uVar2;
    pbVar1 = (byte *)((longlong)&ppVar5->flags + 2);
    *pbVar1 = *pbVar1 | 0x20;
    png_set_write_fn(ppVar5,(void *)0x0,
                     (_func___cdecl_void_png_struct_def_ptr_uchar_ptr_ulong64_conflict *)0x0,
                     (_func___cdecl_void_png_struct_def_ptr_conflict *)0x0);
  }
  return ppVar5;
}

// png_create_write_struct_2 @ 140dbbd60

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

png_struct_def_conflict * __cdecl
png_create_write_struct_2
          (char *param_1,void *param_2,
          _func___cdecl_void_png_struct_def_ptr_char_ptr_conflict *param_3,
          _func___cdecl_void_png_struct_def_ptr_char_ptr_conflict *param_4,void *param_5,
          _func___cdecl_void_ptr_png_struct_def_ptr_ulong64_conflict *param_6,
          _func___cdecl_void_png_struct_def_ptr_void_ptr_conflict *param_7)

{
  byte *pbVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  png_struct_def_conflict *ppVar5;
  
  ppVar5 = png_create_png_struct(param_1,param_2,param_3,param_4,param_5,param_6,param_7);
  uVar3 = _UNK_1531f16b8;
  if (ppVar5 != (png_struct_def_conflict *)0x0) {
    uVar2 = _UNK_1531f16b4;
    ppVar5->zbuffer_size = ___xmm_0000000f00000008ffffffff00002000;
    uVar4 = _UNK_1531f16b8;
    ppVar5->zlib_level = uVar2;
    _UNK_1531f16b8 = (undefined4)uVar3;
    _UNK_1531f16bc = SUB84(uVar3,4);
    uVar2 = _UNK_1531f16bc;
    ppVar5->zlib_method = _UNK_1531f16b8;
    _UNK_1531f16b8 = uVar4;
    ppVar5->zlib_window_bits = uVar2;
    ppVar5->zlib_text_strategy = 0;
    ppVar5->zlib_text_window_bits = 0xf;
    uVar3 = _UNK_1531f16c8;
    ppVar5->zlib_text_mem_level = 8;
    uVar2 = _UNK_1531f16c4;
    ppVar5->zlib_mem_level = ___xmm_00000008ffffffff0000000100000008;
    uVar4 = _UNK_1531f16c8;
    ppVar5->zlib_strategy = uVar2;
    _UNK_1531f16c8 = (undefined4)uVar3;
    _UNK_1531f16cc = SUB84(uVar3,4);
    uVar2 = _UNK_1531f16cc;
    ppVar5->zlib_text_level = _UNK_1531f16c8;
    _UNK_1531f16c8 = uVar4;
    ppVar5->zlib_text_method = uVar2;
    pbVar1 = (byte *)((longlong)&ppVar5->flags + 2);
    *pbVar1 = *pbVar1 | 0x20;
    png_set_write_fn(ppVar5,(void *)0x0,
                     (_func___cdecl_void_png_struct_def_ptr_uchar_ptr_ulong64_conflict *)0x0,
                     (_func___cdecl_void_png_struct_def_ptr_conflict *)0x0);
  }
  return ppVar5;
}

// png_write_rows @ 140dbbdf0

void __cdecl png_write_rows(png_struct_def_conflict *param_1,uchar **param_2,uint param_3)

{
  longlong lVar1;
  
  if (param_3 != 0 && param_1 != (png_struct_def_conflict *)0x0) {
    lVar1 = 0;
    do {
      png_write_row(param_1,param_2[lVar1]);
      lVar1 = lVar1 + 1;
    } while (param_3 != (uint)lVar1);
  }
  return;
}

// png_write_row @ 140dbbe50

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl png_write_row(png_struct_def_conflict *param_1,uchar *param_2)

{
  uchar uVar1;
  code *pcVar2;
  uchar *puVar3;
  int iVar4;
  longlong lVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  undefined1 auStack_58 [32];
  png_row_info_struct local_38;
  ulonglong local_20;
  
  local_20 = __security_cookie.value ^ (ulonglong)auStack_58;
  if (param_1 == (png_struct_def_conflict *)0x0) goto LAB_140dbc20b;
  if ((param_1->row_number == 0) && (param_1->pass == '\0')) {
    if ((param_1->mode & 0x400) == 0) {
                    /* WARNING: Subroutine does not return */
      png_error(param_1,"png_write_info was never called before png_write_row");
    }
    png_write_start_row(param_1);
    uVar1 = param_1->interlaced;
  }
  else {
    uVar1 = param_1->interlaced;
  }
  if ((uVar1 != '\0') && ((param_1->transformations & 2) != 0)) {
    switch(param_1->pass) {
    case '\0':
      if ((param_1->row_number & 7) != 0) {
LAB_140dbc0d2:
        png_write_finish_row(param_1);
        return;
      }
      break;
    case '\x01':
      if (((param_1->row_number & 7) != 0) || (param_1->width < 5)) goto LAB_140dbc0d2;
      break;
    case '\x02':
      if ((param_1->row_number & 7) != 4) goto LAB_140dbc0d2;
      break;
    case '\x03':
      if (((param_1->row_number & 3) != 0) || (param_1->width < 3)) goto LAB_140dbc0d2;
      break;
    case '\x04':
      if ((param_1->row_number & 3) != 2) goto LAB_140dbc0d2;
      break;
    case '\x05':
      if (((param_1->row_number & 1) != 0) || (param_1->width < 2)) goto LAB_140dbc0d2;
      break;
    case '\x06':
      if ((param_1->row_number & 1) == 0) goto LAB_140dbc0d2;
    }
  }
  local_38.color_type = param_1->color_type;
  local_38.width = param_1->usr_width;
  local_38.channels = param_1->usr_channels;
  local_38.bit_depth = param_1->usr_bit_depth;
  local_38.pixel_depth = local_38.bit_depth * local_38.channels;
  if (local_38.pixel_depth < 8) {
    local_38.rowbytes = (ulonglong)local_38.pixel_depth * (ulonglong)local_38.width + 7 >> 3;
  }
  else {
    local_38.rowbytes = (ulonglong)(local_38.pixel_depth >> 3) * (ulonglong)local_38.width;
  }
  memcpy(param_1->row_buf + 1,param_2,local_38.rowbytes);
  if ((((param_1->interlaced != '\0') && (param_1->pass < 6)) &&
      ((param_1->transformations & 2) != 0)) &&
     (png_do_write_interlace(&local_38,param_1->row_buf + 1,(uint)param_1->pass),
     local_38.width == 0)) {
    png_write_finish_row(param_1);
    goto LAB_140dbc20b;
  }
  if (param_1->transformations != 0) {
    png_do_write_transformations(param_1,&local_38);
  }
  if ((local_38.pixel_depth != param_1->pixel_depth) ||
     (local_38.pixel_depth != param_1->transformed_pixel_depth)) {
                    /* WARNING: Subroutine does not return */
    png_error(param_1,"internal write transform logic error");
  }
  if ((((param_1->mng_features_permitted & 4) != 0) && (param_1->filter_type == '@')) &&
     ((local_38.color_type & 2) != 0)) {
    if (local_38.bit_depth == '\x10') {
      if (local_38.color_type == 2) {
        lVar5 = 6;
      }
      else {
        if (local_38.color_type != 6) goto LAB_140dbc1c5;
        lVar5 = 8;
      }
      if (local_38.width != 0) {
        puVar3 = param_1->row_buf + 6;
        uVar7 = local_38.width;
        do {
          uVar8 = (uint)(ushort)(*(ushort *)(puVar3 + -3) << 8 | *(ushort *)(puVar3 + -3) >> 8);
          iVar6 = (ushort)(*(ushort *)(puVar3 + -5) << 8 | *(ushort *)(puVar3 + -5) >> 8) - uVar8;
          iVar4 = (ushort)(*(ushort *)(puVar3 + -1) << 8 | *(ushort *)(puVar3 + -1) >> 8) - uVar8;
          puVar3[-5] = (uchar)((uint)iVar6 >> 8);
          puVar3[-4] = (uchar)iVar6;
          puVar3[-1] = (uchar)((uint)iVar4 >> 8);
          *puVar3 = (uchar)iVar4;
          puVar3 = puVar3 + lVar5;
          uVar7 = uVar7 - 1;
        } while (uVar7 != 0);
      }
    }
    else if (local_38.bit_depth == '\b') {
      if (local_38.color_type == 2) {
        lVar5 = 3;
      }
      else {
        if (local_38.color_type != 6) goto LAB_140dbc1c5;
        lVar5 = 4;
      }
      if (local_38.width != 0) {
        puVar3 = param_1->row_buf + 1;
        if (local_38.width != 1) {
          uVar7 = local_38.width & 0xfffffffe;
          do {
            *puVar3 = *puVar3 - puVar3[1];
            puVar3[2] = puVar3[2] - puVar3[1];
            puVar3[lVar5] = puVar3[lVar5] - puVar3[lVar5 + 1];
            puVar3[lVar5 + 2] = puVar3[lVar5 + 2] - puVar3[lVar5 + 1];
            puVar3 = puVar3 + lVar5 * 2;
            uVar7 = uVar7 - 2;
          } while (uVar7 != 0);
        }
        if ((local_38.width & 1) != 0) {
          *puVar3 = *puVar3 - puVar3[1];
          puVar3[2] = puVar3[2] - puVar3[1];
        }
      }
    }
  }
LAB_140dbc1c5:
  if ((local_38.color_type == 3) && (-1 < param_1->num_palette_max)) {
    png_do_check_palette_indexes(param_1,&local_38);
  }
  png_write_find_filter(param_1,&local_38);
  if (param_1->write_row_fn != (_func___cdecl_void_png_struct_def_ptr_uint_int_conflict *)0x0) {
    (*param_1->write_row_fn)(param_1,param_1->row_number,(int)param_1->pass);
  }
LAB_140dbc20b:
  if ((local_20 ^ (ulonglong)auStack_58) == __security_cookie.value) {
    return;
  }
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

// png_write_image @ 140dbc250

void __cdecl png_write_image(png_struct_def_conflict *param_1,uchar **param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  longlong lVar4;
  bool bVar5;
  
  if (((param_1 != (png_struct_def_conflict *)0x0) &&
      (iVar1 = png_set_interlace_handling(param_1), 0 < iVar1)) && (param_1->height != 0)) {
    iVar3 = 0;
    uVar2 = 1;
    do {
      bVar5 = uVar2 != 0;
      uVar2 = 0;
      if (bVar5) {
        lVar4 = 0;
        do {
          png_write_row(param_1,param_2[lVar4]);
          uVar2 = param_1->height;
          lVar4 = lVar4 + 1;
        } while ((uint)lVar4 < uVar2);
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 != iVar1);
  }
  return;
}

// png_set_flush @ 140dbc2e0

void __cdecl png_set_flush(png_struct_def_conflict *param_1,int param_2)

{
  uint uVar1;
  
  if (param_1 != (png_struct_def_conflict *)0x0) {
    uVar1 = 0;
    if (0 < param_2) {
      uVar1 = param_2;
    }
    param_1->flush_dist = uVar1;
  }
  return;
}

// png_write_flush @ 140dbc300

void __cdecl png_write_flush(png_struct_def_conflict *param_1)

{
  if ((param_1 != (png_struct_def_conflict *)0x0) && (param_1->row_number < param_1->num_rows)) {
    png_compress_IDAT(param_1,(uchar *)0x0,0,2);
    param_1->flush_rows = 0;
    png_flush(param_1);
    return;
  }
  return;
}

// png_destroy_write_struct @ 140dbc350

void __cdecl png_destroy_write_struct(png_struct_def_conflict **param_1,png_info_def **param_2)

{
  png_struct_def_conflict *ppVar1;
  
  if ((param_1 != (png_struct_def_conflict **)0x0) &&
     (ppVar1 = *param_1, ppVar1 != (png_struct_def_conflict *)0x0)) {
    png_destroy_info_struct(ppVar1,param_2);
    *param_1 = (png_struct_def_conflict *)0x0;
    if ((ppVar1->flags & 2) != 0) {
      deflateEnd(&ppVar1->zstream);
    }
    png_free_buffer_list(ppVar1,&ppVar1->zbuffer_list);
    png_free(ppVar1,ppVar1->row_buf);
    ppVar1->row_buf = (uchar *)0x0;
    png_free(ppVar1,ppVar1->prev_row);
    png_free(ppVar1,ppVar1->try_row);
    png_free(ppVar1,ppVar1->tst_row);
    ppVar1->prev_row = (uchar *)0x0;
    ppVar1->try_row = (uchar *)0x0;
    ppVar1->tst_row = (uchar *)0x0;
    png_free(ppVar1,ppVar1->chunk_list);
    ppVar1->chunk_list = (uchar *)0x0;
    png_destroy_png_struct(ppVar1);
    return;
  }
  return;
}

// png_set_filter @ 140dbc440

void __cdecl png_set_filter(png_struct_def_conflict *param_1,int param_2,int param_3)

{
  uint uVar1;
  uchar *puVar2;
  uchar uVar3;
  ulonglong uVar4;
  uchar uVar5;
  uint uVar6;
  
  uVar5 = (uchar)param_3;
  if (param_1 != (png_struct_def_conflict *)0x0) {
    if ((param_2 != 0) &&
       ((param_2 == 0x40 & ((byte)param_1->mng_features_permitted & 4) >> 2) == 0)) {
                    /* WARNING: Subroutine does not return */
      png_error(param_1,"Unknown custom filter method");
    }
    uVar3 = '\b';
    switch(param_3 & 0xff) {
    case 1:
      uVar3 = '\x10';
    case 0:
      param_1->do_filter = uVar3;
      puVar2 = param_1->row_buf;
      break;
    case 2:
      param_1->do_filter = ' ';
      puVar2 = param_1->row_buf;
      break;
    case 3:
      param_1->do_filter = '@';
      puVar2 = param_1->row_buf;
      break;
    case 4:
      param_1->do_filter = 0x80;
      puVar2 = param_1->row_buf;
      break;
    case 5:
    case 6:
    case 7:
      png_app_error(param_1,"Unknown row filter for method 0");
      param_1->do_filter = '\b';
      puVar2 = param_1->row_buf;
      break;
    default:
      param_1->do_filter = uVar5;
      puVar2 = param_1->row_buf;
    }
    if (puVar2 != (uchar *)0x0) {
      uVar1 = param_3 & 0xffffff1f;
      if (param_1->height != 1) {
        uVar1 = param_3;
      }
      uVar6 = uVar1 & 0xffffff2f;
      if (param_1->width != 1) {
        uVar6 = uVar1;
      }
      if (((uVar6 & 0xe0) != 0) && (param_1->prev_row == (uchar *)0x0)) {
        png_app_warning(param_1,"png_set_filter: UP/AVG/PAETH cannot be added after start");
        uVar6 = uVar6 & 0xffffff1f;
      }
      uVar5 = (uchar)uVar6;
      uVar1 = (uint)param_1->usr_bit_depth * (uint)param_1->usr_channels;
      if (uVar1 < 8) {
        uVar4 = (ulonglong)param_1->width * (ulonglong)uVar1 + 7 >> 3;
        puVar2 = param_1->try_row;
      }
      else {
        uVar4 = (ulonglong)param_1->width * (ulonglong)(uVar1 >> 3);
        puVar2 = param_1->try_row;
      }
      if (puVar2 == (uchar *)0x0) {
        puVar2 = png_malloc(param_1,uVar4 + 1);
        param_1->try_row = puVar2;
      }
      if ((1 < (uVar6 >> 6 & 1) + (uVar6 >> 4 & 1) + (uint)((uVar6 >> 5 & 1) != 0) +
               (uint)((uVar6 >> 7 & 1) != 0)) && (param_1->tst_row == (uchar *)0x0)) {
        puVar2 = png_malloc(param_1,uVar4 + 1);
        param_1->tst_row = puVar2;
      }
    }
    param_1->do_filter = uVar5;
  }
  return;
}

// png_set_filter_heuristics @ 140dbc640

void __cdecl
png_set_filter_heuristics
          (png_struct_def_conflict *param_1,int param_2,int param_3,double *param_4,double *param_5)

{
  return;
}

// png_set_filter_heuristics_fixed @ 140dbc650

void __cdecl
png_set_filter_heuristics_fixed
          (png_struct_def_conflict *param_1,int param_2,int param_3,int *param_4,int *param_5)

{
  return;
}

// png_set_compression_level @ 140dbc660

void __cdecl png_set_compression_level(png_struct_def_conflict *param_1,int param_2)

{
  if (param_1 != (png_struct_def_conflict *)0x0) {
    param_1->zlib_level = param_2;
  }
  return;
}

// png_set_compression_mem_level @ 140dbc680

void __cdecl png_set_compression_mem_level(png_struct_def_conflict *param_1,int param_2)

{
  if (param_1 != (png_struct_def_conflict *)0x0) {
    param_1->zlib_mem_level = param_2;
  }
  return;
}

// png_set_compression_strategy @ 140dbc6a0

void __cdecl png_set_compression_strategy(png_struct_def_conflict *param_1,int param_2)

{
  if (param_1 != (png_struct_def_conflict *)0x0) {
    *(byte *)&param_1->flags = (byte)param_1->flags | 1;
    param_1->zlib_strategy = param_2;
  }
  return;
}

// png_set_compression_window_bits @ 140dbc6c0

void __cdecl png_set_compression_window_bits(png_struct_def_conflict *param_1,int param_2)

{
  char *pcVar1;
  
  if (param_1 == (png_struct_def_conflict *)0x0) {
    return;
  }
  if (param_2 < 0x10) {
    if (7 < param_2) goto LAB_140dbc6fc;
    param_2 = 8;
    pcVar1 = "Only compression windows >= 256 supported by PNG";
  }
  else {
    param_2 = 0xf;
    pcVar1 = "Only compression windows <= 32k supported by PNG";
  }
  png_warning(param_1,pcVar1);
LAB_140dbc6fc:
  param_1->zlib_window_bits = param_2;
  return;
}

// png_set_compression_method @ 140dbc710

void __cdecl png_set_compression_method(png_struct_def_conflict *param_1,int param_2)

{
  if (param_1 != (png_struct_def_conflict *)0x0) {
    if (param_2 != 8) {
      png_warning(param_1,"Only compression method 8 is supported by PNG");
    }
    param_1->zlib_method = param_2;
  }
  return;
}

// png_set_text_compression_level @ 140dbc750

void __cdecl png_set_text_compression_level(png_struct_def_conflict *param_1,int param_2)

{
  if (param_1 != (png_struct_def_conflict *)0x0) {
    param_1->zlib_text_level = param_2;
  }
  return;
}

// png_set_text_compression_mem_level @ 140dbc770

void __cdecl png_set_text_compression_mem_level(png_struct_def_conflict *param_1,int param_2)

{
  if (param_1 != (png_struct_def_conflict *)0x0) {
    param_1->zlib_text_mem_level = param_2;
  }
  return;
}

// png_set_text_compression_strategy @ 140dbc790

void __cdecl png_set_text_compression_strategy(png_struct_def_conflict *param_1,int param_2)

{
  if (param_1 != (png_struct_def_conflict *)0x0) {
    param_1->zlib_text_strategy = param_2;
  }
  return;
}

// png_set_text_compression_window_bits @ 140dbc7b0

void __cdecl png_set_text_compression_window_bits(png_struct_def_conflict *param_1,int param_2)

{
  char *pcVar1;
  
  if (param_1 == (png_struct_def_conflict *)0x0) {
    return;
  }
  if (param_2 < 0x10) {
    if (7 < param_2) goto LAB_140dbc7ec;
    param_2 = 8;
    pcVar1 = "Only compression windows >= 256 supported by PNG";
  }
  else {
    param_2 = 0xf;
    pcVar1 = "Only compression windows <= 32k supported by PNG";
  }
  png_warning(param_1,pcVar1);
LAB_140dbc7ec:
  param_1->zlib_text_window_bits = param_2;
  return;
}

// png_set_text_compression_method @ 140dbc800

void __cdecl png_set_text_compression_method(png_struct_def_conflict *param_1,int param_2)

{
  if (param_1 != (png_struct_def_conflict *)0x0) {
    if (param_2 != 8) {
      png_warning(param_1,"Only compression method 8 is supported by PNG");
    }
    param_1->zlib_text_method = param_2;
  }
  return;
}

// png_set_write_status_fn @ 140dbc840

void __cdecl
png_set_write_status_fn
          (png_struct_def_conflict *param_1,
          _func___cdecl_void_png_struct_def_ptr_uint_int_conflict *param_2)

{
  if (param_1 != (png_struct_def_conflict *)0x0) {
    param_1->write_row_fn = param_2;
  }
  return;
}

// png_set_write_user_transform_fn @ 140dbc860

void __cdecl
png_set_write_user_transform_fn
          (png_struct_def_conflict *param_1,
          _func___cdecl_void_png_struct_def_ptr_png_row_info_struct_ptr_uchar_ptr_conflict *param_2)

{
  byte *pbVar1;
  
  if (param_1 != (png_struct_def_conflict *)0x0) {
    pbVar1 = (byte *)((longlong)&param_1->transformations + 2);
    *pbVar1 = *pbVar1 | 0x10;
    param_1->write_user_transform_fn = param_2;
  }
  return;
}

// png_write_png @ 140dbc880

/* WARNING: Type propagation algorithm not settling */

void __cdecl
png_write_png(png_struct_def_conflict *param_1,png_info_def *param_2,int param_3,void *param_4)

{
  uchar **ppuVar1;
  int iVar2;
  uint uVar3;
  longlong lVar4;
  int iVar5;
  bool bVar6;
  
  if (param_2 == (png_info_def *)0x0 || param_1 == (png_struct_def_conflict *)0x0) {
    return;
  }
  if ((param_2->valid & 0x8000) == 0) {
    png_app_error(param_1,"no rows for png_write_image to write");
    return;
  }
  png_write_info(param_1,param_2);
  if ((param_3 & 0x20U) != 0) {
    png_set_invert_mono(param_1);
  }
  if (((param_3 & 0x40U) != 0) && ((param_2->valid & 2) != 0)) {
    png_set_shift(param_1,&param_2->sig_bit);
  }
  if ((param_3 & 4U) != 0) {
    png_set_packing(param_1);
  }
  if ((param_3 & 0x100U) != 0) {
    png_set_swap_alpha(param_1);
  }
  if ((param_3 & 0x1800U) != 0) {
    if ((param_3 & 0x1000U) == 0) {
      iVar2 = 0;
      if ((param_3 & 0x800U) == 0) goto LAB_140dbc981;
    }
    else {
      iVar2 = 1;
      if ((param_3 & 0x800U) != 0) {
        png_app_error(param_1,"PNG_TRANSFORM_STRIP_FILLER: BEFORE+AFTER not supported");
        iVar2 = 1;
      }
    }
    png_set_filler(param_1,0,iVar2);
  }
LAB_140dbc981:
  if ((char)param_3 < '\0') {
    png_set_bgr(param_1);
  }
  if ((param_3 & 0x200U) != 0) {
    png_set_swap(param_1);
  }
  if ((param_3 & 8U) != 0) {
    png_set_packswap(param_1);
  }
  if ((param_3 & 0x400U) != 0) {
    png_set_invert_alpha(param_1);
  }
  ppuVar1 = param_2->row_pointers;
  iVar2 = png_set_interlace_handling(param_1);
  if ((0 < iVar2) && (param_1->height != 0)) {
    iVar5 = 0;
    uVar3 = 1;
    do {
      bVar6 = uVar3 != 0;
      uVar3 = 0;
      if (bVar6) {
        lVar4 = 0;
        do {
          png_write_row(param_1,ppuVar1[lVar4]);
          uVar3 = param_1->height;
          lVar4 = lVar4 + 1;
        } while ((uint)lVar4 < uVar3);
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 != iVar2);
  }
  png_write_end(param_1,param_2);
  return;
}

// png_image_write_to_memory @ 140dbca80

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

int __cdecl
png_image_write_to_memory
          (png_image *param_1,void *param_2,ulong64 *param_3,int param_4,void *param_5,int param_6,
          void *param_7)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  char *pcVar4;
  undefined1 auStack_c8 [40];
  png_image *local_a0;
  void *local_98;
  ulonglong local_90;
  void *pvStack_88;
  ulonglong local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  void *local_60;
  ulong64 local_58;
  ulonglong local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_c8;
  iVar3 = 0;
  if (param_1 != (png_image *)0x0) {
    if (param_1->version != 1) {
      pcVar4 = "png_image_write_to_memory: incorrect PNG_IMAGE_VERSION";
LAB_140dbcbba:
      iVar3 = png_image_error(param_1,pcVar4);
      return iVar3;
    }
    if (param_5 == (void *)0x0 || param_3 == (ulong64 *)0x0) {
      pcVar4 = "png_image_write_to_memory: invalid argument";
      goto LAB_140dbcbba;
    }
    if (param_2 == (void *)0x0) {
      *param_3 = 0;
    }
    iVar2 = png_image_write_init(param_1);
    iVar3 = 0;
    if (iVar2 != 0) {
      uStack_78 = 0;
      local_70 = 0;
      uStack_68 = 0;
      local_98 = param_5;
      local_90 = (ulonglong)(uint)param_6;
      pvStack_88 = param_7;
      local_80 = (ulonglong)(uint)param_4;
      local_58 = *param_3;
      local_50 = 0;
      local_a0 = param_1;
      local_60 = param_2;
      iVar3 = png_safe_execute(param_1,png_image_write_memory,&local_a0);
      png_image_free(param_1);
      if (iVar3 == 0) {
        if ((local_48 ^ (ulonglong)auStack_c8) == __security_cookie.value) {
          return 0;
        }
        goto LAB_140dbcbfe;
      }
      if ((param_2 != (void *)0x0) && (*param_3 < local_50)) {
        iVar3 = 0;
      }
      *param_3 = local_50;
    }
  }
  if ((local_48 ^ (ulonglong)auStack_c8) == __security_cookie.value) {
    return iVar3;
  }
LAB_140dbcbfe:
  pcVar1 = (code *)swi(3);
  iVar3 = (*pcVar1)();
  return iVar3;
}

// png_image_write_init @ 140dbcc10

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl png_image_write_init(png_image *param_1)

{
  byte *pbVar1;
  code *pcVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  int iVar6;
  png_struct_def_conflict *ppVar7;
  png_info_def *ppVar8;
  png_control *ppVar9;
  undefined1 auStackY_68 [32];
  png_info_def *local_30;
  png_struct_def_conflict *local_28;
  ulonglong local_20;
  
  local_20 = __security_cookie.value ^ (ulonglong)auStackY_68;
  ppVar7 = png_create_png_struct
                     ("1.6.44",param_1,png_safe_error,png_safe_warning,(void *)0x0,
                      (_func___cdecl_void_ptr_png_struct_def_ptr_ulong64_conflict *)0x0,
                      (_func___cdecl_void_png_struct_def_ptr_void_ptr_conflict *)0x0);
  uVar4 = _UNK_1531f16b8;
  if (ppVar7 == (png_struct_def_conflict *)0x0) {
    local_28 = (png_struct_def_conflict *)0x0;
  }
  else {
    uVar3 = _UNK_1531f16b4;
    ppVar7->zbuffer_size = ___xmm_0000000f00000008ffffffff00002000;
    uVar5 = _UNK_1531f16b8;
    ppVar7->zlib_level = uVar3;
    _UNK_1531f16b8 = (undefined4)uVar4;
    _UNK_1531f16bc = SUB84(uVar4,4);
    uVar3 = _UNK_1531f16bc;
    ppVar7->zlib_method = _UNK_1531f16b8;
    _UNK_1531f16b8 = uVar5;
    ppVar7->zlib_window_bits = uVar3;
    ppVar7->zlib_text_strategy = 0;
    ppVar7->zlib_text_window_bits = 0xf;
    uVar4 = _UNK_1531f16c8;
    ppVar7->zlib_text_mem_level = 8;
    uVar3 = _UNK_1531f16c4;
    ppVar7->zlib_mem_level = ___xmm_00000008ffffffff0000000100000008;
    uVar5 = _UNK_1531f16c8;
    ppVar7->zlib_strategy = uVar3;
    _UNK_1531f16c8 = (undefined4)uVar4;
    _UNK_1531f16cc = SUB84(uVar4,4);
    uVar3 = _UNK_1531f16cc;
    ppVar7->zlib_text_level = _UNK_1531f16c8;
    _UNK_1531f16c8 = uVar5;
    ppVar7->zlib_text_method = uVar3;
    pbVar1 = (byte *)((longlong)&ppVar7->flags + 2);
    *pbVar1 = *pbVar1 | 0x20;
    png_set_write_fn(ppVar7,(void *)0x0,
                     (_func___cdecl_void_png_struct_def_ptr_uchar_ptr_ulong64_conflict *)0x0,
                     (_func___cdecl_void_png_struct_def_ptr_conflict *)0x0);
    local_28 = ppVar7;
    ppVar8 = png_create_info_struct(ppVar7);
    local_30 = ppVar8;
    if (ppVar8 != (png_info_def *)0x0) {
      ppVar9 = png_malloc_warn(ppVar7,0x30);
      if (ppVar9 != (png_control *)0x0) {
        ppVar9->size = 0;
        *(undefined8 *)&ppVar9->field_0x28 = 0;
        ppVar9->error_buf = (void *)0x0;
        ppVar9->memory = (uchar *)0x0;
        ppVar9->png_ptr = ppVar7;
        ppVar9->info_ptr = ppVar8;
        *(undefined4 *)&ppVar9->field_0x28 = 1;
        param_1->opaque = ppVar9;
        if ((local_20 ^ (ulonglong)auStackY_68) == __security_cookie.value) {
          return 1;
        }
        goto LAB_140dbcd0f;
      }
      png_destroy_info_struct(ppVar7,&local_30);
    }
    png_destroy_write_struct(&local_28,(png_info_def **)0x0);
  }
  iVar6 = png_image_error(param_1,"png_image_write_: out of memory");
  if ((local_20 ^ (ulonglong)auStackY_68) == __security_cookie.value) {
    return iVar6;
  }
LAB_140dbcd0f:
  pcVar2 = (code *)swi(3);
  iVar6 = (*pcVar2)();
  return iVar6;
}

// png_image_write_memory @ 140dbcd70

int __cdecl png_image_write_memory(void *param_1)

{
  int iVar1;
  
  png_set_write_fn(*(png_struct_def_conflict **)**(undefined8 **)param_1,param_1,image_memory_write,
                   image_memory_flush);
  iVar1 = png_image_write_main(param_1);
  return iVar1;
}

// png_image_write_to_stdio @ 140dbcdb0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

int __cdecl
png_image_write_to_stdio
          (png_image *param_1,_iobuf *param_2,int param_3,void *param_4,int param_5,void *param_6)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  char *pcVar4;
  undefined1 auStack_b8 [32];
  png_image *local_98;
  void *local_90;
  ulonglong local_88;
  void *pvStack_80;
  ulonglong local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = __security_cookie.value ^ (ulonglong)auStack_b8;
  iVar3 = 0;
  if (param_1 == (png_image *)0x0) {
LAB_140dbce83:
    if ((local_40 ^ (ulonglong)auStack_b8) == __security_cookie.value) {
      return iVar3;
    }
    pcVar1 = (code *)swi(3);
    iVar3 = (*pcVar1)();
    return iVar3;
  }
  if (param_1->version == 1) {
    if (param_4 != (void *)0x0 && param_2 != (_iobuf *)0x0) {
      iVar2 = png_image_write_init(param_1);
      iVar3 = 0;
      if (iVar2 != 0) {
        param_1->opaque->png_ptr->io_ptr = param_2;
        uStack_70 = 0;
        local_58 = 0;
        uStack_50 = 0;
        local_68 = 0;
        uStack_60 = 0;
        local_48 = 0;
        local_88 = (ulonglong)(uint)param_5;
        pvStack_80 = param_6;
        local_78 = (ulonglong)(uint)param_3;
        local_98 = param_1;
        local_90 = param_4;
        iVar3 = png_safe_execute(param_1,png_image_write_main,&local_98);
        png_image_free(param_1);
      }
      goto LAB_140dbce83;
    }
    pcVar4 = "png_image_write_to_stdio: invalid argument";
  }
  else {
    pcVar4 = "png_image_write_to_stdio: incorrect PNG_IMAGE_VERSION";
  }
  iVar3 = png_image_error(param_1,pcVar4);
  return iVar3;
}

// png_image_write_main @ 140dbcef0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

int __cdecl png_image_write_main(void *param_1)

{
  ulonglong uVar1;
  char cVar2;
  ushort uVar3;
  ushort uVar4;
  png_image *ppVar5;
  png_struct_def_conflict *ppVar6;
  png_info_def *ppVar7;
  longlong *plVar8;
  int iVar9;
  longlong lVar10;
  uchar *puVar11;
  ulong64 uVar12;
  void *pvVar13;
  uint uVar14;
  ulonglong uVar15;
  uint uVar16;
  ulonglong uVar17;
  longlong lVar18;
  ulonglong uVar19;
  code *pcVar20;
  uint uVar21;
  ushort *puVar22;
  uint uVar23;
  uint uVar24;
  ulonglong uVar25;
  uint uVar26;
  uchar uVar27;
  ulonglong uVar28;
  uchar uVar29;
  uint uVar30;
  uint uVar31;
  uint uVar32;
  bool bVar33;
  bool bVar34;
  undefined1 auStackY_4e8 [32];
  undefined4 local_448;
  undefined4 uStack_444;
  undefined4 uStack_440;
  undefined4 uStack_43c;
  undefined4 local_438;
  undefined4 uStack_434;
  undefined4 uStack_430;
  undefined4 uStack_42c;
  undefined4 local_428;
  undefined4 uStack_424;
  undefined4 uStack_420;
  undefined4 uStack_41c;
  undefined4 local_418;
  undefined4 uStack_414;
  undefined4 uStack_410;
  undefined4 uStack_40c;
  undefined4 local_408;
  undefined4 uStack_404;
  undefined4 uStack_400;
  undefined4 uStack_3fc;
  undefined4 local_3f8;
  undefined4 uStack_3f4;
  undefined4 uStack_3f0;
  undefined4 uStack_3ec;
  undefined4 local_3e8;
  undefined4 uStack_3e4;
  undefined4 uStack_3e0;
  undefined4 uStack_3dc;
  undefined4 local_3d8;
  undefined4 uStack_3d4;
  undefined4 uStack_3d0;
  undefined4 uStack_3cc;
  undefined4 local_3c8;
  undefined4 uStack_3c4;
  undefined4 uStack_3c0;
  undefined4 uStack_3bc;
  undefined4 local_3b8;
  undefined4 uStack_3b4;
  undefined4 uStack_3b0;
  undefined4 uStack_3ac;
  undefined4 local_3a8;
  undefined4 uStack_3a4;
  undefined4 uStack_3a0;
  undefined4 uStack_39c;
  undefined4 local_398;
  undefined4 uStack_394;
  undefined4 uStack_390;
  undefined4 uStack_38c;
  undefined4 local_388;
  undefined4 uStack_384;
  undefined4 uStack_380;
  undefined4 uStack_37c;
  undefined4 local_378;
  undefined4 uStack_374;
  undefined4 uStack_370;
  undefined4 uStack_36c;
  undefined4 local_368;
  undefined4 uStack_364;
  undefined4 uStack_360;
  undefined4 uStack_35c;
  undefined4 local_358;
  undefined4 uStack_354;
  undefined4 uStack_350;
  undefined4 uStack_34c;
  png_color_struct local_348 [256];
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_4e8;
  ppVar5 = *(png_image **)param_1;
  ppVar6 = ppVar5->opaque->png_ptr;
  uVar24 = ppVar5->format;
  if ((uVar24 & 0xc) == 4) {
    bVar33 = *(int *)((longlong)param_1 + 0x20) == 0;
  }
  else {
    bVar33 = false;
  }
  ppVar7 = ppVar5->opaque->info_ptr;
  png_set_benign_errors(ppVar6,0);
  uVar14 = 1;
  if ((ppVar5->format & 8) == 0) {
    uVar14 = (ppVar5->format & 3) + 1;
  }
  if ((uint)(0x7fffffff / (ulonglong)uVar14) < ppVar5->width) {
                    /* WARNING: Subroutine does not return */
    png_error(ppVar5->opaque->png_ptr,"image row stride too large");
  }
  uVar14 = uVar14 * ppVar5->width;
  uVar21 = *(uint *)((longlong)param_1 + 0x10);
  if (*(uint *)((longlong)param_1 + 0x10) == 0) {
    *(uint *)((longlong)param_1 + 0x10) = uVar14;
    uVar21 = uVar14;
  }
  uVar16 = -uVar21;
  if ((int)-uVar21 < 0) {
    uVar16 = uVar21;
  }
  if (uVar16 < uVar14) {
                    /* WARNING: Subroutine does not return */
    png_error(ppVar5->opaque->png_ptr,"supplied row stride too small");
  }
  uVar21 = ppVar5->height;
  if ((int)((ulonglong)uVar14 * (ulonglong)uVar21 >> 0x20) != 0) {
                    /* WARNING: Subroutine does not return */
    png_error(ppVar5->opaque->png_ptr,"memory image too large");
  }
  if ((uVar24 & 8) == 0) {
    png_set_IHDR(ppVar6,ppVar7,ppVar5->width,uVar21,(uint)bVar33 * 8 + 8,
                 (uint)((byte)(((byte)uVar24 & 2) << 5 | (byte)uVar24 << 7) >> 5),0,0,0);
    if (bVar33 != false) goto LAB_140dbd009;
LAB_140dbd767:
    if ((ppVar5->flags & 1) == 0) {
      png_set_sRGB(ppVar6,ppVar7,0);
    }
    else {
      png_set_gAMA_fixed(ppVar6,ppVar7,0xb18f);
    }
    png_write_info(ppVar6,ppVar7);
  }
  else {
    if ((*(longlong *)((longlong)param_1 + 0x18) == 0) ||
       (uVar14 = ppVar5->colormap_entries, uVar14 == 0)) {
                    /* WARNING: Subroutine does not return */
      png_error(ppVar5->opaque->png_ptr,"no color-map for color-mapped image");
    }
    iVar9 = 8;
    if ((uVar14 < 0x11) && (iVar9 = 4, uVar14 < 5)) {
      iVar9 = 2 - (uint)(uVar14 < 3);
    }
    png_set_IHDR(ppVar6,ppVar7,ppVar5->width,uVar21,iVar9,3,0,0,0);
    plVar8 = *(longlong **)param_1;
    puVar22 = *(ushort **)((longlong)param_1 + 0x18);
    uVar14 = *(uint *)((longlong)plVar8 + 0x14);
    uVar21 = *(uint *)((longlong)plVar8 + 0x1c);
    uVar16 = 0x100;
    if (uVar21 < 0x100) {
      uVar16 = uVar21;
    }
    local_358 = 0xffffffff;
    uStack_354 = 0xffffffff;
    uStack_350 = 0xffffffff;
    uStack_34c = 0xffffffff;
    local_368 = 0xffffffff;
    uStack_364 = 0xffffffff;
    uStack_360 = 0xffffffff;
    uStack_35c = 0xffffffff;
    local_378 = 0xffffffff;
    uStack_374 = 0xffffffff;
    uStack_370 = 0xffffffff;
    uStack_36c = 0xffffffff;
    local_388 = 0xffffffff;
    uStack_384 = 0xffffffff;
    uStack_380 = 0xffffffff;
    uStack_37c = 0xffffffff;
    local_398 = 0xffffffff;
    uStack_394 = 0xffffffff;
    uStack_390 = 0xffffffff;
    uStack_38c = 0xffffffff;
    local_3a8 = 0xffffffff;
    uStack_3a4 = 0xffffffff;
    uStack_3a0 = 0xffffffff;
    uStack_39c = 0xffffffff;
    local_3b8 = 0xffffffff;
    uStack_3b4 = 0xffffffff;
    uStack_3b0 = 0xffffffff;
    uStack_3ac = 0xffffffff;
    local_3c8 = 0xffffffff;
    uStack_3c4 = 0xffffffff;
    uStack_3c0 = 0xffffffff;
    uStack_3bc = 0xffffffff;
    local_3d8 = 0xffffffff;
    uStack_3d4 = 0xffffffff;
    uStack_3d0 = 0xffffffff;
    uStack_3cc = 0xffffffff;
    local_3e8 = 0xffffffff;
    uStack_3e4 = 0xffffffff;
    uStack_3e0 = 0xffffffff;
    uStack_3dc = 0xffffffff;
    local_3f8 = 0xffffffff;
    uStack_3f4 = 0xffffffff;
    uStack_3f0 = 0xffffffff;
    uStack_3ec = 0xffffffff;
    local_408 = 0xffffffff;
    uStack_404 = 0xffffffff;
    uStack_400 = 0xffffffff;
    uStack_3fc = 0xffffffff;
    local_418 = 0xffffffff;
    uStack_414 = 0xffffffff;
    uStack_410 = 0xffffffff;
    uStack_40c = 0xffffffff;
    local_428 = 0xffffffff;
    uStack_424 = 0xffffffff;
    uStack_420 = 0xffffffff;
    uStack_41c = 0xffffffff;
    local_438 = 0xffffffff;
    uStack_434 = 0xffffffff;
    uStack_430 = 0xffffffff;
    uStack_42c = 0xffffffff;
    local_448 = 0xffffffff;
    uStack_444 = 0xffffffff;
    uStack_440 = 0xffffffff;
    uStack_43c = 0xffffffff;
    iVar9 = 0;
    memset(local_348,0,0x300);
    if (uVar21 != 0) {
      uVar32 = uVar14 & 3;
      uVar26 = uVar14 >> 3 & 2;
      iVar9 = 0;
      bVar34 = (uVar14 & 0x21) == 0x21;
      uVar21 = (uint)bVar34;
      uVar25 = (ulonglong)uVar21;
      uVar19 = (ulonglong)uVar32;
      if (bVar34) {
        uVar19 = 0;
      }
      uVar28 = (ulonglong)(uVar26 + uVar21) ^ 2;
      uVar15 = (ulonglong)uVar16;
      if ((uVar14 & 4) == 0) {
        puVar11 = &local_348[0].blue;
        uVar19 = 0;
        do {
          switch(uVar32) {
          case 1:
            cVar2 = *(char *)((longlong)puVar22 + (uVar25 ^ 1));
            *(char *)((longlong)&local_448 + uVar19) = cVar2;
            if (cVar2 != -1) {
              iVar9 = (int)uVar19 + 1;
            }
          case 0:
            uVar27 = *(uchar *)((longlong)puVar22 + uVar25);
            puVar11[-1] = uVar27;
            ((png_color_struct *)(puVar11 + -2))->red = uVar27;
            *puVar11 = uVar27;
            break;
          case 3:
            cVar2 = *(char *)((longlong)puVar22 + (ulonglong)!bVar34 * 3);
            *(char *)((longlong)&local_448 + uVar19) = cVar2;
            if (cVar2 != -1) {
              iVar9 = (int)uVar19 + 1;
            }
          case 2:
            *puVar11 = *(uchar *)((longlong)puVar22 + uVar28);
            puVar11[-1] = *(uchar *)((longlong)puVar22 + uVar25 + 1);
            ((png_color_struct *)(puVar11 + -2))->red =
                 *(uchar *)((longlong)puVar22 + (ulonglong)(uVar26 + uVar21));
          }
          uVar19 = uVar19 + 1;
          puVar11 = puVar11 + 3;
          puVar22 = (ushort *)((longlong)puVar22 + (ulonglong)uVar32 + 1);
        } while (uVar15 != uVar19);
      }
      else if ((uVar14 & 1) == 0) {
        if (uVar32 < 2) {
          iVar9 = 0;
          lVar10 = 0;
          do {
            uVar21 = (uint)*puVar22 * 0xff >> 0xf;
            uVar27 = (uchar)(((uint)png_sRGB_delta[uVar21] * ((uint)*puVar22 * 0xff & 0x7fff) >> 0xc
                             ) + (uint)png_sRGB_base[uVar21] >> 8);
            (&local_348[0].green)[lVar10] = uVar27;
            (&local_348[0].red)[lVar10] = uVar27;
            (&local_348[0].blue)[lVar10] = uVar27;
            lVar10 = lVar10 + 3;
            puVar22 = puVar22 + (ulonglong)(uVar14 & 3) + 1;
          } while (uVar15 * 3 != lVar10);
        }
        else {
          iVar9 = 0;
          lVar10 = 0;
          do {
            uVar21 = (uint)puVar22[(ulonglong)uVar26 ^ 2] * 0x100 -
                     (uint)puVar22[(ulonglong)uVar26 ^ 2];
            uVar32 = uVar21 >> 0xf;
            (&local_348[0].blue)[lVar10] =
                 (uchar)(((uint)png_sRGB_delta[uVar32] * (uVar21 & 0x7fff) >> 0xc) +
                         (uint)png_sRGB_base[uVar32] >> 8);
            uVar21 = (uint)puVar22[1] * 0xff >> 0xf;
            (&local_348[0].green)[lVar10] =
                 (uchar)(((uint)png_sRGB_delta[uVar21] * ((uint)puVar22[1] * 0xff & 0x7fff) >> 0xc)
                         + (uint)png_sRGB_base[uVar21] >> 8);
            uVar21 = (uint)puVar22[(ulonglong)(uVar14 >> 4 & 1) * 2] * 0xff >> 0xf;
            (&local_348[0].red)[lVar10] =
                 (uchar)(((uint)png_sRGB_delta[uVar21] *
                          ((uint)puVar22[(ulonglong)(uVar14 >> 4 & 1) * 2] * 0xff & 0x7fff) >> 0xc)
                         + (uint)png_sRGB_base[uVar21] >> 8);
            lVar10 = lVar10 + 3;
            puVar22 = puVar22 + (ulonglong)(uVar14 & 3) + 1;
          } while (uVar15 * 3 != lVar10);
        }
      }
      else if (uVar32 < 2) {
        puVar11 = &local_348[0].blue;
        iVar9 = 0;
        uVar28 = 0;
        do {
          uVar3 = puVar22[uVar19];
          uVar26 = (uint)uVar3 * 0xff + 0x807f;
          uVar32 = uVar26 >> 0x10;
          uVar21 = 0;
          if ((uVar32 != 0) && (uVar32 != 0xff)) {
            uVar21 = ((uVar3 >> 1) + 0x7f7f8080) / (uint)uVar3;
          }
          uVar17 = uVar28 + 1;
          *(char *)((longlong)&local_448 + uVar28) = (char)(uVar26 >> 0x10);
          if (uVar32 != 0xff) {
            iVar9 = (int)uVar17;
          }
          uVar27 = 0xff;
          if ((0x7f < uVar3) && (puVar22[uVar25] < uVar3)) {
            uVar26 = (uint)puVar22[uVar25];
            if (uVar26 == 0) {
              uVar27 = '\0';
            }
            else {
              uVar32 = uVar26 * 0xff;
              if (uVar3 < 0xff7f) {
                uVar32 = uVar21 * uVar26 + 0x40 >> 7;
              }
              uVar27 = (uchar)(((uint)png_sRGB_delta[uVar32 >> 0xf] * (uVar32 & 0x7fff) >> 0xc) +
                               (uint)png_sRGB_base[uVar32 >> 0xf] >> 8);
            }
          }
          puVar11[-1] = uVar27;
          ((png_color_struct *)(puVar11 + -2))->red = uVar27;
          *puVar11 = uVar27;
          puVar11 = puVar11 + 3;
          puVar22 = puVar22 + (ulonglong)(uVar14 & 3) + 1;
          uVar28 = uVar17;
        } while (uVar15 != uVar17);
      }
      else {
        puVar11 = &local_348[0].blue;
        iVar9 = 0;
        uVar17 = 0;
        do {
          uVar3 = puVar22[uVar19];
          uVar23 = (uint)uVar3;
          uVar30 = uVar23 * 0xff + 0x807f;
          uVar31 = uVar30 >> 0x10;
          uVar32 = 0;
          if ((uVar31 != 0) && (uVar31 != 0xff)) {
            uVar32 = ((uVar3 >> 1) + 0x7f7f8080) / uVar23;
          }
          uVar1 = uVar17 + 1;
          if (uVar31 != 0xff) {
            iVar9 = (int)uVar1;
          }
          *(char *)((longlong)&local_448 + uVar17) = (char)(uVar30 >> 0x10);
          uVar29 = 0xff;
          uVar27 = 0xff;
          if (uVar23 < 0x80) {
LAB_140dbd582:
            *puVar11 = uVar27;
          }
          else {
            uVar4 = puVar22[uVar28];
            uVar27 = 0xff;
            if (uVar3 <= uVar4) goto LAB_140dbd582;
            if (uVar4 != 0) {
              uVar30 = (uint)uVar4 * 0xff;
              if (uVar23 < 0xff7f) {
                uVar30 = uVar32 * uVar4 + 0x40 >> 7;
              }
              uVar27 = (uchar)(((uint)png_sRGB_delta[uVar30 >> 0xf] * (uVar30 & 0x7fff) >> 0xc) +
                               (uint)png_sRGB_base[uVar30 >> 0xf] >> 8);
              goto LAB_140dbd582;
            }
            *puVar11 = '\0';
          }
          if ((0x7f < uVar23) && (uVar4 = puVar22[uVar25 + 1], uVar4 < uVar3)) {
            if (uVar4 == 0) {
              uVar29 = '\0';
            }
            else {
              uVar30 = (uint)uVar4 * 0xff;
              if (uVar23 < 0xff7f) {
                uVar30 = uVar32 * uVar4 + 0x40 >> 7;
              }
              uVar29 = (uchar)(((uint)png_sRGB_delta[uVar30 >> 0xf] * (uVar30 & 0x7fff) >> 0xc) +
                               (uint)png_sRGB_base[uVar30 >> 0xf] >> 8);
            }
          }
          puVar11[-1] = uVar29;
          uVar27 = 0xff;
          if ((0x7f < uVar23) && (puVar22[uVar26 + uVar21] < uVar3)) {
            uVar30 = (uint)puVar22[uVar26 + uVar21];
            if (uVar30 == 0) {
              uVar27 = '\0';
            }
            else {
              uVar31 = uVar30 * 0xff;
              if (uVar23 < 0xff7f) {
                uVar31 = uVar32 * uVar30 + 0x40 >> 7;
              }
              uVar27 = (uchar)(((uint)png_sRGB_delta[uVar31 >> 0xf] * (uVar31 & 0x7fff) >> 0xc) +
                               (uint)png_sRGB_base[uVar31 >> 0xf] >> 8);
            }
          }
          ((png_color_struct *)(puVar11 + -2))->red = uVar27;
          puVar11 = puVar11 + 3;
          puVar22 = puVar22 + (ulonglong)(uVar14 & 3) + 1;
          uVar17 = uVar1;
        } while (uVar15 != uVar1);
      }
    }
    png_set_PLTE(*(png_struct_def_conflict **)*plVar8,(png_info_def *)((undefined8 *)*plVar8)[1],
                 local_348,uVar16);
    if (0 < iVar9) {
      png_set_tRNS(*(png_struct_def_conflict **)*plVar8,(png_info_def *)((undefined8 *)*plVar8)[1],
                   (uchar *)&local_448,iVar9,(png_color_16_struct *)0x0);
    }
    *(uint *)((longlong)plVar8 + 0x1c) = uVar16;
    if (bVar33 == false) goto LAB_140dbd767;
LAB_140dbd009:
    png_set_gAMA_fixed(ppVar6,ppVar7,100000);
    if ((ppVar5->flags & 1) == 0) {
      png_set_cHRM_fixed(ppVar6,ppVar7,0x7a26,0x8084,64000,33000,30000,60000,15000,6000);
    }
    png_write_info(ppVar6,ppVar7);
    png_set_swap(ppVar6);
  }
  uVar14 = uVar24;
  if ((uVar24 & 0x10) != 0) {
    if ((uVar24 & 10) == 2) {
      png_set_bgr(ppVar6);
    }
    uVar14 = uVar24 & 0xffffffef;
  }
  if ((uVar14 & 0x20) != 0) {
    if ((uVar14 & 1) != 0 && (char)((uVar24 & 8) >> 3) == '\0') {
      png_set_swap_alpha(ppVar6);
    }
    uVar14 = uVar14 & 0xffffffdf;
  }
  if (((uVar24 & 8) != 0) && (ppVar5->colormap_entries < 0x11)) {
    png_set_packing(ppVar6);
  }
  if (0xf < uVar14) {
                    /* WARNING: Subroutine does not return */
    png_error(ppVar6,"png_write_image: unsupported transformation");
  }
  lVar10 = *(longlong *)((longlong)param_1 + 8);
  lVar18 = (longlong)*(int *)((longlong)param_1 + 0x10) << ((uVar24 & 0xc) == 4);
  if ((longlong)*(int *)((longlong)param_1 + 0x10) < 0) {
    lVar10 = lVar10 - (ulonglong)(ppVar5->height - 1) * lVar18;
  }
  *(longlong *)((longlong)param_1 + 0x28) = lVar10;
  *(longlong *)((longlong)param_1 + 0x30) = lVar18;
  if (ppVar6 != (png_struct_def_conflict *)0x0 && (ppVar5->flags & 2) != 0) {
    ppVar6->do_filter = '\b';
    if (ppVar6->row_buf != (uchar *)0x0) {
      uVar14 = (uint)ppVar6->usr_bit_depth * (uint)ppVar6->usr_channels;
      if (uVar14 < 8) {
        uVar19 = (ulonglong)uVar14 * (ulonglong)ppVar6->width + 7 >> 3;
        puVar11 = ppVar6->try_row;
      }
      else {
        uVar19 = (ulonglong)(uVar14 >> 3) * (ulonglong)ppVar6->width;
        puVar11 = ppVar6->try_row;
      }
      if (puVar11 == (uchar *)0x0) {
        puVar11 = png_malloc(ppVar6,uVar19 + 1);
        ppVar6->try_row = puVar11;
      }
    }
    ppVar6->do_filter = '\0';
    ppVar6->zlib_level = 3;
  }
  if (((uVar24 & 0xd) == 5) || (((uVar24 & 8) == 0 && (*(int *)((longlong)param_1 + 0x20) != 0)))) {
    uVar12 = png_get_rowbytes(ppVar6,ppVar7);
    pvVar13 = png_malloc(ppVar6,uVar12);
    *(void **)((longlong)param_1 + 0x38) = pvVar13;
    pcVar20 = png_write_image_8bit;
    if (bVar33 != false) {
      pcVar20 = png_write_image_16bit;
    }
    iVar9 = png_safe_execute(ppVar5,pcVar20,param_1);
    *(undefined8 *)((longlong)param_1 + 0x38) = 0;
    png_free(ppVar6,pvVar13);
    if (iVar9 == 0) {
      if ((local_48 ^ (ulonglong)auStackY_4e8) == __security_cookie.value) {
        return 0;
      }
      goto LAB_140dbd946;
    }
  }
  else {
    uVar24 = ppVar5->height;
    if (uVar24 != 0) {
      lVar10 = *(longlong *)((longlong)param_1 + 0x30);
      puVar11 = *(uchar **)((longlong)param_1 + 0x28);
      do {
        png_write_row(ppVar6,puVar11);
        puVar11 = puVar11 + lVar10;
        uVar24 = uVar24 - 1;
      } while (uVar24 != 0);
    }
  }
  png_write_end(ppVar6,ppVar7);
  if ((local_48 ^ (ulonglong)auStackY_4e8) == __security_cookie.value) {
    return 1;
  }
LAB_140dbd946:
  pcVar20 = (code *)swi(3);
  iVar9 = (*pcVar20)();
  return iVar9;
}

// png_image_write_to_file @ 140dbdb20

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

int __cdecl
png_image_write_to_file
          (png_image *param_1,char *param_2,int param_3,void *param_4,int param_5,void *param_6)

{
  code *pcVar1;
  int iVar2;
  FILE *_File;
  int *piVar3;
  char *pcVar4;
  undefined1 auStack_b8 [32];
  png_image *local_98;
  void *local_90;
  ulonglong local_88;
  void *pvStack_80;
  ulonglong local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = __security_cookie.value ^ (ulonglong)auStack_b8;
  iVar2 = 0;
  if (param_1 == (png_image *)0x0) {
LAB_140dbdcfe:
    if ((local_40 ^ (ulonglong)auStack_b8) == __security_cookie.value) {
      return iVar2;
    }
  }
  else {
    if (param_1->version != 1) {
      pcVar4 = "png_image_write_to_file: incorrect PNG_IMAGE_VERSION";
LAB_140dbdc75:
      iVar2 = png_image_error(param_1,pcVar4);
      return iVar2;
    }
    if (param_4 == (void *)0x0 || param_2 == (char *)0x0) {
      pcVar4 = "png_image_write_to_file: invalid argument";
      goto LAB_140dbdc75;
    }
    _File = fopen(param_2,"wb");
    if (_File == (FILE *)0x0) {
      piVar3 = _errno();
      pcVar4 = strerror(*piVar3);
      goto LAB_140dbdc75;
    }
    if (param_1->version == 1) {
      iVar2 = png_image_write_init(param_1);
      if (iVar2 != 0) {
        param_1->opaque->png_ptr->io_ptr = _File;
        uStack_70 = 0;
        local_58 = 0;
        uStack_50 = 0;
        local_68 = 0;
        uStack_60 = 0;
        local_48 = 0;
        local_88 = (ulonglong)(uint)param_5;
        pvStack_80 = param_6;
        local_78 = (ulonglong)(uint)param_3;
        local_98 = param_1;
        local_90 = param_4;
        iVar2 = png_safe_execute(param_1,png_image_write_main,&local_98);
        png_image_free(param_1);
        goto joined_r0x000140dbdcb1;
      }
    }
    else {
      iVar2 = png_image_error(param_1,"png_image_write_to_stdio: incorrect PNG_IMAGE_VERSION");
joined_r0x000140dbdcb1:
      if (iVar2 != 0) {
        iVar2 = fflush(_File);
        if ((iVar2 == 0) && (iVar2 = ferror(_File), iVar2 == 0)) {
          iVar2 = fclose(_File);
          if (iVar2 == 0) {
            if ((local_40 ^ (ulonglong)auStack_b8) == __security_cookie.value) {
              return 1;
            }
            goto LAB_140dbdd4e;
          }
          piVar3 = _errno();
          iVar2 = *piVar3;
        }
        else {
          piVar3 = _errno();
          iVar2 = *piVar3;
          fclose(_File);
        }
        remove(param_2);
        pcVar4 = strerror(iVar2);
        iVar2 = png_image_error(param_1,pcVar4);
        goto LAB_140dbdcfe;
      }
    }
    fclose(_File);
    remove(param_2);
    if ((local_40 ^ (ulonglong)auStack_b8) == __security_cookie.value) {
      return 0;
    }
  }
LAB_140dbdd4e:
  pcVar1 = (code *)swi(3);
  iVar2 = (*pcVar1)();
  return iVar2;
}

// image_memory_flush @ 140dbdd60

void __cdecl image_memory_flush(png_struct_def_conflict *param_1)

{
  return;
}

// image_memory_write @ 140dbdd70

void __cdecl image_memory_write(png_struct_def_conflict *param_1,uchar *param_2,ulong64 param_3)

{
  void *pvVar1;
  ulonglong uVar2;
  
  pvVar1 = param_1->io_ptr;
  uVar2 = *(ulonglong *)((longlong)pvVar1 + 0x50);
  if (!CARRY8(uVar2,param_3)) {
    if (param_3 != 0) {
      if (uVar2 + param_3 <= *(ulonglong *)((longlong)pvVar1 + 0x48)) {
        memcpy((void *)(uVar2 + *(longlong *)((longlong)pvVar1 + 0x40)),param_2,param_3);
      }
      *(ulonglong *)((longlong)pvVar1 + 0x50) = uVar2 + param_3;
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  png_error(param_1,"png_image_write_to_memory: PNG too big");
}

// png_write_image_16bit @ 140dbddd0

int __cdecl png_write_image_16bit(void *param_1)

{
  ushort *puVar1;
  ushort uVar2;
  ushort uVar3;
  undefined8 *puVar4;
  png_struct_def_conflict *ppVar5;
  uint uVar6;
  ushort *puVar7;
  ushort uVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  ushort uVar12;
  ushort *puVar13;
  ulonglong uVar14;
  ushort *puVar15;
  ushort *puVar16;
  ulonglong uVar17;
  
  puVar4 = *(undefined8 **)param_1;
  ppVar5 = *(png_struct_def_conflict **)*puVar4;
  uVar6 = *(uint *)((longlong)puVar4 + 0x14);
  if ((uVar6 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
    png_error(ppVar5,"png_write_image: internal call error");
  }
  iVar11 = *(int *)(puVar4 + 2);
  if (iVar11 != 0) {
    uVar10 = uVar6 & 2;
    uVar9 = (uVar10 + 2) * *(int *)((longlong)puVar4 + 0xc);
    if (uVar9 == 0) {
      do {
        png_write_row(ppVar5,*(uchar **)((longlong)param_1 + 0x38));
        iVar11 = iVar11 + -1;
      } while (iVar11 != 0);
    }
    else {
      uVar17 = (ulonglong)uVar10 | -(ulonglong)((uVar6 & 0x20) != 0) | 1;
      uVar14 = (ulonglong)((uVar6 & 0x20) >> 4);
      puVar13 = (ushort *)(*(longlong *)((longlong)param_1 + 0x38) + uVar14);
      puVar15 = (ushort *)(uVar14 + *(longlong *)((longlong)param_1 + 0x28));
      puVar7 = puVar13;
      puVar16 = puVar15;
      do {
        do {
          uVar2 = puVar15[uVar17];
          puVar7[uVar17] = uVar2;
          if ((ushort)(uVar2 - 1) < 0xfffe) {
            uVar6 = (uVar2 >> 1 | 0x7fff8000) / (uint)uVar2;
LAB_140dbded9:
            uVar3 = *puVar15;
            uVar8 = 0xffff;
            if (uVar3 < uVar2) {
              if (uVar3 != 0) {
                uVar8 = (ushort)(uVar3 * uVar6 + 0x4000 >> 0xf);
                goto LAB_140dbdefb;
              }
              *puVar7 = 0;
            }
            else {
LAB_140dbdefb:
              *puVar7 = uVar8;
            }
            if (uVar10 != 0) {
              uVar3 = puVar15[1];
              uVar8 = 0xffff;
              uVar12 = 0xffff;
              if (uVar3 < uVar2) {
                if (uVar3 == 0) {
                  uVar12 = 0;
                }
                else {
                  uVar12 = (ushort)(uVar3 * uVar6 + 0x4000 >> 0xf);
                }
              }
              puVar15 = puVar15 + 2;
              puVar7[1] = uVar12;
              uVar3 = *puVar15;
              if (uVar3 < uVar2) {
                if (uVar3 == 0) {
                  uVar8 = 0;
                }
                else {
                  uVar8 = (ushort)(uVar6 * uVar3 + 0x4000 >> 0xf);
                }
              }
              puVar7 = puVar7 + 2;
              *puVar7 = uVar8;
            }
          }
          else {
            uVar6 = 0;
            if (uVar2 != 0xffff) goto LAB_140dbded9;
            *puVar7 = *puVar15;
            if (uVar10 != 0) {
              puVar7[1] = puVar15[1];
              puVar1 = puVar15 + 2;
              puVar15 = puVar15 + 2;
              puVar7[2] = *puVar1;
              puVar7 = puVar7 + 2;
            }
          }
          puVar15 = puVar15 + 2;
          puVar7 = puVar7 + 2;
        } while (puVar7 < puVar13 + uVar9);
        png_write_row(ppVar5,*(uchar **)((longlong)param_1 + 0x38));
        puVar15 = (ushort *)
                  ((longlong)puVar16 + (ulonglong)(*(uint *)((longlong)param_1 + 0x30) & 0xfffe));
        iVar11 = iVar11 + -1;
        puVar7 = puVar13;
        puVar16 = puVar15;
      } while (iVar11 != 0);
    }
  }
  return 1;
}

// png_write_image_8bit @ 140dbdff0

int __cdecl png_write_image_8bit(void *param_1)

{
  ushort uVar1;
  ushort uVar2;
  int iVar3;
  undefined8 *puVar4;
  png_struct_def_conflict *ppVar5;
  longlong lVar6;
  longlong lVar7;
  ulonglong uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uchar *puVar14;
  uint uVar15;
  uint uVar16;
  ulonglong uVar17;
  uchar uVar18;
  uint uVar19;
  uchar uVar20;
  int iVar21;
  longlong lVar22;
  ushort *puVar23;
  ushort *puVar24;
  uchar *_Dst;
  ulonglong uVar13;
  
  puVar4 = *(undefined8 **)param_1;
  lVar22 = *(longlong *)((longlong)param_1 + 0x28);
  ppVar5 = *(png_struct_def_conflict **)*puVar4;
  puVar14 = *(uchar **)((longlong)param_1 + 0x38);
  iVar21 = *(int *)(puVar4 + 2);
  uVar16 = *(uint *)((longlong)puVar4 + 0x14);
  uVar9 = uVar16 & 2;
  if ((uVar16 & 1) == 0) {
    if (iVar21 != 0) {
      iVar3 = *(int *)((longlong)puVar4 + 0xc);
      if (iVar3 == 0) {
        do {
          png_write_row(ppVar5,puVar14);
          iVar21 = iVar21 + -1;
        } while (iVar21 != 0);
      }
      else {
        do {
          lVar7 = 0;
          do {
            uVar16 = (uint)*(ushort *)(lVar22 + lVar7 * 2) * 0xff;
            uVar10 = uVar16 >> 0xf;
            puVar14[lVar7] =
                 (uchar)(((uint)png_sRGB_delta[uVar10] * (uVar16 & 0x7fff) >> 0xc) +
                         (uint)png_sRGB_base[uVar10] >> 8);
            lVar6 = lVar7 + 1;
            lVar7 = lVar7 + 1;
          } while (puVar14 + lVar6 < puVar14 + (uint)(iVar3 * (int)((ulonglong)uVar9 + 1)));
          png_write_row(ppVar5,puVar14);
          lVar22 = lVar22 + (ulonglong)(*(uint *)((longlong)param_1 + 0x30) & 0xfffe);
          iVar21 = iVar21 + -1;
        } while (iVar21 != 0);
      }
    }
  }
  else {
    uVar10 = uVar16 & 0x20;
    if (iVar21 != 0) {
      uVar15 = (uVar9 + 2) * *(int *)((longlong)puVar4 + 0xc);
      if (uVar15 == 0) {
        do {
          png_write_row(ppVar5,*(uchar **)((longlong)param_1 + 0x38));
          iVar21 = iVar21 + -1;
        } while (iVar21 != 0);
      }
      else {
        uVar17 = -(ulonglong)(uVar10 != 0) | (ulonglong)uVar9 + 1;
        puVar14 = puVar14 + (uVar10 >> 5);
        puVar23 = (ushort *)(lVar22 + (ulonglong)(uVar10 >> 4));
        uVar16 = uVar16 >> 1 & 1;
        uVar8 = (ulonglong)(uVar16 * 2);
        _Dst = puVar14;
        puVar24 = puVar23;
        do {
          do {
            uVar1 = puVar23[uVar17];
            uVar19 = (uint)uVar1;
            uVar11 = (uVar19 * 0x100 - (uint)uVar1) + 0x807f;
            uVar10 = 0;
            uVar12 = uVar11 >> 0x10;
            uVar13 = (ulonglong)uVar12;
            _Dst[uVar17] = (uchar)(uVar11 >> 0x10);
            if ((uVar12 != 0) && (uVar12 != 0xff)) {
              uVar11 = (uVar1 >> 1) + 0x7f7f8080;
              uVar10 = uVar11 / uVar19;
              uVar13 = (ulonglong)uVar11 % (ulonglong)uVar19;
            }
            if (uVar1 < 0x80) {
              memset(_Dst,(int)CONCAT71((int7)(uVar13 >> 8),0xff),uVar8 + 1);
              puVar23 = (ushort *)((longlong)puVar23 + (ulonglong)(uVar16 << 2));
              _Dst = _Dst + uVar8;
            }
            else if (uVar19 < 0xff7f) {
              uVar2 = *puVar23;
              uVar18 = 0xff;
              if (uVar2 < uVar1) {
                if (uVar2 != 0) {
                  uVar11 = uVar2 * uVar10 + 0x40;
                  uVar12 = uVar11 >> 0x16;
                  uVar18 = (uchar)(((uint)png_sRGB_delta[uVar12] * (uVar11 >> 7 & 0x7fff) >> 0xc) +
                                   (uint)png_sRGB_base[uVar12] >> 8);
                  goto LAB_140dbe252;
                }
                *_Dst = '\0';
              }
              else {
LAB_140dbe252:
                *_Dst = uVar18;
              }
              if (uVar9 != 0) {
                uVar2 = puVar23[1];
                uVar18 = 0xff;
                uVar20 = 0xff;
                if (uVar2 < uVar1) {
                  if (uVar2 == 0) {
                    uVar20 = '\0';
                  }
                  else {
                    uVar11 = uVar2 * uVar10 + 0x40;
                    uVar12 = uVar11 >> 0x16;
                    uVar20 = (uchar)(((uint)png_sRGB_delta[uVar12] * (uVar11 >> 7 & 0x7fff) >> 0xc)
                                     + (uint)png_sRGB_base[uVar12] >> 8);
                  }
                }
                puVar23 = puVar23 + 2;
                _Dst[1] = uVar20;
                uVar2 = *puVar23;
                if (uVar2 < uVar1) {
                  if (uVar2 == 0) {
                    uVar18 = '\0';
                  }
                  else {
                    uVar10 = uVar10 * uVar2 + 0x40;
                    uVar11 = uVar10 >> 0x16;
                    uVar18 = (uchar)(((uint)png_sRGB_delta[uVar11] * (uVar10 >> 7 & 0x7fff) >> 0xc)
                                     + (uint)png_sRGB_base[uVar11] >> 8);
                  }
                }
                _Dst = _Dst + 2;
                *_Dst = uVar18;
              }
            }
            else {
              uVar2 = *puVar23;
              uVar18 = 0xff;
              if (uVar2 < uVar1) {
                if (uVar2 != 0) {
                  uVar10 = (uint)uVar2 * 0xff >> 0xf;
                  uVar18 = (uchar)(((uint)png_sRGB_delta[uVar10] * ((uint)uVar2 * 0xff & 0x7fff) >>
                                   0xc) + (uint)png_sRGB_base[uVar10] >> 8);
                  goto LAB_140dbe31f;
                }
                *_Dst = '\0';
              }
              else {
LAB_140dbe31f:
                *_Dst = uVar18;
              }
              if (uVar9 != 0) {
                uVar2 = puVar23[1];
                uVar18 = 0xff;
                uVar20 = 0xff;
                if (uVar2 < uVar1) {
                  if (uVar2 == 0) {
                    uVar20 = '\0';
                  }
                  else {
                    uVar10 = (uint)uVar2 * 0xff;
                    uVar11 = uVar10 >> 0xf;
                    uVar20 = (uchar)(((uint)png_sRGB_delta[uVar11] * (uVar10 & 0x7fff) >> 0xc) +
                                     (uint)png_sRGB_base[uVar11] >> 8);
                  }
                }
                puVar23 = puVar23 + 2;
                _Dst[1] = uVar20;
                uVar2 = *puVar23;
                if (uVar2 < uVar1) {
                  if (uVar2 == 0) {
                    uVar18 = '\0';
                  }
                  else {
                    uVar10 = (uint)uVar2 * 0xff;
                    uVar11 = uVar10 >> 0xf;
                    uVar18 = (uchar)(((uint)png_sRGB_delta[uVar11] * (uVar10 & 0x7fff) >> 0xc) +
                                     (uint)png_sRGB_base[uVar11] >> 8);
                  }
                }
                _Dst = _Dst + 2;
                *_Dst = uVar18;
              }
            }
            puVar23 = puVar23 + 2;
            _Dst = _Dst + 2;
          } while (_Dst < puVar14 + uVar15);
          png_write_row(ppVar5,*(uchar **)((longlong)param_1 + 0x38));
          puVar23 = (ushort *)
                    ((longlong)puVar24 + (ulonglong)(*(uint *)((longlong)param_1 + 0x30) & 0xfffe));
          iVar21 = iVar21 + -1;
          _Dst = puVar14;
          puVar24 = puVar23;
        } while (iVar21 != 0);
      }
    }
  }
  return 1;
}

