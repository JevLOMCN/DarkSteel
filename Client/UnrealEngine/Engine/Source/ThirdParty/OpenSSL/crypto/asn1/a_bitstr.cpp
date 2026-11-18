// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OpenSSL
// Functions: 5

// ASN1_BIT_STRING_get_bit @ 14f75ec50

bool ASN1_BIT_STRING_get_bit(int *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = (int)(param_2 + (param_2 >> 0x1f & 7U)) >> 3;
  if (((param_1 != (int *)0x0) && (iVar1 + 1 <= *param_1)) && (*(longlong *)(param_1 + 2) != 0)) {
    return (*(byte *)((longlong)iVar1 + *(longlong *)(param_1 + 2)) &
           (byte)(1 << (7 - ((byte)param_2 & 7) & 0x1f))) != 0;
  }
  return false;
}

// ASN1_BIT_STRING_set @ 14f75eca0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void ASN1_BIT_STRING_set(void)

{
  ASN1_STRING_set();
  return;
}

// ASN1_BIT_STRING_set_bit @ 14f75ecc0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 ASN1_BIT_STRING_set_bit(int *param_1,int param_2,int param_3)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  int iVar6;
  
  iVar3 = (int)(param_2 + (param_2 >> 0x1f & 7U)) >> 3;
  bVar2 = (byte)(1 << (7 - ((byte)param_2 & 7) & 0x1f));
  bVar1 = bVar2;
  if (param_3 == 0) {
    bVar1 = 0;
  }
  if (param_1 == (int *)0x0) {
    return 0;
  }
  param_1[4] = param_1[4] & 0xfffffff0;
  iVar6 = iVar3 + 1;
  if ((*param_1 < iVar6) || (*(longlong *)(param_1 + 2) == 0)) {
    if (param_3 == 0) {
      return 1;
    }
    lVar5 = CRYPTO_clear_realloc
                      (*(undefined8 *)(param_1 + 2),(longlong)*param_1,(longlong)iVar6,
                       "crypto\\asn1\\a_bitstr.c",0xa5,0x14f75ecd4);
    if (lVar5 == 0) {
      ERR_put_error(0xd,0xb7,0x41,"crypto\\asn1\\a_bitstr.c",0xa7);
      return 0;
    }
    iVar4 = (iVar3 - *param_1) + 1;
    if (0 < iVar4) {
      memset((void *)(*param_1 + lVar5),0,(longlong)iVar4);
    }
    *(longlong *)(param_1 + 2) = lVar5;
    *param_1 = iVar6;
  }
  *(byte *)((longlong)iVar3 + *(longlong *)(param_1 + 2)) =
       *(byte *)((longlong)iVar3 + *(longlong *)(param_1 + 2)) & ~bVar2 | bVar1;
  if (0 < *param_1) {
    do {
      if (*(char *)((longlong)(*param_1 + -1) + *(longlong *)(param_1 + 2)) != '\0') {
        return 1;
      }
      *param_1 = *param_1 + -1;
    } while (0 < *param_1);
  }
  return 1;
}

// c2i_ASN1_BIT_STRING @ 14f75ee00

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

int * c2i_ASN1_BIT_STRING(longlong *param_1,undefined8 *param_2,int param_3)

