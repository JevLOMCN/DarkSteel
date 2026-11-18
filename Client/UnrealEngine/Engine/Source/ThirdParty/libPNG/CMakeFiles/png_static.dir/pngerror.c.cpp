// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: libPNG
// Functions: 26

// png_error @ 140db3750

void __cdecl png_error(png_struct_def_conflict *param_1,char *param_2)

{
  if ((param_1 != (png_struct_def_conflict *)0x0) &&
     (param_1->error_fn != (_func___cdecl_void_png_struct_def_ptr_char_ptr_conflict *)0x0)) {
    (*param_1->error_fn)(param_1,param_2);
  }
                    /* WARNING: Subroutine does not return */
  png_default_error(param_1,param_2);
}

// png_default_error @ 140db3790

void __cdecl png_default_error(png_struct_def_conflict *param_1,char *param_2)

{
  _iobuf *p_Var1;
  FILE *_File;
  
  p_Var1 = (_iobuf *)__acrt_iob_func(2);
  fprintf(p_Var1,"libpng error: %s");
  _File = (FILE *)__acrt_iob_func(2);
  fputc(10,_File);
                    /* WARNING: Subroutine does not return */
  png_longjmp(param_1,1);
}

// png_safecat @ 140db37f0

ulong64 __cdecl png_safecat(char *param_1,ulong64 param_2,ulong64 param_3,char *param_4)

{
  char cVar1;
  
  if (param_3 < param_2 && param_1 != (char *)0x0) {
    if (param_4 != (char *)0x0) {
      cVar1 = *param_4;
      if (param_3 < param_2 - 1 && cVar1 != '\0') {
        do {
          param_4 = param_4 + 1;
          param_1[param_3] = cVar1;
          param_3 = param_3 + 1;
          cVar1 = *param_4;
          if (cVar1 == '\0') break;
        } while (param_3 < param_2 - 1);
      }
    }
    param_1[param_3] = '\0';
  }
  return param_3;
}

// png_format_number @ 140db3860

char * __cdecl png_format_number(char *param_1,char *param_2,int param_3,ulong64 param_4)

{
  bool bVar1;
  char cVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  int iVar5;
  int iVar6;
  char *pcVar7;
  bool bVar8;
  
  pcVar7 = param_2 + -1;
  param_2[-1] = '\0';
  if (param_1 < pcVar7) {
    if (param_3 == 5) {
      bVar8 = param_4 % 10 != 0;
      if (bVar8) {
        param_2[-2] = "0123456789ABCDEF"[param_4 % 10];
        pcVar7 = param_2 + -2;
      }
      if (param_1 < pcVar7) {
        iVar6 = 1;
        uVar3 = param_4 / 10;
        do {
          if (uVar3 == 0 && 4 < iVar6) {
            return pcVar7;
          }
          uVar4 = uVar3 / 10;
          if ((bVar8) || (uVar3 % 10 != 0)) {
            pcVar7[-1] = "0123456789ABCDEF"[uVar3 % 10];
            pcVar7 = pcVar7 + -1;
            iVar6 = iVar6 + 1;
            bVar8 = true;
            if ((iVar6 == 5) && (cVar2 = '.', param_1 < pcVar7)) {
LAB_140db39f0:
              pcVar7[-1] = cVar2;
              pcVar7 = pcVar7 + -1;
              iVar6 = 5;
            }
          }
          else {
            uVar4 = uVar3 / 10;
            iVar6 = iVar6 + 1;
            bVar8 = false;
            if (iVar6 == 5 && param_1 < pcVar7) {
              iVar6 = 5;
              bVar8 = false;
              if (uVar3 < 10) {
                cVar2 = '0';
                uVar4 = 0;
                goto LAB_140db39f0;
              }
            }
          }
          uVar3 = uVar4;
        } while (param_1 < pcVar7);
      }
    }
    else {
      iVar5 = 1;
      bVar8 = false;
      iVar6 = 0;
      do {
        if (iVar5 <= iVar6 && param_4 == 0) {
          return pcVar7;
        }
        switch(param_3) {
        case 2:
          iVar5 = 2;
        case 1:
          uVar3 = param_4 / 10;
          pcVar7[-1] = "0123456789ABCDEF"[param_4 % 10];
          pcVar7 = pcVar7 + -1;
          break;
        case 4:
          iVar5 = 2;
        case 3:
          pcVar7[-1] = "0123456789ABCDEF"[(uint)param_4 & 0xf];
          pcVar7 = pcVar7 + -1;
          uVar3 = param_4 >> 4;
          break;
        case 5:
          uVar3 = param_4 / 10;
          iVar5 = 5;
          bVar1 = bVar8 || param_4 % 10 != 0;
          bVar8 = false;
          if (bVar1) {
            pcVar7[-1] = "0123456789ABCDEF"[param_4 % 10];
            pcVar7 = pcVar7 + -1;
            bVar8 = true;
          }
          break;
        default:
          uVar3 = 0;
        }
        iVar6 = iVar6 + 1;
        param_4 = uVar3;
      } while (param_1 < pcVar7);
    }
  }
  return pcVar7;
}

