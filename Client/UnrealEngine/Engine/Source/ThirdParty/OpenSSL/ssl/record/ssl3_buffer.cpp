// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OpenSSL
// Functions: 8

// SSL3_BUFFER_clear @ 14f66a340

void SSL3_BUFFER_clear(longlong param_1)

{
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  return;
}

// SSL3_BUFFER_release @ 14f66a360

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void SSL3_BUFFER_release(undefined8 *param_1)

{
  CRYPTO_free(*param_1,"ssl\\record\\ssl3_buffer.c",0x21);
  *param_1 = 0;
  return;
}

// SSL3_BUFFER_set_data @ 14f66a3a0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void SSL3_BUFFER_set_data(undefined8 *param_1,void *param_2,size_t param_3)

{
  if (param_2 != (void *)0x0) {
    memcpy((void *)*param_1,param_2,param_3);
    param_1[4] = param_3;
    param_1[3] = 0;
    return;
  }
  param_1[4] = param_3;
  param_1[3] = 0;
  return;
}

// ssl3_release_read_buffer @ 14f66a400

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 ssl3_release_read_buffer(longlong param_1)

{
  CRYPTO_free(*(undefined8 *)(param_1 + 0x850),"ssl\\record\\ssl3_buffer.c",0xb4);
  *(undefined8 *)(param_1 + 0x850) = 0;
  return 1;
}

// ssl3_release_write_buffer @ 14f66a450

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 ssl3_release_write_buffer(longlong param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  
  lVar1 = *(longlong *)(param_1 + 0x848);
  if (lVar1 == 0) {
    *(undefined8 *)(param_1 + 0x848) = 0;
  }
  else {
    puVar2 = (undefined8 *)(param_1 + 0x850 + lVar1 * 0x28);
    do {
      CRYPTO_free(*puVar2,"ssl\\record\\ssl3_buffer.c",0xa7);
      *puVar2 = 0;
      puVar2 = puVar2 + -5;
      lVar1 = lVar1 + -1;
    } while (lVar1 != 0);
    *(undefined8 *)(param_1 + 0x848) = 0;
  }
  return 1;
}

// ssl3_setup_buffers @ 14f66a4f0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

ulonglong ssl3_setup_buffers(undefined8 param_1)

{
  int iVar1;
  ulonglong uVar2;
  
  uVar2 = ssl3_setup_read_buffer();
  if ((int)uVar2 == 0) {
    return uVar2;
  }
  iVar1 = ssl3_setup_write_buffer(param_1,1);
  return (ulonglong)(iVar1 != 0);
}

// ssl3_setup_read_buffer @ 14f66a540

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 ssl3_setup_read_buffer(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  ulonglong uVar3;
  undefined4 uVar4;
  
  uVar4 = 1;
  if (*(longlong *)(param_1 + 0x850) == 0) {
    uVar3 = 0x4150;
    if ((*(uint *)(*(longlong *)(*(longlong *)(param_1 + 8) + 0xc0) + 0x60) & 8) == 0) {
      uVar3 = 0x4148;
    }
    iVar1 = ssl_allow_compression(param_1);
    if (iVar1 != 0) {
      uVar3 = uVar3 + 0x400;
    }
    if (uVar3 < *(ulonglong *)(param_1 + 0x858)) {
      uVar3 = *(ulonglong *)(param_1 + 0x858);
    }
    lVar2 = CRYPTO_malloc(uVar3,"ssl\\record\\ssl3_buffer.c",0x3f);
    if (lVar2 == 0) {
      ossl_statem_fatal(param_1,0xffffffff,0x9c,0x41,"ssl\\record\\ssl3_buffer.c",
                        CONCAT44(uVar4,0x46));
      return 0;
    }
    *(longlong *)(param_1 + 0x850) = lVar2;
    *(ulonglong *)(param_1 + 0x860) = uVar3;
  }
  return 1;
}

// ssl3_setup_write_buffer @ 14f66a630

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 ssl3_setup_write_buffer(longlong param_1,ulonglong param_2,longlong param_3)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  ulonglong uVar4;
  
  *(ulonglong *)(param_1 + 0x848) = param_2;
  if (param_3 == 0) {
    lVar2 = 0xe;
    if ((*(byte *)(*(longlong *)(*(longlong *)(param_1 + 8) + 0xc0) + 0x60) & 8) == 0) {
      lVar2 = 5;
    }
    iVar1 = ssl_get_max_send_fragment();
    param_3 = lVar2 + 0x17 + (ulonglong)(iVar1 + 0x50);
    iVar1 = ssl_allow_compression(param_1);
    if (iVar1 != 0) {
      param_3 = param_3 + 0x400;
    }
    if ((*(uint *)(param_1 + 0x5cc) & 0x800) == 0) {
      param_3 = param_3 + 0x57 + lVar2;
    }
  }
  uVar4 = 0;
  if (param_2 != 0) {
    plVar3 = (longlong *)(param_1 + 0x878);
    do {
      if (*plVar3 == 0) {
LAB_14f66a6f5:
        lVar2 = CRYPTO_malloc(param_3,"ssl\\record\\ssl3_buffer.c",0x7c);
        if (lVar2 == 0) {
          *(ulonglong *)(param_1 + 0x848) = uVar4;
          ossl_statem_fatal(param_1,0xffffffff,0x123,0x41,"ssl\\record\\ssl3_buffer.c",0x85);
          return 0;
        }
        plVar3[1] = 0;
        plVar3[3] = 0;
        plVar3[4] = 0;
        *plVar3 = lVar2;
        plVar3[2] = param_3;
      }
      else if (plVar3[2] != param_3) {
        CRYPTO_free(*plVar3,"ssl\\record\\ssl3_buffer.c",0x77);
        *plVar3 = 0;
        goto LAB_14f66a6f5;
      }
      uVar4 = uVar4 + 1;
      plVar3 = plVar3 + 5;
    } while (uVar4 < param_2);
  }
  return 1;
}

