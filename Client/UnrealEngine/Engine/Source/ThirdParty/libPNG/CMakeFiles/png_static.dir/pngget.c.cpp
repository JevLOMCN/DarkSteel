// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: libPNG
// Functions: 65

// png_get_valid @ 140dc8a60

uint __cdecl png_get_valid(png_struct_def_conflict *param_1,png_info_def *param_2,uint param_3)

{
  uint uVar1;
  
  uVar1 = 0;
  if ((param_2 != (png_info_def *)0x0 && param_1 != (png_struct_def_conflict *)0x0) &&
     ((param_3 != 0x10 || (uVar1 = 0, param_1->num_trans != 0)))) {
    uVar1 = param_3 & param_2->valid;
  }
  return uVar1;
}

// png_get_rowbytes @ 140dc8aa0

ulong64 __cdecl png_get_rowbytes(png_struct_def_conflict *param_1,png_info_def *param_2)

{
  if (param_2 != (png_info_def *)0x0 && param_1 != (png_struct_def_conflict *)0x0) {
    return param_2->rowbytes;
  }
  return 0;
}

// png_get_rows @ 140dc8ac0

uchar ** __cdecl png_get_rows(png_struct_def_conflict *param_1,png_info_def *param_2)

{
  if (param_2 != (png_info_def *)0x0 && param_1 != (png_struct_def_conflict *)0x0) {
    return param_2->row_pointers;
  }
  return (uchar **)0x0;
}

// png_get_image_width @ 140dc8af0

uint __cdecl png_get_image_width(png_struct_def_conflict *param_1,png_info_def *param_2)

{
  uint uVar1;
  
  uVar1 = 0;
  if (param_2 != (png_info_def *)0x0 && param_1 != (png_struct_def_conflict *)0x0) {
    uVar1 = param_2->width;
  }
  return uVar1;
}

// png_get_image_height @ 140dc8b10

uint __cdecl png_get_image_height(png_struct_def_conflict *param_1,png_info_def *param_2)

{
  uint uVar1;
  
  uVar1 = 0;
  if (param_2 != (png_info_def *)0x0 && param_1 != (png_struct_def_conflict *)0x0) {
    uVar1 = param_2->height;
  }
  return uVar1;
}

// png_get_bit_depth @ 140dc8b30

uchar __cdecl png_get_bit_depth(png_struct_def_conflict *param_1,png_info_def *param_2)

{
  if (param_2 != (png_info_def *)0x0 && param_1 != (png_struct_def_conflict *)0x0) {
    return param_2->bit_depth;
  }
  return '\0';
}

// png_get_color_type @ 140dc8b50

uchar __cdecl png_get_color_type(png_struct_def_conflict *param_1,png_info_def *param_2)

{
  if (param_2 != (png_info_def *)0x0 && param_1 != (png_struct_def_conflict *)0x0) {
    return param_2->color_type;
  }
  return '\0';
}

// png_get_filter_type @ 140dc8b70

uchar __cdecl png_get_filter_type(png_struct_def_conflict *param_1,png_info_def *param_2)

{
  if (param_2 != (png_info_def *)0x0 && param_1 != (png_struct_def_conflict *)0x0) {
    return param_2->filter_type;
  }
  return '\0';
}

// png_get_interlace_type @ 140dc8b90

uchar __cdecl png_get_interlace_type(png_struct_def_conflict *param_1,png_info_def *param_2)

{
  if (param_2 != (png_info_def *)0x0 && param_1 != (png_struct_def_conflict *)0x0) {
    return param_2->interlace_type;
  }
  return '\0';
}

// png_get_compression_type @ 140dc8bb0

uchar __cdecl png_get_compression_type(png_struct_def_conflict *param_1,png_info_def *param_2)

{
  if (param_2 != (png_info_def *)0x0 && param_1 != (png_struct_def_conflict *)0x0) {
    return param_2->compression_type;
  }
  return '\0';
}

// png_get_x_pixels_per_meter @ 140dc8bd0

uint __cdecl png_get_x_pixels_per_meter(png_struct_def_conflict *param_1,png_info_def *param_2)

{
  uint uVar1;
  
  uVar1 = 0;
  if (((param_2 != (png_info_def *)0x0 && param_1 != (png_struct_def_conflict *)0x0) &&
      (uVar1 = 0, (param_2->valid & 0x80) != 0)) && (param_2->phys_unit_type == '\x01')) {
    uVar1 = param_2->x_pixels_per_unit;
  }
  return uVar1;
}

// png_get_y_pixels_per_meter @ 140dc8c00

uint __cdecl png_get_y_pixels_per_meter(png_struct_def_conflict *param_1,png_info_def *param_2)

{
  uint uVar1;
  
  uVar1 = 0;
  if (((param_2 != (png_info_def *)0x0 && param_1 != (png_struct_def_conflict *)0x0) &&
      (uVar1 = 0, (param_2->valid & 0x80) != 0)) && (param_2->phys_unit_type == '\x01')) {
    uVar1 = param_2->y_pixels_per_unit;
  }
  return uVar1;
}

// png_get_pixels_per_meter @ 140dc8c30

uint __cdecl png_get_pixels_per_meter(png_struct_def_conflict *param_1,png_info_def *param_2)

{
  uint uVar1;
  
  if ((((param_2 == (png_info_def *)0x0 || param_1 == (png_struct_def_conflict *)0x0) ||
       ((param_2->valid & 0x80) == 0)) || (param_2->phys_unit_type != '\x01')) ||
     (uVar1 = param_2->x_pixels_per_unit, uVar1 != param_2->y_pixels_per_unit)) {
    uVar1 = 0;
  }
  return uVar1;
}

// png_get_pixel_aspect_ratio @ 140dc8c70

float __cdecl png_get_pixel_aspect_ratio(png_struct_def_conflict *param_1,png_info_def *param_2)

