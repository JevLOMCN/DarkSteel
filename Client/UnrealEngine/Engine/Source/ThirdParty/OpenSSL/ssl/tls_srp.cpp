// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OpenSSL
// Functions: 18

// SRP_Calc_A_param @ 14f65f3e0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool SRP_Calc_A_param(longlong param_1)

{
  int iVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined1 auStack_68 [32];
  undefined1 local_48 [48];
  ulonglong local_18;
  undefined8 uStack_10;
  
  uStack_10 = 0x14f65f3ec;
  local_18 = __security_cookie.value ^ (ulonglong)auStack_68;
  iVar1 = RAND_priv_bytes(local_48,0x30);
  if (iVar1 < 1) {
    return false;
  }
  uVar2 = BN_bin2bn(local_48,0x30,*(undefined8 *)(param_1 + 0x800));
  *(undefined8 *)(param_1 + 0x800) = uVar2;
  OPENSSL_cleanse(local_48,0x30);
  lVar3 = SRP_Calc_A(*(undefined8 *)(param_1 + 0x800),*(undefined8 *)(param_1 + 0x7d8),
                     *(undefined8 *)(param_1 + 0x7e0));
  *(longlong *)(param_1 + 0x7f8) = lVar3;
  return lVar3 != 0;
}

// SSL_CTX_SRP_CTX_free @ 14f65f4a0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 SSL_CTX_SRP_CTX_free(longlong param_1)

{
  if (param_1 == 0) {
    return 0;
  }
  CRYPTO_free(*(undefined8 *)(param_1 + 0x300),"ssl\\tls_srp.c",0x1a);
  CRYPTO_free(*(undefined8 *)(param_1 + 0x348),"ssl\\tls_srp.c",0x1b);
  BN_free(*(undefined8 *)(param_1 + 0x308));
  BN_free(*(undefined8 *)(param_1 + 0x310));
  BN_free(*(undefined8 *)(param_1 + 0x318));
  BN_free(*(undefined8 *)(param_1 + 800));
  BN_free(*(undefined8 *)(param_1 + 0x328));
  BN_free(*(undefined8 *)(param_1 + 0x330));
  BN_free(*(undefined8 *)(param_1 + 0x338));
  BN_free(*(undefined8 *)(param_1 + 0x340));
  memset((void *)(param_1 + 0x2e0),0,0x78);
  *(undefined4 *)(param_1 + 0x350) = 0x400;
  return 1;
}

// SSL_CTX_SRP_CTX_init @ 14f65f580

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 SSL_CTX_SRP_CTX_init(longlong param_1)

{
  if (param_1 == 0) {
    return 0;
  }
  memset((void *)(param_1 + 0x2e0),0,0x78);
  *(undefined4 *)(param_1 + 0x350) = 0x400;
  return 1;
}

// SSL_CTX_set_srp_cb_arg @ 14f65f5d0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void SSL_CTX_set_srp_cb_arg(undefined8 param_1,undefined8 param_2)

{
  ssl3_ctx_ctrl(param_1,0x4e,0,param_2);
  return;
}

// SSL_CTX_set_srp_client_pwd_callback @ 14f65f600

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void SSL_CTX_set_srp_client_pwd_callback(undefined8 param_1,undefined8 param_2)

{
  ssl3_ctx_callback_ctrl(param_1,0x4d,param_2);
  return;
}

// SSL_CTX_set_srp_password @ 14f65f630

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void SSL_CTX_set_srp_password(undefined8 param_1,undefined8 param_2)

{
  ssl3_ctx_ctrl(param_1,0x51,0,param_2);
  return;
}

// SSL_CTX_set_srp_strength @ 14f65f660

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void SSL_CTX_set_srp_strength(undefined8 param_1,undefined4 param_2)

{
  ssl3_ctx_ctrl(param_1,0x50,param_2,0);
  return;
}

// SSL_CTX_set_srp_username @ 14f65f690

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void SSL_CTX_set_srp_username(undefined8 param_1,undefined8 param_2)

{
  ssl3_ctx_ctrl(param_1,0x4f,0,param_2);
  return;
}

// SSL_CTX_set_srp_username_callback @ 14f65f6c0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void SSL_CTX_set_srp_username_callback(undefined8 param_1,undefined8 param_2)

