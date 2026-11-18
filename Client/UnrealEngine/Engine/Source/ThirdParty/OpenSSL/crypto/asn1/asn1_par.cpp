// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OpenSSL
// Functions: 5

// ASN1_parse @ 14f77fb50

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void ASN1_parse(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  undefined8 local_res10 [3];
  
  local_res10[0] = param_2;
  FUN_14f77fc10(param_1,local_res10,param_3,0,0,param_4,0);
  return;
}

// ASN1_parse_dump @ 14f77fb90

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void ASN1_parse_dump(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
                    undefined4 param_5)

{
  undefined8 local_res10 [3];
  
  local_res10[0] = param_2;
  FUN_14f77fc10(param_1,local_res10,param_3,0,0,param_4,param_5);
  return;
}

// ASN1_tag2str @ 14f77fbd0

char * ASN1_tag2str(uint param_1)

{
  if ((param_1 - 0x102 & 0xfffffff7) == 0) {
    param_1 = param_1 & 0xfffffeff;
  }
  if (param_1 < 0x1f) {
    return (&PTR_s_EOC_1534d9e20)[(int)param_1];
  }
  return "(unknown)";
}

// FUN_14f77fc10 @ 14f77fc10

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined4
FUN_14f77fc10(undefined8 param_1,longlong *param_2,int param_3,int param_4,int param_5,int param_6,
             int param_7)

