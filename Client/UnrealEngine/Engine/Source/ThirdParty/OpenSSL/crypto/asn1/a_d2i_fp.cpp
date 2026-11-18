// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OpenSSL
// Functions: 5

// ASN1_d2i_bio @ 14f714330

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 ASN1_d2i_bio(undefined8 param_1,code *param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  int iVar2;
  undefined8 uVar3;
  longlong local_18;
  undefined8 local_10;
  
  local_10 = 0x14f71434a;
  uVar3 = 0;
  local_18 = 0;
  iVar2 = asn1_d2i_read_bio(param_3,&local_18);
  lVar1 = local_18;
  if (-1 < iVar2) {
    local_10 = *(undefined8 *)(local_18 + 8);
    uVar3 = (*param_2)(param_4,&local_10,iVar2);
  }
  BUF_MEM_free(lVar1);
  return uVar3;
}

// ASN1_d2i_fp @ 14f7143b0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 ASN1_d2i_fp(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  uVar3 = 0x14f7143d0;
  uVar1 = BIO_s_file();
  lVar2 = BIO_new(uVar1);
  if (lVar2 == 0) {
    ERR_put_error(0xd,0x6d,7,"crypto\\asn1\\a_d2i_fp.c",0x1b,uVar3);
    uVar1 = 0;
  }
  else {
    BIO_ctrl(lVar2,0x6a,0,param_3);
    uVar1 = ASN1_d2i_bio(param_1,param_2,lVar2,param_4);
    BIO_free(lVar2);
  }
  return uVar1;
}

// ASN1_item_d2i_bio @ 14f714470

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 ASN1_item_d2i_bio(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  int iVar2;
  undefined8 uVar3;
  longlong local_res20;
  undefined8 local_18;
  undefined8 uStack_10;
  
  uStack_10 = 0x14f71448a;
  uVar3 = 0;
  local_res20 = 0;
  iVar2 = asn1_d2i_read_bio(param_2,&local_res20);
  lVar1 = local_res20;
  if (-1 < iVar2) {
    local_18 = *(undefined8 *)(local_res20 + 8);
    uVar3 = ASN1_item_d2i(param_3,&local_18,iVar2,param_1);
  }
  BUF_MEM_free(lVar1);
  return uVar3;
}

// ASN1_item_d2i_fp @ 14f714500

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 ASN1_item_d2i_fp(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  uVar3 = 0x14f71451a;
  uVar1 = BIO_s_file();
  lVar2 = BIO_new(uVar1);
  if (lVar2 == 0) {
    ERR_put_error(0xd,0xce,7,"crypto\\asn1\\a_d2i_fp.c",0x52,uVar3);
    uVar1 = 0;
  }
  else {
    BIO_ctrl(lVar2,0x6a,0,param_2);
    uVar1 = ASN1_item_d2i_bio(param_1,lVar2,param_3);
    BIO_free(lVar2);
  }
  return uVar1;
}

// asn1_d2i_read_bio @ 14f7145b0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

