// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OpenSSL
// Functions: 17

// OPENSSL_LH_delete @ 14f6c8d90

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 OPENSSL_LH_delete(longlong param_1,undefined8 param_2)

{
  uint uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  uint uVar4;
  longlong *plVar5;
  undefined1 local_res8 [8];
  
  *(undefined4 *)(param_1 + 0x68) = 0;
  plVar5 = (longlong *)FUN_14f6c9580(param_1,param_2,local_res8);
  puVar2 = (undefined8 *)*plVar5;
  if (puVar2 == (undefined8 *)0x0) {
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + 1;
    return 0;
  }
  *plVar5 = puVar2[1];
  uVar3 = *puVar2;
  CRYPTO_free(puVar2,"crypto\\lhash\\lhash.c",0x90);
  *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + -1;
  *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + 1;
  uVar1 = *(uint *)(param_1 + 0x18);
  if ((0x10 < uVar1) &&
     (uVar4 = *(int *)(param_1 + 0x30) << 8, uVar4 / uVar1 <= *(uint *)(param_1 + 0x2c))) {
    FUN_14f6c92d0(param_1,(ulonglong)uVar4 % (ulonglong)uVar1);
  }
  return uVar3;
}

// OPENSSL_LH_doall @ 14f6c8e30

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void OPENSSL_LH_doall(longlong *param_1,code *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  int iVar3;
  longlong lVar4;
  
  if ((param_1 != (longlong *)0x0) &&
     (iVar3 = (int)param_1[3] + -1, lVar4 = (longlong)iVar3, -1 < iVar3)) {
    do {
      puVar2 = *(undefined8 **)(*param_1 + lVar4 * 8);
      while (puVar2 != (undefined8 *)0x0) {
        puVar1 = (undefined8 *)puVar2[1];
        (*param_2)(*puVar2);
        puVar2 = puVar1;
      }
      lVar4 = lVar4 + -1;
    } while (-1 < lVar4);
  }
  return;
}

// OPENSSL_LH_doall_arg @ 14f6c8eb0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void OPENSSL_LH_doall_arg(longlong *param_1,code *param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  int iVar3;
  longlong lVar4;
  
  if ((param_1 != (longlong *)0x0) &&
     (iVar3 = (int)param_1[3] + -1, lVar4 = (longlong)iVar3, -1 < iVar3)) {
    do {
      puVar2 = *(undefined8 **)(*param_1 + lVar4 * 8);
      while (puVar2 != (undefined8 *)0x0) {
        puVar1 = (undefined8 *)puVar2[1];
        (*param_2)(*puVar2,param_3);
        puVar2 = puVar1;
      }
      lVar4 = lVar4 + -1;
    } while (-1 < lVar4);
  }
  return;
}

// OPENSSL_LH_error @ 14f6c8f40

undefined4 OPENSSL_LH_error(longlong param_1)

{
  return *(undefined4 *)(param_1 + 0x68);
}

// OPENSSL_LH_free @ 14f6c8f50

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void OPENSSL_LH_free(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  uint uVar3;
  ulonglong uVar4;
  
  if (param_1 != (longlong *)0x0) {
    uVar4 = 0;
    if ((int)param_1[3] != 0) {
      do {
        lVar2 = *(longlong *)(*param_1 + uVar4 * 8);
        while (lVar2 != 0) {
          lVar1 = *(longlong *)(lVar2 + 8);
          CRYPTO_free(lVar2,"crypto\\lhash\\lhash.c",0x58);
          lVar2 = lVar1;
        }
        uVar3 = (int)uVar4 + 1;
        uVar4 = (ulonglong)uVar3;
      } while (uVar3 < *(uint *)(param_1 + 3));
    }
    CRYPTO_free(*param_1,"crypto\\lhash\\lhash.c",0x5c);
    CRYPTO_free(param_1,"crypto\\lhash\\lhash.c",0x5d);
  }
  return;
}

// OPENSSL_LH_get_down_load @ 14f6c9000

undefined4 OPENSSL_LH_get_down_load(longlong param_1)

{
  return *(undefined4 *)(param_1 + 0x2c);
}

// OPENSSL_LH_insert @ 14f6c9010

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 OPENSSL_LH_insert(longlong param_1,undefined8 param_2)