// png_warning @ 140db3ab0

void __cdecl png_warning(png_struct_def_conflict *param_1,char *param_2)

{
  ulonglong uVar1;
  _iobuf *p_Var2;
  FILE *_File;
  
  if (param_1 != (png_struct_def_conflict *)0x0) {
    if (*param_2 == '#') {
      uVar1 = 1;
      if (((((param_2[1] != ' ') && (uVar1 = 2, param_2[2] != ' ')) &&
           (uVar1 = 3, param_2[3] != ' ')) &&
          (((uVar1 = 4, param_2[4] != ' ' && (uVar1 = 5, param_2[5] != ' ')) &&
           ((uVar1 = 6, param_2[6] != ' ' &&
            ((uVar1 = 7, param_2[7] != ' ' && (uVar1 = 8, param_2[8] != ' ')))))))) &&
         ((uVar1 = 9, param_2[9] != ' ' &&
          ((((uVar1 = 10, param_2[10] != ' ' && (uVar1 = 0xb, param_2[0xb] != ' ')) &&
            (uVar1 = 0xc, param_2[0xc] != ' ')) && (uVar1 = 0xd, param_2[0xd] != ' ')))))) {
        uVar1 = (ulonglong)(param_2[0xe] == ' ') ^ 0xf;
      }
    }
    else {
      uVar1 = 0;
    }
    if (param_1->warning_fn != (_func___cdecl_void_png_struct_def_ptr_char_ptr_conflict *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000140db3b8b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*param_1->warning_fn)(param_1,param_2 + uVar1);
      return;
    }
  }
  p_Var2 = (_iobuf *)__acrt_iob_func(2);
  fprintf(p_Var2,"libpng warning: %s");
  _File = (FILE *)__acrt_iob_func(2);
  fputc(10,_File);
  return;
}

// png_warning_parameter @ 140db3bd0

void __cdecl png_warning_parameter(char (*param_1) [32],int param_2,char *param_3)

{
  ulonglong uVar1;
  char (*pacVar2) [32];
  char cVar3;
  ulonglong uVar4;
  
  if ((param_2 - 1U < 8) &&
     (pacVar2 = param_1 + ((ulonglong)(uint)param_2 - 1), pacVar2 != (char (*) [32])0x0)) {
    if ((param_3 == (char *)0x0) || (cVar3 = *param_3, cVar3 == '\0')) {
      uVar1 = 0;
    }
    else {
      uVar4 = 0;
      do {
        uVar1 = uVar4 + 1;
        (*pacVar2)[uVar4] = cVar3;
        if (0x1d < uVar4) break;
        cVar3 = param_3[uVar4 + 1];
        uVar4 = uVar1;
      } while (cVar3 != '\0');
    }
    (*pacVar2)[uVar1] = '\0';
  }
  return;
}

// png_warning_parameter_unsigned @ 140db3c30

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
png_warning_parameter_unsigned(char (*param_1) [32],int param_2,int param_3,ulong64 param_4)

{
  code *pcVar1;
  char *pcVar2;
  ulonglong uVar3;
  char cVar4;
  char (*pacVar5) [32];
  ulonglong uVar6;
  undefined1 auStack_58 [32];
  char local_38 [32];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_58;
  local_38[0] = '\0';
  local_38[1] = '\0';
  local_38[2] = '\0';
  local_38[3] = '\0';
  local_38[4] = '\0';
  local_38[5] = '\0';
  local_38[6] = '\0';
  local_38[7] = '\0';
  local_38[8] = '\0';
  local_38[9] = '\0';
  local_38[10] = '\0';
  local_38[0xb] = '\0';
  local_38[0xc] = '\0';
  local_38[0xd] = '\0';
  local_38[0xe] = '\0';
  local_38[0xf] = '\0';
  local_38[0x10] = '\0';
  local_38[0x11] = '\0';
  local_38[0x12] = '\0';
  local_38[0x13] = '\0';
  local_38[0x14] = '\0';
  local_38[0x15] = '\0';
  local_38[0x16] = '\0';
  local_38[0x17] = '\0';
  pcVar2 = png_format_number(local_38,local_38 + 0x18,param_3,param_4);
  if ((param_2 - 1U < 8) &&
     (pacVar5 = param_1 + ((ulonglong)(uint)param_2 - 1), pacVar5 != (char (*) [32])0x0)) {
    cVar4 = *pcVar2;
    if (cVar4 == '\0') {
      uVar3 = 0;
    }
    else {
      uVar6 = 0;
      do {
        uVar3 = uVar6 + 1;
        (*pacVar5)[uVar6] = cVar4;
        if (0x1d < uVar6) break;
        cVar4 = pcVar2[uVar6 + 1];
        uVar6 = uVar3;
      } while (cVar4 != '\0');
    }
    (*pacVar5)[uVar3] = '\0';
  }
  if ((local_18 ^ (ulonglong)auStack_58) != __security_cookie.value) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  return;
}

