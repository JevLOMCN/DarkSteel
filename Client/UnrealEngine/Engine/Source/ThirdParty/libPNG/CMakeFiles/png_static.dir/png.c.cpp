// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: libPNG
// Functions: 64

// png_set_sig_bytes @ 140dacf60

void __cdecl png_set_sig_bytes(png_struct_def_conflict *param_1,int param_2)

{
  int iVar1;
  
  if (param_1 != (png_struct_def_conflict *)0x0) {
    if (8 < param_2) {
                    /* WARNING: Subroutine does not return */
      png_error(param_1,"Too many bytes for PNG signature");
    }
    iVar1 = 0;
    if (0 < param_2) {
      iVar1 = param_2;
    }
    param_1->sig_bytes = (uchar)iVar1;
  }
  return;
}

// png_sig_cmp @ 140dacfa0

int __cdecl png_sig_cmp(uchar *param_1,ulong64 param_2,ulong64 param_3)

{
  int iVar1;
  ulong64 uVar2;
  size_t _Size;
  
  uVar2 = 8;
  if (((8 < param_3) || (uVar2 = param_3, param_3 != 0)) && (param_2 < 8)) {
    _Size = 8 - param_2;
    if (uVar2 + param_2 < 9) {
      _Size = uVar2;
    }
    iVar1 = memcmp(param_1 + param_2,png_signature + param_2,_Size);
    return iVar1;
  }
  return -1;
}

// png_zalloc @ 140dacff0

void * __cdecl png_zalloc(void *param_1,uint param_2,uint param_3)

{
  void *pvVar1;
  
  if (param_1 != (void *)0x0) {
    pvVar1 = png_malloc_warn(param_1,(ulonglong)param_2 * (ulonglong)param_3);
    return pvVar1;
  }
  return (void *)0x0;
}

// png_zfree @ 140dad010

void __cdecl png_zfree(void *param_1,void *param_2)

{
  if (param_2 == (void *)0x0 || param_1 == (void *)0x0) {
    return;
  }
  if (*(code **)((longlong)param_1 + 0x418) != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000140dc62af. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((longlong)param_1 + 0x418))();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000140dc62b5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  free(param_2);
  return;
}

// png_reset_crc @ 140dad020

void __cdecl png_reset_crc(png_struct_def_conflict *param_1)

{
  uint uVar1;
  
  uVar1 = crc32(0,0,0);
  param_1->crc = uVar1;
  return;
}

// png_calculate_crc @ 140dad050

void __cdecl png_calculate_crc(png_struct_def_conflict *param_1,uchar *param_2,ulong64 param_3)

{
  bool bVar1;
  uint uVar2;
  ulonglong uVar3;
  
  bVar1 = (~param_1->flags & 0x300) != 0;
  if ((param_1->chunk_name & 0x20000000) == 0) {
    bVar1 = (param_1->flags & 0x800) == 0;
  }
  if ((param_3 != 0) && (bVar1)) {
    uVar2 = param_1->crc;
    do {
      uVar3 = (ulonglong)(-(uint)((uint)param_3 == 0) | (uint)param_3);
      uVar2 = crc32(uVar2,param_2,uVar3);
      param_2 = param_2 + uVar3;
      param_3 = param_3 - uVar3;
    } while (param_3 != 0);
    param_1->crc = uVar2;
  }
  return;
}

// png_user_version_check @ 140dad0f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

int __cdecl png_user_version_check(png_struct_def_conflict *param_1,char *param_2)

{
  byte *pbVar1;
  char cVar2;
  char cVar3;
  code *pcVar4;
  byte bVar5;
  int iVar6;
  ulong64 uVar7;
  undefined1 auStack_c8 [32];
  char local_a8 [128];
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_c8;
  if (param_2 == (char *)0x0) {
    pbVar1 = (byte *)((longlong)&param_1->flags + 2);
    *pbVar1 = *pbVar1 | 2;
  }
  else {
    cVar2 = *param_2;
    if (cVar2 != '1') {
      pbVar1 = (byte *)((longlong)&param_1->flags + 2);
      *pbVar1 = *pbVar1 | 2;
    }
    if (cVar2 != '\0') {
      cVar3 = param_2[1];
      if (cVar3 != '.') {
        pbVar1 = (byte *)((longlong)&param_1->flags + 2);
        *pbVar1 = *pbVar1 | 2;
      }
      bVar5 = (cVar2 == '.') + (cVar3 == '.');
      if (cVar3 != '\0' && bVar5 < 2) {
        cVar2 = param_2[2];
        if (cVar2 != '6') {
          pbVar1 = (byte *)((longlong)&param_1->flags + 2);
          *pbVar1 = *pbVar1 | 2;
        }
        bVar5 = bVar5 + (cVar2 == '.');
        if (cVar2 != '\0' && bVar5 < 2) {
          cVar2 = param_2[3];
          if (cVar2 != '.') {
            pbVar1 = (byte *)((longlong)&param_1->flags + 2);
            *pbVar1 = *pbVar1 | 2;
          }
          bVar5 = bVar5 + (cVar2 == '.');
          if (cVar2 != '\0' && bVar5 < 2) {
            cVar2 = param_2[4];
            if (cVar2 != '4') {
              pbVar1 = (byte *)((longlong)&param_1->flags + 2);
              *pbVar1 = *pbVar1 | 2;
            }
            bVar5 = bVar5 + (cVar2 == '.');
            if (cVar2 != '\0' && bVar5 < 2) {
              cVar2 = param_2[5];
              if (cVar2 != '4') {
                pbVar1 = (byte *)((longlong)&param_1->flags + 2);
                *pbVar1 = *pbVar1 | 2;
              }
              if ((cVar2 != '\0' && (byte)(bVar5 + (cVar2 == '.')) < 2) && (param_2[6] != '\0')) {
                pbVar1 = (byte *)((longlong)&param_1->flags + 2);
                *pbVar1 = *pbVar1 | 2;
              }
            }
          }
        }
      }
    }
    if ((param_1->flags & 0x20000) == 0) {
      if ((local_28 ^ (ulonglong)auStack_c8) == __security_cookie.value) {
        return 1;
      }
      goto LAB_140dad2de;
    }
  }
  uVar7 = png_safecat(local_a8,0x80,0,"Application built with libpng-");
  uVar7 = png_safecat(local_a8,0x80,uVar7,param_2);
  uVar7 = png_safecat(local_a8,0x80,uVar7," but running with ");
  png_safecat(local_a8,0x80,uVar7,"1.6.44");
  png_warning(param_1,local_a8);
  if ((local_28 ^ (ulonglong)auStack_c8) == __security_cookie.value) {
    return 0;
  }
LAB_140dad2de:
  pcVar4 = (code *)swi(3);
  iVar6 = (*pcVar4)();
  return iVar6;
}

// png_create_png_struct @ 140dad2f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

png_struct_def_conflict * __cdecl
png_create_png_struct
          (char *param_1,void *param_2,
          _func___cdecl_void_png_struct_def_ptr_char_ptr_conflict *param_3,
          _func___cdecl_void_png_struct_def_ptr_char_ptr_conflict *param_4,void *param_5,
          _func___cdecl_void_ptr_png_struct_def_ptr_ulong64_conflict *param_6,
          _func___cdecl_void_png_struct_def_ptr_void_ptr_conflict *param_7)

{
  code *pcVar1;
  int iVar2;
  png_struct_def_conflict *ppVar3;
  undefined1 local_688 [40];
  char *local_660;
  _SETJMP_FLOAT128 local_658 [5];
  undefined1 local_608 [176];
  png_struct_def_conflict local_558;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)local_608;
  local_660 = param_1;
  memset(&local_558,0,0x510);
  local_558.user_width_max = 1000000;
  local_558.user_height_max = 1000000;
  local_558.user_chunk_cache_max = 1000;
  local_558.user_chunk_malloc_max = 8000000;
  png_set_mem_fn(&local_558,param_5,param_6,param_7);
  png_set_error_fn(&local_558,param_2,param_3,param_4);
  iVar2 = _setjmp(local_658,local_688);
  if (iVar2 == 0) {
    local_558.jmp_buf_size = 0;
    local_558.longjmp_fn = longjmp;
    local_558.jmp_buf_ptr = (_SETJMP_FLOAT128 (*) [16])local_658;
    iVar2 = png_user_version_check(&local_558,local_660);
    if ((iVar2 != 0) &&
       (ppVar3 = png_malloc_warn(&local_558,0x510), ppVar3 != (png_struct_def_conflict *)0x0)) {
      local_558.zstream.zalloc = png_zalloc;
      local_558.zstream.zfree = png_zfree;
      local_558.longjmp_fn = (_func___cdecl_void__SETJMP_FLOAT128_ptr_int *)0x0;
      local_558.jmp_buf_ptr = (_SETJMP_FLOAT128 (*) [16])0x0;
      local_558.jmp_buf_size = 0;
      local_558.zstream.opaque = ppVar3;
      memcpy(ppVar3,&local_558,0x510);
      if ((local_48 ^ (ulonglong)local_608) == __security_cookie.value) {
        return ppVar3;
      }
      goto LAB_140dad494;
    }
  }
  if ((local_48 ^ (ulonglong)local_608) == __security_cookie.value) {
    return (png_struct_def_conflict *)0x0;
  }
LAB_140dad494:
  pcVar1 = (code *)swi(3);
  ppVar3 = (png_struct_def_conflict *)(*pcVar1)();
  return ppVar3;
}

// png_create_info_struct @ 140dad4a0

png_info_def * __cdecl png_create_info_struct(png_struct_def_conflict *param_1)

{
  void *_Dst;
  png_info_def *ppVar1;
  
  if (param_1 != (png_struct_def_conflict *)0x0) {
    _Dst = png_malloc_base(param_1,0x168);
    if (_Dst != (void *)0x0) {
      ppVar1 = memset(_Dst,0,0x168);
      return ppVar1;
    }
  }
  return (png_info_def *)0x0;
}

// png_destroy_info_struct @ 140dad4e0

void __cdecl png_destroy_info_struct(png_struct_def_conflict *param_1,png_info_def **param_2)

{
  png_info_def *_Dst;
  
  if ((param_2 != (png_info_def **)0x0 && param_1 != (png_struct_def_conflict *)0x0) &&
     (_Dst = *param_2, _Dst != (png_info_def *)0x0)) {
    *param_2 = (png_info_def *)0x0;
    png_free_data(param_1,_Dst,0xffff,-1);
    memset(_Dst,0,0x168);
    png_free(param_1,_Dst);
    return;
  }
  return;
}

// png_free_data @ 140dad550

void __cdecl
png_free_data(png_struct_def_conflict *param_1,png_info_def *param_2,uint param_3,int param_4)

{
  byte *pbVar1;
  uint uVar2;
  uint uVar3;
  png_text_struct *ppVar4;
  char **ppcVar5;
  png_sPLT_struct *ppVar6;
  png_unknown_chunk_t *ppVar7;
  uchar **ppuVar8;
  longlong lVar9;
  ulonglong uVar10;
  longlong lVar11;
  
  if (param_2 == (png_info_def *)0x0 || param_1 == (png_struct_def_conflict *)0x0) {
    return;
  }
  ppVar4 = param_2->text;
  if ((ppVar4 != (png_text_struct *)0x0) && ((param_2->free_me & param_3 & 0x4000) != 0)) {
    if (param_4 == -1) {
      if (0 < param_2->num_text) {
        lVar11 = 8;
        lVar9 = 0;
        do {
          png_free(param_1,*(void **)((longlong)&param_2->text->compression + lVar11));
          lVar9 = lVar9 + 1;
          lVar11 = lVar11 + 0x38;
        } while (lVar9 < param_2->num_text);
        ppVar4 = param_2->text;
      }
      png_free(param_1,ppVar4);
      param_2->text = (png_text_struct *)0x0;
      param_2->num_text = 0;
      param_2->max_text = 0;
    }
    else {
      png_free(param_1,ppVar4[param_4].key);
      param_2->text[param_4].key = (char *)0x0;
    }
  }
  uVar2 = param_2->free_me;
  if ((param_3 & uVar2 & 0x2000) != 0) {
    *(byte *)&param_2->valid = (byte)param_2->valid & 0xef;
    png_free(param_1,param_2->trans_alpha);
    param_2->trans_alpha = (uchar *)0x0;
    param_2->num_trans = 0;
    uVar2 = param_2->free_me;
  }
  if ((param_3 & uVar2 & 0x100) != 0) {
    png_free(param_1,param_2->scal_s_width);
    png_free(param_1,param_2->scal_s_height);
    param_2->scal_s_width = (char *)0x0;
    param_2->scal_s_height = (char *)0x0;
    pbVar1 = (byte *)((longlong)&param_2->valid + 1);
    *pbVar1 = *pbVar1 & 0xbf;
    uVar2 = param_2->free_me;
  }
  if ((char)((byte)param_3 & (byte)uVar2) < '\0') {
    png_free(param_1,param_2->pcal_purpose);
    png_free(param_1,param_2->pcal_units);
    param_2->pcal_purpose = (char *)0x0;
    param_2->pcal_units = (char *)0x0;
    ppcVar5 = param_2->pcal_params;
    if (ppcVar5 != (char **)0x0) {
      if (param_2->pcal_nparams != '\0') {
        uVar10 = 0;
        do {
          png_free(param_1,param_2->pcal_params[uVar10]);
          uVar10 = uVar10 + 1;
        } while (uVar10 < param_2->pcal_nparams);
        ppcVar5 = param_2->pcal_params;
      }
      png_free(param_1,ppcVar5);
      param_2->pcal_params = (char **)0x0;
    }
    pbVar1 = (byte *)((longlong)&param_2->valid + 1);
    *pbVar1 = *pbVar1 & 0xfb;
    uVar2 = param_2->free_me;
  }
  if ((uVar2 & param_3 & 0x10) != 0) {
    png_free(param_1,param_2->iccp_name);
    png_free(param_1,param_2->iccp_profile);
    param_2->iccp_name = (char *)0x0;
    param_2->iccp_profile = (uchar *)0x0;
    pbVar1 = (byte *)((longlong)&param_2->valid + 1);
    *pbVar1 = *pbVar1 & 0xef;
  }
  ppVar6 = param_2->splt_palettes;
  if ((ppVar6 != (png_sPLT_struct *)0x0) && ((param_2->free_me & param_3 & 0x20) != 0)) {
    if (param_4 == -1) {
      if (0 < param_2->splt_palettes_num) {
        lVar11 = 0;
        lVar9 = 0;
        do {
          png_free(param_1,*(void **)((longlong)&param_2->splt_palettes->name + lVar11));
          png_free(param_1,*(void **)((longlong)&param_2->splt_palettes->entries + lVar11));
          lVar9 = lVar9 + 1;
          lVar11 = lVar11 + 0x20;
        } while (lVar9 < param_2->splt_palettes_num);
        ppVar6 = param_2->splt_palettes;
      }
      png_free(param_1,ppVar6);
      param_2->splt_palettes = (png_sPLT_struct *)0x0;
      param_2->splt_palettes_num = 0;
      pbVar1 = (byte *)((longlong)&param_2->valid + 1);
      *pbVar1 = *pbVar1 & 0xdf;
      ppVar7 = param_2->unknown_chunks;
      goto joined_r0x000140dad7e9;
    }
    png_free(param_1,ppVar6[param_4].name);
    png_free(param_1,param_2->splt_palettes[param_4].entries);
    param_2->splt_palettes[param_4].name = (char *)0x0;
    param_2->splt_palettes[param_4].entries = (png_sPLT_entry_struct *)0x0;
  }
  ppVar7 = param_2->unknown_chunks;
joined_r0x000140dad7e9:
  if ((ppVar7 != (png_unknown_chunk_t *)0x0) && ((param_2->free_me & param_3 & 0x200) != 0)) {
    if (param_4 == -1) {
      if (0 < param_2->unknown_chunks_num) {
        lVar11 = 8;
        lVar9 = 0;
        do {
          png_free(param_1,*(void **)(param_2->unknown_chunks->name + lVar11));
          lVar9 = lVar9 + 1;
          lVar11 = lVar11 + 0x20;
        } while (lVar9 < param_2->unknown_chunks_num);
        ppVar7 = param_2->unknown_chunks;
      }
      png_free(param_1,ppVar7);
      param_2->unknown_chunks = (png_unknown_chunk_t *)0x0;
      param_2->unknown_chunks_num = 0;
    }
    else {
      png_free(param_1,ppVar7[param_4].data);
      param_2->unknown_chunks[param_4].data = (uchar *)0x0;
    }
  }
  uVar2 = param_2->free_me;
  if ((short)((ushort)param_3 & (ushort)uVar2) < 0) {
    if (param_2->eXIf_buf != (uchar *)0x0) {
      png_free(param_1,param_2->eXIf_buf);
      param_2->eXIf_buf = (uchar *)0x0;
    }
    if (param_2->exif != (uchar *)0x0) {
      png_free(param_1,param_2->exif);
      param_2->exif = (uchar *)0x0;
    }
    pbVar1 = (byte *)((longlong)&param_2->valid + 2);
    *pbVar1 = *pbVar1 & 0xfe;
    uVar2 = param_2->free_me;
  }
  if ((param_3 & uVar2 & 8) != 0) {
    png_free(param_1,param_2->hist);
    param_2->hist = (ushort *)0x0;
    *(byte *)&param_2->valid = (byte)param_2->valid & 0xbf;
    uVar2 = param_2->free_me;
  }
  if ((param_3 & uVar2 & 0x1000) != 0) {
    png_free(param_1,param_2->palette);
    param_2->palette = (png_color_struct *)0x0;
    *(byte *)&param_2->valid = (byte)param_2->valid & 0xf7;
    param_2->num_palette = 0;
    uVar2 = param_2->free_me;
  }
  if ((param_3 & uVar2 & 0x40) != 0) {
    ppuVar8 = param_2->row_pointers;
    if (ppuVar8 != (uchar **)0x0) {
      if (param_2->height != 0) {
        uVar10 = 0;
        do {
          png_free(param_1,param_2->row_pointers[uVar10]);
          uVar10 = uVar10 + 1;
        } while (uVar10 < param_2->height);
        ppuVar8 = param_2->row_pointers;
      }
      png_free(param_1,ppuVar8);
      param_2->row_pointers = (uchar **)0x0;
      uVar2 = param_2->free_me;
    }
    pbVar1 = (byte *)((longlong)&param_2->valid + 1);
    *pbVar1 = *pbVar1 & 0x7f;
  }
  uVar3 = param_3 & 0xffffbddf;
  if (param_4 == -1) {
    uVar3 = param_3;
  }
  param_2->free_me = ~uVar3 & uVar2;
  return;
}

// png_info_init_3 @ 140dada70

void __cdecl png_info_init_3(png_info_def **param_1,ulong64 param_2)

{
  png_info_def *_Memory;
  
  _Memory = *param_1;
  if (_Memory == (png_info_def *)0x0) {
    return;
  }
  if (param_2 < 0x168) {
    *param_1 = (png_info_def *)0x0;
    free(_Memory);
    _Memory = png_malloc_base((png_struct_def_conflict *)0x0,0x168);
    if (_Memory == (png_info_def *)0x0) {
      return;
    }
    *param_1 = _Memory;
  }
  memset(_Memory,0,0x168);
  return;
}

// png_data_freer @ 140dadad0

void __cdecl
png_data_freer(png_struct_def_conflict *param_1,png_info_def *param_2,int param_3,uint param_4)

{
  if (param_2 != (png_info_def *)0x0 && param_1 != (png_struct_def_conflict *)0x0) {
    if (param_3 == 2) {
      param_2->free_me = param_2->free_me & ~param_4;
      return;
    }
    if (param_3 != 1) {
                    /* WARNING: Subroutine does not return */
      png_error(param_1,"Unknown freer parameter in png_data_freer");
    }
    param_2->free_me = param_2->free_me | param_4;
  }
  return;
}

// png_get_io_ptr @ 140dadb20

void * __cdecl png_get_io_ptr(png_struct_def_conflict *param_1)

{
  if (param_1 != (png_struct_def_conflict *)0x0) {
    return param_1->io_ptr;
  }
  return (void *)0x0;
}

// png_init_io @ 140dadb40

void __cdecl png_init_io(png_struct_def_conflict *param_1,_iobuf *param_2)

{
  if (param_1 != (png_struct_def_conflict *)0x0) {
    param_1->io_ptr = param_2;
  }
  return;
}

// png_save_int_32 @ 140dadb60

void __cdecl png_save_int_32(uchar *param_1,int param_2)

{
  *(uint *)param_1 =
       (uint)param_2 >> 0x18 | (param_2 & 0xff0000U) >> 8 | (param_2 & 0xff00U) << 8 |
       param_2 << 0x18;
  return;
}

// png_convert_to_rfc1123_buffer @ 140dadb70

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

int __cdecl png_convert_to_rfc1123_buffer(char *param_1,png_time_struct *param_2)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  char *pcVar4;
  ulong64 uVar5;
  char *pcVar6;
  undefined1 auStack_58 [40];
  char local_30 [8];
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_58;
  iVar2 = 0;
  iVar3 = 0;
  if ((((param_1 != (char *)0x0) && (iVar3 = 0, param_2->year < 10000)) &&
      (iVar3 = iVar2, 0xf3 < (byte)(param_2->month - 0xd))) &&
     (((0xe0 < (byte)(param_2->day - 0x20) && (param_2->hour < 0x18)) &&
      ((param_2->minute < 0x3c && (param_2->second < 0x3d)))))) {
    local_30[4] = 0;
    local_30[0] = '\0';
    local_30[1] = '\0';
    local_30[2] = '\0';
    local_30[3] = '\0';
    pcVar6 = local_30 + 5;
    pcVar4 = png_format_number(local_30,pcVar6,1,(ulonglong)param_2->day);
    uVar5 = png_safecat(param_1,0x1d,0,pcVar4);
    if (uVar5 < 0x1c) {
      param_1[uVar5] = ' ';
      uVar5 = uVar5 + 1;
    }
    uVar5 = png_safecat(param_1,0x1d,uVar5,&UNK_1531ef84c + (ulonglong)param_2->month * 4);
    if (uVar5 < 0x1c) {
      param_1[uVar5] = ' ';
      uVar5 = uVar5 + 1;
    }
    pcVar4 = png_format_number(local_30,pcVar6,1,(ulonglong)param_2->year);
    uVar5 = png_safecat(param_1,0x1d,uVar5,pcVar4);
    if (uVar5 < 0x1c) {
      param_1[uVar5] = ' ';
      uVar5 = uVar5 + 1;
    }
    pcVar4 = png_format_number(local_30,pcVar6,2,(ulonglong)param_2->hour);
    uVar5 = png_safecat(param_1,0x1d,uVar5,pcVar4);
    if (uVar5 < 0x1c) {
      param_1[uVar5] = ':';
      uVar5 = uVar5 + 1;
    }
    pcVar4 = png_format_number(local_30,pcVar6,2,(ulonglong)param_2->minute);
    uVar5 = png_safecat(param_1,0x1d,uVar5,pcVar4);
    if (uVar5 < 0x1c) {
      param_1[uVar5] = ':';
      uVar5 = uVar5 + 1;
    }
    pcVar6 = png_format_number(local_30,pcVar6,2,(ulonglong)param_2->second);
    uVar5 = png_safecat(param_1,0x1d,uVar5,pcVar6);
    png_safecat(param_1,0x1d,uVar5," +0000");
    iVar3 = 1;
  }
  if ((local_28 ^ (ulonglong)auStack_58) == __security_cookie.value) {
    return iVar3;
  }
  pcVar1 = (code *)swi(3);
  iVar3 = (*pcVar1)();
  return iVar3;
}

// png_convert_to_rfc1123 @ 140dadd90

char * __cdecl png_convert_to_rfc1123(png_struct_def_conflict *param_1,png_time_struct *param_2)

{
  int iVar1;
  
  if (param_1 != (png_struct_def_conflict *)0x0) {
    iVar1 = png_convert_to_rfc1123_buffer(param_1->time_buffer,param_2);
    if (iVar1 != 0) {
      return param_1->time_buffer;
    }
    png_warning(param_1,"Ignoring invalid time value");
  }
  return (char *)0x0;
}

// png_get_copyright @ 140dadde0

char * __cdecl png_get_copyright(png_struct_def_conflict *param_1)

{
  return 
  "\nlibpng version 1.6.44\nCopyright (c) 2018-2024 Cosmin Truta\nCopyright (c) 1998-2002,2004,2006-2018 Glenn Randers-Pehrson\nCopyright (c) 1996-1997 Andreas Dilger\nCopyright (c) 1995-1996 Guy Eric Schalnat, Group 42, Inc.\n"
  ;
}

// png_get_libpng_ver @ 140daddf0

char * __cdecl png_get_libpng_ver(png_struct_def_conflict *param_1)

{
  return "1.6.44";
}

// png_get_header_ver @ 140dade00

char * __cdecl png_get_header_ver(png_struct_def_conflict *param_1)

{
  return "1.6.44";
}

// png_get_header_version @ 140dade10

char * __cdecl png_get_header_version(png_struct_def_conflict *param_1)

{
  return " libpng version 1.6.44\n";
}

// png_build_grayscale_palette @ 140dade20

void __cdecl png_build_grayscale_palette(int param_1,png_color_struct *param_2)

{
  uint uVar1;
  ulonglong uVar2;
  uchar uVar3;
  char cVar4;
  uchar *puVar5;
  char cVar6;
  
  if (((param_2 != (png_color_struct *)0x0) && (uVar1 = param_1 - 1, uVar1 < 8)) &&
     ((0x8bU >> (uVar1 & 0x1f) & 1) != 0)) {
    uVar2 = *(ulonglong *)(&DAT_1531f01b0 + (ulonglong)uVar1 * 8) & 0xfffffffffffffffe;
    puVar5 = &param_2[1].blue;
    cVar4 = '\0';
    do {
      puVar5[-5] = cVar4;
      puVar5[-4] = cVar4;
      puVar5[-3] = cVar4;
      cVar6 = (char)(0x1ffffff11ff55ff >> ((char)uVar1 * '\b' & 0x3fU));
      uVar3 = cVar4 + cVar6;
      ((png_color_struct *)(puVar5 + -2))->red = uVar3;
      puVar5[-1] = uVar3;
      *puVar5 = uVar3;
      cVar4 = uVar3 + cVar6;
      puVar5 = puVar5 + 6;
      uVar2 = uVar2 - 2;
    } while (uVar2 != 0);
  }
  return;
}

// png_handle_as_unknown @ 140dadea0

int __cdecl png_handle_as_unknown(png_struct_def_conflict *param_1,uchar *param_2)

{
  uchar *puVar1;
  
  if ((param_2 != (uchar *)0x0 && param_1 != (png_struct_def_conflict *)0x0) &&
     (param_1->num_chunk_list != 0)) {
    puVar1 = param_1->chunk_list + param_1->num_chunk_list * 5;
    do {
      if (*(int *)param_2 == *(int *)(puVar1 + -5)) {
        return (int)puVar1[-1];
      }
      puVar1 = puVar1 + -5;
    } while (param_1->chunk_list < puVar1);
  }
  return 0;
}

// png_chunk_unknown_handling @ 140dadf00

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

int __cdecl png_chunk_unknown_handling(png_struct_def_conflict *param_1,uint param_2)

{
  code *pcVar1;
  uint uVar2;
  int iVar3;
  uchar *puVar4;
  undefined1 auStack_38 [43];
  uint local_d;
  ulonglong local_8;
  
  local_8 = __security_cookie.value ^ (ulonglong)auStack_38;
  local_d = param_2 >> 0x18 | (param_2 & 0xff0000) >> 8 | (param_2 & 0xff00) << 8 | param_2 << 0x18;
  uVar2 = 0;
  if ((param_1 != (png_struct_def_conflict *)0x0) && (param_1->num_chunk_list != 0)) {
    puVar4 = param_1->chunk_list + param_1->num_chunk_list * 5;
    do {
      if (local_d == *(uint *)(puVar4 + -5)) {
        uVar2 = (uint)puVar4[-1];
        break;
      }
      puVar4 = puVar4 + -5;
    } while (param_1->chunk_list < puVar4);
  }
  if ((local_8 ^ (ulonglong)auStack_38) != __security_cookie.value) {
    pcVar1 = (code *)swi(3);
    iVar3 = (*pcVar1)();
    return iVar3;
  }
  return uVar2;
}

// png_reset_zstream @ 140dadf90

int __cdecl png_reset_zstream(png_struct_def_conflict *param_1)

{
  int iVar1;
  
  if (param_1 != (png_struct_def_conflict *)0x0) {
    iVar1 = inflateReset(&param_1->zstream);
    return iVar1;
  }
  return -2;
}

// png_access_version_number @ 140dadfb0

uint __cdecl png_access_version_number(void)

{
  return 0x2994;
}

// png_zstream_error @ 140dadfc0

void __cdecl png_zstream_error(png_struct_def_conflict *param_1,int param_2)

{
  if ((param_1->zstream).msg != (char *)0x0) {
    return;
  }
  if (param_2 + 7U < 10) {
    (param_1->zstream).msg = (&PTR_s_unexpected_zlib_return_1531f01f0)[param_2 + 7U];
    return;
  }
  (param_1->zstream).msg = "unexpected zlib return code";
  return;
}

// png_colorspace_set_gamma @ 140dae000

void __cdecl
png_colorspace_set_gamma(png_struct_def_conflict *param_1,png_colorspace *param_2,int param_3)

{
  char *pcVar1;
  ushort uVar2;
  int iVar3;
  double dVar4;
  
  if (param_3 + 0xdabf41bfU < 0xdabf41cf) {
    uVar2 = param_2->flags;
    pcVar1 = "gamma value out of range";
  }
  else {
    uVar2 = param_2->flags;
    if ((uVar2 & 8) == 0 || (param_1->mode & 0x8000) == 0) {
      if ((short)uVar2 < 0) {
        return;
      }
      if (((uVar2 & 1) == 0) ||
         ((((param_2->gamma != 0 &&
            (dVar4 = floor(((double)param_2->gamma * __real_40f86a0000000000) / (double)param_3 +
                           __real_3fe0000000000000), dVar4 <= __real_41dfffffffc00000)) &&
           (__real_c1e0000000000000 <= dVar4)) && ((int)dVar4 - 95000U < 0x2711)))) {
LAB_140dae0d4:
        param_2->gamma = param_3;
        param_2->flags = uVar2 | 9;
        return;
      }
      if ((uVar2 & 0x20) == 0) {
        png_chunk_report(param_1,"gamma value does not match libpng estimate",0);
        goto LAB_140dae0d4;
      }
      pcVar1 = "gamma value does not match sRGB";
      iVar3 = 2;
      goto LAB_140dae101;
    }
    pcVar1 = "duplicate";
  }
  param_2->flags = uVar2 | 0x8000;
  iVar3 = 1;
LAB_140dae101:
  png_chunk_report(param_1,pcVar1,iVar3);
  return;
}

// png_colorspace_sync_info @ 140dae130

void __cdecl png_colorspace_sync_info(png_struct_def_conflict *param_1,png_info_def *param_2)