{
  uint uVar1;
  int iVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined4 local_res8 [2];
  
  uVar1 = *(int *)(param_1 + 0x30) << 8;
  uVar5 = 0;
  *(undefined4 *)(param_1 + 0x68) = 0;
  if ((*(uint *)(param_1 + 0x28) <= uVar1 / *(uint *)(param_1 + 0x18)) &&
     (iVar2 = FUN_14f6c9460(param_1,(ulonglong)uVar1 % (ulonglong)*(uint *)(param_1 + 0x18)),
     iVar2 == 0)) {
    return 0;
  }
  plVar3 = (longlong *)FUN_14f6c9580(param_1,param_2,local_res8);
  puVar4 = (undefined8 *)*plVar3;
  if (puVar4 == (undefined8 *)0x0) {
    puVar4 = (undefined8 *)CRYPTO_malloc(0x18,"crypto\\lhash\\lhash.c");
    if (puVar4 == (undefined8 *)0x0) {
      *(int *)(param_1 + 0x68) = *(int *)(param_1 + 0x68) + 1;
      uVar5 = 0;
    }
    else {
      *puVar4 = param_2;
      puVar4[1] = 0;
      *(undefined4 *)(puVar4 + 2) = local_res8[0];
      *plVar3 = (longlong)puVar4;
      *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + 1;
      *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + 1;
    }
  }
  else {
    uVar5 = *puVar4;
    *puVar4 = param_2;
    *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + 1;
  }
  return uVar5;
}

// OPENSSL_LH_new @ 14f6c90e0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong * OPENSSL_LH_new(code *param_1,code *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = (longlong *)CRYPTO_zalloc(0x70,"crypto\\lhash\\lhash.c",0x33);
  if (plVar1 != (longlong *)0x0) {
    lVar2 = CRYPTO_zalloc(0x80,"crypto\\lhash\\lhash.c");
    *plVar1 = lVar2;
    if (lVar2 != 0) {
      *(undefined4 *)(plVar1 + 3) = 8;
      *(undefined4 *)((longlong)plVar1 + 0x1c) = 0x10;
      if (param_2 == (code *)0x0) {
        param_2 = strcmp;
      }
      *(undefined4 *)((longlong)plVar1 + 0x24) = 8;
      plVar1[1] = (longlong)param_2;
      *(undefined4 *)(plVar1 + 5) = 0x200;
      if (param_1 == (code *)0x0) {
        param_1 = OPENSSL_LH_strhash;
      }
      *(undefined4 *)((longlong)plVar1 + 0x2c) = 0x100;
      plVar1[2] = (longlong)param_1;
      return plVar1;
    }
    CRYPTO_free(0,"crypto\\lhash\\lhash.c",0x47);
    CRYPTO_free(plVar1,"crypto\\lhash\\lhash.c",0x48);
  }
  return (longlong *)0x0;
}

// OPENSSL_LH_num_items @ 14f6c91d0

undefined4 OPENSSL_LH_num_items(longlong param_1)

{
  if (param_1 != 0) {
    return *(undefined4 *)(param_1 + 0x30);
  }
  return 0;
}

// OPENSSL_LH_retrieve @ 14f6c91f0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 OPENSSL_LH_retrieve(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  longlong *plVar2;
  undefined1 local_res8 [32];
  
  *(undefined4 *)(param_1 + 0x68) = 0;
  plVar2 = (longlong *)FUN_14f6c9580(param_1,param_2,local_res8);
  if ((undefined8 *)*plVar2 == (undefined8 *)0x0) {
    LOCK();
    *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + 1;
    UNLOCK();
    return 0;
  }
  uVar1 = *(undefined8 *)*plVar2;
  LOCK();
  *(int *)(param_1 + 0x5c) = *(int *)(param_1 + 0x5c) + 1;
  UNLOCK();
  return uVar1;
}

// OPENSSL_LH_set_down_load @ 14f6c9240

void OPENSSL_LH_set_down_load(longlong param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x2c) = param_2;
  return;
}

// OPENSSL_LH_strhash @ 14f6c9250

ulonglong OPENSSL_LH_strhash(byte *param_1)

