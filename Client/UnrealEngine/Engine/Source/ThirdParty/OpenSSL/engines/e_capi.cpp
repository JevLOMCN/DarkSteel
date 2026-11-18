// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OpenSSL
// Functions: 51

// FUN_14f6fe030 @ 14f6fe030

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f6fe030(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 local_res18;
  undefined8 local_res20;
  
  local_res18 = param_3;
  local_res20 = param_4;
  FUN_14f7018a0(param_1,2,param_2,&local_res18,0x14f6fe049);
  return;
}

// FUN_14f6fe070 @ 14f6fe070

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f6fe070(undefined4 param_1,undefined4 param_2,undefined8 param_3,undefined4 param_4)

{
  undefined8 uVar1;
  
  uVar1 = 0x14f6fe08a;
  if (DAT_1553e2cd0 == 0) {
    DAT_1553e2cd0 = ERR_get_next_error_library();
  }
  ERR_put_error(DAT_1553e2cd0,param_1,param_2,param_3,param_4,uVar1);
  return;
}

// FUN_14f6fe0e0 @ 14f6fe0e0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
FUN_14f6fe0e0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  uVar1 = 0x14f6fe0ea;
  if (DAT_1553e2cd0 == 0) {
    DAT_1553e2cd0 = ERR_get_next_error_library();
  }
  if (DAT_1553e2cd4 == 0) {
    ERR_load_strings(DAT_1553e2cd0,&DAT_154df8fb0,param_3,param_4,uVar1);
    ERR_load_strings(DAT_1553e2cd0,&DAT_154df9100);
    DAT_1553e2cd4 = 1;
  }
  return 1;
}

// FUN_14f6fe150 @ 14f6fe150

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f6fe150(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  if (DAT_1553e2cd4 != 0) {
    ERR_unload_strings(DAT_1553e2cd0,&DAT_154df8fb0,param_3,param_4,0x14f6fe15a);
    ERR_unload_strings(DAT_1553e2cd0,&DAT_154df9100);
    DAT_1553e2cd4 = 0;
  }
  return;
}

// FUN_14f6fe1a0 @ 14f6fe1a0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_14f6fe1a0(undefined8 param_1)