{
  ushort uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar1 = (param_2->colorspace).flags;
  if ((short)uVar1 < 0) {
    uVar3 = param_2->valid & 0xffffe7fa;
    param_2->valid = uVar3;
    if (param_1 != (png_struct_def_conflict *)0x0) {
      uVar2 = param_2->free_me;
      if ((uVar2 & 0x10) != 0) {
        png_free(param_1,param_2->iccp_name);
        png_free(param_1,param_2->iccp_profile);
        param_2->iccp_name = (char *)0x0;
        param_2->iccp_profile = (uchar *)0x0;
        param_2->valid = uVar3;
      }
      param_2->free_me = uVar2 & 0xffffffef;
    }
  }
  else {
    uVar3 = ((uVar1 & 0x80) << 4 | param_2->valid & 0xfffff7fb) + (uVar1 & 2) * 2;
    if ((uVar1 & 1) == 0) {
      uVar3 = uVar3 & 0xfffffffe;
    }
    else {
      uVar3 = uVar3 | 1;
    }
    param_2->valid = uVar3;
  }
  return;
}

// png_colorspace_sync @ 140dae1e0

void __cdecl png_colorspace_sync(png_struct_def_conflict *param_1,png_info_def *param_2)

{
  ushort uVar1;
  uint uVar2;
  undefined8 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  uint uVar17;
  
  if (param_2 != (png_info_def *)0x0) {
    iVar4 = (param_1->colorspace).end_points_XYZ.blue_Y;
    uVar3 = *(undefined8 *)&(param_1->colorspace).end_points_XYZ.blue_Z;
    (param_2->colorspace).end_points_XYZ.blue_X = (param_1->colorspace).end_points_XYZ.blue_X;
    (param_2->colorspace).end_points_XYZ.blue_Y = iVar4;
    *(undefined8 *)&(param_2->colorspace).end_points_XYZ.blue_Z = uVar3;
    iVar13 = (param_1->colorspace).gamma;
    iVar14 = (param_1->colorspace).end_points_xy.redx;
    iVar15 = (param_1->colorspace).end_points_xy.redy;
    iVar16 = (param_1->colorspace).end_points_xy.greenx;
    iVar9 = (param_1->colorspace).end_points_xy.greeny;
    iVar10 = (param_1->colorspace).end_points_xy.bluex;
    iVar11 = (param_1->colorspace).end_points_xy.bluey;
    iVar12 = (param_1->colorspace).end_points_xy.whitex;
    uVar3 = *(undefined8 *)&(param_1->colorspace).end_points_xy.whitey;
    iVar7 = (param_1->colorspace).end_points_XYZ.red_Y;
    iVar8 = (param_1->colorspace).end_points_XYZ.red_Z;
    iVar4 = (param_1->colorspace).end_points_XYZ.green_Y;
    iVar5 = (param_1->colorspace).end_points_XYZ.green_Z;
    iVar6 = (param_1->colorspace).end_points_XYZ.blue_X;
    (param_2->colorspace).end_points_XYZ.green_X = (param_1->colorspace).end_points_XYZ.green_X;
    (param_2->colorspace).end_points_XYZ.green_Y = iVar4;
    (param_2->colorspace).end_points_XYZ.green_Z = iVar5;
    (param_2->colorspace).end_points_XYZ.blue_X = iVar6;
    *(undefined8 *)&(param_2->colorspace).end_points_xy.whitey = uVar3;
    (param_2->colorspace).end_points_XYZ.red_Y = iVar7;
    (param_2->colorspace).end_points_XYZ.red_Z = iVar8;
    (param_2->colorspace).end_points_xy.greeny = iVar9;
    (param_2->colorspace).end_points_xy.bluex = iVar10;
    (param_2->colorspace).end_points_xy.bluey = iVar11;
    (param_2->colorspace).end_points_xy.whitex = iVar12;
    (param_2->colorspace).gamma = iVar13;
    (param_2->colorspace).end_points_xy.redx = iVar14;
    (param_2->colorspace).end_points_xy.redy = iVar15;
    (param_2->colorspace).end_points_xy.greenx = iVar16;
    uVar1 = (param_2->colorspace).flags;
    uVar2 = param_2->valid;
    if ((short)uVar1 < 0) {
      param_2->valid = uVar2 & 0xffffe7fa;
      uVar17 = param_2->free_me;
      if ((uVar17 & 0x10) != 0) {
        png_free(param_1,param_2->iccp_name);
        png_free(param_1,param_2->iccp_profile);
        param_2->iccp_name = (char *)0x0;
        param_2->iccp_profile = (uchar *)0x0;
        param_2->valid = uVar2 & 0xffffe7fa;
      }
      param_2->free_me = uVar17 & 0xffffffef;
    }
    else {
      uVar17 = (uVar1 & 0x80) * 0x10 + (uVar1 & 2) * 2;
      if ((uVar1 & 1) == 0) {
        uVar17 = uVar17 | uVar2 & 0xfffff7fa;
      }
      else {
        uVar17 = uVar17 | uVar2 & 0xfffff7fb | 1;
      }
      param_2->valid = uVar17;
    }
  }
  return;
}

// png_colorspace_set_chromaticities @ 140dae2d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

int __cdecl
png_colorspace_set_chromaticities
          (png_struct_def_conflict *param_1,png_colorspace *param_2,png_xy *param_3,int param_4)

{
  byte *pbVar1;
  ushort uVar2;
  code *pcVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  char *pcVar11;
  ushort uVar12;
  undefined1 auStack_78 [36];
  png_XYZ local_54;
  ulonglong local_30;
  
  local_30 = __security_cookie.value ^ (ulonglong)auStack_78;
  iVar10 = png_colorspace_check_xy(&local_54,param_3);
  if (iVar10 == 1) {
    pbVar1 = (byte *)((longlong)&param_2->flags + 1);
    *pbVar1 = *pbVar1 | 0x80;
    pcVar11 = "invalid chromaticities";
LAB_140dae3d2:
    png_benign_error(param_1,pcVar11);
  }
  else {
    if (iVar10 != 0) {
      pbVar1 = (byte *)((longlong)&param_2->flags + 1);
      *pbVar1 = *pbVar1 | 0x80;
                    /* WARNING: Subroutine does not return */
      png_error(param_1,"internal error checking chromaticities");
    }
    uVar2 = param_2->flags;
    if (-1 < (short)uVar2) {
      if ((uVar2 & 2) != 0 && param_4 < 2) {
        iVar10 = png_colorspace_endpoints_match(param_3,&param_2->end_points_xy,100);
        if (iVar10 == 0) {
          param_2->flags = uVar2 | 0x8000;
          pcVar11 = "inconsistent chromaticities";
          goto LAB_140dae3d2;
        }
        if (param_4 == 0) {
          if ((local_30 ^ (ulonglong)auStack_78) == __security_cookie.value) {
            return 1;
          }
          goto LAB_140dae423;
        }
      }
      iVar6 = param_3->redx;
      iVar7 = param_3->redy;
      iVar8 = param_3->greenx;
      iVar9 = param_3->greeny;
      iVar10 = param_3->bluey;
      iVar4 = param_3->whitex;
      iVar5 = param_3->whitey;
      (param_2->end_points_xy).bluex = param_3->bluex;
      (param_2->end_points_xy).bluey = iVar10;
      (param_2->end_points_xy).whitex = iVar4;
      (param_2->end_points_xy).whitey = iVar5;
      (param_2->end_points_xy).redx = iVar6;
      (param_2->end_points_xy).redy = iVar7;
      (param_2->end_points_xy).greenx = iVar8;
      (param_2->end_points_xy).greeny = iVar9;
      (param_2->end_points_XYZ).red_X = local_54.red_X;
      (param_2->end_points_XYZ).red_Y = local_54.red_Y;
      (param_2->end_points_XYZ).red_Z = local_54.red_Z;
      (param_2->end_points_XYZ).green_X = local_54.green_X;
      (param_2->end_points_XYZ).green_Y = local_54.green_Y;
      (param_2->end_points_XYZ).green_Z = local_54.green_Z;
      (param_2->end_points_XYZ).blue_X = local_54.blue_X;
      (param_2->end_points_XYZ).blue_Y = local_54.blue_Y;
      (param_2->end_points_XYZ).blue_Z = local_54.blue_Z;
      iVar10 = png_colorspace_endpoints_match(param_3,&sRGB_xy,1000);
      uVar12 = uVar2 | 0x42;
      if (iVar10 == 0) {
        uVar12 = uVar2 & 0x7fbd | 2;
      }
      param_2->flags = uVar12;
      if ((local_30 ^ (ulonglong)auStack_78) == __security_cookie.value) {
        return 2;
      }
      goto LAB_140dae423;
    }
  }
  if ((local_30 ^ (ulonglong)auStack_78) == __security_cookie.value) {
    return 0;
  }
LAB_140dae423:
  pcVar3 = (code *)swi(3);
  iVar10 = (*pcVar3)();
  return iVar10;
}

// png_colorspace_check_xy @ 140dae450

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl png_colorspace_check_xy(png_XYZ *param_1,png_xy *param_2)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  bool bVar13;
  bool bVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  ulonglong uVar19;
  undefined1 auVar20 [16];
  double dVar21;
  undefined1 auStack_108 [40];
  png_xy *local_e0;
  png_XYZ *local_d8;
  int local_d0;
  int local_cc;
  int local_c8;
  int local_c4;
  int local_c0;
  int local_bc;
  int local_b8;
  int local_b4;
  png_xy local_b0;
  ulonglong local_90;
  
  local_90 = __security_cookie.value ^ (ulonglong)auStack_108;
  local_b4 = param_2->redy;
  iVar5 = param_2->greenx;
  iVar6 = param_2->bluey;
  iVar7 = param_2->bluex;
  iVar10 = iVar5 - iVar7;
  iVar11 = local_b4 - iVar6;
  local_cc = 0;
  iVar2 = 0;
  local_e0 = param_2;
  local_d8 = param_1;
  if (iVar11 != 0 && iVar10 != 0) {
    dVar15 = floor(((double)iVar11 * (double)iVar10) / __real_401c000000000000 +
                   __real_3fe0000000000000);
    iVar2 = 1;
    if ((__real_41dfffffffc00000 < dVar15) || (dVar15 < __real_c1e0000000000000))
    goto LAB_140daedb0;
    iVar2 = (int)dVar15;
  }
  local_bc = local_e0->redx;
  iVar9 = local_e0->greeny;
  iVar8 = iVar9 - iVar6;
  iVar3 = local_bc - iVar7;
  local_b8 = iVar2;
  if (iVar3 != 0 && iVar8 != 0) {
    dVar15 = floor(((double)iVar3 * (double)iVar8) / __real_401c000000000000 +
                   __real_3fe0000000000000);
    iVar2 = 1;
    if ((__real_41dfffffffc00000 < dVar15) || (dVar15 < __real_c1e0000000000000))
    goto LAB_140daedb0;
    local_cc = (int)dVar15;
  }
  local_d0 = local_e0->whitey;
  local_c8 = local_d0 - iVar6;
  iVar4 = 0;
  iVar12 = 0;
  local_c0 = iVar3;
  if (local_c8 != 0 && iVar5 != iVar7) {
    dVar15 = floor(((double)local_c8 * (double)iVar10) / __real_401c000000000000 +
                   __real_3fe0000000000000);
    iVar2 = 1;
    if ((__real_41dfffffffc00000 < dVar15) || (dVar15 < __real_c1e0000000000000))
    goto LAB_140daedb0;
    iVar12 = (int)dVar15;
  }
  iVar5 = local_e0->whitex;
  iVar10 = iVar5 - iVar7;
  if (iVar10 != 0 && iVar9 != iVar6) {
    dVar15 = floor(((double)iVar10 * (double)iVar8) / __real_401c000000000000 +
                   __real_3fe0000000000000);
    iVar2 = 1;
    if ((__real_41dfffffffc00000 < dVar15) || (dVar15 < __real_c1e0000000000000))
    goto LAB_140daedb0;
    iVar4 = (int)dVar15;
  }
  iVar9 = local_d0;
  iVar2 = 1;
  if (iVar12 - iVar4 == 0) goto LAB_140daedb0;
  iVar8 = local_b8 - local_cc;
  bVar13 = local_d0 == 0;
  bVar14 = local_b8 == local_cc;
  iVar3 = 0;
  local_c4 = iVar5;
  if (bVar14 || bVar13) {
LAB_140dae70e:
    iVar2 = 1;
    if (iVar3 <= iVar9) goto LAB_140daedb0;
    iVar5 = 0;
    iVar9 = 0;
    local_cc = iVar3;
    if (local_b4 != iVar6 && local_c4 != iVar7) {
      dVar15 = floor(((double)iVar10 * (double)iVar11) / __real_401c000000000000 +
                     __real_3fe0000000000000);
      if (__real_41dfffffffc00000 < dVar15) goto LAB_140daedab;
      iVar2 = 1;
      if (dVar15 < __real_c1e0000000000000) goto LAB_140daedb0;
      iVar9 = (int)dVar15;
    }
    iVar10 = local_bc;
    if (local_bc != iVar7 && local_d0 != iVar6) {
      dVar15 = floor(((double)local_c8 * (double)local_c0) / __real_401c000000000000 +
                     __real_3fe0000000000000);
      if (__real_41dfffffffc00000 < dVar15) goto LAB_140daedab;
      iVar2 = 1;
      if (dVar15 < __real_c1e0000000000000) goto LAB_140daedb0;
      iVar5 = (int)dVar15;
    }
    iVar2 = 1;
    if (iVar9 - iVar5 == 0) goto LAB_140daedb0;
    iVar6 = 0;
    if (!bVar14 && !bVar13) {
      dVar15 = floor(((double)iVar8 * (double)local_d0) / (double)(iVar9 - iVar5) +
                     __real_3fe0000000000000);
      if (__real_41dfffffffc00000 < dVar15) goto LAB_140daedab;
      iVar2 = 1;
      if (dVar15 < __real_c1e0000000000000) goto LAB_140daedb0;
      iVar6 = (int)dVar15;
    }
    iVar2 = 1;
    if (iVar6 <= local_d0) goto LAB_140daedb0;
    dVar16 = floor(__real_4202a05f20000000 / (double)local_d0 + __real_3fe0000000000000);
    iVar5 = local_cc;
    dVar15 = __real_41dfffffffc00000;
    iVar7 = (int)dVar16;
    if (dVar16 < __real_c1e0000000000000) {
      iVar7 = 0;
    }
    if (__real_41dfffffffc00000 < dVar16) {
      iVar7 = 0;
    }
    dVar16 = (double)local_cc;
    dVar18 = (double)iVar6;
    auVar20._8_4_ = SUB84(dVar18,0);
    auVar20._0_8_ = dVar16;
    auVar20._12_4_ = (int)((ulonglong)dVar18 >> 0x20);
    auVar20 = divpd(___xmm_4202a05f200000004202a05f20000000,auVar20);
    dVar21 = auVar20._8_8_ + _UNK_150689678;
    dVar17 = floor(auVar20._0_8_ + ___xmm_3fe00000000000003fe0000000000000);
    dVar21 = floor(dVar21);
    if (iVar5 != 0) {
      uVar19 = CONCAT44((int)dVar21,(int)dVar17) &
               CONCAT44(-(uint)(dVar21 <= _UNK_150d56658 && _UNK_1531ef338 <= dVar21),
                        -(uint)(___xmm_c1e0000000000000c1e0000000000000 <= dVar17 &&
                               dVar17 <= ___xmm_41dfffffffc0000041dfffffffc00000));
      iVar7 = iVar7 - ((int)(uVar19 >> 0x20) + (int)uVar19);
      iVar2 = 1;
      if (iVar7 < 1) goto LAB_140daedb0;
      iVar11 = 0;
      iVar5 = 0;
      if (iVar10 != 0) {
        dVar17 = floor(((double)iVar10 * __real_40f86a0000000000) / dVar16 + __real_3fe0000000000000
                      );
        if (dVar15 < dVar17) goto LAB_140daedab;
        iVar2 = 1;
        if (dVar17 < __real_c1e0000000000000) goto LAB_140daedb0;
        iVar5 = (int)dVar17;
      }
      local_d8->red_X = iVar5;
      if (local_e0->redy != 0) {
        dVar17 = floor(((double)local_e0->redy * __real_40f86a0000000000) / dVar16 +
                       __real_3fe0000000000000);
        if ((dVar15 < dVar17) || (dVar17 < __real_c1e0000000000000)) goto LAB_140daedab;
        iVar11 = (int)dVar17;
      }
      local_d8->red_Y = iVar11;
      iVar5 = local_e0->redy + local_e0->redx;
      iVar2 = 0;
      if (iVar5 != 100000) {
        dVar16 = floor(((double)(100000 - iVar5) * __real_40f86a0000000000) / dVar16 +
                       __real_3fe0000000000000);
        if ((dVar15 < dVar16) || (dVar16 < __real_c1e0000000000000)) goto LAB_140daedab;
        iVar2 = (int)dVar16;
      }
      local_d8->red_Z = iVar2;
      if (iVar6 != 0) {
        iVar6 = 0;
        iVar5 = 0;
        if (local_e0->greenx != 0) {
          dVar16 = floor(((double)local_e0->greenx * __real_40f86a0000000000) / dVar18 +
                         __real_3fe0000000000000);
          if ((dVar15 < dVar16) || (dVar16 < __real_c1e0000000000000)) goto LAB_140daedab;
          iVar5 = (int)dVar16;
        }
        local_d8->green_X = iVar5;
        if (local_e0->greeny != 0) {
          dVar16 = floor(((double)local_e0->greeny * __real_40f86a0000000000) / dVar18 +
                         __real_3fe0000000000000);
          if ((dVar15 < dVar16) || (dVar16 < __real_c1e0000000000000)) goto LAB_140daedab;
          iVar6 = (int)dVar16;
        }
        local_d8->green_Y = iVar6;
        iVar5 = local_e0->greeny + local_e0->greenx;
        iVar2 = 0;
        iVar6 = 0;
        if (iVar5 != 100000) {
          dVar16 = floor(((double)(100000 - iVar5) * __real_40f86a0000000000) / dVar18 +
                         __real_3fe0000000000000);
          if ((dVar15 < dVar16) || (dVar16 < __real_c1e0000000000000)) goto LAB_140daedab;
          iVar6 = (int)dVar16;
        }
        local_d8->green_Z = iVar6;
        dVar16 = (double)iVar7;
        if (local_e0->bluex != 0) {
          dVar18 = floor(((double)local_e0->bluex * dVar16) / __real_40f86a0000000000 +
                         __real_3fe0000000000000);
          if ((dVar15 < dVar18) || (dVar18 < __real_c1e0000000000000)) goto LAB_140daedab;
          iVar2 = (int)dVar18;
        }
        local_d8->blue_X = iVar2;
        iVar6 = 0;
        iVar5 = 0;
        if (local_e0->bluey != 0) {
          dVar18 = floor(((double)local_e0->bluey * dVar16) / __real_40f86a0000000000 +
                         __real_3fe0000000000000);
          if ((dVar15 < dVar18) || (dVar18 < __real_c1e0000000000000)) goto LAB_140daedab;
          iVar5 = (int)dVar18;
        }
        local_d8->blue_Y = iVar5;
        iVar5 = local_e0->bluey + local_e0->bluex;
        if (iVar5 != 100000) {
          dVar16 = floor((dVar16 * (double)(100000 - iVar5)) / __real_40f86a0000000000 +
                         __real_3fe0000000000000);
          if ((dVar15 < dVar16) || (dVar16 < __real_c1e0000000000000)) goto LAB_140daedab;
          iVar6 = (int)dVar16;
        }
        local_d8->blue_Z = iVar6;
        iVar5 = png_xy_from_XYZ(&local_b0,local_d8);
        if ((((((iVar5 == 0) &&
               (local_e0->whitex <= local_b0.whitex + 5 && local_b0.whitex + -5 <= local_e0->whitex)
               ) && (local_e0->whitey <= local_b0.whitey + 5 &&
                     local_b0.whitey + -5 <= local_e0->whitey)) &&
             ((local_e0->redx <= local_b0.redx + 5 && local_b0.redx + -5 <= local_e0->redx &&
              (local_e0->redy <= local_b0.redy + 5 && local_b0.redy + -5 <= local_e0->redy)))) &&
            ((local_e0->greenx <= local_b0.greenx + 5 && local_b0.greenx + -5 <= local_e0->greenx &&
             ((local_e0->greeny <= local_b0.greeny + 5 && local_b0.greeny + -5 <= local_e0->greeny
              && (local_e0->bluex <= local_b0.bluex + 5 && local_b0.bluex + -5 <= local_e0->bluex)))
             ))) && (iVar2 = 0,
                    local_e0->bluey <= local_b0.bluey + 5 && local_b0.bluey + -5 <= local_e0->bluey)
           ) goto LAB_140daedb0;
      }
    }
  }
  else {
    dVar15 = floor(((double)iVar8 * (double)local_d0) / (double)(iVar12 - iVar4) +
                   __real_3fe0000000000000);
    if ((dVar15 <= __real_41dfffffffc00000) && (__real_c1e0000000000000 <= dVar15)) {
      iVar3 = (int)dVar15;
      goto LAB_140dae70e;
    }
  }
LAB_140daedab:
  iVar2 = 1;
LAB_140daedb0:
  if ((local_90 ^ (ulonglong)auStack_108) == __security_cookie.value) {
    return iVar2;
  }
  pcVar1 = (code *)swi(3);
  iVar5 = (*pcVar1)();
  return iVar5;
}

// png_colorspace_set_endpoints @ 140daee10

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

int __cdecl
png_colorspace_set_endpoints
          (png_struct_def_conflict *param_1,png_colorspace *param_2,png_XYZ *param_3,int param_4)

{
  byte *pbVar1;
  ushort uVar2;
  code *pcVar3;
  double dVar4;
  double dVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  int iVar9;
  ushort uVar10;
  char *pcVar11;
  int iVar12;
  undefined1 auStack_e8 [32];
  png_xy local_c8;
  png_XYZ local_a8;
  png_XYZ local_78;
  ulonglong local_50;
  
  local_50 = __security_cookie.value ^ (ulonglong)auStack_e8;
  local_a8.blue_Z = param_3->blue_Z;
  uVar6._0_4_ = param_3->red_X;
  uVar6._4_4_ = param_3->red_Y;
  local_a8.red_Z = param_3->red_Z;
  local_a8.green_X = param_3->green_X;
  uVar7._0_4_ = param_3->green_Y;
  uVar7._4_4_ = param_3->green_Z;
  uVar8._0_4_ = param_3->blue_X;
  uVar8._4_4_ = param_3->blue_Y;
  local_a8._0_8_ = uVar6;
  local_a8._16_8_ = uVar7;
  local_a8._24_8_ = uVar8;
  if ((int)((int)uVar7 ^ 0x7fffffffU) < uVar8._4_4_ || (int)(uVar6._4_4_ ^ 0x7fffffffU) < (int)uVar7
     ) {
LAB_140daf30f:
    pbVar1 = (byte *)((longlong)&param_2->flags + 1);
    *pbVar1 = *pbVar1 | 0x80;
    pcVar11 = "invalid end points";
LAB_140daf31a:
    png_benign_error(param_1,pcVar11);
  }
  else {
    iVar9 = uVar8._4_4_ + uVar6._4_4_ + (int)uVar7;
    if (iVar9 != 100000) {
      if (iVar9 == 0) goto LAB_140daf30f;
      iVar12 = 0;
      dVar5 = (double)iVar9;
      iVar9 = 0;
      if ((int)uVar6 != 0) {
        dVar4 = floor(((double)(int)uVar6 * __real_40f86a0000000000) / dVar5 +
                      __real_3fe0000000000000);
        if ((__real_41dfffffffc00000 < dVar4) || (dVar4 < __real_c1e0000000000000))
        goto LAB_140daf30f;
        iVar9 = (int)dVar4;
      }
      local_a8.red_X = iVar9;
      if (uVar6._4_4_ != 0) {
        dVar4 = floor(((double)uVar6._4_4_ * __real_40f86a0000000000) / dVar5 +
                      __real_3fe0000000000000);
        if ((__real_41dfffffffc00000 < dVar4) || (dVar4 < __real_c1e0000000000000))
        goto LAB_140daf30f;
        iVar12 = (int)dVar4;
      }
      local_a8.red_Y = iVar12;
      iVar12 = 0;
      iVar9 = 0;
      if (local_a8.red_Z != 0) {
        dVar4 = floor(((double)local_a8.red_Z * __real_40f86a0000000000) / dVar5 +
                      __real_3fe0000000000000);
        if ((__real_41dfffffffc00000 < dVar4) || (dVar4 < __real_c1e0000000000000))
        goto LAB_140daf30f;
        iVar9 = (int)dVar4;
      }
      local_a8.red_Z = iVar9;
      if (local_a8.green_X != 0) {
        dVar4 = floor(((double)local_a8.green_X * __real_40f86a0000000000) / dVar5 +
                      __real_3fe0000000000000);
        if ((__real_41dfffffffc00000 < dVar4) || (dVar4 < __real_c1e0000000000000))
        goto LAB_140daf30f;
        iVar12 = (int)dVar4;
      }
      local_a8.green_X = iVar12;
      iVar12 = 0;
      iVar9 = 0;
      if ((int)uVar7 != 0) {
        dVar4 = floor(((double)(int)uVar7 * __real_40f86a0000000000) / dVar5 +
                      __real_3fe0000000000000);
        if ((__real_41dfffffffc00000 < dVar4) || (dVar4 < __real_c1e0000000000000))
        goto LAB_140daf30f;
        iVar9 = (int)dVar4;
      }
      local_a8.green_Y = iVar9;
      if (local_a8.green_Z != 0) {
        dVar4 = floor(((double)local_a8.green_Z * __real_40f86a0000000000) / dVar5 +
                      __real_3fe0000000000000);
        if ((__real_41dfffffffc00000 < dVar4) || (dVar4 < __real_c1e0000000000000))
        goto LAB_140daf30f;
        iVar12 = (int)dVar4;
      }
      local_a8.green_Z = iVar12;
      iVar12 = 0;
      iVar9 = 0;
      if (local_a8.blue_X != 0) {
        dVar4 = floor(((double)local_a8.blue_X * __real_40f86a0000000000) / dVar5 +
                      __real_3fe0000000000000);
        if ((__real_41dfffffffc00000 < dVar4) || (dVar4 < __real_c1e0000000000000))
        goto LAB_140daf30f;
        iVar9 = (int)dVar4;
      }
      local_a8.blue_X = iVar9;
      if (uVar8._4_4_ != 0) {
        dVar4 = floor(((double)uVar8._4_4_ * __real_40f86a0000000000) / dVar5 +
                      __real_3fe0000000000000);
        if ((__real_41dfffffffc00000 < dVar4) || (dVar4 < __real_c1e0000000000000))
        goto LAB_140daf30f;
        iVar12 = (int)dVar4;
      }
      local_a8.blue_Y = iVar12;
      if (local_a8.blue_Z == 0) {
        local_a8.blue_Z = 0;
      }
      else {
        dVar5 = floor(((double)local_a8.blue_Z * __real_40f86a0000000000) / dVar5 +
                      __real_3fe0000000000000);
        if ((__real_41dfffffffc00000 < dVar5) || (dVar5 < __real_c1e0000000000000))
        goto LAB_140daf30f;
        local_a8.blue_Z = (int)dVar5;
      }
    }
    iVar9 = png_xy_from_XYZ(&local_c8,&local_a8);
    if (iVar9 != 0) goto LAB_140daf30f;
    local_78.blue_Z = local_a8.blue_Z;
    local_78.green_Y = local_a8.green_Y;
    local_78.green_Z = local_a8.green_Z;
    local_78.blue_X = local_a8.blue_X;
    local_78.blue_Y = local_a8.blue_Y;
    local_78.red_X = local_a8.red_X;
    local_78.red_Y = local_a8.red_Y;
    local_78.red_Z = local_a8.red_Z;
    local_78.green_X = local_a8.green_X;
    iVar9 = png_colorspace_check_xy(&local_78,&local_c8);
    if (iVar9 == 1) goto LAB_140daf30f;
    if (iVar9 != 0) {
      pbVar1 = (byte *)((longlong)&param_2->flags + 1);
      *pbVar1 = *pbVar1 | 0x80;
                    /* WARNING: Subroutine does not return */
      png_error(param_1,"internal error checking chromaticities");
    }
    uVar2 = param_2->flags;
    if (-1 < (short)uVar2) {
      if ((param_4 < 2 & (byte)((uVar2 & 2) >> 1)) == 0) {
LAB_140daef35:
        (param_2->end_points_xy).bluex = local_c8.bluex;
        (param_2->end_points_xy).bluey = local_c8.bluey;
        (param_2->end_points_xy).whitex = local_c8.whitex;
        (param_2->end_points_xy).whitey = local_c8.whitey;
        (param_2->end_points_xy).redx = local_c8.redx;
        (param_2->end_points_xy).redy = local_c8.redy;
        (param_2->end_points_xy).greenx = local_c8.greenx;
        (param_2->end_points_xy).greeny = local_c8.greeny;
        (param_2->end_points_XYZ).red_X = local_a8.red_X;
        (param_2->end_points_XYZ).red_Y = local_a8.red_Y;
        (param_2->end_points_XYZ).red_Z = local_a8.red_Z;
        (param_2->end_points_XYZ).green_X = local_a8.green_X;
        (param_2->end_points_XYZ).green_Y = local_a8.green_Y;
        (param_2->end_points_XYZ).green_Z = local_a8.green_Z;
        (param_2->end_points_XYZ).blue_X = local_a8.blue_X;
        (param_2->end_points_XYZ).blue_Y = local_a8.blue_Y;
        (param_2->end_points_XYZ).blue_Z = local_a8.blue_Z;
        if (((((local_c8.whitex - 0x7e0fU < 0xfffff82f) || (local_c8.whitey - 0x846dU < 0xfffff82f))
             || (local_c8.redx - 0xfde9U < 0xfffff82f)) ||
            ((local_c8.redy - 0x84d1U < 0xfffff82f || (local_c8.greenx - 0x7919U < 0xfffff82f)))) ||
           ((local_c8.greeny - 0xee49U < 0xfffff82f || (local_c8.bluex - 0x3e81U < 0xfffff82f)))) {
          uVar10 = uVar2 & 0x7fbd | 2;
        }
        else {
          uVar10 = uVar2 | 0x42;
          if (local_c8.bluey - 0x1b59U < 0xfffff82f) {
            uVar10 = uVar2 & 0x7fbd | 2;
          }
        }
        param_2->flags = uVar10;
        if ((local_50 ^ (ulonglong)auStack_e8) == __security_cookie.value) {
          return 2;
        }
        goto LAB_140daf4f0;
      }
      iVar9 = (param_2->end_points_xy).whitex;
      if ((((local_c8.whitex <= iVar9 + 100 && iVar9 + -100 <= local_c8.whitex) &&
           (iVar9 = (param_2->end_points_xy).whitey,
           local_c8.whitey <= iVar9 + 100 && iVar9 + -100 <= local_c8.whitey)) &&
          (iVar9 = (param_2->end_points_xy).redx,
          local_c8.redx <= iVar9 + 100 && iVar9 + -100 <= local_c8.redx)) &&
         (((iVar9 = (param_2->end_points_xy).redy,
           local_c8.redy <= iVar9 + 100 && iVar9 + -100 <= local_c8.redy &&
           (iVar9 = (param_2->end_points_xy).greenx,
           local_c8.greenx <= iVar9 + 100 && iVar9 + -100 <= local_c8.greenx)) &&
          ((iVar9 = (param_2->end_points_xy).greeny,
           local_c8.greeny <= iVar9 + 100 && iVar9 + -100 <= local_c8.greeny &&
           ((iVar9 = (param_2->end_points_xy).bluex,
            local_c8.bluex <= iVar9 + 100 && iVar9 + -100 <= local_c8.bluex &&
            (iVar9 = (param_2->end_points_xy).bluey,
            local_c8.bluey <= iVar9 + 100 && iVar9 + -100 <= local_c8.bluey)))))))) {
        if (param_4 == 0) {
          if ((local_50 ^ (ulonglong)auStack_e8) == __security_cookie.value) {
            return 1;
          }
          goto LAB_140daf4f0;
        }
        goto LAB_140daef35;
      }
      param_2->flags = uVar2 | 0x8000;
      pcVar11 = "inconsistent chromaticities";
      goto LAB_140daf31a;
    }
  }
  if ((local_50 ^ (ulonglong)auStack_e8) == __security_cookie.value) {
    return 0;
  }
LAB_140daf4f0:
  pcVar3 = (code *)swi(3);
  iVar9 = (*pcVar3)();
  return iVar9;
}

