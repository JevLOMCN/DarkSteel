// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: radaudio_decoder_win64
// Functions: 1

// UERArrCPUx86_detect_ @ 14f8cc1a0

/* WARNING: Removing unreachable block (ram,0x00014f8cc2d6) */
/* WARNING: Removing unreachable block (ram,0x00014f8cc1f9) */
/* WARNING: Removing unreachable block (ram,0x00014f8cc1c6) */

void UERArrCPUx86_detect_(void)

{
  uint *puVar1;
  uint *puVar2;
  longlong lVar3;
  undefined8 uVar4;
  uint uVar5;
  byte bVar6;
  bool bVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  byte bVar12;
  uint in_XCR0;
  
  if ((UERAg_rrCPUx86_feature_flags_ & 1) == 0) {
    puVar1 = (uint *)cpuid_basic_info(0);
    bVar7 = false;
    if (((puVar1[1] == 0x68747541) && (bVar7 = false, puVar1[2] == 0x69746e65)) &&
       (bVar7 = false, puVar1[3] == 0x444d4163)) {
      bVar7 = true;
    }
    puVar2 = (uint *)cpuid_Version_info(1);
    uVar8 = puVar2[3];
    uVar9 = UERAg_rrCPUx86_feature_flags_ | 2;
    if ((puVar2[2] >> 0x1a & 1) == 0) {
      uVar9 = UERAg_rrCPUx86_feature_flags_;
    }
    uVar11 = uVar9 | 4;
    if ((uVar8 >> 9 & 1) == 0) {
      uVar11 = uVar9;
    }
    uVar9 = uVar11 | 8;
    if ((uVar8 >> 0x13 & 1) == 0) {
      uVar9 = uVar11;
    }
    uVar11 = uVar9 | 0x10;
    if ((uVar8 >> 0x14 & 1) == 0) {
      uVar11 = uVar9;
    }
    bVar6 = (byte)(uVar8 >> 0x18);
    bVar12 = bVar6 >> 4 & 1;
    uVar9 = uVar11 | 0x2000;
    if ((uVar8 >> 0x17 & 1) == 0) {
      uVar9 = uVar11;
    }
    if (((bVar7) && ((*puVar2 & 0xf00) == 0xf00)) && (7 < (byte)((int)*puVar2 >> 0x14))) {
      uVar9 = uVar9 | 0x200;
    }
    uVar11 = 0;
    if ((bVar6 >> 3 & 1) != 0) {
      uVar4 = xinuse(0);
      uVar11 = in_XCR0 & (uint)uVar4;
    }
    uVar10 = uVar9;
    if ((uVar11 & 6) == 6) {
      uVar10 = uVar9 | 0x20;
      if (bVar12 == 0) {
        uVar10 = uVar9;
      }
      if ((bVar6 >> 5 & 1) != 0) {
        uVar10 = uVar10 | 0x400;
      }
    }
    if (6 < *puVar1) {
      lVar3 = cpuid_Extended_Feature_Enumeration_info(7);
      uVar9 = *(uint *)(lVar3 + 4);
      if (((bVar12 != 0) && ((uVar11 & 6) == 6)) && ((uVar8 >> 0x17 & 1) != 0)) {
        uVar8 = uVar10 | 0x40;
        if ((uVar9 & 8) == 0) {
          uVar8 = uVar10;
        }
        uVar5 = uVar8 | 0x80;
        if ((uVar9 >> 8 & 1) == 0) {
          uVar5 = uVar8;
        }
        uVar10 = uVar5 | 0x100;
        if ((uVar9 & 0x128) != 0x128) {
          uVar10 = uVar5;
        }
        if ((uVar11 & 0xe6) == 0xe6) {
          uVar8 = uVar10 | 0x800;
          if ((uVar9 & 0xc0030000) != 0xc0030000) {
            uVar8 = uVar10;
          }
          uVar10 = uVar8;
          if ((*(uint *)(lVar3 + 0xc) & 0x40) != 0) {
            uVar10 = uVar10 | 0x1000;
          }
        }
      }
    }
    if (((uVar10 >> 9 & 1) != 0) && ((uVar10 & 0x5fe) != 0x5fe)) {
      uVar10 = uVar10 & 0xfffffdff;
    }
    UERAg_rrCPUx86_feature_flags_ = uVar10 | 1;
  }
  return;
}

