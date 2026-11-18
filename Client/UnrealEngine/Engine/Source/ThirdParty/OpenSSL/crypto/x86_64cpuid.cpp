// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OpenSSL
// Functions: 4

// OPENSSL_ia32_cpuid @ 140ded7f0

/* WARNING: Removing unreachable block (ram,0x000140ded976) */
/* WARNING: Removing unreachable block (ram,0x000140ded8ec) */
/* WARNING: Removing unreachable block (ram,0x000140ded8d7) */
/* WARNING: Removing unreachable block (ram,0x000140ded89e) */
/* WARNING: Removing unreachable block (ram,0x000140ded890) */
/* WARNING: Removing unreachable block (ram,0x000140ded876) */
/* WARNING: Removing unreachable block (ram,0x000140ded865) */
/* WARNING: Removing unreachable block (ram,0x000140ded809) */

ulonglong OPENSSL_ia32_cpuid(uint param_1)

{
  uint *puVar1;
  uint *puVar2;
  longlong lVar3;
  longlong lVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  byte bVar7;
  uint uVar8;
  longlong in_RCX;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  ulonglong uVar12;
  uint uVar13;
  uint in_XCR0;
  
  *(undefined8 *)(in_RCX + 8) = 0;
  puVar1 = (uint *)cpuid_basic_info(0);
  uVar11 = (uint)((puVar1[1] != 0x756e6547 || puVar1[2] != 0x49656e69) || puVar1[3] != 0x6c65746e);
  if ((uVar11 == 0) ||
     ((puVar1[1] != 0x68747541 || puVar1[2] != 0x69746e65) || puVar1[3] != 0x444d4163)) {
L_intel:
    uVar13 = 0xffffffff;
    if (3 < *puVar1) {
      puVar2 = (uint *)cpuid_Deterministic_Cache_Parameters_info(4);
      uVar13 = *puVar2 >> 0xe & 0xfff;
    }
    puVar2 = (uint *)cpuid_Version_info(1);
    param_1 = *puVar2;
    uVar8 = puVar2[3];
    uVar9 = puVar2[2] & 0xbfefffff;
    if (uVar11 == 0) {
      bVar7 = (byte)(param_1 >> 8) & 0xf;
      uVar10 = uVar9 | 0x40000000;
      if (bVar7 == 0xf) {
        uVar10 = uVar9 | 0x40100000;
      }
      uVar9 = uVar10;
      if ((bVar7 == 6) && (((param_1 & 0xfff0ff0) == 0x50670 || ((param_1 & 0xfff0ff0) == 0x80650)))
         ) {
        uVar8 = uVar8 & 0xfbffffff;
      }
    }
    if ((((uVar9 >> 0x1c & 1) != 0) && (uVar10 = uVar9 & 0xefffffff, uVar9 = uVar10, uVar13 != 0))
       && (uVar9 = uVar10 | 0x10000000, (byte)(puVar2[1] >> 0x10) < 2)) {
      uVar9 = uVar10;
    }
  }
  else {
    puVar2 = (uint *)cpuid(0x80000000);
    if (*puVar2 < 0x80000001) goto L_intel;
    lVar3 = cpuid(0x80000001);
    uVar11 = uVar11 | *(uint *)(lVar3 + 0xc) & 0x801;
    if (*puVar2 < 0x80000008) goto L_intel;
    lVar3 = cpuid(0x80000008);
    lVar4 = cpuid_Version_info(1);
    uVar9 = *(uint *)(lVar4 + 8);
    uVar8 = *(uint *)(lVar4 + 0xc);
    if (((uVar9 >> 0x1c & 1) != 0) &&
       ((byte)((uint)*(undefined4 *)(lVar4 + 4) >> 0x10) <=
        (byte)((char)*(undefined4 *)(lVar3 + 0xc) + 1U))) {
      uVar9 = uVar9 & 0xefffffff;
    }
  }
  uVar12 = (ulonglong)(uVar11 & 0x800 | uVar8 & 0xfffff7ff);
  if (6 < *puVar1) {
    lVar3 = cpuid_Extended_Feature_Enumeration_info(7);
    uVar11 = *(uint *)(lVar3 + 4);
    uVar5 = *(undefined4 *)(lVar3 + 0xc);
    if ((uVar8 & 0x4000000) == 0) {
      uVar11 = uVar11 & 0xfff7ffff;
    }
    if ((param_1 & 0xfff0ff0) == 0x50650) {
      uVar11 = uVar11 & 0xfffeffff;
    }
    *(uint *)(in_RCX + 8) = uVar11;
    *(undefined4 *)(in_RCX + 0xc) = uVar5;
  }
  if ((uVar8 & 0x8000000) != 0) {
    uVar6 = xinuse(0);
    uVar11 = in_XCR0 & (uint)uVar6;
    if (((uVar11 & 0xe6) == 0xe6) ||
       (*(uint *)(in_RCX + 8) = *(uint *)(in_RCX + 8) & 0x3fdeffff, (uVar11 & 6) == 6)) goto L_done;
  }
  uVar12 = (ulonglong)(uVar8 & 0xefffe7ff);
  *(uint *)(in_RCX + 8) = *(uint *)(in_RCX + 8) & 0x3fdeffdf;
L_done:
  return (ulonglong)uVar9 | uVar12 << 0x20;
}