{
  ssl3_ctx_callback_ctrl(param_1,0x4b,param_2);
  return;
}

// SSL_CTX_set_srp_verify_param_callback @ 14f65f6f0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void SSL_CTX_set_srp_verify_param_callback(undefined8 param_1,undefined8 param_2)

{
  ssl3_ctx_callback_ctrl(param_1,0x4c,param_2);
  return;
}

// SSL_SRP_CTX_free @ 14f65f720

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 SSL_SRP_CTX_free(longlong param_1)

{
  if (param_1 == 0) {
    return 0;
  }
  CRYPTO_free(*(undefined8 *)(param_1 + 2000),"ssl\\tls_srp.c",0x2d);
  CRYPTO_free(*(undefined8 *)(param_1 + 0x818),"ssl\\tls_srp.c",0x2e);
  BN_free(*(undefined8 *)(param_1 + 0x7d8));
  BN_free(*(undefined8 *)(param_1 + 0x7e0));
  BN_free(*(undefined8 *)(param_1 + 0x7e8));
  BN_free(*(undefined8 *)(param_1 + 0x7f0));
  BN_free(*(undefined8 *)(param_1 + 0x7f8));
  BN_free(*(undefined8 *)(param_1 + 0x800));
  BN_free(*(undefined8 *)(param_1 + 0x808));
  BN_free(*(undefined8 *)(param_1 + 0x810));
  memset((void *)(param_1 + 0x7b0),0,0x78);
  *(undefined4 *)(param_1 + 0x820) = 0x400;
  return 1;
}

// SSL_SRP_CTX_init @ 14f65f800

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 SSL_SRP_CTX_init(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  
  uVar5 = 0x14f65f810;
  if ((param_1 == 0) || (lVar1 = *(longlong *)(param_1 + 0x598), lVar1 == 0)) {
    return 0;
  }
  memset((void *)(param_1 + 0x7b0),0,0x78);
  *(undefined8 *)(param_1 + 0x7b0) = *(undefined8 *)(lVar1 + 0x2e0);
  *(undefined8 *)(param_1 + 0x7b8) = *(undefined8 *)(lVar1 + 0x2e8);
  *(undefined8 *)(param_1 + 0x7c0) = *(undefined8 *)(lVar1 + 0x2f0);
  *(undefined8 *)(param_1 + 0x7c8) = *(undefined8 *)(lVar1 + 0x2f8);
  *(undefined4 *)(param_1 + 0x820) = *(undefined4 *)(lVar1 + 0x350);
  if (*(longlong *)(lVar1 + 0x308) != 0) {
    lVar2 = BN_dup();
    *(longlong *)(param_1 + 0x7d8) = lVar2;
    if (lVar2 != 0) goto LAB_14f65f8ab;
LAB_14f65f97e:
    uVar4 = 0x62;
    uVar3 = 3;
    goto LAB_14f65fa02;
  }
LAB_14f65f8ab:
  if (*(longlong *)(lVar1 + 0x310) != 0) {
    lVar2 = BN_dup();
    *(longlong *)(param_1 + 0x7e0) = lVar2;
    if (lVar2 == 0) goto LAB_14f65f97e;
  }
  if (*(longlong *)(lVar1 + 0x318) != 0) {
    lVar2 = BN_dup();
    *(longlong *)(param_1 + 0x7e8) = lVar2;
    if (lVar2 == 0) goto LAB_14f65f97e;
  }
  if (*(longlong *)(lVar1 + 800) != 0) {
    lVar2 = BN_dup();
    *(longlong *)(param_1 + 0x7f0) = lVar2;
    if (lVar2 == 0) goto LAB_14f65f97e;
  }
  if (*(longlong *)(lVar1 + 0x328) != 0) {
    lVar2 = BN_dup();
    *(longlong *)(param_1 + 0x7f8) = lVar2;
    if (lVar2 == 0) goto LAB_14f65f97e;
  }
  if (*(longlong *)(lVar1 + 0x330) != 0) {
    lVar2 = BN_dup();
    *(longlong *)(param_1 + 0x800) = lVar2;
    if (lVar2 == 0) goto LAB_14f65f97e;
  }
  if (*(longlong *)(lVar1 + 0x340) != 0) {
    lVar2 = BN_dup();
    *(longlong *)(param_1 + 0x810) = lVar2;
    if (lVar2 == 0) goto LAB_14f65f97e;
  }
  if (*(longlong *)(lVar1 + 0x338) != 0) {
    lVar2 = BN_dup();
    *(longlong *)(param_1 + 0x808) = lVar2;
    if (lVar2 == 0) goto LAB_14f65f97e;
  }
  if (*(longlong *)(lVar1 + 0x300) == 0) {
LAB_14f65f9c2:
    if (*(longlong *)(lVar1 + 0x348) == 0) {
LAB_14f65face:
      *(undefined4 *)(param_1 + 0x824) = *(undefined4 *)(lVar1 + 0x354);
      return 1;
    }
    lVar2 = CRYPTO_strdup(*(longlong *)(lVar1 + 0x348),"ssl\\tls_srp.c",0x6b);
    *(longlong *)(param_1 + 0x818) = lVar2;
    if (lVar2 != 0) goto LAB_14f65face;
    uVar4 = 0x6c;
  }
  else {
    lVar2 = CRYPTO_strdup(*(longlong *)(lVar1 + 0x300),"ssl\\tls_srp.c",0x66);
    *(longlong *)(param_1 + 2000) = lVar2;
    if (lVar2 != 0) goto LAB_14f65f9c2;
    uVar4 = 0x67;
  }
  uVar3 = 0x44;
LAB_14f65fa02:
  ERR_put_error(0x14,0x139,uVar3,"ssl\\tls_srp.c",uVar4,uVar5);
  CRYPTO_free(*(undefined8 *)(param_1 + 2000),"ssl\\tls_srp.c",0x73);
  CRYPTO_free(*(undefined8 *)(param_1 + 0x818),"ssl\\tls_srp.c",0x74);
  BN_free(*(undefined8 *)(param_1 + 0x7d8));
  BN_free(*(undefined8 *)(param_1 + 0x7e0));
  BN_free(*(undefined8 *)(param_1 + 0x7e8));
  BN_free(*(undefined8 *)(param_1 + 0x7f0));
  BN_free(*(undefined8 *)(param_1 + 0x7f8));
  BN_free(*(undefined8 *)(param_1 + 0x800));
  BN_free(*(undefined8 *)(param_1 + 0x808));
  BN_free(*(undefined8 *)(param_1 + 0x810));
  memset((void *)(param_1 + 0x7b0),0,0x78);
  return 0;
}

