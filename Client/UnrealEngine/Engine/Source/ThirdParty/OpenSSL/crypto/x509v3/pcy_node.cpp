// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OpenSSL
// Functions: 16

// level_add_node @ 14f76ae60

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong * level_add_node(longlong param_1,longlong param_2,longlong param_3,longlong param_4)

{
  int iVar1;
  longlong *plVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  
  uVar5 = 0x14f76ae80;
  plVar2 = (longlong *)CRYPTO_zalloc(0x18,"crypto\\x509v3\\pcy_node.c",0x42);
  if (plVar2 == (longlong *)0x0) {
    ERR_put_error(0x22,0xa8,0x41,"crypto\\x509v3\\pcy_node.c",0x44,uVar5);
    return (longlong *)0x0;
  }
  *plVar2 = param_2;
  plVar2[1] = param_3;
  if (param_1 == 0) {
LAB_14f76aefc:
    if (param_4 == 0) {
LAB_14f76afaf:
      if (param_3 == 0) {
        return plVar2;
      }
      *(int *)(param_3 + 0x10) = *(int *)(param_3 + 0x10) + 1;
      return plVar2;
    }
    if (*(longlong *)(param_4 + 0x10) == 0) {
      uVar3 = OPENSSL_sk_new_null();
      *(undefined8 *)(param_4 + 0x10) = uVar3;
    }
    if (*(longlong *)(param_4 + 0x10) == 0) {
      uVar4 = 0x61;
    }
    else {
      iVar1 = OPENSSL_sk_push(*(longlong *)(param_4 + 0x10),param_2);
      if (iVar1 != 0) goto LAB_14f76afaf;
      uVar4 = 0x65;
    }
  }
  else {
    iVar1 = OBJ_obj2nid(*(undefined8 *)(param_2 + 8));
    if (iVar1 == 0x2ea) {
      if (*(longlong *)(param_1 + 0x10) != 0) goto LAB_14f76af96;
      *(longlong **)(param_1 + 0x10) = plVar2;
      goto LAB_14f76aefc;
    }
    if (*(longlong *)(param_1 + 8) == 0) {
      uVar3 = OPENSSL_sk_new(FUN_14f76b080);
      *(undefined8 *)(param_1 + 8) = uVar3;
    }
    if (*(longlong *)(param_1 + 8) == 0) {
      uVar4 = 0x53;
    }
    else {
      iVar1 = OPENSSL_sk_push(*(longlong *)(param_1 + 8),plVar2);
      if (iVar1 != 0) goto LAB_14f76aefc;
      uVar4 = 0x57;
    }
  }
  ERR_put_error(0x22,0xa8,0x41,"crypto\\x509v3\\pcy_node.c",uVar4,uVar5);
LAB_14f76af96:
  CRYPTO_free(plVar2,"crypto\\x509v3\\pcy_node.c",0x76);
  return (longlong *)0x0;
}

// level_find_node @ 14f76afe0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong * level_find_node(longlong param_1,longlong param_2,undefined8 param_3)

{
  int iVar1;
  longlong *plVar2;
  int iVar3;
  
  iVar3 = 0;
  iVar1 = OPENSSL_sk_num(*(undefined8 *)(param_1 + 8));
  if (0 < iVar1) {
    do {
      plVar2 = (longlong *)OPENSSL_sk_value(*(undefined8 *)(param_1 + 8),iVar3);
      if ((plVar2[1] == param_2) &&
         (iVar1 = OBJ_cmp(*(undefined8 *)(*plVar2 + 8),param_3), iVar1 == 0)) {
        return plVar2;
      }
      iVar3 = iVar3 + 1;
      iVar1 = OPENSSL_sk_num(*(undefined8 *)(param_1 + 8));
    } while (iVar3 < iVar1);
  }
  return (longlong *)0x0;
}

// FUN_14f76b080 @ 14f76b080

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f76b080(undefined8 *param_1,undefined8 *param_2)

{
  OBJ_cmp(*(undefined8 *)(*(longlong *)*param_1 + 8),*(undefined8 *)(*(longlong *)*param_2 + 8));
  return;
}

// policy_node_cmp_new @ 14f76b0b0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void policy_node_cmp_new(void)

{
  OPENSSL_sk_new(FUN_14f76b080);
  return;
}

// policy_node_free @ 14f76b0e0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void policy_node_free(undefined8 param_1)

{
  CRYPTO_free(param_1,"crypto\\x509v3\\pcy_node.c",0x76);
  return;
}

// policy_node_match @ 14f76b110

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

bool policy_node_match(longlong param_1,undefined8 *param_2,undefined8 param_3)

{
  byte *pbVar1;
  int iVar2;
  undefined8 uVar3;
  int iVar4;
  
  pbVar1 = (byte *)*param_2;
  if (((*(uint *)(param_1 + 0x18) & 0x400) == 0) && ((*pbVar1 & 3) != 0)) {
    iVar4 = 0;
    iVar2 = OPENSSL_sk_num(*(undefined8 *)(pbVar1 + 0x18));
    if (0 < iVar2) {
      do {
        uVar3 = OPENSSL_sk_value(*(undefined8 *)(pbVar1 + 0x18),iVar4);
        iVar2 = OBJ_cmp(uVar3,param_3);
        if (iVar2 == 0) {
          return true;
        }
        iVar4 = iVar4 + 1;
        iVar2 = OPENSSL_sk_num(*(undefined8 *)(pbVar1 + 0x18));
      } while (iVar4 < iVar2);
    }
    return false;
  }
  iVar2 = OBJ_cmp(*(undefined8 *)(pbVar1 + 8),param_3);
  return iVar2 == 0;
}

// FUN_14f76b1d0 @ 14f76b1d0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f76b1d0(void)

{
  OPENSSL_sk_num();
  return;
}

// FUN_14f76b1f0 @ 14f76b1f0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f76b1f0(void)

{
  OPENSSL_sk_value();
  return;
}

// FUN_14f76b210 @ 14f76b210

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f76b210(void)

{
  OPENSSL_sk_new_null();
  return;
}

// FUN_14f76b230 @ 14f76b230

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f76b230(void)

{
  OPENSSL_sk_push();
  return;
}

// FUN_14f76b250 @ 14f76b250

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f76b250(void)

{
  OPENSSL_sk_find();
  return;
}

// FUN_14f76b270 @ 14f76b270

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f76b270(void)

{
  OPENSSL_sk_new();
  return;
}

// FUN_14f76b290 @ 14f76b290

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f76b290(void)

{
  OPENSSL_sk_num();
  return;
}

// FUN_14f76b2b0 @ 14f76b2b0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f76b2b0(void)

{
  OPENSSL_sk_push();
  return;
}

// FUN_14f76b2d0 @ 14f76b2d0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f76b2d0(void)

{
  OPENSSL_sk_value();
  return;
}

// tree_find_sk @ 14f76b2f0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void tree_find_sk(undefined8 param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined1 *local_48 [3];
  undefined1 local_30 [8];
  undefined8 local_28;
  undefined8 uStack_10;
  
  uStack_10 = 0x14f76b2fc;
  local_48[0] = local_30;
  local_28 = param_2;
  uVar1 = OPENSSL_sk_find(param_1,local_48);
  OPENSSL_sk_value(param_1,uVar1);
  return;
}