{
  byte bVar1;
  byte *pbVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  int *piVar8;
  int *piVar9;
  int *piVar10;
  byte *pbVar11;
  byte *pbVar12;
  int local_74;
  byte *local_70;
  uint local_68;
  undefined4 local_64;
  int local_60;
  byte *local_58;
  byte *local_50;
  int local_48;
  int local_44;
  undefined8 local_40;
  byte *local_38;
  
  local_64 = 0;
  local_40 = 0;
  local_60 = 0;
  if (0x80 < param_5) {
    BIO_puts(param_1,"BAD RECURSION DEPTH\n");
    return 0;
  }
  local_38 = (byte *)*param_2 + param_3;
  pbVar11 = (byte *)*param_2;
joined_r0x00014f77fc98:
  local_70 = pbVar11;
  local_50 = pbVar11;
  if (param_3 < 1) {
    local_64 = 1;
LAB_14f7804dc:
    piVar8 = (int *)0x0;
LAB_14f7804de:
    piVar9 = (int *)0x0;
LAB_14f7804e0:
    piVar10 = (int *)0x0;
LAB_14f7804e2:
    ASN1_OBJECT_free(local_40);
    ASN1_OCTET_STRING_free(piVar8);
    ASN1_INTEGER_free(piVar9);
    ASN1_ENUMERATED_free(piVar10);
    *param_2 = (longlong)local_70;
    return local_64;
  }
  uVar3 = ASN1_get_object(&local_70,&local_74,&local_68,&local_44,param_3);
  if ((char)uVar3 < '\0') {
    piVar8 = (int *)0x0;
    piVar9 = (int *)0x0;
    iVar4 = BIO_write(param_1,"Error in encoding\n",0x12);
    piVar10 = (int *)0x0;
    if (0 < iVar4) {
      local_64 = 0;
      piVar10 = (int *)0x0;
    }
    goto LAB_14f7804e2;
  }
  iVar4 = (int)local_70 - (int)pbVar11;
  param_3 = param_3 - iVar4;
  iVar5 = BIO_printf(param_1,"%5ld:",((int)pbVar11 - (int)*param_2) + param_4);
  if (iVar5 < 1) goto LAB_14f7804dc;
  if (uVar3 == 0x21) {
    iVar5 = BIO_printf(param_1,"d=%-2d hl=%ld l=inf  ",param_5,iVar4);
  }
  else {
    iVar5 = BIO_printf(param_1,"d=%-2d hl=%ld l=%4ld ",param_5,iVar4,local_74);
  }
  if (iVar5 < 1) goto LAB_14f7804dc;
  iVar5 = 0;
  if (param_6 != 0) {
    iVar5 = param_5;
  }
  iVar5 = FUN_14f780540(param_1,local_68,local_44,uVar3,iVar5);
  pbVar2 = local_70;
  if (iVar5 == 0) goto LAB_14f7804dc;
  if ((uVar3 & 0x20) != 0) {
    pbVar12 = local_70 + local_74;
    iVar4 = BIO_write(param_1,"\n",1);
    pbVar11 = local_38;
    if (0 < iVar4) {
      if (local_74 <= param_3) {
        if ((uVar3 == 0x21) && (local_74 == 0)) {
          do {
            iVar4 = FUN_14f77fc10(param_1,&local_70,(int)pbVar11 - (int)local_70,
                                  ((int)local_70 - (int)*param_2) + param_4,param_5 + 1,param_6,
                                  param_7);
            if (iVar4 == 0) goto LAB_14f7804a3;
            local_50 = local_70;
          } while ((iVar4 != 2) && (local_70 < pbVar11));
          local_74 = (int)local_70 - (int)pbVar2;
        }
        else {
          local_50 = local_70;
          if (local_70 < pbVar12) {
            iVar4 = local_74;
            do {
              local_50 = local_70;
              iVar5 = FUN_14f77fc10(param_1,&local_70,iVar4,
                                    ((int)local_70 - (int)*param_2) + param_4,param_5 + 1,param_6,
                                    param_7);
              if (iVar5 == 0) goto LAB_14f7804a3;
              iVar5 = (int)local_50 - (int)local_70;
              local_50 = local_70;
              iVar4 = iVar4 + iVar5;
            } while (local_70 < pbVar12);
          }
        }
        goto LAB_14f77fe18;
      }
      BIO_printf(param_1,"length is greater than %ld\n",param_3);
LAB_14f7804a3:
      local_64 = 0;
    }
    goto LAB_14f7804dc;
  }
  if (local_44 != 0) {
    local_70 = local_70 + local_74;
    iVar4 = BIO_write(param_1,"\n",1);
    if (0 < iVar4) {
      local_50 = local_70;
      goto LAB_14f77fe18;
    }
    goto LAB_14f7804dc;
  }
  local_48 = 0;
  if ((local_68 < 0x1b) && ((0x5dc1000U >> (local_68 & 0x1f) & 1) != 0)) {
    iVar5 = BIO_write(param_1,":",1);
    if ((0 < iVar5) && ((local_74 < 1 || (iVar5 = BIO_write(param_1,local_70), iVar5 == local_74))))
    goto LAB_14f7803c1;
    goto LAB_14f7804dc;
  }
  if (local_68 == 6) {
    local_58 = pbVar11;
    lVar7 = d2i_ASN1_OBJECT(&local_40,&local_58,local_74 + iVar4);
    if (lVar7 == 0) {
      iVar5 = BIO_puts(param_1,":BAD OBJECT");
      if (0 < iVar5) goto LAB_14f7803cf;
    }
    else {
      iVar5 = BIO_write(param_1,":",1);
      if (0 < iVar5) {
        i2a_ASN1_OBJECT(param_1,local_40);
        goto LAB_14f7803c1;
      }
    }
    goto LAB_14f7804dc;
  }
  if (local_68 == 1) {
    if (local_74 != 1) {
      iVar5 = BIO_puts(param_1,":BAD BOOLEAN");
      if (iVar5 < 1) goto LAB_14f7804dc;
      local_60 = 1;
    }
    if (0 < local_74) {
      BIO_printf(param_1,":%u",*local_70);
    }
  }
  else if (local_68 != 0x1e) {
    if (local_68 == 4) {
      local_58 = pbVar11;
      piVar8 = (int *)d2i_ASN1_OCTET_STRING(0,&local_58,local_74 + iVar4);
      if ((piVar8 != (int *)0x0) && (0 < *piVar8)) {
        local_58 = *(byte **)(piVar8 + 2);
        if (0 < (longlong)*piVar8) {
          pbVar11 = local_58;
          do {
            bVar1 = *pbVar11;
            if (((bVar1 < 0x20) && ((0xffffd9ffU >> (bVar1 & 0x1f) & 1) != 0)) || (0x7e < bVar1)) {
              if (param_7 == 0) {
                iVar5 = BIO_write(param_1,"[HEX DUMP]:",0xb);
                if (iVar5 < 1) goto LAB_14f7804de;
                iVar5 = 0;
                lVar7 = 0;
                if (0 < *piVar8) goto LAB_14f7800e0;
                goto LAB_14f7800a4;
              }
              iVar5 = BIO_write(param_1,"\n",1);
              if (iVar5 < 1) goto LAB_14f7804de;
              if ((param_7 == -1) || (iVar5 = param_7, *piVar8 < param_7)) {
                iVar5 = *piVar8;
              }
              iVar5 = BIO_dump_indent(param_1,local_58,iVar5,6);
              if (iVar5 < 1) goto LAB_14f7804de;
              local_48 = 1;
              ASN1_OCTET_STRING_free(piVar8);
              goto LAB_14f7803c1;
            }
            pbVar11 = pbVar11 + 1;
          } while ((longlong)pbVar11 - (longlong)local_58 < (longlong)*piVar8);
        }
        iVar5 = BIO_write(param_1,":",1);
        if ((iVar5 < 1) || (iVar5 = BIO_write(param_1,local_58,*piVar8), iVar5 < 1))
        goto LAB_14f7804de;
      }
LAB_14f7800a4:
      ASN1_OCTET_STRING_free(piVar8);
    }
    else {
      if (local_68 == 2) {
        local_58 = pbVar11;
        piVar9 = (int *)d2i_ASN1_INTEGER(0,&local_58,iVar4 + local_74);
        if (piVar9 == (int *)0x0) {
          iVar5 = BIO_puts(param_1,":BAD INTEGER");
          if (0 < iVar5) {
            local_60 = 1;
LAB_14f780253:
            ASN1_INTEGER_free(piVar9);
            goto LAB_14f7803c1;
          }
        }
        else {
          iVar5 = BIO_write(param_1,":",1);
          if ((0 < iVar5) && ((piVar9[1] != 0x102 || (iVar5 = BIO_write(param_1,"-",1), 0 < iVar5)))
             ) {
            iVar5 = 0;
            lVar7 = 0;
            if (0 < *piVar9) {
              do {
                iVar6 = BIO_printf(param_1,"%02X",*(undefined1 *)(*(longlong *)(piVar9 + 2) + lVar7)
                                  );
                if (iVar6 < 1) goto LAB_14f780235;
                iVar5 = iVar5 + 1;
                lVar7 = lVar7 + 1;
              } while (iVar5 < *piVar9);
            }
            if ((*piVar9 != 0) || (iVar5 = BIO_write(param_1,"00",2), 0 < iVar5))
            goto LAB_14f780253;
          }
        }
LAB_14f780235:
        piVar8 = (int *)0x0;
        goto LAB_14f7804e0;
      }
      if (local_68 == 10) {
        local_58 = pbVar11;
        piVar10 = (int *)d2i_ASN1_ENUMERATED(0,&local_58,local_74 + iVar4);
        if (piVar10 == (int *)0x0) {
          iVar5 = BIO_puts(param_1,":BAD ENUMERATED");
          if (0 < iVar5) {
            local_60 = 1;
            ASN1_ENUMERATED_free(0);
            goto LAB_14f7803c1;
          }
        }
        else {
          iVar5 = BIO_write(param_1,":",1);
          if ((0 < iVar5) &&
             ((piVar10[1] != 0x10a || (iVar5 = BIO_write(param_1,"-",1), 0 < iVar5)))) {
            iVar5 = 0;
            lVar7 = 0;
            if (0 < *piVar10) {
              do {
                iVar6 = BIO_printf(param_1,"%02X",
                                   *(undefined1 *)(lVar7 + *(longlong *)(piVar10 + 2)));
                if (iVar6 < 1) goto LAB_14f7804ac;
                iVar5 = iVar5 + 1;
                lVar7 = lVar7 + 1;
              } while (iVar5 < *piVar10);
            }
            if ((*piVar10 != 0) || (iVar5 = BIO_write(param_1,"00",2), 0 < iVar5)) {
              ASN1_ENUMERATED_free(piVar10);
              goto LAB_14f7803c1;
            }
          }
        }
LAB_14f7804ac:
        piVar8 = (int *)0x0;
        piVar9 = (int *)0x0;
        goto LAB_14f7804e2;
      }
      if ((0 < local_74) && (param_7 != 0)) {
        iVar5 = BIO_write(param_1,"\n",1);
        if (0 < iVar5) {
          iVar5 = local_74;
          if ((param_7 != -1) && (param_7 <= local_74)) {
            iVar5 = param_7;
          }
          iVar5 = BIO_dump_indent(param_1,local_70,iVar5,6);
          if (0 < iVar5) {
            local_48 = 1;
            goto LAB_14f7803c1;
          }
        }
        goto LAB_14f7804dc;
      }
    }
  }
LAB_14f7803c1:
  pbVar11 = local_50;
  if (local_60 != 0) {
LAB_14f7803cf:
    pbVar11 = pbVar11 + iVar4;
    iVar4 = BIO_puts(param_1,":[");
    if (iVar4 < 1) goto LAB_14f7804dc;
    iVar4 = 0;
    if (0 < local_74) {
      do {
        iVar5 = BIO_printf(param_1,"%02X",*pbVar11);
        if (iVar5 < 1) goto LAB_14f7804dc;
        iVar4 = iVar4 + 1;
        pbVar11 = pbVar11 + 1;
      } while (iVar4 < local_74);
    }
    iVar4 = BIO_puts(param_1,"]");
    if (iVar4 < 1) goto LAB_14f7804dc;
    local_60 = 0;
  }
  if ((local_48 == 0) && (iVar4 = BIO_write(param_1,"\n",1), iVar4 < 1)) goto LAB_14f7804dc;
  local_70 = local_70 + local_74;
  local_50 = local_70;
  if ((local_68 == 0) && (local_44 == 0)) {
    local_64 = 2;
    goto LAB_14f7804dc;
  }
LAB_14f77fe18:
  param_3 = param_3 - local_74;
  pbVar11 = local_50;
  goto joined_r0x00014f77fc98;
  while( true ) {
    iVar5 = iVar5 + 1;
    lVar7 = lVar7 + 1;
    if (*piVar8 <= iVar5) break;
LAB_14f7800e0:
    iVar6 = BIO_printf(param_1,"%02X",local_58[lVar7]);
    if (iVar6 < 1) goto LAB_14f7804de;
  }
  ASN1_OCTET_STRING_free(piVar8);
  goto LAB_14f7803c1;
}

