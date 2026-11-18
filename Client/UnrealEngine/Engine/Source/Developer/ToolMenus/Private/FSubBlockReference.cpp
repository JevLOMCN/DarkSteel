// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ToolMenus
// Functions: 3

// FSubBlockReference @ 142c380f0

/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */

FSubBlockReference * __thiscall
UE::ToolMenus::FSubBlockReference::FSubBlockReference
          (FSubBlockReference *this,FSubBlockReference *param_1)

{
  this->ParentMenu = param_1->ParentMenu;
  this->Section = param_1->Section;
  this->Entry = param_1->Entry;
  return this;
}

// FSubBlockReference @ 142c38110

/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */

FSubBlockReference * __thiscall
UE::ToolMenus::FSubBlockReference::FSubBlockReference
          (FSubBlockReference *this,UToolMenu *param_1,FToolMenuSection *param_2,
          FToolMenuEntry *param_3)

{
  this->ParentMenu = param_1;
  this->Section = param_2;
  this->Entry = param_3;
  return this;
}

// FSubBlockReference @ 142c38130

/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */

FSubBlockReference * __thiscall
UE::ToolMenus::FSubBlockReference::FSubBlockReference(FSubBlockReference *this)

{
  this->ParentMenu = (UToolMenu *)0x0;
  this->Section = (FToolMenuSection *)0x0;
  this->Entry = (FToolMenuEntry *)0x0;
  return this;
}

