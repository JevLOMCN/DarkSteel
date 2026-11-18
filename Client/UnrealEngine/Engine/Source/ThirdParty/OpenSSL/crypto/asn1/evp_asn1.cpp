// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OpenSSL
// Functions: 4

// ASN1_TYPE_get_int_octetstring @ 14f72ac60

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

int ASN1_TYPE_get_int_octetstring(int *param_1,undefined4 *param_2,void *param_3,int param_4)

{
  int iVar1;
  undefined4 *puVar2;
  void *_Src;
  undefined8 uVar3;
  
  uVar3 = 0x14f72ac80;
  puVar2 = (undefined4 *)0x0;
  iVar1 = -1;
  if ((*param_1 == 0x10) && (iVar1 = -1, *(longlong *)(param_1 + 2) != 0)) {
    puVar2 = (undefined4 *)ASN1_TYPE_unpack_sequence(&DAT_1534b8600,param_1);
    if (puVar2 != (undefined4 *)0x0) {
      if (param_2 != (undefined4 *)0x0) {
        *param_2 = *puVar2;
      }
      iVar1 = ASN1_STRING_length(*(undefined8 *)(puVar2 + 2));
      if (iVar1 < param_4) {
        param_4 = iVar1;
      }
      if (param_3 != (void *)0x0) {
        _Src = (void *)ASN1_STRING_get0_data(*(undefined8 *)(puVar2 + 2));
        memcpy(param_3,_Src,(longlong)param_4);
      }
      if (iVar1 != -1) goto LAB_14f72ad10;
    }
  }
  ERR_put_error(0xd,0x86,0x6d,"crypto\\asn1\\evp_asn1.c",0x6f,uVar3);
LAB_14f72ad10:
  ASN1_item_free(puVar2,&DAT_1534b8600);
  return iVar1;
}

// ASN1_TYPE_get_octetstring @ 14f72ad50

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

int ASN1_TYPE_get_octetstring(int *param_1,void *param_2,int param_3)

{
  int iVar1;
  void *_Src;
  
  if ((*param_1 == 4) && (*(longlong *)(param_1 + 2) != 0)) {
    _Src = (void *)ASN1_STRING_get0_data();
    iVar1 = ASN1_STRING_length(*(undefined8 *)(param_1 + 2));
    if (iVar1 < param_3) {
      param_3 = iVar1;
    }
    memcpy(param_2,_Src,(longlong)param_3);
    return iVar1;
  }
  ERR_put_error(0xd,0x87,0x6d,"crypto\\asn1\\evp_asn1.c",0x24,0x14f72ad65);
  return -1;
}

// ASN1_TYPE_set_int_octetstring @ 14f72ae00

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

bool ASN1_TYPE_set_int_octetstring
               (undefined8 param_1,undefined4 param_2,undefined8 param_3,undefined4 param_4)

{
  longlong lVar1;
  undefined8 local_res8 [4];
  undefined4 local_38 [2];
  undefined4 *local_30;
  undefined4 local_28;
  undefined4 local_24;
  undefined8 local_20;
  undefined4 local_18;
  undefined8 uStack_10;
  
  uStack_10 = 0x14f72ae10;
  local_30 = &local_28;
  local_18 = 0;
  local_24 = 4;
  local_res8[0] = param_1;
  local_38[0] = param_2;
  local_28 = param_4;
  local_20 = param_3;
  lVar1 = ASN1_TYPE_pack_sequence(&DAT_1534b8600,local_38,local_res8);
  return lVar1 != 0;
}

// ASN1_TYPE_set_octetstring @ 14f72ae70

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 ASN1_TYPE_set_octetstring(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  int iVar1;
  longlong lVar2;
  
  lVar2 = ASN1_OCTET_STRING_new();
  if (lVar2 != 0) {
    iVar1 = ASN1_OCTET_STRING_set(lVar2,param_2,param_3);
    if (iVar1 != 0) {
      ASN1_TYPE_set(param_1,4,lVar2);
      return 1;
    }
    ASN1_OCTET_STRING_free(lVar2);
  }
  return 0;
}