// SSL_set_srp_server_param @ 14f65fbd0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
SSL_set_srp_server_param
          (longlong param_1,longlong param_2,longlong param_3,longlong param_4,longlong param_5,
          longlong param_6)

{
  longlong lVar1;
  undefined8 uVar2;
  
  if (param_2 != 0) {
    if (*(longlong *)(param_1 + 0x7d8) == 0) {
      uVar2 = BN_dup(param_2);
      *(undefined8 *)(param_1 + 0x7d8) = uVar2;
    }
    else {
      lVar1 = BN_copy();
      if (lVar1 == 0) {
        BN_free(*(undefined8 *)(param_1 + 0x7d8));
        *(undefined8 *)(param_1 + 0x7d8) = 0;
      }
    }
  }
  if (param_3 != 0) {
    if (*(longlong *)(param_1 + 0x7e0) == 0) {
      uVar2 = BN_dup(param_3);
      *(undefined8 *)(param_1 + 0x7e0) = uVar2;
    }
    else {
      lVar1 = BN_copy(*(longlong *)(param_1 + 0x7e0),param_3);
      if (lVar1 == 0) {
        BN_free(*(undefined8 *)(param_1 + 0x7e0));
        *(undefined8 *)(param_1 + 0x7e0) = 0;
      }
    }
  }
  if (param_4 != 0) {
    if (*(longlong *)(param_1 + 0x7e8) == 0) {
      uVar2 = BN_dup(param_4);
      *(undefined8 *)(param_1 + 0x7e8) = uVar2;
    }
    else {
      lVar1 = BN_copy(*(longlong *)(param_1 + 0x7e8),param_4);
      if (lVar1 == 0) {
        BN_free(*(undefined8 *)(param_1 + 0x7e8));
        *(undefined8 *)(param_1 + 0x7e8) = 0;
      }
    }
  }
  if (param_5 != 0) {
    if (*(longlong *)(param_1 + 0x810) == 0) {
      uVar2 = BN_dup();
      *(undefined8 *)(param_1 + 0x810) = uVar2;
    }
    else {
      lVar1 = BN_copy(*(longlong *)(param_1 + 0x810),param_5);
      if (lVar1 == 0) {
        BN_free(*(undefined8 *)(param_1 + 0x810));
        *(undefined8 *)(param_1 + 0x810) = 0;
      }
    }
  }
  if (param_6 != 0) {
    if (*(longlong *)(param_1 + 0x818) != 0) {
      CRYPTO_free(*(longlong *)(param_1 + 0x818),"ssl\\tls_srp.c",0xed);
    }
    lVar1 = CRYPTO_strdup(param_6,"ssl\\tls_srp.c",0xee);
    *(longlong *)(param_1 + 0x818) = lVar1;
    if (lVar1 == 0) {
      return 0xffffffff;
    }
  }
  if ((((*(longlong *)(param_1 + 0x7d8) != 0) && (*(longlong *)(param_1 + 0x7e0) != 0)) &&
      (*(longlong *)(param_1 + 0x7e8) != 0)) && (*(longlong *)(param_1 + 0x810) != 0)) {
    return 1;
  }
  return 0xffffffff;
}

