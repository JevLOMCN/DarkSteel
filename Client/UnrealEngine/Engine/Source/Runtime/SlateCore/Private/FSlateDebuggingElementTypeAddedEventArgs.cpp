// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SlateCore
// Functions: 1

// FSlateDebuggingElementTypeAddedEventArgs @ 14242d430

/* WARNING: Enum "Type": Some values do not have unique names */

FSlateDebuggingElementTypeAddedEventArgs * __thiscall
FSlateDebuggingElementTypeAddedEventArgs::FSlateDebuggingElementTypeAddedEventArgs
          (FSlateDebuggingElementTypeAddedEventArgs *this,FSlateWindowElementList *param_1,
          int param_2,EElementType param_3)

{
  this->ElementList = param_1;
  this->ElementIndex = param_2;
  this->ElementType = param_3;
  return this;
}