// png_colorspace_set_sRGB @ 140daf510

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl
png_colorspace_set_sRGB(png_struct_def_conflict *param_1,png_colorspace *param_2,int param_3)

{
  double dVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  int iVar4;
  char *pcVar5;
  ushort uVar6;
  ulonglong uVar7;
  
  uVar6 = param_2->flags;
  if (-1 < (short)uVar6) {
    if ((uint)param_3 < 4) {
      if (((uVar6 & 4) == 0) || ((uint)param_2->rendering_intent == param_3)) {
        if ((uVar6 & 0x20) == 0) {
          if (((uVar6 & 2) != 0) &&
             (iVar4 = png_colorspace_endpoints_match(&sRGB_xy,&param_2->end_points_xy,100),
             iVar4 == 0)) {
            png_chunk_report(param_1,"cHRM chunk does not match sRGB",2);
            uVar6 = param_2->flags;
          }
          if (((uVar6 & 1) != 0) &&
             ((((param_2->gamma == 0 ||
                (dVar1 = floor(((double)param_2->gamma * __real_40f86a0000000000) /
                               ___real_40e631e000000000 + __real_3fe0000000000000),
                __real_41dfffffffc00000 < dVar1)) || (dVar1 < __real_c1e0000000000000)) ||
              (10000 < (int)dVar1 - 95000U)))) {
            png_chunk_report(param_1,"gamma value does not match sRGB",2);
            uVar6 = param_2->flags;
          }
          param_2->rendering_intent = (ushort)param_3;
          uVar2 = sRGB_xy._8_8_;
          iVar4 = sRGB_xy.redy;
          (param_2->end_points_xy).redx = sRGB_xy.redx;
          uVar3 = sRGB_xy._8_8_;
          (param_2->end_points_xy).redy = iVar4;
          sRGB_xy.greenx = (int)uVar2;
          sRGB_xy.greeny = SUB84(uVar2,4);
          iVar4 = sRGB_xy.greeny;
          (param_2->end_points_xy).greenx = sRGB_xy.greenx;
          sRGB_xy._8_8_ = uVar3;
          uVar2 = sRGB_xy._24_8_;
          (param_2->end_points_xy).greeny = iVar4;
          iVar4 = sRGB_xy.bluey;
          (param_2->end_points_xy).bluex = sRGB_xy.bluex;
          uVar3 = sRGB_xy._24_8_;
          (param_2->end_points_xy).bluey = iVar4;
          sRGB_xy.whitex = (int)uVar2;
          sRGB_xy.whitey = SUB84(uVar2,4);
          iVar4 = sRGB_xy.whitey;
          (param_2->end_points_xy).whitex = sRGB_xy.whitex;
          sRGB_xy._24_8_ = uVar3;
          uVar2 = sRGB_XYZ._8_8_;
          (param_2->end_points_xy).whitey = iVar4;
          iVar4 = sRGB_XYZ.red_Y;
          (param_2->end_points_XYZ).red_X = sRGB_XYZ.red_X;
          uVar3 = sRGB_XYZ._8_8_;
          (param_2->end_points_XYZ).red_Y = iVar4;
          sRGB_XYZ.red_Z = (int)uVar2;
          sRGB_XYZ.green_X = SUB84(uVar2,4);
          iVar4 = sRGB_XYZ.green_X;
          (param_2->end_points_XYZ).red_Z = sRGB_XYZ.red_Z;
          sRGB_XYZ._8_8_ = uVar3;
          uVar2 = sRGB_XYZ._24_8_;
          (param_2->end_points_XYZ).green_X = iVar4;
          iVar4 = sRGB_XYZ.green_Z;
          (param_2->end_points_XYZ).green_Y = sRGB_XYZ.green_Y;
          uVar3 = sRGB_XYZ._24_8_;
          (param_2->end_points_XYZ).green_Z = iVar4;
          sRGB_XYZ.blue_X = (int)uVar2;
          sRGB_XYZ.blue_Y = SUB84(uVar2,4);
          iVar4 = sRGB_XYZ.blue_Y;
          (param_2->end_points_XYZ).blue_X = sRGB_XYZ.blue_X;
          sRGB_XYZ._24_8_ = uVar3;
          (param_2->end_points_XYZ).blue_Y = iVar4;
          (param_2->end_points_XYZ).blue_Z = 0x1734d;
          param_2->gamma = 0xb18f;
          param_2->flags = uVar6 | 0xe7;
          return 1;
        }
        png_benign_error(param_1,"duplicate sRGB information ignored");
        return 0;
      }
      uVar7 = (ulonglong)(uint)param_3;
      pcVar5 = "inconsistent rendering intents";
    }
    else {
      uVar7 = (ulonglong)param_3;
      pcVar5 = "invalid sRGB rendering intent";
    }
    png_icc_profile_error(param_1,param_2,"sRGB",uVar7,pcVar5);
  }
  return 0;
}

// png_icc_profile_error @ 140daf6c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

int __cdecl
png_icc_profile_error
          (png_struct_def_conflict *param_1,png_colorspace *param_2,char *param_3,ulong64 param_4,
          char *param_5)

{
  byte *pbVar1;
  code *pcVar2;
  uint uVar3;
  uint uVar4;
  int extraout_EAX;
  int iVar5;
  ulong64 uVar6;
  ulonglong uVar7;
  char *pcVar8;
  ulong64 uVar9;
  char cVar10;
  char cVar11;
  undefined1 auStack_148 [32];
  char local_128 [24];
  char local_110 [8];
  char local_108 [208];
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_148;
  if (param_2 != (png_colorspace *)0x0) {
    pbVar1 = (byte *)((longlong)&param_2->flags + 1);
    *pbVar1 = *pbVar1 | 0x80;
  }
  uVar6 = png_safecat(local_108,0xc4,0,"profile \'");
  uVar6 = png_safecat(local_108,uVar6 + 0x4f,uVar6,param_3);
  uVar6 = png_safecat(local_108,0xc4,uVar6,"\': ");
  uVar7 = param_4 >> 0x18;
  if (((((uVar7 == 0x20) || (0xfffffffffffffff5 < uVar7 - 0x3a)) ||
       (0xffffffffffffffe5 < (uVar7 & 0xffffffffffffffdf) - 0x5b)) &&
      ((((uVar3 = (uint)(param_4 >> 0x10), 0xffffffffffffffe5 < (ulonglong)(uVar3 & 0xdf) - 0x5b ||
         (uVar7 = param_4 >> 0x10 & 0xff, (int)uVar7 == 0x20)) ||
        (0xfffffffffffffff5 < uVar7 - 0x3a)) &&
       (((uVar4 = (uint)(param_4 >> 8), 0xffffffffffffffe5 < (ulonglong)(uVar4 & 0xdf) - 0x5b ||
         (uVar7 = param_4 >> 8 & 0xff, (int)uVar7 == 0x20)) || (0xfffffffffffffff5 < uVar7 - 0x3a)))
       ))) && (((0xffffffffffffffe5 < (ulonglong)((uint)param_4 & 0xdf) - 0x5b ||
                ((int)(param_4 & 0xff) == 0x20)) || (0xfffffffffffffff5 < (param_4 & 0xff) - 0x3a)))
     ) {
    uVar7 = param_4 >> 0x18 & 0xff;
    if (0x5e < (int)uVar7 - 0x20U) {
      uVar7 = 0x3f;
    }
    local_108[uVar6] = '\'';
    cVar11 = (char)(param_4 >> 0x10);
    if (0x5e < (uVar3 & 0xff) - 0x20) {
      cVar11 = '?';
    }
    local_108[uVar6 + 1] = (char)uVar7;
    cVar10 = (char)(param_4 >> 8);
    if (0x5e < (uVar4 & 0xff) - 0x20) {
      cVar10 = '?';
    }
    local_108[uVar6 + 2] = cVar11;
    local_108[uVar6 + 3] = cVar10;
    cVar11 = '?';
    if (((uint)param_4 & 0xff) - 0x20 < 0x5f) {
      cVar11 = (char)param_4;
    }
    local_108[uVar6 + 4] = cVar11;
    (local_108 + uVar6 + 5)[0] = '\'';
    (local_108 + uVar6 + 5)[1] = ':';
    uVar9 = uVar6 + 8;
    local_108[uVar6 + 7] = ' ';
  }
  else {
    pcVar8 = png_format_number(local_128,local_110,3,param_4);
    uVar6 = png_safecat(local_108,0xc4,uVar6,pcVar8);
    uVar9 = png_safecat(local_108,0xc4,uVar6,"h: ");
  }
  png_safecat(local_108,0xc4,uVar9,param_5);
  png_chunk_report(param_1,local_108,2 - (uint)(param_2 == (png_colorspace *)0x0));
  if ((local_38 ^ (ulonglong)auStack_148) == __security_cookie.value) {
    return extraout_EAX;
  }
  pcVar2 = (code *)swi(3);
  iVar5 = (*pcVar2)();
  return iVar5;
}

// png_colorspace_endpoints_match @ 140daf920

int __cdecl png_colorspace_endpoints_match(png_xy *param_1,png_xy *param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = 0;
  uVar2 = 0;
  if ((((param_1->whitex <= param_2->whitex + param_3 &&
         param_2->whitex - param_3 <= param_1->whitex) &&
       (param_1->whitey <= param_2->whitey + param_3 && param_2->whitey - param_3 <= param_1->whitey
       )) && (param_1->redx <= param_2->redx + param_3 && param_2->redx - param_3 <= param_1->redx))
     && (((uVar1 = uVar2,
          param_1->redy <= param_2->redy + param_3 && param_2->redy - param_3 <= param_1->redy &&
          (param_1->greenx <= param_2->greenx + param_3 &&
           param_2->greenx - param_3 <= param_1->greenx)) &&
         ((param_1->greeny <= param_2->greeny + param_3 &&
           param_2->greeny - param_3 <= param_1->greeny &&
          (param_1->bluex <= param_2->bluex + param_3 && param_2->bluex - param_3 <= param_1->bluex)
          ))))) {
    uVar1 = (uint)(param_1->bluey <= param_2->bluey + param_3 &&
                  param_2->bluey - param_3 <= param_1->bluey);
  }
  return uVar1;
}

// png_icc_check_length @ 140dafa50

int __cdecl
png_icc_check_length
          (png_struct_def_conflict *param_1,png_colorspace *param_2,char *param_3,uint param_4)

{
  char *pcVar1;
  
  if (param_4 < 0x84) {
    pcVar1 = "too short";
  }
  else {
    if (param_1->user_chunk_malloc_max == 0) {
      return 1;
    }
    if ((ulonglong)param_4 <= param_1->user_chunk_malloc_max) {
      return 1;
    }
    pcVar1 = "exceeds application limits";
  }
  png_icc_profile_error(param_1,param_2,param_3,(ulonglong)param_4,pcVar1);
  return 0;
}

// png_icc_check_header @ 140dafaa0

int __cdecl
png_icc_check_header
          (png_struct_def_conflict *param_1,png_colorspace *param_2,char *param_3,uint param_4,
          uchar *param_5,int param_6)

{
  uint uVar1;
  char *pcVar2;
  ulong64 uVar3;
  
  uVar1 = *(uint *)param_5;
  uVar1 = uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
  if (uVar1 != param_4) {
    uVar3 = (ulong64)uVar1;
    pcVar2 = "length does not match profile";
    goto LAB_140dafb0a;
  }
  if (((param_4 & 3) != 0) && (3 < param_5[8])) {
    uVar3 = (ulong64)param_4;
    pcVar2 = "invalid length";
    goto LAB_140dafb0a;
  }
  uVar1 = *(uint *)(param_5 + 0x80);
  uVar1 = uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
  if ((0x1555554a < uVar1) || (param_4 < uVar1 * 0xc + 0x84)) {
    uVar3 = (ulong64)uVar1;
    pcVar2 = "tag count too large";
    goto LAB_140dafb0a;
  }
  uVar1 = *(uint *)(param_5 + 0x40);
  uVar1 = uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
  if (0xfffe < uVar1) {
    uVar3 = (ulong64)uVar1;
    pcVar2 = "invalid rendering intent";
    goto LAB_140dafb0a;
  }
  if (3 < uVar1) {
    png_icc_profile_error
              (param_1,(png_colorspace *)0x0,param_3,(ulonglong)uVar1,"intent outside defined range"
              );
  }
  uVar1 = *(uint *)(param_5 + 0x24);
  uVar1 = uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
  if (uVar1 != 0x61637370) {
    uVar3 = (ulong64)uVar1;
    pcVar2 = "invalid signature";
    goto LAB_140dafb0a;
  }
  if (*(int *)(param_5 + 0x4c) != 0x2dd30000 || *(longlong *)(param_5 + 0x44) != 0x100d6f60000) {
    png_icc_profile_error(param_1,(png_colorspace *)0x0,param_3,0,"PCS illuminant is not D50");
  }
  uVar1 = *(uint *)(param_5 + 0x10);
  uVar1 = uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
  if (uVar1 == 0x47524159) {
    if ((param_6 & 2U) != 0) {
      pcVar2 = "Gray color space not permitted on RGB PNG";
      uVar3 = 0x47524159;
      goto LAB_140dafb0a;
    }
  }
  else {
    if (uVar1 != 0x52474220) {
      uVar3 = (ulong64)uVar1;
      pcVar2 = "invalid ICC profile color space";
      goto LAB_140dafb0a;
    }
    if ((param_6 & 2U) == 0) {
      pcVar2 = "RGB color space not permitted on grayscale PNG";
      uVar3 = 0x52474220;
      goto LAB_140dafb0a;
    }
  }
  uVar1 = *(uint *)(param_5 + 0xc);
  uVar1 = uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
  if ((int)uVar1 < 0x6e6d636c) {
    if (uVar1 == 0x61627374) {
      pcVar2 = "invalid embedded Abstract ICC profile";
      uVar3 = 0x61627374;
      goto LAB_140dafb0a;
    }
    if (uVar1 == 0x6c696e6b) {
      pcVar2 = "unexpected DeviceLink ICC profile class";
      uVar3 = 0x6c696e6b;
      goto LAB_140dafb0a;
    }
    if (uVar1 != 0x6d6e7472) goto LAB_140dafc77;
  }
  else if ((int)uVar1 < 0x73636e72) {
    if (uVar1 == 0x6e6d636c) {
      pcVar2 = "unexpected NamedColor ICC profile class";
      uVar3 = 0x6e6d636c;
LAB_140dafcb1:
      png_icc_profile_error(param_1,(png_colorspace *)0x0,param_3,uVar3,pcVar2);
    }
    else if (uVar1 != 0x70727472) goto LAB_140dafc77;
  }
  else if ((uVar1 != 0x73636e72) && (uVar1 != 0x73706163)) {
LAB_140dafc77:
    uVar3 = (ulong64)uVar1;
    pcVar2 = "unrecognized ICC profile class";
    goto LAB_140dafcb1;
  }
  uVar1 = *(uint *)(param_5 + 0x14);
  uVar1 = uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
  if (uVar1 == 0x4c616220) {
    return 1;
  }
  if (uVar1 == 0x58595a20) {
    return 1;
  }
  uVar3 = (ulong64)uVar1;
  pcVar2 = "unexpected ICC PCS encoding";
LAB_140dafb0a:
  png_icc_profile_error(param_1,param_2,param_3,uVar3,pcVar2);
  return 0;
}

// png_icc_check_tag_table @ 140dafd20

int __cdecl
png_icc_check_tag_table
          (png_struct_def_conflict *param_1,png_colorspace *param_2,char *param_3,uint param_4,
          uchar *param_5)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint *puVar5;
  
  uVar4 = *(uint *)(param_5 + 0x80);
  uVar4 = uVar4 >> 0x18 | (uVar4 & 0xff0000) >> 8 | (uVar4 & 0xff00) << 8 | uVar4 << 0x18;
  if (uVar4 != 0) {
    puVar5 = (uint *)(param_5 + 0x84);
    do {
      uVar2 = *puVar5;
      uVar2 = uVar2 >> 0x18 | (uVar2 & 0xff0000) >> 8 | (uVar2 & 0xff00) << 8 | uVar2 << 0x18;
      uVar3 = (uint)*(byte *)((longlong)puVar5 + 6) << 8 |
              (uint)*(byte *)((longlong)puVar5 + 5) << 0x10 | (uint)(byte)puVar5[1] << 0x18 |
              (uint)*(byte *)((longlong)puVar5 + 7);
      if ((param_4 < uVar3) ||
         (uVar1 = puVar5[2],
         param_4 - uVar3 <
         (uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18))) {
        png_icc_profile_error
                  (param_1,param_2,param_3,(ulonglong)uVar2,"ICC profile tag outside profile");
        return 0;
      }
      if ((*(byte *)((longlong)puVar5 + 7) & 3) != 0) {
        png_icc_profile_error
                  (param_1,(png_colorspace *)0x0,param_3,(ulonglong)uVar2,
                   "ICC profile tag start not a multiple of 4");
      }
      puVar5 = puVar5 + 3;
      uVar4 = uVar4 - 1;
    } while (uVar4 != 0);
  }
  return 1;
}

// png_icc_set_sRGB @ 140dafe10

void __cdecl
png_icc_set_sRGB(png_struct_def_conflict *param_1,png_colorspace *param_2,uchar *param_3,
                ulong param_4)

{
  uint uVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  char *pcVar5;
  uint uVar6;
  uint uVar7;
  longlong lVar8;
  
  if ((~param_1->options & 0x30) != 0) {
    uVar1 = *(uint *)(param_3 + 0x54);
    uVar6 = 0;
    uVar7 = 0x10000;
    lVar8 = 0x1e;
    do {
      if (((((uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18) ==
             *(uint *)(png_sRGB_delta + lVar8 + 0x1ee)) &&
           (uVar2 = *(uint *)(param_3 + 0x58),
           (uVar2 >> 0x18 | (uVar2 & 0xff0000) >> 8 | (uVar2 & 0xff00) << 8 | uVar2 << 0x18) ==
           *(uint *)(png_sRGB_delta + lVar8 + 0x1f2))) &&
          (uVar2 = *(uint *)(param_3 + 0x5c),
          (uVar2 >> 0x18 | (uVar2 & 0xff0000) >> 8 | (uVar2 & 0xff00) << 8 | uVar2 << 0x18) ==
          *(uint *)(png_sRGB_delta + lVar8 + 0x1f6))) &&
         (uVar2 = *(uint *)(param_3 + 0x60),
         (uVar2 >> 0x18 | (uVar2 & 0xff0000) >> 8 | (uVar2 & 0xff00) << 8 | uVar2 << 0x18) ==
         *(uint *)(png_sRGB_delta + lVar8 + 0x1fa))) {
        if (uVar6 == 0) {
          uVar6 = *(uint *)param_3;
          uVar7 = *(uint *)(param_3 + 0x40);
          uVar6 = uVar6 >> 0x18 | (uVar6 & 0xff0000) >> 8 | (uVar6 & 0xff00) << 8 | uVar6 << 0x18;
          uVar7 = uVar7 >> 0x18 | (uVar7 & 0xff0000) >> 8 | (uVar7 & 0xff00) << 8 | uVar7 << 0x18;
          if (uVar6 == *(uint *)(png_sRGB_delta + lVar8 + 0x1ea)) goto LAB_140dafebe;
        }
        else if (uVar6 == *(uint *)(png_sRGB_delta + lVar8 + 0x1ea)) {
LAB_140dafebe:
          if (uVar7 == *(ushort *)((longlong)png_sRGB_checks[0].md5 + lVar8 + -0xc)) {
            if (param_4 == 0) {
              uVar3 = adler32(0,0,0);
              param_4 = adler32(uVar3,param_3);
            }
            if (param_4 != *(ulong *)(png_sRGB_delta + lVar8 + 0x1e2)) {
LAB_140daff41:
              png_chunk_report(param_1,"Not recognizing known sRGB profile that has been edited",0);
              return;
            }
            uVar3 = crc32(0,0,0);
            iVar4 = crc32(uVar3,param_3);
            if (iVar4 != *(int *)(png_sRGB_delta + lVar8 + 0x1e6)) goto LAB_140daff41;
            if (png_sRGB_delta[lVar8 + 0x1ff] == '\0') {
              if (png_sRGB_delta[lVar8 + 0x1fe] != '\0') goto LAB_140daff65;
              pcVar5 = "out-of-date sRGB profile with no signature";
              iVar4 = 0;
            }
            else {
              pcVar5 = "known incorrect sRGB profile";
              iVar4 = 2;
            }
            png_chunk_report(param_1,pcVar5,iVar4);
LAB_140daff65:
            uVar1 = *(uint *)(param_3 + 0x40);
            png_colorspace_set_sRGB
                      (param_1,param_2,
                       uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 |
                       uVar1 << 0x18);
            return;
          }
        }
      }
      lVar8 = lVar8 + 0x20;
    } while (lVar8 != 0xfe);
  }
  return;
}

// png_colorspace_set_ICC @ 140daffa0

int __cdecl
png_colorspace_set_ICC
          (png_struct_def_conflict *param_1,png_colorspace *param_2,char *param_3,uint param_4,
          uchar *param_5,int param_6)

{
  int iVar1;
  int iVar2;
  
  iVar1 = 0;
  iVar2 = 0;
  if (-1 < (short)param_2->flags) {
    iVar2 = iVar1;
    if (param_4 < 0x84) {
      png_icc_profile_error(param_1,param_2,param_3,(ulonglong)param_4,"too short");
    }
    else {
      iVar1 = png_icc_check_header(param_1,param_2,param_3,param_4,param_5,param_6);
      if (iVar1 != 0) {
        iVar1 = png_icc_check_tag_table(param_1,param_2,param_3,param_4,param_5);
        if (iVar1 != 0) {
          png_icc_set_sRGB(param_1,param_2,param_5,0);
          iVar2 = 1;
        }
      }
    }
  }
  return iVar2;
}

// png_colorspace_set_rgb_coefficients @ 140db0050

void __cdecl png_colorspace_set_rgb_coefficients(png_struct_def_conflict *param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  double dVar9;
  double dVar10;
  
  if ((param_1->rgb_to_gray_coefficients_set != '\0') || (((param_1->colorspace).flags & 2) == 0)) {
    return;
  }
  iVar5 = (param_1->colorspace).end_points_XYZ.red_Y;
  if (-1 < iVar5) {
    iVar1 = (param_1->colorspace).end_points_XYZ.green_Y;
    iVar2 = (param_1->colorspace).end_points_XYZ.blue_Y;
    iVar4 = iVar1 + iVar5 + iVar2;
    if (0 < iVar4) {
      dVar10 = (double)iVar4;
      if (iVar5 == 0) {
        uVar6 = 0;
      }
      else {
        dVar9 = floor(((double)iVar5 * __real_40e0000000000000) / dVar10 + __real_3fe0000000000000);
        if ((__real_41dfffffffc00000 < dVar9) || (dVar9 < __real_c1e0000000000000))
        goto LAB_140db020a;
        uVar6 = (uint)dVar9;
      }
      if ((-1 < iVar1) && (uVar6 < 0x8001)) {
        if (iVar1 == 0) {
          uVar7 = 0;
        }
        else {
          dVar9 = floor(((double)iVar1 * __real_40e0000000000000) / dVar10 + __real_3fe0000000000000
                       );
          if ((__real_41dfffffffc00000 < dVar9) || (dVar9 < __real_c1e0000000000000))
          goto LAB_140db020a;
          uVar7 = (uint)dVar9;
        }
        if ((-1 < iVar2) && (uVar7 < 0x8001)) {
          if (iVar2 == 0) {
            uVar3 = 0;
            uVar8 = uVar7 + uVar6;
          }
          else {
            dVar10 = floor(((double)iVar2 * __real_40e0000000000000) / dVar10 +
                           __real_3fe0000000000000);
            if (((__real_41dfffffffc00000 < dVar10) || (dVar10 < __real_c1e0000000000000)) ||
               (uVar3 = (uint)dVar10, 0x8000 < uVar3)) goto LAB_140db020a;
            uVar8 = uVar7 + uVar6 + uVar3;
          }
          if (uVar8 < 0x8002) {
            iVar5 = -1;
            if ((uVar8 == 0x8001) || (iVar5 = 1, uVar8 < 0x8000)) {
              if ((uVar7 < uVar6) || (uVar7 < uVar3)) {
                if ((uVar6 < uVar7) || (uVar6 < uVar3)) {
                  uVar3 = uVar3 + iVar5;
                }
                else {
                  uVar6 = iVar5 + uVar6;
                }
              }
              else {
                uVar7 = iVar5 + uVar7;
              }
            }
            if (uVar3 + uVar7 + uVar6 == 0x8000) {
              param_1->rgb_to_gray_red_coeff = (ushort)uVar6;
              param_1->rgb_to_gray_green_coeff = (ushort)uVar7;
              return;
            }
                    /* WARNING: Subroutine does not return */
            png_error(param_1,"internal error handling cHRM coefficients");
          }
        }
      }
    }
  }
LAB_140db020a:
                    /* WARNING: Subroutine does not return */
  png_error(param_1,"internal error handling cHRM->XYZ");
}

// png_muldiv @ 140db0270

int __cdecl png_muldiv(int *param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  double dVar2;
  
  if (param_4 == 0) {
    return 0;
  }
  iVar1 = 0;
  if (param_3 != 0 && param_2 != 0) {
    dVar2 = floor(((double)param_3 * (double)param_2) / (double)param_4 + __real_3fe0000000000000);
    if (__real_41dfffffffc00000 < dVar2) {
      return 0;
    }
    if (dVar2 < __real_c1e0000000000000) {
      return 0;
    }
    iVar1 = (int)dVar2;
  }
  *param_1 = iVar1;
  return 1;
}

// png_check_IHDR @ 140db02f0

void __cdecl
png_check_IHDR(png_struct_def_conflict *param_1,uint param_2,uint param_3,int param_4,int param_5,
              int param_6,int param_7,int param_8)

{
  bool bVar1;
  char *pcVar2;
  uint uVar3;
  
  if (param_2 == 0) {
    pcVar2 = "Image width is zero in IHDR";
LAB_140db034d:
    png_warning(param_1,pcVar2);
    bVar1 = true;
    if (param_2 <= param_1->user_width_max) goto LAB_140db031a;
LAB_140db0363:
    png_warning(param_1,"Image width exceeds user limit in IHDR");
    bVar1 = true;
    if (param_3 != 0) goto LAB_140db031e;
LAB_140db037c:
    pcVar2 = "Image height is zero in IHDR";
LAB_140db038c:
    png_warning(param_1,pcVar2);
    bVar1 = true;
    if (param_1->user_height_max < param_3) goto LAB_140db03a2;
LAB_140db0328:
    if ((uint)param_4 < 0x11) goto LAB_140db03c7;
LAB_140db04dc:
    png_warning(param_1,"Invalid bit depth in IHDR");
    bVar1 = true;
  }
  else {
    bVar1 = false;
    if ((int)param_2 < 0) {
      pcVar2 = "Invalid image width in IHDR";
      goto LAB_140db034d;
    }
    if (param_1->user_width_max < param_2) goto LAB_140db0363;
LAB_140db031a:
    if (param_3 == 0) goto LAB_140db037c;
LAB_140db031e:
    if ((int)param_3 < 0) {
      pcVar2 = "Invalid image height in IHDR";
      goto LAB_140db038c;
    }
    if (param_3 <= param_1->user_height_max) goto LAB_140db0328;
LAB_140db03a2:
    png_warning(param_1,"Image height exceeds user limit in IHDR");
    bVar1 = true;
    if (0x10 < (uint)param_4) goto LAB_140db04dc;
LAB_140db03c7:
    if ((0x10116U >> (param_4 & 0x1fU) & 1) == 0) goto LAB_140db04dc;
  }
  uVar3 = param_5 & 0xfffffffb;
  if (6 < (uint)param_5 || uVar3 == 1) {
    png_warning(param_1,"Invalid color type in IHDR");
    bVar1 = true;
  }
  if (param_4 < 9 || param_5 != 3) {
    if ((7 < param_4) || (param_5 != 4 && uVar3 != 2)) goto LAB_140db0441;
  }
  png_warning(param_1,"Invalid color type/bit depth combination in IHDR");
  bVar1 = true;
LAB_140db0441:
  if (1 < param_6) {
    png_warning(param_1,"Unknown interlace method in IHDR");
    bVar1 = true;
  }
  if (param_7 != 0) {
    png_warning(param_1,"Unknown compression method in IHDR");
    bVar1 = true;
  }
  if (((param_1->mode & 0x1000) != 0) && (param_1->mng_features_permitted != 0)) {
    png_warning(param_1,"MNG features are not allowed in a PNG datastream");
  }
  if ((param_8 == 0) ||
     ((((param_8 == 0x40 && ((param_1->mng_features_permitted & 4) != 0)) && (uVar3 == 2)) &&
      ((param_1->mode & 0x1000) == 0)))) {
    if (!bVar1) {
      return;
    }
  }
  else {
    png_warning(param_1,"Unknown filter method in IHDR");
    if ((param_1->mode & 0x1000) != 0) {
      png_warning(param_1,"Invalid filter method in IHDR");
    }
  }
                    /* WARNING: Subroutine does not return */
  png_error(param_1,"Invalid IHDR data");
}

// png_check_fp_number @ 140db0540

