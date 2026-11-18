// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ToolMenus
// Functions: 1

// FToolMenuIterationInfo @ 142c39ff0

/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */

FToolMenuIterationInfo * __thiscall
UE::ToolMenus::FToolMenuIterationInfo::FToolMenuIterationInfo
          (FToolMenuIterationInfo *this,UToolMenu *param_1,FToolMenuSection *param_2,
          FToolMenuEntry *param_3)

{
  this->Menu = param_1;
  this->Section = param_2;
  this->Entry = param_3;
  return this;
}