// png_warning_parameter_signed @ 140db3ce0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl png_warning_parameter_signed(char (*param_1) [32],int param_2,int param_3,int param_4)

{
  code *pcVar1;
  uint uVar2;
  char *pcVar3;
  ulonglong uVar4;
  char cVar5;
  char (*pacVar6) [32];
  ulonglong uVar7;
  undefined1 auStack_68 [32];
  char local_48 [32];
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_68;
  local_48[0] = '\0';
  local_48[1] = '\0';
  local_48[2] = '\0';
  local_48[3] = '\0';
  local_48[4] = '\0';
  local_48[5] = '\0';
  local_48[6] = '\0';
  local_48[7] = '\0';
  local_48[8] = '\0';
  local_48[9] = '\0';
  local_48[10] = '\0';
  local_48[0xb] = '\0';
  local_48[0xc] = '\0';
  local_48[0xd] = '\0';
  local_48[0xe] = '\0';
  local_48[0xf] = '\0';
  local_48[0x10] = '\0';
  local_48[0x11] = '\0';
  local_48[0x12] = '\0';
  local_48[0x13] = '\0';
  local_48[0x14] = '\0';
  local_48[0x15] = '\0';
  local_48[0x16] = '\0';
  local_48[0x17] = '\0';
  uVar2 = param_4;
  if (-1 < -param_4) {
    uVar2 = -param_4;
  }
  pcVar3 = png_format_number(local_48,local_48 + 0x18,param_3,(ulonglong)uVar2);
  if (local_48 < pcVar3 && param_4 < 0) {
    pcVar3[-1] = '-';
    pcVar3 = pcVar3 + -1;
  }
  if ((param_2 - 1U < 8) &&
     (pacVar6 = param_1 + ((ulonglong)(uint)param_2 - 1), pacVar6 != (char (*) [32])0x0)) {
    cVar5 = *pcVar3;
    if (cVar5 == '\0') {
      uVar4 = 0;
    }
    else {
      uVar7 = 0;
      do {
        uVar4 = uVar7 + 1;
        (*pacVar6)[uVar7] = cVar5;
        if (0x1d < uVar7) break;
        cVar5 = pcVar3[uVar7 + 1];
        uVar7 = uVar4;
      } while (cVar5 != '\0');
    }
    (*pacVar6)[uVar4] = '\0';
  }
  if ((local_28 ^ (ulonglong)auStack_68) != __security_cookie.value) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  return;
}

// png_formatted_warning @ 140db3dc0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
png_formatted_warning(png_struct_def_conflict *param_1,char (*param_2) [32],char *param_3)

