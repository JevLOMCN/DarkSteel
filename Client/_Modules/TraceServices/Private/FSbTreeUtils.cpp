// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: TraceServices
// Functions: 4

// GetCellAtDepth @ 14d462140

uint __cdecl TraceServices::FSbTreeUtils::GetCellAtDepth(uint param_1,uint param_2)

{
  uint uVar1;
  
  uVar1 = 1 << ((byte)param_2 & 0x1f);
  return param_1 * 2 & ~uVar1 | uVar1 - 1;
}

// GetCellWidth @ 14d462160

uint __cdecl TraceServices::FSbTreeUtils::GetCellWidth(uint param_1)

{
  return ((param_1 + 1 ^ param_1) >> 1) + 1;
}

// GetCommonDepth @ 14d464180

uint __cdecl TraceServices::FSbTreeUtils::GetCommonDepth(uint param_1,uint param_2)

{
  ulonglong uVar1;
  longlong lVar2;
  
  uVar1 = (ulonglong)(param_1 ^ param_2) * 2 + 1;
  lVar2 = 0x3f;
  if (uVar1 != 0) {
    for (; uVar1 >> lVar2 == 0; lVar2 = lVar2 + -1) {
    }
  }
  return (uint)lVar2;
}

// GetMaxDepth @ 14d469010

uint __cdecl TraceServices::FSbTreeUtils::GetMaxDepth(uint param_1)

{
  ulonglong uVar1;
  longlong lVar2;
  
  uVar1 = (ulonglong)param_1 * 2 + 1;
  lVar2 = 0x3f;
  if (uVar1 != 0) {
    for (; uVar1 >> lVar2 == 0; lVar2 = lVar2 + -1) {
    }
  }
  return (uint)lVar2;
}