{
  float fVar1;
  
  fVar1 = 0.0;
  if (((param_2 != (png_info_def *)0x0 && param_1 != (png_struct_def_conflict *)0x0) &&
      ((param_2->valid & 0x80) != 0)) && (param_2->x_pixels_per_unit != 0)) {
    fVar1 = (float)param_2->y_pixels_per_unit / (float)param_2->x_pixels_per_unit;
  }
  return fVar1;
}

// png_get_pixel_aspect_ratio_fixed @ 140dc8cc0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

int __cdecl png_get_pixel_aspect_ratio_fixed(png_struct_def_conflict *param_1,png_info_def *param_2)

{
  uint uVar1;
  code *pcVar2;
  int iVar3;
  undefined1 auStack_38 [44];
  int local_c;
  ulonglong local_8;
  
  local_8 = __security_cookie.value ^ (ulonglong)auStack_38;
  if ((param_2 != (png_info_def *)0x0 && param_1 != (png_struct_def_conflict *)0x0) &&
     ((param_2->valid & 0x80) != 0)) {
    uVar1 = param_2->x_pixels_per_unit;
    if ((uVar1 != 0) &&
       ((0 < (int)param_2->y_pixels_per_unit && -1 < (int)uVar1 &&
        (iVar3 = png_muldiv(&local_c,param_2->y_pixels_per_unit,100000,uVar1), iVar3 != 0)))) {
      if ((local_8 ^ (ulonglong)auStack_38) == __security_cookie.value) {
        return local_c;
      }
      goto LAB_140dc8d30;
    }
  }
  if ((local_8 ^ (ulonglong)auStack_38) == __security_cookie.value) {
    return 0;
  }
LAB_140dc8d30:
  pcVar2 = (code *)swi(3);
  iVar3 = (*pcVar2)();
  return iVar3;
}

// png_get_x_offset_microns @ 140dc8d60

int __cdecl png_get_x_offset_microns(png_struct_def_conflict *param_1,png_info_def *param_2)

{
  int iVar1;
  
  iVar1 = 0;
  if (((param_2 != (png_info_def *)0x0 && param_1 != (png_struct_def_conflict *)0x0) &&
      (iVar1 = 0, (param_2->valid & 0x100) != 0)) && (param_2->offset_unit_type == '\x01')) {
    iVar1 = param_2->x_offset;
  }
  return iVar1;
}

// png_get_y_offset_microns @ 140dc8d90

int __cdecl png_get_y_offset_microns(png_struct_def_conflict *param_1,png_info_def *param_2)

{
  int iVar1;
  
  iVar1 = 0;
  if (((param_2 != (png_info_def *)0x0 && param_1 != (png_struct_def_conflict *)0x0) &&
      (iVar1 = 0, (param_2->valid & 0x100) != 0)) && (param_2->offset_unit_type == '\x01')) {
    iVar1 = param_2->y_offset;
  }
  return iVar1;
}

// png_get_x_offset_pixels @ 140dc8dc0

int __cdecl png_get_x_offset_pixels(png_struct_def_conflict *param_1,png_info_def *param_2)

{
  if (((param_2 != (png_info_def *)0x0 && param_1 != (png_struct_def_conflict *)0x0) &&
      ((param_2->valid & 0x100) != 0)) && (param_2->offset_unit_type == '\0')) {
    return param_2->x_offset;
  }
  return 0;
}

// png_get_y_offset_pixels @ 140dc8e00

int __cdecl png_get_y_offset_pixels(png_struct_def_conflict *param_1,png_info_def *param_2)

{
  if (((param_2 != (png_info_def *)0x0 && param_1 != (png_struct_def_conflict *)0x0) &&
      ((param_2->valid & 0x100) != 0)) && (param_2->offset_unit_type == '\0')) {
    return param_2->y_offset;
  }
  return 0;
}

// png_get_pixels_per_inch @ 140dc8e40

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

uint __cdecl png_get_pixels_per_inch(png_struct_def_conflict *param_1,png_info_def *param_2)

{
  code *pcVar1;
  int iVar2;
  uint uVar3;
  undefined1 auStack_38 [44];
  uint local_c;
  ulonglong local_8;
  
  local_8 = __security_cookie.value ^ (ulonglong)auStack_38;
  if ((((param_2 == (png_info_def *)0x0 || param_1 == (png_struct_def_conflict *)0x0) ||
       ((param_2->valid & 0x80) == 0)) || (param_2->phys_unit_type != '\x01')) ||
     (uVar3 = param_2->x_pixels_per_unit, uVar3 != param_2->y_pixels_per_unit)) {
    uVar3 = 0;
  }
  else if ((int)uVar3 < 0) {
    uVar3 = 0;
    goto LAB_140dc8eaa;
  }
  iVar2 = png_muldiv((int *)&local_c,uVar3,0x7f,5000);
  uVar3 = 0;
  if (iVar2 != 0) {
    uVar3 = local_c;
  }
LAB_140dc8eaa:
  if ((local_8 ^ (ulonglong)auStack_38) == __security_cookie.value) {
    return uVar3;
  }
  pcVar1 = (code *)swi(3);
  uVar3 = (*pcVar1)();
  return uVar3;
}

// png_get_x_pixels_per_inch @ 140dc8ed0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

uint __cdecl png_get_x_pixels_per_inch(png_struct_def_conflict *param_1,png_info_def *param_2)

