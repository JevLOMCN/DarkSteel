// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OpenSSL
// Functions: 7

// bn_compute_wNAF @ 14f756480

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined1 * bn_compute_wNAF(longlong *param_1,int param_2,ulonglong *param_3)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  ulonglong uVar6;
  uint uVar7;
  undefined4 uVar8;
  ulonglong uVar9;
  undefined1 *puVar10;
  undefined4 uVar11;
  
  puVar10 = (undefined1 *)0x0;
  iVar3 = BN_is_zero();
  if (iVar3 == 0) {
    if (param_2 - 1U < 7) {
      uVar7 = 1 << ((byte)param_2 & 0x1f);
      uVar2 = uVar7 * 2;
      iVar3 = BN_is_negative();
      cVar1 = '\x01';
      if (iVar3 != 0) {
        cVar1 = -1;
      }
      if ((*param_1 == 0) || ((int)param_1[1] == 0)) {
        uVar11 = 0x37;
      }
      else {
        iVar3 = BN_num_bits(param_1);
        uVar9 = (ulonglong)iVar3;
        puVar10 = (undefined1 *)CRYPTO_malloc(uVar9 + 1,"crypto\\bn\\bn_intern.c",0x3c);
        if (puVar10 == (undefined1 *)0x0) {
          uVar11 = 0x42;
          uVar8 = 0x41;
          goto LAB_14f756660;
        }
        uVar5 = *(uint *)*param_1 & uVar2 - 1;
        uVar6 = 0;
        do {
          if ((uVar5 == 0) && (uVar9 <= (longlong)param_2 + 1 + uVar6)) {
            if (uVar6 <= uVar9 + 1) {
              *param_3 = uVar6;
              return puVar10;
            }
            uVar11 = 0x82;
            goto LAB_14f75665a;
          }
          uVar4 = 0;
          if ((uVar5 & 1) != 0) {
            uVar4 = uVar5;
            if (((uVar7 & uVar5) != 0) &&
               (uVar4 = uVar5 + uVar7 * -2, uVar9 <= (longlong)param_2 + 1 + uVar6)) {
              uVar4 = (int)(uVar2 - 1) >> 1 & uVar5;
            }
            if ((((int)uVar4 <= (int)-uVar7) || ((int)uVar7 <= (int)uVar4)) || ((uVar4 & 1) == 0)) {
              uVar11 = 0x65;
              goto LAB_14f75665a;
            }
            uVar5 = uVar5 - uVar4;
            if (((uVar5 != 0) && (uVar5 != uVar2)) && (uVar5 != uVar7)) {
              uVar11 = 0x71;
              goto LAB_14f75665a;
            }
          }
          puVar10[uVar6] = cVar1 * (char)uVar4;
          uVar6 = uVar6 + 1;
          iVar3 = BN_is_bit_set(param_1,(int)uVar6 + param_2);
          uVar5 = ((int)uVar5 >> 1) + iVar3 * uVar7;
        } while ((int)uVar5 <= (int)uVar2);
        uVar11 = 0x7c;
      }
    }
    else {
      uVar11 = 0x2b;
    }
LAB_14f75665a:
    uVar8 = 0x44;
  }
  else {
    puVar10 = (undefined1 *)CRYPTO_malloc(1,"crypto\\bn\\bn_intern.c",0x1f);
    if (puVar10 != (undefined1 *)0x0) {
      *puVar10 = 0;
      *param_3 = 1;
      return puVar10;
    }
    uVar11 = 0x21;
    uVar8 = 0x41;
    puVar10 = (undefined1 *)0x0;
  }
LAB_14f756660:
  ERR_put_error(3,0x8e,uVar8,"crypto\\bn\\bn_intern.c",uVar11);
  CRYPTO_free(puVar10,"crypto\\bn\\bn_intern.c",0x89);
  return (undefined1 *)0x0;
}

// bn_copy_words @ 14f7566b0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 bn_copy_words(void *param_1,undefined8 *param_2,int param_3)

{
  if (param_3 < *(int *)(param_2 + 1)) {
    return 0;
  }
  memset(param_1,0,(longlong)param_3 << 3);
  if ((void *)*param_2 != (void *)0x0) {
    memcpy(param_1,(void *)*param_2,(longlong)*(int *)(param_2 + 1) << 3);
  }
  return 1;
}

// bn_get_top @ 14f756730

undefined4 bn_get_top(longlong param_1)

{
  return *(undefined4 *)(param_1 + 8);
}

// bn_get_words @ 14f756740

undefined8 bn_get_words(undefined8 *param_1)

{
  return *param_1;
}

// bn_set_all_zero @ 14f756750

void bn_set_all_zero(longlong *param_1)

{
  uint uVar1;
  ulonglong uVar2;
  longlong lVar3;
  
  uVar2 = (ulonglong)(int)param_1[1];
  if ((int)param_1[1] < *(int *)((longlong)param_1 + 0xc)) {
    lVar3 = uVar2 * 8;
    do {
      uVar1 = (int)uVar2 + 1;
      uVar2 = (ulonglong)uVar1;
      *(undefined8 *)(lVar3 + *param_1) = 0;
      lVar3 = lVar3 + 8;
    } while ((int)uVar1 < *(int *)((longlong)param_1 + 0xc));
  }
  return;
}

// bn_set_static_words @ 14f756790

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void bn_set_static_words(undefined8 *param_1,undefined8 param_2,undefined4 param_3)

{
  *(uint *)((longlong)param_1 + 0x14) = *(uint *)((longlong)param_1 + 0x14) | 2;
  *param_1 = param_2;
  *(undefined4 *)(param_1 + 1) = param_3;
  *(undefined4 *)((longlong)param_1 + 0xc) = param_3;
  *(undefined4 *)(param_1 + 2) = 0;
  bn_correct_top();
  return;
}

// bn_set_words @ 14f7567d0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 bn_set_words(undefined8 *param_1,void *param_2,int param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  
  uVar2 = 0x14f7567e5;
  lVar1 = bn_wexpand(param_1,param_3);
  if (lVar1 == 0) {
    ERR_put_error(3,0x90,0x41,"crypto\\bn\\bn_intern.c",0xbf,uVar2);
    return 0;
  }
  memcpy((void *)*param_1,param_2,(longlong)param_3 << 3);
  *(int *)(param_1 + 1) = param_3;
  bn_correct_top(param_1);
  return 1;
}

