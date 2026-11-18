// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OpenSSL
// Functions: 16

// TXT_DB_create_index @ 14f746e70

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
TXT_DB_create_index(int *param_1,int param_2,code *param_3,undefined8 param_4,undefined8 param_5)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  int iVar6;
  
  if (*param_1 <= param_2) {
    param_1[8] = 3;
    return 0;
  }
  lVar3 = OPENSSL_LH_new(param_4,param_5);
  if (lVar3 == 0) {
    param_1[8] = 1;
    return 0;
  }
  iVar1 = OPENSSL_sk_num(*(undefined8 *)(param_1 + 2));
  iVar6 = 0;
  if (0 < iVar1) {
    do {
      uVar4 = OPENSSL_sk_value(*(undefined8 *)(param_1 + 2),iVar6);
      if ((param_3 == (code *)0x0) || (iVar2 = (*param_3)(uVar4), iVar2 != 0)) {
        lVar5 = OPENSSL_LH_insert(lVar3,uVar4);
        if (lVar5 != 0) {
          param_1[8] = 2;
          iVar1 = OPENSSL_sk_find(*(undefined8 *)(param_1 + 2),lVar5);
          param_1[9] = iVar1;
          param_1[10] = iVar6;
          OPENSSL_LH_free(lVar3);
          return 0;
        }
        lVar5 = OPENSSL_LH_retrieve(lVar3,uVar4);
        if (lVar5 == 0) {
          param_1[8] = 1;
          OPENSSL_LH_free(lVar3);
          return 0;
        }
      }
      iVar6 = iVar6 + 1;
    } while (iVar6 < iVar1);
  }
  lVar5 = (longlong)param_2 * 8;
  OPENSSL_LH_free(*(undefined8 *)(*(longlong *)(param_1 + 4) + lVar5));
  *(longlong *)(lVar5 + *(longlong *)(param_1 + 4)) = lVar3;
  *(code **)(lVar5 + *(longlong *)(param_1 + 6)) = param_3;
  return 1;
}

// TXT_DB_free @ 14f746fc0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void TXT_DB_free(int *param_1)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  int iVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  longlong lVar7;
  int iVar8;
  undefined8 *puVar9;
  
  if (param_1 != (int *)0x0) {
    if (*(longlong *)(param_1 + 4) != 0) {
      lVar7 = (longlong)(*param_1 + -1);
      if (-1 < *param_1 + -1) {
        do {
          OPENSSL_LH_free(*(undefined8 *)(*(longlong *)(param_1 + 4) + lVar7 * 8));
          lVar7 = lVar7 + -1;
        } while (-1 < lVar7);
      }
      CRYPTO_free(*(undefined8 *)(param_1 + 4),"crypto\\txt_db\\txt_db.c",0x122);
    }
    CRYPTO_free(*(undefined8 *)(param_1 + 6),"crypto\\txt_db\\txt_db.c",0x124);
    if (*(longlong *)(param_1 + 2) != 0) {
      iVar4 = OPENSSL_sk_num();
      while (iVar4 = iVar4 + -1, -1 < iVar4) {
        puVar5 = (undefined8 *)OPENSSL_sk_value(*(undefined8 *)(param_1 + 2),iVar4);
        iVar1 = *param_1;
        puVar2 = (undefined8 *)puVar5[iVar1];
        if (puVar2 == (undefined8 *)0x0) {
          iVar8 = 0;
          if (0 < iVar1) {
            do {
              CRYPTO_free(*puVar5,"crypto\\txt_db\\txt_db.c",0x12f);
              iVar8 = iVar8 + 1;
              puVar5 = puVar5 + 1;
            } while (iVar8 < *param_1);
          }
        }
        else {
          iVar8 = 0;
          puVar9 = puVar5;
          if (0 < iVar1) {
            do {
              puVar3 = (undefined8 *)*puVar9;
              if ((puVar3 < puVar5) || (puVar2 < puVar3)) {
                CRYPTO_free(puVar3,"crypto\\txt_db\\txt_db.c",0x133);
              }
              iVar8 = iVar8 + 1;
              puVar9 = puVar9 + 1;
            } while (iVar8 < *param_1);
          }
        }
        uVar6 = OPENSSL_sk_value(*(undefined8 *)(param_1 + 2),iVar4);
        CRYPTO_free(uVar6,"crypto\\txt_db\\txt_db.c",0x136);
      }
      OPENSSL_sk_free(*(undefined8 *)(param_1 + 2));
    }
    CRYPTO_free(param_1,"crypto\\txt_db\\txt_db.c",0x13a);
  }
  return;
}