{
  ulonglong uVar1;
  longlong lVar2;
  code *pcVar3;
  ulonglong uVar4;
  char *pcVar5;
  ulonglong uVar6;
  char (*pacVar7) [32];
  char cVar8;
  undefined1 local_108 [32];
  char local_e8 [200];
  ulonglong local_20;
  
  local_20 = __security_cookie.value ^ (ulonglong)local_108;
  if (param_2 == (char (*) [32])0x0) {
    uVar4 = 0;
    cVar8 = *param_3;
    while (cVar8 != '\0') {
      local_e8[uVar4] = cVar8;
      if (param_3[uVar4 + 1] == '\0') {
        uVar4 = uVar4 + 1;
        break;
      }
      local_e8[uVar4 + 1] = param_3[uVar4 + 1];
      if (param_3[uVar4 + 2] == '\0') {
        uVar4 = uVar4 + 2;
        break;
      }
      local_e8[uVar4 + 2] = param_3[uVar4 + 2];
      if (uVar4 == 0xbc) {
        uVar4 = 0xbf;
        break;
      }
      if (param_3[uVar4 + 3] == '\0') {
        uVar4 = uVar4 + 3;
        break;
      }
      local_e8[uVar4 + 3] = param_3[uVar4 + 3];
      uVar4 = uVar4 + 4;
      cVar8 = param_3[uVar4];
    }
  }
  else {
    uVar4 = 0;
    do {
      while (cVar8 = *param_3, pcVar5 = param_3, cVar8 != '@') {
        if (cVar8 == '\0') goto LAB_140db3f4b;
LAB_140db3e0c:
        param_3 = pcVar5 + 1;
        local_e8[uVar4] = cVar8;
        uVar4 = uVar4 + 1;
joined_r0x000140db3e20:
        if (0xbe < uVar4) goto LAB_140db3f4b;
      }
      cVar8 = param_3[1];
      if (cVar8 == '\0') {
        cVar8 = '@';
        goto LAB_140db3e0c;
      }
      uVar6 = 0xffffffffffffffff;
      pacVar7 = param_2 + -1;
      do {
        uVar1 = uVar6 + 1;
        pacVar7 = pacVar7 + 1;
        if (uVar6 == 8) break;
        lVar2 = uVar6 + 1;
        uVar6 = uVar1;
      } while ("123456789"[lVar2] != cVar8);
      pcVar5 = param_3 + 1;
      if (7 < uVar1) goto LAB_140db3e0c;
      if (uVar4 < 0xbf) {
        uVar6 = 0;
        do {
          if (((*pacVar7)[uVar6] == '\0') || (0x1f < uVar6)) {
            uVar4 = uVar4 + uVar6;
            param_3 = param_3 + 2;
            goto joined_r0x000140db3e20;
          }
          local_e8[uVar6 + uVar4] = (*pacVar7)[uVar6];
          lVar2 = uVar4 + uVar6;
          uVar6 = uVar6 + 1;
        } while (lVar2 != 0xbe);
        uVar4 = 0xbf;
      }
      param_3 = param_3 + 2;
    } while (uVar4 < 0xbf);
  }
LAB_140db3f4b:
  local_e8[uVar4] = '\0';
  png_warning(param_1,local_e8);
  if ((local_20 ^ (ulonglong)local_108) != __security_cookie.value) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  return;
}

// png_benign_error @ 140db3f90

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl png_benign_error(png_struct_def_conflict *param_1,char *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 auVar5 [16];
  undefined1 auStack_118 [32];
  char local_f8 [224];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_118;
  uVar1 = param_1->mode;
  uVar2 = param_1->flags;
  auVar5._4_4_ = uVar2;
  auVar5._0_4_ = uVar1;
  auVar5._8_8_ = 0;
  bVar4 = SUB164(auVar5 & ___xmm_00000000000000000010000000008000,0) != 0;
  if (SUB164(auVar5 & ___xmm_00000000000000000010000000008000,4) == 0) {
    if ((bVar4) && (param_1->chunk_name != 0)) {
                    /* WARNING: Subroutine does not return */
      png_chunk_error(param_1,param_2);
    }
                    /* WARNING: Subroutine does not return */
    png_error(param_1,param_2);
  }
  if ((bVar4) && (param_1->chunk_name != 0)) {
    png_format_buffer((png_struct_def_conflict *)(ulonglong)param_1->chunk_name,local_f8,param_2);
    png_warning(param_1,local_f8);
    return;
  }
  if ((local_18 ^ (ulonglong)auStack_118) == __security_cookie.value) {
    png_warning(param_1,param_2);
    return;
  }
  pcVar3 = (code *)swi(3);
  (*pcVar3)(local_18 ^ (ulonglong)auStack_118);
  return;
}

// png_chunk_warning @ 140db4070

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl png_chunk_warning(png_struct_def_conflict *param_1,char *param_2)

