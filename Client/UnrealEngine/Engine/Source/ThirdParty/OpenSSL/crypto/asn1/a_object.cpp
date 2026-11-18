// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OpenSSL
// Functions: 9

// ASN1_OBJECT_create @ 14f71d630

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void ASN1_OBJECT_create(undefined4 param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4,
                       undefined8 param_5)

{
  undefined8 local_38;
  undefined8 local_30;
  undefined4 local_28;
  undefined4 local_24;
  undefined8 local_20;
  undefined4 local_18;
  undefined8 uStack_8;
  
  uStack_8 = 0x14f71d63a;
  local_30 = param_5;
  local_18 = 0xd;
  local_38 = param_4;
  local_28 = param_1;
  local_24 = param_3;
  local_20 = param_2;
  OBJ_dup(&local_38);
  return;
}

// ASN1_OBJECT_free @ 14f71d680

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void ASN1_OBJECT_free(undefined8 *param_1)

{
  if (param_1 != (undefined8 *)0x0) {
    if ((*(byte *)(param_1 + 4) & 4) != 0) {
      CRYPTO_free(*param_1,"crypto\\asn1\\a_object.c",0x167);
      CRYPTO_free(param_1[1],"crypto\\asn1\\a_object.c",0x168);
      param_1[1] = 0;
      *param_1 = 0;
    }
    if ((*(byte *)(param_1 + 4) & 8) != 0) {
      CRYPTO_free(param_1[3],"crypto\\asn1\\a_object.c",0x16d);
      param_1[3] = 0;
      *(undefined4 *)((longlong)param_1 + 0x14) = 0;
    }
    if ((*(byte *)(param_1 + 4) & 1) != 0) {
      CRYPTO_free(param_1,"crypto\\asn1\\a_object.c",0x172);
    }
  }
  return;
}

// ASN1_OBJECT_new @ 14f71d730

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong ASN1_OBJECT_new(void)

{
  longlong lVar1;
  
  lVar1 = CRYPTO_zalloc(0x28,"crypto\\asn1\\a_object.c",0x156);
  if (lVar1 == 0) {
    ERR_put_error(0xd,0x7b,0x41,"crypto\\asn1\\a_object.c",0x158);
    return 0;
  }
  *(undefined4 *)(lVar1 + 0x20) = 1;
  return lVar1;
}

// a2d_ASN1_OBJECT @ 14f71d790

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

int a2d_ASN1_OBJECT(longlong param_1,int param_2,char *param_3,uint param_4)

