// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: libOpus
// Functions: 1

// opus_select_arch @ 14f870758

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x00014f870783) */
/* WARNING: Removing unreachable block (ram,0x00014f870771) */

char opus_select_arch(void)

{
  int *piVar1;
  longlong lVar2;
  char cVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  
  piVar1 = (int *)cpuid_basic_info(0);
  if (*piVar1 == 0) {
    uVar7 = 0;
    uVar6 = 0;
    uVar4 = 0;
    uVar5 = 0;
  }
  else {
    lVar2 = cpuid_Version_info(1);
    uVar7 = *(uint *)(lVar2 + 8) >> 0x19 & 1;
    uVar4 = *(uint *)(lVar2 + 0xc) >> 0x13 & 1;
    uVar6 = *(uint *)(lVar2 + 8) >> 0x1a & 1;
    uVar5 = *(uint *)(lVar2 + 0xc) >> 0x1c & 1;
  }
  if (uVar7 == 0) {
    cVar3 = '\0';
  }
  else if (uVar6 == 0) {
    cVar3 = '\x01';
  }
  else if (uVar4 == 0) {
    cVar3 = '\x02';
  }
  else {
    cVar3 = (uVar5 != 0) + '\x03';
  }
  return cVar3;
}

