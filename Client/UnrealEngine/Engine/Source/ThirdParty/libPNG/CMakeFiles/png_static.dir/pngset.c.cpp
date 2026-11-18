// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: libPNG
// Functions: 41

// png_set_bKGD @ 140dc6660

void __cdecl
png_set_bKGD(png_struct_def_conflict *param_1,png_info_def *param_2,png_color_16_struct *param_3)

{
  undefined1 uVar1;
  ushort uVar2;
  ushort uVar3;
  ushort uVar4;
  
  if (param_3 != (png_color_16_struct *)0x0 &&
      (param_2 != (png_info_def *)0x0 && param_1 != (png_struct_def_conflict *)0x0)) {
    (param_2->background).gray = param_3->gray;
    uVar1 = param_3->field_0x1;
    uVar2 = param_3->red;
    uVar3 = param_3->green;
    uVar4 = param_3->blue;
    (param_2->background).index = param_3->index;
    (param_2->background).field_0x1 = uVar1;
    (param_2->background).red = uVar2;
    (param_2->background).green = uVar3;
    (param_2->background).blue = uVar4;
    *(byte *)&param_2->valid = (byte)param_2->valid | 0x20;
  }
  return;
}

// png_set_cHRM_fixed @ 140dc66a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
png_set_cHRM_fixed(png_struct_def_conflict *param_1,png_info_def *param_2,int param_3,int param_4,
                  int param_5,int param_6,int param_7,int param_8,int param_9,int param_10)