{
  byte *pbVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  undefined1 *puVar6;
  longlong lVar7;
  byte *pbVar8;
  longlong lVar9;
  byte bVar10;
  uint uVar11;
  undefined8 uVar12;
  int iVar13;
  int iVar14;
  ulonglong uVar15;
  undefined1 auStack_a8 [32];
  undefined4 local_88;
  int local_78;
  uint local_74;
  int local_70;
  int local_6c;
  char *local_68;
  longlong local_60;
  undefined1 local_58 [24];
  ulonglong local_40;
  
  local_40 = __security_cookie.value ^ (ulonglong)auStack_a8;
  puVar6 = local_58;
  lVar5 = 0;
  local_78 = 0;
  local_70 = 0x18;
  uVar15 = (ulonglong)param_4;
  if (param_4 == 0) {
    return 0;
  }
  if (param_4 == 0xffffffff) {
    uVar15 = 0xffffffffffffffff;
    do {
      uVar15 = uVar15 + 1;
    } while (param_3[uVar15] != '\0');
  }
  local_74 = (int)*param_3 - 0x30;
  local_6c = param_2;
  local_60 = param_1;
  if (local_74 < 3) {
    if (0 < (int)uVar15 + -1) {
      iVar13 = (int)param_3[1];
      iVar14 = (int)uVar15 + -2;
      local_68 = param_3 + 2;
      if (0 < iVar14) {
        do {
          if ((iVar13 != 0x2e) && (iVar13 != 0x20)) {
            local_88 = 0x57;
            uVar12 = 0x83;
LAB_14f71db05:
            ERR_put_error(0xd,100,uVar12,"crypto\\asn1\\a_object.c");
LAB_14f71db19:
            if (puVar6 != local_58) {
              CRYPTO_free(puVar6,"crypto\\asn1\\a_object.c",0xaf);
            }
            goto LAB_14f71db89;
          }
          uVar15 = 0;
          bVar2 = false;
          while (uVar11 = (uint)uVar15, 0 < iVar14) {
            iVar13 = (int)*local_68;
            iVar14 = iVar14 + -1;
            local_68 = local_68 + 1;
            if ((iVar13 == 0x20) || (iVar13 == 0x2e)) break;
            iVar3 = ossl_ctype_check(iVar13,4);
            if (iVar3 == 0) {
              local_88 = 100;
              uVar12 = 0x82;
              goto LAB_14f71db05;
            }
            if (bVar2) {
LAB_14f71d907:
              iVar3 = BN_mul_word(lVar5,10);
              if ((iVar3 == 0) ||
                 (iVar3 = BN_add_word(lVar5,(longlong)(iVar13 + -0x30)), iVar3 == 0))
              goto LAB_14f71db19;
            }
            else {
              if (0x19999990 < uVar11) {
                bVar2 = true;
                if (((lVar5 != 0) || (lVar5 = BN_new(), lVar5 != 0)) &&
                   (iVar3 = BN_set_word(lVar5,uVar15), iVar3 != 0)) goto LAB_14f71d907;
                goto LAB_14f71db19;
              }
              uVar15 = (ulonglong)(iVar13 + (uVar11 * 5 + -0x18) * 2);
            }
          }
          if (local_78 != 0) goto LAB_14f71d98a;
          if (((int)local_74 < 2) && (0x27 < uVar11)) {
            local_88 = 0x78;
            uVar12 = 0x93;
            goto LAB_14f71db05;
          }
          if (bVar2) {
            iVar3 = BN_add_word(lVar5,(longlong)(int)(local_74 * 0x28));
            if (iVar3 != 0) goto LAB_14f71d98a;
            goto LAB_14f71db19;
          }
          uVar15 = (ulonglong)(uVar11 + local_74 * 0x28);
LAB_14f71d98a:
          iVar3 = 0;
          lVar9 = 0;
          if (bVar2) {
            iVar4 = BN_num_bits(lVar5);
            iVar4 = (iVar4 + 6) / 7;
            if (local_70 < iVar4) {
              if (puVar6 != local_58) {
                CRYPTO_free(puVar6,"crypto\\asn1\\a_object.c",0x88);
              }
              local_70 = iVar4 + 0x20;
              puVar6 = (undefined1 *)
                       CRYPTO_malloc((longlong)local_70,"crypto\\asn1\\a_object.c",0x8a);
              if (puVar6 == (undefined1 *)0x0) goto LAB_14f71db19;
            }
            while (iVar4 != 0) {
              iVar4 = iVar4 + -1;
              lVar7 = BN_div_word(lVar5,0x80);
              if (lVar7 == -1) goto LAB_14f71db19;
              puVar6[lVar9] = (char)lVar7;
              iVar3 = iVar3 + 1;
              lVar9 = lVar9 + 1;
            }
          }
          else {
            do {
              bVar10 = (byte)uVar15;
              iVar3 = iVar3 + 1;
              uVar15 = uVar15 >> 7;
              puVar6[lVar9] = bVar10 & 0x7f;
              lVar9 = lVar9 + 1;
            } while ((int)uVar15 != 0);
          }
          if (local_60 == 0) {
            local_78 = local_78 + iVar3;
          }
          else {
            lVar7 = (longlong)local_78;
            if (local_6c < iVar3 + local_78) {
              local_88 = 0xa0;
              uVar12 = 0x6b;
              goto LAB_14f71db05;
            }
            lVar9 = lVar9 + -1;
            if (0 < lVar9) {
              local_78 = local_78 + (int)lVar9;
              pbVar8 = (byte *)(local_60 + lVar7);
              do {
                pbVar1 = puVar6 + lVar9;
                lVar9 = lVar9 + -1;
                *pbVar8 = *pbVar1 | 0x80;
                pbVar8 = pbVar8 + 1;
              } while (0 < lVar9);
            }
            lVar9 = (longlong)local_78;
            local_78 = local_78 + 1;
            *(undefined1 *)(lVar9 + local_60) = *puVar6;
          }
        } while (0 < iVar14);
        if (puVar6 != local_58) {
          CRYPTO_free(puVar6,"crypto\\asn1\\a_object.c",0xaa);
        }
      }
      BN_free(lVar5);
      return local_78;
    }
    local_88 = 0x4e;
    uVar12 = 0x8a;
  }
  else {
    local_88 = 0x49;
    uVar12 = 0x7a;
  }
  ERR_put_error(0xd,100,uVar12,"crypto\\asn1\\a_object.c");
LAB_14f71db89:
  BN_free(lVar5);
  return 0;
}