{
  code *pcVar1;
  int iVar2;
  uint uVar3;
  undefined1 auStack_38 [44];
  uint local_c;
  ulonglong local_8;
  
  local_8 = __security_cookie.value ^ (ulonglong)auStack_38;
  if (((param_2 == (png_info_def *)0x0 || param_1 == (png_struct_def_conflict *)0x0) ||
      ((param_2->valid & 0x80) == 0)) || (param_2->phys_unit_type != '\x01')) {
    uVar3 = 0;
  }
  else {
    uVar3 = param_2->x_pixels_per_unit;
    if ((int)uVar3 < 0) {
      uVar3 = 0;
      goto LAB_140dc8f30;
    }
  }
  iVar2 = png_muldiv((int *)&local_c,uVar3,0x7f,5000);
  uVar3 = 0;
  if (iVar2 != 0) {
    uVar3 = local_c;
  }
LAB_140dc8f30:
  if ((local_8 ^ (ulonglong)auStack_38) == __security_cookie.value) {
    return uVar3;
  }
  pcVar1 = (code *)swi(3);
  uVar3 = (*pcVar1)();
  return uVar3;
}

// png_get_y_pixels_per_inch @ 140dc8f60

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

uint __cdecl png_get_y_pixels_per_inch(png_struct_def_conflict *param_1,png_info_def *param_2)

{
  code *pcVar1;
  int iVar2;
  uint uVar3;
  undefined1 auStack_38 [44];
  uint local_c;
  ulonglong local_8;
  
  local_8 = __security_cookie.value ^ (ulonglong)auStack_38;
  if (((param_2 == (png_info_def *)0x0 || param_1 == (png_struct_def_conflict *)0x0) ||
      ((param_2->valid & 0x80) == 0)) || (param_2->phys_unit_type != '\x01')) {
    uVar3 = 0;
  }
  else {
    uVar3 = param_2->y_pixels_per_unit;
    if ((int)uVar3 < 0) {
      uVar3 = 0;
      goto LAB_140dc8fc0;
    }
  }
  iVar2 = png_muldiv((int *)&local_c,uVar3,0x7f,5000);
  uVar3 = 0;
  if (iVar2 != 0) {
    uVar3 = local_c;
  }
LAB_140dc8fc0:
  if ((local_8 ^ (ulonglong)auStack_38) == __security_cookie.value) {
    return uVar3;
  }
  pcVar1 = (code *)swi(3);
  uVar3 = (*pcVar1)();
  return uVar3;
}

// png_get_x_offset_inches_fixed @ 140dc8ff0

int __cdecl png_get_x_offset_inches_fixed(png_struct_def_conflict *param_1,png_info_def *param_2)

{
  int iVar1;
  
  iVar1 = 0;
  if (((param_2 != (png_info_def *)0x0 && param_1 != (png_struct_def_conflict *)0x0) &&
      (iVar1 = 0, (param_2->valid & 0x100) != 0)) && (param_2->offset_unit_type == '\x01')) {
    iVar1 = param_2->x_offset;
  }
  iVar1 = png_muldiv_warn(param_1,iVar1,500,0x7f);
  return iVar1;
}

// png_get_y_offset_inches_fixed @ 140dc9040

int __cdecl png_get_y_offset_inches_fixed(png_struct_def_conflict *param_1,png_info_def *param_2)

{
  int iVar1;
  
  iVar1 = 0;
  if (((param_2 != (png_info_def *)0x0 && param_1 != (png_struct_def_conflict *)0x0) &&
      (iVar1 = 0, (param_2->valid & 0x100) != 0)) && (param_2->offset_unit_type == '\x01')) {
    iVar1 = param_2->y_offset;
  }
  iVar1 = png_muldiv_warn(param_1,iVar1,500,0x7f);
  return iVar1;
}

// png_get_x_offset_inches @ 140dc9090

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float __cdecl png_get_x_offset_inches(png_struct_def_conflict *param_1,png_info_def *param_2)

{
  float fVar1;
  
  fVar1 = 0.0;
  if (((param_2 != (png_info_def *)0x0 && param_1 != (png_struct_def_conflict *)0x0) &&
      (fVar1 = 0.0, (param_2->valid & 0x100) != 0)) && (param_2->offset_unit_type == '\x01')) {
    fVar1 = (float)((double)param_2->x_offset * ___real_3f04a426e648c9c8);
  }
  return fVar1;
}

// png_get_y_offset_inches @ 140dc90d0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float __cdecl png_get_y_offset_inches(png_struct_def_conflict *param_1,png_info_def *param_2)

{
  float fVar1;
  
  fVar1 = 0.0;
  if (((param_2 != (png_info_def *)0x0 && param_1 != (png_struct_def_conflict *)0x0) &&
      (fVar1 = 0.0, (param_2->valid & 0x100) != 0)) && (param_2->offset_unit_type == '\x01')) {
    fVar1 = (float)((double)param_2->y_offset * ___real_3f04a426e648c9c8);
  }
  return fVar1;
}

// png_get_pHYs_dpi @ 140dc9110

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint __cdecl
png_get_pHYs_dpi(png_struct_def_conflict *param_1,png_info_def *param_2,uint *param_3,uint *param_4,
                int *param_5)

{
  byte bVar1;
  uint uVar2;
  
  uVar2 = 0;
  if ((param_2 != (png_info_def *)0x0 && param_1 != (png_struct_def_conflict *)0x0) &&
     ((param_2->valid & 0x80) != 0)) {
    if (param_3 == (uint *)0x0) {
      uVar2 = 0;
    }
    else {
      *param_3 = param_2->x_pixels_per_unit;
      uVar2 = 0x80;
    }
    if (param_4 != (uint *)0x0) {
      *param_4 = param_2->y_pixels_per_unit;
      uVar2 = 0x80;
    }
    if (param_5 != (int *)0x0) {
      bVar1 = param_2->phys_unit_type;
      *param_5 = (uint)bVar1;
      uVar2 = 0x80;
      if (bVar1 == 1) {
        if (param_3 != (uint *)0x0) {
          *param_3 = (uint)(longlong)
                           ((double)*param_3 * ___real_3f9a027525460aa6 + __real_3fe0000000000000);
        }
        if (param_4 != (uint *)0x0) {
          *param_4 = (uint)(longlong)
                           ((double)*param_4 * ___real_3f9a027525460aa6 + __real_3fe0000000000000);
        }
      }
    }
  }
  return uVar2;
}

