// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OpenSSL
// Functions: 9

// FUN_14f6e16c0 @ 14f6e16c0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

int FUN_14f6e16c0(longlong param_1,void *param_2,int param_3)

{
  int iVar1;
  size_t sVar2;
  
  if ((*(int *)(param_1 + 0x20) != 0) && (param_2 != (void *)0x0)) {
    sVar2 = fwrite(param_2,(longlong)param_3,1,*(FILE **)(param_1 + 0x38));
    iVar1 = 0;
    if ((int)sVar2 != 0) {
      iVar1 = param_3;
    }
    return iVar1;
  }
  return 0;
}

// FUN_14f6e1710 @ 14f6e1710

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

ulonglong FUN_14f6e1710(longlong param_1,void *param_2,int param_3)

{
  int iVar1;
  DWORD DVar2;
  size_t sVar3;
  undefined8 uVar4;
  
  uVar4 = 0x14f6e171c;
  if ((*(int *)(param_1 + 0x20) != 0) && (param_2 != (void *)0x0)) {
    sVar3 = fread(param_2,1,(longlong)param_3,*(FILE **)(param_1 + 0x38));
    iVar1 = ferror(*(FILE **)(param_1 + 0x38));
    if (iVar1 != 0) {
      DVar2 = GetLastError();
      ERR_put_error(2,0xb,DVar2,"crypto\\bio\\bss_file.c",0x95,uVar4);
      ERR_put_error(0x20,0x82,2,"crypto\\bio\\bss_file.c",0x96);
      return 0xffffffff;
    }
    return sVar3 & 0xffffffff;
  }
  return 0;
}

// FUN_14f6e17e0 @ 14f6e17e0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

uint FUN_14f6e17e0(longlong param_1,char *param_2)

{
  char cVar1;
  uint uVar2;
  char *pcVar3;
  size_t sVar4;
  uint uVar5;
  
  cVar1 = *param_2;
  pcVar3 = param_2;
  for (uVar5 = 0; (cVar1 != '\0' && (uVar5 < 0x80000000)); uVar5 = uVar5 + 1) {
    pcVar3 = pcVar3 + 1;
    cVar1 = *pcVar3;
  }
  if (*(int *)(param_1 + 0x20) != 0) {
    sVar4 = fwrite(param_2,(ulonglong)(uVar5 & 0x7fffffff),1,*(FILE **)(param_1 + 0x38));
    uVar2 = 0;
    if ((int)sVar4 != 0) {
      uVar2 = uVar5 & 0x7fffffff;
    }
    return uVar2;
  }
  return 0;
}

// FUN_14f6e1850 @ 14f6e1850

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

uint FUN_14f6e1850(longlong param_1,char *param_2,int param_3)

{
  char *pcVar1;
  uint uVar2;
  uint uVar3;
  
  uVar2 = 0;
  *param_2 = '\0';
  pcVar1 = fgets(param_2,param_3,*(FILE **)(param_1 + 0x38));
  uVar3 = uVar2;
  if ((pcVar1 != (char *)0x0) && (uVar3 = 0, *param_2 != '\0')) {
    do {
      if (0x7fffffff < uVar2) break;
      param_2 = param_2 + 1;
      uVar2 = uVar2 + 1;
    } while (*param_2 != '\0');
    uVar3 = uVar2 & 0x7fffffff;
  }
  return uVar3;
}

// FUN_14f6e18b0 @ 14f6e18b0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

int FUN_14f6e18b0(longlong param_1,undefined4 param_2,uint param_3,FILE *param_4)