ulonglong asn1_d2i_read_bio(undefined8 param_1,longlong *param_2)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  longlong lVar4;
  longlong lVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  undefined8 uVar9;
  int iVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  int local_res18 [2];
  int local_res20 [2];
  undefined4 uVar13;
  undefined1 local_48 [8];
  longlong local_40;
  
  iVar10 = 0;
  lVar4 = BUF_MEM_new();
  if (lVar4 == 0) {
    ERR_put_error(0xd,0x6b,0x41,"crypto\\asn1\\a_d2i_fp.c",0x6e);
    return 0xffffffff;
  }
  ERR_clear_error();
  uVar12 = 0;
  uVar11 = 0;
  do {
    while( true ) {
      uVar6 = uVar12;
      if (uVar12 - uVar11 < 9) {
        uVar7 = (uVar11 - uVar12) + 8;
        if ((uVar12 + uVar7 < uVar12) || (lVar5 = BUF_MEM_grow_clean(lVar4), lVar5 == 0)) {
          uVar13 = 0x78;
          uVar9 = 0x41;
          goto LAB_14f714890;
        }
        iVar2 = BIO_read(param_1,*(longlong *)(lVar4 + 8) + uVar12,uVar7 & 0xffffffff);
        if ((iVar2 < 0) && (uVar12 == uVar11)) {
          uVar13 = 0x7d;
          uVar9 = 0x8e;
          goto LAB_14f714890;
        }
        if ((0 < iVar2) && (uVar6 = (longlong)iVar2 + uVar12, uVar6 < uVar12)) {
          uVar13 = 0x82;
          goto LAB_14f71488a;
        }
      }
      lVar5 = *(longlong *)(lVar4 + 8) + uVar11;
      local_40 = lVar5;
      bVar1 = ASN1_get_object(&local_40,local_res18,local_res20,local_48,(int)uVar6 - (int)uVar11);
      if ((char)bVar1 < '\0') {
        uVar3 = ERR_peek_error();
        if ((uVar3 & 0xfff) != 0x9b) goto LAB_14f7148a4;
        ERR_clear_error();
      }
      uVar12 = uVar11 + (longlong)((int)local_40 - (int)lVar5);
      uVar11 = uVar12;
      if ((bVar1 & 1) == 0) break;
      if (iVar10 == -1) {
        uVar13 = 0x9c;
        uVar9 = 0x7b;
        goto LAB_14f714890;
      }
      iVar10 = iVar10 + 1;
      uVar12 = uVar6;
    }
    if (((iVar10 == 0) || (local_res18[0] != 0)) || (local_res20[0] != 0)) {
      if (uVar6 - uVar12 < (ulonglong)(longlong)local_res18[0]) {
        uVar11 = 0x4000;
        uVar7 = (longlong)local_res18[0] + (uVar12 - uVar6);
        if ((0x7fffffff < uVar7) || (uVar6 + uVar7 < uVar6)) {
          uVar13 = 0xb1;
          goto LAB_14f71488a;
        }
        while (uVar7 != 0) {
          uVar8 = uVar7;
          if (uVar11 < uVar7) {
            uVar8 = uVar11;
          }
          lVar5 = BUF_MEM_grow_clean(lVar4,uVar8 + uVar6);
          if (lVar5 == 0) {
            uVar13 = 0xbe;
            uVar9 = 0x41;
            goto LAB_14f714890;
          }
          uVar7 = uVar7 - uVar8;
          for (; uVar8 != 0; uVar8 = uVar8 - (longlong)iVar2) {
            iVar2 = BIO_read(param_1,*(longlong *)(lVar4 + 8) + uVar6,uVar8 & 0xffffffff);
            if (iVar2 < 1) {
              uVar13 = 0xc6;
              uVar9 = 0x8e;
              goto LAB_14f714890;
            }
            uVar6 = uVar6 + (longlong)iVar2;
          }
          if (uVar11 < 0x3fffffff) {
            uVar11 = uVar11 * 2;
          }
        }
      }
      uVar11 = (longlong)local_res18[0] + uVar12;
      if (uVar11 < uVar12) {
        uVar13 = 0xd5;
        goto LAB_14f71488a;
      }
    }
    else {
      iVar10 = iVar10 + -1;
    }
    uVar12 = uVar6;
  } while (iVar10 != 0);
  if (uVar11 < 0x80000000) {
    *param_2 = lVar4;
    uVar11 = uVar11 & 0xffffffff;
  }
  else {
    uVar13 = 0xe1;
LAB_14f71488a:
    uVar9 = 0x9b;
LAB_14f714890:
    ERR_put_error(0xd,0x6b,uVar9,"crypto\\asn1\\a_d2i_fp.c",uVar13);
LAB_14f7148a4:
    BUF_MEM_free(lVar4);
    uVar11 = 0xffffffff;
  }
  return uVar11;
}