// png_get_channels @ 140dc91e0

uchar __cdecl png_get_channels(png_struct_def_conflict *param_1,png_info_def *param_2)

{
  if (param_2 != (png_info_def *)0x0 && param_1 != (png_struct_def_conflict *)0x0) {
    return param_2->channels;
  }
  return '\0';
}

// png_get_signature @ 140dc9200

uchar * __cdecl png_get_signature(png_struct_def_conflict *param_1,png_info_def *param_2)

{
  uchar *puVar1;
  
  puVar1 = param_2->signature;
  if (param_2 == (png_info_def *)0x0) {
    puVar1 = (uchar *)0x0;
  }
  if (param_1 == (png_struct_def_conflict *)0x0) {
    puVar1 = (uchar *)0x0;
  }
  return puVar1;
}

// png_get_bKGD @ 140dc9220

uint __cdecl
png_get_bKGD(png_struct_def_conflict *param_1,png_info_def *param_2,png_color_16_struct **param_3)

{
  uint uVar1;
  
  uVar1 = 0;
  if (((param_2 != (png_info_def *)0x0 && param_1 != (png_struct_def_conflict *)0x0) &&
      (param_3 != (png_color_16_struct **)0x0)) && ((param_2->valid & 0x20) != 0)) {
    *param_3 = &param_2->background;
    uVar1 = 0x20;
  }
  return uVar1;
}

// png_get_cHRM @ 140dc9260

uint __cdecl
png_get_cHRM(png_struct_def_conflict *param_1,png_info_def *param_2,double *param_3,double *param_4,
            double *param_5,double *param_6,double *param_7,double *param_8,double *param_9,
            double *param_10)

{
  uint uVar1;
  
  uVar1 = 0;
  if ((param_2 != (png_info_def *)0x0 && param_1 != (png_struct_def_conflict *)0x0) &&
     (((param_2->colorspace).flags & 2) != 0)) {
    if (param_3 != (double *)0x0) {
      *param_3 = (double)(param_2->colorspace).end_points_xy.whitex * __real_3ee4f8b588e368f1;
    }
    if (param_4 != (double *)0x0) {
      *param_4 = (double)(param_2->colorspace).end_points_xy.whitey * __real_3ee4f8b588e368f1;
    }
    if (param_5 != (double *)0x0) {
      *param_5 = (double)(param_2->colorspace).end_points_xy.redx * __real_3ee4f8b588e368f1;
    }
    if (param_6 != (double *)0x0) {
      *param_6 = (double)(param_2->colorspace).end_points_xy.redy * __real_3ee4f8b588e368f1;
    }
    if (param_7 != (double *)0x0) {
      *param_7 = (double)(param_2->colorspace).end_points_xy.greenx * __real_3ee4f8b588e368f1;
    }
    if (param_8 != (double *)0x0) {
      *param_8 = (double)(param_2->colorspace).end_points_xy.greeny * __real_3ee4f8b588e368f1;
    }
    if (param_9 != (double *)0x0) {
      *param_9 = (double)(param_2->colorspace).end_points_xy.bluex * __real_3ee4f8b588e368f1;
    }
    uVar1 = 4;
    if (param_10 != (double *)0x0) {
      *param_10 = (double)(param_2->colorspace).end_points_xy.bluey * __real_3ee4f8b588e368f1;
    }
  }
  return uVar1;
}

// png_get_cHRM_XYZ @ 140dc9380

uint __cdecl
png_get_cHRM_XYZ(png_struct_def_conflict *param_1,png_info_def *param_2,double *param_3,
                double *param_4,double *param_5,double *param_6,double *param_7,double *param_8,
                double *param_9,double *param_10,double *param_11)

{
  uint uVar1;
  
  uVar1 = 0;
  if ((param_2 != (png_info_def *)0x0 && param_1 != (png_struct_def_conflict *)0x0) &&
     (((param_2->colorspace).flags & 2) != 0)) {
    if (param_3 != (double *)0x0) {
      *param_3 = (double)(param_2->colorspace).end_points_XYZ.red_X * __real_3ee4f8b588e368f1;
    }
    if (param_4 != (double *)0x0) {
      *param_4 = (double)(param_2->colorspace).end_points_XYZ.red_Y * __real_3ee4f8b588e368f1;
    }
    if (param_5 != (double *)0x0) {
      *param_5 = (double)(param_2->colorspace).end_points_XYZ.red_Z * __real_3ee4f8b588e368f1;
    }
    if (param_6 != (double *)0x0) {
      *param_6 = (double)(param_2->colorspace).end_points_XYZ.green_X * __real_3ee4f8b588e368f1;
    }
    if (param_7 != (double *)0x0) {
      *param_7 = (double)(param_2->colorspace).end_points_XYZ.green_Y * __real_3ee4f8b588e368f1;
    }
    if (param_8 != (double *)0x0) {
      *param_8 = (double)(param_2->colorspace).end_points_XYZ.green_Z * __real_3ee4f8b588e368f1;
    }
    if (param_9 != (double *)0x0) {
      *param_9 = (double)(param_2->colorspace).end_points_XYZ.blue_X * __real_3ee4f8b588e368f1;
    }
    if (param_10 != (double *)0x0) {
      *param_10 = (double)(param_2->colorspace).end_points_XYZ.blue_Y * __real_3ee4f8b588e368f1;
    }
    uVar1 = 4;
    if (param_11 != (double *)0x0) {
      *param_11 = (double)(param_2->colorspace).end_points_XYZ.blue_Z * __real_3ee4f8b588e368f1;
    }
  }
  return uVar1;
}

