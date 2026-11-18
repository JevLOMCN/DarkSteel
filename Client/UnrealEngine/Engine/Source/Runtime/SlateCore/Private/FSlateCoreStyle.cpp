// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SlateCore
// Functions: 1

// FSlateCoreStyle @ 142545bf0

FSlateCoreStyle * __thiscall FSlateCoreStyle::FSlateCoreStyle(FSlateCoreStyle *this,FName *param_1)

{
  TRawPtrProxy<FLinearColor> local_res8 [4];
  
  FSlateStyleSet::FSlateStyleSet((FSlateStyleSet *)this,param_1);
  this->_padding_ = (longlong)&___7FSlateCoreStyle__6B_;
  local_res8[0].Object = ::operator_new(0x10);
  if (local_res8[0].Object != (FLinearColor *)0x0) {
    ((local_res8[0].Object)->field0_0x0)._s_0.R = 0.72;
    ((local_res8[0].Object)->field0_0x0)._s_0.G = 0.72;
    ((local_res8[0].Object)->field0_0x0)._s_0.B = 0.72;
    ((local_res8[0].Object)->field0_0x0)._s_0.A = 1.0;
  }
  TSharedRef<FLinearColor,1>::TSharedRef<FLinearColor,1><FLinearColor>
            (&this->DefaultForeground_LinearRef,local_res8);
  local_res8[0].Object = ::operator_new(0x10);
  if (local_res8[0].Object != (FLinearColor *)0x0) {
    *(undefined8 *)&(local_res8[0].Object)->field0_0x0 = 0;
    ((local_res8[0].Object)->field0_0x0)._s_0.B = 0.0;
    ((local_res8[0].Object)->field0_0x0)._s_0.A = 1.0;
  }
  TSharedRef<FLinearColor,1>::TSharedRef<FLinearColor,1><FLinearColor>
            (&this->InvertedForeground_LinearRef,local_res8);
  local_res8[0].Object = ::operator_new(0x10);
  if (local_res8[0].Object != (FLinearColor *)0x0) {
    ((local_res8[0].Object)->field0_0x0)._s_0.R = 0.701;
    ((local_res8[0].Object)->field0_0x0)._s_0.G = 0.225;
    ((local_res8[0].Object)->field0_0x0)._s_0.B = 0.003;
    ((local_res8[0].Object)->field0_0x0)._s_0.A = 1.0;
  }
  TSharedRef<FLinearColor,1>::TSharedRef<FLinearColor,1><FLinearColor>
            (&this->SelectorColor_LinearRef,local_res8);
  local_res8[0].Object = ::operator_new(0x10);
  if (local_res8[0].Object != (FLinearColor *)0x0) {
    ((local_res8[0].Object)->field0_0x0)._s_0.R = 0.728;
    ((local_res8[0].Object)->field0_0x0)._s_0.G = 0.364;
    ((local_res8[0].Object)->field0_0x0)._s_0.B = 0.003;
    ((local_res8[0].Object)->field0_0x0)._s_0.A = 1.0;
  }
  TSharedRef<FLinearColor,1>::TSharedRef<FLinearColor,1><FLinearColor>
            (&this->SelectionColor_LinearRef,local_res8);
  local_res8[0].Object = ::operator_new(0x10);
  if (local_res8[0].Object != (FLinearColor *)0x0) {
    ((local_res8[0].Object)->field0_0x0)._s_0.R = 0.25;
    ((local_res8[0].Object)->field0_0x0)._s_0.G = 0.25;
    ((local_res8[0].Object)->field0_0x0)._s_0.B = 0.25;
    ((local_res8[0].Object)->field0_0x0)._s_0.A = 1.0;
  }
  TSharedRef<FLinearColor,1>::TSharedRef<FLinearColor,1><FLinearColor>
            (&this->SelectionColor_Inactive_LinearRef,local_res8);
  local_res8[0].Object = ::operator_new(0x10);
  if (local_res8[0].Object != (FLinearColor *)0x0) {
    ((local_res8[0].Object)->field0_0x0)._s_0.R = 0.701;
    ((local_res8[0].Object)->field0_0x0)._s_0.G = 0.225;
    ((local_res8[0].Object)->field0_0x0)._s_0.B = 0.003;
    ((local_res8[0].Object)->field0_0x0)._s_0.A = 1.0;
  }
  TSharedRef<FLinearColor,1>::TSharedRef<FLinearColor,1><FLinearColor>
            (&this->SelectionColor_Pressed_LinearRef,local_res8);
  local_res8[0].Object = ::operator_new(0x10);
  if (local_res8[0].Object != (FLinearColor *)0x0) {
    ((local_res8[0].Object)->field0_0x0)._s_0.R = 0.068;
    ((local_res8[0].Object)->field0_0x0)._s_0.G = 0.068;
    ((local_res8[0].Object)->field0_0x0)._s_0.B = 0.068;
    ((local_res8[0].Object)->field0_0x0)._s_0.A = 1.0;
  }
  TSharedRef<FLinearColor,1>::TSharedRef<FLinearColor,1><FLinearColor>
            (&this->HighlightColor_LinearRef,local_res8);
  return this;
}