// SSL_set_srp_server_param_pw @ 14f65fda0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined4
SSL_set_srp_server_param_pw
          (longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  
  lVar2 = SRP_get_default_gN(param_4);
  if (lVar2 == 0) {
    uVar4 = 0xffffffff;
  }
  else {
    uVar3 = BN_dup(*(undefined8 *)(lVar2 + 0x10));
    *(undefined8 *)(param_1 + 0x7d8) = uVar3;
    uVar3 = BN_dup(*(undefined8 *)(lVar2 + 8));
    *(undefined8 *)(param_1 + 0x7e0) = uVar3;
    BN_clear_free(*(undefined8 *)(param_1 + 0x810));
    *(undefined8 *)(param_1 + 0x810) = 0;
    BN_clear_free(*(undefined8 *)(param_1 + 0x7e8));
    *(undefined8 *)(param_1 + 0x7e8) = 0;
    iVar1 = SRP_create_verifier_BN
                      (param_2,param_3,param_1 + 0x7e8,param_1 + 0x810,*(undefined8 *)(lVar2 + 0x10)
                       ,*(undefined8 *)(lVar2 + 8));
    uVar4 = 1;
    if (iVar1 == 0) {
      uVar4 = 0xffffffff;
    }
  }
  return uVar4;
}

// SSL_srp_server_param_with_username @ 14f65fe90

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ulonglong SSL_srp_server_param_with_username(longlong param_1,undefined4 *param_2)

{
  int iVar1;
  ulonglong uVar2;
  undefined8 uVar3;
  longlong lVar4;
  uint uVar5;
  undefined1 auStack_68 [32];
  undefined1 local_48 [48];
  ulonglong local_18;
  undefined8 uStack_10;
  
  uStack_10 = 0x14f65fea0;
  local_18 = __security_cookie.value ^ (ulonglong)auStack_68;
  *param_2 = 0x73;
  if ((*(code **)(param_1 + 0x7b8) != (code *)0x0) &&
     (uVar2 = (**(code **)(param_1 + 0x7b8))(param_1,param_2,*(undefined8 *)(param_1 + 0x7b0)),
     (int)uVar2 != 0)) {
    return uVar2;
  }
  *param_2 = 0x50;
  if ((((*(longlong *)(param_1 + 0x7d8) != 0) && (*(longlong *)(param_1 + 0x7e0) != 0)) &&
      (*(longlong *)(param_1 + 0x7e8) != 0)) &&
     ((*(longlong *)(param_1 + 0x810) != 0 && (iVar1 = RAND_priv_bytes(local_48,0x30), 0 < iVar1))))
  {
    uVar3 = BN_bin2bn(local_48,0x30);
    *(undefined8 *)(param_1 + 0x808) = uVar3;
    OPENSSL_cleanse(local_48,0x30);
    lVar4 = SRP_Calc_B(*(undefined8 *)(param_1 + 0x808),*(undefined8 *)(param_1 + 0x7d8),
                       *(undefined8 *)(param_1 + 0x7e0),*(undefined8 *)(param_1 + 0x810));
    *(longlong *)(param_1 + 0x7f0) = lVar4;
    uVar5 = 2;
    if (lVar4 != 0) {
      uVar5 = 0;
    }
    return (ulonglong)uVar5;
  }
  return 2;
}