{
  int iVar1;
  
  DAT_1553e2cd8 = RSA_meth_new("CryptoAPI RSA method",0);
  if (DAT_1553e2cd8 != 0) {
    DAT_1553e2ce0 = DSA_meth_new("CryptoAPI DSA method",0);
    if (DAT_1553e2ce0 != 0) {
      iVar1 = ENGINE_set_id(param_1,PTR_s_capi_154df92f0);
      if (iVar1 != 0) {
        iVar1 = ENGINE_set_name(param_1,PTR_s_CryptoAPI_ENGINE_154df92f8);
        if (iVar1 != 0) {
          iVar1 = ENGINE_set_flags(param_1,8);
          if (iVar1 != 0) {
            iVar1 = ENGINE_set_init_function(param_1,FUN_14f700370);
            if (iVar1 != 0) {
              iVar1 = ENGINE_set_finish_function(param_1,FUN_14f6ff7c0);
              if (iVar1 != 0) {
                iVar1 = ENGINE_set_destroy_function(param_1,FUN_14f6fecf0);
                if (iVar1 != 0) {
                  iVar1 = ENGINE_set_RSA(param_1,DAT_1553e2cd8);
                  if (iVar1 != 0) {
                    iVar1 = ENGINE_set_DSA(param_1,DAT_1553e2ce0);
                    if (iVar1 != 0) {
                      iVar1 = ENGINE_set_load_privkey_function(param_1,FUN_14f700dc0);
                      if (iVar1 != 0) {
                        iVar1 = ENGINE_set_load_ssl_client_cert_function(param_1,FUN_14f700e70);
                        if (iVar1 != 0) {
                          iVar1 = ENGINE_set_cmd_defns(param_1,&DAT_1534b1e30);
                          if (iVar1 != 0) {
                            iVar1 = ENGINE_set_ctrl_function(param_1,FUN_14f6fe570);
                            if (iVar1 != 0) {
                              if (DAT_1553e2cd0 == 0) {
                                DAT_1553e2cd0 = ERR_get_next_error_library();
                              }
                              if (DAT_1553e2cd4 == 0) {
                                ERR_load_strings(DAT_1553e2cd0,&DAT_154df8fb0);
                                ERR_load_strings(DAT_1553e2cd0,&DAT_154df9100);
                                DAT_1553e2cd4 = 1;
                              }
                              return 1;
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    RSA_meth_free(DAT_1553e2cd8);
    DAT_1553e2cd8 = 0;
    DSA_meth_free(DAT_1553e2ce0);
    DAT_1553e2ce0 = 0;
  }
  return 0;
}

// FUN_14f6fe380 @ 14f6fe380

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_14f6fe380(undefined4 param_1)

{
  undefined1 auStack_48 [32];
  undefined1 local_28 [16];
  ulonglong local_18;
  undefined8 uStack_8;
  
  uStack_8 = 0x14f6fe38a;
  local_18 = __security_cookie.value ^ (ulonglong)auStack_48;
  BIO_snprintf(local_28,10,"%lX",param_1);
  ERR_add_error_data(2,"Error code= 0x",local_28);
  return;
}

// FUN_14f6fe3f0 @ 14f6fe3f0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_14f6fe3f0(void)

{
  DWORD DVar1;
  undefined1 auStack_48 [32];
  undefined1 local_28 [16];
  ulonglong local_18;
  undefined8 uStack_8;
  
  uStack_8 = 0x14f6fe3fa;
  local_18 = __security_cookie.value ^ (ulonglong)auStack_48;
  DVar1 = GetLastError();
  BIO_snprintf(local_28,10,"%lX",DVar1);
  ERR_add_error_data(2,"Error code= 0x",local_28);
  return;
}

// FUN_14f6fe460 @ 14f6fe460

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_14f6fe460(undefined8 param_1,PCCERT_CONTEXT param_2)

{
  BOOL BVar1;
  void *pvData;
  undefined8 uVar2;
  DWORD local_res18 [4];
  
  FUN_14f6fe030(param_1,"capi_cert_get_fname\n");
  BVar1 = CertGetCertificateContextProperty(param_2,0xb,(void *)0x0,local_res18);
  if (BVar1 == 0) {
    return 0;
  }
  pvData = (void *)CRYPTO_malloc(local_res18[0],"engines\\e_capi.c",0x534);
  if (pvData != (void *)0x0) {
    BVar1 = CertGetCertificateContextProperty(param_2,0xb,pvData,local_res18);
    if (BVar1 != 0) {
      uVar2 = FUN_14f701c20(pvData);
      CRYPTO_free(pvData,"engines\\e_capi.c",0x53a);
      return uVar2;
    }
    if (DAT_1553e2cd0 == 0) {
      DAT_1553e2cd0 = ERR_get_next_error_library();
    }
    ERR_put_error(DAT_1553e2cd0,99,0x6f,"engines\\e_capi.c",0x53d);
    FUN_14f6fe3f0();
    CRYPTO_free(pvData,"engines\\e_capi.c",0x540);
  }
  return 0;
}

// FUN_14f6fe570 @ 14f6fe570

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined4 FUN_14f6fe570(undefined8 param_1,undefined4 param_2,uint param_3,undefined8 param_4)

{
  uint uVar1;
  int iVar2;
  uint *puVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  undefined4 uVar7;
  undefined4 local_28 [2];
  undefined8 local_20;
  
  local_20 = 0x14f6fe584;
  uVar7 = 1;
  if (DAT_154df9300 == -1) {
    if (DAT_1553e2cd0 == 0) {
      DAT_1553e2cd0 = ERR_get_next_error_library();
    }
    ERR_put_error(DAT_1553e2cd0,100,0x6b,"engines\\e_capi.c",0x122);
    return 0;
  }
  puVar3 = (uint *)ENGINE_get_ex_data();
  uVar4 = __acrt_iob_func(1);
  lVar5 = BIO_new_fp(uVar4,0);
  if (lVar5 == 0) {
    if (DAT_1553e2cd0 == 0) {
      DAT_1553e2cd0 = ERR_get_next_error_library();
    }
    ERR_put_error(DAT_1553e2cd0,100,0x73,"engines\\e_capi.c",0x128);
    return 0;
  }
  switch(param_2) {
  case 200:
    uVar7 = capi_list_certs(puVar3,lVar5,0);
    break;
  case 0xc9:
    uVar7 = capi_list_certs(puVar3,lVar5,param_4);
    break;
  case 0xca:
    *puVar3 = param_3;
    FUN_14f6fe030(puVar3,"Setting debug level to %d\n",param_3);
    break;
  case 0xcb:
    lVar6 = CRYPTO_strdup(param_4,"engines\\e_capi.c",0x159);
    if (lVar6 != 0) {
      *(longlong *)(puVar3 + 2) = lVar6;
      FUN_14f6fe030(puVar3,"Setting debug file to %s\n",lVar6);
      break;
    }
    if (DAT_1553e2cd0 == 0) {
      DAT_1553e2cd0 = ERR_get_next_error_library();
    }
    uVar7 = 0x15e;
    uVar4 = 0x41;
    goto LAB_14f6fe8dd;
  case 0xcc:
    puVar3[4] = param_3;
    FUN_14f6fe030(puVar3,"Setting key type to %d\n",param_3);
    break;
  case 0xcd:
    uVar7 = FUN_14f700b20(puVar3,lVar5);
    break;
  case 0xce:
    iVar2 = FUN_14f700160(puVar3,&local_20,local_28,param_3);
    if (iVar2 == 1) {
      uVar7 = FUN_14f6feab0(puVar3,local_20,local_28[0],0);
      CRYPTO_free(local_20,"engines\\e_capi.c",0x688);
      break;
    }
    goto LAB_14f6fe8f0;
  case 0xcf:
    uVar7 = FUN_14f6feab0(puVar3,param_4,puVar3[8],1);
    break;
  case 0xd0:
    puVar3[8] = param_3;
    break;
  case 0xd1:
    uVar7 = FUN_14f700790(puVar3,lVar5);
    break;
  case 0xd2:
    puVar3[0x10] = param_3;
    break;
  case 0xd3:
    if (2 < param_3 - 1) {
      if (DAT_1553e2cd0 == 0) {
        DAT_1553e2cd0 = ERR_get_next_error_library();
      }
      ERR_put_error(DAT_1553e2cd0,100,0x78,"engines\\e_capi.c",0x172);
      BIO_free(lVar5);
      return 0;
    }
    puVar3[0xf] = param_3;
    break;
  case 0xd4:
    lVar6 = CRYPTO_strdup(param_4,"engines\\e_capi.c",0x13d);
    if (lVar6 != 0) {
      CRYPTO_free(*(undefined8 *)(puVar3 + 10),"engines\\e_capi.c",0x13f);
      *(longlong *)(puVar3 + 10) = lVar6;
      FUN_14f6fe030(puVar3,"Setting store name to %s\n",param_4);
      uVar7 = 1;
      break;
    }
    if (DAT_1553e2cd0 == 0) {
      DAT_1553e2cd0 = ERR_get_next_error_library();
    }
    uVar7 = 0x143;
    uVar4 = 0x41;
    goto LAB_14f6fe8dd;
  case 0xd5:
    if ((param_3 & 1) == 0) {
      uVar1 = puVar3[0xe] & 0xfffdffff | 0x10000;
    }
    else {
      uVar1 = puVar3[0xe] & 0xfffeffff | 0x20000;
    }
    puVar3[0xe] = uVar1;
    FUN_14f6fe030(puVar3,"Setting flags to %d\n",param_3);
    uVar7 = 1;
    break;
  default:
    if (DAT_1553e2cd0 == 0) {
      DAT_1553e2cd0 = ERR_get_next_error_library();
    }
    uVar7 = 0x182;
    uVar4 = 0x7d;
LAB_14f6fe8dd:
    ERR_put_error(DAT_1553e2cd0,100,uVar4,"engines\\e_capi.c",uVar7);
LAB_14f6fe8f0:
    uVar7 = 0;
  }
  BIO_free(lVar5);
  return uVar7;
}

// FUN_14f6fe960 @ 14f6fe960

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f6fe960(longlong param_1)

{
  FUN_14f6fe030(param_1,"Calling capi_ctx_free with %lx\n",param_1);
  if (param_1 != 0) {
    CRYPTO_free(*(undefined8 *)(param_1 + 0x18),"engines\\e_capi.c",0x656);
    CRYPTO_free(*(undefined8 *)(param_1 + 8),"engines\\e_capi.c",0x657);
    CRYPTO_free(*(undefined8 *)(param_1 + 0x28),"engines\\e_capi.c",0x658);
    CRYPTO_free(*(undefined8 *)(param_1 + 0x30),"engines\\e_capi.c",0x659);
    CRYPTO_free(param_1,"engines\\e_capi.c",0x65a);
    return;
  }
  return;
}

// FUN_14f6fea10 @ 14f6fea10

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong FUN_14f6fea10(void)

{
  longlong lVar1;
  
  lVar1 = CRYPTO_zalloc(0x60,"engines\\e_capi.c",0x641);
  if (lVar1 == 0) {
    if (DAT_1553e2cd0 == 0) {
      DAT_1553e2cd0 = ERR_get_next_error_library();
    }
    ERR_put_error(DAT_1553e2cd0,0x65,0x41,"engines\\e_capi.c",0x644);
    return 0;
  }
  *(undefined4 *)(lVar1 + 0x20) = 1;
  *(undefined1 **)(lVar1 + 0x48) = &LAB_14f701a10;
  *(undefined4 *)(lVar1 + 0x40) = 3;
  *(undefined4 *)(lVar1 + 0x10) = 1;
  *(undefined4 *)(lVar1 + 0x38) = 0x1c000;
  *(undefined4 *)(lVar1 + 0x3c) = 1;
  return lVar1;
}

// FUN_14f6feab0 @ 14f6feab0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_14f6feab0(longlong param_1,LPCSTR param_2,DWORD param_3,int param_4)

{
  LPCWSTR szProvider;
  uint uVar1;
  BOOL BVar2;
  ulonglong uVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  undefined8 uStackY_50;
  undefined1 auStackY_48 [32];
  HCRYPTPROV local_18;
  ulonglong local_10;
  
  puVar6 = auStackY_48;
  local_10 = __security_cookie.value ^ (ulonglong)&local_18;
  uStackY_50 = 0x14f6feb00;
  FUN_14f6fe030(param_1,"capi_ctx_set_provname, name=%s, type=%d\n",param_2,param_3);
  if (param_4 == 0) {
LAB_14f6feba0:
    *(undefined8 *)(puVar6 + -8) = 0x14f6febb5;
    lVar4 = CRYPTO_strdup(param_2,"engines\\e_capi.c",0x675);
    puVar7 = puVar6;
    if (lVar4 == 0) {
      if (DAT_1553e2cd0 == 0) {
        *(undefined8 *)(puVar6 + -8) = 0x14f6febcc;
        DAT_1553e2cd0 = ERR_get_next_error_library();
      }
      *(undefined4 *)(puVar6 + 0x20) = 0x677;
      *(undefined8 *)(puVar6 + -8) = 0x14f6febf1;
      ERR_put_error(DAT_1553e2cd0,0x66,0x41,"engines\\e_capi.c");
      uVar5 = 0;
    }
    else {
      uVar5 = *(undefined8 *)(param_1 + 0x18);
      *(undefined8 *)(puVar6 + -8) = 0x14f6fec48;
      CRYPTO_free(uVar5,"engines\\e_capi.c",0x67a);
      uVar5 = 1;
      *(longlong *)(param_1 + 0x18) = lVar4;
      *(DWORD *)(param_1 + 0x20) = param_3;
    }
  }
  else {
    uStackY_50 = 0x14f6feb24;
    uVar1 = MultiByteToWideChar(0,0,param_2,-1,(LPWSTR)0x0,0);
    puVar7 = auStackY_48;
    if (uVar1 != 0) {
      uVar3 = (ulonglong)uVar1 * 2 + 0xf;
      if (uVar3 <= (ulonglong)uVar1 * 2) {
        uVar3 = 0xffffffffffffff0;
      }
      uStackY_50 = 0x14f6feb4f;
      lVar4 = -(uVar3 & 0xfffffffffffffff0);
      puVar6 = auStackY_48 + lVar4;
      *(uint *)(&stack0xffffffffffffffe0 + lVar4) = uVar1;
      szProvider = (LPCWSTR)((longlong)&local_18 + lVar4);
      *(LPCWSTR *)(&stack0xffffffffffffffd8 + lVar4) = szProvider;
      *(undefined8 *)(auStackY_48 + lVar4 + -8) = 0x14f6feb71;
      MultiByteToWideChar(0,0,param_2,-1,*(LPWSTR *)(&stack0xffffffffffffffd8 + lVar4),
                          *(int *)(&stack0xffffffffffffffe0 + lVar4));
      puVar7 = auStackY_48 + lVar4;
      if (szProvider != (LPCWSTR)0x0) {
        *(undefined4 *)(&stack0xffffffffffffffd8 + lVar4) = 0xf0000000;
        *(undefined8 *)(auStackY_48 + lVar4 + -8) = 0x14f6feb90;
        BVar2 = CryptAcquireContextW
                          (&local_18,(LPCWSTR)0x0,szProvider,param_3,
                           *(DWORD *)(&stack0xffffffffffffffd8 + lVar4));
        puVar7 = auStackY_48 + lVar4;
        if (BVar2 != 0) {
          *(undefined8 *)(auStackY_48 + lVar4 + -8) = 0x14f6feba0;
          CryptReleaseContext(local_18,0);
          goto LAB_14f6feba0;
        }
      }
    }
    if (DAT_1553e2cd0 == 0) {
      *(undefined8 *)(puVar7 + -8) = 0x14f6fec04;
      DAT_1553e2cd0 = ERR_get_next_error_library();
    }
    *(undefined4 *)(puVar7 + 0x20) = 0x66f;
    *(undefined8 *)(puVar7 + -8) = 0x14f6fec29;
    ERR_put_error(DAT_1553e2cd0,0x66,0x68,"engines\\e_capi.c");
    *(undefined8 *)(puVar7 + -8) = 0x14f6fec2e;
    FUN_14f6fe3f0();
    uVar5 = 0;
  }
  *(undefined8 *)(puVar7 + -8) = 0x14f6fec61;
  return uVar5;
}

// FUN_14f6fec80 @ 14f6fec80

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined4 FUN_14f6fec80(undefined8 param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 local_res18 [2];
  undefined8 local_res20;
  
  iVar1 = FUN_14f700160(param_1,&local_res20,local_res18,param_2);
  if (iVar1 != 1) {
    return 0;
  }
  uVar2 = FUN_14f6feab0(param_1,local_res20,local_res18[0],0);
  CRYPTO_free(local_res20,"engines\\e_capi.c",0x688);
  return uVar2;
}

// FUN_14f6fecf0 @ 14f6fecf0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
FUN_14f6fecf0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  uVar1 = 0x14f6fecfa;
  RSA_meth_free(DAT_1553e2cd8);
  DAT_1553e2cd8 = 0;
  DSA_meth_free(DAT_1553e2ce0);
  DAT_1553e2ce0 = 0;
  if (DAT_1553e2cd4 != 0) {
    ERR_unload_strings(DAT_1553e2cd0,&DAT_154df8fb0,param_3,param_4,uVar1);
    ERR_unload_strings(DAT_1553e2cd0,&DAT_154df9100);
    DAT_1553e2cd4 = 0;
  }
  return 1;
}

// FUN_14f6fed80 @ 14f6fed80

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong FUN_14f6fed80(BYTE *param_1,int param_2,undefined8 param_3)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  undefined1 uVar7;
  undefined1 uVar8;
  undefined1 uVar9;
  BYTE BVar10;
  BOOL BVar11;
  int iVar12;
  undefined8 uVar13;
  longlong lVar14;
  longlong lVar15;
  longlong lVar16;
  longlong lVar17;
  undefined1 auStackY_88 [32];
  DWORD local_58 [2];
  HCRYPTHASH local_50;
  BYTE local_48;
  undefined1 local_47;
  undefined1 local_46;
  undefined1 local_45;
  undefined1 local_44;
  undefined1 local_43;
  undefined1 local_42;
  undefined1 local_41;
  undefined1 local_40;
  undefined1 local_3f;
  undefined1 local_3e;
  undefined1 local_3d;
  undefined1 local_3c;
  undefined1 local_3b;
  undefined1 local_3a;
  undefined1 local_39;
  undefined1 local_38;
  undefined1 local_37;
  undefined1 local_36;
  BYTE local_35;
  undefined1 local_34 [20];
  ulonglong local_20;
  
  local_20 = __security_cookie.value ^ (ulonglong)auStackY_88;
  lVar17 = 0;
  uVar13 = DSA_get0_engine(param_3);
  uVar13 = ENGINE_get_ex_data(uVar13,DAT_154df9300);
  FUN_14f6fe030(uVar13,"Called CAPI_dsa_do_sign()\n");
  lVar14 = DSA_get_ex_data(param_3,DAT_154df9308);
  if (lVar14 == 0) {
    if (DAT_1553e2cd0 == 0) {
      DAT_1553e2cd0 = ERR_get_next_error_library();
    }
    ERR_put_error(DAT_1553e2cd0,0x72,0x66,"engines\\e_capi.c");
    return 0;
  }
  if (param_2 != 0x14) {
    if (DAT_1553e2cd0 == 0) {
      DAT_1553e2cd0 = ERR_get_next_error_library();
    }
    ERR_put_error(DAT_1553e2cd0,0x72,0x76,"engines\\e_capi.c");
    return 0;
  }
  BVar11 = CryptCreateHash(*(HCRYPTPROV *)(lVar14 + 8),0x8004,0,0,&local_50);
  if (BVar11 == 0) {
    if (DAT_1553e2cd0 == 0) {
      DAT_1553e2cd0 = ERR_get_next_error_library();
    }
    ERR_put_error(DAT_1553e2cd0,0x72,100,"engines\\e_capi.c");
    FUN_14f6fe3f0();
    return 0;
  }
  BVar11 = CryptSetHashParam(local_50,2,param_1,0);
  if (BVar11 == 0) {
    if (DAT_1553e2cd0 == 0) {
      DAT_1553e2cd0 = ERR_get_next_error_library();
    }
    ERR_put_error(DAT_1553e2cd0,0x72,0x67,"engines\\e_capi.c");
    FUN_14f6fe3f0();
  }
  else {
    local_58[0] = 0x28;
    BVar11 = CryptSignHashW(local_50,*(DWORD *)(lVar14 + 0x18),(LPCWSTR)0x0,0,&local_48,local_58);
    if (BVar11 == 0) {
      if (DAT_1553e2cd0 == 0) {
        DAT_1553e2cd0 = ERR_get_next_error_library();
      }
      ERR_put_error(DAT_1553e2cd0,0x72,0x72,"engines\\e_capi.c");
      FUN_14f6fe3f0();
    }
    else {
      lVar14 = BN_new();
      lVar15 = BN_new();
      BVar10 = local_35;
      uVar9 = local_36;
      uVar8 = local_37;
      uVar7 = local_38;
      uVar6 = local_39;
      uVar5 = local_3a;
      uVar4 = local_3b;
      uVar3 = local_3c;
      uVar2 = local_3d;
      uVar1 = local_3e;
      if ((lVar14 != 0) && (lVar15 != 0)) {
        local_35 = local_48;
        local_48 = BVar10;
        local_36 = local_47;
        local_47 = uVar9;
        local_37 = local_46;
        local_46 = uVar8;
        local_38 = local_45;
        local_45 = uVar7;
        local_39 = local_44;
        local_44 = uVar6;
        local_3a = local_43;
        local_43 = uVar5;
        local_3b = local_42;
        local_42 = uVar4;
        local_3c = local_41;
        local_41 = uVar3;
        local_3d = local_40;
        local_40 = uVar2;
        local_3e = local_3f;
        local_3f = uVar1;
        lVar16 = BN_bin2bn(&local_48,0x14,lVar14);
        if ((lVar16 != 0) &&
           ((iVar12 = FUN_14f701ad0(lVar15,local_34,0x14), lVar17 = 0, iVar12 != 0 &&
            (lVar17 = DSA_SIG_new(), lVar17 != 0)))) {
          DSA_SIG_set0(lVar17,lVar14,lVar15);
          goto LAB_14f6ff098;
        }
      }
      BN_free(lVar14);
      BN_free(lVar15);
    }
  }
LAB_14f6ff098:
  OPENSSL_cleanse(&local_48,0x28);
  CryptDestroyHash(local_50);
  return lVar17;
}

// FUN_14f6ff0e0 @ 14f6ff0e0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_14f6ff0e0(undefined8 param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)DSA_get_ex_data(param_1,DAT_154df9308);
  if (puVar1 != (undefined8 *)0x0) {
    CryptDestroyKey(puVar1[2]);
    CryptReleaseContext(puVar1[1],0);
    if ((PCCERT_CONTEXT)*puVar1 != (PCCERT_CONTEXT)0x0) {
      CertFreeCertificateContext((PCCERT_CONTEXT)*puVar1);
    }
    CRYPTO_free(puVar1,"engines\\e_capi.c",0x63a);
  }
  DSA_set_ex_data(param_1,DAT_154df9308,0);
  return 1;
}

// FUN_14f6ff170 @ 14f6ff170

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f6ff170(longlong param_1,undefined8 param_2,longlong param_3)

{
  uint uVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 local_res8;
  
  uVar1 = *(uint *)(param_1 + 0x40);
  if ((uVar1 & 2) != 0) {
    lVar2 = FUN_14f6fe460(param_1,param_3);
    if (lVar2 == 0) {
      BIO_printf(param_2,"  <No Friendly Name>\n");
    }
    else {
      BIO_printf(param_2,"  Friendly Name \"%s\"\n",lVar2);
      CRYPTO_free(lVar2,"engines\\e_capi.c",0x54e);
    }
  }
  local_res8 = *(undefined8 *)(param_3 + 8);
  lVar2 = d2i_X509(0,&local_res8,*(undefined4 *)(param_3 + 0x10));
  if (lVar2 == 0) {
    BIO_printf(param_2,"  <Can\'t parse certificate>\n");
  }
  if ((uVar1 & 1) != 0) {
    BIO_printf(param_2,"  Subject: ");
    uVar3 = X509_get_subject_name(lVar2);
    X509_NAME_print_ex(param_2,uVar3,0,0x82031f);
    BIO_printf(param_2,"\n  Issuer: ");
    uVar3 = X509_get_issuer_name(lVar2);
    X509_NAME_print_ex(param_2,uVar3,0,0x82031f);
    BIO_printf(param_2,"\n");
  }
  if ((uVar1 & 4) != 0) {
    X509_print_ex(param_2,lVar2,0x82031f,0);
  }
  if ((uVar1 & 0x20) != 0) {
    uVar3 = FUN_14f700040(param_1,param_3);
    FUN_14f6ff300(param_1,param_2,uVar3);
    CRYPTO_free(uVar3,"engines\\e_capi.c",0x566);
  }
  if ((uVar1 & 8) != 0) {
    PEM_write_bio_X509(param_2,lVar2);
  }
  X509_free(lVar2);
  return;
}

// FUN_14f6ff300 @ 14f6ff300

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f6ff300(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  longlong lVar1;
  longlong lVar2;
  
  if (param_3 == (undefined8 *)0x0) {
    BIO_printf(param_2,"  No Private Key\n");
    return;
  }
  lVar1 = FUN_14f701c20(param_3[1]);
  lVar2 = FUN_14f701c20(*param_3);
  if ((lVar1 != 0) && (lVar2 != 0)) {
    BIO_printf(param_2,"  Private Key Info:\n");
    BIO_printf(param_2,"    Provider Name:  %s, Provider Type %lu\n",lVar1,
               *(undefined4 *)(param_3 + 2));
    BIO_printf(param_2,"    Container Name: %s, Key Type %lu\n",lVar2,*(undefined4 *)(param_3 + 5));
  }
  CRYPTO_free(lVar1,"engines\\e_capi.c",0x527);
  CRYPTO_free(lVar2,"engines\\e_capi.c",0x528);
  return;
}

// FUN_14f6ff3f0 @ 14f6ff3f0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

PCCERT_CONTEXT FUN_14f6ff3f0(longlong param_1,void *param_2,HCERTSTORE param_3)

{
  char cVar1;
  char cVar2;
  BOOL BVar3;
  PCCERT_CONTEXT pCVar4;
  void *pvData;
  char *pcVar5;
  char *pcVar6;
  DWORD local_res8 [2];
  
  if (*(int *)(param_1 + 0x3c) == 1) {
    pCVar4 = CertFindCertificateInStore(param_3,1,0,0x70007,param_2,(PCCERT_CONTEXT)0x0);
    return pCVar4;
  }
  if (*(int *)(param_1 + 0x3c) != 2) {
    return (PCCERT_CONTEXT)0x0;
  }
  pCVar4 = CertEnumCertificatesInStore(param_3,(PCCERT_CONTEXT)0x0);
  do {
    if (pCVar4 == (PCCERT_CONTEXT)0x0) {
      return (PCCERT_CONTEXT)0x0;
    }
    FUN_14f6fe030(param_1,"capi_cert_get_fname\n");
    BVar3 = CertGetCertificateContextProperty(pCVar4,0xb,(void *)0x0,local_res8);
    if ((BVar3 != 0) &&
       (pvData = (void *)CRYPTO_malloc(local_res8[0],"engines\\e_capi.c"), pvData != (void *)0x0)) {
      BVar3 = CertGetCertificateContextProperty(pCVar4,0xb,pvData,local_res8);
      if (BVar3 == 0) {
        if (DAT_1553e2cd0 == 0) {
          DAT_1553e2cd0 = ERR_get_next_error_library();
        }
        ERR_put_error(DAT_1553e2cd0,99,0x6f,"engines\\e_capi.c",0x53d);
        FUN_14f6fe3f0();
        CRYPTO_free(pvData,"engines\\e_capi.c");
      }
      else {
        pcVar5 = (char *)FUN_14f701c20(pvData);
        CRYPTO_free(pvData,"engines\\e_capi.c");
        if (pcVar5 != (char *)0x0) {
          pcVar6 = pcVar5;
          do {
            cVar1 = *pcVar6;
            cVar2 = pcVar6[(longlong)param_2 - (longlong)pcVar5];
            if (cVar1 != cVar2) break;
            pcVar6 = pcVar6 + 1;
          } while (cVar2 != '\0');
          CRYPTO_free(pcVar5,"engines\\e_capi.c");
          if (cVar1 == cVar2) {
            return pCVar4;
          }
        }
      }
    }
    pCVar4 = CertEnumCertificatesInStore(param_3,pCVar4);
  } while( true );
}

// capi_find_key @ 14f6ff5f0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 capi_find_key(longlong param_1,LPCSTR param_2)

{
  longlong lVar1;
  undefined4 uVar2;
  LPCSTR pCVar3;
  longlong lVar4;
  longlong lVar5;
  uint uVar6;
  int iVar7;
  undefined8 uVar8;
  HCERTSTORE hCertStore;
  PCCERT_CONTEXT pCertContext;
  ulonglong uVar9;
  undefined1 *puVar10;
  undefined8 uVar11;
  undefined8 uStackY_60;
  undefined1 auStackY_58 [32];
  ulonglong local_28 [2];
  undefined8 uVar12;
  
  local_28[1] = 0x14f6ff600;
  local_28[0] = __security_cookie.value ^ (ulonglong)local_28;
  iVar7 = *(int *)(param_1 + 0x3c);
  uVar12 = 0;
  uVar11 = 0;
  uVar8 = uVar12;
  puVar10 = auStackY_58;
  if (0 < iVar7) {
    if (iVar7 < 3) {
      uStackY_60 = 0x14f6ff74a;
      hCertStore = (HCERTSTORE)FUN_14f701150(param_1,0);
      uVar8 = 0;
      puVar10 = auStackY_58;
      if (hCertStore != (HCERTSTORE)0x0) {
        uStackY_60 = 0x14f6ff760;
        pCertContext = (PCCERT_CONTEXT)FUN_14f6ff3f0(param_1,param_2,hCertStore);
        uVar8 = uVar12;
        if (pCertContext != (PCCERT_CONTEXT)0x0) {
          uStackY_60 = 0x14f6ff773;
          uVar8 = FUN_14f6ff870(param_1,pCertContext);
          uStackY_60 = 0x14f6ff77f;
          CertFreeCertificateContext(pCertContext);
        }
        uStackY_60 = 0x14f6ff78a;
        CertCloseStore(hCertStore,0);
        puVar10 = auStackY_58;
      }
    }
    else {
      puVar10 = auStackY_58;
      if (iVar7 == 3) {
        uStackY_60 = 0x14f6ff661;
        uVar6 = MultiByteToWideChar(0,0,param_2,-1,(LPWSTR)0x0,0);
        puVar10 = auStackY_58;
        if (uVar6 != 0) {
          uVar9 = (ulonglong)uVar6 * 2 + 0xf;
          if (uVar9 <= (ulonglong)uVar6 * 2) {
            uVar9 = 0xffffffffffffff0;
          }
          uStackY_60 = 0x14f6ff692;
          lVar4 = -(uVar9 & 0xfffffffffffffff0);
          *(uint *)(&stack0xffffffffffffffd0 + lVar4) = uVar6;
          *(longlong *)(&stack0xffffffffffffffc8 + lVar4) = (longlong)local_28 + lVar4;
          *(undefined8 *)(auStackY_58 + lVar4 + -8) = 0x14f6ff6b4;
          iVar7 = MultiByteToWideChar(0,0,param_2,-1,*(LPWSTR *)(&stack0xffffffffffffffc8 + lVar4),
                                      *(int *)(&stack0xffffffffffffffd0 + lVar4));
          uVar8 = uVar11;
          puVar10 = auStackY_58 + lVar4;
          if (iVar7 != 0) {
            pCVar3 = *(LPCSTR *)(param_1 + 0x18);
            *(undefined4 *)(&stack0xffffffffffffffd0 + lVar4) = 0;
            *(undefined8 *)(&stack0xffffffffffffffc8 + lVar4) = 0;
            *(undefined8 *)(auStackY_58 + lVar4 + -8) = 0x14f6ff6d7;
            uVar6 = MultiByteToWideChar(0,0,pCVar3,-1,*(LPWSTR *)(&stack0xffffffffffffffc8 + lVar4),
                                        *(int *)(&stack0xffffffffffffffd0 + lVar4));
            puVar10 = auStackY_58 + lVar4;
            if (uVar6 != 0) {
              uVar9 = (ulonglong)uVar6 * 2 + 0xf;
              if (uVar9 <= (ulonglong)uVar6 * 2) {
                uVar9 = 0xffffffffffffff0;
              }
              *(undefined8 *)(auStackY_58 + lVar4 + -8) = 0x14f6ff6fe;
              pCVar3 = *(LPCSTR *)(param_1 + 0x18);
              lVar5 = -(uVar9 & 0xfffffffffffffff0);
              *(uint *)(auStackY_58 + lVar5 + lVar4 + 0x28) = uVar6;
              lVar1 = (longlong)local_28 + lVar5 + lVar4;
              *(longlong *)(auStackY_58 + lVar5 + lVar4 + 0x20) = lVar1;
              *(undefined8 *)(auStackY_58 + lVar5 + lVar4 + -8) = 0x14f6ff721;
              iVar7 = MultiByteToWideChar(0,0,pCVar3,-1,
                                          *(LPWSTR *)(auStackY_58 + lVar5 + lVar4 + 0x20),
                                          *(int *)(auStackY_58 + lVar5 + lVar4 + 0x28));
              puVar10 = auStackY_58 + lVar5 + lVar4;
              if (iVar7 != 0) {
                uVar2 = *(undefined4 *)(param_1 + 0x20);
                *(undefined4 *)(auStackY_58 + lVar5 + lVar4 + 0x20) =
                     *(undefined4 *)(param_1 + 0x10);
                *(undefined8 *)(auStackY_58 + lVar5 + lVar4 + -8) = 0x14f6ff73e;
                uVar8 = FUN_14f6ff8f0(param_1,(longlong)local_28 + lVar4,lVar1,uVar2);
                puVar10 = auStackY_58 + lVar5 + lVar4;
              }
            }
          }
        }
      }
    }
  }
  *(undefined8 *)(puVar10 + -8) = 0x14f6ff799;
  return uVar8;
}

// FUN_14f6ff7c0 @ 14f6ff7c0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_14f6ff7c0(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = ENGINE_get_ex_data(param_1,DAT_154df9300);
  FUN_14f6fe960(uVar1);
  ENGINE_set_ex_data(param_1,DAT_154df9300,0);
  return 1;
}

// capi_free_key @ 14f6ff810

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void capi_free_key(undefined8 *param_1)

{
  if (param_1 != (undefined8 *)0x0) {
    CryptDestroyKey(param_1[2]);
    CryptReleaseContext(param_1[1],0);
    if ((PCCERT_CONTEXT)*param_1 != (PCCERT_CONTEXT)0x0) {
      CertFreeCertificateContext((PCCERT_CONTEXT)*param_1);
    }
    CRYPTO_free(param_1,"engines\\e_capi.c",0x63a);
  }
  return;
}

// FUN_14f6ff870 @ 14f6ff870

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_14f6ff870(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = 0x14f6ff885;
  uVar2 = 0;
  puVar1 = (undefined8 *)FUN_14f700040();
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = FUN_14f6ff8f0(param_1,*puVar1,puVar1[1],*(undefined4 *)(puVar1 + 2),
                          *(undefined4 *)(puVar1 + 5),uVar3);
  }
  CRYPTO_free(puVar1,"engines\\e_capi.c",0x604);
  return uVar2;
}

// FUN_14f6ff8f0 @ 14f6ff8f0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 *
FUN_14f6ff8f0(int *param_1,LPCWSTR param_2,wchar_t *param_3,DWORD param_4,DWORD param_5)

{
  WCHAR WVar1;
  WCHAR WVar2;
  BOOL BVar3;
  undefined8 *puVar4;
  LPCWSTR pWVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  uVar8 = 0x14f6ff90a;
  puVar4 = (undefined8 *)CRYPTO_malloc(0x20,"engines\\e_capi.c",0x5cb);
  if (puVar4 != (undefined8 *)0x0) {
    if ((param_4 == 1) && (DAT_1553e2ce8 != 0)) {
      pWVar5 = param_3;
      do {
        WVar1 = *pWVar5;
        WVar2 = *(WCHAR *)((longlong)pWVar5 +
                          ((longlong)L"Microsoft Enhanced Cryptographic Provider v1.0" -
                          (longlong)param_3));
        if (WVar1 != WVar2) break;
        pWVar5 = pWVar5 + 1;
      } while (WVar2 != L'\0');
      if (WVar1 == WVar2) {
        param_3 = L"Microsoft Enhanced RSA and AES Cryptographic Provider";
        param_4 = 0x18;
      }
    }
    if (((param_1 != (int *)0x0) && (1 < *param_1)) && (*(longlong *)(param_1 + 2) != 0)) {
      uVar6 = FUN_14f701c20(param_2);
      uVar7 = FUN_14f701c20(param_3);
      FUN_14f6fe030(param_1,"capi_get_key, contname=%s, provname=%s, type=%d\n",uVar6,uVar7,param_4,
                    uVar8);
      CRYPTO_free(uVar7,"engines\\e_capi.c",0x5df);
      CRYPTO_free(uVar6,"engines\\e_capi.c",0x5e0);
    }
    BVar3 = CryptAcquireContextW
                      (puVar4 + 1,param_2,param_3,param_4,(uint)param_1[0xe] >> 0xc & 0x20);
    if (BVar3 == 0) {
      if (DAT_1553e2cd0 == 0) {
        DAT_1553e2cd0 = ERR_get_next_error_library();
      }
      ERR_put_error(DAT_1553e2cd0,0x67,0x68,"engines\\e_capi.c",0x5e6);
      FUN_14f6fe3f0();
    }
    else {
      BVar3 = CryptGetUserKey(puVar4[1],param_5,puVar4 + 2);
      if (BVar3 != 0) {
        *(DWORD *)(puVar4 + 3) = param_5;
        *puVar4 = 0;
        return puVar4;
      }
      if (DAT_1553e2cd0 == 0) {
        DAT_1553e2cd0 = ERR_get_next_error_library();
      }
      ERR_put_error(DAT_1553e2cd0,0x67,0x75,"engines\\e_capi.c",0x5eb);
      FUN_14f6fe3f0();
      CryptReleaseContext(puVar4[1],0);
    }
    CRYPTO_free(puVar4,"engines\\e_capi.c",0x5f5);
  }
  return (undefined8 *)0x0;
}

// FUN_14f6ffb00 @ 14f6ffb00

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong FUN_14f6ffb00(undefined8 param_1,longlong param_2)

{
  BOOL BVar1;
  int iVar2;
  BYTE *pbData;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  uint uVar7;
  BYTE *pBVar8;
  longlong lVar9;
  undefined8 uVar10;
  longlong lVar11;
  longlong lVar13;
  longlong lVar14;
  undefined1 auStackY_98 [32];
  DWORD local_68 [2];
  longlong local_60;
  longlong local_58;
  longlong local_50 [2];
  ulonglong local_40;
  longlong lVar12;
  
  local_40 = __security_cookie.value ^ (ulonglong)auStackY_98;
  lVar12 = 0;
  lVar11 = 0;
  lVar5 = 0;
  lVar9 = 0;
  lVar3 = 0;
  lVar13 = 0;
  local_50[0] = param_2;
  BVar1 = CryptExportKey(*(HCRYPTKEY *)(param_2 + 0x10),0,6,0,(BYTE *)0x0,local_68);
  if (BVar1 == 0) {
    if (DAT_1553e2cd0 == 0) {
      DAT_1553e2cd0 = ERR_get_next_error_library();
    }
    ERR_put_error(DAT_1553e2cd0,0x73,0x7c,"engines\\e_capi.c");
    FUN_14f6fe3f0();
    return 0;
  }
  pbData = (BYTE *)CRYPTO_malloc(local_68[0],"engines\\e_capi.c",0x282);
  lVar6 = lVar12;
  lVar14 = lVar3;
  if (pbData == (BYTE *)0x0) goto LAB_14f6fffa5;
  BVar1 = CryptExportKey(*(HCRYPTKEY *)(param_2 + 0x10),0,6,0,pbData,local_68);
  if (BVar1 == 0) {
    if (DAT_1553e2cd0 == 0) {
      DAT_1553e2cd0 = ERR_get_next_error_library();
    }
    ERR_put_error(DAT_1553e2cd0,0x73,0x7b,"engines\\e_capi.c");
    FUN_14f6fe3f0();
    lVar11 = lVar12;
    lVar13 = lVar3;
    goto LAB_14f6fffdb;
  }
  if (*pbData == '\x06') {
    if ((*(int *)(pbData + 4) - 0x2400U & 0xffff7fff) == 0) {
      if (*(int *)(pbData + 8) == 0x31415352) {
        lVar6 = RSA_new_method(param_1);
        lVar5 = lVar9;
        lVar14 = lVar13;
        if (lVar6 != 0) {
          lVar5 = BN_new();
          lVar11 = BN_new();
          if ((lVar5 == 0) || (lVar11 == 0)) {
            BN_free(lVar5);
LAB_14f6fffa0:
            BN_free(lVar11);
            lVar5 = lVar9;
            lVar14 = lVar3;
          }
          else {
            RSA_set0_key(lVar6,lVar11,lVar5,0);
            iVar2 = BN_set_word(lVar5,*(undefined4 *)(pbData + 0x10));
            lVar5 = lVar9;
            if ((iVar2 != 0) &&
               (iVar2 = FUN_14f701ad0(lVar11,pbData + 0x14,*(uint *)(pbData + 0xc) >> 3), iVar2 != 0
               )) {
              RSA_set_ex_data(lVar6,DAT_154df9304,param_2);
              lVar5 = EVP_PKEY_new();
              if (lVar5 != 0) {
                EVP_PKEY_assign(lVar5,6,lVar6);
                lVar11 = 0;
                goto LAB_14f6fffdb;
              }
            }
          }
        }
LAB_14f6fffa5:
        if (DAT_1553e2cd0 == 0) {
          DAT_1553e2cd0 = ERR_get_next_error_library();
        }
        uVar10 = 0x41;
        goto LAB_14f6fffc8;
      }
      BIO_snprintf(local_50,10,"%lx");
      if (DAT_1553e2cd0 == 0) {
        DAT_1553e2cd0 = ERR_get_next_error_library();
      }
      uVar10 = 0x7a;
    }
    else {
      if (*(int *)(pbData + 4) != 0x2200) {
        BIO_snprintf(local_50,10,"%ux");
        if (DAT_1553e2cd0 == 0) {
          DAT_1553e2cd0 = ERR_get_next_error_library();
        }
        ERR_put_error(DAT_1553e2cd0,0x73,0x80,"engines\\e_capi.c");
        ERR_add_error_data(2,"aiKeyAlg=0x",local_50);
        lVar5 = lVar9;
        goto LAB_14f6fffdb;
      }
      if (*(int *)(pbData + 8) == 0x31535344) {
        pBVar8 = pbData + 0x10;
        uVar7 = *(uint *)(pbData + 0xc) >> 3;
        lVar3 = DSA_new_method(param_1);
        lVar14 = lVar3;
        if (lVar3 != 0) {
          local_58 = BN_new();
          lVar13 = BN_new();
          lVar4 = BN_new();
          local_60 = BN_new();
          if ((((local_58 == 0) || (lVar13 == 0)) || (lVar4 == 0)) || (local_60 == 0)) {
            BN_free();
            BN_free(lVar13);
            BN_free(lVar4);
            lVar11 = local_60;
            goto LAB_14f6fffa0;
          }
          DSA_set0_pqg(lVar3,local_58,lVar13,lVar4);
          DSA_set0_key(lVar3,local_60,0);
          iVar2 = FUN_14f701ad0(local_58,pBVar8,uVar7);
          if (iVar2 != 0) {
            pBVar8 = pBVar8 + uVar7;
            iVar2 = FUN_14f701ad0(lVar13,pBVar8,0x14);
            lVar5 = lVar9;
            lVar6 = lVar11;
            if (iVar2 != 0) {
              iVar2 = FUN_14f701ad0(lVar4,pBVar8 + 0x14,uVar7);
              if ((iVar2 != 0) &&
                 (iVar2 = FUN_14f701ad0(local_60,pBVar8 + 0x14 + uVar7,uVar7), iVar2 != 0)) {
                DSA_set_ex_data(lVar3,DAT_154df9308,local_50[0]);
                lVar5 = EVP_PKEY_new();
                if (lVar5 != 0) {
                  EVP_PKEY_assign(lVar5,0x74,lVar3);
                  lVar13 = 0;
                  lVar11 = lVar12;
                  goto LAB_14f6fffdb;
                }
              }
            }
          }
        }
        goto LAB_14f6fffa5;
      }
      BIO_snprintf(local_50,10,"%lx");
      if (DAT_1553e2cd0 == 0) {
        DAT_1553e2cd0 = ERR_get_next_error_library();
      }
      uVar10 = 0x77;
    }
    ERR_put_error(DAT_1553e2cd0,0x73,uVar10,"engines\\e_capi.c");
    ERR_add_error_data(2,"magic=0x",local_50);
    lVar11 = lVar12;
    lVar13 = lVar3;
  }
  else {
    if (DAT_1553e2cd0 == 0) {
      DAT_1553e2cd0 = ERR_get_next_error_library();
    }
    uVar10 = 0x79;
LAB_14f6fffc8:
    ERR_put_error(DAT_1553e2cd0,0x73,uVar10,"engines\\e_capi.c");
    lVar11 = lVar6;
    lVar13 = lVar14;
  }
LAB_14f6fffdb:
  CRYPTO_free(pbData,"engines\\e_capi.c",0x2ff);
  if (lVar5 == 0) {
    RSA_free(lVar11);
    DSA_free(lVar13);
  }
  return lVar5;
}

// FUN_14f700040 @ 14f700040

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void * FUN_14f700040(undefined8 param_1,PCCERT_CONTEXT param_2)

{
  BOOL BVar1;
  void *pvData;
  DWORD local_res18 [4];
  undefined8 uVar2;
  
  uVar2 = 0x14f70004c;
  BVar1 = CertGetCertificateContextProperty(param_2,2,(void *)0x0,local_res18);
  if (BVar1 == 0) {
    return (void *)0x0;
  }
  pvData = (void *)CRYPTO_malloc(local_res18[0],"engines\\e_capi.c",0x504);
  if (pvData == (void *)0x0) {
    if (DAT_1553e2cd0 == 0) {
      DAT_1553e2cd0 = ERR_get_next_error_library();
    }
    ERR_put_error(DAT_1553e2cd0,0x69,0x41,"engines\\e_capi.c",0x506,uVar2);
    return (void *)0x0;
  }
  BVar1 = CertGetCertificateContextProperty(param_2,2,pvData,local_res18);
  if (BVar1 == 0) {
    if (DAT_1553e2cd0 == 0) {
      DAT_1553e2cd0 = ERR_get_next_error_library();
    }
    ERR_put_error(DAT_1553e2cd0,0x69,0x70,"engines\\e_capi.c",0x50c,uVar2);
    FUN_14f6fe3f0();
    CRYPTO_free(pvData,"engines\\e_capi.c",0x50e);
    return (void *)0x0;
  }
  return pvData;
}

// FUN_14f700160 @ 14f700160

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_14f700160(undefined8 param_1,longlong *param_2,DWORD *param_3,DWORD param_4)

{
  BOOL BVar1;
  DWORD DVar2;
  LPWSTR szProvName;
  longlong lVar3;
  undefined4 uVar5;
  LPWSTR pWVar4;
  DWORD local_18 [2];
  undefined8 uStack_10;
  
  uStack_10 = 0x14f700180;
  FUN_14f6fe030(param_1,"capi_get_provname, index=%d\n",param_4);
  uVar5 = 0;
  BVar1 = CryptEnumProvidersW(param_4,(DWORD *)0x0,0,param_3,(LPWSTR)0x0,local_18);
  if (BVar1 == 0) {
    DVar2 = GetLastError();
    if (DVar2 != 0x103) {
      if (DAT_1553e2cd0 == 0) {
        DAT_1553e2cd0 = ERR_get_next_error_library();
      }
      ERR_put_error(DAT_1553e2cd0,0x68,0x69,"engines\\e_capi.c",0x476);
      FUN_14f6fe380(DVar2);
      return 0;
    }
  }
  else {
    szProvName = (LPWSTR)CRYPTO_malloc(local_18[0],"engines\\e_capi.c",0x47a);
    if (szProvName == (LPWSTR)0x0) {
      if (DAT_1553e2cd0 == 0) {
        DAT_1553e2cd0 = ERR_get_next_error_library();
      }
      ERR_put_error(DAT_1553e2cd0,0x68,0x41,"engines\\e_capi.c",CONCAT44(uVar5,0x47c));
      return 0;
    }
    pWVar4 = szProvName;
    BVar1 = CryptEnumProvidersW(param_4,(DWORD *)0x0,0,param_3,szProvName,local_18);
    uVar5 = (undefined4)((ulonglong)pWVar4 >> 0x20);
    if (BVar1 != 0) {
      lVar3 = FUN_14f701c20(szProvName);
      *param_2 = lVar3;
      CRYPTO_free(szProvName,"engines\\e_capi.c",0x48a);
      if (*param_2 == 0) {
        return 0;
      }
      FUN_14f6fe030(param_1,"capi_get_provname, returned name=%s, type=%d\n",*param_2,*param_3);
      return 1;
    }
    DVar2 = GetLastError();
    CRYPTO_free(szProvName,"engines\\e_capi.c",0x481);
    if (DVar2 != 0x103) {
      if (DAT_1553e2cd0 == 0) {
        DAT_1553e2cd0 = ERR_get_next_error_library();
      }
      ERR_put_error(DAT_1553e2cd0,0x68,0x69,"engines\\e_capi.c",CONCAT44(uVar5,0x484));
      FUN_14f6fe380(DVar2);
      return 0;
    }
  }
  return 2;
}

// FUN_14f700370 @ 14f700370

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_14f700370(undefined8 param_1)

{
  int iVar1;
  BOOL BVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  longlong lVar5;
  HCRYPTPROV local_res10;
  undefined8 in_stack_ffffffffffffffe8;
  undefined4 uVar6;
  undefined8 uVar7;
  
  uVar6 = (undefined4)((ulonglong)in_stack_ffffffffffffffe8 >> 0x20);
  uVar7 = 0x14f700385;
  if (DAT_154df9300 < 0) {
    uVar7 = 0;
    uVar6 = 0;
    DAT_154df9300 = CRYPTO_get_ex_new_index(10,0,0,0,0,0);
    if (DAT_154df9300 < 0) goto LAB_14f7005a3;
    DAT_154df930c = CRYPTO_get_ex_new_index(3,0,0,0,0,0);
    uVar7 = 0;
    uVar6 = 0;
    DAT_154df9304 = CRYPTO_get_ex_new_index(9,0,0,0,0,0);
    uVar3 = RSA_PKCS1_OpenSSL();
    uVar4 = RSA_meth_get_pub_enc(uVar3);
    iVar1 = RSA_meth_set_pub_enc(DAT_1553e2cd8,uVar4);
    if (iVar1 == 0) goto LAB_14f7005a3;
    uVar4 = RSA_meth_get_pub_dec(uVar3);
    iVar1 = RSA_meth_set_pub_dec(DAT_1553e2cd8,uVar4);
    if (iVar1 == 0) goto LAB_14f7005a3;
    iVar1 = RSA_meth_set_priv_enc(DAT_1553e2cd8,FUN_14f701530);
    if (iVar1 == 0) goto LAB_14f7005a3;
    iVar1 = RSA_meth_set_priv_dec(DAT_1553e2cd8,FUN_14f701290);
    if (iVar1 == 0) goto LAB_14f7005a3;
    uVar4 = RSA_meth_get_mod_exp(uVar3);
    iVar1 = RSA_meth_set_mod_exp(DAT_1553e2cd8,uVar4);
    if (iVar1 == 0) goto LAB_14f7005a3;
    uVar3 = RSA_meth_get_bn_mod_exp(uVar3);
    iVar1 = RSA_meth_set_bn_mod_exp(DAT_1553e2cd8,uVar3);
    if (iVar1 == 0) goto LAB_14f7005a3;
    iVar1 = RSA_meth_set_finish(DAT_1553e2cd8,FUN_14f701200);
    if (iVar1 == 0) goto LAB_14f7005a3;
    iVar1 = RSA_meth_set_sign(DAT_1553e2cd8,FUN_14f701580);
    if (iVar1 == 0) goto LAB_14f7005a3;
    uVar7 = 0;
    uVar6 = 0;
    DAT_154df9308 = CRYPTO_get_ex_new_index(7,0,0,0,0,0);
    uVar3 = DSA_OpenSSL();
    iVar1 = DSA_meth_set_sign(DAT_1553e2ce0,FUN_14f6fed80);
    if (iVar1 == 0) goto LAB_14f7005a3;
    uVar4 = DSA_meth_get_verify(uVar3);
    iVar1 = DSA_meth_set_verify(DAT_1553e2ce0,uVar4);
    if (iVar1 == 0) goto LAB_14f7005a3;
    iVar1 = DSA_meth_set_finish(DAT_1553e2ce0,FUN_14f6ff0e0);
    if (iVar1 == 0) goto LAB_14f7005a3;
    uVar4 = DSA_meth_get_mod_exp(uVar3);
    iVar1 = DSA_meth_set_mod_exp(DAT_1553e2ce0,uVar4);
    if (iVar1 == 0) goto LAB_14f7005a3;
    uVar3 = DSA_meth_get_bn_mod_exp(uVar3);
    iVar1 = DSA_meth_set_bn_mod_exp(DAT_1553e2ce0,uVar3);
    if (iVar1 == 0) goto LAB_14f7005a3;
  }
  lVar5 = FUN_14f6fea10();
  if (lVar5 != 0) {
    ENGINE_set_ex_data(param_1,DAT_154df9300,lVar5);
    BVar2 = CryptAcquireContextW
                      (&local_res10,(LPCWSTR)0x0,
                       L"Microsoft Enhanced RSA and AES Cryptographic Provider",0x18,0xf0000000);
    if (BVar2 != 0) {
      DAT_1553e2ce8 = 1;
      CryptReleaseContext(local_res10,0);
    }
    return 1;
  }
LAB_14f7005a3:
  if (DAT_1553e2cd0 == 0) {
    DAT_1553e2cd0 = ERR_get_next_error_library();
  }
  ERR_put_error(DAT_1553e2cd0,0x6a,0x41,"engines\\e_capi.c",CONCAT44(uVar6,0x1e9),uVar7);
  return 0;
}

// capi_list_certs @ 14f700660

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined4 capi_list_certs(longlong param_1,undefined8 param_2,longlong param_3)

{
  undefined4 uVar1;
  HCERTSTORE hCertStore;
  PCCERT_CONTEXT pCVar2;
  int iVar3;
  char *pcVar4;
  undefined4 uVar5;
  
  uVar5 = 1;
  pcVar4 = "MY";
  if (*(char **)(param_1 + 0x28) != (char *)0x0) {
    pcVar4 = *(char **)(param_1 + 0x28);
  }
  FUN_14f6fe030(param_1,"Listing certs for store %s\n",pcVar4);
  hCertStore = (HCERTSTORE)FUN_14f701150(param_1,pcVar4);
  uVar1 = 0;
  if (hCertStore != (HCERTSTORE)0x0) {
    if (param_3 == 0) {
      iVar3 = 0;
      for (pCVar2 = CertEnumCertificatesInStore(hCertStore,(PCCERT_CONTEXT)0x0); uVar5 = 1,
          pCVar2 != (PCCERT_CONTEXT)0x0; pCVar2 = CertEnumCertificatesInStore(hCertStore,pCVar2)) {
        BIO_printf(param_2,"Certificate %d\n",iVar3);
        FUN_14f6ff170(param_1,param_2,pCVar2);
        iVar3 = iVar3 + 1;
      }
    }
    else {
      pCVar2 = (PCCERT_CONTEXT)FUN_14f6ff3f0(param_1,param_3,hCertStore);
      if (pCVar2 == (PCCERT_CONTEXT)0x0) {
        uVar5 = 0;
      }
      else {
        FUN_14f6ff170(param_1,param_2,pCVar2);
        CertFreeCertificateContext(pCVar2);
      }
    }
    CertCloseStore(hCertStore,0);
    uVar1 = uVar5;
  }
  return uVar1;
}

// FUN_14f700790 @ 14f700790

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined4 FUN_14f700790(longlong param_1,undefined8 param_2)

{
  LPCSTR lpMultiByteStr;
  longlong lVar1;
  uint uVar2;
  HCRYPTPROV HVar3;
  undefined1 *puVar4;
  BOOL BVar5;
  DWORD DVar6;
  BYTE *pbData;
  ulonglong uVar7;
  int iVar8;
  LPCWSTR szProvider;
  undefined1 *puVar9;
  undefined4 uVar10;
  undefined8 uStackY_70;
  undefined1 auStackY_68 [32];
  DWORD local_38;
  uint uStack_34;
  HCRYPTPROV local_30;
  ulonglong local_28;
  undefined8 uStack_20;
  
  uStack_20 = 0x14f7007a0;
  puVar9 = auStackY_68;
  local_28 = __security_cookie.value ^ (ulonglong)&local_38;
  local_38 = 0;
  uVar10 = 1;
  szProvider = (LPCWSTR)0x0;
  uStackY_70 = 0x14f7007ef;
  FUN_14f6fe030(param_1,"Listing containers CSP=%s, type = %d\n",*(undefined8 *)(param_1 + 0x18),
                *(undefined4 *)(param_1 + 0x20));
  if (*(LPCSTR *)(param_1 + 0x18) != (LPCSTR)0x0) {
    uStackY_70 = 0x14f700813;
    uStack_34 = MultiByteToWideChar(0,0,*(LPCSTR *)(param_1 + 0x18),-1,(LPWSTR)0x0,0);
    puVar4 = auStackY_68;
    if (uStack_34 != 0) {
      uVar7 = (ulonglong)uStack_34 * 2 + 0xf;
      if (uVar7 <= (ulonglong)uStack_34 * 2) {
        uVar7 = 0xffffffffffffff0;
      }
      uStackY_70 = 0x14f700840;
      lpMultiByteStr = *(LPCSTR *)(param_1 + 0x18);
      lVar1 = -(uVar7 & 0xfffffffffffffff0);
      puVar9 = auStackY_68 + lVar1;
      *(uint *)(&stack0xffffffffffffffc0 + lVar1) = uStack_34;
      szProvider = (LPCWSTR)((longlong)&local_38 + lVar1);
      *(LPCWSTR *)(&stack0xffffffffffffffb8 + lVar1) = szProvider;
      *(undefined8 *)(auStackY_68 + lVar1 + -8) = 0x14f700863;
      MultiByteToWideChar(0,0,lpMultiByteStr,-1,*(LPWSTR *)(&stack0xffffffffffffffb8 + lVar1),
                          *(int *)(&stack0xffffffffffffffc0 + lVar1));
      puVar4 = auStackY_68 + lVar1;
      if (szProvider != (LPCWSTR)0x0) goto LAB_14f7008a8;
    }
    puVar9 = puVar4;
    if (DAT_1553e2cd0 == 0) {
      *(undefined8 *)(puVar9 + -8) = 0x14f700877;
      DAT_1553e2cd0 = ERR_get_next_error_library();
    }
    *(undefined4 *)(puVar9 + 0x20) = 0x4bb;
    *(undefined8 *)(puVar9 + -8) = 0x14f70089c;
    ERR_put_error(DAT_1553e2cd0,0x6b,0x41,"engines\\e_capi.c");
    *(undefined8 *)(puVar9 + -8) = 0x14f7008a1;
    FUN_14f6fe3f0();
    uVar10 = 0;
    goto LAB_14f700ae8;
  }
LAB_14f7008a8:
  DVar6 = *(DWORD *)(param_1 + 0x20);
  *(undefined4 *)(puVar9 + 0x20) = 0xf0000000;
  *(undefined8 *)(puVar9 + -8) = 0x14f7008c3;
  BVar5 = CryptAcquireContextW(&local_30,(LPCWSTR)0x0,szProvider,DVar6,*(DWORD *)(puVar9 + 0x20));
  HVar3 = local_30;
  if (BVar5 == 0) {
    if (DAT_1553e2cd0 == 0) {
      *(undefined8 *)(puVar9 + -8) = 0x14f7008d6;
      DAT_1553e2cd0 = ERR_get_next_error_library();
    }
    *(undefined4 *)(puVar9 + 0x20) = 0x4c3;
    *(undefined8 *)(puVar9 + -8) = 0x14f7008fb;
    ERR_put_error(DAT_1553e2cd0,0x6b,0x68,"engines\\e_capi.c");
    *(undefined8 *)(puVar9 + -8) = 0x14f700900;
    FUN_14f6fe3f0();
    uVar10 = 0;
    goto LAB_14f700ae8;
  }
  *(undefined4 *)(puVar9 + 0x20) = 1;
  *(undefined8 *)(puVar9 + -8) = 0x14f700921;
  BVar5 = CryptGetProvParam(HVar3,2,(BYTE *)0x0,&local_38,*(DWORD *)(puVar9 + 0x20));
  DVar6 = local_38;
  if (BVar5 == 0) {
    if (DAT_1553e2cd0 == 0) {
      *(undefined8 *)(puVar9 + -8) = 0x14f700934;
      DAT_1553e2cd0 = ERR_get_next_error_library();
    }
    *(undefined4 *)(puVar9 + 0x20) = 0x4c9;
    *(undefined8 *)(puVar9 + -8) = 0x14f700959;
    ERR_put_error(DAT_1553e2cd0,0x6b,0x6c,"engines\\e_capi.c");
    *(undefined8 *)(puVar9 + -8) = 0x14f70095e;
    FUN_14f6fe3f0();
    *(undefined8 *)(puVar9 + -8) = 0x14f70096a;
    CryptReleaseContext(local_30,0);
    uVar10 = 0;
    goto LAB_14f700ae8;
  }
  *(undefined8 *)(puVar9 + -8) = 0x14f700984;
  FUN_14f6fe030(param_1,"Got max container len %d\n",DVar6);
  DVar6 = local_38;
  if (local_38 == 0) {
    DVar6 = 0x400;
  }
  local_38 = DVar6;
  *(undefined8 *)(puVar9 + -8) = 0x14f7009a8;
  pbData = (BYTE *)CRYPTO_malloc(DVar6,"engines\\e_capi.c",0x4d1);
  if (pbData == (BYTE *)0x0) {
    if (DAT_1553e2cd0 == 0) {
      *(undefined8 *)(puVar9 + -8) = 0x14f7009bf;
      DAT_1553e2cd0 = ERR_get_next_error_library();
    }
    *(undefined4 *)(puVar9 + 0x20) = 0x4d3;
    *(undefined8 *)(puVar9 + -8) = 0x14f7009e4;
    ERR_put_error(DAT_1553e2cd0,0x6b,0x41,"engines\\e_capi.c");
LAB_14f700ac1:
    uVar10 = 0;
  }
  else {
    iVar8 = 0;
    while( true ) {
      HVar3 = local_30;
      uStack_34 = local_38;
      *pbData = '\0';
      *(uint *)(puVar9 + 0x20) = (uint)(iVar8 == 0);
      *(undefined8 *)(puVar9 + -8) = 0x14f700a1d;
      BVar5 = CryptGetProvParam(HVar3,2,pbData,&uStack_34,*(DWORD *)(puVar9 + 0x20));
      uVar2 = uStack_34;
      if (BVar5 == 0) break;
      *(uint *)(puVar9 + 0x28) = (uint)(iVar8 == 0);
      *(int *)(puVar9 + 0x20) = iVar8;
      *(undefined8 *)(puVar9 + -8) = 0x14f700a40;
      FUN_14f6fe030(param_1,"Container name %s, len=%d, index=%d, flags=%d\n",pbData,uVar2);
      if ((*pbData == '\0') && (uStack_34 == local_38)) {
        *(undefined8 *)(puVar9 + -8) = 0x14f700a75;
        FUN_14f6fe030(param_1,"Enumerate bug: using workaround\n");
        goto LAB_14f700ac4;
      }
      *(undefined8 *)(puVar9 + -8) = 0x14f700a62;
      BIO_printf(param_2,"%lu. %s\n",iVar8,pbData);
      iVar8 = iVar8 + 1;
    }
    *(undefined8 *)(puVar9 + -8) = 0x14f700a7d;
    DVar6 = GetLastError();
    if (DVar6 != 0x103) {
      if (DAT_1553e2cd0 == 0) {
        *(undefined8 *)(puVar9 + -8) = 0x14f700a95;
        DAT_1553e2cd0 = ERR_get_next_error_library();
      }
      *(undefined4 *)(puVar9 + 0x20) = 0x4e4;
      *(undefined8 *)(puVar9 + -8) = 0x14f700aba;
      ERR_put_error(DAT_1553e2cd0,0x6b,0x6c,"engines\\e_capi.c");
      *(undefined8 *)(puVar9 + -8) = 0x14f700ac1;
      FUN_14f6fe380(DVar6);
      goto LAB_14f700ac1;
    }
  }
LAB_14f700ac4:
  *(undefined8 *)(puVar9 + -8) = 0x14f700ad9;
  CRYPTO_free(pbData,"engines\\e_capi.c",0x4f5);
  *(undefined8 *)(puVar9 + -8) = 0x14f700ae5;
  CryptReleaseContext(local_30,0);
LAB_14f700ae8:
  *(undefined8 *)(puVar9 + -8) = 0x14f700af4;
  return uVar10;
}

// FUN_14f700b20 @ 14f700b20

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_14f700b20(undefined8 param_1,undefined8 param_2)

{
  BOOL BVar1;
  LPWSTR szProvName;
  longlong lVar2;
  DWORD DVar3;
  undefined1 auStackY_78 [32];
  DWORD local_48;
  DWORD local_44;
  undefined1 local_40 [16];
  ulonglong local_30;
  
  local_30 = __security_cookie.value ^ (ulonglong)auStackY_78;
  FUN_14f6fe030(param_1,"capi_list_providers\n");
  BIO_printf(param_2,"Available CSPs:\n");
  DVar3 = 0;
  while( true ) {
    FUN_14f6fe030(param_1,"capi_get_provname, index=%d\n",DVar3);
    BVar1 = CryptEnumProvidersW(DVar3,(DWORD *)0x0,0,&local_48,(LPWSTR)0x0,&local_44);
    if (BVar1 == 0) {
      DVar3 = GetLastError();
      if (DVar3 != 0x103) {
        if (DAT_1553e2cd0 == 0) {
          DAT_1553e2cd0 = ERR_get_next_error_library();
        }
        ERR_put_error(DAT_1553e2cd0,0x68,0x69,"engines\\e_capi.c");
        BIO_snprintf(local_40,10,"%lX",DVar3);
        ERR_add_error_data(2,"Error code= 0x",local_40);
      }
      return 1;
    }
    szProvName = (LPWSTR)CRYPTO_malloc(local_44,"engines\\e_capi.c",0x47a);
    if (szProvName == (LPWSTR)0x0) {
      if (DAT_1553e2cd0 == 0) {
        DAT_1553e2cd0 = ERR_get_next_error_library();
      }
      ERR_put_error(DAT_1553e2cd0,0x68,0x41,"engines\\e_capi.c");
      return 1;
    }
    BVar1 = CryptEnumProvidersW(DVar3,(DWORD *)0x0,0,&local_48,szProvName,&local_44);
    if (BVar1 == 0) {
      DVar3 = GetLastError();
      CRYPTO_free(szProvName,"engines\\e_capi.c",0x481);
      if (DVar3 == 0x103) {
        return 1;
      }
      if (DAT_1553e2cd0 == 0) {
        DAT_1553e2cd0 = ERR_get_next_error_library();
      }
      ERR_put_error(DAT_1553e2cd0,0x68,0x69,"engines\\e_capi.c");
      FUN_14f6fe380(DVar3);
      return 1;
    }
    lVar2 = FUN_14f701c20(szProvName);
    CRYPTO_free(szProvName,"engines\\e_capi.c",0x48a);
    if (lVar2 == 0) break;
    FUN_14f6fe030(param_1,"capi_get_provname, returned name=%s, type=%d\n",lVar2,local_48);
    BIO_printf(param_2,"%lu. %s, type %lu\n",DVar3,lVar2);
    CRYPTO_free(lVar2,"engines\\e_capi.c",0x4a4);
    DVar3 = DVar3 + 1;
  }
  return 1;
}

// FUN_14f700dc0 @ 14f700dc0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong FUN_14f700dc0(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  uVar3 = 0x14f700dd0;
  lVar1 = ENGINE_get_ex_data(param_1,DAT_154df9300);
  if (lVar1 == 0) {
    if (DAT_1553e2cd0 == 0) {
      DAT_1553e2cd0 = ERR_get_next_error_library();
    }
    ERR_put_error(DAT_1553e2cd0,0x6c,0x65,"engines\\e_capi.c",0x318,uVar3);
  }
  else {
    lVar1 = capi_find_key(lVar1,param_2);
    if (lVar1 != 0) {
      lVar2 = FUN_14f6ffb00(param_1,lVar1);
      if (lVar2 == 0) {
        capi_free_key(lVar1);
      }
      return lVar2;
    }
  }
  return 0;
}

// FUN_14f700e70 @ 14f700e70

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
FUN_14f700e70(undefined8 param_1,undefined8 param_2,undefined8 param_3,longlong *param_4,
             undefined8 *param_5)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  HCERTSTORE hCertStore;
  PCCERT_CONTEXT pCertContext;
  longlong lVar5;
  PCCERT_CONTEXT pCVar6;
  ulonglong uVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  char *pcVar10;
  uint uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  BYTE *local_58 [3];
  
  uVar12 = 0;
  lVar4 = ENGINE_get_ex_data(param_1,DAT_154df9300);
  *param_4 = 0;
  *param_5 = 0;
  pcVar10 = "MY";
  if (*(char **)(lVar4 + 0x30) != (char *)0x0) {
    pcVar10 = *(char **)(lVar4 + 0x30);
  }
  hCertStore = (HCERTSTORE)FUN_14f701150(lVar4,pcVar10);
  if (hCertStore == (HCERTSTORE)0x0) {
    return 0;
  }
  pCertContext = CertEnumCertificatesInStore(hCertStore,(PCCERT_CONTEXT)0x0);
  uVar7 = uVar12;
  uVar13 = uVar12;
  for (; pCertContext != (PCCERT_CONTEXT)0x0;
      pCertContext = CertEnumCertificatesInStore(hCertStore,pCertContext)) {
    local_58[0] = pCertContext->pbCertEncoded;
    lVar5 = d2i_X509(0,local_58,pCertContext->cbCertEncoded);
    if (lVar5 == 0) {
      FUN_14f6fe030(lVar4,"Can\'t Parse Certificate %d\n",uVar13);
    }
    else {
      iVar2 = FUN_14f701960(param_3,lVar5);
      if ((iVar2 == 0) || (iVar2 = X509_check_purpose(lVar5,1), iVar2 == 0)) {
        X509_free(lVar5);
      }
      else {
        puVar8 = (undefined8 *)FUN_14f6ff870(lVar4,pCertContext);
        if (puVar8 == (undefined8 *)0x0) {
          X509_free(lVar5);
        }
        else {
          pCVar6 = CertDuplicateCertificateContext(pCertContext);
          uVar1 = DAT_154df930c;
          *puVar8 = pCVar6;
          X509_set_ex_data(lVar5,uVar1,puVar8);
          if (uVar7 == 0) {
            uVar7 = OPENSSL_sk_new_null();
          }
          OPENSSL_sk_push(uVar7,lVar5);
        }
      }
    }
    uVar13 = (ulonglong)((int)uVar13 + 1);
  }
  CertCloseStore(hCertStore,0);
  if (uVar7 != 0) {
    iVar2 = (**(code **)(lVar4 + 0x48))(param_1,param_2,uVar7);
    iVar3 = OPENSSL_sk_num(uVar7);
    if (0 < iVar3) {
      do {
        lVar4 = OPENSSL_sk_value(uVar7,uVar12);
        if ((int)uVar12 == iVar2) {
          *param_4 = lVar4;
        }
        else {
          puVar8 = (undefined8 *)X509_get_ex_data(lVar4,DAT_154df930c);
          if (puVar8 != (undefined8 *)0x0) {
            CryptDestroyKey(puVar8[2]);
            CryptReleaseContext(puVar8[1],0);
            if ((PCCERT_CONTEXT)*puVar8 != (PCCERT_CONTEXT)0x0) {
              CertFreeCertificateContext((PCCERT_CONTEXT)*puVar8);
            }
            CRYPTO_free(puVar8,"engines\\e_capi.c",0x63a);
          }
          X509_free(lVar4);
        }
        uVar11 = (int)uVar12 + 1;
        uVar12 = (ulonglong)uVar11;
        iVar3 = OPENSSL_sk_num(uVar7);
      } while ((int)uVar11 < iVar3);
    }
    OPENSSL_sk_free(uVar7);
    if (*param_4 != 0) {
      uVar9 = X509_get_ex_data(*param_4,DAT_154df930c);
      uVar9 = FUN_14f6ffb00(param_1,uVar9);
      uVar1 = DAT_154df930c;
      *param_5 = uVar9;
      X509_set_ex_data(*param_4,uVar1,0);
      return 1;
    }
  }
  return 0;
}

// FUN_14f701150 @ 14f701150

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

HCERTSTORE FUN_14f701150(longlong param_1,char *param_2)

{
  HCERTSTORE pvVar1;
  undefined8 uVar2;
  
  uVar2 = 0x14f701160;
  if (param_2 == (char *)0x0) {
    param_2 = "MY";
    if (*(char **)(param_1 + 0x28) != (char *)0x0) {
      param_2 = *(char **)(param_1 + 0x28);
    }
  }
  FUN_14f6fe030(param_1,"Opening certificate store %s\n",param_2);
  pvVar1 = CertOpenStore(&DAT_00000009,0,0,*(DWORD *)(param_1 + 0x38),param_2);
  if (pvVar1 == (HCERTSTORE)0x0) {
    if (DAT_1553e2cd0 == 0) {
      DAT_1553e2cd0 = ERR_get_next_error_library();
    }
    ERR_put_error(DAT_1553e2cd0,0x6d,0x71,"engines\\e_capi.c",0x57b,uVar2);
    FUN_14f6fe3f0();
  }
  return pvVar1;
}

// FUN_14f701200 @ 14f701200

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_14f701200(undefined8 param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)RSA_get_ex_data(param_1,DAT_154df9304);
  if (puVar1 != (undefined8 *)0x0) {
    CryptDestroyKey(puVar1[2]);
    CryptReleaseContext(puVar1[1],0);
    if ((PCCERT_CONTEXT)*puVar1 != (PCCERT_CONTEXT)0x0) {
      CertFreeCertificateContext((PCCERT_CONTEXT)*puVar1);
    }
    CRYPTO_free(puVar1,"engines\\e_capi.c",0x63a);
  }
  RSA_set_ex_data(param_1,DAT_154df9304,0);
  return 1;
}

// FUN_14f701290 @ 14f701290

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

DWORD FUN_14f701290(DWORD param_1,longlong param_2,void *param_3,undefined8 param_4,int param_5)

{
  BYTE *pBVar1;
  BOOL BVar2;
  undefined8 uVar3;
  longlong lVar4;
  BYTE *pbData;
  longlong lVar5;
  BYTE *pBVar6;
  longlong lVar7;
  size_t _Size;
  undefined1 auStackY_78 [32];
  DWORD local_48 [2];
  undefined1 local_40 [16];
  ulonglong local_30;
  
  local_30 = __security_cookie.value ^ (ulonglong)auStackY_78;
  lVar7 = (longlong)(int)param_1;
  if (0 < (int)param_1) {
    uVar3 = RSA_get0_engine(param_4);
    uVar3 = ENGINE_get_ex_data(uVar3,DAT_154df9300);
    FUN_14f6fe030(uVar3,"Called capi_rsa_priv_dec()\n");
    lVar4 = RSA_get_ex_data(param_4,DAT_154df9304);
    if (lVar4 == 0) {
      if (DAT_1553e2cd0 == 0) {
        DAT_1553e2cd0 = ERR_get_next_error_library();
      }
      ERR_put_error(DAT_1553e2cd0,0x6e,0x66,"engines\\e_capi.c");
      param_1 = 0xffffffff;
    }
    else if (param_5 == 1) {
      pbData = (BYTE *)CRYPTO_malloc(lVar7,"engines\\e_capi.c",0x3bc);
      if (pbData == (BYTE *)0x0) {
        if (DAT_1553e2cd0 == 0) {
          DAT_1553e2cd0 = ERR_get_next_error_library();
        }
        ERR_put_error(DAT_1553e2cd0,0x6e,0x41,"engines\\e_capi.c");
        param_1 = 0xffffffff;
      }
      else {
        lVar5 = 0;
        if (0 < (int)param_1) {
          pBVar6 = pbData + lVar7 + -1;
          do {
            pBVar1 = (BYTE *)(lVar5 + param_2);
            lVar5 = lVar5 + 1;
            *pBVar6 = *pBVar1;
            pBVar6 = pBVar6 + -1;
          } while (lVar5 < lVar7);
        }
        local_48[0] = param_1;
        BVar2 = CryptDecrypt(*(HCRYPTKEY *)(lVar4 + 0x10),0,1,0,pbData,local_48);
        param_1 = local_48[0];
        if (BVar2 == 0) {
          if (DAT_1553e2cd0 == 0) {
            DAT_1553e2cd0 = ERR_get_next_error_library();
          }
          ERR_put_error(DAT_1553e2cd0,0x6e,0x6a,"engines\\e_capi.c");
          FUN_14f6fe3f0();
          OPENSSL_cleanse(pbData,local_48[0]);
          CRYPTO_free(pbData,"engines\\e_capi.c",0x3c9);
          param_1 = 0xffffffff;
        }
        else {
          _Size = (size_t)(int)local_48[0];
          memcpy(param_3,pbData,_Size);
          OPENSSL_cleanse(pbData,_Size);
          CRYPTO_free(pbData,"engines\\e_capi.c",0x3cf);
        }
      }
    }
    else {
      BIO_snprintf(local_40,10,"%d");
      if (DAT_1553e2cd0 == 0) {
        DAT_1553e2cd0 = ERR_get_next_error_library();
      }
      ERR_put_error(DAT_1553e2cd0,0x6e,0x7f,"engines\\e_capi.c");
      ERR_add_error_data(2,"padding=",local_40);
      param_1 = 0xffffffff;
    }
  }
  return param_1;
}

// FUN_14f701530 @ 14f701530

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_14f701530(void)

{
  if (DAT_1553e2cd0 == 0) {
    DAT_1553e2cd0 = ERR_get_next_error_library();
  }
  ERR_put_error(DAT_1553e2cd0,0x6f,0x74,"engines\\e_capi.c",0x32e);
  return 0xffffffff;
}

// FUN_14f701580 @ 14f701580

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8
FUN_14f701580(int param_1,BYTE *param_2,undefined8 param_3,BYTE *param_4,uint *param_5,
             undefined8 param_6)

{
  BYTE BVar1;
  BOOL BVar2;
  undefined8 uVar3;
  longlong lVar4;
  ALG_ID Algid;
  undefined8 uVar5;
  uint uVar6;
  uint uVar7;
  ulonglong uVar8;
  undefined1 auStackY_98 [32];
  uint local_68 [2];
  HCRYPTHASH local_60;
  undefined1 local_58 [16];
  ulonglong local_48;
  undefined8 uStack_40;
  
  uStack_40 = 0x14f701595;
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_98;
  uVar5 = 0xffffffff;
  uVar3 = RSA_get0_engine(param_6);
  uVar3 = ENGINE_get_ex_data(uVar3,DAT_154df9300);
  FUN_14f6fe030(uVar3,"Called CAPI_rsa_sign()\n");
  lVar4 = RSA_get_ex_data(param_6,DAT_154df9304);
  if (lVar4 == 0) {
    if (DAT_1553e2cd0 == 0) {
      DAT_1553e2cd0 = ERR_get_next_error_library();
    }
    ERR_put_error(DAT_1553e2cd0,0x70,0x66,"engines\\e_capi.c");
    return 0xffffffff;
  }
  if (param_1 < 0x2a1) {
    if (param_1 == 0x2a0) {
      Algid = 0x800c;
    }
    else if (param_1 == 4) {
      Algid = 0x8003;
    }
    else if (param_1 == 0x40) {
      Algid = 0x8004;
    }
    else {
      if (param_1 != 0x72) goto LAB_14f701686;
      Algid = 0x8008;
    }
  }
  else if (param_1 == 0x2a1) {
    Algid = 0x800d;
  }
  else {
    if (param_1 != 0x2a2) {
LAB_14f701686:
      BIO_snprintf(local_58,10,"%x",param_1);
      if (DAT_1553e2cd0 == 0) {
        DAT_1553e2cd0 = ERR_get_next_error_library();
      }
      ERR_put_error(DAT_1553e2cd0,0x70,0x7e,"engines\\e_capi.c");
      ERR_add_error_data(2,"NID=0x",local_58);
      return 0xffffffff;
    }
    Algid = 0x800e;
  }
  BVar2 = CryptCreateHash(*(HCRYPTPROV *)(lVar4 + 8),Algid,0,0,&local_60);
  if (BVar2 == 0) {
    if (DAT_1553e2cd0 == 0) {
      DAT_1553e2cd0 = ERR_get_next_error_library();
    }
    ERR_put_error(DAT_1553e2cd0,0x70,100,"engines\\e_capi.c");
    FUN_14f6fe3f0();
  }
  else {
    BVar2 = CryptSetHashParam(local_60,2,param_2,0);
    if (BVar2 == 0) {
      if (DAT_1553e2cd0 == 0) {
        DAT_1553e2cd0 = ERR_get_next_error_library();
      }
      ERR_put_error(DAT_1553e2cd0,0x70,0x67,"engines\\e_capi.c");
      FUN_14f6fe3f0();
      uVar5 = 0xffffffff;
    }
    else {
      local_68[0] = RSA_size(param_6);
      BVar2 = CryptSignHashW(local_60,*(DWORD *)(lVar4 + 0x18),(LPCWSTR)0x0,0,param_4,local_68);
      if (BVar2 == 0) {
        if (DAT_1553e2cd0 == 0) {
          DAT_1553e2cd0 = ERR_get_next_error_library();
        }
        ERR_put_error(DAT_1553e2cd0,0x70,0x72,"engines\\e_capi.c");
        FUN_14f6fe3f0();
      }
      else {
        uVar8 = 0;
        uVar5 = 1;
        if ((local_68[0] & 0xfffffffe) != 0) {
          do {
            BVar1 = param_4[uVar8];
            uVar6 = (local_68[0] - (int)uVar8) - 1;
            param_4[uVar8] = param_4[uVar6];
            uVar7 = (int)uVar8 + 1;
            uVar8 = (ulonglong)uVar7;
            param_4[uVar6] = BVar1;
          } while (uVar7 < local_68[0] >> 1);
        }
        *param_5 = local_68[0];
      }
    }
    CryptDestroyHash(local_60);
  }
  return uVar5;
}

// FUN_14f7018a0 @ 14f7018a0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f7018a0(int *param_1,int param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  undefined8 uVar2;
  
  if (((param_1 != (int *)0x0) && (uVar2 = 0x14f7018b9, param_2 <= *param_1)) &&
     (*(longlong *)(param_1 + 2) != 0)) {
    lVar1 = BIO_new_file(*(longlong *)(param_1 + 2),"a+");
    if (lVar1 == 0) {
      if (DAT_1553e2cd0 == 0) {
        DAT_1553e2cd0 = ERR_get_next_error_library();
      }
      ERR_put_error(DAT_1553e2cd0,0x76,0x73,"engines\\e_capi.c",0x437,uVar2);
      return;
    }
    BIO_vprintf(lVar1,param_3,param_4);
    BIO_free(lVar1);
  }
  return;
}

// FUN_14f701960 @ 14f701960

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_14f701960(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  int iVar4;
  
  iVar1 = OPENSSL_sk_num();
  if (iVar1 < 1) {
    return 1;
  }
  iVar4 = 0;
  iVar1 = OPENSSL_sk_num(param_1);
  if (0 < iVar1) {
    do {
      uVar2 = OPENSSL_sk_value(param_1,iVar4);
      uVar3 = X509_get_issuer_name(param_2);
      iVar1 = X509_NAME_cmp(uVar2,uVar3);
      if (iVar1 == 0) {
        return 1;
      }
      iVar4 = iVar4 + 1;
      iVar1 = OPENSSL_sk_num(param_1);
    } while (iVar4 < iVar1);
  }
  return 0;
}

// FUN_14f701a20 @ 14f701a20

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong FUN_14f701a20(void)

{
  int iVar1;
  longlong lVar2;
  
  lVar2 = ENGINE_new();
  if (lVar2 != 0) {
    iVar1 = FUN_14f6fe1a0(lVar2);
    if (iVar1 != 0) {
      return lVar2;
    }
    ENGINE_free(lVar2);
  }
  return 0;
}

// engine_load_capi_int @ 14f701a70

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void engine_load_capi_int(void)

{
  int iVar1;
  longlong lVar2;
  
  lVar2 = ENGINE_new();
  if (lVar2 == 0) {
    return;
  }
  iVar1 = FUN_14f6fe1a0(lVar2);
  if (iVar1 == 0) {
    ENGINE_free();
    return;
  }
  ENGINE_add(lVar2);
  ENGINE_free(lVar2);
  ERR_clear_error();
  return;
}

// FUN_14f701ad0 @ 14f701ad0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

bool FUN_14f701ad0(undefined8 param_1,undefined1 *param_2,int param_3)

{
  undefined1 uVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  longlong lVar4;
  
  lVar4 = (longlong)(param_3 / 2);
  if (0 < param_3 / 2) {
    puVar2 = param_2 + (longlong)param_3 + -1;
    puVar3 = param_2;
    do {
      uVar1 = *puVar3;
      *puVar3 = *puVar2;
      puVar3 = puVar3 + 1;
      *puVar2 = uVar1;
      lVar4 = lVar4 + -1;
      puVar2 = puVar2 + -1;
    } while (lVar4 != 0);
  }
  lVar4 = BN_bin2bn(param_2,param_3,param_1);
  return lVar4 != 0;
}

// FUN_14f701b40 @ 14f701b40

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f701b40(void)

{
  OPENSSL_sk_num();
  return;
}

// FUN_14f701b60 @ 14f701b60

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f701b60(void)

{
  OPENSSL_sk_value();
  return;
}

// FUN_14f701b80 @ 14f701b80

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f701b80(void)

{
  OPENSSL_sk_free();
  return;
}

// FUN_14f701ba0 @ 14f701ba0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f701ba0(void)

{
  OPENSSL_sk_new_null();
  return;
}

// FUN_14f701bc0 @ 14f701bc0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f701bc0(void)

{
  OPENSSL_sk_num();
  return;
}

// FUN_14f701be0 @ 14f701be0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f701be0(void)

{
  OPENSSL_sk_push();
  return;
}

// FUN_14f701c00 @ 14f701c00

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f701c00(void)

{
  OPENSSL_sk_value();
  return;
}

// FUN_14f701c20 @ 14f701c20

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

LPSTR FUN_14f701c20(LPCWSTR param_1)

{
  longlong lVar1;
  int iVar2;
  LPSTR lpMultiByteStr;
  longlong lVar3;
  undefined4 uVar5;
  LPSTR pCVar4;
  
  if (param_1 != (LPCWSTR)0x0) {
    lVar3 = -1;
    do {
      lVar1 = lVar3 + 1;
      lVar3 = lVar3 + 1;
    } while (param_1[lVar1] != L'\0');
    uVar5 = 0;
    iVar2 = WideCharToMultiByte(0,0,param_1,(int)lVar3 + 1,(LPSTR)0x0,0,(LPCSTR)0x0,(LPBOOL)0x0);
    if (iVar2 == 0) {
      if (DAT_1553e2cd0 == 0) {
        DAT_1553e2cd0 = ERR_get_next_error_library();
      }
      ERR_put_error(DAT_1553e2cd0,0x71,0x81,"engines\\e_capi.c",0x45c);
      lpMultiByteStr = (LPSTR)0x0;
    }
    else {
      lpMultiByteStr = (LPSTR)CRYPTO_malloc((longlong)iVar2,"engines\\e_capi.c",0x45f);
      if (lpMultiByteStr == (LPSTR)0x0) {
        if (DAT_1553e2cd0 == 0) {
          DAT_1553e2cd0 = ERR_get_next_error_library();
        }
        ERR_put_error(DAT_1553e2cd0,0x71,0x41,"engines\\e_capi.c",CONCAT44(uVar5,0x461));
        lpMultiByteStr = (LPSTR)0x0;
      }
      else {
        pCVar4 = lpMultiByteStr;
        iVar2 = WideCharToMultiByte(0,0,param_1,(int)lVar3 + 1,lpMultiByteStr,iVar2,(LPCSTR)0x0,
                                    (LPBOOL)0x0);
        uVar5 = (undefined4)((ulonglong)pCVar4 >> 0x20);
        if (iVar2 == 0) {
          CRYPTO_free(lpMultiByteStr,"engines\\e_capi.c",0x465);
          if (DAT_1553e2cd0 == 0) {
            DAT_1553e2cd0 = ERR_get_next_error_library();
          }
          ERR_put_error(DAT_1553e2cd0,0x71,0x81,"engines\\e_capi.c",CONCAT44(uVar5,0x466));
          lpMultiByteStr = (LPSTR)0x0;
        }
      }
    }
    return lpMultiByteStr;
  }
  return (LPSTR)0x0;
}