{
  FILE *_File;
  int iVar1;
  DWORD DVar2;
  longlong lVar3;
  int iVar4;
  undefined8 uVar5;
  undefined1 local_res10 [8];
  undefined8 in_stack_ffffffffffffffe8;
  undefined4 uVar7;
  undefined8 uVar6;
  char *pcVar8;
  
  uVar7 = (undefined4)((ulonglong)in_stack_ffffffffffffffe8 >> 0x20);
  pcVar8 = (char *)0x14f6e18cb;
  iVar4 = 1;
  _File = *(FILE **)(param_1 + 0x38);
  iVar1 = 1;
  switch(param_2) {
  case 1:
  case 0x80:
    iVar1 = fseek(_File,param_3,0);
    break;
  case 2:
    iVar1 = feof(_File);
    break;
  case 3:
  case 0x85:
    iVar1 = ftell(_File);
    break;
  default:
    goto switchD_14f6e190a_caseD_4;
  case 8:
    iVar1 = *(int *)(param_1 + 0x24);
    break;
  case 9:
    *(uint *)(param_1 + 0x24) = param_3;
    iVar1 = iVar4;
    break;
  case 0xb:
    iVar1 = fflush(_File);
    if (iVar1 != -1) {
      return 1;
    }
    DVar2 = GetLastError();
    ERR_put_error(2,0x12,DVar2,"crypto\\bio\\bss_file.c",CONCAT44(uVar7,0x13c),pcVar8);
    ERR_add_error_data(1,"fflush()");
    uVar6 = 0x13e;
LAB_14f6e1b11:
    uVar5 = 2;
    goto LAB_14f6e1b17;
  case 0xc:
    break;
  case 0x6a:
    FUN_14f6e1c20(param_1);
    *(FILE **)(param_1 + 0x38) = param_4;
    *(undefined4 *)(param_1 + 0x20) = 1;
    *(uint *)(param_1 + 0x24) = param_3 & 1;
    iVar1 = _fileno(param_4);
    if ((param_3 & 0x10) == 0) {
      _setmode(iVar1,0x8000);
      iVar1 = iVar4;
    }
    else {
      _setmode(iVar1,0x4000);
      iVar1 = iVar4;
    }
    break;
  case 0x6b:
    iVar1 = iVar4;
    if (param_4 != (FILE *)0x0) {
      param_4->_ptr = (char *)_File;
    }
    break;
  case 0x6c:
    FUN_14f6e1c20(param_1);
    *(uint *)(param_1 + 0x24) = param_3 & 1;
    if ((param_3 & 8) != 0) {
      if ((param_3 & 2) == 0) {
        pcVar8 = "a";
      }
      else {
        pcVar8 = "a+";
      }
LAB_14f6e19f4:
      OPENSSL_strlcpy(local_res10,pcVar8,4);
      pcVar8 = "b";
      if ((param_3 & 0x10) != 0) {
        pcVar8 = "t";
      }
      OPENSSL_strlcat(local_res10,pcVar8,4);
      lVar3 = openssl_fopen(param_4,local_res10);
      if (lVar3 != 0) {
        *(longlong *)(param_1 + 0x38) = lVar3;
        *(undefined4 *)(param_1 + 0x20) = 1;
        BIO_clear_flags(param_1,0);
        return 1;
      }
      DVar2 = GetLastError();
      ERR_put_error(2,1,DVar2,"crypto\\bio\\bss_file.c",CONCAT44(uVar7,0x120));
      pcVar8 = "\')";
      ERR_add_error_data(5,"fopen(\'",param_4,"\',\'",local_res10,"\')");
      uVar6 = 0x122;
      goto LAB_14f6e1b11;
    }
    if (((byte)param_3 & 6) == 6) {
      pcVar8 = "r+";
      goto LAB_14f6e19f4;
    }
    if ((param_3 & 4) != 0) {
      pcVar8 = "w";
      goto LAB_14f6e19f4;
    }
    if ((param_3 & 2) != 0) {
      pcVar8 = "r";
      goto LAB_14f6e19f4;
    }
    uVar6 = CONCAT44(uVar7,0x111);
    uVar5 = 0x65;
LAB_14f6e1b17:
    ERR_put_error(0x20,0x74,uVar5,"crypto\\bio\\bss_file.c",uVar6,pcVar8);
switchD_14f6e190a_caseD_4:
    iVar1 = 0;
  }
  return iVar1;
}

// FUN_14f6e1c20 @ 14f6e1c20

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_14f6e1c20(longlong param_1)

{
  if (param_1 == 0) {
    return 0;
  }
  if (*(int *)(param_1 + 0x24) != 0) {
    if ((*(int *)(param_1 + 0x20) != 0) && (*(FILE **)(param_1 + 0x38) != (FILE *)0x0)) {
      fclose(*(FILE **)(param_1 + 0x38));
      *(undefined8 *)(param_1 + 0x38) = 0;
      *(undefined4 *)(param_1 + 0x28) = 0;
    }
    *(undefined4 *)(param_1 + 0x20) = 0;
  }
  return 1;
}

// BIO_new_file @ 14f6e1c90

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong BIO_new_file(undefined8 param_1,char *param_2)

{
  DWORD DVar1;
  FILE *_File;
  char *pcVar2;
  int *piVar3;
  longlong lVar4;
  undefined4 uVar5;
  undefined8 in_stack_ffffffffffffffe8;
  undefined4 uVar6;
  undefined8 uVar7;
  
  uVar6 = (undefined4)((ulonglong)in_stack_ffffffffffffffe8 >> 0x20);
  uVar7 = 0x14f6e1caa;
  _File = (FILE *)openssl_fopen();
  pcVar2 = strchr(param_2,0x62);
  uVar5 = 1;
  if (pcVar2 == (char *)0x0) {
    uVar5 = 0x11;
  }
  if (_File == (FILE *)0x0) {
    DVar1 = GetLastError();
    ERR_put_error(2,1,DVar1,"crypto\\bio\\bss_file.c",CONCAT44(uVar6,0x45),uVar7);
    ERR_add_error_data(5,"fopen(\'",param_1,"\',\'",param_2,"\')");
    piVar3 = _errno();
    if ((*piVar3 == 2) || (piVar3 = _errno(), *piVar3 == 6)) {
      uVar7 = 0x4c;
      uVar5 = 0x80;
    }
    else {
      uVar7 = 0x4e;
      uVar5 = 2;
    }
    ERR_put_error(0x20,0x6d,uVar5,"crypto\\bio\\bss_file.c",uVar7);
    return 0;
  }
  lVar4 = BIO_new(&DAT_1534a9710);
  if (lVar4 == 0) {
    fclose(_File);
    return 0;
  }
  BIO_clear_flags(lVar4,0);
  BIO_ctrl(lVar4,0x6a,uVar5,_File);
  return lVar4;
}

// BIO_new_fp @ 14f6e1de0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong BIO_new_fp(undefined8 param_1,undefined4 param_2)

{
  longlong lVar1;
  
  lVar1 = BIO_new(&DAT_1534a9710);
  if (lVar1 == 0) {
    return 0;
  }
  BIO_set_flags(lVar1,0);
  BIO_ctrl(lVar1,0x6a,param_2,param_1);
  return lVar1;
}

// BIO_s_file @ 14f6e1e60

undefined * BIO_s_file(void)

{
  return &DAT_1534a9710;
}

