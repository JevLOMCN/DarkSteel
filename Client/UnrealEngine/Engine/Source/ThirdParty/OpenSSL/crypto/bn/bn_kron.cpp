// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OpenSSL
// Functions: 1

// BN_kronecker @ 14f7c7790

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint BN_kronecker(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  byte bVar2;
  int iVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  longlong lVar6;
  ulonglong uVar7;
  uint uVar8;
  ulonglong uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  bool bVar14;
  
  uVar8 = 0xfffffffe;
  uVar9 = 0;
  uVar10 = 0;
  BN_CTX_start(param_3);
  puVar4 = (undefined8 *)BN_CTX_get(param_3);
  puVar5 = (undefined8 *)BN_CTX_get(param_3);
  uVar13 = uVar10;
  if (puVar5 != (undefined8 *)0x0) {
    lVar6 = BN_copy(puVar4,param_1);
    uVar13 = (uint)(lVar6 == 0);
    if (uVar13 == 0) {
      lVar6 = BN_copy(puVar5,param_2);
      uVar13 = (uint)(lVar6 == 0);
      if (uVar13 == 0) {
        iVar3 = BN_is_zero(puVar5);
        if (iVar3 == 0) {
          iVar3 = BN_is_odd(puVar4);
          if ((iVar3 != 0) || (iVar3 = BN_is_odd(puVar5), uVar8 = uVar10, iVar3 != 0)) {
            iVar3 = BN_is_bit_set(puVar5,0);
            uVar7 = uVar9;
            while (iVar3 == 0) {
              uVar10 = (int)uVar7 + 1;
              uVar7 = (ulonglong)uVar10;
              iVar3 = BN_is_bit_set(puVar5,uVar7);
            }
            iVar3 = BN_rshift(puVar5,puVar5,uVar10);
            bVar14 = iVar3 == 0;
            uVar13 = (uint)bVar14;
            uVar8 = 0xfffffffe;
            if (uVar13 == 0) {
              if ((uVar10 & 1) == 0) {
                uVar10 = 1;
              }
              else {
                uVar10 = _DAT_1534f0680;
                if (*(int *)(puVar4 + 1) != 0) {
                  uVar10 = *(uint *)(&DAT_1534f0680 +
                                    (ulonglong)((uint)*(undefined8 *)*puVar4 & 7) * 4);
                }
              }
              if ((*(int *)(puVar5 + 2) != 0) &&
                 (*(undefined4 *)(puVar5 + 2) = 0, *(int *)(puVar4 + 2) != 0)) {
                uVar10 = -uVar10;
              }
              iVar3 = BN_is_zero(puVar4);
              while (puVar1 = puVar4, iVar3 == 0) {
                uVar11 = 0;
                iVar3 = BN_is_bit_set(puVar1,0);
                uVar7 = uVar9;
                uVar12 = uVar11;
                while (iVar3 == 0) {
                  uVar12 = (int)uVar7 + 1;
                  uVar7 = (ulonglong)uVar12;
                  iVar3 = BN_is_bit_set(puVar1,uVar7);
                }
                iVar3 = BN_rshift(puVar1,puVar1,uVar12);
                uVar13 = (uint)(iVar3 == 0);
                uVar8 = uVar10;
                if (uVar13 != 0) goto LAB_14f7c79e7;
                if ((uVar12 & 1) != 0) {
                  if (*(int *)(puVar5 + 1) != 0) {
                    uVar11 = (uint)*(undefined8 *)*puVar5;
                  }
                  uVar10 = uVar10 * *(int *)(&DAT_1534f0680 + (ulonglong)(uVar11 & 7) * 4);
                }
                if (*(int *)(puVar1 + 2) == 0) {
                  uVar7 = uVar9;
                  if (*(int *)(puVar1 + 1) != 0) {
                    uVar7 = *(ulonglong *)*puVar1;
                  }
                }
                else if (*(int *)(puVar1 + 1) == 0) {
                  uVar7 = 0xffffffffffffffff;
                }
                else {
                  uVar7 = ~*(ulonglong *)*puVar1;
                }
                if (*(int *)(puVar5 + 1) == 0) {
                  bVar2 = 0;
                }
                else {
                  bVar2 = (byte)*(undefined8 *)*puVar5;
                }
                uVar8 = -uVar10;
                if ((bVar2 & (byte)uVar7 & 2) == 0) {
                  uVar8 = uVar10;
                }
                iVar3 = BN_nnmod(puVar5,puVar5,puVar1,param_3);
                bVar14 = iVar3 == 0;
                uVar13 = (uint)bVar14;
                if (uVar13 != 0) goto LAB_14f7c79e7;
                *(undefined4 *)(puVar1 + 2) = 0;
                iVar3 = BN_is_zero(puVar5);
                puVar4 = puVar5;
                puVar5 = puVar1;
                uVar10 = uVar8;
              }
              uVar13 = (uint)bVar14;
              iVar3 = BN_is_one(puVar5);
              uVar8 = 0;
              if (iVar3 != 0) {
                uVar8 = uVar10;
              }
            }
          }
        }
        else {
          uVar8 = BN_abs_is_word(puVar4,1);
        }
      }
    }
  }
LAB_14f7c79e7:
  BN_CTX_end(param_3);
  if (uVar13 != 0) {
    uVar8 = 0xfffffffe;
  }
  return uVar8;
}