// srp_generate_client_master_secret @ 14f65ffe0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined4 srp_generate_client_master_secret(longlong param_1)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  longlong lVar4;
  char *pcVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  char *pcVar10;
  uint uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined4 uVar14;
  
  uVar14 = 1;
  uVar11 = 0;
  lVar4 = 0;
  lVar7 = 0;
  uVar3 = 0xffffffff;
  lVar6 = 0;
  pcVar5 = (char *)0x0;
  iVar2 = SRP_Verify_B_mod_N(*(undefined8 *)(param_1 + 0x7f0),*(undefined8 *)(param_1 + 0x7d8));
  if (((iVar2 == 0) ||
      (lVar4 = SRP_Calc_u(*(undefined8 *)(param_1 + 0x7f8),*(undefined8 *)(param_1 + 0x7f0),
                          *(undefined8 *)(param_1 + 0x7d8)), lVar4 == 0)) ||
     (*(code **)(param_1 + 0x7c8) == (code *)0x0)) {
    uVar13 = CONCAT44(uVar14,0x126);
LAB_14f660187:
    uVar12 = 0x44;
  }
  else {
    pcVar5 = (char *)(**(code **)(param_1 + 0x7c8))(param_1,*(undefined8 *)(param_1 + 0x7b0));
    if (pcVar5 != (char *)0x0) {
      lVar6 = SRP_Calc_x(*(undefined8 *)(param_1 + 0x7e8),*(undefined8 *)(param_1 + 2000),pcVar5);
      if (lVar6 != 0) {
        lVar8 = lVar4;
        lVar7 = SRP_Calc_client_key(*(undefined8 *)(param_1 + 0x7d8),
                                    *(undefined8 *)(param_1 + 0x7f0),
                                    *(undefined8 *)(param_1 + 0x7e0),lVar6,
                                    *(undefined8 *)(param_1 + 0x800),lVar4);
        uVar14 = (undefined4)((ulonglong)lVar8 >> 0x20);
        if (lVar7 != 0) {
          iVar2 = BN_num_bits(lVar7);
          lVar8 = (longlong)((int)(iVar2 + 7 + (iVar2 + 7 >> 0x1f & 7U)) >> 3);
          lVar9 = CRYPTO_malloc(lVar8,"ssl\\tls_srp.c",0x13b);
          if (lVar9 == 0) {
            ossl_statem_fatal(param_1,0x50,0x253,0x41,"ssl\\tls_srp.c",CONCAT44(uVar14,0x13d));
            uVar3 = 0xffffffff;
          }
          else {
            BN_bn2bin(lVar7,lVar9);
            uVar3 = ssl_generate_master_secret(param_1,lVar9,lVar8,1);
          }
          goto LAB_14f6601ac;
        }
      }
      uVar13 = CONCAT44(uVar14,0x136);
      goto LAB_14f660187;
    }
    uVar13 = CONCAT44(uVar14,0x12e);
    uVar12 = 0xea;
  }
  ossl_statem_fatal(param_1,0x50,0x253,uVar12,"ssl\\tls_srp.c",uVar13);
LAB_14f6601ac:
  BN_clear_free(lVar7);
  BN_clear_free(lVar6);
  if (pcVar5 != (char *)0x0) {
    cVar1 = *pcVar5;
    pcVar10 = pcVar5;
    for (; (cVar1 != '\0' && (uVar11 < 0x80000000)); uVar11 = uVar11 + 1) {
      pcVar10 = pcVar10 + 1;
      cVar1 = *pcVar10;
    }
    CRYPTO_clear_free(pcVar5,uVar11 & 0x7fffffff,"ssl\\tls_srp.c",0x147);
  }
  BN_clear_free(lVar4);
  return uVar3;
}