{
  ushort *puVar1;
  code *pcVar2;
  int iVar3;
  undefined1 auStack_68 [40];
  png_xy local_40;
  ulonglong local_20;
  
  local_20 = __security_cookie.value ^ (ulonglong)auStack_68;
  if (param_2 != (png_info_def *)0x0 && param_1 != (png_struct_def_conflict *)0x0) {
    local_40.redx = param_5;
    local_40.redy = param_6;
    local_40.greenx = param_7;
    local_40.greeny = param_8;
    local_40.bluex = param_9;
    local_40.bluey = param_10;
    local_40.whitex = param_3;
    local_40.whitey = param_4;
    iVar3 = png_colorspace_set_chromaticities(param_1,&param_2->colorspace,&local_40,2);
    if (iVar3 != 0) {
      puVar1 = &(param_2->colorspace).flags;
      *(byte *)puVar1 = (byte)*puVar1 | 0x10;
    }
    png_colorspace_sync_info(param_1,param_2);
  }
  if ((local_20 ^ (ulonglong)auStack_68) == __security_cookie.value) {
    return;
  }
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

// png_set_cHRM_XYZ_fixed @ 140dc6780

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
png_set_cHRM_XYZ_fixed
          (png_struct_def_conflict *param_1,png_info_def *param_2,int param_3,int param_4,
          int param_5,int param_6,int param_7,int param_8,int param_9,int param_10,int param_11)

{
  ushort *puVar1;
  code *pcVar2;
  int iVar3;
  undefined1 auStack_78 [44];
  png_XYZ local_4c;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_78;
  if (param_2 != (png_info_def *)0x0 && param_1 != (png_struct_def_conflict *)0x0) {
    local_4c.red_Z = param_5;
    local_4c.green_X = param_6;
    local_4c.green_Y = param_7;
    local_4c.green_Z = param_8;
    local_4c.blue_X = param_9;
    local_4c.blue_Y = param_10;
    local_4c.blue_Z = param_11;
    local_4c.red_X = param_3;
    local_4c.red_Y = param_4;
    iVar3 = png_colorspace_set_endpoints(param_1,&param_2->colorspace,&local_4c,2);
    if (iVar3 != 0) {
      puVar1 = &(param_2->colorspace).flags;
      *(byte *)puVar1 = (byte)*puVar1 | 0x10;
    }
    png_colorspace_sync_info(param_1,param_2);
  }
  if ((local_28 ^ (ulonglong)auStack_78) == __security_cookie.value) {
    return;
  }
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

// png_set_cHRM @ 140dc6860

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
png_set_cHRM(png_struct_def_conflict *param_1,png_info_def *param_2,double param_3,double param_4,
            double param_5,double param_6,double param_7,double param_8,double param_9,
            double param_10)

{
  ushort *puVar1;
  code *pcVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  undefined1 auStack_108 [36];
  int local_e4;
  png_xy local_e0;
  ulonglong local_c0;
  
  local_c0 = __security_cookie.value ^ (ulonglong)auStack_108;
  local_e4 = png_fixed(param_1,param_10,"cHRM Blue Y");
  iVar3 = png_fixed(param_1,param_9,"cHRM Blue X");
  iVar4 = png_fixed(param_1,param_8,"cHRM Green Y");
  iVar5 = png_fixed(param_1,param_7,"cHRM Green X");
  iVar6 = png_fixed(param_1,param_6,"cHRM Red Y");
  iVar7 = png_fixed(param_1,param_5,"cHRM Red X");
  iVar8 = png_fixed(param_1,param_4,"cHRM White Y");
  iVar9 = png_fixed(param_1,param_3,"cHRM White X");
  if (param_2 != (png_info_def *)0x0 && param_1 != (png_struct_def_conflict *)0x0) {
    local_e0.bluey = local_e4;
    local_e0.redx = iVar7;
    local_e0.redy = iVar6;
    local_e0.greenx = iVar5;
    local_e0.greeny = iVar4;
    local_e0.bluex = iVar3;
    local_e0.whitex = iVar9;
    local_e0.whitey = iVar8;
    iVar3 = png_colorspace_set_chromaticities(param_1,&param_2->colorspace,&local_e0,2);
    if (iVar3 != 0) {
      puVar1 = &(param_2->colorspace).flags;
      *(byte *)puVar1 = (byte)*puVar1 | 0x10;
    }
    png_colorspace_sync_info(param_1,param_2);
  }
  if ((local_c0 ^ (ulonglong)auStack_108) == __security_cookie.value) {
    return;
  }
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

// png_set_cHRM_XYZ @ 140dc6a70

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
png_set_cHRM_XYZ(png_struct_def_conflict *param_1,png_info_def *param_2,double param_3,
                double param_4,double param_5,double param_6,double param_7,double param_8,
                double param_9,double param_10,double param_11)

{
  ushort *puVar1;
  code *pcVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  undefined1 auStack_128 [44];
  int local_fc;
  int local_f8;
  png_XYZ local_f4;
  ulonglong local_d0;
  
  local_d0 = __security_cookie.value ^ (ulonglong)auStack_128;
  local_f8 = png_fixed(param_1,param_11,"cHRM Blue Z");
  local_fc = png_fixed(param_1,param_10,"cHRM Blue Y");
  iVar3 = png_fixed(param_1,param_9,"cHRM Blue X");
  iVar4 = png_fixed(param_1,param_8,"cHRM Green Z");
  iVar5 = png_fixed(param_1,param_7,"cHRM Green Y");
  iVar6 = png_fixed(param_1,param_6,"cHRM Green X");
  iVar7 = png_fixed(param_1,param_5,"cHRM Red Z");
  iVar8 = png_fixed(param_1,param_4,"cHRM Red Y");
  iVar9 = png_fixed(param_1,param_3,"cHRM Red X");
  if (param_2 != (png_info_def *)0x0 && param_1 != (png_struct_def_conflict *)0x0) {
    local_f4.blue_Y = local_fc;
    local_f4.blue_Z = local_f8;
    local_f4.red_X = iVar9;
    local_f4.red_Y = iVar8;
    local_f4.red_Z = iVar7;
    local_f4.green_X = iVar6;
    local_f4.green_Y = iVar5;
    local_f4.green_Z = iVar4;
    local_f4.blue_X = iVar3;
    iVar3 = png_colorspace_set_endpoints(param_1,&param_2->colorspace,&local_f4,2);
    if (iVar3 != 0) {
      puVar1 = &(param_2->colorspace).flags;
      *(byte *)puVar1 = (byte)*puVar1 | 0x10;
    }
    png_colorspace_sync_info(param_1,param_2);
  }
  if ((local_d0 ^ (ulonglong)auStack_128) == __security_cookie.value) {
    return;
  }
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

// png_set_eXIf @ 140dc6cc0

void __cdecl png_set_eXIf(png_struct_def_conflict *param_1,png_info_def *param_2,uchar *param_3)

{
  png_warning(param_1,"png_set_eXIf does not work; use png_set_eXIf_1");
  return;
}

// png_set_eXIf_1 @ 140dc6ce0

void __cdecl
png_set_eXIf_1(png_struct_def_conflict *param_1,png_info_def *param_2,uint param_3,uchar *param_4)

{
  byte *pbVar1;
  uchar *_Dst;
  
  if ((param_2 != (png_info_def *)0x0 && param_1 != (png_struct_def_conflict *)0x0) &&
     ((param_1->mode & 0x4000) == 0)) {
    _Dst = png_malloc_warn(param_1,(ulonglong)param_3);
    if (_Dst == (uchar *)0x0) {
      png_warning(param_1,"Insufficient memory for eXIf chunk data");
      return;
    }
    memcpy(_Dst,param_4,(ulonglong)param_3);
    png_free_data(param_1,param_2,0x8000,0);
    param_2->num_exif = param_3;
    param_2->exif = _Dst;
    pbVar1 = (byte *)((longlong)&param_2->free_me + 1);
    *pbVar1 = *pbVar1 | 0x80;
    pbVar1 = (byte *)((longlong)&param_2->valid + 2);
    *pbVar1 = *pbVar1 | 1;
  }
  return;
}

// png_set_gAMA_fixed @ 140dc6d90

void __cdecl png_set_gAMA_fixed(png_struct_def_conflict *param_1,png_info_def *param_2,int param_3)

{
  if (param_2 == (png_info_def *)0x0 || param_1 == (png_struct_def_conflict *)0x0) {
    return;
  }
  png_colorspace_set_gamma(param_1,&param_2->colorspace,param_3);
  png_colorspace_sync_info(param_1,param_2);
  return;
}

// png_set_gAMA @ 140dc6de0

void __cdecl png_set_gAMA(png_struct_def_conflict *param_1,png_info_def *param_2,double param_3)

{
  int iVar1;
  
  iVar1 = png_fixed(param_1,param_3,"png_set_gAMA");
  if (param_2 == (png_info_def *)0x0 || param_1 == (png_struct_def_conflict *)0x0) {
    return;
  }
  png_colorspace_set_gamma(param_1,&param_2->colorspace,iVar1);
  png_colorspace_sync_info(param_1,param_2);
  return;
}

// png_set_hIST @ 140dc6e40

void __cdecl png_set_hIST(png_struct_def_conflict *param_1,png_info_def *param_2,ushort *param_3)

{
  ushort *puVar1;
  ulonglong uVar2;
  char *pcVar3;
  
  if (param_2 == (png_info_def *)0x0 || param_1 == (png_struct_def_conflict *)0x0) {
    return;
  }
  if ((*(int *)&param_2->num_palette - 0x101U & 0xffff) < 0xff00) {
    pcVar3 = "Invalid palette size, hIST allocation skipped";
  }
  else {
    png_free_data(param_1,param_2,8,0);
    puVar1 = png_malloc_warn(param_1,0x200);
    param_2->hist = puVar1;
    if (puVar1 != (ushort *)0x0) {
      if (param_2->num_palette != 0) {
        uVar2 = 0;
        do {
          param_2->hist[uVar2] = param_3[uVar2];
          uVar2 = uVar2 + 1;
        } while (uVar2 < param_2->num_palette);
      }
      *(byte *)&param_2->free_me = (byte)param_2->free_me | 8;
      *(byte *)&param_2->valid = (byte)param_2->valid | 0x40;
      return;
    }
    pcVar3 = "Insufficient memory for hIST chunk data";
  }
  png_warning(param_1,pcVar3);
  return;
}

// png_set_IHDR @ 140dc6f10

void __cdecl
png_set_IHDR(png_struct_def_conflict *param_1,png_info_def *param_2,uint param_3,uint param_4,
            int param_5,int param_6,int param_7,int param_8,int param_9)

{
  uchar uVar1;
  byte bVar2;
  ulonglong uVar3;
  
  if (param_2 != (png_info_def *)0x0 && param_1 != (png_struct_def_conflict *)0x0) {
    param_2->width = param_3;
    param_2->height = param_4;
    param_2->bit_depth = (uchar)param_5;
    param_2->color_type = (uchar)param_6;
    param_2->compression_type = (uchar)param_8;
    param_2->filter_type = (uchar)param_9;
    param_2->interlace_type = (uchar)param_7;
    png_check_IHDR(param_1,param_3,param_4,param_5 & 0xff,param_6 & 0xff,param_7 & 0xff,
                   param_8 & 0xff,param_9 & 0xff);
    bVar2 = param_2->color_type;
    if (bVar2 == 3) {
      param_2->channels = '\x01';
      uVar1 = '\x01';
    }
    else {
      uVar1 = (bVar2 & 2) + 1;
      param_2->channels = uVar1;
      if ((bVar2 & 4) != 0) {
        uVar1 = (bVar2 & 2) + 2;
        param_2->channels = uVar1;
      }
    }
    bVar2 = param_2->bit_depth * uVar1;
    param_2->pixel_depth = bVar2;
    if (bVar2 < 8) {
      uVar3 = (ulonglong)bVar2 * (ulonglong)param_3 + 7 >> 3;
    }
    else {
      uVar3 = (ulonglong)(bVar2 >> 3) * (ulonglong)param_3;
    }
    param_2->rowbytes = uVar3;
  }
  return;
}

// png_set_oFFs @ 140dc7010

void __cdecl
png_set_oFFs(png_struct_def_conflict *param_1,png_info_def *param_2,int param_3,int param_4,
            int param_5)

{
  byte *pbVar1;
  
  if (param_2 != (png_info_def *)0x0 && param_1 != (png_struct_def_conflict *)0x0) {
    param_2->x_offset = param_3;
    param_2->y_offset = param_4;
    param_2->offset_unit_type = (uchar)param_5;
    pbVar1 = (byte *)((longlong)&param_2->valid + 1);
    *pbVar1 = *pbVar1 | 1;
  }
  return;
}

// png_set_pCAL @ 140dc7050

void __cdecl
png_set_pCAL(png_struct_def_conflict *param_1,png_info_def *param_2,char *param_3,int param_4,
            int param_5,int param_6,int param_7,char *param_8,char **param_9)

{
  byte *pbVar1;
  undefined4 in_EAX;
  int iVar2;
  size_t sVar3;
  size_t sVar4;
  char **_Dst;
  char *pcVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  undefined1 auVar8 [16];
  
  auVar8._0_4_ = -(uint)(param_1 == (png_struct_def_conflict *)0x0);
  auVar8._4_4_ = -(uint)(param_2 == (png_info_def *)0x0);
  auVar8._8_4_ = -(uint)(param_3 == (char *)0x0);
  auVar8._12_4_ = -(uint)(param_8 == (char *)0x0);
  iVar2 = movmskps(in_EAX,auVar8);
  if ((iVar2 != 0) || (0 < param_7 && param_9 == (char **)0x0)) {
    return;
  }
  sVar3 = strlen(param_3);
  if ((uint)param_6 < 4) {
    if ((uint)param_7 < 0x100) {
      if (param_7 != 0) {
        uVar6 = 0;
        do {
          pcVar5 = param_9[uVar6];
          if (pcVar5 == (char *)0x0) {
LAB_140dc72c8:
            pcVar5 = "Invalid format for pCAL parameter";
            goto LAB_140dc72d8;
          }
          sVar4 = strlen(pcVar5);
          iVar2 = png_check_fp_string(pcVar5,sVar4);
          if (iVar2 == 0) goto LAB_140dc72c8;
          uVar6 = uVar6 + 1;
        } while ((uint)param_7 != uVar6);
      }
      pcVar5 = png_malloc_warn(param_1,sVar3 + 1);
      param_2->pcal_purpose = pcVar5;
      if (pcVar5 != (char *)0x0) {
        memcpy(pcVar5,param_3,sVar3 + 1);
        *(byte *)&param_2->free_me = (byte)param_2->free_me | 0x80;
        param_2->pcal_X0 = param_4;
        param_2->pcal_X1 = param_5;
        param_2->pcal_type = (uchar)param_6;
        param_2->pcal_nparams = (uchar)param_7;
        sVar3 = strlen(param_8);
        pcVar5 = png_malloc_warn(param_1,sVar3 + 1);
        param_2->pcal_units = pcVar5;
        if (pcVar5 == (char *)0x0) {
          pcVar5 = "Insufficient memory for pCAL units";
        }
        else {
          memcpy(pcVar5,param_8,sVar3 + 1);
          uVar6 = (ulonglong)(param_7 * 8 + 8);
          _Dst = png_malloc_warn(param_1,uVar6);
          param_2->pcal_params = _Dst;
          if (_Dst != (char **)0x0) {
            memset(_Dst,0,uVar6);
            if (param_7 != 0) {
              uVar6 = 1;
              if (1 < param_7) {
                uVar6 = (ulonglong)(uint)param_7;
              }
              uVar7 = 0;
              do {
                sVar3 = strlen(param_9[uVar7]);
                pcVar5 = png_malloc_warn(param_1,sVar3 + 1);
                param_2->pcal_params[uVar7] = pcVar5;
                if (param_2->pcal_params[uVar7] == (char *)0x0) {
                  pcVar5 = "Insufficient memory for pCAL parameter";
                  goto LAB_140dc730f;
                }
                memcpy(param_2->pcal_params[uVar7],param_9[uVar7],sVar3 + 1);
                uVar7 = uVar7 + 1;
              } while (uVar6 != uVar7);
            }
            pbVar1 = (byte *)((longlong)&param_2->valid + 1);
            *pbVar1 = *pbVar1 | 4;
            return;
          }
          pcVar5 = "Insufficient memory for pCAL params";
        }
LAB_140dc730f:
        png_warning(param_1,pcVar5);
        return;
      }
      pcVar5 = "Insufficient memory for pCAL purpose";
    }
    else {
      pcVar5 = "Invalid pCAL parameter count";
    }
  }
  else {
    pcVar5 = "Invalid pCAL equation type";
  }
LAB_140dc72d8:
  png_chunk_report(param_1,pcVar5,1);
  return;
}

// png_set_sCAL_s @ 140dc7330

void __cdecl
png_set_sCAL_s(png_struct_def_conflict *param_1,png_info_def *param_2,int param_3,char *param_4,
              char *param_5)

{
  byte *pbVar1;
  int iVar2;
  size_t sVar3;
  size_t sVar4;
  char *pcVar5;
  
  if (param_2 == (png_info_def *)0x0 || param_1 == (png_struct_def_conflict *)0x0) {
    return;
  }
  if (0xfffffffd < param_3 - 3U) {
    if ((((param_4 != (char *)0x0) && (sVar3 = strlen(param_4), sVar3 != 0)) && (*param_4 != '-'))
       && (iVar2 = png_check_fp_string(param_4,sVar3), iVar2 != 0)) {
      if (((param_5 != (char *)0x0) && (sVar4 = strlen(param_5), sVar4 != 0)) &&
         ((*param_5 != '-' && (iVar2 = png_check_fp_string(param_5,sVar4), iVar2 != 0)))) {
        param_2->scal_unit = (uchar)param_3;
        pcVar5 = png_malloc_warn(param_1,sVar3 + 1);
        param_2->scal_s_width = pcVar5;
        if (pcVar5 != (char *)0x0) {
          memcpy(pcVar5,param_4,sVar3 + 1);
          pcVar5 = png_malloc_warn(param_1,sVar4 + 1);
          param_2->scal_s_height = pcVar5;
          if (pcVar5 != (char *)0x0) {
            memcpy(pcVar5,param_5,sVar4 + 1);
            pbVar1 = (byte *)((longlong)&param_2->free_me + 1);
            *pbVar1 = *pbVar1 | 1;
            pbVar1 = (byte *)((longlong)&param_2->valid + 1);
            *pbVar1 = *pbVar1 | 0x40;
            return;
          }
          png_free(param_1,param_2->scal_s_width);
          param_2->scal_s_width = (char *)0x0;
        }
        png_warning(param_1,"Memory allocation failed while processing sCAL");
        return;
      }
                    /* WARNING: Subroutine does not return */
      png_error(param_1,"Invalid sCAL height");
    }
                    /* WARNING: Subroutine does not return */
    png_error(param_1,"Invalid sCAL width");
  }
                    /* WARNING: Subroutine does not return */
  png_error(param_1,"Invalid sCAL unit");
}

// png_set_sCAL @ 140dc74d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
png_set_sCAL(png_struct_def_conflict *param_1,png_info_def *param_2,int param_3,double param_4,
            double param_5)

{
  code *pcVar1;
  char *pcVar2;
  undefined1 auStackY_a8 [32];
  char local_78 [32];
  char local_58 [24];
  ulonglong local_40;
  
  local_40 = __security_cookie.value ^ (ulonglong)auStackY_a8;
  if (param_4 <= 0.0) {
    pcVar2 = "Invalid sCAL width ignored";
  }
  else {
    if (0.0 < param_5) {
      png_ascii_from_fp(param_1,local_58,0x12,param_4,5);
      png_ascii_from_fp(param_1,local_78,0x12,param_5,5);
      png_set_sCAL_s(param_1,param_2,param_3,local_58,local_78);
      if ((local_40 ^ (ulonglong)auStackY_a8) == __security_cookie.value) {
        return;
      }
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    pcVar2 = "Invalid sCAL height ignored";
  }
  png_warning(param_1,pcVar2);
  return;
}

// png_set_sCAL_fixed @ 140dc75e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
png_set_sCAL_fixed(png_struct_def_conflict *param_1,png_info_def *param_2,int param_3,int param_4,
                  int param_5)

{
  code *pcVar1;
  char *pcVar2;
  undefined1 auStackY_a8 [32];
  char local_78 [32];
  char local_58 [32];
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_a8;
  if (param_4 < 1) {
    pcVar2 = "Invalid sCAL width ignored";
  }
  else {
    if (0 < param_5) {
      png_ascii_from_fixed(param_1,local_58,0x12,param_4);
      png_ascii_from_fixed(param_1,local_78,0x12,param_5);
      png_set_sCAL_s(param_1,param_2,param_3,local_58,local_78);
      if ((local_38 ^ (ulonglong)auStackY_a8) == __security_cookie.value) {
        return;
      }
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    pcVar2 = "Invalid sCAL height ignored";
  }
  png_warning(param_1,pcVar2);
  return;
}

// png_set_pHYs @ 140dc76c0

void __cdecl
png_set_pHYs(png_struct_def_conflict *param_1,png_info_def *param_2,uint param_3,uint param_4,
            int param_5)

{
  if (param_2 != (png_info_def *)0x0 && param_1 != (png_struct_def_conflict *)0x0) {
    param_2->x_pixels_per_unit = param_3;
    param_2->y_pixels_per_unit = param_4;
    param_2->phys_unit_type = (uchar)param_5;
    *(byte *)&param_2->valid = (byte)param_2->valid | 0x80;
  }
  return;
}

// png_set_PLTE @ 140dc7700

void __cdecl
png_set_PLTE(png_struct_def_conflict *param_1,png_info_def *param_2,png_color_struct *param_3,
            int param_4)

{
  byte *pbVar1;
  png_color_struct *_Dst;
  
  if (param_2 != (png_info_def *)0x0 && param_1 != (png_struct_def_conflict *)0x0) {
    if (param_2->color_type == '\x03') {
      if ((param_4 < 0) || (1 << (param_2->bit_depth & 0x1f) < param_4)) {
                    /* WARNING: Subroutine does not return */
        png_error(param_1,"Invalid palette length");
      }
    }
    else if (0x100 < (uint)param_4) {
      png_warning(param_1,"Invalid palette length");
      return;
    }
    if ((param_3 == (png_color_struct *)0x0 && param_4 != 0) ||
       ((param_4 == 0 && ((param_1->mng_features_permitted & 1) == 0)))) {
                    /* WARNING: Subroutine does not return */
      png_error(param_1,"Invalid palette");
    }
    png_free_data(param_1,param_2,0x1000,0);
    _Dst = png_calloc(param_1,0x300);
    param_1->palette = _Dst;
    if (param_4 != 0) {
      memcpy(_Dst,param_3,(ulonglong)(uint)param_4 * 3);
    }
    param_2->palette = _Dst;
    param_2->num_palette = (ushort)param_4;
    pbVar1 = (byte *)((longlong)&param_2->free_me + 1);
    *pbVar1 = *pbVar1 | 0x10;
    param_1->num_palette = (ushort)param_4;
    *(byte *)&param_2->valid = (byte)param_2->valid | 8;
  }
  return;
}

// png_set_sBIT @ 140dc7810

void __cdecl
png_set_sBIT(png_struct_def_conflict *param_1,png_info_def *param_2,png_color_8_struct *param_3)

{
  uchar uVar1;
  uchar uVar2;
  uchar uVar3;
  
  if (param_3 != (png_color_8_struct *)0x0 &&
      (param_2 != (png_info_def *)0x0 && param_1 != (png_struct_def_conflict *)0x0)) {
    (param_2->sig_bit).alpha = param_3->alpha;
    uVar1 = param_3->green;
    uVar2 = param_3->blue;
    uVar3 = param_3->gray;
    (param_2->sig_bit).red = param_3->red;
    (param_2->sig_bit).green = uVar1;
    (param_2->sig_bit).blue = uVar2;
    (param_2->sig_bit).gray = uVar3;
    *(byte *)&param_2->valid = (byte)param_2->valid | 2;
  }
  return;
}

// png_set_sRGB @ 140dc7850

void __cdecl png_set_sRGB(png_struct_def_conflict *param_1,png_info_def *param_2,int param_3)

{
  if (param_2 == (png_info_def *)0x0 || param_1 == (png_struct_def_conflict *)0x0) {
    return;
  }
  png_colorspace_set_sRGB(param_1,&param_2->colorspace,param_3);
  png_colorspace_sync_info(param_1,param_2);
  return;
}

// png_set_sRGB_gAMA_and_cHRM @ 140dc78a0

void __cdecl
png_set_sRGB_gAMA_and_cHRM(png_struct_def_conflict *param_1,png_info_def *param_2,int param_3)

{
  ushort *puVar1;
  int iVar2;
  
  if (param_2 == (png_info_def *)0x0 || param_1 == (png_struct_def_conflict *)0x0) {
    return;
  }
  iVar2 = png_colorspace_set_sRGB(param_1,&param_2->colorspace,param_3);
  if (iVar2 != 0) {
    puVar1 = &(param_2->colorspace).flags;
    *(byte *)puVar1 = (byte)*puVar1 | 0x18;
  }
  png_colorspace_sync_info(param_1,param_2);
  return;
}

// png_set_iCCP @ 140dc78f0

void __cdecl
png_set_iCCP(png_struct_def_conflict *param_1,png_info_def *param_2,char *param_3,int param_4,
            uchar *param_5,uint param_6)

{
  ushort *puVar1;
  byte *pbVar2;
  undefined4 in_EAX;
  int iVar3;
  size_t sVar4;
  char *pcVar5;
  uchar *_Dst;
  undefined1 auVar6 [16];
  
  auVar6._0_4_ = -(uint)(param_1 == (png_struct_def_conflict *)0x0);
  auVar6._4_4_ = -(uint)(param_2 == (png_info_def *)0x0);
  auVar6._8_4_ = -(uint)(param_3 == (char *)0x0);
  auVar6._12_4_ = -(uint)(param_5 == (uchar *)0x0);
  iVar3 = movmskps(in_EAX,auVar6);
  if (iVar3 == 0) {
    if (param_4 != 0) {
      png_app_error(param_1,"Invalid iCCP compression method");
    }
    iVar3 = png_colorspace_set_ICC
                      (param_1,&param_2->colorspace,param_3,param_6,param_5,
                       (uint)param_2->color_type);
    png_colorspace_sync_info(param_1,param_2);
    if (iVar3 != 0) {
      puVar1 = &(param_2->colorspace).flags;
      *(byte *)puVar1 = (byte)*puVar1 | 0x18;
      sVar4 = strlen(param_3);
      pcVar5 = png_malloc_warn(param_1,sVar4 + 1);
      if (pcVar5 == (char *)0x0) {
        pcVar5 = "Insufficient memory to process iCCP chunk";
      }
      else {
        memcpy(pcVar5,param_3,sVar4 + 1);
        _Dst = png_malloc_warn(param_1,(ulonglong)param_6);
        if (_Dst != (uchar *)0x0) {
          memcpy(_Dst,param_5,(ulonglong)param_6);
          png_free_data(param_1,param_2,0x10,0);
          param_2->iccp_proflen = param_6;
          param_2->iccp_name = pcVar5;
          param_2->iccp_profile = _Dst;
          *(byte *)&param_2->free_me = (byte)param_2->free_me | 0x10;
          pbVar2 = (byte *)((longlong)&param_2->valid + 1);
          *pbVar2 = *pbVar2 | 0x10;
          return;
        }
        png_free(param_1,pcVar5);
        pcVar5 = "Insufficient memory to process iCCP profile";
      }
      png_benign_error(param_1,pcVar5);
      return;
    }
  }
  return;
}

// png_set_text @ 140dc7a70

void __cdecl
png_set_text(png_struct_def_conflict *param_1,png_info_def *param_2,png_text_struct *param_3,
            int param_4)

{
  int iVar1;
  
  iVar1 = png_set_text_2(param_1,param_2,param_3,param_4);
  if (iVar1 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  png_error(param_1,"Insufficient memory to store text");
}

// png_set_text_2 @ 140dc7aa0

int __cdecl
png_set_text_2(png_struct_def_conflict *param_1,png_info_def *param_2,png_text_struct *param_3,
              int param_4)

{
  byte *pbVar1;
  uint uVar2;
  png_text_struct *ppVar3;
  size_t sVar4;
  size_t _Size;
  size_t _Size_00;
  ulong64 _Size_01;
  char *pcVar5;
  int iVar6;
  char **ppcVar7;
  char **ppcVar8;
  ulonglong uVar9;
  
  if (param_3 == (png_text_struct *)0x0) {
    return 0;
  }
  if (param_1 == (png_struct_def_conflict *)0x0) {
    return 0;
  }
  if (param_2 == (png_info_def *)0x0) {
    return 0;
  }
  if (param_4 < 1) {
    return 0;
  }
  uVar2 = param_2->num_text;
  if ((int)(param_2->max_text - uVar2) < param_4) {
    if ((uint)param_4 <= (uVar2 ^ 0x7fffffff)) {
      iVar6 = 0x7fffffff;
      if ((int)(uVar2 + param_4) < 0x7ffffff7) {
        iVar6 = (uVar2 + param_4 & 0xfffffff8) + 8;
      }
      ppVar3 = png_realloc_array(param_1,param_2->text,uVar2,iVar6 - uVar2,0x38);
      if (ppVar3 != (png_text_struct *)0x0) {
        png_free(param_1,param_2->text);
        param_2->text = ppVar3;
        pbVar1 = (byte *)((longlong)&param_2->free_me + 1);
        *pbVar1 = *pbVar1 | 0x40;
        param_2->max_text = iVar6;
        goto LAB_140dc7b7d;
      }
    }
    pcVar5 = "too many text chunks";
LAB_140dc7d7b:
    png_chunk_report(param_1,pcVar5,1);
    iVar6 = 1;
  }
  else {
LAB_140dc7b7d:
    uVar9 = (ulonglong)(uint)param_4;
    ppcVar8 = &param_3->lang_key;
    do {
      if (ppcVar8[-5] != (char *)0x0) {
        iVar6 = ((png_text_struct *)(ppcVar8 + -6))->compression;
        if (iVar6 - 3U < 0xfffffffc) {
          png_chunk_report(param_1,"text compression mode is out of range",1);
        }
        else {
          ppVar3 = param_2->text + param_2->num_text;
          sVar4 = strlen(ppcVar8[-5]);
          if (iVar6 < 1) {
            _Size = 0;
            pcVar5 = ppcVar8[-4];
joined_r0x000140dc7c2f:
            _Size_00 = 0;
            if (pcVar5 == (char *)0x0) goto LAB_140dc7c59;
LAB_140dc7c4a:
            if (*pcVar5 == '\0') goto LAB_140dc7c59;
            _Size_01 = strlen(pcVar5);
          }
          else {
            if (ppcVar8[-1] == (char *)0x0) {
              _Size = 0;
              pcVar5 = *ppcVar8;
            }
            else {
              _Size = strlen(ppcVar8[-1]);
              pcVar5 = *ppcVar8;
            }
            if (pcVar5 == (char *)0x0) {
              pcVar5 = ppcVar8[-4];
              goto joined_r0x000140dc7c2f;
            }
            _Size_00 = strlen(pcVar5);
            pcVar5 = ppcVar8[-4];
            if (pcVar5 != (char *)0x0) goto LAB_140dc7c4a;
LAB_140dc7c59:
            iVar6 = (uint)(0 < iVar6) * 2 + -1;
            _Size_01 = 0;
          }
          ppVar3->compression = iVar6;
          pcVar5 = png_malloc_base(param_1,sVar4 + _Size + _Size_00 + _Size_01 + 4);
          ppVar3->key = pcVar5;
          if (pcVar5 == (char *)0x0) {
            pcVar5 = "text chunk: out of memory";
            goto LAB_140dc7d7b;
          }
          ppcVar7 = &ppVar3->key;
          memcpy(pcVar5,ppcVar8[-5],sVar4);
          (*ppcVar7)[sVar4] = '\0';
          if (((png_text_struct *)(ppcVar8 + -6))->compression < 1) {
            ppVar3->lang = (char *)0x0;
            ppVar3->lang_key = (char *)0x0;
          }
          else {
            ppVar3->lang = ppVar3->key + sVar4 + 1;
            memcpy(ppVar3->key + sVar4 + 1,ppcVar8[-1],_Size);
            ppVar3->lang[_Size] = '\0';
            ppcVar7 = &ppVar3->lang_key;
            ppVar3->lang_key = ppVar3->lang + _Size + 1;
            memcpy(ppVar3->lang + _Size + 1,*ppcVar8,_Size_00);
            ppVar3->lang_key[_Size_00] = '\0';
            sVar4 = _Size_00;
          }
          pcVar5 = *ppcVar7 + sVar4 + 1;
          ppVar3->text = pcVar5;
          if (_Size_01 != 0) {
            memcpy(pcVar5,ppcVar8[-4],_Size_01);
            pcVar5 = ppVar3->text;
          }
          pcVar5[_Size_01] = '\0';
          if (ppVar3->compression < 1) {
            sVar4 = 0;
          }
          else {
            sVar4 = _Size_01;
            _Size_01 = 0;
          }
          ppVar3->text_length = _Size_01;
          ppVar3->itxt_length = sVar4;
          param_2->num_text = param_2->num_text + 1;
        }
      }
      ppcVar8 = ppcVar8 + 7;
      uVar9 = uVar9 - 1;
    } while (uVar9 != 0);
    iVar6 = 0;
  }
  return iVar6;
}

// png_set_tIME @ 140dc7db0

void __cdecl
png_set_tIME(png_struct_def_conflict *param_1,png_info_def *param_2,png_time_struct *param_3)

{
  byte *pbVar1;
  
  if ((param_3 != (png_time_struct *)0x0 &&
       (param_2 != (png_info_def *)0x0 && param_1 != (png_struct_def_conflict *)0x0)) &&
     ((param_1->mode & 0x200) == 0)) {
    if ((((byte)(param_3->month - 0xd) < 0xf4) ||
        ((((byte)(param_3->day - 0x20) < 0xe1 || (0x17 < param_3->hour)) || (0x3b < param_3->minute)
         ))) || (0x3c < param_3->second)) {
      png_warning(param_1,"Ignoring invalid time value");
      return;
    }
    param_2->mod_time = *param_3;
    pbVar1 = (byte *)((longlong)&param_2->valid + 1);
    *pbVar1 = *pbVar1 | 2;
  }
  return;
}

// png_set_tRNS @ 140dc7e20

void __cdecl
png_set_tRNS(png_struct_def_conflict *param_1,png_info_def *param_2,uchar *param_3,int param_4,
            png_color_16_struct *param_5)

{
  byte *pbVar1;
  ushort uVar2;
  undefined1 uVar3;
  ushort uVar4;
  ushort uVar5;
  uint uVar6;
  uchar *_Dst;
  
  if (param_2 == (png_info_def *)0x0 || param_1 == (png_struct_def_conflict *)0x0) {
    return;
  }
  if (param_3 != (uchar *)0x0) {
    png_free_data(param_1,param_2,0x2000,0);
    if (param_4 - 1U < 0x100) {
      _Dst = png_malloc(param_1,0x100);
      param_2->trans_alpha = _Dst;
      memcpy(_Dst,param_3,(ulonglong)(uint)param_4);
      pbVar1 = (byte *)((longlong)&param_2->free_me + 1);
      *pbVar1 = *pbVar1 | 0x20;
      *(byte *)&param_2->valid = (byte)param_2->valid | 0x10;
    }
    else {
      _Dst = param_2->trans_alpha;
    }
    param_1->trans_alpha = _Dst;
  }
  if (param_5 == (png_color_16_struct *)0x0) {
    param_2->num_trans = (ushort)param_4;
    if (param_4 == 0) {
      return;
    }
    goto LAB_140dc7f41;
  }
  if (param_2->bit_depth < 0x10) {
    uVar6 = ~(-1 << (param_2->bit_depth & 0x1f));
    if (param_2->color_type == '\x02') {
      if ((param_5->red <= uVar6) && (param_5->green <= uVar6)) {
        uVar2 = param_5->blue;
        goto joined_r0x000140dc7f0e;
      }
LAB_140dc7f10:
      png_warning(param_1,"tRNS chunk has out-of-range samples for bit_depth");
    }
    else if (param_2->color_type == '\0') {
      uVar2 = param_5->gray;
joined_r0x000140dc7f0e:
      if (uVar6 < uVar2) goto LAB_140dc7f10;
    }
  }
  (param_2->trans_color).gray = param_5->gray;
  uVar3 = param_5->field_0x1;
  uVar2 = param_5->red;
  uVar4 = param_5->green;
  uVar5 = param_5->blue;
  (param_2->trans_color).index = param_5->index;
  (param_2->trans_color).field_0x1 = uVar3;
  (param_2->trans_color).red = uVar2;
  (param_2->trans_color).green = uVar4;
  (param_2->trans_color).blue = uVar5;
  param_2->num_trans = (ushort)param_4 + (ushort)(param_4 == 0);
LAB_140dc7f41:
  pbVar1 = (byte *)((longlong)&param_2->free_me + 1);
  *pbVar1 = *pbVar1 | 0x20;
  *(byte *)&param_2->valid = (byte)param_2->valid | 0x10;
  return;
}

// png_set_sPLT @ 140dc7f60

void __cdecl
png_set_sPLT(png_struct_def_conflict *param_1,png_info_def *param_2,png_sPLT_struct *param_3,
            int param_4)

{
  byte *pbVar1;
  uint uVar2;
  png_sPLT_struct *ppVar3;
  size_t sVar4;
  char *pcVar5;
  png_sPLT_entry_struct *_Dst;
  
  if ((((param_3 != (png_sPLT_struct *)0x0) && (param_1 != (png_struct_def_conflict *)0x0)) &&
      (param_2 != (png_info_def *)0x0)) && (0 < param_4)) {
    ppVar3 = png_realloc_array(param_1,param_2->splt_palettes,param_2->splt_palettes_num,param_4,
                               0x20);
    if (ppVar3 == (png_sPLT_struct *)0x0) {
      pcVar5 = "too many sPLT chunks";
LAB_140dc80e1:
      png_chunk_report(param_1,pcVar5,1);
      return;
    }
    png_free(param_1,param_2->splt_palettes);
    param_2->splt_palettes = ppVar3;
    *(byte *)&param_2->free_me = (byte)param_2->free_me | 0x20;
    ppVar3 = ppVar3 + param_2->splt_palettes_num;
    do {
      while ((pcVar5 = param_3->name, pcVar5 == (char *)0x0 ||
             (param_3->entries == (png_sPLT_entry_struct *)0x0))) {
        png_app_error(param_1,"png_set_sPLT: invalid sPLT");
        param_4 = param_4 + -1;
        if (param_4 == 0) {
          return;
        }
      }
      ppVar3->depth = param_3->depth;
      sVar4 = strlen(pcVar5);
      pcVar5 = png_malloc_base(param_1,sVar4 + 1);
      ppVar3->name = pcVar5;
      if (pcVar5 == (char *)0x0) {
LAB_140dc80d6:
        if (param_4 < 1) {
          return;
        }
        pcVar5 = "sPLT out of memory";
        goto LAB_140dc80e1;
      }
      memcpy(pcVar5,param_3->name,sVar4 + 1);
      _Dst = png_malloc_array(param_1,param_3->nentries,10);
      ppVar3->entries = _Dst;
      if (_Dst == (png_sPLT_entry_struct *)0x0) {
        png_free(param_1,ppVar3->name);
        ppVar3->name = (char *)0x0;
        goto LAB_140dc80d6;
      }
      uVar2 = param_3->nentries;
      ppVar3->nentries = uVar2;
      memcpy(_Dst,param_3->entries,(ulonglong)uVar2 * 10);
      pbVar1 = (byte *)((longlong)&param_2->valid + 1);
      *pbVar1 = *pbVar1 | 0x20;
      param_2->splt_palettes_num = param_2->splt_palettes_num + 1;
      ppVar3 = ppVar3 + 1;
      param_3 = param_3 + 1;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return;
}

// png_set_unknown_chunks @ 140dc8120

void __cdecl
png_set_unknown_chunks
          (png_struct_def_conflict *param_1,png_info_def *param_2,png_unknown_chunk_t *param_3,
          int param_4)

{
  byte *pbVar1;
  size_t _Size;
  bool bVar2;
  uint uVar3;
  uint uVar4;
  png_unknown_chunk_t *ppVar5;
  uchar *_Dst;
  
  if ((((param_3 != (png_unknown_chunk_t *)0x0) && (param_1 != (png_struct_def_conflict *)0x0)) &&
      (param_2 != (png_info_def *)0x0)) && (0 < param_4)) {
    ppVar5 = png_realloc_array(param_1,param_2->unknown_chunks,param_2->unknown_chunks_num,param_4,
                               0x20);
    if (ppVar5 == (png_unknown_chunk_t *)0x0) {
      png_chunk_report(param_1,"too many unknown chunks",1);
      return;
    }
    png_free(param_1,param_2->unknown_chunks);
    param_2->unknown_chunks = ppVar5;
    pbVar1 = (byte *)((longlong)&param_2->free_me + 1);
    *pbVar1 = *pbVar1 | 2;
    ppVar5 = ppVar5 + param_2->unknown_chunks_num;
    do {
      ppVar5->name[4] = param_3->name[4];
      *(undefined4 *)ppVar5->name = *(undefined4 *)param_3->name;
      ppVar5->name[4] = '\0';
      uVar3 = param_3->location & 0xb;
      if ((param_3->location & 0xb) == 0) {
        if ((param_1->mode & 0x8000) != 0) {
LAB_140dc82f6:
                    /* WARNING: Subroutine does not return */
          png_error(param_1,"invalid location in png_set_unknown_chunks");
        }
        png_app_warning(param_1,"png_set_unknown_chunks now expects a valid location");
        uVar3 = param_1->mode & 0xb;
        if (uVar3 == 0) goto LAB_140dc82f6;
      }
      do {
        uVar4 = uVar3;
        uVar3 = -uVar4 & uVar4 ^ uVar4;
      } while (uVar4 != (-uVar4 & uVar4));
      ppVar5->location = (uchar)uVar4;
      if (param_3->size == 0) {
        ppVar5->data = (uchar *)0x0;
        ppVar5->size = 0;
LAB_140dc81e4:
        ppVar5 = ppVar5 + 1;
        param_2->unknown_chunks_num = param_2->unknown_chunks_num + 1;
      }
      else {
        _Dst = png_malloc_base(param_1,param_3->size);
        ppVar5->data = _Dst;
        if (_Dst != (uchar *)0x0) {
          _Size = param_3->size;
          memcpy(_Dst,param_3->data,_Size);
          ppVar5->size = _Size;
          goto LAB_140dc81e4;
        }
        png_chunk_report(param_1,"unknown chunk: out of memory",1);
      }
      param_3 = param_3 + 1;
      bVar2 = 1 < param_4;
      param_4 = param_4 + -1;
    } while (bVar2);
  }
  return;
}

// png_set_unknown_chunk_location @ 140dc8310

void __cdecl
png_set_unknown_chunk_location
          (png_struct_def_conflict *param_1,png_info_def *param_2,int param_3,int param_4)

{
  uint uVar1;
  uint uVar2;
  
  if ((-1 < param_3 && (param_2 != (png_info_def *)0x0 && param_1 != (png_struct_def_conflict *)0x0)
      ) && (param_3 < param_2->unknown_chunks_num)) {
    if ((param_4 & 0xbU) == 0) {
      png_app_error(param_1,"invalid unknown chunk location");
      uVar1 = 8;
      if ((param_4 & 4U) == 0) {
        uVar1 = 1;
      }
    }
    else {
      uVar1 = param_4 & 0xb;
    }
    if (uVar1 == 0) {
      if ((param_1->mode & 0x8000) != 0) {
LAB_140dc8400:
                    /* WARNING: Subroutine does not return */
        png_error(param_1,"invalid location in png_set_unknown_chunks");
      }
      png_app_warning(param_1,"png_set_unknown_chunks now expects a valid location");
      uVar1 = param_1->mode & 0xb;
      if (uVar1 == 0) goto LAB_140dc8400;
    }
    do {
      uVar2 = uVar1;
      uVar1 = -uVar2 & uVar2 ^ uVar2;
    } while (uVar2 != (-uVar2 & uVar2));
    param_2->unknown_chunks[(uint)param_3].location = (uchar)uVar2;
  }
  return;
}

// png_permit_mng_features @ 140dc8420

uint __cdecl png_permit_mng_features(png_struct_def_conflict *param_1,uint param_2)

{
  if (param_1 != (png_struct_def_conflict *)0x0) {
    param_1->mng_features_permitted = param_2 & 5;
    return param_2 & 5;
  }
  return 0;
}

// png_set_keep_unknown_chunks @ 140dc8440

void __cdecl
png_set_keep_unknown_chunks(png_struct_def_conflict *param_1,int param_2,uchar *param_3,int param_4)

{
  int *piVar1;
  uint uVar2;
  int *_Dst;
  char *pcVar3;
  int *piVar4;
  uint uVar5;
  uint uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  int *piVar9;
  
  if (param_1 == (png_struct_def_conflict *)0x0) {
    return;
  }
  if (3 < (uint)param_2) {
    pcVar3 = "png_set_keep_unknown_chunks: invalid keep";
LAB_140dc84b6:
    png_app_error(param_1,pcVar3);
    return;
  }
  uVar7 = (ulonglong)(uint)param_4;
  if (param_4 < 1) {
    param_1->unknown_default = param_2;
    if (param_4 == 0) {
      return;
    }
    uVar7 = 0x12;
    param_3 = "bKGD";
  }
  else if (param_3 == (uchar *)0x0) {
    pcVar3 = "png_set_keep_unknown_chunks: no chunk list";
    goto LAB_140dc84b6;
  }
  _Dst = (int *)param_1->chunk_list;
  uVar5 = 0;
  if (_Dst != (int *)0x0) {
    uVar5 = param_1->num_chunk_list;
  }
  uVar2 = uVar5 + (int)uVar7;
  if (0x33333333 < uVar2) {
    pcVar3 = "png_set_keep_unknown_chunks: too many chunks";
    goto LAB_140dc84b6;
  }
  if (param_2 == 0) {
    if (uVar5 == 0) goto LAB_140dc8672;
LAB_140dc8574:
    uVar8 = 0;
    do {
      piVar9 = _Dst;
      uVar2 = uVar5;
      do {
        if (*piVar9 == *(int *)(param_3 + (uint)((int)uVar8 * 5))) {
          *(undefined1 *)(piVar9 + 1) = 0;
          break;
        }
        piVar9 = (int *)((longlong)piVar9 + 5);
        uVar2 = uVar2 - 1;
      } while (uVar2 != 0);
      uVar8 = uVar8 + 1;
    } while (uVar8 != uVar7);
LAB_140dc85b4:
    if (uVar5 == 0) {
LAB_140dc8658:
      piVar9 = (int *)param_1->chunk_list;
      if (piVar9 == _Dst) {
        _Dst = (int *)0x0;
        param_1->num_chunk_list = 0;
        if (piVar9 == (int *)0x0) {
          return;
        }
        goto LAB_140dc8688;
      }
      png_free(param_1,_Dst);
      goto LAB_140dc8672;
    }
    piVar9 = _Dst;
    if (uVar5 == 1) {
      uVar2 = 0;
      piVar4 = _Dst;
    }
    else {
      uVar6 = uVar5 & 0xfffffffe;
      uVar2 = 0;
      piVar1 = (int *)((longlong)_Dst + 5);
      do {
        piVar4 = piVar1;
        if (*(char *)((longlong)piVar4 + -1) != '\0') {
          if ((int *)((longlong)piVar4 + -5) != piVar9) {
            *(undefined1 *)(piVar9 + 1) = *(undefined1 *)((longlong)piVar4 + -1);
            *piVar9 = *(int *)((longlong)piVar4 + -5);
          }
          piVar9 = (int *)((longlong)piVar9 + 5);
          uVar2 = uVar2 + 1;
        }
        if ((char)piVar4[1] != '\0') {
          if (piVar4 != piVar9) {
            *(char *)(piVar9 + 1) = (char)piVar4[1];
            *piVar9 = *piVar4;
          }
          piVar9 = (int *)((longlong)piVar9 + 5);
          uVar2 = uVar2 + 1;
        }
        uVar6 = uVar6 - 2;
        piVar1 = (int *)((longlong)piVar4 + 10);
      } while (uVar6 != 0);
      piVar4 = (int *)((longlong)piVar4 + 5);
    }
    if (((uVar5 & 1) != 0) && ((char)piVar4[1] != '\0')) {
      if (piVar9 != piVar4) {
        *(char *)(piVar9 + 1) = (char)piVar4[1];
        *piVar9 = *piVar4;
      }
      uVar2 = uVar2 + 1;
    }
    if (uVar2 == 0) goto LAB_140dc8658;
  }
  else {
    _Dst = png_malloc(param_1,(ulonglong)(uVar2 * 5));
    if (uVar5 != 0) {
      memcpy(_Dst,param_1->chunk_list,(ulonglong)(uVar5 * 5));
    }
    if (_Dst != (int *)0x0) {
      if (param_2 != 0) {
        uVar8 = 0;
        do {
          uVar2 = (int)uVar8 * 5;
          piVar9 = _Dst;
          for (uVar6 = uVar5; uVar6 != 0; uVar6 = uVar6 - 1) {
            if (*piVar9 == *(int *)(param_3 + uVar2)) goto LAB_140dc8529;
            piVar9 = (int *)((longlong)piVar9 + 5);
          }
          uVar5 = uVar5 + 1;
          *piVar9 = *(int *)(param_3 + uVar2);
LAB_140dc8529:
          *(char *)(piVar9 + 1) = (char)param_2;
          uVar8 = uVar8 + 1;
        } while (uVar8 != uVar7);
        goto LAB_140dc85b4;
      }
      if (uVar5 != 0) goto LAB_140dc8574;
      goto LAB_140dc8658;
    }
LAB_140dc8672:
    _Dst = (int *)0x0;
    uVar2 = 0;
  }
  piVar9 = (int *)param_1->chunk_list;
  param_1->num_chunk_list = uVar2;
  if (piVar9 == _Dst) {
    return;
  }
LAB_140dc8688:
  if (piVar9 != (int *)0x0) {
    png_free(param_1,piVar9);
  }
  param_1->chunk_list = (uchar *)_Dst;
  return;
}

// png_set_read_user_chunk_fn @ 140dc86d0

void __cdecl
png_set_read_user_chunk_fn
          (png_struct_def_conflict *param_1,void *param_2,
          _func___cdecl_int_png_struct_def_ptr_png_unknown_chunk_t_ptr_conflict *param_3)

{
  if (param_1 != (png_struct_def_conflict *)0x0) {
    param_1->read_user_chunk_fn = param_3;
    param_1->user_chunk_ptr = param_2;
  }
  return;
}

// png_set_rows @ 140dc86f0

void __cdecl png_set_rows(png_struct_def_conflict *param_1,png_info_def *param_2,uchar **param_3)

{
  byte *pbVar1;
  
  if (param_2 != (png_info_def *)0x0 && param_1 != (png_struct_def_conflict *)0x0) {
    if (param_2->row_pointers != param_3 && param_2->row_pointers != (uchar **)0x0) {
      png_free_data(param_1,param_2,0x40,0);
    }
    param_2->row_pointers = param_3;
    if (param_3 != (uchar **)0x0) {
      pbVar1 = (byte *)((longlong)&param_2->valid + 1);
      *pbVar1 = *pbVar1 | 0x80;
    }
  }
  return;
}

// png_set_compression_buffer_size @ 140dc8760

void __cdecl png_set_compression_buffer_size(png_struct_def_conflict *param_1,ulong64 param_2)

{
  char *pcVar1;
  
  if (param_1 != (png_struct_def_conflict *)0x0) {
    if (param_2 - 0x80000000 < 0xffffffff80000001) {
                    /* WARNING: Subroutine does not return */
      png_error(param_1,"invalid compression buffer size");
    }
    if ((param_1->mode & 0x8000) == 0) {
      if (param_1->zowner == 0) {
        if (5 < param_2) {
          if (param_1->zbuffer_size == param_2) {
            return;
          }
          png_free_buffer_list(param_1,&param_1->zbuffer_list);
          param_1->zbuffer_size = (uint)param_2;
          return;
        }
        pcVar1 = "Compression buffer size cannot be reduced below 6";
      }
      else {
        pcVar1 = "Compression buffer size cannot be changed because it is in use";
      }
      png_warning(param_1,pcVar1);
      return;
    }
    param_1->IDAT_read_size = (uint)param_2;
  }
  return;
}

// png_set_invalid @ 140dc8800

void __cdecl png_set_invalid(png_struct_def_conflict *param_1,png_info_def *param_2,int param_3)

{
  if (param_2 != (png_info_def *)0x0 && param_1 != (png_struct_def_conflict *)0x0) {
    param_2->valid = param_2->valid & ~param_3;
  }
  return;
}

// png_set_user_limits @ 140dc8820

void __cdecl png_set_user_limits(png_struct_def_conflict *param_1,uint param_2,uint param_3)

{
  if (param_1 != (png_struct_def_conflict *)0x0) {
    param_1->user_width_max = param_2;
    param_1->user_height_max = param_3;
  }
  return;
}

// png_set_chunk_cache_max @ 140dc8840

void __cdecl png_set_chunk_cache_max(png_struct_def_conflict *param_1,uint param_2)

{
  if (param_1 != (png_struct_def_conflict *)0x0) {
    param_1->user_chunk_cache_max = param_2;
  }
  return;
}

// png_set_chunk_malloc_max @ 140dc8860

void __cdecl png_set_chunk_malloc_max(png_struct_def_conflict *param_1,ulong64 param_2)

{
  if (param_1 != (png_struct_def_conflict *)0x0) {
    param_1->user_chunk_malloc_max = param_2;
  }
  return;
}

// png_set_benign_errors @ 140dc8880

void __cdecl png_set_benign_errors(png_struct_def_conflict *param_1,int param_2)

{
  uint uVar1;
  
  uVar1 = 0x700000;
  if (param_2 == 0) {
    uVar1 = 0;
  }
  param_1->flags = uVar1 | param_1->flags & 0xff8fffff;
  return;
}

// png_set_check_for_invalid_index @ 140dc88b0

void __cdecl png_set_check_for_invalid_index(png_struct_def_conflict *param_1,int param_2)

{
  param_1->num_palette_max = -(uint)(param_2 < 1);
  return;
}

// png_check_keyword @ 140dc88d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

uint __cdecl png_check_keyword(png_struct_def_conflict *param_1,char *param_2,uchar *param_3)

{
  code *pcVar1;
  bool bVar2;
  bool bVar3;
  uint uVar4;
  byte bVar5;
  uint uVar6;
  uint uVar7;
  char *pcVar8;
  char *pcVar9;
  bool bVar10;
  undefined1 auStack_148 [32];
  char local_128 [256];
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_148;
  if (param_2 == (char *)0x0) {
    *param_3 = '\0';
    uVar4 = 0;
  }
  else {
    bVar5 = *param_2;
    if (bVar5 == 0) {
      bVar2 = true;
      uVar6 = 0;
      uVar4 = 0;
      pcVar9 = param_2;
    }
    else {
      uVar4 = 0;
      bVar3 = true;
      uVar6 = 0;
      pcVar8 = param_2;
      do {
        bVar10 = (byte)(bVar5 + 0x81) < 0xa2;
        bVar2 = bVar5 < 0xa1 && bVar10;
        if (bVar5 < 0xa1 && bVar10) {
          if (bVar3) {
            if (uVar4 == 0) {
              uVar4 = (uint)bVar5;
            }
          }
          else {
            *param_3 = 0x20;
            param_3 = param_3 + 1;
            uVar6 = uVar6 + 1;
            if (bVar5 != 0x20) {
              uVar4 = (uint)bVar5;
            }
          }
          bVar3 = true;
          bVar5 = pcVar8[1];
        }
        else {
          *param_3 = bVar5;
          param_3 = param_3 + 1;
          uVar6 = uVar6 + 1;
          bVar3 = false;
          bVar5 = pcVar8[1];
        }
        pcVar9 = pcVar8 + 1;
      } while ((bVar5 != 0) && (pcVar9 = pcVar8 + 1, pcVar8 = pcVar9, uVar6 < 0x4f));
    }
    bVar5 = uVar6 != 0 & bVar2;
    uVar7 = 0x20;
    if (uVar4 != 0) {
      uVar7 = uVar4;
    }
    if (bVar5 == 0) {
      uVar7 = uVar4;
    }
    param_3[-(ulonglong)bVar5] = 0;
    uVar6 = uVar6 - bVar5;
    uVar4 = 0;
    if (uVar6 != 0) {
      uVar4 = uVar6;
      if (*pcVar9 == '\0') {
        if (uVar7 != 0) {
          png_warning_parameter((char (*) [32])local_128,1,param_2);
          png_warning_parameter_signed((char (*) [32])local_128,2,4,uVar7);
          png_formatted_warning
                    (param_1,(char (*) [32])local_128,"keyword \"@1\": bad character \'0x@2\'");
        }
      }
      else {
        png_warning(param_1,"keyword truncated");
      }
    }
  }
  if ((local_28 ^ (ulonglong)auStack_148) == __security_cookie.value) {
    return uVar4;
  }
  pcVar1 = (code *)swi(3);
  uVar4 = (*pcVar1)();
  return uVar4;
}

