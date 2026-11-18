// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 2

// FNameDebugVisualizer @ 141a6ce80

FNameDebugVisualizer * __thiscall
FNameDebugVisualizer::FNameDebugVisualizer(FNameDebugVisualizer *this,FClangKeepDebugInfo param_1)

{
  return this;
}

// GetBlocks @ 141a80850

uchar ** __thiscall FNameDebugVisualizer::GetBlocks(FNameDebugVisualizer *this)

{
  return (uchar **)(NamePoolData + 0x10);
}

