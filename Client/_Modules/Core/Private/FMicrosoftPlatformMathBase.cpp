// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 1

// CeilLogTwo @ 141b39c00

uint __cdecl FMicrosoftPlatformMathBase::CeilLogTwo(uint param_1)

{
  ulonglong uVar1;
  longlong lVar2;
  uint uVar3;
  
  uVar3 = 1;
  if (param_1 != 0) {
    uVar3 = param_1;
  }
  uVar1 = (ulonglong)(uVar3 - 1) * 2 + 1;
  lVar2 = 0x3f;
  if (uVar1 != 0) {
    for (; uVar1 >> lVar2 == 0; lVar2 = lVar2 + -1) {
    }
  }
  return (uint)lVar2;
}

