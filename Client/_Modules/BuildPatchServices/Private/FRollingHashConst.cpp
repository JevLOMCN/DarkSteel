// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: BuildPatchServices
// Functions: 1

// Init @ 1431e53c0

void __cdecl FRollingHashConst::Init(void)

{
  bool bVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulong64 *puVar5;
  longlong lVar6;
  
  uVar4 = 0;
  bVar1 = false;
  lVar6 = 0x100;
  puVar5 = HashTable;
  do {
    uVar3 = uVar4 >> 1 ^ 0xc96c5795d7870f42;
    if (!bVar1) {
      uVar3 = uVar4 >> 1;
    }
    uVar2 = uVar3 >> 1 ^ 0xc96c5795d7870f42;
    if ((uVar3 & 1) == 0) {
      uVar2 = uVar3 >> 1;
    }
    uVar3 = uVar2 >> 1 ^ 0xc96c5795d7870f42;
    if ((uVar2 & 1) == 0) {
      uVar3 = uVar2 >> 1;
    }
    uVar2 = uVar3 >> 1 ^ 0xc96c5795d7870f42;
    if ((uVar3 & 1) == 0) {
      uVar2 = uVar3 >> 1;
    }
    uVar3 = uVar2 >> 1 ^ 0xc96c5795d7870f42;
    if ((uVar2 & 1) == 0) {
      uVar3 = uVar2 >> 1;
    }
    uVar2 = uVar3 >> 1 ^ 0xc96c5795d7870f42;
    if ((uVar3 & 1) == 0) {
      uVar2 = uVar3 >> 1;
    }
    uVar3 = uVar2 >> 1 ^ 0xc96c5795d7870f42;
    if ((uVar2 & 1) == 0) {
      uVar3 = uVar2 >> 1;
    }
    uVar2 = uVar3 >> 1 ^ 0xc96c5795d7870f42;
    if ((uVar3 & 1) == 0) {
      uVar2 = uVar3 >> 1;
    }
    uVar4 = uVar4 + 1;
    bVar1 = (bool)(bVar1 ^ 1);
    *puVar5 = uVar2;
    lVar6 = lVar6 + -1;
    puVar5 = puVar5 + 1;
  } while (lVar6 != 0);
  return;
}

