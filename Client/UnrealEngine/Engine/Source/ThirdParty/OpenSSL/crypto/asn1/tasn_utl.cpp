// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OpenSSL
// Functions: 9

// asn1_do_adb @ 14f75e710

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

uint * asn1_do_adb(longlong *param_1,uint *param_2,int param_3)

{
  uint *puVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  int *piVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  
  uVar7 = 0x14f75e725;
  if ((*param_2 & 0x300) == 0) {
    return param_2;
  }
  lVar4 = (**(code **)(param_2 + 6))();
  if (*(longlong *)((ulonglong)*(uint *)(lVar4 + 4) + *param_1) == 0) {
    puVar1 = *(uint **)(lVar4 + 0x28);
  }
  else {
    if ((*param_2 & 0x100) == 0) {
      iVar2 = ASN1_INTEGER_get();
    }
    else {
      iVar2 = OBJ_obj2nid();
    }
    if ((*(code **)(lVar4 + 8) != (code *)0x0) && (iVar3 = (**(code **)(lVar4 + 8))(), iVar3 == 0))
    {
      uVar6 = 0xe2;
      goto LAB_14f75e7e4;
    }
    iVar3 = 0;
    piVar5 = *(int **)(lVar4 + 0x10);
    if (0 < *(int *)(lVar4 + 0x18)) {
      do {
        if (*piVar5 == iVar2) {
          return (uint *)(piVar5 + 2);
        }
        iVar3 = iVar3 + 1;
        piVar5 = piVar5 + 10;
      } while (iVar3 < *(int *)(lVar4 + 0x18));
    }
    puVar1 = *(uint **)(lVar4 + 0x20);
  }
  if (puVar1 != (uint *)0x0) {
    return puVar1;
  }
  if (param_3 == 0) {
    return (uint *)0x0;
  }
  uVar6 = 0xfb;
LAB_14f75e7e4:
  ERR_put_error(0xd,0x6e,0xa4,"crypto\\asn1\\tasn_utl.c",uVar6,uVar7);
  return (uint *)0x0;
}

// asn1_do_lock @ 14f75e820

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

int asn1_do_lock(longlong *param_1,int param_2,char *param_3)

{
  longlong lVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  undefined8 uVar5;
  
  uVar5 = 0x14f75e82c;
  iVar3 = -1;
  if ((((*param_3 == '\x01') || (*param_3 == '\x06')) &&
      (lVar1 = *(longlong *)(param_3 + 0x18), lVar1 != 0)) && ((*(byte *)(lVar1 + 8) & 1) != 0)) {
    piVar2 = (int *)((longlong)*(int *)(lVar1 + 0xc) + *param_1);
    plVar4 = (longlong *)((longlong)*(int *)(lVar1 + 0x10) + *param_1);
    if (param_2 == -1) {
      LOCK();
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      iVar3 = iVar3 + -1;
      if (iVar3 == 0) {
        CRYPTO_THREAD_lock_free(*plVar4);
        *plVar4 = 0;
      }
    }
    else if (param_2 == 0) {
      iVar3 = 1;
      *piVar2 = 1;
      lVar1 = CRYPTO_THREAD_lock_new();
      *plVar4 = lVar1;
      if (lVar1 == 0) {
        ERR_put_error(0xd,0xe9,0x41,"crypto\\asn1\\tasn_utl.c",0x4f,uVar5);
        return -1;
      }
    }
    else if (param_2 == 1) {
      LOCK();
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + 1;
      UNLOCK();
      return iVar3 + 1;
    }
    return iVar3;
  }
  return 0;
}

// asn1_enc_free @ 14f75e910

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void asn1_enc_free(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  
  if ((((param_1 != (longlong *)0x0) && (*param_1 != 0)) &&
      (lVar1 = *(longlong *)(param_2 + 0x18), lVar1 != 0)) &&
     (((*(byte *)(lVar1 + 8) & 2) != 0 &&
      (puVar2 = (undefined8 *)((longlong)*(int *)(lVar1 + 0x20) + *param_1),
      puVar2 != (undefined8 *)0x0)))) {
    CRYPTO_free(*puVar2,"crypto\\asn1\\tasn_utl.c",0x83);
    *(undefined4 *)((longlong)puVar2 + 0xc) = 1;
    *puVar2 = 0;
    *(undefined4 *)(puVar2 + 1) = 0;
  }
  return;
}

