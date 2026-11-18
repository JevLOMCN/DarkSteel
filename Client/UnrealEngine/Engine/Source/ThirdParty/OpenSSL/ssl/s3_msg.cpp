// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OpenSSL
// Functions: 3

// ssl3_dispatch_alert @ 14f683100

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

ulonglong ssl3_dispatch_alert(undefined4 *param_1)

{
  ulonglong uVar1;
  code *pcVar2;
  undefined8 local_res8;
  undefined1 local_res10 [8];
  ulonglong in_stack_ffffffffffffffe0;
  
  *(undefined4 *)(*(longlong *)(param_1 + 0x2a) + 0xfc) = 0;
  local_res8 = 2;
  uVar1 = do_ssl3_write(param_1,0x15,*(longlong *)(param_1 + 0x2a) + 0x100,&local_res8,1,
                        in_stack_ffffffffffffffe0 & 0xffffffff00000000,local_res10,0x14f683110);
  if ((int)uVar1 < 1) {
    *(undefined4 *)(*(longlong *)(param_1 + 0x2a) + 0xfc) = 1;
    return uVar1;
  }
  BIO_ctrl(*(undefined8 *)(param_1 + 6),0xb,0);
  if (*(code **)(param_1 + 0x2e) != (code *)0x0) {
    (**(code **)(param_1 + 0x2e))
              (1,*param_1,0x15,*(longlong *)(param_1 + 0x2a) + 0x100,2,param_1,
               *(undefined8 *)(param_1 + 0x30));
  }
  pcVar2 = *(code **)(param_1 + 0x15a);
  if ((pcVar2 != (code *)0x0) ||
     (pcVar2 = *(code **)(*(longlong *)(param_1 + 0x166) + 0x108), pcVar2 != (code *)0x0)) {
    (*pcVar2)(param_1,0x4008,
              CONCAT11(*(undefined1 *)(*(longlong *)(param_1 + 0x2a) + 0x100),
                       *(undefined1 *)(*(longlong *)(param_1 + 0x2a) + 0x101)));
  }
  return uVar1 & 0xffffffff;
}

// ssl3_do_change_cipher_spec @ 14f683240

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

ulonglong ssl3_do_change_cipher_spec(longlong param_1)

{
  longlong lVar1;
  int iVar2;
  ulonglong uVar3;
  undefined4 uVar4;
  
  uVar4 = 0x21;
  if (*(int *)(param_1 + 0x38) == 0) {
    uVar4 = 0x11;
  }
  if (*(longlong *)(*(longlong *)(param_1 + 0xa8) + 0x270) == 0) {
    lVar1 = *(longlong *)(param_1 + 0x508);
    if ((lVar1 == 0) || (*(longlong *)(lVar1 + 8) == 0)) {
      ERR_put_error(0x14,0x124,0x85,"ssl\\s3_msg.c",0x18,0x14f683250);
      return 0;
    }
    *(undefined8 *)(lVar1 + 0x1e0) = *(undefined8 *)(*(longlong *)(param_1 + 0xa8) + 0x238);
    uVar3 = (**(code **)(*(longlong *)(*(longlong *)(param_1 + 8) + 0xc0) + 0x10))(param_1);
    if ((int)uVar3 == 0) {
      return uVar3;
    }
  }
  iVar2 = (**(code **)(*(longlong *)(*(longlong *)(param_1 + 8) + 0xc0) + 0x20))(param_1,uVar4);
  return (ulonglong)(iVar2 != 0);
}

// ssl3_send_alert @ 14f683320

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 ssl3_send_alert(int *param_1,int param_2,undefined4 param_3)

{
  longlong lVar1;
  int iVar2;
  undefined8 uVar3;
  
  lVar1 = *(longlong *)(*(int **)(param_1 + 2) + 0x30);
  if (((((*(byte *)(lVar1 + 0x60) & 8) == 0) && (iVar2 = **(int **)(param_1 + 2), 0x303 < iVar2)) &&
      (iVar2 != 0x10000)) || ((param_1[0x21] - 1U < 4 || (param_1[0x136] == 1)))) {
    iVar2 = tls13_alert_code(param_3);
  }
  else {
    iVar2 = (**(code **)(lVar1 + 0x50))(param_3);
  }
  if ((*param_1 == 0x300) && (iVar2 == 0x46)) {
    iVar2 = 0x28;
  }
  else if (iVar2 < 0) {
    return 0xffffffff;
  }
  if (((*(byte *)(param_1 + 0x11) & 1) == 0) || (iVar2 == 0)) {
    if ((param_2 == 2) && (*(longlong *)(param_1 + 0x142) != 0)) {
      SSL_CTX_remove_session(*(undefined8 *)(param_1 + 0x1da));
    }
    *(undefined4 *)(*(longlong *)(param_1 + 0x2a) + 0xfc) = 1;
    *(char *)(*(longlong *)(param_1 + 0x2a) + 0x100) = (char)param_2;
    *(char *)(*(longlong *)(param_1 + 0x2a) + 0x101) = (char)iVar2;
    iVar2 = RECORD_LAYER_write_pending(param_1 + 0x20c);
    if (iVar2 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00014f683418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar3 = (**(code **)(*(longlong *)(param_1 + 2) + 0x78))(param_1);
      return uVar3;
    }
  }
  return 0xffffffff;
}