// TXT_DB_get_by_index @ 14f747160

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 TXT_DB_get_by_index(int *param_1,int param_2,undefined8 param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  
  if (*param_1 <= param_2) {
    param_1[8] = 3;
    return 0;
  }
  lVar1 = *(longlong *)(*(longlong *)(param_1 + 4) + (longlong)param_2 * 8);
  if (lVar1 == 0) {
    param_1[8] = 4;
    return 0;
  }
  uVar2 = OPENSSL_LH_retrieve(lVar1,param_3);
  param_1[8] = 0;
  return uVar2;
}

// TXT_DB_insert @ 14f7471c0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 TXT_DB_insert(int *param_1,undefined8 param_2)

{
  code *pcVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  uint uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  uint uVar8;
  ulonglong uVar9;
  
  uVar6 = 0;
  uVar5 = 0;
  uVar7 = uVar6;
  uVar9 = uVar6;
  if (0 < *param_1) {
    do {
      if ((*(longlong *)(uVar7 + *(longlong *)(param_1 + 4)) != 0) &&
         (((*(code **)(uVar7 + *(longlong *)(param_1 + 6)) == (code *)0x0 ||
           (iVar2 = (**(code **)(uVar7 + *(longlong *)(param_1 + 6)))(param_2), iVar2 != 0)) &&
          (lVar3 = OPENSSL_LH_retrieve(*(undefined8 *)(uVar7 + *(longlong *)(param_1 + 4)),param_2),
          lVar3 != 0)))) {
        *(longlong *)(param_1 + 0xc) = lVar3;
        param_1[8] = 2;
        param_1[9] = (int)uVar9;
        return 0;
      }
      uVar8 = (int)uVar9 + 1;
      uVar7 = uVar7 + 8;
      uVar9 = (ulonglong)uVar8;
    } while ((int)uVar8 < *param_1);
  }
  uVar7 = uVar6;
  if (0 < *param_1) {
    do {
      uVar5 = (uint)uVar6;
      if ((*(longlong *)(uVar7 + *(longlong *)(param_1 + 4)) != 0) &&
         ((*(code **)(uVar7 + *(longlong *)(param_1 + 6)) == (code *)0x0 ||
          (iVar2 = (**(code **)(uVar7 + *(longlong *)(param_1 + 6)))(param_2), iVar2 != 0)))) {
        OPENSSL_LH_insert(*(undefined8 *)(uVar7 + *(longlong *)(param_1 + 4)),param_2);
        lVar3 = OPENSSL_LH_retrieve(*(undefined8 *)(uVar7 + *(longlong *)(param_1 + 4)),param_2);
        if (lVar3 == 0) goto LAB_14f7472a0;
      }
      uVar5 = uVar5 + 1;
      uVar6 = (ulonglong)uVar5;
      uVar7 = uVar7 + 8;
    } while ((int)uVar5 < *param_1);
  }
  iVar2 = OPENSSL_sk_push(*(undefined8 *)(param_1 + 2),param_2);
  if (iVar2 == 0) {
LAB_14f7472a0:
    param_1[8] = 1;
    lVar3 = (longlong)(int)uVar5;
    if (0 < (int)uVar5) {
      do {
        lVar3 = lVar3 + -1;
        if ((*(longlong *)(*(longlong *)(param_1 + 4) + lVar3 * 8) != 0) &&
           ((pcVar1 = *(code **)(*(longlong *)(param_1 + 6) + lVar3 * 8), pcVar1 == (code *)0x0 ||
            (iVar2 = (*pcVar1)(param_2), iVar2 != 0)))) {
          OPENSSL_LH_delete(*(undefined8 *)(*(longlong *)(param_1 + 4) + lVar3 * 8),param_2);
        }
      } while (0 < lVar3);
    }
    uVar4 = 0;
  }
  else {
    uVar4 = 1;
  }
  return uVar4;
}