// asn1_enc_init @ 14f75e980

void asn1_enc_init(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  
  if ((((param_1 != (longlong *)0x0) && (*param_1 != 0)) &&
      (lVar1 = *(longlong *)(param_2 + 0x18), lVar1 != 0)) &&
     (((*(byte *)(lVar1 + 8) & 2) != 0 &&
      (puVar2 = (undefined8 *)((longlong)*(int *)(lVar1 + 0x20) + *param_1),
      puVar2 != (undefined8 *)0x0)))) {
    *(undefined4 *)((longlong)puVar2 + 0xc) = 1;
    *puVar2 = 0;
    *(undefined4 *)(puVar2 + 1) = 0;
  }
  return;
}

// asn1_enc_restore @ 14f75e9c0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
asn1_enc_restore(undefined4 *param_1,longlong *param_2,longlong *param_3,longlong param_4)

{
  longlong lVar1;
  undefined8 *puVar2;
  
  if ((((param_3 != (longlong *)0x0) && (*param_3 != 0)) &&
      (lVar1 = *(longlong *)(param_4 + 0x18), lVar1 != 0)) &&
     ((((*(byte *)(lVar1 + 8) & 2) != 0 &&
       (puVar2 = (undefined8 *)((longlong)*(int *)(lVar1 + 0x20) + *param_3),
       puVar2 != (undefined8 *)0x0)) && (*(int *)((longlong)puVar2 + 0xc) == 0)))) {
    if (param_2 != (longlong *)0x0) {
      memcpy((void *)*param_2,(void *)*puVar2,(longlong)*(int *)(puVar2 + 1));
      *param_2 = *param_2 + (longlong)*(int *)(puVar2 + 1);
    }
    if (param_1 != (undefined4 *)0x0) {
      *param_1 = *(undefined4 *)(puVar2 + 1);
    }
    return 1;
  }
  return 0;
}

// asn1_enc_save @ 14f75ea60

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

bool asn1_enc_save(longlong *param_1,void *param_2,int param_3,longlong param_4)

{
  longlong lVar1;
  void *_Dst;
  undefined8 *puVar2;
  undefined8 uVar3;
  
  uVar3 = 0x14f75ea75;
  if ((((param_1 != (longlong *)0x0) && (*param_1 != 0)) &&
      (lVar1 = *(longlong *)(param_4 + 0x18), lVar1 != 0)) &&
     (((*(byte *)(lVar1 + 8) & 2) != 0 &&
      (puVar2 = (undefined8 *)((longlong)*(int *)(lVar1 + 0x20) + *param_1),
      puVar2 != (undefined8 *)0x0)))) {
    CRYPTO_free(*puVar2,"crypto\\asn1\\tasn_utl.c",0x92);
    _Dst = (void *)CRYPTO_malloc((longlong)param_3,"crypto\\asn1\\tasn_utl.c",0x93);
    *puVar2 = _Dst;
    if (_Dst != (void *)0x0) {
      memcpy(_Dst,param_2,(longlong)param_3);
      *(int *)(puVar2 + 1) = param_3;
      *(undefined4 *)((longlong)puVar2 + 0xc) = 0;
    }
    else {
      ERR_put_error(0xd,0x73,0x41,"crypto\\asn1\\tasn_utl.c",0x94,uVar3);
    }
    return _Dst != (void *)0x0;
  }
  return true;
}

// asn1_get_choice_selector @ 14f75eb60

undefined4 asn1_get_choice_selector(longlong *param_1,longlong param_2)

{
  return *(undefined4 *)((longlong)*(int *)(param_2 + 4) + *param_1);
}

// asn1_get_field_ptr @ 14f75ebb0

longlong asn1_get_field_ptr(longlong *param_1,longlong param_2)

{
  return (ulonglong)*(uint *)(param_2 + 8) + *param_1;
}

// asn1_set_choice_selector @ 14f75ebc0

undefined4 asn1_set_choice_selector(longlong *param_1,undefined4 param_2,longlong param_3)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  
  puVar2 = (undefined4 *)((longlong)*(int *)(param_3 + 4) + *param_1);
  uVar1 = *puVar2;
  *puVar2 = param_2;
  return uVar1;
}

