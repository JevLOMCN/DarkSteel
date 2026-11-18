// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: openexr
// Functions: 1

// libdeflate_init_x86_cpu_features @ 14f584e20

/* WARNING: Removing unreachable block (ram,0x00014f584eb6) */
/* WARNING: Removing unreachable block (ram,0x00014f584e54) */
/* WARNING: Removing unreachable block (ram,0x00014f584e2a) */

void libdeflate_init_x86_cpu_features(void)

{
  uint *puVar1;
  longlong lVar2;
  uint uVar3;
  undefined8 uVar4;
  uint uVar5;
  uint uVar6;
  bool bVar7;
  byte in_XCR0;
  
  puVar1 = (uint *)cpuid_basic_info(0);
  uVar6 = 0;
  bVar7 = false;
  if (*puVar1 != 0) {
    lVar2 = cpuid_Version_info(1);
    uVar3 = *(uint *)(lVar2 + 0xc);
    uVar5 = *(uint *)(lVar2 + 8) >> 0x1a & 1;
    uVar6 = uVar5 | 2;
    if ((uVar3 & 2) == 0) {
      uVar6 = uVar5;
    }
    if ((uVar3 >> 0x1b & 1) != 0) {
      uVar4 = xinuse(0);
      bVar7 = (in_XCR0 & (byte)uVar4 & 6) == 6;
    }
    if ((bVar7) && ((uVar3 >> 0x1c & 1) != 0)) {
      uVar6 = uVar6 | 4;
    }
    if (6 < *puVar1) {
      lVar2 = cpuid_Extended_Feature_Enumeration_info(7);
      if ((bVar7) && ((*(uint *)(lVar2 + 4) & 0x20) != 0)) {
        uVar6 = uVar6 | 8;
      }
      if ((*(uint *)(lVar2 + 4) >> 8 & 1) != 0) {
        uVar6 = uVar6 | 0x10;
      }
    }
  }
  libdeflate_x86_cpu_features = uVar6 | 0x80000000;
  return;
}

