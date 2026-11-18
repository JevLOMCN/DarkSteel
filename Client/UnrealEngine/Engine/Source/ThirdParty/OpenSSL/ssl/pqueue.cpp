// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OpenSSL
// Functions: 11

// pitem_free @ 14f66a790

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void pitem_free(undefined8 param_1)

{
  CRYPTO_free(param_1,"ssl\\pqueue.c",0x23);
  return;
}

// pitem_new @ 14f66a7c0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 * pitem_new(undefined8 *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  uVar2 = 0x14f66a7d0;
  puVar1 = (undefined8 *)CRYPTO_malloc(0x18,"ssl\\pqueue.c",0x14);
  if (puVar1 == (undefined8 *)0x0) {
    ERR_put_error(0x14,0x270,0x41,"ssl\\pqueue.c",0x17,uVar2);
    return (undefined8 *)0x0;
  }
  *puVar1 = *param_1;
  puVar1[1] = param_2;
  puVar1[2] = 0;
  return puVar1;
}

// pqueue_find @ 14f66a850

longlong * pqueue_find(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  param_1 = (longlong *)*param_1;
  if (param_1 == (longlong *)0x0) {
    return (longlong *)0x0;
  }
  plVar2 = (longlong *)param_1[2];
  plVar3 = (longlong *)0x0;
  if ((longlong *)param_1[2] != (longlong *)0x0) {
    while (plVar1 = plVar2, plVar3 = param_1, *param_1 != *param_2) {
      param_1 = plVar1;
      plVar2 = (longlong *)plVar1[2];
      if ((longlong *)plVar1[2] == (longlong *)0x0) {
        plVar2 = (longlong *)0x0;
        if (*plVar1 == *param_2) {
          plVar2 = plVar1;
        }
        return plVar2;
      }
    }
  }
  if (*param_1 == *param_2) {
    plVar3 = param_1;
  }
  return plVar3;
}

// pqueue_free @ 14f66a8b0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void pqueue_free(undefined8 param_1)

{
  CRYPTO_free(param_1,"ssl\\pqueue.c",0x32);
  return;
}

// pqueue_insert @ 14f66a8e0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void * pqueue_insert(longlong *param_1,void *param_2)

{
  void *pvVar1;
  int iVar2;
  void *_Buf1;
  void *pvVar3;
  
  if ((void *)*param_1 == (void *)0x0) {
    *param_1 = (longlong)param_2;
    return param_2;
  }
  pvVar1 = (void *)*param_1;
  pvVar3 = (void *)0x0;
  do {
    _Buf1 = pvVar1;
    iVar2 = memcmp(_Buf1,param_2,8);
    if (0 < iVar2) {
      *(void **)((longlong)param_2 + 0x10) = _Buf1;
      if (pvVar3 == (void *)0x0) {
        *param_1 = (longlong)param_2;
        return param_2;
      }
      goto LAB_14f66a957;
    }
    if (iVar2 == 0) {
      return (void *)0x0;
    }
    pvVar1 = *(void **)((longlong)_Buf1 + 0x10);
    pvVar3 = _Buf1;
  } while (*(void **)((longlong)_Buf1 + 0x10) != (void *)0x0);
  *(undefined8 *)((longlong)param_2 + 0x10) = 0;
LAB_14f66a957:
  *(void **)((longlong)pvVar3 + 0x10) = param_2;
  return param_2;
}

// pqueue_iterator @ 14f66a990

undefined8 pqueue_iterator(undefined8 *param_1)

{
  return *param_1;
}

// pqueue_new @ 14f66a9a0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong pqueue_new(void)

{
  longlong lVar1;
  undefined8 uVar2;
  
  uVar2 = 0x14f66a9ac;
  lVar1 = CRYPTO_zalloc(0x10,"ssl\\pqueue.c",0x28);
  if (lVar1 == 0) {
    ERR_put_error(0x14,0x271,0x41,"ssl\\pqueue.c",0x2b,uVar2);
  }
  return lVar1;
}

// pqueue_next @ 14f66aa00

longlong pqueue_next(longlong *param_1)

{
  longlong lVar1;
  
  if (param_1 != (longlong *)0x0) {
    lVar1 = *param_1;
    if (lVar1 != 0) {
      *param_1 = *(longlong *)(lVar1 + 0x10);
      return lVar1;
    }
  }
  return 0;
}

// pqueue_peek @ 14f66aa20

undefined8 pqueue_peek(undefined8 *param_1)

{
  return *param_1;
}

// pqueue_pop @ 14f66aa30

void pqueue_pop(longlong *param_1)

{
  if (*param_1 != 0) {
    *param_1 = *(longlong *)(*param_1 + 0x10);
  }
  return;
}

// pqueue_size @ 14f66aa50

longlong pqueue_size(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar2 = 0;
  for (lVar1 = *param_1; lVar1 != 0; lVar1 = *(longlong *)(lVar1 + 0x10)) {
    lVar2 = lVar2 + 1;
  }
  return lVar2;
}

