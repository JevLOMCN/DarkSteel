// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OpenSSL
// Functions: 25

// _CONF_add_string @ 14f776b10

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 _CONF_add_string(longlong param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  longlong lVar3;
  
  uVar1 = param_2[2];
  *param_3 = *param_2;
  uVar2 = OPENSSL_sk_push(uVar1,param_3);
  if ((int)uVar2 == 0) {
    return uVar2;
  }
  lVar3 = OPENSSL_LH_insert(*(undefined8 *)(param_1 + 0x10),param_3);
  if (lVar3 != 0) {
    OPENSSL_sk_delete_ptr(uVar1,lVar3);
    CRYPTO_free(*(undefined8 *)(lVar3 + 8),"crypto\\conf\\conf_api.c",0x3f);
    CRYPTO_free(*(undefined8 *)(lVar3 + 0x10),"crypto\\conf\\conf_api.c",0x40);
    CRYPTO_free(lVar3,"crypto\\conf\\conf_api.c",0x41);
  }
  return 1;
}

// _CONF_free_data @ 14f776be0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void _CONF_free_data(longlong param_1)

{
  if ((param_1 != 0) && (*(longlong *)(param_1 + 0x10) != 0)) {
    OPENSSL_LH_set_down_load(*(longlong *)(param_1 + 0x10),0);
    OPENSSL_LH_doall_arg
              (*(undefined8 *)(param_1 + 0x10),FUN_14f777250,*(undefined8 *)(param_1 + 0x10));
    OPENSSL_LH_doall(*(undefined8 *)(param_1 + 0x10),FUN_14f777290);
    OPENSSL_LH_free(*(undefined8 *)(param_1 + 0x10));
  }
  return;
}

// _CONF_get_section @ 14f776c40

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 _CONF_get_section(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  longlong local_28 [4];
  undefined8 uStack_8;
  
  uStack_8 = 0x14f776c4a;
  if ((param_1 != 0) && (param_2 != 0)) {
    local_28[1] = 0;
    local_28[0] = param_2;
    uVar1 = OPENSSL_LH_retrieve(*(undefined8 *)(param_1 + 0x10),local_28);
    return uVar1;
  }
  return 0;
}

// _CONF_get_section_values @ 14f776c90

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 _CONF_get_section_values(longlong param_1,longlong param_2)

{
  longlong lVar1;
  longlong local_28 [4];
  undefined8 uStack_8;
  
  uStack_8 = 0x14f776c9a;
  if ((param_1 != 0) && (param_2 != 0)) {
    local_28[1] = 0;
    local_28[0] = param_2;
    lVar1 = OPENSSL_LH_retrieve(*(undefined8 *)(param_1 + 0x10),local_28);
    if (lVar1 != 0) {
      return *(undefined8 *)(lVar1 + 0x10);
    }
  }
  return 0;
}

// _CONF_get_string @ 14f776ce0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong _CONF_get_string(longlong param_1,char *param_2,longlong param_3)

{
  longlong lVar1;
  longlong lVar2;
  char *local_28;
  longlong local_20;
  undefined8 uStack_10;
  
  uStack_10 = 0x14f776cf5;
  if (param_3 != 0) {
    if (param_1 == 0) {
      lVar1 = ossl_safe_getenv(param_3);
      return lVar1;
    }
    if (param_2 != (char *)0x0) {
      local_28 = param_2;
      local_20 = param_3;
      lVar1 = OPENSSL_LH_retrieve(*(undefined8 *)(param_1 + 0x10),&local_28);
      if (lVar1 != 0) goto LAB_14f776d98;
      lVar1 = 0;
      do {
        lVar2 = lVar1 + 1;
        if (param_2[lVar1] != (&s_ENV)[lVar1]) goto LAB_14f776d70;
        lVar1 = lVar2;
      } while (lVar2 != 4);
      lVar1 = ossl_safe_getenv(param_3);
      if (lVar1 != 0) {
        return lVar1;
      }
    }
LAB_14f776d70:
    local_28 = "default";
    local_20 = param_3;
    lVar1 = OPENSSL_LH_retrieve(*(undefined8 *)(param_1 + 0x10),&local_28);
    if (lVar1 != 0) {
LAB_14f776d98:
      return *(longlong *)(lVar1 + 0x10);
    }
  }
  return 0;
}

// _CONF_new_data @ 14f776dd0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 _CONF_new_data(longlong param_1)

{
  longlong lVar1;
  
  if (param_1 == 0) {
    return 0;
  }
  if (*(longlong *)(param_1 + 0x10) == 0) {
    lVar1 = OPENSSL_LH_new(FUN_14f777030,&LAB_14f776fa0);
    *(longlong *)(param_1 + 0x10) = lVar1;
    if (lVar1 == 0) {
      return 0;
    }
  }
  return 1;
}

