// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OpenSSL
// Functions: 12

// FUN_14f7c2000 @ 14f7c2000

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_14f7c2000(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  char *pcVar5;
  longlong lVar6;
  undefined8 uVar7;
  
  iVar3 = UI_get_string_type(param_2);
  if (iVar3 == 1) {
    pcVar5 = (char *)UI_get0_output_string(param_2);
    fputs(pcVar5,DAT_1553e3180);
    fflush(DAT_1553e3180);
    uVar4 = UI_get_input_flags(param_2);
    uVar7 = 1;
  }
  else {
    if (iVar3 == 2) {
      UI_get0_output_string(param_2);
      fprintf((_iobuf *)DAT_1553e3180,"Verifying - %s");
      fflush(DAT_1553e3180);
      uVar4 = UI_get_input_flags(param_2);
      uVar7 = FUN_14f7c2540(param_1,param_2,uVar4 & 1,1);
      if ((int)uVar7 < 1) {
        return uVar7;
      }
      lVar6 = UI_get0_test_string(param_2);
      pcVar5 = (char *)UI_get0_result_string(param_2);
      lVar6 = lVar6 - (longlong)pcVar5;
      do {
        cVar1 = *pcVar5;
        cVar2 = pcVar5[lVar6];
        if (cVar1 != cVar2) break;
        pcVar5 = pcVar5 + 1;
      } while (cVar2 != '\0');
      if (cVar1 == cVar2) {
        return 1;
      }
      fprintf((_iobuf *)DAT_1553e3180,"Verify failure\n");
      fflush(DAT_1553e3180);
      return 0;
    }
    if (iVar3 != 3) {
      return 1;
    }
    pcVar5 = (char *)UI_get0_output_string(param_2);
    fputs(pcVar5,DAT_1553e3180);
    pcVar5 = (char *)UI_get0_action_string(param_2);
    fputs(pcVar5,DAT_1553e3180);
    fflush(DAT_1553e3180);
    uVar4 = UI_get_input_flags(param_2);
    uVar7 = 0;
  }
  uVar7 = FUN_14f7c2540(param_1,param_2,uVar4 & 1,uVar7);
  return uVar7;
}

// FUN_14f7c21a0 @ 14f7c21a0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_14f7c21a0(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  char *_Str;
  
  iVar1 = UI_get_string_type(param_2);
  if (iVar1 - 4U < 2) {
    _Str = (char *)UI_get0_output_string(param_2);
    fputs(_Str,DAT_1553e3180);
    fflush(DAT_1553e3180);
  }
  return 1;
}

// FUN_14f7c2200 @ 14f7c2200

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_14f7c2200(longlong param_1)

{
  BOOL BVar1;
  HANDLE hConsoleHandle;
  
  CRYPTO_THREAD_write_lock(*(undefined8 *)(param_1 + 0x28));
  DAT_1553e3188 = 1;
  DAT_1553e3180 = fopen("conout$","w");
  if (DAT_1553e3180 == (FILE *)0x0) {
    DAT_1553e3180 = (FILE *)__acrt_iob_func(2);
  }
  hConsoleHandle = GetStdHandle(0xfffffff6);
  BVar1 = GetConsoleMode(hConsoleHandle,&DAT_1553e3170);
  if ((BVar1 == 0) &&
     (DAT_1553e3188 = BVar1, DAT_1553e3178 = fopen("conin$","r"), DAT_1553e3178 != (FILE *)0x0)) {
    return 1;
  }
  DAT_1553e3178 = (FILE *)__acrt_iob_func(0);
  return 1;
}

// FUN_14f7c22c0 @ 14f7c22c0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_14f7c22c0(longlong param_1)

{
  FILE *pFVar1;
  
  pFVar1 = (FILE *)__acrt_iob_func(0);
  if (DAT_1553e3178 != pFVar1) {
    fclose(DAT_1553e3178);
  }
  pFVar1 = (FILE *)__acrt_iob_func(2);
  if (DAT_1553e3180 != pFVar1) {
    fclose(DAT_1553e3180);
  }
  CRYPTO_THREAD_unlock(*(undefined8 *)(param_1 + 0x28));
  return 1;
}