// TXT_DB_read @ 14f747330

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

uint * TXT_DB_read(undefined8 param_1,uint param_2)

{
  uint *puVar1;
  uint *puVar2;
  uint *puVar3;
  uint *puVar4;
  char cVar5;
  uint uVar6;
  int iVar7;
  longlong lVar8;
  longlong lVar9;
  uint *puVar10;
  uint *puVar11;
  longlong lVar12;
  undefined8 *puVar13;
  char *pcVar14;
  ulonglong uVar15;
  char *pcVar16;
  char *pcVar17;
  int iVar18;
  longlong lVar19;
  uint *puVar20;
  int iVar21;
  int iVar22;
  bool bVar23;
  
  lVar19 = (longlong)(int)param_2;
  iVar22 = 0x200;
  lVar8 = BUF_MEM_new();
  puVar10 = (uint *)0x0;
  if (((lVar8 != 0) && (lVar9 = BUF_MEM_grow(lVar8,0x200), puVar10 = (uint *)0x0, lVar9 != 0)) &&
     (puVar10 = (uint *)CRYPTO_malloc(0x38,"crypto\\txt_db\\txt_db.c",0x24), puVar10 != (uint *)0x0)
     ) {
    puVar1 = puVar10 + 4;
    puVar10[6] = 0;
    puVar10[7] = 0;
    puVar2 = puVar10 + 6;
    puVar1[0] = 0;
    puVar1[1] = 0;
    *puVar10 = param_2;
    lVar9 = OPENSSL_sk_new_null();
    *(longlong *)(puVar10 + 2) = lVar9;
    if (lVar9 != 0) {
      lVar9 = CRYPTO_malloc(lVar19 * 8,"crypto\\txt_db\\txt_db.c",0x2b);
      *(longlong *)puVar1 = lVar9;
      if (lVar9 != 0) {
        puVar11 = (uint *)CRYPTO_malloc(lVar19 * 8,"crypto\\txt_db\\txt_db.c",0x2d);
        *(uint **)puVar2 = puVar11;
        if (puVar11 != (uint *)0x0) {
          iVar18 = 0;
          iVar21 = 0;
          if ((0 < (int)param_2) && (1 < param_2)) {
            puVar20 = *(uint **)puVar1;
            puVar3 = puVar20 + (longlong)(int)(param_2 - 1) * 2;
            puVar4 = puVar11 + (longlong)(int)(param_2 - 1) * 2;
            if (((((puVar3 < puVar11) || (puVar4 < puVar20)) &&
                 ((iVar21 = iVar18, puVar1 < puVar11 || (puVar4 < puVar1)))) &&
                ((puVar2 < puVar11 || (puVar4 < puVar2)))) &&
               (((puVar1 < puVar20 || (puVar3 < puVar1)) &&
                ((puVar2 < puVar20 || (puVar3 < puVar2)))))) {
              uVar6 = param_2 & 0x80000001;
              if ((int)uVar6 < 0) {
                uVar6 = (uVar6 - 1 | 0xfffffffe) + 1;
              }
              iVar21 = 0;
              do {
                iVar21 = iVar21 + 2;
              } while (iVar21 < (int)(param_2 - uVar6));
              uVar15 = (ulonglong)((int)((param_2 - uVar6) + 1) / 2);
              for (lVar9 = (uVar15 & 0xfffffffffffffff) << 1; lVar9 != 0; lVar9 = lVar9 + -1) {
                puVar20[0] = 0;
                puVar20[1] = 0;
                puVar20 = puVar20 + 2;
              }
              for (lVar9 = (uVar15 & 0xfffffffffffffff) << 1; lVar9 != 0; lVar9 = lVar9 + -1) {
                puVar11[0] = 0;
                puVar11[1] = 0;
                puVar11 = puVar11 + 2;
              }
            }
          }
          for (lVar9 = (longlong)iVar21; lVar9 < lVar19; lVar9 = lVar9 + 1) {
            *(undefined8 *)(*(longlong *)puVar1 + lVar9 * 8) = 0;
            *(undefined8 *)(*(longlong *)puVar2 + lVar9 * 8) = 0;
          }
          iVar18 = param_2 * 8 + 8;
          iVar21 = 0;
          *(undefined1 *)(*(longlong *)(lVar8 + 8) + 0x1ff) = 0;
          do {
            do {
              do {
                if (iVar21 != 0) {
                  iVar22 = iVar22 + 0x200;
                  lVar9 = BUF_MEM_grow_clean(lVar8,(longlong)iVar22);
                  if (lVar9 == 0) goto LAB_14f74762e;
                }
                lVar9 = (longlong)iVar21;
                *(undefined1 *)(lVar9 + *(longlong *)(lVar8 + 8)) = 0;
                BIO_gets(param_1,*(longlong *)(lVar8 + 8) + lVar9,iVar22 - iVar21);
                pcVar16 = *(char **)(lVar8 + 8);
                if (pcVar16[lVar9] == '\0') {
                  BUF_MEM_free(lVar8);
                  return puVar10;
                }
              } while ((iVar21 == 0) && (*pcVar16 == '#'));
              lVar12 = -1;
              do {
                lVar12 = lVar12 + 1;
              } while (pcVar16[lVar12 + lVar9] != '\0');
              iVar21 = iVar21 + (int)lVar12;
            } while (pcVar16[iVar21 + -1] != '\n');
            pcVar16[iVar21 + -1] = '\0';
            puVar13 = (undefined8 *)
                      CRYPTO_malloc((longlong)(iVar21 + iVar18),"crypto\\txt_db\\txt_db.c");
            if (puVar13 == (undefined8 *)0x0) goto LAB_14f74762e;
            pcVar14 = (char *)((longlong)puVar13 + (longlong)iVar18);
            iVar21 = 0;
            bVar23 = false;
            *puVar13 = pcVar14;
            pcVar16 = *(char **)(lVar8 + 8);
            lVar9 = 1;
            cVar5 = *pcVar16;
            while (pcVar17 = pcVar16, cVar5 != '\0') {
              if (cVar5 == '\t') {
                if (bVar23) {
                  pcVar14 = pcVar14 + -1;
                  goto LAB_14f7475d1;
                }
                *pcVar14 = '\0';
                pcVar17 = pcVar16 + 1;
                pcVar14 = pcVar14 + 1;
                if (lVar19 <= lVar9) break;
                puVar13[lVar9] = pcVar14;
                lVar9 = lVar9 + 1;
                bVar23 = false;
              }
              else {
LAB_14f7475d1:
                *pcVar14 = cVar5;
                bVar23 = cVar5 == '\\';
                pcVar14 = pcVar14 + 1;
              }
              pcVar16 = pcVar16 + 1;
              cVar5 = *pcVar16;
            }
            *pcVar14 = '\0';
            if ((lVar9 != lVar19) || (*pcVar17 != '\0')) {
              CRYPTO_free(puVar13,"crypto\\txt_db\\txt_db.c",0x69);
              puVar10[8] = 6;
              goto LAB_14f74762e;
            }
            puVar13[lVar9] = pcVar14 + 1;
            iVar7 = OPENSSL_sk_push(*(undefined8 *)(puVar10 + 2),puVar13);
          } while (iVar7 != 0);
          CRYPTO_free(puVar13,"crypto\\txt_db\\txt_db.c",0x6f);
        }
      }
    }
  }
LAB_14f74762e:
  BUF_MEM_free(lVar8);
  if (puVar10 != (uint *)0x0) {
    OPENSSL_sk_free(*(undefined8 *)(puVar10 + 2));
    CRYPTO_free(*(undefined8 *)(puVar10 + 4),"crypto\\txt_db\\txt_db.c",0x79);
    CRYPTO_free(*(undefined8 *)(puVar10 + 6),"crypto\\txt_db\\txt_db.c",0x7a);
    CRYPTO_free(puVar10,"crypto\\txt_db\\txt_db.c",0x7b);
  }
  return (uint *)0x0;
}