{
  byte bVar1;
  ulonglong uVar2;
  byte bVar3;
  uint uVar4;
  uint uVar5;
  
  uVar2 = 0;
  if ((param_1 != (byte *)0x0) && (bVar3 = *param_1, bVar3 != 0)) {
    uVar5 = 0x100;
    do {
      param_1 = param_1 + 1;
      uVar4 = (int)(char)bVar3 | uVar5;
      uVar5 = uVar5 + 0x100;
      bVar1 = ((byte)(uVar4 >> 2) ^ bVar3) & 0xf;
      bVar3 = *param_1;
      uVar4 = ((uint)(uVar2 >> (0x20 - bVar1 & 0x3f)) | (int)uVar2 << bVar1) ^ uVar4 * uVar4;
      uVar2 = (ulonglong)uVar4;
    } while (bVar3 != 0);
    uVar2 = (ulonglong)(uVar4 ^ uVar4 >> 0x10);
  }
  return uVar2;
}

// FUN_14f6c92d0 @ 14f6c92d0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f6c92d0(longlong *param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  ulonglong uVar5;
  
  uVar5 = (ulonglong)(uint)((int)param_1[4] + *(int *)((longlong)param_1 + 0x24) + -1);
  uVar1 = *(undefined8 *)(*param_1 + uVar5 * 8);
  *(undefined8 *)(*param_1 + uVar5 * 8) = 0;
  iVar3 = (int)param_1[4];
  if (iVar3 == 0) {
    lVar4 = CRYPTO_realloc(*param_1,*(int *)((longlong)param_1 + 0x24) << 3,"crypto\\lhash\\lhash.c"
                           ,0x10c);
    if (lVar4 == 0) {
      *(int *)(param_1 + 0xd) = (int)param_1[0xd] + 1;
      return;
    }
    *(int *)(param_1 + 8) = (int)param_1[8] + 1;
    *(uint *)((longlong)param_1 + 0x1c) = *(uint *)((longlong)param_1 + 0x1c) >> 1;
    *(uint *)((longlong)param_1 + 0x24) = *(uint *)((longlong)param_1 + 0x24) >> 1;
    iVar3 = *(int *)((longlong)param_1 + 0x24);
    *param_1 = lVar4;
  }
  *(int *)(param_1 + 3) = (int)param_1[3] + -1;
  iVar3 = iVar3 + -1;
  *(int *)((longlong)param_1 + 0x3c) = *(int *)((longlong)param_1 + 0x3c) + 1;
  *(int *)(param_1 + 4) = iVar3;
  lVar4 = *(longlong *)(*param_1 + (longlong)iVar3 * 8);
  if (lVar4 != 0) {
    lVar2 = *(longlong *)(lVar4 + 8);
    while (lVar2 != 0) {
      lVar4 = *(longlong *)(lVar4 + 8);
      lVar2 = *(longlong *)(lVar4 + 8);
    }
    *(undefined8 *)(lVar4 + 8) = uVar1;
    return;
  }
  *(undefined8 *)(*param_1 + (longlong)iVar3 * 8) = uVar1;
  return;
}

// FUN_14f6c93b0 @ 14f6c93b0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f6c93b0(longlong *param_1,int param_2,code *param_3,code *param_4,undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  int iVar3;
  longlong lVar4;
  
  if ((param_1 != (longlong *)0x0) &&
     (iVar3 = (int)param_1[3] + -1, lVar4 = (longlong)iVar3, -1 < iVar3)) {
    do {
      puVar2 = *(undefined8 **)(*param_1 + lVar4 * 8);
      while (puVar2 != (undefined8 *)0x0) {
        puVar1 = (undefined8 *)puVar2[1];
        if (param_2 == 0) {
          (*param_3)(*puVar2);
          puVar2 = puVar1;
        }
        else {
          (*param_4)(*puVar2,param_5);
          puVar2 = puVar1;
        }
      }
      lVar4 = lVar4 + -1;
    } while (-1 < lVar4);
  }
  return;
}

// FUN_14f6c9460 @ 14f6c9460

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_14f6c9460(longlong *param_1)