{
  byte *pbVar1;
  byte bVar2;
  int *piVar3;
  int *_Dst;
  byte *_Src;
  undefined4 uVar4;
  size_t _Size;
  undefined8 uVar5;
  
  uVar5 = 0x14f75ee22;
  _Dst = (int *)0x0;
  if (param_3 < 1) {
    uVar4 = 0x98;
    piVar3 = _Dst;
  }
  else {
    if (((param_1 == (longlong *)0x0) || (piVar3 = (int *)*param_1, piVar3 == (int *)0x0)) &&
       (piVar3 = (int *)ASN1_BIT_STRING_new(), piVar3 == (int *)0x0)) {
      return (int *)0x0;
    }
    bVar2 = *(byte *)*param_2;
    _Src = (byte *)*param_2 + 1;
    if (bVar2 < 8) {
      piVar3[4] = piVar3[4] & 0xfffffff8;
      piVar3[4] = piVar3[4] | bVar2 | 8;
      if (1 < param_3) {
        _Size = (size_t)(param_3 + -1);
        _Dst = (int *)CRYPTO_malloc(_Size,"crypto\\asn1\\a_bitstr.c",0x75);
        if (_Dst == (int *)0x0) {
          uVar4 = 0x41;
          goto LAB_14f75eeb1;
        }
        memcpy(_Dst,_Src,_Size);
        pbVar1 = (byte *)((longlong)(param_3 + -2) + (longlong)_Dst);
        *pbVar1 = *pbVar1 & -1 << (bVar2 & 0x1f);
        _Src = _Src + _Size;
      }
      *piVar3 = param_3 + -1;
      CRYPTO_free(*(undefined8 *)(piVar3 + 2),"crypto\\asn1\\a_bitstr.c",0x81);
      *(int **)(piVar3 + 2) = _Dst;
      piVar3[1] = 3;
      if (param_1 != (longlong *)0x0) {
        *param_1 = (longlong)piVar3;
      }
      *param_2 = _Src;
      return piVar3;
    }
    uVar4 = 0xdc;
  }
LAB_14f75eeb1:
  ERR_put_error(0xd,0xbd,uVar4,"crypto\\asn1\\a_bitstr.c",0x89,uVar5);
  if ((param_1 == (longlong *)0x0) || ((int *)*param_1 != piVar3)) {
    ASN1_BIT_STRING_free(piVar3);
  }
  return (int *)0x0;
}

// i2c_ASN1_BIT_STRING @ 14f75ef60

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

int i2c_ASN1_BIT_STRING(uint *param_1,longlong *param_2)

{
  uint uVar1;
  ulonglong uVar2;
  byte *pbVar4;
  byte bVar5;
  ulonglong uVar3;
  
  if (param_1 == (uint *)0x0) {
    return 0;
  }
  uVar1 = *param_1;
  uVar2 = (ulonglong)(int)uVar1;
  if (0 < (int)uVar1) {
    if ((param_1[4] & 8) != 0) {
      bVar5 = (byte)param_1[4] & 7;
      goto LAB_14f75f020;
    }
    uVar3 = uVar2;
    do {
      uVar1 = (uint)uVar3;
      if (*(char *)(*(longlong *)(param_1 + 2) + -1 + uVar2) != '\0') break;
      uVar1 = uVar1 - 1;
      uVar3 = (ulonglong)uVar1;
      uVar2 = uVar2 - 1;
    } while (0 < (longlong)uVar2);
    bVar5 = *(byte *)((longlong)(int)(uVar1 - 1) + *(longlong *)(param_1 + 2));
    if ((bVar5 & 1) == 0) {
      if ((bVar5 & 2) == 0) {
        if ((bVar5 & 4) == 0) {
          if ((bVar5 & 8) == 0) {
            if ((bVar5 & 0x10) == 0) {
              if ((bVar5 & 0x20) == 0) {
                if ((bVar5 & 0x40) == 0) {
                  bVar5 = -((bVar5 & 0x80) != 0) & 7;
                }
                else {
                  bVar5 = 6;
                }
              }
              else {
                bVar5 = 5;
              }
            }
            else {
              bVar5 = 4;
            }
          }
          else {
            bVar5 = 3;
          }
        }
        else {
          bVar5 = 2;
        }
      }
      else {
        bVar5 = 1;
      }
      goto LAB_14f75f020;
    }
  }
  bVar5 = 0;
LAB_14f75f020:
  if (param_2 != (longlong *)0x0) {
    pbVar4 = (byte *)*param_2;
    *pbVar4 = bVar5;
    pbVar4 = pbVar4 + 1;
    if (0 < (int)uVar1) {
      memcpy(pbVar4,*(void **)(param_1 + 2),(longlong)(int)uVar1);
      pbVar4 = pbVar4 + (int)uVar1;
      pbVar4[-1] = pbVar4[-1] & -1 << bVar5;
    }
    *param_2 = (longlong)pbVar4;
  }
  return uVar1 + 1;
}

