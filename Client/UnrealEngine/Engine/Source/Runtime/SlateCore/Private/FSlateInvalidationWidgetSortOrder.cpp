// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SlateCore
// Functions: 3

// FSlateInvalidationWidgetSortOrder @ 142476b30

FSlateInvalidationWidgetSortOrder * __thiscall
FSlateInvalidationWidgetSortOrder::FSlateInvalidationWidgetSortOrder
          (FSlateInvalidationWidgetSortOrder *this,FSlateInvalidationWidgetList *param_1,
          FSlateInvalidationWidgetIndex param_2)

{
  this->Order = 0;
  this->Order = *(int *)((ulonglong)param_2.ArrayIndex * 0x40 + 8 + *(longlong *)&param_1->Data) *
                0x400 + ((uint)param_2 >> 0x10);
  return this;
}

// LimitMax @ 14249b4e0

FSlateInvalidationWidgetSortOrder __cdecl FSlateInvalidationWidgetSortOrder::LimitMax(void)

{
  undefined4 *in_RCX;
  
  *in_RCX = 0xffffffff;
  return (FSlateInvalidationWidgetSortOrder)(uint)in_RCX;
}

// LimitMin @ 14249b4f0

FSlateInvalidationWidgetSortOrder __cdecl FSlateInvalidationWidgetSortOrder::LimitMin(void)

{
  undefined4 *in_RCX;
  
  *in_RCX = 0;
  return (FSlateInvalidationWidgetSortOrder)(uint)in_RCX;
}