int __cdecl png_check_fp_number(char *param_1,ulong64 param_2,int *param_3,ulong64 *param_4)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  
  uVar1 = *param_3;
  uVar4 = *param_4;
  uVar5 = uVar4;
  if (uVar4 < param_2) {
    do {
      uVar5 = uVar4;
      switch(param_1[uVar4]) {
      case '+':
        uVar3 = 4;
        break;
      default:
        goto switchD_140db05a4_caseD_2c;
      case '-':
        uVar3 = 0x84;
        break;
      case '.':
        uVar3 = 0x10;
        break;
      case '0':
        uVar3 = 8;
        break;
      case '1':
      case '2':
      case '3':
      case '4':
      case '5':
      case '6':
      case '7':
      case '8':
      case '9':
        uVar3 = 0x108;
        break;
      case 'E':
      case 'e':
        uVar3 = 0x20;
      }
      switch((uVar1 & 3) + (uVar3 & 0x3c)) {
      case 4:
        if ((uVar1 & 0x3c) != 0) goto switchD_140db05a4_caseD_2c;
LAB_140db0601:
        uVar1 = uVar1 | uVar3;
        break;
      default:
        goto switchD_140db05a4_caseD_2c;
      case 6:
        if ((uVar1 & 0x3c) != 0) goto switchD_140db05a4_caseD_2c;
        uVar1 = uVar1 | 4;
        break;
      case 8:
        uVar2 = uVar1 & 0x180 | 0x11;
        if ((uVar1 & 0x10) == 0) {
          uVar2 = uVar1;
        }
        uVar1 = uVar2 | uVar3 | 0x40;
        break;
      case 9:
        uVar1 = uVar1 | uVar3 | 0x40;
        break;
      case 10:
        uVar1 = uVar1 | 0x48;
        break;
      case 0x10:
        if ((uVar1 & 0x10) != 0) goto switchD_140db05a4_caseD_2c;
        if ((uVar1 & 8) != 0) goto LAB_140db0601;
        uVar1 = uVar1 & 0x1c0 | uVar3 | 1;
        break;
      case 0x20:
      case 0x21:
        if ((uVar1 & 8) == 0) goto switchD_140db05a4_caseD_2c;
        uVar1 = uVar1 & 0x1c0 | 2;
      }
      uVar4 = uVar4 + 1;
      uVar5 = param_2;
    } while (param_2 != uVar4);
  }
switchD_140db05a4_caseD_2c:
  *param_3 = uVar1;
  *param_4 = uVar5;
  return uVar1 >> 3 & 1;
}

// png_check_fp_string @ 140db0660

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

int __cdecl png_check_fp_string(char *param_1,ulong64 param_2)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  undefined1 auStack_48 [32];
  ulong64 local_28;
  int local_1c;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_48;
  local_1c = 0;
  local_28 = 0;
  iVar2 = png_check_fp_number(param_1,param_2,&local_1c,&local_28);
  iVar3 = 0;
  if ((iVar2 != 0) && ((local_28 == param_2 || (param_1[local_28] == '\0')))) {
    iVar3 = local_1c;
  }
  if ((local_18 ^ (ulonglong)auStack_48) != __security_cookie.value) {
    pcVar1 = (code *)swi(3);
    iVar3 = (*pcVar1)();
    return iVar3;
  }
  return iVar3;
}

// png_ascii_from_fp @ 140db06f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
png_ascii_from_fp(png_struct_def_conflict *param_1,char *param_2,ulong64 param_3,double param_4,
                 uint param_5)

{
  char *pcVar1;
  bool bVar2;
  code *pcVar3;
  short sVar4;
  short sVar5;
  short sVar6;
  short sVar7;
  short sVar8;
  short sVar9;
  short sVar10;
  short sVar11;
  short sVar12;
  short sVar13;
  short sVar14;
  short sVar15;
  short sVar16;
  short sVar17;
  short sVar18;
  short sVar19;
  short sVar20;
  short sVar21;
  short sVar22;
  short sVar23;
  short sVar24;
  short sVar25;
  short sVar26;
  short sVar27;
  short sVar28;
  short sVar29;
  short sVar30;
  short sVar31;
  short sVar32;
  short sVar33;
  short sVar34;
  short sVar35;
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
  undefined1 auVar50 [15];
  undefined1 auVar51 [15];
  undefined1 auVar52 [15];
  undefined1 auVar53 [11];
  undefined1 auVar54 [15];
  undefined1 auVar55 [11];
  undefined1 auVar56 [15];
  undefined1 auVar57 [15];
  undefined1 auVar58 [15];
  undefined1 auVar59 [15];
  longlong lVar60;
  double dVar61;
  double dVar62;
  double dVar63;
  double dVar64;
  double dVar65;
  uint uVar66;
  uint uVar67;
  ulonglong uVar68;
  uint uVar69;
  char cVar70;
  uint uVar71;
  char *pcVar72;
  char *pcVar73;
  ulonglong uVar74;
  uint uVar75;
  ulonglong uVar76;
  undefined1 (*pauVar77) [16];
  uint uVar78;
  uint uVar79;
  double dVar80;
  undefined1 auVar81 [11];
  undefined1 auVar83 [16];
  double dVar84;
  undefined1 auVar85 [11];
  undefined1 auVar87 [16];
  undefined1 auVar88 [16];
  undefined1 auVar89 [16];
  undefined1 auVar90 [16];
  double dVar91;
  undefined1 auStack_e8 [40];
  undefined8 local_c0;
  undefined8 local_b8;
  undefined4 local_b0;
  char acStack_ac [12];
  ulonglong local_a0;
  undefined1 auVar82 [15];
  undefined1 auVar86 [15];
  
  local_a0 = __security_cookie.value ^ (ulonglong)auStack_e8;
  uVar66 = 0x10;
  if (param_5 < 0x10) {
    uVar66 = param_5;
  }
  uVar69 = 0xf;
  if (param_5 != 0) {
    uVar69 = uVar66;
  }
  if (param_3 < uVar69 + 5) goto LAB_140db0f0b;
  if (param_4 < 0.0) {
    param_4 = (double)((ulonglong)param_4 ^ __xmm_80000000000000008000000000000000);
    *param_2 = '-';
    param_2 = param_2 + 1;
    param_3 = param_3 - 1;
  }
  dVar63 = __real_7fefffffffffffff;
  if ((param_4 < __real_0010000000000000) || (__real_7fefffffffffffff < param_4)) {
    if (param_4 < __real_0010000000000000) {
      param_2[0] = '0';
      param_2[1] = '\0';
      if ((local_a0 ^ (ulonglong)auStack_e8) == __security_cookie.value) {
        return;
      }
    }
    else {
      builtin_strncpy(param_2,"inf",4);
      if ((local_a0 ^ (ulonglong)auStack_e8) == __security_cookie.value) {
        return;
      }
    }
    goto LAB_140db0801;
  }
  local_c0 = param_1;
  frexp(param_4,&local_b0);
  dVar65 = __real_0010000000000000;
  dVar64 = __real_4022000000000000;
  dVar62 = __real_4024000000000000;
  dVar61 = __real_3fe0000000000000;
  uVar71 = local_b0 * 0x4d;
  local_b0 = (int)uVar71 >> 8;
  dVar91 = __real_3ff0000000000000;
  dVar84 = __real_4024000000000000;
  uVar66 = local_b0;
  if ((int)local_b0 < 0) {
    dVar80 = 0.0;
    if (local_b0 < 0xfffffecd) goto LAB_140db08b0;
    uVar79 = -local_b0;
LAB_140db085f:
    do {
      if ((uVar79 & 1) != 0) {
        dVar91 = dVar91 * dVar84;
      }
      bVar2 = 1 < uVar79;
      uVar79 = uVar79 >> 1;
      dVar84 = dVar84 * dVar84;
    } while (bVar2);
    if ((int)local_b0 < 0) {
      dVar91 = __real_3ff0000000000000 / dVar91;
    }
  }
  else {
    uVar79 = local_b0;
    if (0xff < uVar71) goto LAB_140db085f;
  }
joined_r0x000140db088a:
  do {
    dVar80 = dVar91;
    local_b0 = uVar66;
    if ((__real_0010000000000000 <= dVar80) && (param_4 <= dVar80)) break;
LAB_140db08b0:
    uVar66 = local_b0 + 1;
    if ((int)local_b0 < -1) {
      dVar91 = 0.0;
      if (uVar66 < 0xfffffecd) goto joined_r0x000140db088a;
      uVar71 = ~local_b0;
    }
    else {
      uVar71 = uVar66;
      dVar91 = __real_3ff0000000000000;
      if (uVar66 == 0) goto joined_r0x000140db088a;
    }
    uVar74 = (ulonglong)uVar71;
    dVar91 = __real_3ff0000000000000;
    dVar84 = __real_4024000000000000;
    do {
      if ((uVar74 & 1) != 0) {
        dVar91 = dVar91 * dVar84;
      }
      dVar84 = dVar84 * dVar84;
      uVar71 = (uint)uVar74;
      uVar74 = uVar74 >> 1;
    } while (1 < uVar71);
    if ((int)local_b0 < -1) {
      dVar91 = __real_3ff0000000000000 / dVar91;
    }
  } while (dVar91 <= dVar63);
  for (dVar80 = param_4 / dVar80; __real_3ff0000000000000 <= dVar80;
      dVar80 = dVar80 / __real_4024000000000000) {
    local_b0 = local_b0 + 1;
  }
  uVar71 = 0;
  uVar66 = 0;
  if (0xfffffffd < local_b0) {
    uVar66 = -local_b0;
    local_b0 = 0;
  }
  uVar79 = uVar66;
  do {
    pcVar72 = param_2;
    if (uVar66 + 1 + uVar71 < uVar79 + uVar69) {
      dVar80 = modf(dVar80 * dVar62,(double *)&local_b8);
LAB_140db0b20:
      if ((local_b8 != 0.0) || (NAN(local_b8))) {
LAB_140db0b2c:
        if (uVar66 == 0) {
          uVar66 = 0;
        }
        else {
          uVar67 = uVar66;
          if ((uVar66 & 1) != 0) {
            if (local_b0 != 0xffffffff) {
              if (local_b0 == 0) {
                *pcVar72 = '.';
                pcVar72 = pcVar72 + 1;
                param_3 = param_3 - 1;
              }
              local_b0 = local_b0 - 1;
            }
            *pcVar72 = '0';
            pcVar72 = pcVar72 + 1;
            uVar67 = uVar66 - 1;
          }
          if (uVar66 != 1) {
            do {
              if (local_b0 != 0xffffffff) {
                if (local_b0 == 0) {
                  *pcVar72 = '.';
                  pcVar72 = pcVar72 + 1;
                  param_3 = param_3 - 1;
                }
                local_b0 = local_b0 - 1;
              }
              pcVar73 = pcVar72 + 1;
              *pcVar72 = '0';
              if (local_b0 != 0xffffffff) {
                if (local_b0 == 0) {
                  pcVar72[1] = '.';
                  pcVar73 = pcVar72 + 2;
                  param_3 = param_3 - 1;
                }
                local_b0 = local_b0 - 1;
              }
              *pcVar73 = '0';
              pcVar72 = pcVar73 + 1;
              uVar67 = uVar67 - 2;
            } while (uVar67 != 0);
          }
        }
        goto LAB_140db0c20;
      }
      uVar66 = uVar66 + 1;
      uVar79 = uVar79 + (uVar71 == 0);
      if (uVar79 + uVar69 <= uVar71 + uVar66) break;
    }
    else {
      local_b8 = floor(dVar80 * dVar62 + dVar61);
      dVar80 = 0.0;
      if (local_b8 <= dVar64) goto LAB_140db0b20;
      if (uVar66 != 0) {
        uVar66 = uVar66 - 1;
        local_b8 = 1.0;
        uVar79 = uVar79 - (uVar71 == 0);
        goto LAB_140db0b2c;
      }
      uVar67 = local_b0;
      uVar75 = local_b0;
      uVar78 = uVar71;
      if (uVar71 == 0) {
        uVar71 = 0;
      }
      else {
        do {
          pcVar72 = param_2 + -1;
          cVar70 = param_2[-1];
          if (uVar75 == 0xffffffff) {
            uVar75 = 0xffffffff;
            if (cVar70 == '.') {
              cVar70 = param_2[-2];
              pcVar72 = param_2 + -2;
              param_3 = param_3 + 1;
              local_b0 = 1;
              uVar67 = 1;
              uVar75 = 1;
            }
          }
          else {
            uVar67 = uVar75 + 1;
            local_b0 = uVar67;
            uVar75 = uVar67;
          }
          uVar71 = uVar78 - 1;
          local_b8 = (double)(cVar70 + -0x2f);
          param_2 = pcVar72;
        } while ((uVar78 != 1) && (uVar78 = uVar71, '8' < cVar70));
        if (cVar70 < '9') goto LAB_140db0b20;
      }
      if (uVar67 == 0xffffffff) {
        pcVar72 = param_2 + -1;
        if (param_2[-1] == '.') {
          param_3 = param_3 + 1;
          local_b0 = 1;
        }
      }
      else {
        local_b0 = uVar67 + 1;
        pcVar72 = param_2;
      }
      local_b8 = 1.0;
      uVar66 = 0;
      dVar80 = 0.0;
LAB_140db0c20:
      if (local_b0 != 0xffffffff) {
        if (local_b0 == 0) {
          *pcVar72 = '.';
          pcVar72 = pcVar72 + 1;
          param_3 = param_3 - 1;
        }
        local_b0 = local_b0 - 1;
      }
      *pcVar72 = (char)(int)local_b8 + '0';
      pcVar72 = pcVar72 + 1;
      uVar71 = (uVar71 - uVar79) + uVar66 + 1;
      uVar66 = 0;
      uVar79 = 0;
      if (uVar69 <= uVar71) break;
    }
    param_2 = pcVar72;
  } while (dVar65 < dVar80);
  uVar66 = local_b0;
  if (local_b0 + 1 < 4) {
    while (local_b0 = uVar66 - 1, 0 < (int)uVar66) {
      *pcVar72 = '0';
      pcVar72 = pcVar72 + 1;
      uVar66 = local_b0;
    }
  }
  else {
    *pcVar72 = 'E';
    uVar74 = param_3 + ~(ulonglong)uVar71;
    if ((int)local_b0 < 0) {
      pcVar72[1] = '-';
      pcVar73 = pcVar72 + 2;
      uVar74 = uVar74 - 1;
      uVar66 = -local_b0;
    }
    else {
      pcVar73 = pcVar72 + 1;
    }
    pcVar72 = pcVar73;
    param_1 = local_c0;
    if (uVar66 == 0) {
      if (uVar74 == 0) goto LAB_140db0f0b;
    }
    else {
      uVar69 = 0;
      do {
        uVar68 = (ulonglong)uVar69;
        uVar69 = uVar69 + 1;
        acStack_ac[uVar68 + 2] = (char)uVar66 + (char)(uVar66 / 10) * -10 | 0x30;
        bVar2 = 9 < uVar66;
        uVar66 = uVar66 / 10;
      } while (bVar2);
      uVar68 = (ulonglong)uVar69;
      if (uVar74 <= uVar68) {
LAB_140db0f0b:
                    /* WARNING: Subroutine does not return */
        png_error(param_1,"ASCII conversion buffer too small");
      }
      if (uVar69 != 0) {
        if ((0x1f < uVar69) &&
           (acStack_ac + uVar68 + 2 <= pcVar73 || pcVar73 + uVar68 <= acStack_ac + 2)) {
          pcVar72 = pcVar73 + (uVar69 & 0xffffffe0);
          pauVar77 = (undefined1 (*) [16])((longlong)&local_c0 + uVar68 + 6);
          uVar74 = 0;
          do {
            auVar83 = pauVar77[-1];
            auVar87 = *pauVar77;
            auVar36[0xd] = 0;
            auVar36._0_13_ = auVar87._0_13_;
            auVar36[0xe] = auVar87[7];
            auVar38[0xc] = auVar87[6];
            auVar38._0_12_ = auVar87._0_12_;
            auVar38._13_2_ = auVar36._13_2_;
            auVar40[0xb] = 0;
            auVar40._0_11_ = auVar87._0_11_;
            auVar40._12_3_ = auVar38._12_3_;
            auVar42[10] = auVar87[5];
            auVar42._0_10_ = auVar87._0_10_;
            auVar42._11_4_ = auVar40._11_4_;
            auVar44[9] = 0;
            auVar44._0_9_ = auVar87._0_9_;
            auVar44._10_5_ = auVar42._10_5_;
            auVar46[8] = auVar87[4];
            auVar46._0_8_ = auVar87._0_8_;
            auVar46._9_6_ = auVar44._9_6_;
            auVar89[7] = 0;
            auVar89._0_7_ = auVar46._8_7_;
            auVar52._7_8_ = 0;
            auVar52._0_7_ = auVar46._8_7_;
            auVar56._1_8_ = SUB158(auVar52 << 0x40,7);
            auVar56[0] = auVar87[3];
            auVar56._9_6_ = 0;
            auVar53._1_10_ = SUB1510(auVar56 << 0x30,5);
            auVar53[0] = auVar87[2];
            auVar57._11_4_ = 0;
            auVar57._0_11_ = auVar53;
            auVar48[2] = auVar87[1];
            auVar48._0_2_ = auVar87._0_2_;
            auVar48._3_12_ = SUB1512(auVar57 << 0x20,3);
            auVar50._2_13_ = auVar48._2_13_;
            auVar50._0_2_ = auVar87._0_2_ & 0xff;
            auVar89._8_4_ = auVar50._0_4_;
            auVar89._12_4_ = auVar53._0_4_;
            auVar88 = pshuflw(auVar89,auVar89,0x1b);
            auVar89 = pshufhw(auVar88,auVar88,0x1b);
            auVar88[8] = auVar87[8];
            auVar88[9] = 0;
            auVar88[10] = auVar87[9];
            auVar85._0_10_ = (unkuint10)auVar87[0xc] << 0x40;
            auVar85[10] = auVar87[0xd];
            auVar86[0xb] = 0;
            auVar86._0_11_ = auVar85;
            auVar86[0xc] = auVar87[0xe];
            auVar86[0xd] = 0;
            auVar86[0xe] = auVar87[0xf];
            auVar88[3] = 0;
            auVar88._0_3_ = auVar85._8_3_;
            auVar88._4_3_ = auVar86._12_3_;
            auVar88[7] = 0;
            auVar88[0xb] = 0;
            auVar88._12_3_ = (int3)(CONCAT16(auVar87[0xb],(uint6)auVar87[10] << 0x20) >> 0x20);
            auVar88[0xf] = 0;
            auVar87 = pshuflw(auVar88,auVar88,0x1b);
            auVar88 = pshufhw(auVar87,auVar87,0x1b);
            sVar4 = auVar88._0_2_;
            sVar6 = auVar88._2_2_;
            sVar8 = auVar88._4_2_;
            sVar10 = auVar88._6_2_;
            sVar12 = auVar88._8_2_;
            sVar14 = auVar88._10_2_;
            sVar16 = auVar88._12_2_;
            sVar18 = auVar88._14_2_;
            sVar20 = auVar89._0_2_;
            sVar22 = auVar89._2_2_;
            sVar24 = auVar89._4_2_;
            sVar26 = auVar89._6_2_;
            sVar28 = auVar89._8_2_;
            sVar30 = auVar89._10_2_;
            sVar32 = auVar89._12_2_;
            sVar34 = auVar89._14_2_;
            auVar37[0xd] = 0;
            auVar37._0_13_ = auVar83._0_13_;
            auVar37[0xe] = auVar83[7];
            auVar39[0xc] = auVar83[6];
            auVar39._0_12_ = auVar83._0_12_;
            auVar39._13_2_ = auVar37._13_2_;
            auVar41[0xb] = 0;
            auVar41._0_11_ = auVar83._0_11_;
            auVar41._12_3_ = auVar39._12_3_;
            auVar43[10] = auVar83[5];
            auVar43._0_10_ = auVar83._0_10_;
            auVar43._11_4_ = auVar41._11_4_;
            auVar45[9] = 0;
            auVar45._0_9_ = auVar83._0_9_;
            auVar45._10_5_ = auVar43._10_5_;
            auVar47[8] = auVar83[4];
            auVar47._0_8_ = auVar83._0_8_;
            auVar47._9_6_ = auVar45._9_6_;
            auVar90[7] = 0;
            auVar90._0_7_ = auVar47._8_7_;
            auVar54._7_8_ = 0;
            auVar54._0_7_ = auVar47._8_7_;
            auVar58._1_8_ = SUB158(auVar54 << 0x40,7);
            auVar58[0] = auVar83[3];
            auVar58._9_6_ = 0;
            auVar55._1_10_ = SUB1510(auVar58 << 0x30,5);
            auVar55[0] = auVar83[2];
            auVar59._11_4_ = 0;
            auVar59._0_11_ = auVar55;
            auVar49[2] = auVar83[1];
            auVar49._0_2_ = auVar83._0_2_;
            auVar49._3_12_ = SUB1512(auVar59 << 0x20,3);
            auVar51._2_13_ = auVar49._2_13_;
            auVar51._0_2_ = auVar83._0_2_ & 0xff;
            auVar90._8_4_ = auVar51._0_4_;
            auVar90._12_4_ = auVar55._0_4_;
            auVar87 = pshuflw(auVar90,auVar90,0x1b);
            auVar90 = pshufhw(auVar87,auVar87,0x1b);
            auVar87[8] = auVar83[8];
            auVar87[9] = 0;
            auVar87[10] = auVar83[9];
            auVar81._0_10_ = (unkuint10)auVar83[0xc] << 0x40;
            auVar81[10] = auVar83[0xd];
            auVar82[0xb] = 0;
            auVar82._0_11_ = auVar81;
            auVar82[0xc] = auVar83[0xe];
            auVar82[0xd] = 0;
            auVar82[0xe] = auVar83[0xf];
            auVar87[3] = 0;
            auVar87._0_3_ = auVar81._8_3_;
            auVar87._4_3_ = auVar82._12_3_;
            auVar87[7] = 0;
            auVar87[0xb] = 0;
            auVar87._12_3_ = (int3)(CONCAT16(auVar83[0xb],(uint6)auVar83[10] << 0x20) >> 0x20);
            auVar87[0xf] = 0;
            auVar83 = pshuflw(auVar87,auVar87,0x1b);
            auVar83 = pshufhw(auVar83,auVar83,0x1b);
            sVar5 = auVar83._0_2_;
            sVar7 = auVar83._2_2_;
            sVar9 = auVar83._4_2_;
            sVar11 = auVar83._6_2_;
            sVar13 = auVar83._8_2_;
            sVar15 = auVar83._10_2_;
            sVar17 = auVar83._12_2_;
            sVar19 = auVar83._14_2_;
            sVar21 = auVar90._0_2_;
            sVar23 = auVar90._2_2_;
            sVar25 = auVar90._4_2_;
            sVar27 = auVar90._6_2_;
            sVar29 = auVar90._8_2_;
            sVar31 = auVar90._10_2_;
            sVar33 = auVar90._12_2_;
            sVar35 = auVar90._14_2_;
            pcVar1 = pcVar73 + uVar74;
            *pcVar1 = (0 < sVar4) * (sVar4 < 0x100) * auVar88[0] - (0xff < sVar4);
            pcVar1[1] = (0 < sVar6) * (sVar6 < 0x100) * auVar88[2] - (0xff < sVar6);
            pcVar1[2] = (0 < sVar8) * (sVar8 < 0x100) * auVar88[4] - (0xff < sVar8);
            pcVar1[3] = (0 < sVar10) * (sVar10 < 0x100) * auVar88[6] - (0xff < sVar10);
            pcVar1[4] = (0 < sVar12) * (sVar12 < 0x100) * auVar88[8] - (0xff < sVar12);
            pcVar1[5] = (0 < sVar14) * (sVar14 < 0x100) * auVar88[10] - (0xff < sVar14);
            pcVar1[6] = (0 < sVar16) * (sVar16 < 0x100) * auVar88[0xc] - (0xff < sVar16);
            pcVar1[7] = (0 < sVar18) * (sVar18 < 0x100) * auVar88[0xe] - (0xff < sVar18);
            pcVar1[8] = (0 < sVar20) * (sVar20 < 0x100) * auVar89[0] - (0xff < sVar20);
            pcVar1[9] = (0 < sVar22) * (sVar22 < 0x100) * auVar89[2] - (0xff < sVar22);
            pcVar1[10] = (0 < sVar24) * (sVar24 < 0x100) * auVar89[4] - (0xff < sVar24);
            pcVar1[0xb] = (0 < sVar26) * (sVar26 < 0x100) * auVar89[6] - (0xff < sVar26);
            pcVar1[0xc] = (0 < sVar28) * (sVar28 < 0x100) * auVar89[8] - (0xff < sVar28);
            pcVar1[0xd] = (0 < sVar30) * (sVar30 < 0x100) * auVar89[10] - (0xff < sVar30);
            pcVar1[0xe] = (0 < sVar32) * (sVar32 < 0x100) * auVar89[0xc] - (0xff < sVar32);
            pcVar1[0xf] = (0 < sVar34) * (sVar34 < 0x100) * auVar89[0xe] - (0xff < sVar34);
            pcVar1 = pcVar73 + uVar74 + 0x10;
            *pcVar1 = (0 < sVar5) * (sVar5 < 0x100) * auVar83[0] - (0xff < sVar5);
            pcVar1[1] = (0 < sVar7) * (sVar7 < 0x100) * auVar83[2] - (0xff < sVar7);
            pcVar1[2] = (0 < sVar9) * (sVar9 < 0x100) * auVar83[4] - (0xff < sVar9);
            pcVar1[3] = (0 < sVar11) * (sVar11 < 0x100) * auVar83[6] - (0xff < sVar11);
            pcVar1[4] = (0 < sVar13) * (sVar13 < 0x100) * auVar83[8] - (0xff < sVar13);
            pcVar1[5] = (0 < sVar15) * (sVar15 < 0x100) * auVar83[10] - (0xff < sVar15);
            pcVar1[6] = (0 < sVar17) * (sVar17 < 0x100) * auVar83[0xc] - (0xff < sVar17);
            pcVar1[7] = (0 < sVar19) * (sVar19 < 0x100) * auVar83[0xe] - (0xff < sVar19);
            pcVar1[8] = (0 < sVar21) * (sVar21 < 0x100) * auVar90[0] - (0xff < sVar21);
            pcVar1[9] = (0 < sVar23) * (sVar23 < 0x100) * auVar90[2] - (0xff < sVar23);
            pcVar1[10] = (0 < sVar25) * (sVar25 < 0x100) * auVar90[4] - (0xff < sVar25);
            pcVar1[0xb] = (0 < sVar27) * (sVar27 < 0x100) * auVar90[6] - (0xff < sVar27);
            pcVar1[0xc] = (0 < sVar29) * (sVar29 < 0x100) * auVar90[8] - (0xff < sVar29);
            pcVar1[0xd] = (0 < sVar31) * (sVar31 < 0x100) * auVar90[10] - (0xff < sVar31);
            pcVar1[0xe] = (0 < sVar33) * (sVar33 < 0x100) * auVar90[0xc] - (0xff < sVar33);
            pcVar1[0xf] = (0 < sVar35) * (sVar35 < 0x100) * auVar90[0xe] - (0xff < sVar35);
            uVar74 = uVar74 + 0x20;
            pauVar77 = pauVar77 + -2;
          } while ((uVar69 & 0xffffffe0) != uVar74);
          uVar68 = (ulonglong)(uVar69 & 0x1f);
          pcVar73 = pcVar72;
          if ((uVar69 & 0xffffffe0) == uVar69) goto LAB_140db0df0;
        }
        uVar74 = uVar68 - 1;
        for (uVar76 = uVar68 & 7; uVar76 != 0; uVar76 = uVar76 - 1) {
          lVar60 = uVar68 + 1;
          uVar68 = uVar68 - 1;
          *pcVar73 = acStack_ac[lVar60];
          pcVar73 = pcVar73 + 1;
        }
        pcVar72 = pcVar73;
        if (6 < uVar74) {
          do {
            *pcVar73 = acStack_ac[uVar68 + 1];
            pcVar73[1] = acStack_ac[uVar68];
            pcVar73[2] = acStack_ac[uVar68 - 1];
            pcVar73[3] = acStack_ac[uVar68 - 2];
            pcVar73[4] = acStack_ac[uVar68 - 3];
            pcVar73[5] = acStack_ac[uVar68 - 4];
            pcVar73[6] = *(char *)((longlong)&local_b8 + uVar68 + 7);
            pcVar72 = pcVar73 + 8;
            pcVar73[7] = *(char *)((longlong)&local_b8 + uVar68 + 6);
            uVar68 = uVar68 - 8;
            pcVar73 = pcVar72;
          } while (uVar68 != 0);
        }
      }
    }
  }
LAB_140db0df0:
  *pcVar72 = '\0';
  if ((local_a0 ^ (ulonglong)auStack_e8) == __security_cookie.value) {
    return;
  }
LAB_140db0801:
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}

// png_ascii_from_fixed @ 140db0f20

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
png_ascii_from_fixed(png_struct_def_conflict *param_1,char *param_2,ulong64 param_3,int param_4)

