// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ToolMenus
// Functions: 1

// FToolMenuEntryWidgetData @ 142c39f00

/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */

FToolMenuEntryWidgetData * __thiscall
FToolMenuEntryWidgetData::FToolMenuEntryWidgetData(FToolMenuEntryWidgetData *this)

{
  this->bNoIndent = false;
  this->bSearchable = false;
  this->bNoPadding = false;
  FMenuEntryStyleParams::FMenuEntryStyleParams(&this->StyleParams);
  (this->ResizeParams).ClippingPriority.Value = 0;
  (this->ResizeParams).ClippingPriority.bIsSet = false;
  *(undefined8 *)&(this->ResizeParams).ClippingPriority.Getter.field_0x10 = 0;
  *(undefined8 *)&(this->ResizeParams).ClippingPriority.Getter = 0;
  *(undefined8 *)&(this->ResizeParams).ClippingPriority.Getter.field_0x8 = 0;
  (this->ResizeParams).AllowClipping.Value = false;
  (this->ResizeParams).AllowClipping.bIsSet = false;
  *(undefined8 *)&(this->ResizeParams).AllowClipping.Getter.field_0x10 = 0;
  *(undefined8 *)&(this->ResizeParams).AllowClipping.Getter = 0;
  *(undefined8 *)&(this->ResizeParams).AllowClipping.Getter.field_0x8 = 0;
  (this->ResizeParams).VisibleInOverflow.Value = false;
  (this->ResizeParams).VisibleInOverflow.bIsSet = false;
  *(undefined8 *)&(this->ResizeParams).VisibleInOverflow.Getter.field_0x10 = 0;
  *(undefined8 *)&(this->ResizeParams).VisibleInOverflow.Getter = 0;
  *(undefined8 *)&(this->ResizeParams).VisibleInOverflow.Getter.field_0x8 = 0;
  (this->ResizeParams).Wrapping.Allow.Value = false;
  (this->ResizeParams).Wrapping.Allow.bIsSet = false;
  *(undefined8 *)&(this->ResizeParams).Wrapping.Allow.Getter.field_0x10 = 0;
  *(undefined8 *)&(this->ResizeParams).Wrapping.Allow.Getter = 0;
  *(undefined8 *)&(this->ResizeParams).Wrapping.Allow.Getter.field_0x8 = 0;
  (this->ResizeParams).Wrapping.Priority.Value = 0;
  (this->ResizeParams).Wrapping.Priority.bIsSet = false;
  *(undefined8 *)&(this->ResizeParams).Wrapping.Priority.Getter.field_0x10 = 0;
  *(undefined8 *)&(this->ResizeParams).Wrapping.Priority.Getter = 0;
  *(undefined8 *)&(this->ResizeParams).Wrapping.Priority.Getter.field_0x8 = 0;
  (this->ResizeParams).Wrapping.Mode.Value = Preferred;
  (this->ResizeParams).Wrapping.Mode.bIsSet = false;
  *(undefined8 *)&(this->ResizeParams).Wrapping.Mode.Getter.field_0x10 = 0;
  *(undefined8 *)&(this->ResizeParams).Wrapping.Mode.Getter = 0;
  *(undefined8 *)&(this->ResizeParams).Wrapping.Mode.Getter.field_0x8 = 0;
  (this->ResizeParams).Wrapping.VerticalOverflowBehavior.bIsSet = false;
  (this->ResizeParams).Wrapping.ForceNewLine.bIsSet = false;
  return this;
}

