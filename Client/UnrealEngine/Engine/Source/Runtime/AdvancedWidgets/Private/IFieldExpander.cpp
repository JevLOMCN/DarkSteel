// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AdvancedWidgets
// Functions: 2

// ~IFieldExpander @ 14d83ac90

void __thiscall UE::PropertyViewer::IFieldExpander::~IFieldExpander(IFieldExpander *this)

{
  return;
}

// CanExpandFunction @ 14d8434d0

bool __thiscall
UE::PropertyViewer::IFieldExpander::CanExpandFunction(IFieldExpander *this,UFunction *param_1)

{
  longlong lVar1;
  undefined1 local_18 [24];
  
  lVar1 = (**(code **)((longlong)*this + 0x10))(this,local_18,param_1);
  return (bool)*(undefined1 *)(lVar1 + 8);
}