// png_get_cHRM_XYZ_fixed @ 140dc94c0

uint __cdecl
png_get_cHRM_XYZ_fixed
          (png_struct_def_conflict *param_1,png_info_def *param_2,int *param_3,int *param_4,
          int *param_5,int *param_6,int *param_7,int *param_8,int *param_9,int *param_10,
          int *param_11)

{
  uint uVar1;
  
  uVar1 = 0;
  if ((param_2 != (png_info_def *)0x0 && param_1 != (png_struct_def_conflict *)0x0) &&
     (((param_2->colorspace).flags & 2) != 0)) {
    if (param_3 != (int *)0x0) {
      *param_3 = (param_2->colorspace).end_points_XYZ.red_X;
    }
    if (param_4 != (int *)0x0) {
      *param_4 = (param_2->colorspace).end_points_XYZ.red_Y;
    }
    if (param_5 != (int *)0x0) {
      *param_5 = (param_2->colorspace).end_points_XYZ.red_Z;
    }
    if (param_6 != (int *)0x0) {
      *param_6 = (param_2->colorspace).end_points_XYZ.green_X;
    }
    if (param_7 != (int *)0x0) {
      *param_7 = (param_2->colorspace).end_points_XYZ.green_Y;
    }
    if (param_8 != (int *)0x0) {
      *param_8 = (param_2->colorspace).end_points_XYZ.green_Z;
    }
    if (param_9 != (int *)0x0) {
      *param_9 = (param_2->colorspace).end_points_XYZ.blue_X;
    }
    if (param_10 != (int *)0x0) {
      *param_10 = (param_2->colorspace).end_points_XYZ.blue_Y;
    }
    uVar1 = 4;
    if (param_11 != (int *)0x0) {
      *param_11 = (param_2->colorspace).end_points_XYZ.blue_Z;
    }
  }
  return uVar1;
}

// png_get_cHRM_fixed @ 140dc9580

uint __cdecl
png_get_cHRM_fixed(png_struct_def_conflict *param_1,png_info_def *param_2,int *param_3,int *param_4,
                  int *param_5,int *param_6,int *param_7,int *param_8,int *param_9,int *param_10)

{
  uint uVar1;
  
  uVar1 = 0;
  if ((param_2 != (png_info_def *)0x0 && param_1 != (png_struct_def_conflict *)0x0) &&
     (((param_2->colorspace).flags & 2) != 0)) {
    if (param_3 != (int *)0x0) {
      *param_3 = (param_2->colorspace).end_points_xy.whitex;
    }
    if (param_4 != (int *)0x0) {
      *param_4 = (param_2->colorspace).end_points_xy.whitey;
    }
    if (param_5 != (int *)0x0) {
      *param_5 = (param_2->colorspace).end_points_xy.redx;
    }
    if (param_6 != (int *)0x0) {
      *param_6 = (param_2->colorspace).end_points_xy.redy;
    }
    if (param_7 != (int *)0x0) {
      *param_7 = (param_2->colorspace).end_points_xy.greenx;
    }
    if (param_8 != (int *)0x0) {
      *param_8 = (param_2->colorspace).end_points_xy.greeny;
    }
    if (param_9 != (int *)0x0) {
      *param_9 = (param_2->colorspace).end_points_xy.bluex;
    }
    uVar1 = 4;
    if (param_10 != (int *)0x0) {
      *param_10 = (param_2->colorspace).end_points_xy.bluey;
    }
  }
  return uVar1;
}

// png_get_gAMA_fixed @ 140dc9630

uint __cdecl png_get_gAMA_fixed(png_struct_def_conflict *param_1,png_info_def *param_2,int *param_3)

{
  uint uVar1;
  
  uVar1 = 0;
  if (((param_2 != (png_info_def *)0x0 && param_1 != (png_struct_def_conflict *)0x0) &&
      (param_3 != (int *)0x0)) && (((param_2->colorspace).flags & 1) != 0)) {
    *param_3 = (param_2->colorspace).gamma;
    uVar1 = 1;
  }
  return uVar1;
}

// png_get_gAMA @ 140dc9670

uint __cdecl png_get_gAMA(png_struct_def_conflict *param_1,png_info_def *param_2,double *param_3)

{
  uint uVar1;
  
  uVar1 = 0;
  if (((param_2 != (png_info_def *)0x0 && param_1 != (png_struct_def_conflict *)0x0) &&
      (param_3 != (double *)0x0)) && (((param_2->colorspace).flags & 1) != 0)) {
    *param_3 = (double)(param_2->colorspace).gamma * __real_3ee4f8b588e368f1;
    uVar1 = 1;
  }
  return uVar1;
}

// png_get_sRGB @ 140dc96b0

uint __cdecl png_get_sRGB(png_struct_def_conflict *param_1,png_info_def *param_2,int *param_3)

{
  uint uVar1;
  
  uVar1 = 0;
  if (((param_2 != (png_info_def *)0x0 && param_1 != (png_struct_def_conflict *)0x0) &&
      (param_3 != (int *)0x0)) && ((param_2->valid & 0x800) != 0)) {
    *param_3 = (uint)(param_2->colorspace).rendering_intent;
    uVar1 = 0x800;
  }
  return uVar1;
}

// png_get_iCCP @ 140dc96f0

uint __cdecl
png_get_iCCP(png_struct_def_conflict *param_1,png_info_def *param_2,char **param_3,int *param_4,
            uchar **param_5,uint *param_6)