// c2i_ASN1_OBJECT @ 14f71dbe0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 * c2i_ASN1_OBJECT(undefined8 *param_1,longlong *param_2,int param_3)

{
  void *_Src;
  int iVar1;
  int iVar2;
  undefined8 *puVar3;
  void *_Dst;
  char *pcVar4;
  size_t _Size;
  undefined1 local_58 [16];
  undefined4 local_48;
  int local_44;
  char *local_40;
  undefined4 local_38;
  
  _Size = (size_t)param_3;
  if ((((param_3 < 1) || (param_2 == (longlong *)0x0)) ||
      (pcVar4 = (char *)*param_2, pcVar4 == (char *)0x0)) || (pcVar4[param_3 + -1] < '\0')) {
    ERR_put_error(0xd,0xc4,0xd8,"crypto\\asn1\\a_object.c",0xfe);
    return (undefined8 *)0x0;
  }
  iVar2 = 0;
  local_48 = 0;
  local_38 = 0;
  local_44 = param_3;
  local_40 = pcVar4;
  iVar1 = OBJ_obj2nid(local_58);
  if (iVar1 == 0) {
    if (0 < param_3) {
      do {
        if ((*pcVar4 == -0x80) && ((iVar2 == 0 || (-1 < pcVar4[-1])))) {
          ERR_put_error(0xd,0xc4,0xd8,"crypto\\asn1\\a_object.c",0x11c);
          goto LAB_14f71dd98;
        }
        iVar2 = iVar2 + 1;
        pcVar4 = pcVar4 + 1;
      } while (iVar2 < param_3);
    }
    if ((((param_1 == (undefined8 *)0x0) ||
         (puVar3 = (undefined8 *)*param_1, puVar3 == (undefined8 *)0x0)) ||
        ((*(byte *)(puVar3 + 4) & 1) == 0)) &&
       (puVar3 = (undefined8 *)ASN1_OBJECT_new(), puVar3 == (undefined8 *)0x0)) {
LAB_14f71dd98:
      puVar3 = (undefined8 *)0x0;
    }
    else {
      _Src = (void *)*param_2;
      _Dst = (void *)puVar3[3];
      puVar3[3] = 0;
      if ((_Dst == (void *)0x0) || (*(int *)((longlong)puVar3 + 0x14) < param_3)) {
        *(undefined4 *)((longlong)puVar3 + 0x14) = 0;
        CRYPTO_free(_Dst,"crypto\\asn1\\a_object.c",0x130);
        _Dst = (void *)CRYPTO_malloc(_Size,"crypto\\asn1\\a_object.c",0x131);
        if (_Dst == (void *)0x0) {
          ERR_put_error(0xd,0xc4,0x41,"crypto\\asn1\\a_object.c",0x14c);
          if ((param_1 == (undefined8 *)0x0) || ((undefined8 *)*param_1 != puVar3)) {
            ASN1_OBJECT_free(puVar3);
          }
          return (undefined8 *)0x0;
        }
        *(uint *)(puVar3 + 4) = *(uint *)(puVar3 + 4) | 8;
      }
      memcpy(_Dst,_Src,_Size);
      if ((*(byte *)(puVar3 + 4) & 4) != 0) {
        CRYPTO_free(*puVar3,"crypto\\asn1\\a_object.c",0x13b);
        CRYPTO_free(puVar3[1],"crypto\\asn1\\a_object.c",0x13c);
        *(uint *)(puVar3 + 4) = *(uint *)(puVar3 + 4) & 0xfffffffb;
      }
      puVar3[3] = _Dst;
      *(int *)((longlong)puVar3 + 0x14) = param_3;
      *puVar3 = 0;
      puVar3[1] = 0;
      if (param_1 != (undefined8 *)0x0) {
        *param_1 = puVar3;
      }
      *param_2 = (longlong)_Src + _Size;
    }
  }
  else {
    puVar3 = (undefined8 *)OBJ_nid2obj(iVar1);
    if (param_1 != (undefined8 *)0x0) {
      ASN1_OBJECT_free(*param_1);
      *param_1 = puVar3;
    }
    *param_2 = *param_2 + _Size;
  }
  return puVar3;
}

// d2i_ASN1_OBJECT @ 14f71de50

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong d2i_ASN1_OBJECT(undefined8 param_1,undefined8 *param_2,undefined4 param_3)

