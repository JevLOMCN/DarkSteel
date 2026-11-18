// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: binka_ue_decode_win64_static
// Functions: 3

// CPU_available @ 14f8d8ee0

/* WARNING: Removing unreachable block (ram,0x00014f8d8ef8) */
/* WARNING: Removing unreachable block (ram,0x00014f8d8eea) */

int __cdecl CPU_available(void)

{
  int *piVar1;
  longlong lVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  
  piVar1 = (int *)cpuid_basic_info(0);
  if (*piVar1 < 1) {
    uVar3 = 0;
  }
  else {
    lVar2 = cpuid_Version_info(1);
    uVar3 = *(uint *)(lVar2 + 8);
    uVar5 = uVar3 >> 0x17 & 1;
    uVar4 = uVar5 | 4;
    if ((uVar3 & 0x2000000) == 0) {
      uVar4 = uVar5;
    }
    uVar5 = uVar4 | 8;
    if ((uVar3 & 0x4000000) == 0) {
      uVar5 = uVar4;
    }
    uVar3 = uVar5 | 0x10;
    if ((*(uint *)(lVar2 + 0xc) & 1) == 0) {
      uVar3 = uVar5;
    }
    if ((*(uint *)(lVar2 + 0xc) >> 9 & 1) != 0) {
      return uVar3 | 0x20;
    }
  }
  return uVar3;
}

// CPU_checkUEBA @ 14f8d8f50

/* WARNING: Removing unreachable block (ram,0x00014f8d8f7d) */
/* WARNING: Removing unreachable block (ram,0x00014f8d8f6f) */

void __cdecl CPU_checkUEBA(int param_1,int param_2)

{
  int *piVar1;
  longlong lVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  
  if (cpu_features_availUEBA == 0) {
    piVar1 = (int *)cpuid_basic_info(0);
    uVar5 = 0;
    if (0 < *piVar1) {
      lVar2 = cpuid_Version_info(1);
      uVar5 = *(uint *)(lVar2 + 8);
      uVar4 = uVar5 >> 0x17 & 1;
      uVar3 = uVar4 | 4;
      if ((uVar5 & 0x2000000) == 0) {
        uVar3 = uVar4;
      }
      uVar4 = uVar3 | 8;
      if ((uVar5 & 0x4000000) == 0) {
        uVar4 = uVar3;
      }
      uVar5 = uVar4 | 0x10;
      if ((*(uint *)(lVar2 + 0xc) & 1) == 0) {
        uVar5 = uVar4;
      }
      if ((*(uint *)(lVar2 + 0xc) >> 9 & 1) != 0) {
        uVar5 = uVar5 | 0x20;
      }
    }
    cpu_features_to_useUEBA = uVar5 | 0x80000000;
    cpu_features_availUEBA = cpu_features_to_useUEBA;
  }
  cpu_features_to_useUEBA =
       (cpu_features_availUEBA & param_1 | cpu_features_to_useUEBA) &
       ~(cpu_features_availUEBA & param_2);
  return;
}

// CPU_clearUEBA @ 14f8d9010

void __cdecl CPU_clearUEBA(void)

{
  return;
}