// UI_OpenSSL @ 14f7c2330

undefined ** UI_OpenSSL(void)

{
  return &PTR_s_OpenSSL_default_user_interface_154df9e60;
}

// UI_get_default_method @ 14f7c2340

undefined * UI_get_default_method(void)

{
  return PTR_PTR_154df9eb0;
}

// FUN_14f7c2360 @ 14f7c2360

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_14f7c2360(void)

{
  HANDLE hConsoleHandle;
  
  if (DAT_1553e3188 != 0) {
    DAT_1553e3174 = DAT_1553e3170;
    hConsoleHandle = GetStdHandle(0xfffffff6);
    SetConsoleMode(hConsoleHandle,DAT_1553e3174);
  }
  return 1;
}

// FUN_14f7c23b0 @ 14f7c23b0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_14f7c23b0(void)

{
  HANDLE hConsoleHandle;
  
  if (DAT_1553e3188 != 0) {
    DAT_1553e3174 = DAT_1553e3170 & 0xfffffffb;
    hConsoleHandle = GetStdHandle(0xfffffff6);
    SetConsoleMode(hConsoleHandle,DAT_1553e3174);
  }
  return 1;
}

// FUN_14f7c2400 @ 14f7c2400

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f7c2400(void)

{
  signal(0x16);
  signal(8);
  signal(4);
  signal(2);
  signal(0xb);
                    /* WARNING: Could not recover jumptable at 0x00014f7c2475. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  signal(0xf);
  return;
}

// FUN_14f7c2490 @ 14f7c2490

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f7c2490(void)

{
  undefined8 extraout_RAX;
  undefined8 extraout_RAX_00;
  undefined8 extraout_RAX_01;
  undefined8 extraout_RAX_02;
  undefined8 extraout_RAX_03;
  undefined8 extraout_RAX_04;
  
  signal(0x16);
  DAT_1553e3120 = extraout_RAX;
  signal(8);
  DAT_1553e30b0 = extraout_RAX_00;
  signal(4);
  DAT_1553e3090 = extraout_RAX_01;
  signal(2);
  DAT_1553e3080 = extraout_RAX_02;
  signal(0xb);
  DAT_1553e30c8 = extraout_RAX_03;
  signal(0xf);
  DAT_1553e30e8 = extraout_RAX_04;
  return;
}

// FUN_14f7c2540 @ 14f7c2540

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

char * FUN_14f7c2540(undefined8 param_1,undefined8 param_2,int param_3,int param_4)

{
  DWORD DVar1;
  BOOL BVar2;
  int iVar3;
  HANDLE pvVar4;
  char *pcVar5;
  char *pcVar6;
  char *pcVar7;
  char *pcVar8;
  undefined1 auStackY_698 [32];
  uint local_658 [4];
  CHAR local_648 [512];
  WCHAR local_448 [512];
  ulonglong local_48;
  undefined8 uStack_40;
  
  uStack_40 = 0x14f7c255a;
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_698;
  pcVar6 = (char *)0x0;
  pcVar7 = (char *)0x0;
  DAT_1553e318c = 0;
  DAT_1553e3190 = 0;
  FUN_14f7c2490();
  DAT_1553e3190 = 1;
  if ((param_3 == 0) && (DAT_1553e3188 != 0)) {
    DAT_1553e3174 = DAT_1553e3170 & 0xfffffffb;
    pvVar4 = GetStdHandle(0xfffffff6);
    SetConsoleMode(pvVar4,DAT_1553e3174);
  }
  DAT_1553e3190 = 2;
  local_648[0] = '\0';
  pcVar8 = pcVar6;
  if (DAT_1553e3188 == 0) {
    pcVar5 = fgets(local_648,0x1ff,DAT_1553e3178);
LAB_14f7c276c:
    if (pcVar5 == (char *)0x0) goto LAB_14f7c27d8;
  }
  else {
    DVar1 = GetEnvironmentVariableW(L"OPENSSL_WIN32_UTF8",(LPWSTR)0x0,0);
    if (DVar1 != 0) {
      pvVar4 = GetStdHandle(0xfffffff6);
      BVar2 = ReadConsoleW(pvVar4,local_448,0x1ff,local_658,(PCONSOLE_READCONSOLE_CONTROL)0x0);
      if (BVar2 == 0) goto LAB_14f7c27d8;
      if (((1 < local_658[0]) && (local_448[local_658[0] - 2] == L'\r')) &&
         (local_448[local_658[0] - 1] == L'\n')) {
        local_448[local_658[0] - 2] = L'\n';
        local_658[0] = local_658[0] - 1;
      }
      if (0x3ff < (ulonglong)local_658[0] * 2) {
                    /* WARNING: Subroutine does not return */
        __report_rangecheckfailure();
      }
      local_448[local_658[0]] = L'\0';
      iVar3 = WideCharToMultiByte(0xfde9,0,local_448,-1,local_648,0x200,(LPCSTR)0x0,(LPBOOL)0x0);
      pcVar5 = local_648;
      if (iVar3 < 1) {
        pcVar5 = pcVar6;
      }
      OPENSSL_cleanse(local_448,0x400);
      goto LAB_14f7c276c;
    }
    pvVar4 = GetStdHandle(0xfffffff6);
    BVar2 = ReadConsoleA(pvVar4,local_648,0x1ff,local_658,(PCONSOLE_READCONSOLE_CONTROL)0x0);
    pcVar8 = pcVar7;
    if (BVar2 == 0) goto LAB_14f7c27d8;
    if (((1 < local_658[0]) && (local_648[local_658[0] - 2] == '\r')) &&
       (local_648[local_658[0] - 1] == '\n')) {
      local_648[local_658[0] - 2] = '\n';
      local_658[0] = local_658[0] - 1;
    }
    if (0x1ff < (ulonglong)local_658[0]) {
                    /* WARNING: Subroutine does not return */
      __report_rangecheckfailure();
    }
    local_648[local_658[0]] = '\0';
  }
  iVar3 = feof(DAT_1553e3178);
  pcVar8 = pcVar6;
  if ((iVar3 == 0) && (iVar3 = ferror(DAT_1553e3178), pcVar8 = pcVar7, iVar3 == 0)) {
    pcVar6 = strchr(local_648,10);
    if (pcVar6 == (char *)0x0) {
      iVar3 = FUN_14f7c28a0(DAT_1553e3178);
      if (iVar3 == 0) goto LAB_14f7c27d8;
    }
    else if (param_4 != 0) {
      *pcVar6 = '\0';
    }
    iVar3 = UI_set_result(param_1,param_2,local_648);
    pcVar8 = (char *)0x0;
    if (-1 < iVar3) {
      pcVar8 = &DAT_00000001;
    }
  }
LAB_14f7c27d8:
  if (DAT_1553e318c == 2) {
    pcVar8 = &DAT_ffffffff;
  }
  if (param_3 == 0) {
    fprintf(DAT_1553e3180,"\n");
  }
  if (((1 < DAT_1553e3190) && (param_3 == 0)) && (DAT_1553e3188 != 0)) {
    DAT_1553e3174 = DAT_1553e3170;
    pvVar4 = GetStdHandle(0xfffffff6);
    SetConsoleMode(pvVar4,DAT_1553e3174);
  }
  if (0 < DAT_1553e3190) {
    FUN_14f7c2400();
  }
  OPENSSL_cleanse(local_648,0x200);
  return pcVar8;
}

// FUN_14f7c28a0 @ 14f7c28a0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_14f7c28a0(FILE *param_1)

{
  char *pcVar1;
  undefined1 auStack_38 [32];
  char local_18 [8];
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStack_38;
  do {
    pcVar1 = fgets(local_18,4,param_1);
    if (pcVar1 == (char *)0x0) {
      return 0;
    }
    pcVar1 = strchr(local_18,10);
  } while (pcVar1 == (char *)0x0);
  return 1;
}