{
  char cVar1;
  longlong lVar2;
  undefined8 uVar3;
  int local_res10 [4];
  undefined4 local_res20 [2];
  undefined1 local_18 [8];
  undefined8 local_10;
  
  local_10 = *param_2;
  cVar1 = ASN1_get_object(&local_10,local_res20,local_res10,local_18,param_3);
  if (cVar1 < '\0') {
    uVar3 = 0x66;
  }
  else {
    if (local_res10[0] == 6) {
      lVar2 = c2i_ASN1_OBJECT(param_1,&local_10,local_res20[0]);
      if (lVar2 != 0) {
        *param_2 = local_10;
      }
      return lVar2;
    }
    uVar3 = 0x74;
  }
  ERR_put_error(0xd,0x93,uVar3,"crypto\\asn1\\a_object.c",0xeb);
  return 0;
}

// i2a_ASN1_OBJECT @ 14f71df10

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ulonglong i2a_ASN1_OBJECT(undefined8 param_1,longlong param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  undefined1 *puVar4;
  ulonglong uVar5;
  undefined1 auStack_a8 [32];
  undefined4 local_88;
  undefined1 local_78 [80];
  ulonglong local_28;
  undefined8 uStack_20;
  
  uStack_20 = 0x14f71df1e;
  local_28 = __security_cookie.value ^ (ulonglong)auStack_a8;
  puVar4 = local_78;
  if ((param_2 == 0) || (*(longlong *)(param_2 + 0x18) == 0)) {
    uVar5 = BIO_write(param_1,"NULL",4);
  }
  else {
    uVar1 = OBJ_obj2txt(local_78,0x50,param_2);
    if (0x4f < (int)uVar1) {
      puVar4 = (undefined1 *)
               CRYPTO_malloc((longlong)(int)(uVar1 + 1),"crypto\\asn1\\a_object.c",0xc2);
      if (puVar4 == (undefined1 *)0x0) {
        local_88 = 0xc3;
        ERR_put_error(0xd,0x7e,0x41,"crypto\\asn1\\a_object.c");
        return 0xffffffff;
      }
      OBJ_obj2txt(puVar4,uVar1 + 1,param_2,0);
    }
    if ((int)uVar1 < 1) {
      iVar2 = BIO_write(param_1,"<INVALID>",9);
      iVar3 = BIO_dump(param_1,*(undefined8 *)(param_2 + 0x18),*(undefined4 *)(param_2 + 0x14));
      uVar5 = (ulonglong)(uint)(iVar3 + iVar2);
    }
    else {
      BIO_write(param_1,puVar4,uVar1);
      if (puVar4 != local_78) {
        CRYPTO_free(puVar4,"crypto\\asn1\\a_object.c",0xcf);
      }
      uVar5 = (ulonglong)uVar1;
    }
  }
  return uVar5;
}

// i2d_ASN1_OBJECT @ 14f71e080

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

int i2d_ASN1_OBJECT(longlong param_1,longlong *param_2)

{
  int iVar1;
  void *pvVar2;
  void *local_res8;
  undefined8 uVar3;
  
  uVar3 = 0x14f71e096;
  pvVar2 = (void *)0x0;
  if ((param_1 != 0) && (*(longlong *)(param_1 + 0x18) != 0)) {
    iVar1 = ASN1_object_size(0,*(undefined4 *)(param_1 + 0x14),6);
    if ((param_2 != (longlong *)0x0) && (iVar1 != -1)) {
      local_res8 = (void *)*param_2;
      if ((local_res8 == (void *)0x0) &&
         (pvVar2 = (void *)CRYPTO_malloc((longlong)iVar1,"crypto\\asn1\\a_object.c",0x22),
         local_res8 = pvVar2, pvVar2 == (void *)0x0)) {
        ERR_put_error(0xd,0x8f,0x41,"crypto\\asn1\\a_object.c",0x23);
        iVar1 = 0;
      }
      else {
        ASN1_put_object(&local_res8,0,*(undefined4 *)(param_1 + 0x14),6,0,uVar3);
        memcpy(local_res8,*(void **)(param_1 + 0x18),(longlong)*(int *)(param_1 + 0x14));
        if (pvVar2 == (void *)0x0) {
          pvVar2 = (void *)((longlong)*(int *)(param_1 + 0x14) + (longlong)local_res8);
        }
        *param_2 = (longlong)pvVar2;
      }
    }
    return iVar1;
  }
  return 0;
}

// i2t_ASN1_OBJECT @ 14f71e1a0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void i2t_ASN1_OBJECT(void)

{
  OBJ_obj2txt();
  return;
}