{
  longlong *plVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  longlong lVar5;
  ulonglong uVar6;
  longlong *plVar7;
  
  uVar2 = *(uint *)(param_1 + 4);
  uVar3 = *(uint *)((longlong)param_1 + 0x24);
  uVar4 = *(uint *)((longlong)param_1 + 0x1c);
  if (uVar2 + 1 < uVar3) {
    *(uint *)(param_1 + 4) = uVar2 + 1;
  }
  else {
    lVar5 = CRYPTO_realloc(*param_1,(ulonglong)(uVar4 * 2) << 3,"crypto\\lhash\\lhash.c",0xe1);
    if (lVar5 == 0) {
      *(int *)(param_1 + 0xd) = (int)param_1[0xd] + 1;
      return 0;
    }
    *param_1 = lVar5;
    memset((void *)(lVar5 + (ulonglong)uVar4 * 8),0,(ulonglong)uVar4 << 3);
    *(int *)(param_1 + 7) = (int)param_1[7] + 1;
    *(uint *)((longlong)param_1 + 0x24) = uVar4;
    *(uint *)((longlong)param_1 + 0x1c) = uVar4 * 2;
    *(undefined4 *)(param_1 + 4) = 0;
  }
  lVar5 = *param_1;
  uVar6 = (ulonglong)(uVar3 + uVar2);
  *(int *)(param_1 + 3) = (int)param_1[3] + 1;
  *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
  *(undefined8 *)(lVar5 + uVar6 * 8) = 0;
  plVar1 = (longlong *)(lVar5 + uVar6 * 8);
  plVar7 = (longlong *)(lVar5 + (ulonglong)uVar2 * 8);
  lVar5 = *(longlong *)(lVar5 + (ulonglong)uVar2 * 8);
  while (lVar5 != 0) {
    if (*(uint *)(lVar5 + 0x10) % uVar4 == uVar2) {
      plVar7 = (longlong *)(*plVar7 + 8);
    }
    else {
      *plVar7 = *(longlong *)(*plVar7 + 8);
      *(longlong *)(lVar5 + 8) = *plVar1;
      *plVar1 = lVar5;
    }
    lVar5 = *plVar7;
  }
  return 1;
}

// FUN_14f6c9580 @ 14f6c9580

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 * FUN_14f6c9580(longlong *param_1,undefined8 param_2,uint *param_3)

{
  undefined8 *puVar1;
  code *pcVar2;
  undefined8 *puVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  
  uVar4 = (*(code *)param_1[2])(param_2);
  LOCK();
  *(int *)((longlong)param_1 + 0x44) = *(int *)((longlong)param_1 + 0x44) + 1;
  UNLOCK();
  *param_3 = uVar4;
  uVar6 = uVar4 % *(uint *)((longlong)param_1 + 0x24);
  if (uVar6 < *(uint *)(param_1 + 4)) {
    uVar6 = uVar4 % *(uint *)((longlong)param_1 + 0x1c);
  }
  pcVar2 = (code *)param_1[1];
  puVar3 = *(undefined8 **)(*param_1 + (longlong)(int)uVar6 * 8);
  puVar1 = (undefined8 *)(*param_1 + (longlong)(int)uVar6 * 8);
  do {
    if (puVar3 == (undefined8 *)0x0) {
      return puVar1;
    }
    LOCK();
    *(int *)((longlong)param_1 + 100) = *(int *)((longlong)param_1 + 100) + 1;
    UNLOCK();
    if (*(uint *)(puVar3 + 2) == uVar4) {
      LOCK();
      *(int *)(param_1 + 9) = (int)param_1[9] + 1;
      UNLOCK();
      iVar5 = (*pcVar2)(*puVar3,param_2);
      if (iVar5 == 0) {
        return puVar1;
      }
    }
    puVar1 = puVar3 + 1;
    puVar3 = (undefined8 *)puVar3[1];
  } while( true );
}

// openssl_lh_strcasehash @ 14f6c9650

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

uint openssl_lh_strcasehash(char *param_1)

{
  char cVar1;
  byte bVar2;
  uint uVar3;
  ulonglong uVar4;
  uint uVar5;
  uint uVar6;
  
  uVar4 = 0;
  if ((param_1 != (char *)0x0) && (cVar1 = *param_1, cVar1 != '\0')) {
    uVar5 = 0x100;
    do {
      uVar3 = ossl_tolower((int)cVar1);
      uVar6 = uVar3 | uVar5;
      param_1 = param_1 + 1;
      uVar5 = uVar5 + 0x100;
      bVar2 = ((byte)(uVar6 >> 2) ^ (byte)uVar3) & 0xf;
      cVar1 = *param_1;
      uVar3 = ((uint)(uVar4 >> (0x20 - bVar2 & 0x3f)) | (int)uVar4 << bVar2) ^ uVar6 * uVar6;
      uVar4 = (ulonglong)uVar3;
    } while (cVar1 != '\0');
    return uVar3 >> 0x10 ^ uVar3;
  }
  return 0;
}