{
  uint *puVar1;
  uint uVar2;
  
  uVar2 = 0;
  if ((((param_2 != (png_info_def *)0x0 && param_1 != (png_struct_def_conflict *)0x0) &&
       (param_6 != (uint *)0x0)) && (param_5 != (uchar **)0x0)) &&
     ((param_3 != (char **)0x0 && ((param_2->valid & 0x1000) != 0)))) {
    *param_3 = param_2->iccp_name;
    puVar1 = (uint *)param_2->iccp_profile;
    *param_5 = (uchar *)puVar1;
    uVar2 = *puVar1;
    *param_6 = uVar2 >> 0x18 | (uVar2 & 0xff0000) >> 8 | (uVar2 & 0xff00) << 8 | uVar2 << 0x18;
    uVar2 = 0x1000;
    if (param_4 != (int *)0x0) {
      *param_4 = 0;
    }
  }
  return uVar2;
}

// png_get_sPLT @ 140dc9760

int __cdecl
png_get_sPLT(png_struct_def_conflict *param_1,png_info_def *param_2,png_sPLT_struct **param_3)

{
  int iVar1;
  
  iVar1 = 0;
  if (param_3 != (png_sPLT_struct **)0x0 &&
      (param_2 != (png_info_def *)0x0 && param_1 != (png_struct_def_conflict *)0x0)) {
    *param_3 = param_2->splt_palettes;
    iVar1 = param_2->splt_palettes_num;
  }
  return iVar1;
}

// png_get_eXIf @ 140dc97a0

uint __cdecl png_get_eXIf(png_struct_def_conflict *param_1,png_info_def *param_2,uchar **param_3)

{
  png_warning(param_1,"png_get_eXIf does not work; use png_get_eXIf_1");
  return 0;
}

// png_get_eXIf_1 @ 140dc97c0

uint __cdecl
png_get_eXIf_1(png_struct_def_conflict *param_1,png_info_def *param_2,uint *param_3,uchar **param_4)

{
  uint uVar1;
  
  uVar1 = 0;
  if (((param_2 != (png_info_def *)0x0 && param_1 != (png_struct_def_conflict *)0x0) &&
      (param_4 != (uchar **)0x0)) && ((param_2->valid & 0x10000) != 0)) {
    *param_3 = param_2->num_exif;
    *param_4 = param_2->exif;
    uVar1 = 0x10000;
  }
  return uVar1;
}

// png_get_hIST @ 140dc9810

uint __cdecl png_get_hIST(png_struct_def_conflict *param_1,png_info_def *param_2,ushort **param_3)

{
  uint uVar1;
  
  uVar1 = 0;
  if (((param_2 != (png_info_def *)0x0 && param_1 != (png_struct_def_conflict *)0x0) &&
      (param_3 != (ushort **)0x0)) && ((param_2->valid & 0x40) != 0)) {
    *param_3 = param_2->hist;
    uVar1 = 0x40;
  }
  return uVar1;
}

// png_get_IHDR @ 140dc9850

uint __cdecl
png_get_IHDR(png_struct_def_conflict *param_1,png_info_def *param_2,uint *param_3,uint *param_4,
            int *param_5,int *param_6,int *param_7,int *param_8,int *param_9)

{
  byte bVar1;
  uint uVar2;
  
  uVar2 = 0;
  if (param_2 != (png_info_def *)0x0 && param_1 != (png_struct_def_conflict *)0x0) {
    if (param_3 != (uint *)0x0) {
      *param_3 = param_2->width;
    }
    if (param_4 != (uint *)0x0) {
      *param_4 = param_2->height;
    }
    if (param_5 != (int *)0x0) {
      *param_5 = (uint)param_2->bit_depth;
    }
    if (param_6 != (int *)0x0) {
      *param_6 = (uint)param_2->color_type;
    }
    if (param_8 != (int *)0x0) {
      *param_8 = (uint)param_2->compression_type;
    }
    if (param_9 != (int *)0x0) {
      *param_9 = (uint)param_2->filter_type;
    }
    bVar1 = param_2->interlace_type;
    if (param_7 != (int *)0x0) {
      *param_7 = (uint)bVar1;
    }
    png_check_IHDR(param_1,param_2->width,param_2->height,(uint)param_2->bit_depth,
                   (uint)param_2->color_type,(uint)bVar1,(uint)param_2->compression_type,
                   (uint)param_2->filter_type);
    uVar2 = 1;
  }
  return uVar2;
}

// png_get_oFFs @ 140dc9940

uint __cdecl
png_get_oFFs(png_struct_def_conflict *param_1,png_info_def *param_2,int *param_3,int *param_4,
            int *param_5)

{
  uint uVar1;
  
  uVar1 = 0;
  if ((((param_2 != (png_info_def *)0x0 && param_1 != (png_struct_def_conflict *)0x0) &&
       (param_5 != (int *)0x0)) && (param_4 != (int *)0x0)) &&
     ((param_3 != (int *)0x0 && ((param_2->valid & 0x100) != 0)))) {
    *param_3 = param_2->x_offset;
    *param_4 = param_2->y_offset;
    *param_5 = (uint)param_2->offset_unit_type;
    uVar1 = 0x100;
  }
  return uVar1;
}

// png_get_pCAL @ 140dc99a0

uint __cdecl
png_get_pCAL(png_struct_def_conflict *param_1,png_info_def *param_2,char **param_3,int *param_4,
            int *param_5,int *param_6,int *param_7,char **param_8,char ***param_9)

