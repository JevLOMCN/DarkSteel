// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MSVCRT
// Functions: 1

// __isa_available_init @ 15015b934

/* WARNING: Removing unreachable block (ram,0x00015015ba25) */
/* WARNING: Removing unreachable block (ram,0x00015015ba15) */
/* WARNING: Removing unreachable block (ram,0x00015015b9f0) */
/* WARNING: Removing unreachable block (ram,0x00015015b96e) */
/* WARNING: Removing unreachable block (ram,0x00015015b94c) */

int __cdecl __isa_available_init(void)

{
  int *piVar1;
  uint *puVar2;
  int *piVar3;
  longlong lVar4;
  uint uVar5;
  byte bVar6;
  ulonglong uVar7;
  uint uVar8;
  ulonglong uVar9;
  uint uVar10;
  uint uVar11;
  ulonglong uVar12;
  ulonglong in_XCR0;
  
  piVar1 = (int *)cpuid_basic_info(0);
  puVar2 = (uint *)cpuid_Version_info(1);
  uVar5 = puVar2[3];
  if ((piVar1[2] == 0x49656e69 && piVar1[3] == 0x6c65746e) && piVar1[1] == 0x756e6547) {
    uVar8 = *puVar2 & 0xfff3ff0;
    __memset_fast_string_threshold = 0x8000;
    __memset_nt_threshold = -1;
    if ((((uVar8 == 0x106c0) || (uVar8 == 0x20660)) || (uVar8 == 0x20670)) ||
       ((uVar8 - 0x30650 < 0x21 &&
        ((0x100010001U >> ((ulonglong)(uVar8 - 0x30650) & 0x3f) & 1) != 0)))) {
      __favor = __favor | 1;
    }
  }
  uVar8 = 0;
  uVar10 = 0;
  uVar11 = 0;
  uVar12 = 0;
  if (6 < *piVar1) {
    piVar3 = (int *)cpuid_Extended_Feature_Enumeration_info(7);
    uVar8 = piVar3[1];
    uVar10 = piVar3[2];
    if ((uVar8 >> 9 & 1) != 0) {
      __favor = __favor | 2;
    }
    if (0 < *piVar3) {
      lVar4 = cpuid_Extended_Feature_Enumeration_info(7);
      uVar11 = *(uint *)(lVar4 + 8);
    }
    if (0x23 < *piVar1) {
      lVar4 = cpuid(0x24);
      uVar12 = (ulonglong)*(uint *)(lVar4 + 4);
    }
  }
  __isa_available = 1;
  __isa_enabled = 2;
  uVar9 = __isa_inverted & 0xfffffffffffffffe;
  if ((uVar5 >> 0x14 & 1) != 0) {
    __isa_available = 2;
    __isa_enabled = 6;
    uVar9 = __isa_inverted & 0xffffffffffffffee;
  }
  __isa_inverted = uVar9;
  if ((uVar5 >> 0x1b & 1) != 0) {
    uVar9 = xinuse(0);
    uVar9 = in_XCR0 & uVar9 & 0xffffffff;
    if (((uVar5 >> 0x1c & 1) != 0) && (bVar6 = (byte)uVar9, (bVar6 & 6) == 6)) {
      __isa_available = 3;
      uVar7 = __isa_inverted;
      uVar5 = __isa_enabled | 8;
      if ((uVar8 & 0x20) != 0) {
        __isa_available = 5;
        uVar7 = __isa_inverted & 0xfffffffffffffffd;
        uVar5 = __isa_enabled | 0x28;
        if (((uVar8 & 0xd0030000) == 0xd0030000) && ((bVar6 & 0xe0) == 0xe0)) {
          __isa_enabled = __isa_enabled | 0x68;
          __isa_available = 6;
          uVar7 = __isa_inverted & 0xffffffffffffffd9;
          uVar5 = __isa_enabled;
        }
      }
      __isa_enabled = uVar5;
      __isa_inverted = uVar7;
      if ((uVar10 >> 0x17 & 1) != 0) {
        __isa_inverted = __isa_inverted & 0xfffffffffeffffff;
      }
      if (((uVar11 >> 0x13 & 1) != 0) && ((bVar6 & 0xe0) == 0xe0)) {
        __avx10_version = (uint)uVar12 & 0x400ff;
        __isa_inverted = ~((ulonglong)((uint)(uVar12 >> 0x10) & 6) | 0x1000029) & __isa_inverted;
        if (1 < (byte)__avx10_version) {
          __isa_inverted = __isa_inverted & 0xffffffffffffffbf;
        }
      }
    }
    if (((uVar11 >> 0x15 & 1) != 0) && ((uVar9 >> 0x13 & 1) != 0)) {
      __isa_inverted = __isa_inverted & 0xffffffffffffff7f;
    }
  }
  return 0;
}