// _CONF_new_section @ 14f776e30

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 * _CONF_new_section(longlong param_1,char *param_2)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  undefined8 *puVar4;
  void *_Dst;
  longlong lVar5;
  uint uVar6;
  char *pcVar7;
  size_t _Size;
  
  puVar4 = (undefined8 *)0x0;
  lVar3 = OPENSSL_sk_new_null();
  if ((lVar3 != 0) &&
     (puVar4 = (undefined8 *)CRYPTO_malloc(0x18,"crypto\\conf\\conf_api.c",0xc5),
     puVar4 != (undefined8 *)0x0)) {
    cVar1 = *param_2;
    pcVar7 = param_2;
    for (uVar6 = 0; (cVar1 != '\0' && (uVar6 < 0x80000000)); uVar6 = uVar6 + 1) {
      pcVar7 = pcVar7 + 1;
      cVar1 = *pcVar7;
    }
    _Size = (size_t)(int)((uVar6 & 0x7fffffff) + 1);
    _Dst = (void *)CRYPTO_malloc(_Size,"crypto\\conf\\conf_api.c",200);
    *puVar4 = _Dst;
    if (_Dst != (void *)0x0) {
      memcpy(_Dst,param_2,_Size);
      puVar4[1] = 0;
      puVar4[2] = lVar3;
      lVar5 = OPENSSL_LH_insert(*(undefined8 *)(param_1 + 0x10),puVar4);
      if ((lVar5 == 0) && (iVar2 = OPENSSL_LH_error(*(undefined8 *)(param_1 + 0x10)), iVar2 < 1)) {
        return puVar4;
      }
    }
  }
  OPENSSL_sk_free(lVar3);
  if (puVar4 != (undefined8 *)0x0) {
    CRYPTO_free(*puVar4,"crypto\\conf\\conf_api.c",0xd7);
  }
  CRYPTO_free(puVar4,"crypto\\conf\\conf_api.c",0xd8);
  return (undefined8 *)0x0;
}

// FUN_14f777030 @ 14f777030

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

uint FUN_14f777030(undefined8 *param_1)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = OPENSSL_LH_strhash(param_1[1]);
  iVar2 = OPENSSL_LH_strhash(*param_1);
  return iVar2 << 2 ^ uVar1;
}

// FUN_14f777070 @ 14f777070

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f777070(void)

{
  OPENSSL_LH_delete();
  return;
}

// FUN_14f777090 @ 14f777090

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f777090(void)

{
  OPENSSL_LH_doall();
  return;
}

// FUN_14f7770b0 @ 14f7770b0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f7770b0(void)

{
  OPENSSL_LH_doall_arg();
  return;
}

// FUN_14f7770d0 @ 14f7770d0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f7770d0(void)

{
  OPENSSL_LH_error();
  return;
}

// FUN_14f7770f0 @ 14f7770f0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f7770f0(void)

{
  OPENSSL_LH_free();
  return;
}

// FUN_14f777110 @ 14f777110

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f777110(void)

{
  OPENSSL_LH_insert();
  return;
}

// FUN_14f777130 @ 14f777130

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f777130(void)

{
  OPENSSL_LH_new();
  return;
}

// FUN_14f777150 @ 14f777150

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f777150(void)

{
  OPENSSL_LH_retrieve();
  return;
}

// FUN_14f777170 @ 14f777170

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f777170(void)

{
  OPENSSL_LH_set_down_load();
  return;
}

// FUN_14f777190 @ 14f777190

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f777190(void)

{
  OPENSSL_sk_delete_ptr();
  return;
}

// FUN_14f7771b0 @ 14f7771b0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f7771b0(void)

{
  OPENSSL_sk_free();
  return;
}

// FUN_14f7771d0 @ 14f7771d0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f7771d0(void)

{
  OPENSSL_sk_new_null();
  return;
}

// FUN_14f7771f0 @ 14f7771f0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f7771f0(void)

{
  OPENSSL_sk_num();
  return;
}

// FUN_14f777210 @ 14f777210

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f777210(void)

{
  OPENSSL_sk_push();
  return;
}

// FUN_14f777230 @ 14f777230

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f777230(void)

{
  OPENSSL_sk_value();
  return;
}

// FUN_14f777250 @ 14f777250

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f777250(longlong param_1,undefined8 param_2)

{
  if (*(longlong *)(param_1 + 8) != 0) {
    OPENSSL_LH_delete(param_2,param_1);
    return;
  }
  return;
}

// FUN_14f777290 @ 14f777290

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f777290(undefined8 *param_1)

{
  undefined8 uVar1;
  int iVar2;
  longlong lVar3;
  
  if (param_1[1] == 0) {
    uVar1 = param_1[2];
    iVar2 = OPENSSL_sk_num(uVar1);
    while (iVar2 = iVar2 + -1, -1 < iVar2) {
      lVar3 = OPENSSL_sk_value(uVar1,iVar2);
      CRYPTO_free(*(undefined8 *)(lVar3 + 0x10),"crypto\\conf\\conf_api.c",0xb3);
      CRYPTO_free(*(undefined8 *)(lVar3 + 8),"crypto\\conf\\conf_api.c",0xb4);
      CRYPTO_free(lVar3,"crypto\\conf\\conf_api.c",0xb5);
    }
    OPENSSL_sk_free(uVar1);
    CRYPTO_free(*param_1,"crypto\\conf\\conf_api.c",0xb8);
    CRYPTO_free(param_1,"crypto\\conf\\conf_api.c",0xb9);
  }
  return;
}