{
  uint uVar1;
  uint uVar2;
  undefined4 in_R11D;
  int iVar3;
  undefined1 auVar4 [16];
  
  uVar1 = 0;
  uVar2 = 0;
  if (param_2 != (png_info_def *)0x0 && param_1 != (png_struct_def_conflict *)0x0) {
    auVar4._0_4_ = -(uint)(param_3 == (char **)0x0);
    auVar4._4_4_ = -(uint)(param_4 == (int *)0x0);
    auVar4._8_4_ = -(uint)(param_5 == (int *)0x0);
    auVar4._12_4_ = -(uint)(param_6 == (int *)0x0);
    iVar3 = movmskps(in_R11D,auVar4);
    uVar2 = 0;
    if ((((iVar3 == 0) && (uVar2 = uVar1, param_7 != (int *)0x0)) && (param_8 != (char **)0x0)) &&
       ((param_9 != (char ***)0x0 && ((param_2->valid & 0x400) != 0)))) {
      *param_3 = param_2->pcal_purpose;
      *param_4 = param_2->pcal_X0;
      *param_5 = param_2->pcal_X1;
      *param_6 = (uint)param_2->pcal_type;
      *param_7 = (uint)param_2->pcal_nparams;
      *param_8 = param_2->pcal_units;
      *param_9 = param_2->pcal_params;
      uVar2 = 0x400;
    }
  }
  return uVar2;
}

// png_get_sCAL_fixed @ 140dc9a80

uint __cdecl
png_get_sCAL_fixed(png_struct_def_conflict *param_1,png_info_def *param_2,int *param_3,int *param_4,
                  int *param_5)

{
  int iVar1;
  uint uVar2;
  double dVar3;
  
  uVar2 = 0;
  if ((param_2 != (png_info_def *)0x0 && param_1 != (png_struct_def_conflict *)0x0) &&
     (uVar2 = 0, (param_2->valid & 0x4000) != 0)) {
    *param_3 = (uint)param_2->scal_unit;
    dVar3 = atof(param_2->scal_s_width);
    iVar1 = png_fixed(param_1,dVar3,"sCAL width");
    *param_4 = iVar1;
    dVar3 = atof(param_2->scal_s_height);
    iVar1 = png_fixed(param_1,dVar3,"sCAL height");
    *param_5 = iVar1;
    uVar2 = 0x4000;
  }
  return uVar2;
}

// png_get_sCAL @ 140dc9b20

uint __cdecl
png_get_sCAL(png_struct_def_conflict *param_1,png_info_def *param_2,int *param_3,double *param_4,
            double *param_5)

{
  uint uVar1;
  double dVar2;
  
  uVar1 = 0;
  if ((param_2 != (png_info_def *)0x0 && param_1 != (png_struct_def_conflict *)0x0) &&
     (uVar1 = 0, (param_2->valid & 0x4000) != 0)) {
    *param_3 = (uint)param_2->scal_unit;
    dVar2 = atof(param_2->scal_s_width);
    *param_4 = dVar2;
    dVar2 = atof(param_2->scal_s_height);
    *param_5 = dVar2;
    uVar1 = 0x4000;
  }
  return uVar1;
}

// png_get_sCAL_s @ 140dc9b90

uint __cdecl
png_get_sCAL_s(png_struct_def_conflict *param_1,png_info_def *param_2,int *param_3,char **param_4,
              char **param_5)

{
  uint uVar1;
  
  uVar1 = 0;
  if ((param_2 != (png_info_def *)0x0 && param_1 != (png_struct_def_conflict *)0x0) &&
     ((param_2->valid & 0x4000) != 0)) {
    *param_3 = (uint)param_2->scal_unit;
    *param_4 = param_2->scal_s_width;
    *param_5 = param_2->scal_s_height;
    uVar1 = 0x4000;
  }
  return uVar1;
}

// png_get_pHYs @ 140dc9be0

uint __cdecl
png_get_pHYs(png_struct_def_conflict *param_1,png_info_def *param_2,uint *param_3,uint *param_4,
            int *param_5)

{
  uint uVar1;
  
  uVar1 = 0;
  if ((param_2 != (png_info_def *)0x0 && param_1 != (png_struct_def_conflict *)0x0) &&
     ((param_2->valid & 0x80) != 0)) {
    if (param_3 == (uint *)0x0) {
      uVar1 = 0;
    }
    else {
      *param_3 = param_2->x_pixels_per_unit;
      uVar1 = 0x80;
    }
    if (param_4 != (uint *)0x0) {
      *param_4 = param_2->y_pixels_per_unit;
      uVar1 = 0x80;
    }
    if (param_5 != (int *)0x0) {
      *param_5 = (uint)param_2->phys_unit_type;
      uVar1 = 0x80;
    }
  }
  return uVar1;
}

// png_get_PLTE @ 140dc9c50

uint __cdecl
png_get_PLTE(png_struct_def_conflict *param_1,png_info_def *param_2,png_color_struct **param_3,
            int *param_4)

{
  uint uVar1;
  
  uVar1 = 0;
  if (((param_2 != (png_info_def *)0x0 && param_1 != (png_struct_def_conflict *)0x0) &&
      (param_3 != (png_color_struct **)0x0)) && ((param_2->valid & 8) != 0)) {
    *param_3 = param_2->palette;
    *param_4 = (uint)param_2->num_palette;
    uVar1 = 8;
  }
  return uVar1;
}

// png_get_sBIT @ 140dc9c90

uint __cdecl
png_get_sBIT(png_struct_def_conflict *param_1,png_info_def *param_2,png_color_8_struct **param_3)

{
  uint uVar1;
  
  uVar1 = 0;
  if (((param_2 != (png_info_def *)0x0 && param_1 != (png_struct_def_conflict *)0x0) &&
      (param_3 != (png_color_8_struct **)0x0)) && ((param_2->valid & 2) != 0)) {
    *param_3 = &param_2->sig_bit;
    uVar1 = 2;
  }
  return uVar1;
}

// png_get_text @ 140dc9cd0

int __cdecl
png_get_text(png_struct_def_conflict *param_1,png_info_def *param_2,png_text_struct **param_3,
            int *param_4)