{
  uint uVar1;
  char *pcVar2;
  bool bVar3;
  code *pcVar4;
  short sVar5;
  short sVar6;
  short sVar7;
  short sVar8;
  short sVar9;
  short sVar10;
  short sVar11;
  short sVar12;
  short sVar13;
  short sVar14;
  short sVar15;
  short sVar16;
  short sVar17;
  short sVar18;
  short sVar19;
  short sVar20;
  short sVar21;
  short sVar22;
  short sVar23;
  short sVar24;
  short sVar25;
  short sVar26;
  short sVar27;
  short sVar28;
  short sVar29;
  short sVar30;
  short sVar31;
  short sVar32;
  short sVar33;
  short sVar34;
  short sVar35;
  short sVar36;
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
  undefined1 auVar50 [15];
  undefined1 auVar51 [15];
  undefined1 auVar52 [15];
  undefined1 auVar53 [15];
  undefined1 auVar54 [15];
  undefined1 auVar55 [15];
  undefined1 auVar56 [15];
  undefined1 auVar57 [15];
  undefined1 auVar58 [15];
  undefined1 auVar59 [15];
  undefined1 auVar60 [15];
  undefined1 auVar61 [15];
  undefined1 auVar62 [15];
  undefined1 auVar63 [15];
  undefined1 auVar64 [15];
  undefined1 auVar65 [15];
  undefined1 auVar66 [15];
  undefined1 auVar67 [15];
  undefined1 auVar68 [15];
  undefined1 auVar69 [15];
  undefined1 auVar70 [11];
  undefined1 auVar71 [15];
  undefined1 auVar72 [11];
  undefined1 auVar73 [15];
  undefined1 auVar74 [11];
  undefined1 auVar75 [15];
  undefined1 auVar76 [11];
  undefined1 auVar77 [15];
  undefined1 auVar78 [15];
  undefined1 auVar79 [15];
  undefined1 auVar80 [15];
  undefined1 auVar81 [15];
  undefined1 auVar82 [15];
  undefined1 auVar83 [15];
  undefined1 auVar84 [15];
  ulonglong uVar85;
  char *_Dst;
  uint uVar86;
  char *pcVar87;
  uint uVar88;
  uint uVar89;
  uint uVar90;
  ulonglong uVar91;
  ulonglong uVar92;
  uint uVar93;
  ulonglong uVar94;
  undefined1 (*pauVar95) [16];
  undefined1 auVar96 [11];
  undefined1 auVar97 [11];
  undefined1 auVar100 [16];
  undefined1 auVar101 [16];
  undefined1 auVar102 [11];
  undefined1 auVar103 [11];
  undefined1 auVar106 [16];
  undefined1 auVar107 [16];
  undefined1 auVar108 [16];
  undefined1 auVar109 [16];
  undefined1 auVar110 [16];
  undefined1 auVar111 [16];
  undefined1 auVar112 [16];
  undefined1 uStack_58;
  undefined1 auStack_57 [15];
  undefined1 auStack_48 [15];
  char acStack_39 [17];
  ulonglong local_28;
  undefined1 auVar98 [15];
  undefined1 auVar99 [15];
  undefined1 auVar104 [15];
  undefined1 auVar105 [15];
  
  local_28 = __security_cookie.value ^ (ulonglong)&uStack_58;
  if (param_3 < 0xd) {
                    /* WARNING: Subroutine does not return */
    png_error(param_1,"ASCII conversion buffer too small");
  }
  if (param_4 < 0) {
    *param_2 = '-';
    param_2 = param_2 + 1;
    param_4 = -param_4;
    acStack_39[9] = '\0';
    acStack_39[10] = '\0';
    acStack_39[1] = '\0';
    acStack_39[2] = '\0';
    acStack_39[3] = '\0';
    acStack_39[4] = '\0';
    acStack_39[5] = '\0';
    acStack_39[6] = '\0';
    acStack_39[7] = '\0';
    acStack_39[8] = '\0';
LAB_140db0f77:
    acStack_39[9] = '\0';
    acStack_39[10] = '\0';
    acStack_39[1] = '\0';
    acStack_39[2] = '\0';
    acStack_39[3] = '\0';
    acStack_39[4] = '\0';
    acStack_39[5] = '\0';
    acStack_39[6] = '\0';
    acStack_39[7] = '\0';
    acStack_39[8] = '\0';
    uVar88 = 0x10;
    uVar85 = 0;
    do {
      uVar89 = (int)uVar85 + 1;
      uVar91 = (ulonglong)uVar89;
      acStack_39[uVar85 + 1] = (char)((uint)param_4 % 10) + '0';
      uVar90 = uVar88;
      if ((uint)param_4 % 10 != 0) {
        uVar90 = uVar89;
      }
      if (uVar88 != 0x10) {
        uVar90 = uVar88;
      }
      uVar88 = uVar90;
      bVar3 = 9 < (uint)param_4;
      uVar85 = uVar91;
      param_4 = (uint)param_4 / 10;
    } while (bVar3);
    if (uVar89 != 0) {
      pcVar87 = param_2;
      if (5 < uVar89) {
        uVar92 = (ulonglong)uVar89;
        uVar85 = uVar92 - 5;
        if (0x1f < uVar85) {
          uVar94 = uVar85 & 0xffffffffffffffe0;
          pauVar95 = (undefined1 (*) [16])(auStack_48 + uVar92);
          uVar91 = 0;
          do {
            auVar101 = pauVar95[-1];
            auVar107 = *pauVar95;
            auVar37[0xd] = 0;
            auVar37._0_13_ = auVar107._0_13_;
            auVar37[0xe] = auVar107[7];
            auVar41[0xc] = auVar107[6];
            auVar41._0_12_ = auVar107._0_12_;
            auVar41._13_2_ = auVar37._13_2_;
            auVar45[0xb] = 0;
            auVar45._0_11_ = auVar107._0_11_;
            auVar45._12_3_ = auVar41._12_3_;
            auVar49[10] = auVar107[5];
            auVar49._0_10_ = auVar107._0_10_;
            auVar49._11_4_ = auVar45._11_4_;
            auVar53[9] = 0;
            auVar53._0_9_ = auVar107._0_9_;
            auVar53._10_5_ = auVar49._10_5_;
            auVar57[8] = auVar107[4];
            auVar57._0_8_ = auVar107._0_8_;
            auVar57._9_6_ = auVar53._9_6_;
            auVar112[7] = 0;
            auVar112._0_7_ = auVar57._8_7_;
            auVar69._7_8_ = 0;
            auVar69._0_7_ = auVar57._8_7_;
            auVar77._1_8_ = SUB158(auVar69 << 0x40,7);
            auVar77[0] = auVar107[3];
            auVar77._9_6_ = 0;
            auVar70._1_10_ = SUB1510(auVar77 << 0x30,5);
            auVar70[0] = auVar107[2];
            auVar78._11_4_ = 0;
            auVar78._0_11_ = auVar70;
            auVar61[2] = auVar107[1];
            auVar61._0_2_ = auVar107._0_2_;
            auVar61._3_12_ = SUB1512(auVar78 << 0x20,3);
            auVar65._2_13_ = auVar61._2_13_;
            auVar65._0_2_ = auVar107._0_2_ & 0xff;
            auVar112._8_4_ = auVar65._0_4_;
            auVar112._12_4_ = auVar70._0_4_;
            auVar110 = pshuflw(auVar112,auVar112,0x1b);
            auVar112 = pshufhw(auVar110,auVar110,0x1b);
            auVar110[8] = auVar107[8];
            auVar110[9] = 0;
            auVar110[10] = auVar107[9];
            auVar102._0_10_ = (unkuint10)auVar107[0xc] << 0x40;
            auVar102[10] = auVar107[0xd];
            auVar104[0xb] = 0;
            auVar104._0_11_ = auVar102;
            auVar104[0xc] = auVar107[0xe];
            auVar104[0xd] = 0;
            auVar104[0xe] = auVar107[0xf];
            auVar110[3] = 0;
            auVar110._0_3_ = auVar102._8_3_;
            auVar110._4_3_ = auVar104._12_3_;
            auVar110[7] = 0;
            auVar110[0xb] = 0;
            auVar110._12_3_ = (int3)(CONCAT16(auVar107[0xb],(uint6)auVar107[10] << 0x20) >> 0x20);
            auVar110[0xf] = 0;
            auVar107 = pshuflw(auVar110,auVar110,0x1b);
            auVar110 = pshufhw(auVar107,auVar107,0x1b);
            sVar5 = auVar110._0_2_;
            sVar7 = auVar110._2_2_;
            sVar9 = auVar110._4_2_;
            sVar11 = auVar110._6_2_;
            sVar13 = auVar110._8_2_;
            sVar15 = auVar110._10_2_;
            sVar17 = auVar110._12_2_;
            sVar19 = auVar110._14_2_;
            sVar21 = auVar112._0_2_;
            sVar23 = auVar112._2_2_;
            sVar25 = auVar112._4_2_;
            sVar27 = auVar112._6_2_;
            sVar29 = auVar112._8_2_;
            sVar31 = auVar112._10_2_;
            sVar33 = auVar112._12_2_;
            sVar35 = auVar112._14_2_;
            auVar38[0xd] = 0;
            auVar38._0_13_ = auVar101._0_13_;
            auVar38[0xe] = auVar101[7];
            auVar42[0xc] = auVar101[6];
            auVar42._0_12_ = auVar101._0_12_;
            auVar42._13_2_ = auVar38._13_2_;
            auVar46[0xb] = 0;
            auVar46._0_11_ = auVar101._0_11_;
            auVar46._12_3_ = auVar42._12_3_;
            auVar50[10] = auVar101[5];
            auVar50._0_10_ = auVar101._0_10_;
            auVar50._11_4_ = auVar46._11_4_;
            auVar54[9] = 0;
            auVar54._0_9_ = auVar101._0_9_;
            auVar54._10_5_ = auVar50._10_5_;
            auVar58[8] = auVar101[4];
            auVar58._0_8_ = auVar101._0_8_;
            auVar58._9_6_ = auVar54._9_6_;
            auVar108[7] = 0;
            auVar108._0_7_ = auVar58._8_7_;
            auVar71._7_8_ = 0;
            auVar71._0_7_ = auVar58._8_7_;
            auVar79._1_8_ = SUB158(auVar71 << 0x40,7);
            auVar79[0] = auVar101[3];
            auVar79._9_6_ = 0;
            auVar72._1_10_ = SUB1510(auVar79 << 0x30,5);
            auVar72[0] = auVar101[2];
            auVar80._11_4_ = 0;
            auVar80._0_11_ = auVar72;
            auVar62[2] = auVar101[1];
            auVar62._0_2_ = auVar101._0_2_;
            auVar62._3_12_ = SUB1512(auVar80 << 0x20,3);
            auVar66._2_13_ = auVar62._2_13_;
            auVar66._0_2_ = auVar101._0_2_ & 0xff;
            auVar108._8_4_ = auVar66._0_4_;
            auVar108._12_4_ = auVar72._0_4_;
            auVar107 = pshuflw(auVar108,auVar108,0x1b);
            auVar108 = pshufhw(auVar107,auVar107,0x1b);
            auVar107[8] = auVar101[8];
            auVar107[9] = 0;
            auVar107[10] = auVar101[9];
            auVar96._0_10_ = (unkuint10)auVar101[0xc] << 0x40;
            auVar96[10] = auVar101[0xd];
            auVar98[0xb] = 0;
            auVar98._0_11_ = auVar96;
            auVar98[0xc] = auVar101[0xe];
            auVar98[0xd] = 0;
            auVar98[0xe] = auVar101[0xf];
            auVar107[3] = 0;
            auVar107._0_3_ = auVar96._8_3_;
            auVar107._4_3_ = auVar98._12_3_;
            auVar107[7] = 0;
            auVar107[0xb] = 0;
            auVar107._12_3_ = (int3)(CONCAT16(auVar101[0xb],(uint6)auVar101[10] << 0x20) >> 0x20);
            auVar107[0xf] = 0;
            auVar101 = pshuflw(auVar107,auVar107,0x1b);
            auVar101 = pshufhw(auVar101,auVar101,0x1b);
            sVar6 = auVar101._0_2_;
            sVar8 = auVar101._2_2_;
            sVar10 = auVar101._4_2_;
            sVar12 = auVar101._6_2_;
            sVar14 = auVar101._8_2_;
            sVar16 = auVar101._10_2_;
            sVar18 = auVar101._12_2_;
            sVar20 = auVar101._14_2_;
            sVar22 = auVar108._0_2_;
            sVar24 = auVar108._2_2_;
            sVar26 = auVar108._4_2_;
            sVar28 = auVar108._6_2_;
            sVar30 = auVar108._8_2_;
            sVar32 = auVar108._10_2_;
            sVar34 = auVar108._12_2_;
            sVar36 = auVar108._14_2_;
            pcVar87 = param_2 + uVar91;
            *pcVar87 = (0 < sVar5) * (sVar5 < 0x100) * auVar110[0] - (0xff < sVar5);
            pcVar87[1] = (0 < sVar7) * (sVar7 < 0x100) * auVar110[2] - (0xff < sVar7);
            pcVar87[2] = (0 < sVar9) * (sVar9 < 0x100) * auVar110[4] - (0xff < sVar9);
            pcVar87[3] = (0 < sVar11) * (sVar11 < 0x100) * auVar110[6] - (0xff < sVar11);
            pcVar87[4] = (0 < sVar13) * (sVar13 < 0x100) * auVar110[8] - (0xff < sVar13);
            pcVar87[5] = (0 < sVar15) * (sVar15 < 0x100) * auVar110[10] - (0xff < sVar15);
            pcVar87[6] = (0 < sVar17) * (sVar17 < 0x100) * auVar110[0xc] - (0xff < sVar17);
            pcVar87[7] = (0 < sVar19) * (sVar19 < 0x100) * auVar110[0xe] - (0xff < sVar19);
            pcVar87[8] = (0 < sVar21) * (sVar21 < 0x100) * auVar112[0] - (0xff < sVar21);
            pcVar87[9] = (0 < sVar23) * (sVar23 < 0x100) * auVar112[2] - (0xff < sVar23);
            pcVar87[10] = (0 < sVar25) * (sVar25 < 0x100) * auVar112[4] - (0xff < sVar25);
            pcVar87[0xb] = (0 < sVar27) * (sVar27 < 0x100) * auVar112[6] - (0xff < sVar27);
            pcVar87[0xc] = (0 < sVar29) * (sVar29 < 0x100) * auVar112[8] - (0xff < sVar29);
            pcVar87[0xd] = (0 < sVar31) * (sVar31 < 0x100) * auVar112[10] - (0xff < sVar31);
            pcVar87[0xe] = (0 < sVar33) * (sVar33 < 0x100) * auVar112[0xc] - (0xff < sVar33);
            pcVar87[0xf] = (0 < sVar35) * (sVar35 < 0x100) * auVar112[0xe] - (0xff < sVar35);
            pcVar87 = param_2 + uVar91 + 0x10;
            *pcVar87 = (0 < sVar6) * (sVar6 < 0x100) * auVar101[0] - (0xff < sVar6);
            pcVar87[1] = (0 < sVar8) * (sVar8 < 0x100) * auVar101[2] - (0xff < sVar8);
            pcVar87[2] = (0 < sVar10) * (sVar10 < 0x100) * auVar101[4] - (0xff < sVar10);
            pcVar87[3] = (0 < sVar12) * (sVar12 < 0x100) * auVar101[6] - (0xff < sVar12);
            pcVar87[4] = (0 < sVar14) * (sVar14 < 0x100) * auVar101[8] - (0xff < sVar14);
            pcVar87[5] = (0 < sVar16) * (sVar16 < 0x100) * auVar101[10] - (0xff < sVar16);
            pcVar87[6] = (0 < sVar18) * (sVar18 < 0x100) * auVar101[0xc] - (0xff < sVar18);
            pcVar87[7] = (0 < sVar20) * (sVar20 < 0x100) * auVar101[0xe] - (0xff < sVar20);
            pcVar87[8] = (0 < sVar22) * (sVar22 < 0x100) * auVar108[0] - (0xff < sVar22);
            pcVar87[9] = (0 < sVar24) * (sVar24 < 0x100) * auVar108[2] - (0xff < sVar24);
            pcVar87[10] = (0 < sVar26) * (sVar26 < 0x100) * auVar108[4] - (0xff < sVar26);
            pcVar87[0xb] = (0 < sVar28) * (sVar28 < 0x100) * auVar108[6] - (0xff < sVar28);
            pcVar87[0xc] = (0 < sVar30) * (sVar30 < 0x100) * auVar108[8] - (0xff < sVar30);
            pcVar87[0xd] = (0 < sVar32) * (sVar32 < 0x100) * auVar108[10] - (0xff < sVar32);
            pcVar87[0xe] = (0 < sVar34) * (sVar34 < 0x100) * auVar108[0xc] - (0xff < sVar34);
            pcVar87[0xf] = (0 < sVar36) * (sVar36 < 0x100) * auVar108[0xe] - (0xff < sVar36);
            uVar91 = uVar91 + 0x20;
            pauVar95 = pauVar95 + -2;
          } while ((uVar92 - 5 & 0xffffffffffffffe0) != uVar91);
          uVar91 = 5;
          uVar92 = uVar92 - uVar94;
          pcVar87 = param_2 + uVar94;
          if (uVar85 == uVar94) goto LAB_140db10e8;
        }
        do {
          uVar85 = uVar92 - 1;
          *pcVar87 = acStack_39[uVar92];
          pcVar87 = pcVar87 + 1;
          uVar92 = uVar85;
        } while (5 < uVar85);
        uVar91 = 5;
      }
LAB_140db10e8:
      _Dst = pcVar87;
      if (uVar88 < 6) {
        *pcVar87 = '.';
        _Dst = pcVar87 + 1;
        uVar90 = (uint)uVar91;
        if (uVar90 < 5) {
          memset(_Dst,(int)CONCAT71((int7)((ulonglong)param_2 >> 8),0x30),
                 (ulonglong)(4 - uVar90) + 1);
          _Dst = pcVar87 + (ulonglong)(4 - uVar90) + 2;
        }
        if (uVar88 <= uVar90) {
          uVar89 = -uVar90;
          if (-uVar90 < -uVar88) {
            uVar89 = -uVar88;
          }
          if (0x2e < uVar89 + uVar90) {
            uVar1 = uVar88 - 1;
            uVar86 = uVar90 - 1;
            uVar93 = uVar86;
            if (uVar1 < uVar86) {
              uVar93 = uVar1;
            }
            if (~uVar93 + uVar90 <= uVar86) {
              uVar93 = uVar90 - 1;
              if (uVar93 <= uVar1) {
                uVar1 = uVar93;
              }
              if ((acStack_39 + (ulonglong)uVar93 + 2 <= _Dst) ||
                 (_Dst + (ulonglong)(~uVar1 + uVar90) + 1 <=
                  acStack_39 + ((ulonglong)uVar93 - (ulonglong)(~uVar1 + uVar90)) + 1)) {
                uVar85 = (ulonglong)(uVar89 + uVar90) + 1;
                uVar92 = uVar85 & 0xffffffffffffffe0;
                pcVar87 = _Dst + uVar92;
                uVar91 = (ulonglong)(uVar90 - (int)uVar92);
                uVar94 = 0;
                do {
                  auVar101 = *(undefined1 (*) [16])(auStack_57 + uVar86);
                  auVar107 = *(undefined1 (*) [16])(auStack_48 + (ulonglong)uVar86 + 1);
                  auVar39[0xd] = 0;
                  auVar39._0_13_ = auVar107._0_13_;
                  auVar39[0xe] = auVar107[7];
                  auVar43[0xc] = auVar107[6];
                  auVar43._0_12_ = auVar107._0_12_;
                  auVar43._13_2_ = auVar39._13_2_;
                  auVar47[0xb] = 0;
                  auVar47._0_11_ = auVar107._0_11_;
                  auVar47._12_3_ = auVar43._12_3_;
                  auVar51[10] = auVar107[5];
                  auVar51._0_10_ = auVar107._0_10_;
                  auVar51._11_4_ = auVar47._11_4_;
                  auVar55[9] = 0;
                  auVar55._0_9_ = auVar107._0_9_;
                  auVar55._10_5_ = auVar51._10_5_;
                  auVar59[8] = auVar107[4];
                  auVar59._0_8_ = auVar107._0_8_;
                  auVar59._9_6_ = auVar55._9_6_;
                  auVar109[7] = 0;
                  auVar109._0_7_ = auVar59._8_7_;
                  auVar73._7_8_ = 0;
                  auVar73._0_7_ = auVar59._8_7_;
                  auVar81._1_8_ = SUB158(auVar73 << 0x40,7);
                  auVar81[0] = auVar107[3];
                  auVar81._9_6_ = 0;
                  auVar74._1_10_ = SUB1510(auVar81 << 0x30,5);
                  auVar74[0] = auVar107[2];
                  auVar82._11_4_ = 0;
                  auVar82._0_11_ = auVar74;
                  auVar63[2] = auVar107[1];
                  auVar63._0_2_ = auVar107._0_2_;
                  auVar63._3_12_ = SUB1512(auVar82 << 0x20,3);
                  auVar67._2_13_ = auVar63._2_13_;
                  auVar67._0_2_ = auVar107._0_2_ & 0xff;
                  auVar109._8_4_ = auVar67._0_4_;
                  auVar109._12_4_ = auVar74._0_4_;
                  auVar110 = pshuflw(auVar109,auVar109,0x1b);
                  auVar110 = pshufhw(auVar110,auVar110,0x1b);
                  auVar106[8] = auVar107[8];
                  auVar106[9] = 0;
                  auVar106[10] = auVar107[9];
                  auVar103._0_10_ = (unkuint10)auVar107[0xc] << 0x40;
                  auVar103[10] = auVar107[0xd];
                  auVar105[0xb] = 0;
                  auVar105._0_11_ = auVar103;
                  auVar105[0xc] = auVar107[0xe];
                  auVar105[0xd] = 0;
                  auVar105[0xe] = auVar107[0xf];
                  auVar106[3] = 0;
                  auVar106._0_3_ = auVar103._8_3_;
                  auVar106._4_3_ = auVar105._12_3_;
                  auVar106[7] = 0;
                  auVar106[0xb] = 0;
                  auVar106._12_3_ =
                       (int3)(CONCAT16(auVar107[0xb],(uint6)auVar107[10] << 0x20) >> 0x20);
                  auVar106[0xf] = 0;
                  auVar107 = pshuflw(auVar106,auVar106,0x1b);
                  auVar107 = pshufhw(auVar107,auVar107,0x1b);
                  sVar5 = auVar107._0_2_;
                  sVar7 = auVar107._2_2_;
                  sVar9 = auVar107._4_2_;
                  sVar11 = auVar107._6_2_;
                  sVar13 = auVar107._8_2_;
                  sVar15 = auVar107._10_2_;
                  sVar17 = auVar107._12_2_;
                  sVar19 = auVar107._14_2_;
                  sVar21 = auVar110._0_2_;
                  sVar23 = auVar110._2_2_;
                  sVar25 = auVar110._4_2_;
                  sVar27 = auVar110._6_2_;
                  sVar29 = auVar110._8_2_;
                  sVar31 = auVar110._10_2_;
                  sVar33 = auVar110._12_2_;
                  sVar35 = auVar110._14_2_;
                  auVar40[0xd] = 0;
                  auVar40._0_13_ = auVar101._0_13_;
                  auVar40[0xe] = auVar101[7];
                  auVar44[0xc] = auVar101[6];
                  auVar44._0_12_ = auVar101._0_12_;
                  auVar44._13_2_ = auVar40._13_2_;
                  auVar48[0xb] = 0;
                  auVar48._0_11_ = auVar101._0_11_;
                  auVar48._12_3_ = auVar44._12_3_;
                  auVar52[10] = auVar101[5];
                  auVar52._0_10_ = auVar101._0_10_;
                  auVar52._11_4_ = auVar48._11_4_;
                  auVar56[9] = 0;
                  auVar56._0_9_ = auVar101._0_9_;
                  auVar56._10_5_ = auVar52._10_5_;
                  auVar60[8] = auVar101[4];
                  auVar60._0_8_ = auVar101._0_8_;
                  auVar60._9_6_ = auVar56._9_6_;
                  auVar111[7] = 0;
                  auVar111._0_7_ = auVar60._8_7_;
                  auVar75._7_8_ = 0;
                  auVar75._0_7_ = auVar60._8_7_;
                  auVar83._1_8_ = SUB158(auVar75 << 0x40,7);
                  auVar83[0] = auVar101[3];
                  auVar83._9_6_ = 0;
                  auVar76._1_10_ = SUB1510(auVar83 << 0x30,5);
                  auVar76[0] = auVar101[2];
                  auVar84._11_4_ = 0;
                  auVar84._0_11_ = auVar76;
                  auVar64[2] = auVar101[1];
                  auVar64._0_2_ = auVar101._0_2_;
                  auVar64._3_12_ = SUB1512(auVar84 << 0x20,3);
                  auVar68._2_13_ = auVar64._2_13_;
                  auVar68._0_2_ = auVar101._0_2_ & 0xff;
                  auVar111._8_4_ = auVar68._0_4_;
                  auVar111._12_4_ = auVar76._0_4_;
                  auVar112 = pshuflw(auVar111,auVar111,0x1b);
                  auVar112 = pshufhw(auVar112,auVar112,0x1b);
                  auVar100[8] = auVar101[8];
                  auVar100[9] = 0;
                  auVar100[10] = auVar101[9];
                  auVar97._0_10_ = (unkuint10)auVar101[0xc] << 0x40;
                  auVar97[10] = auVar101[0xd];
                  auVar99[0xb] = 0;
                  auVar99._0_11_ = auVar97;
                  auVar99[0xc] = auVar101[0xe];
                  auVar99[0xd] = 0;
                  auVar99[0xe] = auVar101[0xf];
                  auVar100[3] = 0;
                  auVar100._0_3_ = auVar97._8_3_;
                  auVar100._4_3_ = auVar99._12_3_;
                  auVar100[7] = 0;
                  auVar100[0xb] = 0;
                  auVar100._12_3_ =
                       (int3)(CONCAT16(auVar101[0xb],(uint6)auVar101[10] << 0x20) >> 0x20);
                  auVar100[0xf] = 0;
                  auVar101 = pshuflw(auVar100,auVar100,0x1b);
                  auVar101 = pshufhw(auVar101,auVar101,0x1b);
                  sVar6 = auVar101._0_2_;
                  sVar8 = auVar101._2_2_;
                  sVar10 = auVar101._4_2_;
                  sVar12 = auVar101._6_2_;
                  sVar14 = auVar101._8_2_;
                  sVar16 = auVar101._10_2_;
                  sVar18 = auVar101._12_2_;
                  sVar20 = auVar101._14_2_;
                  sVar22 = auVar112._0_2_;
                  sVar24 = auVar112._2_2_;
                  sVar26 = auVar112._4_2_;
                  sVar28 = auVar112._6_2_;
                  sVar30 = auVar112._8_2_;
                  sVar32 = auVar112._10_2_;
                  sVar34 = auVar112._12_2_;
                  sVar36 = auVar112._14_2_;
                  pcVar2 = _Dst + uVar94;
                  *pcVar2 = (0 < sVar5) * (sVar5 < 0x100) * auVar107[0] - (0xff < sVar5);
                  pcVar2[1] = (0 < sVar7) * (sVar7 < 0x100) * auVar107[2] - (0xff < sVar7);
                  pcVar2[2] = (0 < sVar9) * (sVar9 < 0x100) * auVar107[4] - (0xff < sVar9);
                  pcVar2[3] = (0 < sVar11) * (sVar11 < 0x100) * auVar107[6] - (0xff < sVar11);
                  pcVar2[4] = (0 < sVar13) * (sVar13 < 0x100) * auVar107[8] - (0xff < sVar13);
                  pcVar2[5] = (0 < sVar15) * (sVar15 < 0x100) * auVar107[10] - (0xff < sVar15);
                  pcVar2[6] = (0 < sVar17) * (sVar17 < 0x100) * auVar107[0xc] - (0xff < sVar17);
                  pcVar2[7] = (0 < sVar19) * (sVar19 < 0x100) * auVar107[0xe] - (0xff < sVar19);
                  pcVar2[8] = (0 < sVar21) * (sVar21 < 0x100) * auVar110[0] - (0xff < sVar21);
                  pcVar2[9] = (0 < sVar23) * (sVar23 < 0x100) * auVar110[2] - (0xff < sVar23);
                  pcVar2[10] = (0 < sVar25) * (sVar25 < 0x100) * auVar110[4] - (0xff < sVar25);
                  pcVar2[0xb] = (0 < sVar27) * (sVar27 < 0x100) * auVar110[6] - (0xff < sVar27);
                  pcVar2[0xc] = (0 < sVar29) * (sVar29 < 0x100) * auVar110[8] - (0xff < sVar29);
                  pcVar2[0xd] = (0 < sVar31) * (sVar31 < 0x100) * auVar110[10] - (0xff < sVar31);
                  pcVar2[0xe] = (0 < sVar33) * (sVar33 < 0x100) * auVar110[0xc] - (0xff < sVar33);
                  pcVar2[0xf] = (0 < sVar35) * (sVar35 < 0x100) * auVar110[0xe] - (0xff < sVar35);
                  pcVar2 = _Dst + uVar94 + 0x10;
                  *pcVar2 = (0 < sVar6) * (sVar6 < 0x100) * auVar101[0] - (0xff < sVar6);
                  pcVar2[1] = (0 < sVar8) * (sVar8 < 0x100) * auVar101[2] - (0xff < sVar8);
                  pcVar2[2] = (0 < sVar10) * (sVar10 < 0x100) * auVar101[4] - (0xff < sVar10);
                  pcVar2[3] = (0 < sVar12) * (sVar12 < 0x100) * auVar101[6] - (0xff < sVar12);
                  pcVar2[4] = (0 < sVar14) * (sVar14 < 0x100) * auVar101[8] - (0xff < sVar14);
                  pcVar2[5] = (0 < sVar16) * (sVar16 < 0x100) * auVar101[10] - (0xff < sVar16);
                  pcVar2[6] = (0 < sVar18) * (sVar18 < 0x100) * auVar101[0xc] - (0xff < sVar18);
                  pcVar2[7] = (0 < sVar20) * (sVar20 < 0x100) * auVar101[0xe] - (0xff < sVar20);
                  pcVar2[8] = (0 < sVar22) * (sVar22 < 0x100) * auVar112[0] - (0xff < sVar22);
                  pcVar2[9] = (0 < sVar24) * (sVar24 < 0x100) * auVar112[2] - (0xff < sVar24);
                  pcVar2[10] = (0 < sVar26) * (sVar26 < 0x100) * auVar112[4] - (0xff < sVar26);
                  pcVar2[0xb] = (0 < sVar28) * (sVar28 < 0x100) * auVar112[6] - (0xff < sVar28);
                  pcVar2[0xc] = (0 < sVar30) * (sVar30 < 0x100) * auVar112[8] - (0xff < sVar30);
                  pcVar2[0xd] = (0 < sVar32) * (sVar32 < 0x100) * auVar112[10] - (0xff < sVar32);
                  pcVar2[0xe] = (0 < sVar34) * (sVar34 < 0x100) * auVar112[0xc] - (0xff < sVar34);
                  pcVar2[0xf] = (0 < sVar36) * (sVar36 < 0x100) * auVar112[0xe] - (0xff < sVar36);
                  uVar94 = uVar94 + 0x20;
                  uVar86 = uVar86 - 0x20;
                } while (uVar92 != uVar94);
                _Dst = pcVar87;
                if (uVar85 == uVar92) goto LAB_140db1260;
              }
            }
          }
          do {
            uVar90 = (int)uVar91 - 1;
            uVar91 = (ulonglong)uVar90;
            *_Dst = acStack_39[uVar91 + 1];
            _Dst = _Dst + 1;
          } while (uVar88 <= uVar90);
        }
      }
      goto LAB_140db1260;
    }
  }
  else {
    acStack_39[9] = '\0';
    acStack_39[10] = '\0';
    acStack_39[1] = '\0';
    acStack_39[2] = '\0';
    acStack_39[3] = '\0';
    acStack_39[4] = '\0';
    acStack_39[5] = '\0';
    acStack_39[6] = '\0';
    acStack_39[7] = '\0';
    acStack_39[8] = '\0';
    if (param_4 != 0) goto LAB_140db0f77;
  }
  *param_2 = '0';
  _Dst = param_2 + 1;
LAB_140db1260:
  *_Dst = '\0';
  if ((local_28 ^ (ulonglong)&uStack_58) != __security_cookie.value) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  return;
}

// png_fixed @ 140db12a0

int __cdecl png_fixed(png_struct_def_conflict *param_1,double param_2,char *param_3)

{
  double dVar1;
  
  dVar1 = floor(param_2 * __real_40f86a0000000000 + __real_3fe0000000000000);
  if ((dVar1 <= __real_41dfffffffc00000) && (__real_c1e0000000000000 <= dVar1)) {
    return (int)dVar1;
  }
                    /* WARNING: Subroutine does not return */
  png_fixed_error(param_1,param_3);
}

// png_muldiv_warn @ 140db1300

int __cdecl png_muldiv_warn(png_struct_def_conflict *param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  double dVar2;
  
  if (param_4 != 0) {
    iVar1 = 0;
    if (param_3 != 0 && param_2 != 0) {
      dVar2 = floor(((double)param_3 * (double)param_2) / (double)param_4 + __real_3fe0000000000000)
      ;
      if ((__real_41dfffffffc00000 < dVar2) || (dVar2 < __real_c1e0000000000000))
      goto LAB_140db1369;
      iVar1 = (int)dVar2;
    }
    return iVar1;
  }
LAB_140db1369:
  png_warning(param_1,"fixed point overflow ignored");
  return 0;
}

// png_reciprocal @ 140db1390

int __cdecl png_reciprocal(int param_1)

