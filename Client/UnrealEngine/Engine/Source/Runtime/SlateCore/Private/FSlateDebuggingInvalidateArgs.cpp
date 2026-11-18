// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SlateCore
// Functions: 2

// FSlateDebuggingInvalidateArgs @ 14242d4b0

FSlateDebuggingInvalidateArgs * __thiscall
FSlateDebuggingInvalidateArgs::FSlateDebuggingInvalidateArgs
          (FSlateDebuggingInvalidateArgs *this,SWidget *param_1,SWidget *param_2,
          EInvalidateWidgetReason param_3)

{
  this->WidgetInvalidated = param_1;
  this->WidgetInvalidateInvestigator = param_2;
  this->InvalidateWidgetReason = param_3;
  this->InvalidateInvalidationRootReason = None;
  return this;
}

// FSlateDebuggingInvalidateArgs @ 14242d4d0

FSlateDebuggingInvalidateArgs * __thiscall
FSlateDebuggingInvalidateArgs::FSlateDebuggingInvalidateArgs
          (FSlateDebuggingInvalidateArgs *this,SWidget *param_1,SWidget *param_2,
          ESlateDebuggingInvalidateRootReason param_3)

{
  this->WidgetInvalidated = param_1;
  this->WidgetInvalidateInvestigator = param_2;
  this->InvalidateWidgetReason = None;
  this->InvalidateInvalidationRootReason = param_3;
  return this;
}