// FUN_14f780540 @ 14f780540

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8
FUN_14f780540(undefined8 param_1,int param_2,byte param_3,ulonglong param_4,undefined4 param_5)

{
  int iVar1;
  undefined1 *puVar2;
  char *pcVar3;
  undefined1 auStack_c8 [32];
  undefined1 local_a8 [128];
  ulonglong local_28;
  undefined8 uStack_20;
  
  uStack_20 = 0x14f78054e;
  local_28 = __security_cookie.value ^ (ulonglong)auStack_c8;
  pcVar3 = "cons: ";
  if ((param_4 & 0x20) == 0) {
    pcVar3 = "prim: ";
  }
  iVar1 = BIO_write(param_1,pcVar3,6);
  if (iVar1 < 6) {
    return 0;
  }
  BIO_indent(param_1,param_5,0x80);
  puVar2 = local_a8;
  if ((param_3 & 0xc0) == 0xc0) {
    pcVar3 = "priv [ %d ] ";
  }
  else if ((char)param_3 < '\0') {
    pcVar3 = "cont [ %d ]";
  }
  else if ((param_3 & 0x40) == 0) {
    if (param_2 < 0x1f) {
      puVar2 = (undefined1 *)ASN1_tag2str(param_2);
      goto LAB_14f780612;
    }
    pcVar3 = "<ASN1 %d>";
  }
  else {
    pcVar3 = "appl [ %d ]";
  }
  BIO_snprintf(local_a8,0x80,pcVar3,param_2);
LAB_14f780612:
  iVar1 = BIO_printf(param_1,"%-18s",puVar2);
  if (iVar1 < 1) {
    return 0;
  }
  return 1;
}