// srp_generate_server_master_secret @ 14f660220

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined4 srp_generate_server_master_secret(longlong param_1)

{
  int iVar1;
  undefined4 uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 uVar7;
  undefined4 uVar8;
  
  uVar7 = 0x14f660232;
  lVar4 = 0;
  iVar1 = SRP_Verify_A_mod_N(*(undefined8 *)(param_1 + 0x7f8),*(undefined8 *)(param_1 + 0x7d8));
  lVar3 = lVar4;
  uVar2 = 0xffffffff;
  if ((iVar1 != 0) &&
     (lVar3 = SRP_Calc_u(*(undefined8 *)(param_1 + 0x7f8),*(undefined8 *)(param_1 + 0x7f0),
                         *(undefined8 *)(param_1 + 0x7d8)), uVar2 = 0xffffffff, lVar3 != 0)) {
    lVar4 = SRP_Calc_server_key(*(undefined8 *)(param_1 + 0x7f8),*(undefined8 *)(param_1 + 0x810),
                                lVar3,*(undefined8 *)(param_1 + 0x808),
                                *(undefined8 *)(param_1 + 0x7d8),uVar7);
    uVar8 = (undefined4)((ulonglong)uVar7 >> 0x20);
    if (lVar4 != 0) {
      iVar1 = BN_num_bits(lVar4);
      lVar6 = (longlong)((int)(iVar1 + 7 + (iVar1 + 7 >> 0x1f & 7U)) >> 3);
      lVar5 = CRYPTO_malloc(lVar6,"ssl\\tls_srp.c",0x108);
      if (lVar5 == 0) {
        ossl_statem_fatal(param_1,0x50,0x24d,0x41,"ssl\\tls_srp.c",CONCAT44(uVar8,0x10a));
        uVar2 = 0xffffffff;
      }
      else {
        BN_bn2bin(lVar4,lVar5);
        uVar2 = ssl_generate_master_secret(param_1,lVar5,lVar6,1);
      }
    }
  }
  BN_clear_free(lVar4);
  BN_clear_free(lVar3);
  return uVar2;
}

// srp_verify_server_param @ 14f660380

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 srp_verify_server_param(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  uVar3 = 1;
  iVar1 = BN_ucmp(*(undefined8 *)(param_1 + 0x7e0),*(undefined8 *)(param_1 + 0x7d8));
  if (((iVar1 < 0) &&
      (iVar1 = BN_ucmp(*(undefined8 *)(param_1 + 0x7f0),*(undefined8 *)(param_1 + 0x7d8)), iVar1 < 0
      )) && (iVar1 = BN_is_zero(*(undefined8 *)(param_1 + 0x7f0)), iVar1 == 0)) {
    iVar1 = BN_num_bits(*(undefined8 *)(param_1 + 0x7d8));
    if (iVar1 < *(int *)(param_1 + 0x820)) {
      uVar5 = CONCAT44(uVar3,0x15c);
      uVar3 = 0x47;
      uVar4 = 0xf1;
    }
    else if (*(code **)(param_1 + 0x7c0) == (code *)0x0) {
      lVar2 = SRP_check_known_gN_param
                        (*(undefined8 *)(param_1 + 0x7e0),*(undefined8 *)(param_1 + 0x7d8));
      if (lVar2 != 0) {
        return 1;
      }
      uVar5 = CONCAT44(uVar3,0x169);
      uVar3 = 0x47;
      uVar4 = 0xf1;
    }
    else {
      iVar1 = (**(code **)(param_1 + 0x7c0))(param_1,*(undefined8 *)(param_1 + 0x7b0));
      if (0 < iVar1) {
        return 1;
      }
      uVar5 = CONCAT44(uVar3,0x164);
      uVar3 = 0x47;
      uVar4 = 0xea;
    }
  }
  else {
    uVar5 = CONCAT44(uVar3,0x156);
    uVar3 = 0x2f;
    uVar4 = 0x186;
  }
  ossl_statem_fatal(param_1,uVar3,0x254,uVar4,"ssl\\tls_srp.c",uVar5);
  return 0;
}