// OPENSSL_cleanse @ 140deda00

void OPENSSL_cleanse(undefined8 *param_1,ulonglong param_2)

{
  if (param_2 < 0xf) {
    if (param_2 == 0) {
      return;
    }
  }
  else {
    for (; ((ulonglong)param_1 & 7) != 0; param_1 = (undefined8 *)((longlong)param_1 + 1)) {
      *(undefined1 *)param_1 = 0;
      param_2 = param_2 - 1;
    }
    do {
      *param_1 = 0;
      param_2 = param_2 - 8;
      param_1 = param_1 + 1;
    } while ((param_2 & 0xfffffffffffffff8) != 0);
    if (param_2 == 0) {
      return;
    }
  }
  do {
    *(undefined1 *)param_1 = 0;
    param_2 = param_2 - 1;
    param_1 = (undefined8 *)((longlong)param_1 + 1);
  } while (param_2 != 0);
  return;
}

// CRYPTO_memcmp @ 140deda60

ulonglong CRYPTO_memcmp(byte *param_1,byte *param_2,longlong param_3)

{
  byte bVar1;
  byte bVar2;
  ulonglong uVar3;
  
  uVar3 = 0;
  if (param_3 != 0) {
    if (param_3 == 0x10) {
      return (ulonglong)
             (*(longlong *)param_1 != *(longlong *)param_2 ||
             *(longlong *)(param_1 + 8) != *(longlong *)(param_2 + 8));
    }
    do {
      bVar1 = *param_1;
      param_1 = param_1 + 1;
      bVar2 = *param_2;
      param_2 = param_2 + 1;
      uVar3 = (ulonglong)(byte)((byte)uVar3 | bVar1 ^ bVar2);
      param_3 = param_3 + -1;
    } while (param_3 != 0);
    uVar3 = -uVar3 >> 0x3f;
  }
  return uVar3;
}

// OPENSSL_ia32_rdrand_bytes @ 140dedbb0

longlong OPENSSL_ia32_rdrand_bytes(ulonglong *param_1,ulonglong param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  longlong lVar3;
  bool bVar4;
  
  lVar1 = 0;
  if (param_2 != 0) {
    lVar3 = 8;
    do {
      while( true ) {
        uVar2 = rdrand();
        bVar4 = (bool)rdrandIsValid();
        if (!bVar4) break;
        if (param_2 < 8) {
          do {
            *(char *)param_1 = (char)uVar2;
            param_1 = (ulonglong *)((longlong)param_1 + 1);
            lVar1 = lVar1 + 1;
            uVar2 = uVar2 >> 8;
            param_2 = param_2 - 1;
          } while (param_2 != 0);
          return lVar1;
        }
        *param_1 = uVar2;
        param_1 = param_1 + 1;
        lVar1 = lVar1 + 8;
        param_2 = param_2 - 8;
        if (param_2 == 0) {
          return lVar1;
        }
        lVar3 = 8;
      }
      lVar3 = lVar3 + -1;
    } while (lVar3 != 0);
  }
  return lVar1;
}

