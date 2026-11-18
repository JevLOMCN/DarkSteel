// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OpenSSL
// Functions: 2

// OBJ_cmp @ 14f732be0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void OBJ_cmp(longlong param_1,longlong param_2)

{
  if (*(int *)(param_1 + 0x14) == *(int *)(param_2 + 0x14)) {
    memcmp(*(void **)(param_1 + 0x18),*(void **)(param_2 + 0x18),(longlong)*(int *)(param_1 + 0x14))
    ;
    return;
  }
  return;
}

// OBJ_dup @ 14f732c20

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong * OBJ_dup(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  uVar3 = 0x14f732c2c;
  if (param_1 == (longlong *)0x0) {
    return (longlong *)0x0;
  }
  if ((*(byte *)(param_1 + 4) & 1) == 0) {
    return param_1;
  }
  plVar1 = (longlong *)ASN1_OBJECT_new();
  if (plVar1 == (longlong *)0x0) {
    ERR_put_error(8,0x65,0xd,"crypto\\objects\\obj_lib.c",0x1c,uVar3);
    return (longlong *)0x0;
  }
  *(uint *)(plVar1 + 4) = *(uint *)(param_1 + 4) | 0xd;
  if (0 < *(int *)((longlong)param_1 + 0x14)) {
    lVar2 = CRYPTO_memdup(param_1[3],(longlong)*(int *)((longlong)param_1 + 0x14),
                          "crypto\\objects\\obj_lib.c",0x26);
    plVar1[3] = lVar2;
    if (lVar2 == 0) goto LAB_14f732d10;
  }
  *(undefined4 *)((longlong)plVar1 + 0x14) = *(undefined4 *)((longlong)param_1 + 0x14);
  *(int *)(plVar1 + 2) = (int)param_1[2];
  if (param_1[1] != 0) {
    lVar2 = CRYPTO_strdup(param_1[1],"crypto\\objects\\obj_lib.c",0x2c);
    plVar1[1] = lVar2;
    if (lVar2 == 0) goto LAB_14f732d10;
  }
  if (*param_1 != 0) {
    lVar2 = CRYPTO_strdup(*param_1,"crypto\\objects\\obj_lib.c",0x2f);
    *plVar1 = lVar2;
    if (lVar2 == 0) {
LAB_14f732d10:
      ASN1_OBJECT_free(plVar1);
      ERR_put_error(8,0x65,0x41,"crypto\\objects\\obj_lib.c",0x35,uVar3);
      return (longlong *)0x0;
    }
  }
  return plVar1;
}