{
  int iVar1;
  double dVar2;
  
  dVar2 = floor(__real_4202a05f20000000 / (double)param_1 + __real_3fe0000000000000);
  iVar1 = (int)dVar2;
  if (dVar2 < __real_c1e0000000000000) {
    iVar1 = 0;
  }
  if (__real_41dfffffffc00000 < dVar2) {
    iVar1 = 0;
  }
  return iVar1;
}

// png_gamma_significant @ 140db13e0

int __cdecl png_gamma_significant(int param_1)

{
  return (int)(param_1 - 0x19a29U < 0xffffd8ef);
}

// png_reciprocal2 @ 140db1400

int __cdecl png_reciprocal2(int param_1,int param_2)

{
  double dVar1;
  
  if (param_2 != 0 && param_1 != 0) {
    dVar1 = floor((__real_430c6bf526340000 / (double)param_1) / (double)param_2 +
                  __real_3fe0000000000000);
    if ((dVar1 <= __real_41dfffffffc00000) && (__real_c1e0000000000000 <= dVar1)) {
      return (int)dVar1;
    }
  }
  return 0;
}

// png_gamma_8bit_correct @ 140db1470

uchar __cdecl png_gamma_8bit_correct(uint param_1,int param_2)

{
  double dVar1;
  double dVar2;
  
  dVar2 = __real_406fe00000000000;
  if (param_1 - 1 < 0xfe) {
    dVar1 = pow((double)(int)param_1 / __real_406fe00000000000,
                (double)param_2 * __real_3ee4f8b588e368f1);
    dVar2 = floor(dVar1 * dVar2 + __real_3fe0000000000000);
    param_1 = (uint)dVar2;
  }
  return (uchar)param_1;
}

// png_gamma_16bit_correct @ 140db14d0

ushort __cdecl png_gamma_16bit_correct(uint param_1,int param_2)

{
  double dVar1;
  double dVar2;
  
  dVar2 = __real_40efffe000000000;
  if (param_1 - 1 < 0xfffe) {
    dVar1 = pow((double)(int)param_1 / __real_40efffe000000000,
                (double)param_2 * __real_3ee4f8b588e368f1);
    dVar2 = floor(dVar1 * dVar2 + __real_3fe0000000000000);
    param_1 = (uint)dVar2;
  }
  return (ushort)param_1;
}

// png_gamma_correct @ 140db1530

ushort __cdecl png_gamma_correct(png_struct_def_conflict *param_1,uint param_2,int param_3)

{
  double dVar1;
  double dVar2;
  
  dVar1 = __real_40efffe000000000;
  dVar2 = __real_406fe00000000000;
  if (param_1->bit_depth == '\b') {
    if (param_2 - 1 < 0xfe) {
      dVar1 = pow((double)(int)param_2 / __real_406fe00000000000,
                  (double)param_3 * __real_3ee4f8b588e368f1);
      dVar2 = floor(dVar1 * dVar2 + __real_3fe0000000000000);
      param_2 = (uint)dVar2;
    }
    param_2 = param_2 & 0xff;
  }
  else if (param_2 - 1 < 0xfffe) {
    dVar2 = pow((double)(int)param_2 / __real_40efffe000000000,
                (double)param_3 * __real_3ee4f8b588e368f1);
    dVar2 = floor(dVar2 * dVar1 + __real_3fe0000000000000);
    return (ushort)(int)dVar2;
  }
  return (ushort)param_2;
}

// png_destroy_gamma_table @ 140db15f0

void __cdecl png_destroy_gamma_table(png_struct_def_conflict *param_1)

{
  ushort **ppuVar1;
  ulonglong uVar2;
  uint uVar3;
  
  png_free(param_1,param_1->gamma_table);
  param_1->gamma_table = (uchar *)0x0;
  ppuVar1 = param_1->gamma_16_table;
  if (ppuVar1 != (ushort **)0x0) {
    if (param_1->gamma_shift != -0x17) {
      uVar3 = 1 << (8U - (char)param_1->gamma_shift & 0x1f);
      if ((int)uVar3 < 2) {
        uVar3 = 1;
      }
      uVar2 = 0;
      do {
        png_free(param_1,param_1->gamma_16_table[uVar2]);
        uVar2 = uVar2 + 1;
      } while (uVar3 != uVar2);
      ppuVar1 = param_1->gamma_16_table;
    }
    png_free(param_1,ppuVar1);
    param_1->gamma_16_table = (ushort **)0x0;
  }
  png_free(param_1,param_1->gamma_from_1);
  param_1->gamma_from_1 = (uchar *)0x0;
  png_free(param_1,param_1->gamma_to_1);
  param_1->gamma_to_1 = (uchar *)0x0;
  ppuVar1 = param_1->gamma_16_from_1;
  if (ppuVar1 != (ushort **)0x0) {
    if (param_1->gamma_shift != -0x17) {
      uVar3 = 1 << (8U - (char)param_1->gamma_shift & 0x1f);
      if ((int)uVar3 < 2) {
        uVar3 = 1;
      }
      uVar2 = 0;
      do {
        png_free(param_1,param_1->gamma_16_from_1[uVar2]);
        uVar2 = uVar2 + 1;
      } while (uVar3 != uVar2);
      ppuVar1 = param_1->gamma_16_from_1;
    }
    png_free(param_1,ppuVar1);
    param_1->gamma_16_from_1 = (ushort **)0x0;
  }
  ppuVar1 = param_1->gamma_16_to_1;
  if (ppuVar1 != (ushort **)0x0) {
    if (param_1->gamma_shift != -0x17) {
      uVar3 = 1 << (8U - (char)param_1->gamma_shift & 0x1f);
      if ((int)uVar3 < 2) {
        uVar3 = 1;
      }
      uVar2 = 0;
      do {
        png_free(param_1,param_1->gamma_16_to_1[uVar2]);
        uVar2 = uVar2 + 1;
      } while (uVar3 != uVar2);
      ppuVar1 = param_1->gamma_16_to_1;
    }
    png_free(param_1,ppuVar1);
    param_1->gamma_16_to_1 = (ushort **)0x0;
  }
  return;
}

// png_build_gamma_table @ 140db17a0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl png_build_gamma_table(png_struct_def_conflict *param_1,int param_2)

{
  undefined1 uVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double _Y;
  undefined8 uVar7;
  uint uVar8;
  uchar *puVar9;
  ushort **ppuVar10;
  ushort *puVar11;
  byte bVar12;
  byte bVar13;
  uint uVar14;
  int iVar15;
  longlong lVar16;
  int iVar17;
  ulonglong uVar18;
  uint uVar19;
  uint uVar20;
  ushort uVar21;
  uint uVar22;
  ulonglong uVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  
  if ((param_1->gamma_table != (uchar *)0x0) || (param_1->gamma_16_table != (ushort **)0x0)) {
    png_warning(param_1,"gamma table being rebuilt");
    png_destroy_gamma_table(param_1);
  }
  if (param_2 < 9) {
    if (param_1->screen_gamma < 1) {
      iVar15 = 100000;
    }
    else {
      iVar15 = (param_1->colorspace).gamma;
      if (((iVar15 == 0) ||
          (dVar2 = floor((__real_430c6bf526340000 / (double)iVar15) / (double)param_1->screen_gamma
                         + __real_3fe0000000000000), __real_41dfffffffc00000 < dVar2)) ||
         (dVar2 < __real_c1e0000000000000)) {
        iVar15 = 0;
      }
      else {
        iVar15 = (int)dVar2;
      }
    }
    puVar9 = png_malloc(param_1,0x100);
    param_1->gamma_table = puVar9;
    uVar7 = _UNK_1531ef368;
    dVar3 = __real_406fe00000000000;
    dVar2 = __real_3fe0000000000000;
    if (iVar15 - 95000U < 0x2711) {
      *(undefined8 *)puVar9 = ___xmm_0f0e0d0c0b0a09080706050403020100;
      *(undefined8 *)(puVar9 + 8) = uVar7;
      uVar7 = _UNK_1531ef378;
      *(undefined8 *)(puVar9 + 0x10) = ___xmm_1f1e1d1c1b1a19181716151413121110;
      *(undefined8 *)(puVar9 + 0x18) = uVar7;
      uVar7 = _UNK_1531ef388;
      *(undefined8 *)(puVar9 + 0x20) = ___xmm_2f2e2d2c2b2a29282726252423222120;
      *(undefined8 *)(puVar9 + 0x28) = uVar7;
      uVar7 = _UNK_1531ef398;
      *(undefined8 *)(puVar9 + 0x30) = ___xmm_3f3e3d3c3b3a39383736353433323130;
      *(undefined8 *)(puVar9 + 0x38) = uVar7;
      uVar7 = _UNK_1531ef3a8;
      *(undefined8 *)(puVar9 + 0x40) = ___xmm_4f4e4d4c4b4a49484746454443424140;
      *(undefined8 *)(puVar9 + 0x48) = uVar7;
      uVar7 = _UNK_1531ef3b8;
      *(undefined8 *)(puVar9 + 0x50) = ___xmm_5f5e5d5c5b5a59585756555453525150;
      *(undefined8 *)(puVar9 + 0x58) = uVar7;
      uVar7 = _UNK_1531ef3c8;
      *(undefined8 *)(puVar9 + 0x60) = ___xmm_6f6e6d6c6b6a69686766656463626160;
      *(undefined8 *)(puVar9 + 0x68) = uVar7;
      uVar7 = _UNK_1531ef3d8;
      *(undefined8 *)(puVar9 + 0x70) = ___xmm_7f7e7d7c7b7a79787776757473727170;
      *(undefined8 *)(puVar9 + 0x78) = uVar7;
      uVar7 = _UNK_1531ef3e8;
      *(undefined8 *)(puVar9 + 0x80) = ___xmm_8f8e8d8c8b8a89888786858483828180;
      *(undefined8 *)(puVar9 + 0x88) = uVar7;
      uVar7 = _UNK_1531ef3f8;
      *(undefined8 *)(puVar9 + 0x90) = ___xmm_9f9e9d9c9b9a99989796959493929190;
      *(undefined8 *)(puVar9 + 0x98) = uVar7;
      uVar7 = _UNK_1531ef408;
      *(undefined8 *)(puVar9 + 0xa0) = ___xmm_afaeadacabaaa9a8a7a6a5a4a3a2a1a0;
      *(undefined8 *)(puVar9 + 0xa8) = uVar7;
      uVar7 = _UNK_1531ef418;
      *(undefined8 *)(puVar9 + 0xb0) = ___xmm_bfbebdbcbbbab9b8b7b6b5b4b3b2b1b0;
      *(undefined8 *)(puVar9 + 0xb8) = uVar7;
      uVar7 = _UNK_1531ef428;
      *(undefined8 *)(puVar9 + 0xc0) = ___xmm_cfcecdcccbcac9c8c7c6c5c4c3c2c1c0;
      *(undefined8 *)(puVar9 + 200) = uVar7;
      uVar7 = _UNK_1531ef438;
      *(undefined8 *)(puVar9 + 0xd0) = ___xmm_dfdedddcdbdad9d8d7d6d5d4d3d2d1d0;
      *(undefined8 *)(puVar9 + 0xd8) = uVar7;
      uVar7 = _UNK_1531ef448;
      *(undefined8 *)(puVar9 + 0xe0) = ___xmm_efeeedecebeae9e8e7e6e5e4e3e2e1e0;
      *(undefined8 *)(puVar9 + 0xe8) = uVar7;
      uVar7 = _UNK_1531ef458;
      *(undefined8 *)(puVar9 + 0xf0) = ___xmm_fffefdfcfbfaf9f8f7f6f5f4f3f2f1f0;
      *(undefined8 *)(puVar9 + 0xf8) = uVar7;
    }
    else {
      dVar6 = (double)iVar15 * __real_3ee4f8b588e368f1;
      lVar16 = 0;
      do {
        while (0xfd < (int)lVar16 - 1U) {
          puVar9[lVar16] = (uchar)lVar16;
          lVar16 = lVar16 + 1;
          if (lVar16 == 0x100) goto LAB_140db1ad0;
        }
        dVar5 = pow((double)(int)lVar16 / dVar3,dVar6);
        dVar5 = floor(dVar5 * dVar3 + dVar2);
        puVar9[lVar16] = (uchar)(int)dVar5;
        lVar16 = lVar16 + 1;
      } while (lVar16 != 0x100);
    }
LAB_140db1ad0:
    dVar2 = __real_4202a05f20000000;
    if ((param_1->transformations & 0x600080) != 0) {
      dVar3 = floor(__real_4202a05f20000000 / (double)(param_1->colorspace).gamma +
                    __real_3fe0000000000000);
      dVar6 = __real_41dfffffffc00000;
      iVar15 = (int)dVar3;
      if (dVar3 < __real_c1e0000000000000) {
        iVar15 = 0;
      }
      if (__real_41dfffffffc00000 < dVar3) {
        iVar15 = 0;
      }
      puVar9 = png_malloc(param_1,0x100);
      param_1->gamma_to_1 = puVar9;
      uVar7 = _UNK_1531ef368;
      dVar5 = __real_406fe00000000000;
      dVar3 = __real_3fe0000000000000;
      if (iVar15 - 95000U < 0x2711) {
        *(undefined8 *)puVar9 = ___xmm_0f0e0d0c0b0a09080706050403020100;
        *(undefined8 *)(puVar9 + 8) = uVar7;
        uVar7 = _UNK_1531ef378;
        *(undefined8 *)(puVar9 + 0x10) = ___xmm_1f1e1d1c1b1a19181716151413121110;
        *(undefined8 *)(puVar9 + 0x18) = uVar7;
        uVar7 = _UNK_1531ef388;
        *(undefined8 *)(puVar9 + 0x20) = ___xmm_2f2e2d2c2b2a29282726252423222120;
        *(undefined8 *)(puVar9 + 0x28) = uVar7;
        uVar7 = _UNK_1531ef398;
        *(undefined8 *)(puVar9 + 0x30) = ___xmm_3f3e3d3c3b3a39383736353433323130;
        *(undefined8 *)(puVar9 + 0x38) = uVar7;
        uVar7 = _UNK_1531ef3a8;
        *(undefined8 *)(puVar9 + 0x40) = ___xmm_4f4e4d4c4b4a49484746454443424140;
        *(undefined8 *)(puVar9 + 0x48) = uVar7;
        uVar7 = _UNK_1531ef3b8;
        *(undefined8 *)(puVar9 + 0x50) = ___xmm_5f5e5d5c5b5a59585756555453525150;
        *(undefined8 *)(puVar9 + 0x58) = uVar7;
        uVar7 = _UNK_1531ef3c8;
        *(undefined8 *)(puVar9 + 0x60) = ___xmm_6f6e6d6c6b6a69686766656463626160;
        *(undefined8 *)(puVar9 + 0x68) = uVar7;
        uVar7 = _UNK_1531ef3d8;
        *(undefined8 *)(puVar9 + 0x70) = ___xmm_7f7e7d7c7b7a79787776757473727170;
        *(undefined8 *)(puVar9 + 0x78) = uVar7;
        uVar7 = _UNK_1531ef3e8;
        *(undefined8 *)(puVar9 + 0x80) = ___xmm_8f8e8d8c8b8a89888786858483828180;
        *(undefined8 *)(puVar9 + 0x88) = uVar7;
        uVar7 = _UNK_1531ef3f8;
        *(undefined8 *)(puVar9 + 0x90) = ___xmm_9f9e9d9c9b9a99989796959493929190;
        *(undefined8 *)(puVar9 + 0x98) = uVar7;
        uVar7 = _UNK_1531ef408;
        *(undefined8 *)(puVar9 + 0xa0) = ___xmm_afaeadacabaaa9a8a7a6a5a4a3a2a1a0;
        *(undefined8 *)(puVar9 + 0xa8) = uVar7;
        uVar7 = _UNK_1531ef418;
        *(undefined8 *)(puVar9 + 0xb0) = ___xmm_bfbebdbcbbbab9b8b7b6b5b4b3b2b1b0;
        *(undefined8 *)(puVar9 + 0xb8) = uVar7;
        uVar7 = _UNK_1531ef428;
        *(undefined8 *)(puVar9 + 0xc0) = ___xmm_cfcecdcccbcac9c8c7c6c5c4c3c2c1c0;
        *(undefined8 *)(puVar9 + 200) = uVar7;
        uVar7 = _UNK_1531ef438;
        *(undefined8 *)(puVar9 + 0xd0) = ___xmm_dfdedddcdbdad9d8d7d6d5d4d3d2d1d0;
        *(undefined8 *)(puVar9 + 0xd8) = uVar7;
        uVar7 = _UNK_1531ef448;
        *(undefined8 *)(puVar9 + 0xe0) = ___xmm_efeeedecebeae9e8e7e6e5e4e3e2e1e0;
        *(undefined8 *)(puVar9 + 0xe8) = uVar7;
        uVar7 = _UNK_1531ef458;
        *(undefined8 *)(puVar9 + 0xf0) = ___xmm_fffefdfcfbfaf9f8f7f6f5f4f3f2f1f0;
        *(undefined8 *)(puVar9 + 0xf8) = uVar7;
      }
      else {
        _Y = (double)iVar15 * __real_3ee4f8b588e368f1;
        lVar16 = 0;
        do {
          while (0xfd < (int)lVar16 - 1U) {
            puVar9[lVar16] = (uchar)lVar16;
            lVar16 = lVar16 + 1;
            if (lVar16 == 0x100) goto LAB_140db1d02;
          }
          dVar4 = pow((double)(int)lVar16 / dVar5,_Y);
          dVar4 = floor(dVar4 * dVar5 + dVar3);
          puVar9[lVar16] = (uchar)(int)dVar4;
          lVar16 = lVar16 + 1;
        } while (lVar16 != 0x100);
      }
LAB_140db1d02:
      if (param_1->screen_gamma < 1) {
        iVar15 = (param_1->colorspace).gamma;
      }
      else {
        dVar2 = floor(dVar2 / (double)param_1->screen_gamma + __real_3fe0000000000000);
        iVar15 = (int)dVar2;
        if (dVar2 < __real_c1e0000000000000) {
          iVar15 = 0;
        }
        if (dVar6 < dVar2) {
          iVar15 = 0;
        }
      }
      puVar9 = png_malloc(param_1,0x100);
      param_1->gamma_from_1 = puVar9;
      uVar7 = _UNK_1531ef368;
      dVar3 = __real_406fe00000000000;
      dVar2 = __real_3fe0000000000000;
      if (iVar15 - 95000U < 0x2711) {
        *(undefined8 *)puVar9 = ___xmm_0f0e0d0c0b0a09080706050403020100;
        *(undefined8 *)(puVar9 + 8) = uVar7;
        uVar7 = _UNK_1531ef378;
        *(undefined8 *)(puVar9 + 0x10) = ___xmm_1f1e1d1c1b1a19181716151413121110;
        *(undefined8 *)(puVar9 + 0x18) = uVar7;
        uVar7 = _UNK_1531ef388;
        *(undefined8 *)(puVar9 + 0x20) = ___xmm_2f2e2d2c2b2a29282726252423222120;
        *(undefined8 *)(puVar9 + 0x28) = uVar7;
        uVar7 = _UNK_1531ef398;
        *(undefined8 *)(puVar9 + 0x30) = ___xmm_3f3e3d3c3b3a39383736353433323130;
        *(undefined8 *)(puVar9 + 0x38) = uVar7;
        uVar7 = _UNK_1531ef3a8;
        *(undefined8 *)(puVar9 + 0x40) = ___xmm_4f4e4d4c4b4a49484746454443424140;
        *(undefined8 *)(puVar9 + 0x48) = uVar7;
        uVar7 = _UNK_1531ef3b8;
        *(undefined8 *)(puVar9 + 0x50) = ___xmm_5f5e5d5c5b5a59585756555453525150;
        *(undefined8 *)(puVar9 + 0x58) = uVar7;
        uVar7 = _UNK_1531ef3c8;
        *(undefined8 *)(puVar9 + 0x60) = ___xmm_6f6e6d6c6b6a69686766656463626160;
        *(undefined8 *)(puVar9 + 0x68) = uVar7;
        uVar7 = _UNK_1531ef3d8;
        *(undefined8 *)(puVar9 + 0x70) = ___xmm_7f7e7d7c7b7a79787776757473727170;
        *(undefined8 *)(puVar9 + 0x78) = uVar7;
        uVar7 = _UNK_1531ef3e8;
        *(undefined8 *)(puVar9 + 0x80) = ___xmm_8f8e8d8c8b8a89888786858483828180;
        *(undefined8 *)(puVar9 + 0x88) = uVar7;
        uVar7 = _UNK_1531ef3f8;
        *(undefined8 *)(puVar9 + 0x90) = ___xmm_9f9e9d9c9b9a99989796959493929190;
        *(undefined8 *)(puVar9 + 0x98) = uVar7;
        uVar7 = _UNK_1531ef408;
        *(undefined8 *)(puVar9 + 0xa0) = ___xmm_afaeadacabaaa9a8a7a6a5a4a3a2a1a0;
        *(undefined8 *)(puVar9 + 0xa8) = uVar7;
        uVar7 = _UNK_1531ef418;
        *(undefined8 *)(puVar9 + 0xb0) = ___xmm_bfbebdbcbbbab9b8b7b6b5b4b3b2b1b0;
        *(undefined8 *)(puVar9 + 0xb8) = uVar7;
        uVar7 = _UNK_1531ef428;
        *(undefined8 *)(puVar9 + 0xc0) = ___xmm_cfcecdcccbcac9c8c7c6c5c4c3c2c1c0;
        *(undefined8 *)(puVar9 + 200) = uVar7;
        uVar7 = _UNK_1531ef438;
        *(undefined8 *)(puVar9 + 0xd0) = ___xmm_dfdedddcdbdad9d8d7d6d5d4d3d2d1d0;
        *(undefined8 *)(puVar9 + 0xd8) = uVar7;
        uVar7 = _UNK_1531ef448;
        *(undefined8 *)(puVar9 + 0xe0) = ___xmm_efeeedecebeae9e8e7e6e5e4e3e2e1e0;
        *(undefined8 *)(puVar9 + 0xe8) = uVar7;
        uVar7 = _UNK_1531ef458;
        *(undefined8 *)(puVar9 + 0xf0) = ___xmm_fffefdfcfbfaf9f8f7f6f5f4f3f2f1f0;
        *(undefined8 *)(puVar9 + 0xf8) = uVar7;
      }
      else {
        dVar6 = (double)iVar15 * __real_3ee4f8b588e368f1;
        lVar16 = 0;
        do {
          while ((int)lVar16 - 1U < 0xfe) {
            dVar5 = pow((double)(int)lVar16 / dVar3,dVar6);
            dVar5 = floor(dVar5 * dVar3 + dVar2);
            puVar9[lVar16] = (uchar)(int)dVar5;
            lVar16 = lVar16 + 1;
            if (lVar16 == 0x100) {
              return;
            }
          }
          puVar9[lVar16] = (uchar)lVar16;
          lVar16 = lVar16 + 1;
        } while (lVar16 != 0x100);
      }
    }
  }
  else {
    if ((param_1->color_type & 2) == 0) {
      bVar13 = (param_1->sig_bit).gray;
    }
    else {
      uVar1 = (param_1->sig_bit).red;
      bVar12 = (param_1->sig_bit).green;
      bVar13 = uVar1;
      if ((byte)uVar1 < bVar12) {
        bVar13 = bVar12;
      }
      bVar12 = (param_1->sig_bit).blue;
      if (bVar13 < bVar12) {
        bVar13 = bVar12;
      }
    }
    bVar12 = 0x10 - bVar13;
    if (0xe < (byte)(bVar13 - 1)) {
      bVar12 = 0;
    }
    bVar13 = 5;
    if (5 < bVar12) {
      bVar13 = bVar12;
    }
    if ((param_1->transformations & 0x4000400) == 0) {
      bVar13 = bVar12;
    }
    bVar12 = 8;
    if (bVar13 < 8) {
      bVar12 = bVar13;
    }
    param_1->gamma_shift = (uint)bVar12;
    dVar2 = __real_3ee4f8b588e368f1;
    iVar15 = param_1->screen_gamma;
    if ((param_1->transformations & 0x4000400) == 0) {
      if (iVar15 < 1) {
        iVar15 = 100000;
      }
      else {
        iVar17 = (param_1->colorspace).gamma;
        if (((iVar17 == 0) ||
            (dVar2 = floor((__real_430c6bf526340000 / (double)iVar17) / (double)iVar15 +
                           __real_3fe0000000000000), __real_41dfffffffc00000 < dVar2)) ||
           (dVar2 < __real_c1e0000000000000)) {
          iVar15 = 0;
        }
        else {
          iVar15 = (int)dVar2;
        }
      }
      png_build_16bit_table(param_1,&param_1->gamma_16_table,(uint)bVar12,iVar15);
      uVar20 = param_1->transformations;
      dVar2 = __real_4202a05f20000000;
    }
    else {
      if (iVar15 < 1) {
        uVar24 = (undefined4)__real_3ff0000000000000;
        uVar25 = (undefined4)((ulonglong)__real_3ff0000000000000 >> 0x20);
      }
      else {
        dVar3 = floor((double)iVar15 * (double)(param_1->colorspace).gamma * __real_3ee4f8b588e368f1
                      + __real_3fe0000000000000);
        uVar18 = -(ulonglong)(dVar3 <= __real_41dfffffffc00000) &
                 -(ulonglong)(__real_c1e0000000000000 <= dVar3) &
                 (ulonglong)((double)(int)dVar3 * dVar2);
        uVar24 = (undefined4)uVar18;
        uVar25 = (undefined4)(uVar18 >> 0x20);
      }
      bVar13 = 8 - bVar12;
      uVar18 = (ulonglong)(uint)(1 << (bVar13 & 0x1f));
      ppuVar10 = png_calloc(param_1,uVar18 * 8);
      param_1->gamma_16_table = ppuVar10;
      uVar23 = 0;
      do {
        puVar11 = png_malloc(param_1,0x200);
        ppuVar10[uVar23] = puVar11;
        dVar3 = __real_40efffe000000000;
        dVar2 = __real_3fe0000000000000;
        uVar23 = uVar23 + 1;
      } while (uVar18 != uVar23);
      uVar22 = 0xff >> (bVar12 & 0x1f);
      iVar15 = 0;
      uVar20 = 0;
      do {
        dVar6 = pow((double)((iVar15 * 0x101 & 0xffffU) + 0x80) / dVar3,
                    (double)CONCAT44(uVar25,uVar24));
        dVar6 = floor(dVar6 * dVar3 + dVar2);
        uVar8 = (((((int)dVar6 & 0xffffU) << (0x10 - bVar12 & 0x1f)) - ((int)dVar6 & 0xffffU)) +
                0x8000) / 0xffff;
        uVar14 = uVar8 - uVar20;
        if (uVar20 <= uVar8) {
          uVar21 = (ushort)(iVar15 * 0x101);
          for (uVar19 = uVar14 + 1 & 3; uVar19 != 0; uVar19 = uVar19 - 1) {
            ppuVar10[uVar20 & uVar22][uVar20 >> (bVar13 & 0x1f)] = uVar21;
            uVar20 = uVar20 + 1;
          }
          if (2 < uVar14) {
            do {
              ppuVar10[uVar20 & uVar22][uVar20 >> (bVar13 & 0x1f)] = uVar21;
              ppuVar10[uVar20 + 1 & uVar22][uVar20 + 1 >> (bVar13 & 0x1f)] = uVar21;
              ppuVar10[uVar20 + 2 & uVar22][uVar20 + 2 >> (bVar13 & 0x1f)] = uVar21;
              uVar14 = uVar20 + 3;
              ppuVar10[uVar14 & uVar22][uVar14 >> (bVar13 & 0x1f)] = uVar21;
              uVar20 = uVar20 + 4;
            } while (uVar14 != uVar8);
          }
          uVar20 = uVar8 + 1;
        }
        iVar15 = iVar15 + 1;
      } while (iVar15 != 0xff);
      uVar8 = 0x100 << (bVar13 & 0x1f);
      uVar14 = uVar20 - uVar8;
      if (uVar20 < uVar8) {
        for (uVar19 = -uVar20 & 3; uVar19 != 0; uVar19 = uVar19 - 1) {
          ppuVar10[uVar20 & uVar22][uVar20 >> (bVar13 & 0x1f)] = 0xffff;
          uVar20 = uVar20 + 1;
        }
        if (uVar14 < 0xfffffffd) {
          do {
            ppuVar10[uVar20 & uVar22][uVar20 >> (bVar13 & 0x1f)] = 0xffff;
            ppuVar10[uVar20 + 1 & uVar22][uVar20 + 1 >> (bVar13 & 0x1f)] = 0xffff;
            ppuVar10[uVar20 + 2 & uVar22][uVar20 + 2 >> (bVar13 & 0x1f)] = 0xffff;
            ppuVar10[uVar20 + 3 & uVar22][uVar20 + 3 >> (bVar13 & 0x1f)] = 0xffff;
            uVar20 = uVar20 + 4;
          } while (uVar20 != uVar8);
        }
      }
      uVar20 = param_1->transformations;
      dVar2 = __real_4202a05f20000000;
    }
    __real_4202a05f20000000 = dVar2;
    if ((uVar20 & 0x600080) != 0) {
      dVar3 = floor(dVar2 / (double)(param_1->colorspace).gamma + __real_3fe0000000000000);
      dVar6 = __real_41dfffffffc00000;
      iVar17 = 0;
      iVar15 = (int)dVar3;
      if (dVar3 < __real_c1e0000000000000) {
        iVar15 = iVar17;
      }
      if (__real_41dfffffffc00000 < dVar3) {
        iVar15 = 0;
      }
      png_build_16bit_table(param_1,&param_1->gamma_16_to_1,(uint)bVar12,iVar15);
      if (param_1->screen_gamma < 1) {
        iVar15 = (param_1->colorspace).gamma;
      }
      else {
        dVar2 = floor(dVar2 / (double)param_1->screen_gamma + __real_3fe0000000000000);
        iVar15 = (int)dVar2;
        if (dVar2 < __real_c1e0000000000000) {
          iVar15 = iVar17;
        }
        if (dVar6 < dVar2) {
          iVar15 = iVar17;
        }
      }
      png_build_16bit_table(param_1,&param_1->gamma_16_from_1,(uint)bVar12,iVar15);
      return;
    }
  }
  return;
}

// png_build_16bit_table @ 140db22a0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
png_build_16bit_table(png_struct_def_conflict *param_1,ushort ***param_2,uint param_3,int param_4)

