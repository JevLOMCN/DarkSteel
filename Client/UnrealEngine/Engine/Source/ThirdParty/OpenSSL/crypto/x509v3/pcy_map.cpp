// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OpenSSL
// Functions: 6

// policy_cache_set_mapping @ 14f7748b0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

int policy_cache_set_mapping(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  undefined8 uVar2;
  int iVar3;
  int iVar4;
  undefined8 *puVar5;
  uint *puVar6;
  int iVar7;
  
  plVar1 = *(longlong **)(param_1 + 0xf0);
  iVar7 = 0;
  iVar3 = OPENSSL_sk_num(param_2);
  if (iVar3 == 0) {
LAB_14f7749ff:
    iVar7 = -1;
    *(uint *)(param_1 + 0xd0) = *(uint *)(param_1 + 0xd0) | 0x800;
  }
  else {
    iVar4 = OPENSSL_sk_num(param_2);
    iVar3 = iVar7;
    if (0 < iVar4) {
      do {
        puVar5 = (undefined8 *)OPENSSL_sk_value(param_2,iVar3);
        iVar4 = OBJ_obj2nid(puVar5[1]);
        if ((iVar4 == 0x2ea) || (iVar4 = OBJ_obj2nid(*puVar5), iVar4 == 0x2ea)) goto LAB_14f7749ff;
        puVar6 = (uint *)policy_cache_find_data(plVar1,*puVar5);
        if (puVar6 == (uint *)0x0) {
          if ((uint *)*plVar1 != (uint *)0x0) {
            puVar6 = (uint *)policy_data_new(0,*puVar5,*(uint *)*plVar1 & 0x10);
            if (puVar6 != (uint *)0x0) {
              uVar2 = *(undefined8 *)(*plVar1 + 0x10);
              *puVar6 = *puVar6 | 6;
              *(undefined8 *)(puVar6 + 4) = uVar2;
              iVar4 = OPENSSL_sk_push(plVar1[1],puVar6);
              if (iVar4 != 0) goto LAB_14f7749a3;
              policy_data_free(puVar6);
            }
            goto LAB_14f7749cf;
          }
        }
        else {
          *puVar6 = *puVar6 | 1;
LAB_14f7749a3:
          iVar4 = OPENSSL_sk_push(*(undefined8 *)(puVar6 + 6),puVar5[1]);
          if (iVar4 == 0) goto LAB_14f7749cf;
          puVar5[1] = 0;
        }
        iVar3 = iVar3 + 1;
        iVar4 = OPENSSL_sk_num(param_2);
      } while (iVar3 < iVar4);
    }
    iVar7 = 1;
  }
LAB_14f7749cf:
  OPENSSL_sk_pop_free(param_2,POLICY_MAPPING_free);
  return iVar7;
}

// FUN_14f774a20 @ 14f774a20

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f774a20(void)

{
  OPENSSL_sk_push();
  return;
}

// FUN_14f774a40 @ 14f774a40

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f774a40(void)

{
  OPENSSL_sk_num();
  return;
}

// FUN_14f774a60 @ 14f774a60

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f774a60(void)

{
  OPENSSL_sk_pop_free();
  return;
}

// FUN_14f774a80 @ 14f774a80

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f774a80(void)

{
  OPENSSL_sk_value();
  return;
}

// FUN_14f774aa0 @ 14f774aa0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f774aa0(void)

{
  OPENSSL_sk_push();
  return;
}