// TXT_DB_write @ 14f747700

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

int TXT_DB_write(undefined8 param_1,int *param_2)

{
  char cVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  char *pcVar8;
  longlong lVar9;
  int iVar10;
  char *pcVar11;
  int iVar12;
  longlong lVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  
  iVar14 = 0;
  iVar15 = -1;
  lVar5 = BUF_MEM_new();
  iVar16 = iVar15;
  if (lVar5 != 0) {
    iVar3 = OPENSSL_sk_num(*(undefined8 *)(param_2 + 2));
    lVar13 = (longlong)*param_2;
    iVar12 = 0;
    iVar16 = iVar14;
    if (0 < iVar3) {
      do {
        lVar6 = OPENSSL_sk_value(*(undefined8 *)(param_2 + 2));
        lVar9 = 0;
        if (0 < lVar13) {
          do {
            lVar2 = *(longlong *)(lVar6 + lVar9 * 8);
            if (lVar2 != 0) {
              lVar7 = -1;
              do {
                lVar7 = lVar7 + 1;
              } while (*(char *)(lVar2 + lVar7) != '\0');
            }
            lVar9 = lVar9 + 1;
          } while (lVar9 < lVar13);
        }
        lVar9 = BUF_MEM_grow_clean(lVar5);
        iVar16 = iVar15;
        if (lVar9 == 0) break;
        pcVar11 = *(char **)(lVar5 + 8);
        lVar9 = 0;
        if (0 < lVar13) {
          do {
            pcVar8 = *(char **)(lVar6 + lVar9 * 8);
            if (pcVar8 != (char *)0x0) {
              cVar1 = *pcVar8;
              while (cVar1 != '\0') {
                if (cVar1 == '\t') {
                  *pcVar11 = '\\';
                  pcVar11 = pcVar11 + 1;
                }
                cVar1 = *pcVar8;
                pcVar8 = pcVar8 + 1;
                *pcVar11 = cVar1;
                pcVar11 = pcVar11 + 1;
                cVar1 = *pcVar8;
              }
            }
            *pcVar11 = '\t';
            lVar9 = lVar9 + 1;
            pcVar11 = pcVar11 + 1;
          } while (lVar9 < lVar13);
        }
        pcVar11[-1] = '\n';
        iVar10 = (int)pcVar11 - *(int *)(lVar5 + 8);
        iVar4 = BIO_write(param_1,*(undefined8 *)(lVar5 + 8));
        if (iVar4 != iVar10) break;
        iVar14 = iVar14 + iVar10;
        iVar12 = iVar12 + 1;
        iVar16 = iVar14;
      } while (iVar12 < iVar3);
    }
  }
  BUF_MEM_free(lVar5);
  return iVar16;
}

// FUN_14f747880 @ 14f747880

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f747880(void)

{
  OPENSSL_LH_delete();
  return;
}

// FUN_14f7478a0 @ 14f7478a0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f7478a0(void)

{
  OPENSSL_LH_free();
  return;
}

// FUN_14f7478c0 @ 14f7478c0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f7478c0(void)

{
  OPENSSL_LH_insert();
  return;
}

// FUN_14f7478e0 @ 14f7478e0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f7478e0(void)

{
  OPENSSL_LH_retrieve();
  return;
}

// FUN_14f747900 @ 14f747900

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f747900(void)

{
  OPENSSL_sk_find();
  return;
}

// FUN_14f747920 @ 14f747920

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f747920(void)

{
  OPENSSL_sk_free();
  return;
}

// FUN_14f747940 @ 14f747940

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f747940(void)

{
  OPENSSL_sk_new_null();
  return;
}

// FUN_14f747960 @ 14f747960

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f747960(void)

{
  OPENSSL_sk_num();
  return;
}

// FUN_14f747980 @ 14f747980

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f747980(void)

{
  OPENSSL_sk_push();
  return;
}

// FUN_14f7479a0 @ 14f7479a0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f7479a0(void)

{
  OPENSSL_sk_value();
  return;
}