{
  char cVar1;
  double dVar2;
  double dVar3;
  ushort **ppuVar4;
  ushort *puVar5;
  undefined1 (*pauVar6) [16];
  byte bVar7;
  int iVar8;
  longlong lVar9;
  ulonglong uVar10;
  int iVar11;
  ulonglong uVar12;
  uint uVar13;
  double dVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  int iVar21;
  int iVar22;
  int iVar23;
  int iVar24;
  int iVar25;
  int iVar26;
  int iVar27;
  int iVar28;
  int iVar29;
  int iVar30;
  int iVar31;
  int iVar32;
  int iVar33;
  int iVar34;
  int iVar35;
  int iVar36;
  int iVar37;
  int iVar38;
  int iVar39;
  int iVar40;
  int iVar41;
  int iVar42;
  int iVar43;
  int iVar44;
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
  int iVar55;
  int iVar56;
  int iVar57;
  int iVar58;
  int iVar59;
  int iVar60;
  int iVar61;
  int iVar62;
  int iVar63;
  int iVar64;
  int iVar65;
  int iVar66;
  int iVar67;
  int iVar84;
  int iVar85;
  int iVar86;
  int iVar87;
  int iVar88;
  int iVar89;
  int iVar90;
  int iVar91;
  int iVar92;
  int iVar93;
  int iVar94;
  int iVar95;
  int iVar96;
  int iVar97;
  int iVar98;
  int iVar99;
  int iVar100;
  int iVar101;
  int iVar102;
  int iVar103;
  int iVar104;
  int iVar105;
  int iVar106;
  int iVar107;
  int iVar108;
  int iVar109;
  int iVar110;
  int iVar111;
  int iVar112;
  int iVar113;
  int iVar114;
  int iVar115;
  int iVar116;
  int iVar117;
  int iVar118;
  int iVar119;
  int iVar120;
  int iVar121;
  int iVar122;
  int iVar123;
  int iVar124;
  int iVar125;
  int iVar126;
  int iVar127;
  int iVar128;
  int iVar129;
  int iVar130;
  int iVar131;
  int iVar132;
  int iVar133;
  int iVar134;
  int iVar135;
  int iVar136;
  int iVar137;
  int iVar138;
  int iVar139;
  int iVar140;
  int iVar141;
  int iVar142;
  int iVar143;
  int iVar144;
  int iVar145;
  int iVar146;
  int iVar147;
  int iVar148;
  int iVar149;
  int iVar150;
  int iVar151;
  int iVar152;
  int iVar153;
  int iVar154;
  int iVar155;
  int iVar156;
  int iVar157;
  int iVar158;
  int iVar159;
  int iVar160;
  int iVar161;
  int iVar162;
  int iVar163;
  int iVar164;
  int iVar165;
  int iVar166;
  int iVar167;
  int iVar168;
  int iVar169;
  int iVar170;
  int iVar171;
  int iVar172;
  int iVar173;
  int iVar174;
  int iVar175;
  int iVar176;
  int iVar177;
  int iVar178;
  int iVar179;
  int iVar180;
  int iVar181;
  int iVar182;
  int iVar183;
  int iVar184;
  int iVar185;
  int iVar186;
  int iVar187;
  int iVar188;
  int iVar189;
  int iVar190;
  int iVar191;
  int iVar192;
  int iVar193;
  int iVar194;
  int iVar195;
  int iVar196;
  int iVar197;
  int iVar198;
  int iVar199;
  int iVar200;
  int iVar201;
  int iVar202;
  int iVar203;
  int iVar204;
  int iVar205;
  int iVar206;
  int iVar207;
  int iVar208;
  int iVar209;
  int iVar210;
  int iVar211;
  int iVar212;
  int iVar213;
  int iVar214;
  int iVar215;
  int iVar216;
  int iVar217;
  int iVar218;
  int iVar219;
  int iVar220;
  int iVar221;
  int iVar222;
  int iVar223;
  int iVar224;
  int iVar225;
  int iVar226;
  int iVar227;
  int iVar228;
  int iVar229;
  int iVar230;
  int iVar231;
  int iVar232;
  int iVar233;
  int iVar234;
  int iVar235;
  int iVar236;
  int iVar237;
  int iVar238;
  int iVar239;
  int iVar240;
  int iVar241;
  int iVar242;
  int iVar243;
  int iVar244;
  int iVar245;
  undefined1 auVar68 [16];
  undefined1 auVar69 [16];
  undefined1 auVar70 [16];
  undefined1 auVar71 [16];
  undefined1 auVar72 [16];
  undefined1 auVar73 [16];
  undefined1 auVar74 [16];
  undefined1 auVar75 [16];
  undefined1 auVar76 [16];
  undefined1 auVar77 [16];
  undefined1 auVar78 [16];
  undefined1 auVar79 [16];
  undefined1 auVar80 [16];
  undefined1 auVar81 [16];
  undefined1 auVar82 [16];
  undefined1 auVar83 [16];
  undefined1 auVar246 [16];
  undefined1 auVar247 [16];
  undefined1 auVar248 [16];
  undefined1 auVar249 [16];
  undefined1 auVar250 [16];
  undefined1 auVar251 [16];
  undefined1 auVar252 [16];
  undefined1 auVar253 [16];
  undefined1 auVar254 [16];
  undefined1 auVar255 [16];
  undefined1 auVar256 [16];
  undefined1 auVar257 [16];
  undefined1 auVar258 [16];
  undefined1 auVar259 [16];
  undefined1 auVar260 [16];
  undefined1 auVar261 [16];
  undefined1 auVar262 [16];
  undefined1 auVar263 [16];
  undefined1 auVar264 [16];
  undefined1 auVar265 [16];
  undefined1 auVar266 [16];
  undefined1 auVar267 [16];
  undefined1 auVar268 [16];
  undefined1 auVar269 [16];
  undefined1 auVar270 [16];
  undefined1 auVar271 [16];
  undefined1 auVar272 [16];
  undefined1 auVar273 [16];
  undefined1 auVar274 [16];
  undefined1 auVar275 [16];
  undefined1 auVar276 [16];
  undefined1 auVar277 [16];
  undefined1 auVar278 [16];
  undefined1 auVar279 [16];
  undefined1 auVar280 [16];
  undefined1 auVar281 [16];
  undefined1 auVar282 [16];
  undefined1 auVar283 [16];
  undefined1 auVar284 [16];
  undefined1 auVar285 [16];
  undefined1 auVar286 [16];
  undefined1 auVar287 [16];
  undefined1 auVar288 [16];
  undefined1 auVar289 [16];
  undefined1 auVar290 [16];
  undefined1 auVar291 [16];
  undefined1 auVar292 [16];
  undefined1 auVar293 [16];
  int iVar294;
  double _Y;
  int iVar295;
  int iVar296;
  int iVar297;
  int iVar298;
  double dVar299;
  int iVar300;
  int iVar301;
  int iVar302;
  int iVar303;
  int iVar304;
  int iVar305;
  int iVar306;
  int iVar307;
  int iVar308;
  int iVar309;
  int iVar310;
  int iVar311;
  int iVar312;
  int iVar313;
  int iVar314;
  int iVar315;
  int iVar316;
  int iVar317;
  int iVar318;
  int iVar319;
  int iVar320;
  int iVar321;
  int iVar322;
  int iVar323;
  int iVar324;
  int iVar325;
  int iVar326;
  int iVar327;
  int iVar328;
  int iVar329;
  int iVar330;
  int iVar331;
  int iVar332;
  int iVar333;
  int iVar334;
  
  cVar1 = (char)param_3;
  bVar7 = 8 - cVar1;
  uVar10 = (ulonglong)(uint)(1 << (bVar7 & 0x1f));
  uVar13 = ~(-1 << (0x10U - cVar1 & 0x1f));
  iVar11 = 1 << (0xfU - cVar1 & 0x1f);
  ppuVar4 = png_calloc(param_1,uVar10 * 8);
  *param_2 = ppuVar4;
  dVar3 = __real_40efffe000000000;
  dVar2 = __real_3fe0000000000000;
  if (param_4 - 95000U < 0x2711) {
    if (param_3 == 0) {
      iVar11 = ___xmm_00000007000000060000000500000004 * 0x100;
      iVar84 = _UNK_150631eb4 * 0x100;
      iVar138 = _UNK_150631eb8 * 0x100;
      iVar192 = _UNK_150631ebc * 0x100;
      iVar15 = (int)__xmm_00000003000000020000000100000000 * 0x100;
      iVar85 = __xmm_00000003000000020000000100000000._4_4_ * 0x100;
      iVar139 = _UNK_150631e08 * 0x100;
      iVar193 = _UNK_150631e0c * 0x100;
      iVar16 = ___xmm_0000000f0000000e0000000d0000000c * 0x100;
      iVar86 = _UNK_150689574 * 0x100;
      iVar140 = _UNK_150689578 * 0x100;
      iVar194 = _UNK_15068957c * 0x100;
      iVar17 = ___xmm_0000000b0000000a0000000900000008 * 0x100;
      iVar87 = _UNK_150689564 * 0x100;
      iVar141 = _UNK_150689568 * 0x100;
      iVar195 = _UNK_15068956c * 0x100;
      iVar18 = ___xmm_00000017000000160000001500000014 * 0x100;
      iVar88 = _UNK_1531ef464 * 0x100;
      iVar142 = _UNK_1531ef468 * 0x100;
      iVar196 = _UNK_1531ef46c * 0x100;
      iVar19 = ___xmm_00000013000000120000001100000010 * 0x100;
      iVar89 = _UNK_151aa2754 * 0x100;
      iVar143 = _UNK_151aa2758 * 0x100;
      iVar197 = _UNK_151aa275c * 0x100;
      iVar20 = ___xmm_0000001f0000001e0000001d0000001c * 0x100;
      iVar90 = _UNK_1531ef474 * 0x100;
      iVar144 = _UNK_1531ef478 * 0x100;
      iVar198 = _UNK_1531ef47c * 0x100;
      iVar21 = ___xmm_0000001b0000001a0000001900000018 * 0x100;
      iVar91 = _UNK_1531ef484 * 0x100;
      iVar145 = _UNK_1531ef488 * 0x100;
      iVar199 = _UNK_1531ef48c * 0x100;
      iVar22 = ___xmm_00000027000000260000002500000024 * 0x100;
      iVar92 = _UNK_1531ef494 * 0x100;
      iVar146 = _UNK_1531ef498 * 0x100;
      iVar200 = _UNK_1531ef49c * 0x100;
      iVar23 = ___xmm_00000023000000220000002100000020 * 0x100;
      iVar93 = _UNK_1531ef4a4 * 0x100;
      iVar147 = _UNK_1531ef4a8 * 0x100;
      iVar201 = _UNK_1531ef4ac * 0x100;
      iVar24 = ___xmm_0000002f0000002e0000002d0000002c * 0x100;
      iVar94 = _UNK_1531ef4b4 * 0x100;
      iVar148 = _UNK_1531ef4b8 * 0x100;
      iVar202 = _UNK_1531ef4bc * 0x100;
      iVar25 = ___xmm_0000002b0000002a0000002900000028 * 0x100;
      iVar95 = _UNK_1531ef4c4 * 0x100;
      iVar149 = _UNK_1531ef4c8 * 0x100;
      iVar203 = _UNK_1531ef4cc * 0x100;
      iVar26 = ___xmm_00000037000000360000003500000034 * 0x100;
      iVar96 = _UNK_1531ef4d4 * 0x100;
      iVar150 = _UNK_1531ef4d8 * 0x100;
      iVar204 = _UNK_1531ef4dc * 0x100;
      iVar27 = ___xmm_00000033000000320000003100000030 * 0x100;
      iVar97 = _UNK_1531ef4e4 * 0x100;
      iVar151 = _UNK_1531ef4e8 * 0x100;
      iVar205 = _UNK_1531ef4ec * 0x100;
      iVar28 = ___xmm_0000003f0000003e0000003d0000003c * 0x100;
      iVar98 = _UNK_1531ef4f4 * 0x100;
      iVar152 = _UNK_1531ef4f8 * 0x100;
      iVar206 = _UNK_1531ef4fc * 0x100;
      iVar29 = ___xmm_0000003b0000003a0000003900000038 * 0x100;
      iVar99 = _UNK_1531ef504 * 0x100;
      iVar153 = _UNK_1531ef508 * 0x100;
      iVar207 = _UNK_1531ef50c * 0x100;
      iVar30 = ___xmm_00000047000000460000004500000044 * 0x100;
      iVar100 = _UNK_1531ef514 * 0x100;
      iVar154 = _UNK_1531ef518 * 0x100;
      iVar208 = _UNK_1531ef51c * 0x100;
      iVar31 = ___xmm_00000043000000420000004100000040 * 0x100;
      iVar101 = _UNK_1531ef524 * 0x100;
      iVar155 = _UNK_1531ef528 * 0x100;
      iVar209 = _UNK_1531ef52c * 0x100;
      iVar32 = ___xmm_0000004f0000004e0000004d0000004c * 0x100;
      iVar102 = _UNK_1531ef534 * 0x100;
      iVar156 = _UNK_1531ef538 * 0x100;
      iVar210 = _UNK_1531ef53c * 0x100;
      iVar33 = ___xmm_0000004b0000004a0000004900000048 * 0x100;
      iVar103 = _UNK_1531ef544 * 0x100;
      iVar157 = _UNK_1531ef548 * 0x100;
      iVar211 = _UNK_1531ef54c * 0x100;
      iVar34 = ___xmm_00000057000000560000005500000054 * 0x100;
      iVar104 = _UNK_1531ef554 * 0x100;
      iVar158 = _UNK_1531ef558 * 0x100;
      iVar212 = _UNK_1531ef55c * 0x100;
      iVar35 = ___xmm_00000053000000520000005100000050 * 0x100;
      iVar105 = _UNK_1531ef564 * 0x100;
      iVar159 = _UNK_1531ef568 * 0x100;
      iVar213 = _UNK_1531ef56c * 0x100;
      iVar36 = ___xmm_0000005f0000005e0000005d0000005c * 0x100;
      iVar106 = _UNK_1531ef574 * 0x100;
      iVar160 = _UNK_1531ef578 * 0x100;
      iVar214 = _UNK_1531ef57c * 0x100;
      iVar37 = ___xmm_0000005b0000005a0000005900000058 * 0x100;
      iVar107 = _UNK_1531ef584 * 0x100;
      iVar161 = _UNK_1531ef588 * 0x100;
      iVar215 = _UNK_1531ef58c * 0x100;
      iVar38 = ___xmm_00000067000000660000006500000064 * 0x100;
      iVar108 = _UNK_1531ef594 * 0x100;
      iVar162 = _UNK_1531ef598 * 0x100;
      iVar216 = _UNK_1531ef59c * 0x100;
      iVar39 = ___xmm_00000063000000620000006100000060 * 0x100;
      iVar109 = _UNK_1531ef5a4 * 0x100;
      iVar163 = _UNK_1531ef5a8 * 0x100;
      iVar217 = _UNK_1531ef5ac * 0x100;
      iVar40 = ___xmm_0000006f0000006e0000006d0000006c * 0x100;
      iVar110 = _UNK_1531ef5b4 * 0x100;
      iVar164 = _UNK_1531ef5b8 * 0x100;
      iVar218 = _UNK_1531ef5bc * 0x100;
      iVar41 = ___xmm_0000006b0000006a0000006900000068 * 0x100;
      iVar111 = _UNK_1531ef5c4 * 0x100;
      iVar165 = _UNK_1531ef5c8 * 0x100;
      iVar219 = _UNK_1531ef5cc * 0x100;
      iVar42 = ___xmm_00000077000000760000007500000074 * 0x100;
      iVar112 = _UNK_1531ef5d4 * 0x100;
      iVar166 = _UNK_1531ef5d8 * 0x100;
      iVar220 = _UNK_1531ef5dc * 0x100;
      iVar43 = ___xmm_00000073000000720000007100000070 * 0x100;
      iVar113 = _UNK_1531ef5e4 * 0x100;
      iVar167 = _UNK_1531ef5e8 * 0x100;
      iVar221 = _UNK_1531ef5ec * 0x100;
      iVar44 = ___xmm_0000007f0000007e0000007d0000007c * 0x100;
      iVar114 = _UNK_1531ef5f4 * 0x100;
      iVar168 = _UNK_1531ef5f8 * 0x100;
      iVar222 = _UNK_1531ef5fc * 0x100;
      iVar45 = ___xmm_0000007b0000007a0000007900000078 * 0x100;
      iVar115 = _UNK_1531ef604 * 0x100;
      iVar169 = _UNK_1531ef608 * 0x100;
      iVar223 = _UNK_1531ef60c * 0x100;
      iVar46 = ___xmm_00000087000000860000008500000084 * 0x100;
      iVar116 = _UNK_1531ef614 * 0x100;
      iVar170 = _UNK_1531ef618 * 0x100;
      iVar224 = _UNK_1531ef61c * 0x100;
      iVar47 = ___xmm_00000083000000820000008100000080 * 0x100;
      iVar117 = _UNK_1531ef624 * 0x100;
      iVar171 = _UNK_1531ef628 * 0x100;
      iVar225 = _UNK_1531ef62c * 0x100;
      iVar48 = ___xmm_0000008f0000008e0000008d0000008c * 0x100;
      iVar118 = _UNK_1531ef634 * 0x100;
      iVar172 = _UNK_1531ef638 * 0x100;
      iVar226 = _UNK_1531ef63c * 0x100;
      iVar49 = ___xmm_0000008b0000008a0000008900000088 * 0x100;
      iVar119 = _UNK_1531ef644 * 0x100;
      iVar173 = _UNK_1531ef648 * 0x100;
      iVar227 = _UNK_1531ef64c * 0x100;
      iVar50 = ___xmm_00000097000000960000009500000094 * 0x100;
      iVar120 = _UNK_1531ef654 * 0x100;
      iVar174 = _UNK_1531ef658 * 0x100;
      iVar228 = _UNK_1531ef65c * 0x100;
      iVar51 = ___xmm_00000093000000920000009100000090 * 0x100;
      iVar121 = _UNK_1531ef664 * 0x100;
      iVar175 = _UNK_1531ef668 * 0x100;
      iVar229 = _UNK_1531ef66c * 0x100;
      iVar52 = ___xmm_0000009f0000009e0000009d0000009c * 0x100;
      iVar122 = _UNK_1531ef674 * 0x100;
      iVar176 = _UNK_1531ef678 * 0x100;
      iVar230 = _UNK_1531ef67c * 0x100;
      iVar53 = ___xmm_0000009b0000009a0000009900000098 * 0x100;
      iVar123 = _UNK_1531ef684 * 0x100;
      iVar177 = _UNK_1531ef688 * 0x100;
      iVar231 = _UNK_1531ef68c * 0x100;
      iVar54 = ___xmm_000000a7000000a6000000a5000000a4 * 0x100;
      iVar124 = _UNK_1531ef694 * 0x100;
      iVar178 = _UNK_1531ef698 * 0x100;
      iVar232 = _UNK_1531ef69c * 0x100;
      iVar55 = ___xmm_000000a3000000a2000000a1000000a0 * 0x100;
      iVar125 = _UNK_1531ef6a4 * 0x100;
      iVar179 = _UNK_1531ef6a8 * 0x100;
      iVar233 = _UNK_1531ef6ac * 0x100;
      iVar56 = ___xmm_000000af000000ae000000ad000000ac * 0x100;
      iVar126 = _UNK_1531ef6b4 * 0x100;
      iVar180 = _UNK_1531ef6b8 * 0x100;
      iVar234 = _UNK_1531ef6bc * 0x100;
      iVar57 = ___xmm_000000ab000000aa000000a9000000a8 * 0x100;
      iVar127 = _UNK_1531ef6c4 * 0x100;
      iVar181 = _UNK_1531ef6c8 * 0x100;
      iVar235 = _UNK_1531ef6cc * 0x100;
      iVar58 = ___xmm_000000b7000000b6000000b5000000b4 * 0x100;
      iVar128 = _UNK_1531ef6d4 * 0x100;
      iVar182 = _UNK_1531ef6d8 * 0x100;
      iVar236 = _UNK_1531ef6dc * 0x100;
      iVar59 = ___xmm_000000b3000000b2000000b1000000b0 * 0x100;
      iVar129 = _UNK_1531ef6e4 * 0x100;
      iVar183 = _UNK_1531ef6e8 * 0x100;
      iVar237 = _UNK_1531ef6ec * 0x100;
      iVar60 = ___xmm_000000bf000000be000000bd000000bc * 0x100;
      iVar130 = _UNK_1531ef6f4 * 0x100;
      iVar184 = _UNK_1531ef6f8 * 0x100;
      iVar238 = _UNK_1531ef6fc * 0x100;
      iVar61 = ___xmm_000000bb000000ba000000b9000000b8 * 0x100;
      iVar131 = _UNK_1531ef704 * 0x100;
      iVar185 = _UNK_1531ef708 * 0x100;
      iVar239 = _UNK_1531ef70c * 0x100;
      iVar62 = ___xmm_000000c7000000c6000000c5000000c4 * 0x100;
      iVar132 = _UNK_1531ef714 * 0x100;
      iVar186 = _UNK_1531ef718 * 0x100;
      iVar240 = _UNK_1531ef71c * 0x100;
      iVar63 = ___xmm_000000c3000000c2000000c1000000c0 * 0x100;
      iVar133 = _UNK_1531ef724 * 0x100;
      iVar187 = _UNK_1531ef728 * 0x100;
      iVar241 = _UNK_1531ef72c * 0x100;
      iVar64 = ___xmm_000000cf000000ce000000cd000000cc * 0x100;
      iVar134 = _UNK_1531ef734 * 0x100;
      iVar188 = _UNK_1531ef738 * 0x100;
      iVar242 = _UNK_1531ef73c * 0x100;
      iVar65 = ___xmm_000000cb000000ca000000c9000000c8 * 0x100;
      iVar135 = _UNK_1531ef744 * 0x100;
      iVar189 = _UNK_1531ef748 * 0x100;
      iVar243 = _UNK_1531ef74c * 0x100;
      iVar66 = ___xmm_000000d7000000d6000000d5000000d4 * 0x100;
      iVar136 = _UNK_1531ef754 * 0x100;
      iVar190 = _UNK_1531ef758 * 0x100;
      iVar244 = _UNK_1531ef75c * 0x100;
      iVar67 = ___xmm_000000d3000000d2000000d1000000d0 * 0x100;
      iVar137 = _UNK_1531ef764 * 0x100;
      iVar191 = _UNK_1531ef768 * 0x100;
      iVar245 = _UNK_1531ef76c * 0x100;
      iVar311 = ___xmm_000000df000000de000000dd000000dc * 0x100;
      iVar312 = _UNK_1531ef774 * 0x100;
      iVar313 = _UNK_1531ef778 * 0x100;
      iVar314 = _UNK_1531ef77c * 0x100;
      iVar315 = ___xmm_000000db000000da000000d9000000d8 * 0x100;
      iVar316 = _UNK_1531ef784 * 0x100;
      iVar317 = _UNK_1531ef788 * 0x100;
      iVar318 = _UNK_1531ef78c * 0x100;
      iVar319 = ___xmm_000000e7000000e6000000e5000000e4 * 0x100;
      iVar320 = _UNK_1531ef794 * 0x100;
      iVar321 = _UNK_1531ef798 * 0x100;
      iVar322 = _UNK_1531ef79c * 0x100;
      iVar323 = ___xmm_000000e3000000e2000000e1000000e0 * 0x100;
      iVar324 = _UNK_1531ef7a4 * 0x100;
      iVar325 = _UNK_1531ef7a8 * 0x100;
      iVar326 = _UNK_1531ef7ac * 0x100;
      iVar327 = ___xmm_000000ef000000ee000000ed000000ec * 0x100;
      iVar328 = _UNK_1531ef7b4 * 0x100;
      iVar329 = _UNK_1531ef7b8 * 0x100;
      iVar330 = _UNK_1531ef7bc * 0x100;
      iVar331 = ___xmm_000000eb000000ea000000e9000000e8 * 0x100;
      iVar332 = _UNK_1531ef7c4 * 0x100;
      iVar333 = _UNK_1531ef7c8 * 0x100;
      iVar334 = _UNK_1531ef7cc * 0x100;
      iVar294 = ___xmm_000000f7000000f6000000f5000000f4 * 0x100;
      iVar295 = _UNK_1531ef7d4 * 0x100;
      iVar296 = _UNK_1531ef7d8 * 0x100;
      iVar297 = _UNK_1531ef7dc * 0x100;
      iVar298 = ___xmm_000000f3000000f2000000f1000000f0 * 0x100;
      iVar300 = _UNK_1531ef7e4 * 0x100;
      iVar301 = _UNK_1531ef7e8 * 0x100;
      iVar302 = _UNK_1531ef7ec * 0x100;
      iVar303 = ___xmm_000000ff000000fe000000fd000000fc * 0x100;
      iVar304 = _UNK_1531ef7f4 * 0x100;
      iVar305 = _UNK_1531ef7f8 * 0x100;
      iVar306 = _UNK_1531ef7fc * 0x100;
      iVar307 = ___xmm_000000fb000000fa000000f9000000f8 * 0x100;
      iVar308 = _UNK_1531ef804 * 0x100;
      iVar309 = _UNK_1531ef808 * 0x100;
      iVar310 = _UNK_1531ef80c * 0x100;
      lVar9 = 0;
      do {
        pauVar6 = png_malloc(param_1,0x200);
        iVar8 = (int)lVar9;
        auVar246._0_4_ = (iVar11 + iVar8) * 0x10000 >> 0x10;
        auVar246._4_4_ = (iVar84 + iVar8) * 0x10000 >> 0x10;
        auVar246._8_4_ = (iVar138 + iVar8) * 0x10000 >> 0x10;
        auVar246._12_4_ = (iVar192 + iVar8) * 0x10000 >> 0x10;
        auVar279._0_4_ = (iVar15 + iVar8) * 0x10000 >> 0x10;
        auVar279._4_4_ = (iVar85 + iVar8) * 0x10000 >> 0x10;
        auVar279._8_4_ = (iVar139 + iVar8) * 0x10000 >> 0x10;
        auVar279._12_4_ = (iVar193 + iVar8) * 0x10000 >> 0x10;
        auVar68 = packssdw(auVar279,auVar246);
        auVar247._0_4_ = (iVar16 + iVar8) * 0x10000 >> 0x10;
        auVar247._4_4_ = (iVar86 + iVar8) * 0x10000 >> 0x10;
        auVar247._8_4_ = (iVar140 + iVar8) * 0x10000 >> 0x10;
        auVar247._12_4_ = (iVar194 + iVar8) * 0x10000 >> 0x10;
        auVar278._0_4_ = (iVar17 + iVar8) * 0x10000 >> 0x10;
        auVar278._4_4_ = (iVar87 + iVar8) * 0x10000 >> 0x10;
        auVar278._8_4_ = (iVar141 + iVar8) * 0x10000 >> 0x10;
        auVar278._12_4_ = (iVar195 + iVar8) * 0x10000 >> 0x10;
        auVar279 = packssdw(auVar278,auVar247);
        *pauVar6 = auVar68;
        pauVar6[1] = auVar279;
        auVar248._0_4_ = (iVar18 + iVar8) * 0x10000 >> 0x10;
        auVar248._4_4_ = (iVar88 + iVar8) * 0x10000 >> 0x10;
        auVar248._8_4_ = (iVar142 + iVar8) * 0x10000 >> 0x10;
        auVar248._12_4_ = (iVar196 + iVar8) * 0x10000 >> 0x10;
        auVar69._0_4_ = (iVar19 + iVar8) * 0x10000 >> 0x10;
        auVar69._4_4_ = (iVar89 + iVar8) * 0x10000 >> 0x10;
        auVar69._8_4_ = (iVar143 + iVar8) * 0x10000 >> 0x10;
        auVar69._12_4_ = (iVar197 + iVar8) * 0x10000 >> 0x10;
        auVar68 = packssdw(auVar69,auVar248);
        auVar249._0_4_ = (iVar20 + iVar8) * 0x10000 >> 0x10;
        auVar249._4_4_ = (iVar90 + iVar8) * 0x10000 >> 0x10;
        auVar249._8_4_ = (iVar144 + iVar8) * 0x10000 >> 0x10;
        auVar249._12_4_ = (iVar198 + iVar8) * 0x10000 >> 0x10;
        auVar280._0_4_ = (iVar21 + iVar8) * 0x10000 >> 0x10;
        auVar280._4_4_ = (iVar91 + iVar8) * 0x10000 >> 0x10;
        auVar280._8_4_ = (iVar145 + iVar8) * 0x10000 >> 0x10;
        auVar280._12_4_ = (iVar199 + iVar8) * 0x10000 >> 0x10;
        auVar279 = packssdw(auVar280,auVar249);
        pauVar6[2] = auVar68;
        pauVar6[3] = auVar279;
        auVar250._0_4_ = (iVar22 + iVar8) * 0x10000 >> 0x10;
        auVar250._4_4_ = (iVar92 + iVar8) * 0x10000 >> 0x10;
        auVar250._8_4_ = (iVar146 + iVar8) * 0x10000 >> 0x10;
        auVar250._12_4_ = (iVar200 + iVar8) * 0x10000 >> 0x10;
        auVar70._0_4_ = (iVar23 + iVar8) * 0x10000 >> 0x10;
        auVar70._4_4_ = (iVar93 + iVar8) * 0x10000 >> 0x10;
        auVar70._8_4_ = (iVar147 + iVar8) * 0x10000 >> 0x10;
        auVar70._12_4_ = (iVar201 + iVar8) * 0x10000 >> 0x10;
        auVar68 = packssdw(auVar70,auVar250);
        auVar251._0_4_ = (iVar24 + iVar8) * 0x10000 >> 0x10;
        auVar251._4_4_ = (iVar94 + iVar8) * 0x10000 >> 0x10;
        auVar251._8_4_ = (iVar148 + iVar8) * 0x10000 >> 0x10;
        auVar251._12_4_ = (iVar202 + iVar8) * 0x10000 >> 0x10;
        auVar281._0_4_ = (iVar25 + iVar8) * 0x10000 >> 0x10;
        auVar281._4_4_ = (iVar95 + iVar8) * 0x10000 >> 0x10;
        auVar281._8_4_ = (iVar149 + iVar8) * 0x10000 >> 0x10;
        auVar281._12_4_ = (iVar203 + iVar8) * 0x10000 >> 0x10;
        auVar279 = packssdw(auVar281,auVar251);
        pauVar6[4] = auVar68;
        pauVar6[5] = auVar279;
        auVar252._0_4_ = (iVar26 + iVar8) * 0x10000 >> 0x10;
        auVar252._4_4_ = (iVar96 + iVar8) * 0x10000 >> 0x10;
        auVar252._8_4_ = (iVar150 + iVar8) * 0x10000 >> 0x10;
        auVar252._12_4_ = (iVar204 + iVar8) * 0x10000 >> 0x10;
        auVar71._0_4_ = (iVar27 + iVar8) * 0x10000 >> 0x10;
        auVar71._4_4_ = (iVar97 + iVar8) * 0x10000 >> 0x10;
        auVar71._8_4_ = (iVar151 + iVar8) * 0x10000 >> 0x10;
        auVar71._12_4_ = (iVar205 + iVar8) * 0x10000 >> 0x10;
        auVar68 = packssdw(auVar71,auVar252);
        auVar253._0_4_ = (iVar28 + iVar8) * 0x10000 >> 0x10;
        auVar253._4_4_ = (iVar98 + iVar8) * 0x10000 >> 0x10;
        auVar253._8_4_ = (iVar152 + iVar8) * 0x10000 >> 0x10;
        auVar253._12_4_ = (iVar206 + iVar8) * 0x10000 >> 0x10;
        auVar282._0_4_ = (iVar29 + iVar8) * 0x10000 >> 0x10;
        auVar282._4_4_ = (iVar99 + iVar8) * 0x10000 >> 0x10;
        auVar282._8_4_ = (iVar153 + iVar8) * 0x10000 >> 0x10;
        auVar282._12_4_ = (iVar207 + iVar8) * 0x10000 >> 0x10;
        auVar279 = packssdw(auVar282,auVar253);
        pauVar6[6] = auVar68;
        pauVar6[7] = auVar279;
        auVar254._0_4_ = (iVar30 + iVar8) * 0x10000 >> 0x10;
        auVar254._4_4_ = (iVar100 + iVar8) * 0x10000 >> 0x10;
        auVar254._8_4_ = (iVar154 + iVar8) * 0x10000 >> 0x10;
        auVar254._12_4_ = (iVar208 + iVar8) * 0x10000 >> 0x10;
        auVar72._0_4_ = (iVar31 + iVar8) * 0x10000 >> 0x10;
        auVar72._4_4_ = (iVar101 + iVar8) * 0x10000 >> 0x10;
        auVar72._8_4_ = (iVar155 + iVar8) * 0x10000 >> 0x10;
        auVar72._12_4_ = (iVar209 + iVar8) * 0x10000 >> 0x10;
        auVar68 = packssdw(auVar72,auVar254);
        auVar255._0_4_ = (iVar32 + iVar8) * 0x10000 >> 0x10;
        auVar255._4_4_ = (iVar102 + iVar8) * 0x10000 >> 0x10;
        auVar255._8_4_ = (iVar156 + iVar8) * 0x10000 >> 0x10;
        auVar255._12_4_ = (iVar210 + iVar8) * 0x10000 >> 0x10;
        auVar283._0_4_ = (iVar33 + iVar8) * 0x10000 >> 0x10;
        auVar283._4_4_ = (iVar103 + iVar8) * 0x10000 >> 0x10;
        auVar283._8_4_ = (iVar157 + iVar8) * 0x10000 >> 0x10;
        auVar283._12_4_ = (iVar211 + iVar8) * 0x10000 >> 0x10;
        auVar279 = packssdw(auVar283,auVar255);
        pauVar6[8] = auVar68;
        pauVar6[9] = auVar279;
        auVar256._0_4_ = (iVar34 + iVar8) * 0x10000 >> 0x10;
        auVar256._4_4_ = (iVar104 + iVar8) * 0x10000 >> 0x10;
        auVar256._8_4_ = (iVar158 + iVar8) * 0x10000 >> 0x10;
        auVar256._12_4_ = (iVar212 + iVar8) * 0x10000 >> 0x10;
        auVar73._0_4_ = (iVar35 + iVar8) * 0x10000 >> 0x10;
        auVar73._4_4_ = (iVar105 + iVar8) * 0x10000 >> 0x10;
        auVar73._8_4_ = (iVar159 + iVar8) * 0x10000 >> 0x10;
        auVar73._12_4_ = (iVar213 + iVar8) * 0x10000 >> 0x10;
        auVar68 = packssdw(auVar73,auVar256);
        auVar257._0_4_ = (iVar36 + iVar8) * 0x10000 >> 0x10;
        auVar257._4_4_ = (iVar106 + iVar8) * 0x10000 >> 0x10;
        auVar257._8_4_ = (iVar160 + iVar8) * 0x10000 >> 0x10;
        auVar257._12_4_ = (iVar214 + iVar8) * 0x10000 >> 0x10;
        auVar284._0_4_ = (iVar37 + iVar8) * 0x10000 >> 0x10;
        auVar284._4_4_ = (iVar107 + iVar8) * 0x10000 >> 0x10;
        auVar284._8_4_ = (iVar161 + iVar8) * 0x10000 >> 0x10;
        auVar284._12_4_ = (iVar215 + iVar8) * 0x10000 >> 0x10;
        auVar279 = packssdw(auVar284,auVar257);
        pauVar6[10] = auVar68;
        pauVar6[0xb] = auVar279;
        auVar258._0_4_ = (iVar38 + iVar8) * 0x10000 >> 0x10;
        auVar258._4_4_ = (iVar108 + iVar8) * 0x10000 >> 0x10;
        auVar258._8_4_ = (iVar162 + iVar8) * 0x10000 >> 0x10;
        auVar258._12_4_ = (iVar216 + iVar8) * 0x10000 >> 0x10;
        auVar74._0_4_ = (iVar39 + iVar8) * 0x10000 >> 0x10;
        auVar74._4_4_ = (iVar109 + iVar8) * 0x10000 >> 0x10;
        auVar74._8_4_ = (iVar163 + iVar8) * 0x10000 >> 0x10;
        auVar74._12_4_ = (iVar217 + iVar8) * 0x10000 >> 0x10;
        auVar68 = packssdw(auVar74,auVar258);
        auVar259._0_4_ = (iVar40 + iVar8) * 0x10000 >> 0x10;
        auVar259._4_4_ = (iVar110 + iVar8) * 0x10000 >> 0x10;
        auVar259._8_4_ = (iVar164 + iVar8) * 0x10000 >> 0x10;
        auVar259._12_4_ = (iVar218 + iVar8) * 0x10000 >> 0x10;
        auVar285._0_4_ = (iVar41 + iVar8) * 0x10000 >> 0x10;
        auVar285._4_4_ = (iVar111 + iVar8) * 0x10000 >> 0x10;
        auVar285._8_4_ = (iVar165 + iVar8) * 0x10000 >> 0x10;
        auVar285._12_4_ = (iVar219 + iVar8) * 0x10000 >> 0x10;
        auVar279 = packssdw(auVar285,auVar259);
        pauVar6[0xc] = auVar68;
        pauVar6[0xd] = auVar279;
        auVar260._0_4_ = (iVar42 + iVar8) * 0x10000 >> 0x10;
        auVar260._4_4_ = (iVar112 + iVar8) * 0x10000 >> 0x10;
        auVar260._8_4_ = (iVar166 + iVar8) * 0x10000 >> 0x10;
        auVar260._12_4_ = (iVar220 + iVar8) * 0x10000 >> 0x10;
        auVar75._0_4_ = (iVar43 + iVar8) * 0x10000 >> 0x10;
        auVar75._4_4_ = (iVar113 + iVar8) * 0x10000 >> 0x10;
        auVar75._8_4_ = (iVar167 + iVar8) * 0x10000 >> 0x10;
        auVar75._12_4_ = (iVar221 + iVar8) * 0x10000 >> 0x10;
        auVar68 = packssdw(auVar75,auVar260);
        auVar261._0_4_ = (iVar44 + iVar8) * 0x10000 >> 0x10;
        auVar261._4_4_ = (iVar114 + iVar8) * 0x10000 >> 0x10;
        auVar261._8_4_ = (iVar168 + iVar8) * 0x10000 >> 0x10;
        auVar261._12_4_ = (iVar222 + iVar8) * 0x10000 >> 0x10;
        auVar286._0_4_ = (iVar45 + iVar8) * 0x10000 >> 0x10;
        auVar286._4_4_ = (iVar115 + iVar8) * 0x10000 >> 0x10;
        auVar286._8_4_ = (iVar169 + iVar8) * 0x10000 >> 0x10;
        auVar286._12_4_ = (iVar223 + iVar8) * 0x10000 >> 0x10;
        auVar279 = packssdw(auVar286,auVar261);
        pauVar6[0xe] = auVar68;
        pauVar6[0xf] = auVar279;
        auVar262._0_4_ = (iVar46 + iVar8) * 0x10000 >> 0x10;
        auVar262._4_4_ = (iVar116 + iVar8) * 0x10000 >> 0x10;
        auVar262._8_4_ = (iVar170 + iVar8) * 0x10000 >> 0x10;
        auVar262._12_4_ = (iVar224 + iVar8) * 0x10000 >> 0x10;
        auVar76._0_4_ = (iVar47 + iVar8) * 0x10000 >> 0x10;
        auVar76._4_4_ = (iVar117 + iVar8) * 0x10000 >> 0x10;
        auVar76._8_4_ = (iVar171 + iVar8) * 0x10000 >> 0x10;
        auVar76._12_4_ = (iVar225 + iVar8) * 0x10000 >> 0x10;
        auVar68 = packssdw(auVar76,auVar262);
        auVar263._0_4_ = (iVar48 + iVar8) * 0x10000 >> 0x10;
        auVar263._4_4_ = (iVar118 + iVar8) * 0x10000 >> 0x10;
        auVar263._8_4_ = (iVar172 + iVar8) * 0x10000 >> 0x10;
        auVar263._12_4_ = (iVar226 + iVar8) * 0x10000 >> 0x10;
        auVar287._0_4_ = (iVar49 + iVar8) * 0x10000 >> 0x10;
        auVar287._4_4_ = (iVar119 + iVar8) * 0x10000 >> 0x10;
        auVar287._8_4_ = (iVar173 + iVar8) * 0x10000 >> 0x10;
        auVar287._12_4_ = (iVar227 + iVar8) * 0x10000 >> 0x10;
        auVar279 = packssdw(auVar287,auVar263);
        pauVar6[0x10] = auVar68;
        pauVar6[0x11] = auVar279;
        auVar264._0_4_ = (iVar50 + iVar8) * 0x10000 >> 0x10;
        auVar264._4_4_ = (iVar120 + iVar8) * 0x10000 >> 0x10;
        auVar264._8_4_ = (iVar174 + iVar8) * 0x10000 >> 0x10;
        auVar264._12_4_ = (iVar228 + iVar8) * 0x10000 >> 0x10;
        auVar77._0_4_ = (iVar51 + iVar8) * 0x10000 >> 0x10;
        auVar77._4_4_ = (iVar121 + iVar8) * 0x10000 >> 0x10;
        auVar77._8_4_ = (iVar175 + iVar8) * 0x10000 >> 0x10;
        auVar77._12_4_ = (iVar229 + iVar8) * 0x10000 >> 0x10;
        auVar68 = packssdw(auVar77,auVar264);
        auVar265._0_4_ = (iVar52 + iVar8) * 0x10000 >> 0x10;
        auVar265._4_4_ = (iVar122 + iVar8) * 0x10000 >> 0x10;
        auVar265._8_4_ = (iVar176 + iVar8) * 0x10000 >> 0x10;
        auVar265._12_4_ = (iVar230 + iVar8) * 0x10000 >> 0x10;
        auVar288._0_4_ = (iVar53 + iVar8) * 0x10000 >> 0x10;
        auVar288._4_4_ = (iVar123 + iVar8) * 0x10000 >> 0x10;
        auVar288._8_4_ = (iVar177 + iVar8) * 0x10000 >> 0x10;
        auVar288._12_4_ = (iVar231 + iVar8) * 0x10000 >> 0x10;
        auVar279 = packssdw(auVar288,auVar265);
        pauVar6[0x12] = auVar68;
        pauVar6[0x13] = auVar279;
        auVar266._0_4_ = (iVar54 + iVar8) * 0x10000 >> 0x10;
        auVar266._4_4_ = (iVar124 + iVar8) * 0x10000 >> 0x10;
        auVar266._8_4_ = (iVar178 + iVar8) * 0x10000 >> 0x10;
        auVar266._12_4_ = (iVar232 + iVar8) * 0x10000 >> 0x10;
        auVar78._0_4_ = (iVar55 + iVar8) * 0x10000 >> 0x10;
        auVar78._4_4_ = (iVar125 + iVar8) * 0x10000 >> 0x10;
        auVar78._8_4_ = (iVar179 + iVar8) * 0x10000 >> 0x10;
        auVar78._12_4_ = (iVar233 + iVar8) * 0x10000 >> 0x10;
        auVar68 = packssdw(auVar78,auVar266);
        auVar267._0_4_ = (iVar56 + iVar8) * 0x10000 >> 0x10;
        auVar267._4_4_ = (iVar126 + iVar8) * 0x10000 >> 0x10;
        auVar267._8_4_ = (iVar180 + iVar8) * 0x10000 >> 0x10;
        auVar267._12_4_ = (iVar234 + iVar8) * 0x10000 >> 0x10;
        auVar289._0_4_ = (iVar57 + iVar8) * 0x10000 >> 0x10;
        auVar289._4_4_ = (iVar127 + iVar8) * 0x10000 >> 0x10;
        auVar289._8_4_ = (iVar181 + iVar8) * 0x10000 >> 0x10;
        auVar289._12_4_ = (iVar235 + iVar8) * 0x10000 >> 0x10;
        auVar279 = packssdw(auVar289,auVar267);
        pauVar6[0x14] = auVar68;
        pauVar6[0x15] = auVar279;
        auVar268._0_4_ = (iVar58 + iVar8) * 0x10000 >> 0x10;
        auVar268._4_4_ = (iVar128 + iVar8) * 0x10000 >> 0x10;
        auVar268._8_4_ = (iVar182 + iVar8) * 0x10000 >> 0x10;
        auVar268._12_4_ = (iVar236 + iVar8) * 0x10000 >> 0x10;
        auVar79._0_4_ = (iVar59 + iVar8) * 0x10000 >> 0x10;
        auVar79._4_4_ = (iVar129 + iVar8) * 0x10000 >> 0x10;
        auVar79._8_4_ = (iVar183 + iVar8) * 0x10000 >> 0x10;
        auVar79._12_4_ = (iVar237 + iVar8) * 0x10000 >> 0x10;
        auVar68 = packssdw(auVar79,auVar268);
        auVar269._0_4_ = (iVar60 + iVar8) * 0x10000 >> 0x10;
        auVar269._4_4_ = (iVar130 + iVar8) * 0x10000 >> 0x10;
        auVar269._8_4_ = (iVar184 + iVar8) * 0x10000 >> 0x10;
        auVar269._12_4_ = (iVar238 + iVar8) * 0x10000 >> 0x10;
        auVar290._0_4_ = (iVar61 + iVar8) * 0x10000 >> 0x10;
        auVar290._4_4_ = (iVar131 + iVar8) * 0x10000 >> 0x10;
        auVar290._8_4_ = (iVar185 + iVar8) * 0x10000 >> 0x10;
        auVar290._12_4_ = (iVar239 + iVar8) * 0x10000 >> 0x10;
        auVar279 = packssdw(auVar290,auVar269);
        pauVar6[0x16] = auVar68;
        pauVar6[0x17] = auVar279;
        auVar270._0_4_ = (iVar62 + iVar8) * 0x10000 >> 0x10;
        auVar270._4_4_ = (iVar132 + iVar8) * 0x10000 >> 0x10;
        auVar270._8_4_ = (iVar186 + iVar8) * 0x10000 >> 0x10;
        auVar270._12_4_ = (iVar240 + iVar8) * 0x10000 >> 0x10;
        auVar80._0_4_ = (iVar63 + iVar8) * 0x10000 >> 0x10;
        auVar80._4_4_ = (iVar133 + iVar8) * 0x10000 >> 0x10;
        auVar80._8_4_ = (iVar187 + iVar8) * 0x10000 >> 0x10;
        auVar80._12_4_ = (iVar241 + iVar8) * 0x10000 >> 0x10;
        auVar68 = packssdw(auVar80,auVar270);
        auVar271._0_4_ = (iVar64 + iVar8) * 0x10000 >> 0x10;
        auVar271._4_4_ = (iVar134 + iVar8) * 0x10000 >> 0x10;
        auVar271._8_4_ = (iVar188 + iVar8) * 0x10000 >> 0x10;
        auVar271._12_4_ = (iVar242 + iVar8) * 0x10000 >> 0x10;
        auVar291._0_4_ = (iVar65 + iVar8) * 0x10000 >> 0x10;
        auVar291._4_4_ = (iVar135 + iVar8) * 0x10000 >> 0x10;
        auVar291._8_4_ = (iVar189 + iVar8) * 0x10000 >> 0x10;
        auVar291._12_4_ = (iVar243 + iVar8) * 0x10000 >> 0x10;
        auVar279 = packssdw(auVar291,auVar271);
        pauVar6[0x18] = auVar68;
        pauVar6[0x19] = auVar279;
        auVar272._0_4_ = (iVar66 + iVar8) * 0x10000 >> 0x10;
        auVar272._4_4_ = (iVar136 + iVar8) * 0x10000 >> 0x10;
        auVar272._8_4_ = (iVar190 + iVar8) * 0x10000 >> 0x10;
        auVar272._12_4_ = (iVar244 + iVar8) * 0x10000 >> 0x10;
        auVar81._0_4_ = (iVar67 + iVar8) * 0x10000 >> 0x10;
        auVar81._4_4_ = (iVar137 + iVar8) * 0x10000 >> 0x10;
        auVar81._8_4_ = (iVar191 + iVar8) * 0x10000 >> 0x10;
        auVar81._12_4_ = (iVar245 + iVar8) * 0x10000 >> 0x10;
        auVar68 = packssdw(auVar81,auVar272);
        auVar273._0_4_ = (iVar311 + iVar8) * 0x10000 >> 0x10;
        auVar273._4_4_ = (iVar312 + iVar8) * 0x10000 >> 0x10;
        auVar273._8_4_ = (iVar313 + iVar8) * 0x10000 >> 0x10;
        auVar273._12_4_ = (iVar314 + iVar8) * 0x10000 >> 0x10;
        auVar292._0_4_ = (iVar315 + iVar8) * 0x10000 >> 0x10;
        auVar292._4_4_ = (iVar316 + iVar8) * 0x10000 >> 0x10;
        auVar292._8_4_ = (iVar317 + iVar8) * 0x10000 >> 0x10;
        auVar292._12_4_ = (iVar318 + iVar8) * 0x10000 >> 0x10;
        auVar279 = packssdw(auVar292,auVar273);
        pauVar6[0x1a] = auVar68;
        pauVar6[0x1b] = auVar279;
        auVar274._0_4_ = (iVar319 + iVar8) * 0x10000 >> 0x10;
        auVar274._4_4_ = (iVar320 + iVar8) * 0x10000 >> 0x10;
        auVar274._8_4_ = (iVar321 + iVar8) * 0x10000 >> 0x10;
        auVar274._12_4_ = (iVar322 + iVar8) * 0x10000 >> 0x10;
        auVar82._0_4_ = (iVar323 + iVar8) * 0x10000 >> 0x10;
        auVar82._4_4_ = (iVar324 + iVar8) * 0x10000 >> 0x10;
        auVar82._8_4_ = (iVar325 + iVar8) * 0x10000 >> 0x10;
        auVar82._12_4_ = (iVar326 + iVar8) * 0x10000 >> 0x10;
        auVar68 = packssdw(auVar82,auVar274);
        auVar275._0_4_ = (iVar327 + iVar8) * 0x10000 >> 0x10;
        auVar275._4_4_ = (iVar328 + iVar8) * 0x10000 >> 0x10;
        auVar275._8_4_ = (iVar329 + iVar8) * 0x10000 >> 0x10;
        auVar275._12_4_ = (iVar330 + iVar8) * 0x10000 >> 0x10;
        auVar293._0_4_ = (iVar331 + iVar8) * 0x10000 >> 0x10;
        auVar293._4_4_ = (iVar332 + iVar8) * 0x10000 >> 0x10;
        auVar293._8_4_ = (iVar333 + iVar8) * 0x10000 >> 0x10;
        auVar293._12_4_ = (iVar334 + iVar8) * 0x10000 >> 0x10;
        auVar279 = packssdw(auVar293,auVar275);
        pauVar6[0x1c] = auVar68;
        pauVar6[0x1d] = auVar279;
        auVar276._0_4_ = (iVar294 + iVar8) * 0x10000 >> 0x10;
        auVar276._4_4_ = (iVar295 + iVar8) * 0x10000 >> 0x10;
        auVar276._8_4_ = (iVar296 + iVar8) * 0x10000 >> 0x10;
        auVar276._12_4_ = (iVar297 + iVar8) * 0x10000 >> 0x10;
        auVar83._0_4_ = (iVar298 + iVar8) * 0x10000 >> 0x10;
        auVar83._4_4_ = (iVar300 + iVar8) * 0x10000 >> 0x10;
        auVar83._8_4_ = (iVar301 + iVar8) * 0x10000 >> 0x10;
        auVar83._12_4_ = (iVar302 + iVar8) * 0x10000 >> 0x10;
        auVar279 = packssdw(auVar83,auVar276);
        auVar68._0_4_ = (iVar8 + iVar303) * 0x10000 >> 0x10;
        auVar68._4_4_ = (iVar8 + iVar304) * 0x10000 >> 0x10;
        auVar68._8_4_ = (iVar8 + iVar305) * 0x10000 >> 0x10;
        auVar68._12_4_ = (iVar8 + iVar306) * 0x10000 >> 0x10;
        auVar277._0_4_ = (iVar307 + iVar8) * 0x10000 >> 0x10;
        auVar277._4_4_ = (iVar308 + iVar8) * 0x10000 >> 0x10;
        auVar277._8_4_ = (iVar309 + iVar8) * 0x10000 >> 0x10;
        auVar277._12_4_ = (iVar310 + iVar8) * 0x10000 >> 0x10;
        auVar68 = packssdw(auVar277,auVar68);
        pauVar6[0x1e] = auVar279;
        pauVar6[0x1f] = auVar68;
        ppuVar4[lVar9] = (ushort *)pauVar6;
        lVar9 = lVar9 + 1;
      } while (lVar9 != 0x100);
    }
    else {
      uVar12 = 0;
      do {
        puVar5 = png_malloc(param_1,0x200);
        ppuVar4[uVar12] = puVar5;
        lVar9 = 0;
        do {
          puVar5[lVar9] =
               (ushort)((uint)((((int)lVar9 << (bVar7 & 0x1f)) + (int)uVar12) * 0xffff + iVar11) /
                       uVar13);
          puVar5[lVar9 + 1] =
               (ushort)((uint)((((int)lVar9 + 1 << (bVar7 & 0x1f)) + (int)uVar12) * 0xffff + iVar11)
                       / uVar13);
          lVar9 = lVar9 + 2;
        } while (lVar9 != 0x100);
        uVar12 = uVar12 + 1;
      } while (uVar12 != uVar10);
    }
  }
  else {
    _Y = (double)param_4 * __real_3ee4f8b588e368f1;
    dVar299 = __real_3ff0000000000000 / (double)(int)uVar13;
    uVar12 = 0;
    do {
      puVar5 = png_malloc(param_1,0x200);
      ppuVar4[uVar12] = puVar5;
      lVar9 = 0;
      do {
        dVar14 = pow((double)(uint)(((int)lVar9 << (bVar7 & 0x1f)) + (int)uVar12) * dVar299,_Y);
        dVar14 = floor(dVar14 * dVar3 + dVar2);
        puVar5[lVar9] = (ushort)(int)dVar14;
        dVar14 = pow((double)(uint)(((int)lVar9 + 1 << (bVar7 & 0x1f)) + (int)uVar12) * dVar299,_Y);
        dVar14 = floor(dVar14 * dVar3 + dVar2);
        puVar5[lVar9 + 1] = (ushort)(int)dVar14;
        lVar9 = lVar9 + 2;
      } while (lVar9 != 0x100);
      uVar12 = uVar12 + 1;
    } while (uVar12 != uVar10);
  }
  return;
}