{
  code *pcVar1;
  _iobuf *p_Var2;
  FILE *_File;
  undefined1 auStack_118 [32];
  char local_f8 [216];
  ulonglong local_20;
  
  local_20 = __security_cookie.value ^ (ulonglong)auStack_118;
  if (param_1 == (png_struct_def_conflict *)0x0) {
    p_Var2 = (_iobuf *)__acrt_iob_func(2);
    fprintf(p_Var2,"libpng warning: %s");
    _File = (FILE *)__acrt_iob_func(2);
    fputc(10,_File);
    return;
  }
  png_format_buffer((png_struct_def_conflict *)(ulonglong)param_1->chunk_name,local_f8,param_2);
  png_warning(param_1,local_f8);
  if ((local_20 ^ (ulonglong)auStack_118) == __security_cookie.value) {
    return;
  }
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

// png_chunk_error @ 140db4140

void __cdecl png_chunk_error(png_struct_def_conflict *param_1,char *param_2)

{
  char local_e8 [216];
  
  if (param_1 == (png_struct_def_conflict *)0x0) {
                    /* WARNING: Subroutine does not return */
    png_error((png_struct_def_conflict *)0x0,param_2);
  }
  png_format_buffer((png_struct_def_conflict *)(ulonglong)param_1->chunk_name,local_e8,param_2);
                    /* WARNING: Subroutine does not return */
  png_error(param_1,local_e8);
}

// png_app_warning @ 140db4190

void __cdecl png_app_warning(png_struct_def_conflict *param_1,char *param_2)

{
  if ((param_1->flags & 0x200000) != 0) {
    png_warning(param_1,param_2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  png_error(param_1,param_2);
}

// png_app_error @ 140db41c0

void __cdecl png_app_error(png_struct_def_conflict *param_1,char *param_2)

{
  if ((param_1->flags & 0x400000) != 0) {
    png_warning(param_1,param_2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  png_error(param_1,param_2);
}

// png_format_buffer @ 140db41f0

void __cdecl png_format_buffer(png_struct_def_conflict *param_1,char *param_2,char *param_3)

{
  longlong lVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  char *pcVar6;
  longlong lVar7;
  ulonglong uVar8;
  
  uVar8 = (ulonglong)param_1 >> 0x18 & 0xff;
  uVar3 = (uint)uVar8;
  if (uVar3 - 0x5b < 6 || uVar3 - 0x7b < 0xffffffc6) {
    param_2[1] = "0123456789ABCDEF"[(ulonglong)param_1 >> 0x1c & 0xf];
    param_2[2] = "0123456789ABCDEF"[uVar3 & 0xf];
    param_2[3] = ']';
    uVar3 = 4;
    uVar8 = 0x5b;
  }
  else {
    uVar3 = 1;
  }
  *param_2 = (char)uVar8;
  uVar8 = (ulonglong)param_1 >> 0x10 & 0xffff;
  uVar2 = (uint)((ulonglong)param_1 >> 0x10) & 0xff;
  if (uVar2 - 0x5b < 6 || uVar2 - 0x7b < 0xffffffc6) {
    param_2[uVar3] = '[';
    param_2[(ulonglong)uVar3 + 1] = "0123456789ABCDEF"[(uint)((ulonglong)param_1 >> 0x14) & 0xf];
    param_2[(ulonglong)uVar3 + 2] = "0123456789ABCDEF"[(uint)uVar8 & 0xf];
    uVar2 = uVar3 + 4;
    param_2[(ulonglong)uVar3 + 3] = ']';
  }
  else {
    uVar2 = uVar3 + 1;
    param_2[uVar3] = (char)uVar8;
  }
  uVar8 = (ulonglong)param_1 >> 8 & 0xffffff;
  uVar3 = (uint)((ulonglong)param_1 >> 8) & 0xff;
  if (uVar3 - 0x5b < 6 || uVar3 - 0x7b < 0xffffffc6) {
    param_2[uVar2] = '[';
    param_2[(ulonglong)uVar2 + 1] = "0123456789ABCDEF"[(uint)((ulonglong)param_1 >> 0xc) & 0xf];
    param_2[(ulonglong)uVar2 + 2] = "0123456789ABCDEF"[(uint)uVar8 & 0xf];
    uVar3 = uVar2 + 4;
    param_2[(ulonglong)uVar2 + 3] = ']';
  }
  else {
    uVar3 = uVar2 + 1;
    param_2[uVar2] = (char)uVar8;
  }
  uVar2 = (uint)param_1 & 0xff;
  if (uVar2 - 0x5b < 6 || uVar2 - 0x7b < 0xffffffc6) {
    param_2[uVar3] = '[';
    param_2[(ulonglong)uVar3 + 1] = "0123456789ABCDEF"[(uint)((ulonglong)param_1 >> 4) & 0xf];
    param_2[(ulonglong)uVar3 + 2] = "0123456789ABCDEF"[(uint)param_1 & 0xf];
    uVar2 = uVar3 + 4;
    param_2[(ulonglong)uVar3 + 3] = ']';
  }
  else {
    uVar2 = uVar3 + 1;
    param_2[uVar3] = (char)param_1;
  }
  pcVar6 = param_2 + uVar2;
  if (param_3 != (char *)0x0) {
    pcVar6[0] = ':';
    pcVar6[1] = ' ';
    iVar4 = uVar2 + 0xc5;
    lVar5 = (ulonglong)uVar2 + 4;
    lVar7 = 0;
    do {
      if (param_3[lVar7] == '\0') {
        lVar5 = lVar5 + -2;
LAB_140db43ea:
        iVar4 = (int)lVar5;
        break;
      }
      param_2[lVar5 + -2] = param_3[lVar7];
      if (param_3[lVar7 + 1] == '\0') {
        lVar5 = lVar5 + -1;
        goto LAB_140db43ea;
      }
      param_2[lVar5 + -1] = param_3[lVar7 + 1];
      lVar1 = lVar7 + 2;
      if (param_3[lVar1] == '\0') goto LAB_140db43ea;
      lVar7 = lVar7 + 3;
      param_2[lVar5] = param_3[lVar1];
      lVar5 = lVar5 + 3;
    } while (lVar7 != 0xc3);
    pcVar6 = param_2 + iVar4;
  }
  *pcVar6 = '\0';
  return;
}

// png_chunk_benign_error @ 140db4410

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl png_chunk_benign_error(png_struct_def_conflict *param_1,char *param_2)

{
  code *pcVar1;
  undefined1 auStack_118 [32];
  char local_f8 [224];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_118;
  if ((param_1->flags & 0x100000) == 0) {
                    /* WARNING: Subroutine does not return */
    png_chunk_error(param_1,param_2);
  }
  png_format_buffer((png_struct_def_conflict *)(ulonglong)param_1->chunk_name,local_f8,param_2);
  png_warning(param_1,local_f8);
  if ((local_18 ^ (ulonglong)auStack_118) == __security_cookie.value) {
    return;
  }
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

// png_chunk_report @ 140db4490

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl png_chunk_report(png_struct_def_conflict *param_1,char *param_2,int param_3)

{
  code *pcVar1;
  uint uVar2;
  undefined1 auStack_118 [32];
  char local_f8 [216];
  ulonglong local_20;
  
  local_20 = __security_cookie.value ^ (ulonglong)auStack_118;
  if ((param_1->mode & 0x8000) != 0) {
    if ((1 < param_3) && ((param_1->flags & 0x100000) == 0)) {
                    /* WARNING: Subroutine does not return */
      png_chunk_error(param_1,param_2);
    }
    png_format_buffer((png_struct_def_conflict *)(ulonglong)param_1->chunk_name,local_f8,param_2);
    png_warning(param_1,local_f8);
    if ((local_20 ^ (ulonglong)auStack_118) != __security_cookie.value) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    return;
  }
  if (param_3 < 1) {
    uVar2 = param_1->flags & 0x200000;
  }
  else {
    uVar2 = param_1->flags & 0x400000;
  }
  if (uVar2 != 0) {
    png_warning(param_1,param_2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  png_error(param_1,param_2);
}

// png_fixed_error @ 140db4580

void __cdecl png_fixed_error(png_struct_def_conflict *param_1,char *param_2)

{
  ulonglong uVar1;
  char local_e8 [8];
  char acStack_e0 [8];
  undefined8 local_d8;
  char acStack_d0 [208];
  
  local_e8 = (char  [8])s_fixed_point_overflow_in_._0_8_;
  acStack_e0 = (char  [8])s_fixed_point_overflow_in_._8_8_;
  local_d8 = 0x206e6920776f6c66;
  uVar1 = 0x18;
  if (param_2 != (char *)0x0) {
    uVar1 = 0;
    do {
      if (param_2[uVar1] == '\0') goto LAB_140db45f8;
      acStack_d0[uVar1] = param_2[uVar1];
      if (param_2[uVar1 + 1] == '\0') {
        uVar1 = (ulonglong)((int)uVar1 + 1);
        goto LAB_140db45f8;
      }
      acStack_d0[uVar1 + 1] = param_2[uVar1 + 1];
      if (param_2[uVar1 + 2] == '\0') {
        uVar1 = (ulonglong)((int)uVar1 + 2);
        goto LAB_140db45f8;
      }
      acStack_d0[uVar1 + 2] = param_2[uVar1 + 2];
      uVar1 = uVar1 + 3;
    } while ((int)uVar1 != 0xc3);
    uVar1 = 0xc3;
LAB_140db45f8:
    uVar1 = (ulonglong)((int)uVar1 + 0x18);
  }
  local_e8[uVar1] = '\0';
                    /* WARNING: Subroutine does not return */
  png_error(param_1,local_e8);
}

// png_set_longjmp_fn @ 140db4620

_SETJMP_FLOAT128 (*) [16] __cdecl
png_set_longjmp_fn(png_struct_def_conflict *param_1,
                  _func___cdecl_void__SETJMP_FLOAT128_ptr_int *param_2,ulong64 param_3)

{
  png_struct_def_conflict *ppVar1;
  ulong64 uVar2;
  
  if (param_1 == (png_struct_def_conflict *)0x0) {
LAB_140db4660:
    ppVar1 = (png_struct_def_conflict *)0x0;
  }
  else {
    ppVar1 = (png_struct_def_conflict *)param_1->jmp_buf_ptr;
    if (ppVar1 == (png_struct_def_conflict *)0x0) {
      param_1->jmp_buf_size = 0;
      if (param_3 < 0x101) {
        param_1->jmp_buf_ptr = param_1->jmp_buf_local;
        ppVar1 = param_1;
      }
      else {
        ppVar1 = png_malloc_warn(param_1,param_3);
        param_1->jmp_buf_ptr = ppVar1->jmp_buf_local;
        if (ppVar1 == (png_struct_def_conflict *)0x0) goto LAB_140db4660;
        param_1->jmp_buf_size = param_3;
      }
    }
    else {
      uVar2 = param_1->jmp_buf_size;
      if ((uVar2 == 0) && (uVar2 = 0x100, ppVar1 != param_1)) {
                    /* WARNING: Subroutine does not return */
        png_error(param_1,"Libpng jmp_buf still allocated");
      }
      if (uVar2 != param_3) {
        png_warning(param_1,"Application jmp_buf size changed");
        goto LAB_140db4660;
      }
    }
    param_1->longjmp_fn = param_2;
  }
  return ppVar1->jmp_buf_local;
}

// png_free_jmpbuf @ 140db46d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl png_free_jmpbuf(png_struct_def_conflict *param_1)

{
  png_struct_def_conflict *ppVar1;
  code *pcVar2;
  int iVar3;
  undefined1 local_148 [32];
  _SETJMP_FLOAT128 local_128 [6];
  undefined1 local_c8 [160];
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)local_c8;
  if (param_1 != (png_struct_def_conflict *)0x0) {
    ppVar1 = (png_struct_def_conflict *)param_1->jmp_buf_ptr;
    if (((ppVar1 != (png_struct_def_conflict *)0x0) && (ppVar1 != param_1)) &&
       (param_1->jmp_buf_size != 0)) {
      iVar3 = _setjmp(local_128,local_148);
      if (iVar3 == 0) {
        param_1->jmp_buf_ptr = (_SETJMP_FLOAT128 (*) [16])local_128;
        param_1->jmp_buf_size = 0;
        param_1->longjmp_fn = longjmp;
        png_free(param_1,ppVar1);
      }
    }
    param_1->longjmp_fn = (_func___cdecl_void__SETJMP_FLOAT128_ptr_int *)0x0;
    param_1->jmp_buf_ptr = (_SETJMP_FLOAT128 (*) [16])0x0;
    param_1->jmp_buf_size = 0;
  }
  if ((local_28 ^ (ulonglong)local_c8) != __security_cookie.value) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  return;
}

// png_longjmp @ 140db47a0

void __cdecl png_longjmp(png_struct_def_conflict *param_1,int param_2)

{
  if (((param_1 != (png_struct_def_conflict *)0x0) &&
      (param_1->longjmp_fn != (_func___cdecl_void__SETJMP_FLOAT128_ptr_int *)0x0)) &&
     (*param_1->jmp_buf_ptr != (_SETJMP_FLOAT128 *)0x0)) {
    (*param_1->longjmp_fn)(*param_1->jmp_buf_ptr,param_2);
  }
                    /* WARNING: Subroutine does not return */
  abort();
}

// png_set_error_fn @ 140db47d0

void __cdecl
png_set_error_fn(png_struct_def_conflict *param_1,void *param_2,
                _func___cdecl_void_png_struct_def_ptr_char_ptr_conflict *param_3,
                _func___cdecl_void_png_struct_def_ptr_char_ptr_conflict *param_4)

{
  if (param_1 != (png_struct_def_conflict *)0x0) {
    param_1->error_ptr = param_2;
    param_1->error_fn = param_3;
    param_1->warning_fn = param_4;
  }
  return;
}

// png_get_error_ptr @ 140db4800

void * __cdecl png_get_error_ptr(png_struct_def_conflict *param_1)

{
  if (param_1 != (png_struct_def_conflict *)0x0) {
    return param_1->error_ptr;
  }
  return (void *)0x0;
}

// png_safe_error @ 140db4820

void __cdecl png_safe_error(png_struct_def_conflict *param_1,char *param_2)

{
  longlong *plVar1;
  _JBTYPE *_Buf;
  longlong lVar2;
  ulonglong uVar3;
  longlong lVar4;
  char cVar5;
  ulonglong uVar6;
  
  plVar1 = param_1->error_ptr;
  if (plVar1 != (longlong *)0x0) {
    if ((param_2 == (char *)0x0) || (cVar5 = *param_2, cVar5 == '\0')) {
      uVar3 = 0;
    }
    else {
      uVar6 = 0;
      do {
        uVar3 = uVar6 + 1;
        *(char *)((longlong)plVar1 + uVar6 + 0x24) = cVar5;
        if (0x3d < uVar6) break;
        cVar5 = param_2[uVar6 + 1];
        uVar6 = uVar3;
      } while (cVar5 != '\0');
    }
    *(undefined1 *)((longlong)plVar1 + uVar3 + 0x24) = 0;
    *(byte *)(plVar1 + 4) = *(byte *)(plVar1 + 4) | 2;
    if ((*plVar1 != 0) && (_Buf = *(_JBTYPE **)(*plVar1 + 0x10), _Buf != (_JBTYPE *)0x0)) {
                    /* WARNING: Subroutine does not return */
      longjmp(_Buf,1);
    }
    *(undefined8 *)((longlong)plVar1 + 0x24) = 0x676e6f6c20646162;
    *(undefined4 *)((longlong)plVar1 + 0x2c) = 0x3a706d6a;
    *(undefined2 *)(plVar1 + 6) = 0x20;
    lVar4 = 0xd;
    if ((param_2 != (char *)0x0) && (cVar5 = *param_2, cVar5 != '\0')) {
      lVar2 = 0;
      do {
        lVar4 = lVar2;
        *(char *)((longlong)plVar1 + lVar4 + 0x31) = cVar5;
        if (0x3d < lVar4 + 0xdU) break;
        cVar5 = param_2[lVar4 + 1];
        lVar2 = lVar4 + 1;
      } while (cVar5 != '\0');
      lVar4 = lVar4 + 0xe;
    }
    *(undefined1 *)((longlong)plVar1 + lVar4 + 0x24) = 0;
  }
                    /* WARNING: Subroutine does not return */
  abort();
}

// png_safe_warning @ 140db4920

void __cdecl png_safe_warning(png_struct_def_conflict *param_1,char *param_2)

{
  void *pvVar1;
  ulonglong uVar2;
  char cVar3;
  ulonglong uVar4;
  
  pvVar1 = param_1->error_ptr;
  if (*(int *)((longlong)pvVar1 + 0x20) != 0) {
    return;
  }
  if ((param_2 == (char *)0x0) || (cVar3 = *param_2, cVar3 == '\0')) {
    *(undefined1 *)((longlong)pvVar1 + 0x24) = 0;
    *(byte *)((longlong)pvVar1 + 0x20) = *(byte *)((longlong)pvVar1 + 0x20) | 1;
    return;
  }
  uVar2 = 0;
  do {
    uVar4 = uVar2;
    *(char *)((longlong)pvVar1 + uVar4 + 0x24) = cVar3;
    if (0x3d < uVar4) break;
    cVar3 = param_2[uVar4 + 1];
    uVar2 = uVar4 + 1;
  } while (cVar3 != '\0');
  *(undefined1 *)((longlong)pvVar1 + uVar4 + 0x25) = 0;
  *(byte *)((longlong)pvVar1 + 0x20) = *(byte *)((longlong)pvVar1 + 0x20) | 1;
  return;
}

// png_safe_execute @ 140db4980

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

int __cdecl png_safe_execute(png_image *param_1,_func___cdecl_int_void_ptr *param_2,void *param_3)

{
  void *pvVar1;
  code *pcVar2;
  int iVar3;
  undefined1 local_158 [32];
  undefined1 local_138 [96];
  undefined1 local_d8 [160];
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)local_d8;
  pvVar1 = param_1->opaque->error_buf;
  iVar3 = _setjmp(local_138,local_158);
  if (iVar3 == 0) {
    param_1->opaque->error_buf = local_138;
    iVar3 = (*param_2)(param_3);
    param_1->opaque->error_buf = pvVar1;
    if ((local_38 ^ (ulonglong)local_d8) != __security_cookie.value) goto LAB_140db4a23;
  }
  else {
    param_1->opaque->error_buf = pvVar1;
    png_image_free(param_1);
    iVar3 = 0;
    if ((local_38 ^ (ulonglong)local_d8) != __security_cookie.value) {
LAB_140db4a23:
      pcVar2 = (code *)swi(3);
      iVar3 = (*pcVar2)();
      return iVar3;
    }
  }
  return iVar3;
}

