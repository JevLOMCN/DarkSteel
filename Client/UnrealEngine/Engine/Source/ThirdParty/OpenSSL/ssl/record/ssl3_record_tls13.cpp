// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OpenSSL
// Functions: 1

// tls13_enc @ 14f68fe10

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 tls13_enc(longlong param_1,int *param_2,longlong param_3,int param_4)

{
  byte *pbVar1;
  int iVar2;
  uint uVar3;
  longlong lVar4;
  longlong lVar5;
  ulonglong uVar6;
  longlong lVar7;
  undefined1 auStack_e8 [32];
  byte *local_c8;
  int local_c0;
  int local_b8;
  uint local_b4;
  int local_b0 [2];
  void *local_a8;
  byte *local_a0;
  longlong local_98;
  undefined1 local_90 [40];
  byte abStack_68 [24];
  undefined1 local_50 [8];
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_e8;
  if (param_3 != 1) {
    local_c0 = 0x29;
    local_c8 = (byte *)0x153488aa0;
    ossl_statem_fatal(param_1,0x50,0x261,0x44);
    return 0xffffffff;
  }
  if (param_4 == 0) {
    lVar7 = *(longlong *)(param_1 + 0x438);
    lVar4 = 0x440;
    lVar5 = 0x16c8;
  }
  else {
    lVar7 = *(longlong *)(param_1 + 0x468);
    lVar4 = 0x470;
    lVar5 = 0x16d0;
  }
  local_a8 = (void *)(lVar4 + param_1);
  local_a0 = (byte *)(param_1 + lVar5);
  if ((lVar7 == 0) || (param_2[1] == 0x15)) {
    memmove(*(void **)(param_2 + 8),*(void **)(param_2 + 10),*(size_t *)(param_2 + 2));
    *(undefined8 *)(param_2 + 10) = *(undefined8 *)(param_2 + 8);
    return 1;
  }
  iVar2 = EVP_CIPHER_CTX_iv_length(lVar7);
  uVar6 = (ulonglong)iVar2;
  if (*(int *)(param_1 + 0x84) - 3U < 2) {
    lVar4 = *(longlong *)(param_1 + 0x508);
    if (((lVar4 == 0) || (*(int *)(lVar4 + 0x228) == 0)) &&
       ((lVar4 = *(longlong *)(param_1 + 0x510), lVar4 == 0 || (*(int *)(lVar4 + 0x228) == 0)))) {
      local_c0 = 0x4d;
      goto LAB_14f6902a5;
    }
    uVar3 = *(uint *)(*(longlong *)(lVar4 + 0x1e0) + 0x24);
  }
  else {
    lVar4 = *(longlong *)(*(longlong *)(param_1 + 0xa8) + 0x238);
    if (lVar4 == 0) {
      local_c0 = 0x59;
LAB_14f6902a5:
      local_c8 = (byte *)0x153488aa0;
      ossl_statem_fatal(param_1,0x50,0x261,0x44);
      return 0xffffffff;
    }
    uVar3 = *(uint *)(lVar4 + 0x24);
  }
  local_b4 = uVar3 & 0x3c000;
  lVar4 = 8;
  if (local_b4 == 0) {
    if (((uVar3 & 0x3000) == 0) && ((uVar3 >> 0x13 & 1) == 0)) {
      local_c0 = 0x70;
      goto LAB_14f690278;
    }
    lVar5 = 0x10;
LAB_14f68ffbb:
    if (param_4 == 0) goto LAB_14f68ffc0;
  }
  else {
    lVar5 = 0x10;
    if ((uVar3 & 0x30000) != 0) {
      lVar5 = 8;
    }
    if (param_4 != 0) {
      iVar2 = EVP_CIPHER_CTX_ctrl(lVar7,0x11,lVar5,0);
      if (iVar2 < 1) {
        local_c0 = 0x67;
        goto LAB_14f690278;
      }
      goto LAB_14f68ffbb;
    }
LAB_14f68ffc0:
    if (*(ulonglong *)(param_2 + 2) < lVar5 + 1U) {
      return 0;
    }
    *(ulonglong *)(param_2 + 2) = *(ulonglong *)(param_2 + 2) - lVar5;
  }
  if (uVar6 < 8) {
    local_c0 = 0x82;
  }
  else {
    memcpy(abStack_68 + 8,local_a8,uVar6 - 8);
    abStack_68[uVar6] = *local_a0 ^ *(byte *)((uVar6 - 8) + (longlong)local_a8);
    abStack_68[uVar6 + 1] = *(byte *)((uVar6 - 7) + (longlong)local_a8) ^ local_a0[1];
    abStack_68[uVar6 + 2] = *(byte *)((uVar6 - 6) + (longlong)local_a8) ^ local_a0[2];
    abStack_68[uVar6 + 3] = *(byte *)((uVar6 - 5) + (longlong)local_a8) ^ local_a0[3];
    abStack_68[uVar6 + 4] = *(byte *)((uVar6 - 4) + (longlong)local_a8) ^ local_a0[4];
    abStack_68[uVar6 + 5] = *(byte *)((uVar6 - 3) + (longlong)local_a8) ^ local_a0[5];
    abStack_68[uVar6 + 6] = *(byte *)((uVar6 - 2) + (longlong)local_a8) ^ local_a0[6];
    abStack_68[uVar6 + 7] = *(byte *)((uVar6 - 1) + (longlong)local_a8) ^ local_a0[7];
    do {
      pbVar1 = local_a0 + lVar4 + -1;
      *pbVar1 = *pbVar1 + 1;
      if (*pbVar1 != 0) break;
      lVar4 = lVar4 + -1;
    } while (lVar4 != 0);
    if (lVar4 == 0) {
      return 0xffffffff;
    }
    local_c8 = abStack_68 + 8;
    local_c0 = param_4;
    iVar2 = EVP_CipherInit_ex(lVar7,0,0,0);
    if (iVar2 < 1) {
      return 0xffffffff;
    }
    if ((param_4 == 0) &&
       (iVar2 = EVP_CIPHER_CTX_ctrl(lVar7,0x11,lVar5,
                                    *(longlong *)(param_2 + 8) + *(longlong *)(param_2 + 2)),
       iVar2 < 1)) {
      return 0xffffffff;
    }
    iVar2 = WPACKET_init_static_len(local_90,local_50,5);
    if ((((iVar2 == 0) || (iVar2 = WPACKET_put_bytes__(local_90,(longlong)param_2[1],1), iVar2 == 0)
         ) || (iVar2 = WPACKET_put_bytes__(local_90,(longlong)*param_2,2), iVar2 == 0)) ||
       (((iVar2 = WPACKET_put_bytes__(local_90,*(longlong *)(param_2 + 2) + lVar5,2), iVar2 == 0 ||
         (iVar2 = WPACKET_get_total_written(local_90,&local_98), iVar2 == 0)) ||
        ((local_98 != 5 || (iVar2 = WPACKET_finish(local_90), iVar2 == 0)))))) {
      WPACKET_cleanup(local_90);
      return 0xffffffff;
    }
    if (local_b4 != 0) {
      local_c8 = (byte *)CONCAT44(local_c8._4_4_,param_2[2]);
      iVar2 = EVP_CipherUpdate(lVar7,0,&local_b8,0);
      if (iVar2 < 1) {
        return 0xffffffff;
      }
    }
    local_c8._0_4_ = 5;
    iVar2 = EVP_CipherUpdate(lVar7,0,&local_b8,local_50);
    if (iVar2 < 1) {
      return 0xffffffff;
    }
    local_c8 = (byte *)CONCAT44(local_c8._4_4_,param_2[2]);
    iVar2 = EVP_CipherUpdate(lVar7,*(undefined8 *)(param_2 + 8),&local_b8,
                             *(undefined8 *)(param_2 + 10));
    if (iVar2 < 1) {
      return 0xffffffff;
    }
    iVar2 = EVP_CipherFinal_ex(lVar7,(longlong)local_b8 + *(longlong *)(param_2 + 8),local_b0);
    if (iVar2 < 1) {
      return 0xffffffff;
    }
    if ((longlong)(local_b0[0] + local_b8) != *(longlong *)(param_2 + 2)) {
      return 0xffffffff;
    }
    if (param_4 == 0) {
      return 1;
    }
    iVar2 = EVP_CIPHER_CTX_ctrl(lVar7,0x10,lVar5,
                                *(longlong *)(param_2 + 8) + *(longlong *)(param_2 + 2));
    if (0 < iVar2) {
      *(longlong *)(param_2 + 2) = *(longlong *)(param_2 + 2) + lVar5;
      return 1;
    }
    local_c0 = 0xbd;
  }
LAB_14f690278:
  local_c8 = (byte *)0x153488aa0;
  ossl_statem_fatal(param_1,0x50,0x261,0x44);
  return 0xffffffff;
}

