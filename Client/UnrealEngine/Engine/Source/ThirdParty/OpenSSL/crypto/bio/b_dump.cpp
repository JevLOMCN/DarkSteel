// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OpenSSL
// Functions: 9

// BIO_dump @ 14f774ac0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void BIO_dump(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  BIO_dump_indent_cb(FUN_14f774fe0,param_1,param_2,param_3,0);
  return;
}

// BIO_dump_cb @ 14f774b00

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void BIO_dump_cb(void)

{
  BIO_dump_indent_cb();
  return;
}

// BIO_dump_fp @ 14f774b30

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void BIO_dump_fp(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  BIO_dump_indent_cb(FUN_14f775010,param_1,param_2,param_3,0);
  return;
}

// BIO_dump_indent @ 14f774b70

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void BIO_dump_indent(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4)

{
  BIO_dump_indent_cb(FUN_14f774fe0,param_1,param_2,param_3,param_4);
  return;
}

// BIO_dump_indent_cb @ 14f774bb0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int BIO_dump_indent_cb(code *param_1,undefined8 param_2,longlong param_3,int param_4,int param_5)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  longlong lVar8;
  longlong lVar9;
  int iVar10;
  int iVar11;
  char *pcVar12;
  undefined1 auStack_1c8 [32];
  char *local_1a8;
  int local_1a0;
  int local_198;
  int local_194;
  int local_190;
  int local_18c;
  undefined8 local_188;
  code *local_180;
  char local_178 [304];
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_1c8;
  iVar11 = 0;
  local_198 = 0;
  if (param_5 < 0) {
    param_5 = 0;
  }
  else if (0x40 < param_5) {
    param_5 = 0x40;
  }
  iVar2 = param_5;
  if (6 < param_5) {
    iVar2 = 6;
  }
  local_194 = 0;
  iVar2 = (param_5 - iVar2) + 3;
  local_190 = 0x10 - ((int)(iVar2 + (iVar2 >> 0x1f & 3U)) >> 2);
  iVar2 = param_4 / local_190;
  lVar8 = (longlong)local_190;
  local_18c = iVar2 + 1;
  if (param_4 <= iVar2 * local_190) {
    local_18c = iVar2;
  }
  if (0 < local_18c) {
    iVar2 = 0;
    local_188 = param_2;
    local_180 = param_1;
    do {
      iVar11 = local_198;
      local_1a8 = "";
      local_1a0 = iVar2;
      iVar3 = BIO_snprintf(local_178,0x121,"%*s%04x - ",param_5);
      iVar10 = 0;
      uVar7 = (ulonglong)iVar3;
      lVar9 = 0;
      if (0 < lVar8) {
        pcVar12 = local_178 + uVar7;
        do {
          iVar11 = (int)uVar7;
          if (3 < 0x121U - (longlong)iVar11) {
            if (iVar2 + iVar10 < param_4) {
              uVar4 = 0x20;
              if (iVar10 == 7) {
                uVar4 = 0x2d;
              }
              local_1a8 = (char *)CONCAT44(local_1a8._4_4_,uVar4);
              BIO_snprintf(local_178 + iVar11,4,"%02x%c",*(undefined1 *)(iVar2 + lVar9 + param_3));
            }
            else {
              builtin_strncpy(pcVar12,"   ",4);
            }
            uVar7 = (ulonglong)(iVar11 + 3);
            pcVar12 = pcVar12 + 3;
          }
          iVar10 = iVar10 + 1;
          lVar9 = lVar9 + 1;
          iVar11 = local_198;
        } while (lVar9 < lVar8);
      }
      lVar9 = (longlong)(int)uVar7;
      if (2 < 0x121U - lVar9) {
        uVar7 = (ulonglong)((int)uVar7 + 2);
        *(undefined2 *)(local_178 + lVar9) = _s___;
        local_178[lVar9 + 2] = DAT_1534d94c6;
      }
      iVar3 = (int)uVar7;
      lVar9 = 0;
      if (0 < lVar8) {
        uVar5 = (longlong)iVar3;
        iVar10 = iVar2;
        do {
          iVar3 = (int)uVar7;
          if (param_4 <= iVar10) break;
          uVar6 = uVar5;
          if (1 < 0x121U - (longlong)iVar3) {
            cVar1 = *(char *)(iVar2 + lVar9 + param_3);
            if (0x5e < (byte)(cVar1 - 0x20U)) {
              cVar1 = '.';
            }
            local_178[uVar5] = cVar1;
            uVar7 = (ulonglong)(iVar3 + 1);
            uVar6 = uVar5 + 1;
            if (0x120 < uVar6) {
                    /* WARNING: Subroutine does not return */
              __report_rangecheckfailure();
            }
            local_178[uVar5 + 1] = '\0';
          }
          iVar3 = (int)uVar7;
          iVar10 = iVar10 + 1;
          lVar9 = lVar9 + 1;
          uVar5 = uVar6;
        } while (lVar9 < lVar8);
      }
      uVar7 = (ulonglong)iVar3;
      if (1 < 0x121 - uVar7) {
        local_178[uVar7] = '\n';
        uVar7 = (ulonglong)(iVar3 + 1);
        if (0x120 < uVar7) {
                    /* WARNING: Subroutine does not return */
          __report_rangecheckfailure();
        }
        local_178[uVar7] = '\0';
      }
      iVar3 = (*local_180)(local_178,uVar7,local_188);
      iVar2 = iVar2 + local_190;
      iVar11 = iVar11 + iVar3;
      local_194 = local_194 + 1;
      local_198 = iVar11;
    } while (local_194 < local_18c);
  }
  return iVar11;
}

// BIO_dump_indent_fp @ 14f774e90

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void BIO_dump_indent_fp(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4)

{
  BIO_dump_indent_cb(FUN_14f775010,param_1,param_2,param_3,param_4);
  return;
}

// BIO_hex_string @ 14f774ed0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
BIO_hex_string(undefined8 param_1,undefined4 param_2,int param_3,longlong param_4,int param_5)

{
  int iVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  
  uVar2 = 0;
  if (0 < param_5) {
    param_5 = param_5 + -1;
    uVar3 = uVar2;
    if (0 < param_5) {
      do {
        if ((uVar2 != 0) && ((int)uVar3 == 0)) {
          BIO_printf(param_1,"%*s",param_2,"");
        }
        BIO_printf(param_1,"%02X:",*(undefined1 *)(uVar2 + param_4));
        uVar3 = (longlong)((int)uVar3 + 1) % (longlong)param_3;
        iVar1 = (int)uVar3;
        uVar3 = uVar3 & 0xffffffff;
        if (iVar1 == 0) {
          BIO_printf(param_1,"\n");
        }
        uVar2 = uVar2 + 1;
      } while ((longlong)uVar2 < (longlong)param_5);
      if ((param_5 != 0) && (iVar1 == 0)) {
        BIO_printf(param_1,"%*s",param_2,"");
      }
    }
    BIO_printf(param_1,"%02X",*(undefined1 *)(param_4 + param_5));
  }
  return 1;
}

// FUN_14f774fe0 @ 14f774fe0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f774fe0(undefined8 param_1,undefined4 param_2,undefined8 param_3)

{
  BIO_write(param_3,param_1,param_2);
  return;
}

// FUN_14f775010 @ 14f775010

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f775010(void *param_1,size_t param_2,FILE *param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00014f775028. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  fwrite(param_1,param_2,1,param_3);
  return;
}

