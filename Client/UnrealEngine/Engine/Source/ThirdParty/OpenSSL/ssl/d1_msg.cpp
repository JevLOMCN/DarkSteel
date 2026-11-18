// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OpenSSL
// Functions: 2

// dtls1_dispatch_alert @ 14f67f9e0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

ulonglong dtls1_dispatch_alert(undefined4 *param_1)

{
  ulonglong uVar1;
  code *pcVar2;
  undefined2 local_res8 [4];
  undefined1 local_res10 [8];
  ulonglong in_stack_ffffffffffffffd8;
  undefined8 uVar3;
  
  uVar3 = 0x14f67f9f0;
  *(undefined4 *)(*(longlong *)(param_1 + 0x2a) + 0xfc) = 0;
  local_res8[0] = *(undefined2 *)(*(longlong *)(param_1 + 0x2a) + 0x100);
  uVar1 = do_dtls1_write(param_1,0x15,local_res8,2,in_stack_ffffffffffffffd8 & 0xffffffff00000000,
                         local_res10);
  if ((int)uVar1 < 1) {
    *(undefined4 *)(*(longlong *)(param_1 + 0x2a) + 0xfc) = 1;
    return uVar1;
  }
  BIO_ctrl(*(undefined8 *)(param_1 + 6),0xb,0);
  if (*(code **)(param_1 + 0x2e) != (code *)0x0) {
    (**(code **)(param_1 + 0x2e))
              (1,*param_1,0x15,*(longlong *)(param_1 + 0x2a) + 0x100,2,param_1,
               *(undefined8 *)(param_1 + 0x30),uVar3);
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

// dtls1_write_app_data_bytes @ 14f67fb20

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
dtls1_write_app_data_bytes
          (longlong param_1,undefined4 param_2,undefined8 param_3,ulonglong param_4,
          undefined8 param_5)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 in_stack_ffffffffffffffe8;
  undefined4 uVar3;
  undefined8 uVar4;
  
  uVar3 = (undefined4)((ulonglong)in_stack_ffffffffffffffe8 >> 0x20);
  uVar4 = 0x14f67fb3a;
  iVar1 = SSL_in_init();
  if ((iVar1 != 0) && (iVar1 = ossl_statem_get_in_handshake(param_1), iVar1 == 0)) {
    uVar2 = (**(code **)(param_1 + 0x30))(param_1);
    if ((int)uVar2 < 0) {
      return uVar2;
    }
    if ((int)uVar2 == 0) {
      ERR_put_error(0x14,0x10c,0xe5,"ssl\\d1_msg.c",CONCAT44(uVar3,0x17));
      return 0xffffffff;
    }
  }
  if (param_4 < 0x4001) {
    uVar4 = dtls1_write_bytes(param_1,param_2,param_3,param_4,param_5,uVar4);
  }
  else {
    ERR_put_error(0x14,0x10c,0x14e,"ssl\\d1_msg.c",CONCAT44(uVar3,0x1d));
    uVar4 = 0xffffffff;
  }
  return uVar4;
}