{
  int iVar1;
  
  if ((param_2 == (png_info_def *)0x0 || param_1 == (png_struct_def_conflict *)0x0) ||
     (iVar1 = param_2->num_text, iVar1 < 1)) {
    iVar1 = 0;
  }
  else if (param_3 != (png_text_struct **)0x0) {
    *param_3 = param_2->text;
  }
  if (param_4 != (int *)0x0) {
    *param_4 = iVar1;
  }
  return iVar1;
}

// png_get_tIME @ 140dc9d10

uint __cdecl
png_get_tIME(png_struct_def_conflict *param_1,png_info_def *param_2,png_time_struct **param_3)

{
  uint uVar1;
  
  uVar1 = 0;
  if (((param_2 != (png_info_def *)0x0 && param_1 != (png_struct_def_conflict *)0x0) &&
      (param_3 != (png_time_struct **)0x0)) && ((param_2->valid & 0x200) != 0)) {
    *param_3 = &param_2->mod_time;
    uVar1 = 0x200;
  }
  return uVar1;
}

// png_get_tRNS @ 140dc9d50

uint __cdecl
png_get_tRNS(png_struct_def_conflict *param_1,png_info_def *param_2,uchar **param_3,int *param_4,
            png_color_16_struct **param_5)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = 0;
  if ((param_2 != (png_info_def *)0x0 && param_1 != (png_struct_def_conflict *)0x0) &&
     ((param_2->valid & 0x10) != 0)) {
    if (param_2->color_type == '\x03') {
      if (param_3 == (uchar **)0x0) {
        uVar2 = 0;
        uVar1 = 0;
      }
      else {
        *param_3 = param_2->trans_alpha;
        uVar2 = 0x10;
        uVar1 = 0x10;
      }
      if (param_5 != (png_color_16_struct **)0x0) {
        *param_5 = &param_2->trans_color;
        uVar1 = uVar2;
      }
    }
    else {
      if (param_5 == (png_color_16_struct **)0x0) {
        uVar2 = 0;
        uVar1 = 0;
      }
      else {
        *param_5 = &param_2->trans_color;
        uVar2 = 0x10;
        uVar1 = 0x10;
      }
      if (param_3 != (uchar **)0x0) {
        *param_3 = (uchar *)0x0;
        uVar1 = uVar2;
      }
    }
    if (param_4 != (int *)0x0) {
      *param_4 = (uint)param_2->num_trans;
      uVar1 = 0x10;
    }
  }
  return uVar1;
}

// png_get_unknown_chunks @ 140dc9df0

int __cdecl
png_get_unknown_chunks
          (png_struct_def_conflict *param_1,png_info_def *param_2,png_unknown_chunk_t **param_3)

{
  int iVar1;
  
  iVar1 = 0;
  if (param_3 != (png_unknown_chunk_t **)0x0 &&
      (param_2 != (png_info_def *)0x0 && param_1 != (png_struct_def_conflict *)0x0)) {
    *param_3 = param_2->unknown_chunks;
    iVar1 = param_2->unknown_chunks_num;
  }
  return iVar1;
}

// png_get_rgb_to_gray_status @ 140dc9e30

uchar __cdecl png_get_rgb_to_gray_status(png_struct_def_conflict *param_1)

{
  if (param_1 != (png_struct_def_conflict *)0x0) {
    return param_1->rgb_to_gray_status;
  }
  return '\0';
}

// png_get_user_chunk_ptr @ 140dc9e50

void * __cdecl png_get_user_chunk_ptr(png_struct_def_conflict *param_1)

{
  if (param_1 != (png_struct_def_conflict *)0x0) {
    return param_1->user_chunk_ptr;
  }
  return (void *)0x0;
}

// png_get_compression_buffer_size @ 140dc9e70

ulong64 __cdecl png_get_compression_buffer_size(png_struct_def_conflict *param_1)

{
  if (param_1 == (png_struct_def_conflict *)0x0) {
    return 0;
  }
  if ((param_1->mode & 0x8000) == 0) {
    return (ulonglong)param_1->zbuffer_size;
  }
  return (ulonglong)param_1->IDAT_read_size;
}

// png_get_user_width_max @ 140dc9ea0

uint __cdecl png_get_user_width_max(png_struct_def_conflict *param_1)

{
  if (param_1 != (png_struct_def_conflict *)0x0) {
    return param_1->user_width_max;
  }
  return 0;
}

// png_get_user_height_max @ 140dc9ec0

uint __cdecl png_get_user_height_max(png_struct_def_conflict *param_1)

{
  if (param_1 != (png_struct_def_conflict *)0x0) {
    return param_1->user_height_max;
  }
  return 0;
}

// png_get_chunk_cache_max @ 140dc9ee0

uint __cdecl png_get_chunk_cache_max(png_struct_def_conflict *param_1)

{
  if (param_1 != (png_struct_def_conflict *)0x0) {
    return param_1->user_chunk_cache_max;
  }
  return 0;
}

// png_get_chunk_malloc_max @ 140dc9f00

ulong64 __cdecl png_get_chunk_malloc_max(png_struct_def_conflict *param_1)

{
  if (param_1 != (png_struct_def_conflict *)0x0) {
    return param_1->user_chunk_malloc_max;
  }
  return 0;
}

// png_get_io_state @ 140dc9f20

uint __cdecl png_get_io_state(png_struct_def_conflict *param_1)

{
  return param_1->io_state;
}

// png_get_io_chunk_type @ 140dc9f30

uint __cdecl png_get_io_chunk_type(png_struct_def_conflict *param_1)

{
  return param_1->chunk_name;
}

// png_get_palette_max @ 140dc9f40

int __cdecl png_get_palette_max(png_struct_def_conflict *param_1,png_info_def *param_2)

{
  int iVar1;
  
  iVar1 = -1;
  if (param_2 != (png_info_def *)0x0 && param_1 != (png_struct_def_conflict *)0x0) {
    iVar1 = param_1->num_palette_max;
  }
  return iVar1;
}

