// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 1

// CheckForTimedPauseInstruction @ 141aa1b80

/* WARNING: Removing unreachable block (ram,0x000141aa1b9b) */
/* WARNING: Removing unreachable block (ram,0x000141aa1b8d) */

bool __cdecl FCPUIDQueriedData::CheckForTimedPauseInstruction(void)

{
  int *piVar1;
  longlong lVar2;
  bool bVar3;
  
  bVar3 = false;
  piVar1 = (int *)cpuid_basic_info(0);
  if ((6 < *piVar1) &&
     (lVar2 = cpuid_Extended_Feature_Enumeration_info(7), (*(uint *)(lVar2 + 0xc) & 0x20) != 0)) {
    lVar2 = rdtsc();
    tpause(0,(int)((ulonglong)(lVar2 + 0x400) >> 0x20),(int)(lVar2 + 0x400));
    bVar3 = true;
  }
  return bVar3;
}

