// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: oo2core_win64
// Functions: 1

// oodle_x64_wc_probe @ 140d3b200

longlong oodle_x64_wc_probe(void)

{
  undefined8 uVar1;
  ulonglong uVar2;
  undefined8 in_RAX;
  uint uVar3;
  
  uVar1 = rdtsc();
  uVar3 = (uint)((ulonglong)uVar1 >> 0x20);
  uVar2 = rdtsc();
  return ((uVar2 & 0xffffffff) + (CONCAT44(uVar3,(int)(uVar2 >> 0x20)) << 0x20)) -
         (CONCAT44((int)((ulonglong)in_RAX >> 0x20),(int)uVar1) + ((ulonglong)uVar3 << 0x20));
}