// png_set_option @ 140db3160

int __cdecl png_set_option(png_struct_def_conflict *param_1,int param_2,int param_3)

{
  uint uVar1;
  byte bVar2;
  
  uVar1 = 1;
  bVar2 = (byte)param_2;
  if ((param_2 & 1U) == 0 && ((uint)param_2 < 0xe && param_1 != (png_struct_def_conflict *)0x0)) {
    uVar1 = param_1->options;
    param_1->options = ~(3 << (bVar2 & 0x1f)) & uVar1 | 3 - (uint)(param_3 == 0) << (bVar2 & 0x1f);
    uVar1 = uVar1 >> (bVar2 & 0x1f) & 3;
  }
  return uVar1;
}

// png_image_free @ 140db31d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl png_image_free(png_image *param_1)

{
  png_control *ppVar1;
  png_struct_def_conflict *ppVar2;
  FILE *_File;
  code *pcVar3;
  undefined1 auStack_68 [32];
  png_control local_48;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_68;
  if (((param_1 == (png_image *)0x0) || (ppVar1 = param_1->opaque, ppVar1 == (png_control *)0x0)) ||
     (ppVar1->error_buf != (void *)0x0)) {
    if ((local_18 ^ (ulonglong)auStack_68) != __security_cookie.value) goto LAB_140db32cd;
  }
  else {
    ppVar2 = ppVar1->png_ptr;
    if (ppVar2 != (png_struct_def_conflict *)0x0) {
      if (ZPULL(*(undefined4 *)&ppVar1->field_0x28,1,1) != 0) {
        _File = ppVar2->io_ptr;
        *(uint *)&ppVar1->field_0x28 = *(undefined4 *)&ppVar1->field_0x28 & 0xfffffffd;
        if (_File != (FILE *)0x0) {
          ppVar2->io_ptr = (void *)0x0;
          fclose(_File);
        }
      }
      local_48.png_ptr = ppVar1->png_ptr;
      local_48.info_ptr = ppVar1->info_ptr;
      local_48.error_buf = ppVar1->error_buf;
      local_48.memory = ppVar1->memory;
      local_48.size = ppVar1->size;
      local_48._40_8_ = *(undefined8 *)&ppVar1->field_0x28;
      param_1->opaque = &local_48;
      png_free(local_48.png_ptr,ppVar1);
      if (local_48.for_write == 0) {
        png_destroy_read_struct(&local_48.png_ptr,&local_48.info_ptr,(png_info_def **)0x0);
      }
      else {
        png_destroy_write_struct(&local_48.png_ptr,&local_48.info_ptr);
      }
    }
    param_1->opaque = (png_control *)0x0;
    if ((local_18 ^ (ulonglong)auStack_68) != __security_cookie.value) {
LAB_140db32cd:
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  return;
}

// png_image_error @ 140db32e0

int __cdecl png_image_error(png_image *param_1,char *param_2)

{
  png_safecat(param_1->message,0x40,0,param_2);
  *(byte *)&param_1->warning_or_error = (byte)param_1->warning_or_error | 2;
  png_image_free(param_1);
  return 0;
}

// png_xy_from_XYZ @ 140db3320

int __cdecl png_xy_from_XYZ(png_xy *param_1,png_XYZ *param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  double dVar12;
  double dVar13;
  
  uVar1 = param_2->red_X;
  uVar5 = param_2->red_Y;
  iVar2 = 1;
  if ((param_2->red_Z <= (int)(uVar5 ^ 0x7fffffff) && (int)uVar5 <= (int)(uVar1 ^ 0x7fffffff)) &&
     (uVar5 = param_2->red_Z + uVar1 + uVar5, uVar5 != 0)) {
    iVar3 = 0;
    iVar6 = 0;
    if (uVar1 != 0) {
      dVar12 = floor(((double)(int)uVar1 * __real_40f86a0000000000) / (double)(int)uVar5 +
                     __real_3fe0000000000000);
      if (__real_41dfffffffc00000 < dVar12) {
        return 1;
      }
      if (dVar12 < __real_c1e0000000000000) {
        return 1;
      }
      iVar6 = (int)dVar12;
    }
    param_1->redx = iVar6;
    if (param_2->red_Y != 0) {
      dVar12 = floor(((double)param_2->red_Y * __real_40f86a0000000000) / (double)(int)uVar5 +
                     __real_3fe0000000000000);
      if (__real_41dfffffffc00000 < dVar12) {
        return 1;
      }
      if (dVar12 < __real_c1e0000000000000) {
        return 1;
      }
      iVar3 = (int)dVar12;
    }
    param_1->redy = iVar3;
    uVar1 = param_2->green_X;
    uVar11 = param_2->green_Y;
    if ((param_2->green_Z <= (int)(uVar11 ^ 0x7fffffff) && (int)uVar11 <= (int)(uVar1 ^ 0x7fffffff))
       && (iVar3 = param_2->green_Z + uVar1 + uVar11, iVar3 != 0)) {
      iVar6 = param_2->red_X;
      iVar4 = param_2->red_Y;
      iVar10 = 0;
      iVar7 = 0;
      if (uVar1 != 0) {
        dVar12 = floor(((double)(int)uVar1 * __real_40f86a0000000000) / (double)iVar3 +
                       __real_3fe0000000000000);
        if (__real_41dfffffffc00000 < dVar12) {
          return 1;
        }
        if (dVar12 < __real_c1e0000000000000) {
          return 1;
        }
        iVar7 = (int)dVar12;
      }
      param_1->greenx = iVar7;
      if (param_2->green_Y != 0) {
        dVar12 = floor(((double)param_2->green_Y * __real_40f86a0000000000) / (double)iVar3 +
                       __real_3fe0000000000000);
        if (__real_41dfffffffc00000 < dVar12) {
          return 1;
        }
        if (dVar12 < __real_c1e0000000000000) {
          return 1;
        }
        iVar10 = (int)dVar12;
      }
      param_1->greeny = iVar10;
      uVar1 = param_2->blue_X;
      uVar11 = param_2->blue_Y;
      if ((param_2->blue_Z <= (int)(uVar11 ^ 0x7fffffff) && (int)uVar11 <= (int)(uVar1 ^ 0x7fffffff)
          ) && (uVar11 = param_2->blue_Z + uVar1 + uVar11, uVar11 != 0)) {
        iVar7 = param_2->green_X;
        iVar10 = param_2->green_Y;
        iVar9 = 0;
        iVar8 = 0;
        if (uVar1 != 0) {
          dVar12 = floor(((double)(int)uVar1 * __real_40f86a0000000000) / (double)(int)uVar11 +
                         __real_3fe0000000000000);
          if (__real_41dfffffffc00000 < dVar12) {
            return 1;
          }
          if (dVar12 < __real_c1e0000000000000) {
            return 1;
          }
          iVar8 = (int)dVar12;
        }
        param_1->bluex = iVar8;
        if (param_2->blue_Y != 0) {
          dVar12 = floor(((double)param_2->blue_Y * __real_40f86a0000000000) / (double)(int)uVar11 +
                         __real_3fe0000000000000);
          if (__real_41dfffffffc00000 < dVar12) {
            return 1;
          }
          if (dVar12 < __real_c1e0000000000000) {
            return 1;
          }
          iVar9 = (int)dVar12;
        }
        param_1->bluey = iVar9;
        if ((((int)uVar5 <= (int)(uVar11 ^ 0x7fffffff)) && (iVar3 <= (int)(uVar5 ^ 0x7fffffff))) &&
           (iVar3 = iVar3 + uVar5 + uVar11, iVar3 != 0)) {
          iVar4 = iVar4 + iVar10 + param_2->blue_Y;
          dVar12 = (double)iVar3;
          iVar3 = 0;
          iVar2 = 0;
          iVar6 = iVar6 + iVar7 + param_2->blue_X;
          if (iVar6 != 0) {
            dVar13 = floor(((double)iVar6 * __real_40f86a0000000000) / dVar12 +
                           __real_3fe0000000000000);
            if (__real_41dfffffffc00000 < dVar13) {
              return 1;
            }
            if (dVar13 < __real_c1e0000000000000) {
              return 1;
            }
            iVar2 = (int)dVar13;
          }
          param_1->whitex = iVar2;
          if (iVar4 != 0) {
            dVar12 = floor(((double)iVar4 * __real_40f86a0000000000) / dVar12 +
                           __real_3fe0000000000000);
            if (__real_41dfffffffc00000 < dVar12) {
              return 1;
            }
            if (dVar12 < __real_c1e0000000000000) {
              return 1;
            }
            iVar3 = (int)dVar12;
          }
          param_1->whitey = iVar3;
          iVar2 = 0;
        }
      }
    }
  }
  return iVar2;
}

