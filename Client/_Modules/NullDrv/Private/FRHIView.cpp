// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: NullDrv
// Functions: 1

// GetBindlessHandle @ 1446c5d80

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

FRHIDescriptorHandle __thiscall FRHIView::GetBindlessHandle(FRHIView *this)

{
  FRHIDescriptorHandle in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  *(undefined4 *)in_RDX = 0xffffffff;
  *(undefined1 *)((longlong)in_RDX + 4) = 9;
  return in_RDX;
}

