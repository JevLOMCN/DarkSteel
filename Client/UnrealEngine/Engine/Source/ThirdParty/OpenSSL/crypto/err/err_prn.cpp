// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OpenSSL
// Functions: 4

// ERR_print_errors @ 14f7bbe00

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void ERR_print_errors(undefined8 param_1)

{
  ERR_print_errors_cb(FUN_14f7bbfc0,param_1);
  return;
}

// ERR_print_errors_cb @ 14f7bbe30

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void ERR_print_errors_cb(code *param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined4 uVar2;
  int iVar3;
  longlong lVar4;
  undefined1 auStack_1178 [32];
  undefined1 *local_1158;
  undefined8 local_1150;
  undefined4 local_1148;
  char *local_1140;
  byte local_1138 [4];
  undefined4 local_1134;
  char *local_1130;
  undefined8 local_1128 [2];
  undefined1 local_1118 [256];
  char local_1018 [4096];
  ulonglong local_18;
  undefined8 local_10;
  longlong lVar5;
  
  local_10 = 0x14f7bbe45;
  local_18 = __security_cookie.value ^ (ulonglong)auStack_1178;
  uVar2 = CRYPTO_THREAD_get_current_id();
  iVar3 = ERR_get_error_line_data(local_1128,&local_1134,&local_1130,local_1138);
  while( true ) {
    if (iVar3 == 0) {
      return;
    }
    ERR_error_string_n(iVar3,local_1118,0x100);
    local_1140 = "";
    if ((local_1138[0] & 2) != 0) {
      local_1140 = local_1130;
    }
    local_1148 = local_1134;
    local_1150 = local_1128[0];
    local_1158 = local_1118;
    BIO_snprintf(local_1018,0x1000,"%lu:%s:%s:%d:%s\n",uVar2);
    lVar5 = -1;
    do {
      lVar4 = lVar5 + 1;
      lVar1 = lVar5 + 1;
      lVar5 = lVar4;
    } while (local_1018[lVar1] != '\0');
    iVar3 = (*param_1)(local_1018,lVar4,param_2);
    if (iVar3 < 1) break;
    iVar3 = ERR_get_error_line_data(local_1128,&local_1134,&local_1130,local_1138);
  }
  return;
}

// ERR_print_errors_fp @ 14f7bbf70

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void ERR_print_errors_fp(undefined8 param_1)

{
  longlong lVar1;
  
  lVar1 = BIO_new_fp(param_1,0);
  if (lVar1 != 0) {
    ERR_print_errors_cb(FUN_14f7bbfc0,lVar1);
    BIO_free(lVar1);
    return;
  }
  return;
}

// FUN_14f7bbfc0 @ 14f7bbfc0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f7bbfc0(undefined8 param_1,undefined4 param_2,undefined8 param_3)

{
  BIO_write(param_3,param_1,param_2);
  return;
}

