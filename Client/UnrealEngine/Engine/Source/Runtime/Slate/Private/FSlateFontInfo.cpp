// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Slate
// Functions: 1

// IsIdenticalTo @ 142881e00

bool __thiscall FSlateFontInfo::IsIdenticalTo(FSlateFontInfo *this,FSlateFontInfo *param_1)

{
  if ((((((((this->FontObject).field0_0x0.DebugPtr == (param_1->FontObject).field0_0x0.DebugPtr) &&
          ((this->FontMaterial).field0_0x0.DebugPtr == (param_1->FontMaterial).field0_0x0.DebugPtr))
         && ((this->OutlineSettings).OutlineSize == (param_1->OutlineSettings).OutlineSize)) &&
        (((this->OutlineSettings).bMiteredCorners == (param_1->OutlineSettings).bMiteredCorners &&
         ((this->OutlineSettings).bSeparateFillAlpha ==
          (param_1->OutlineSettings).bSeparateFillAlpha)))) &&
       (((this->OutlineSettings).bApplyOutlineToDropShadows ==
         (param_1->OutlineSettings).bApplyOutlineToDropShadows &&
        (((this->OutlineSettings).OutlineMaterial.field0_0x0.DebugPtr ==
          (param_1->OutlineSettings).OutlineMaterial.field0_0x0.DebugPtr &&
         ((param_1->OutlineSettings).OutlineColor.field0_0x0._s_0.R ==
          (this->OutlineSettings).OutlineColor.field0_0x0._s_0.R)))))) &&
      ((param_1->OutlineSettings).OutlineColor.field0_0x0._s_0.G ==
       (this->OutlineSettings).OutlineColor.field0_0x0._s_0.G)) &&
     ((((((param_1->OutlineSettings).OutlineColor.field0_0x0._s_0.B ==
          (this->OutlineSettings).OutlineColor.field0_0x0._s_0.B &&
         ((param_1->OutlineSettings).OutlineColor.field0_0x0._s_0.A ==
          (this->OutlineSettings).OutlineColor.field0_0x0._s_0.A)) &&
        ((this->CompositeFont).Object == (param_1->CompositeFont).Object)) &&
       (((this->TypefaceFontName == param_1->TypefaceFontName && (param_1->Size == this->Size)) &&
        ((this->LetterSpacing == param_1->LetterSpacing &&
         ((param_1->SkewAmount == this->SkewAmount &&
          (this->bForceMonospaced == param_1->bForceMonospaced)))))))) &&
      ((this->bForceMonospaced == false || (param_1->MonospacedWidth == this->MonospacedWidth))))))
  {
    return true;
  }
  return false;
}

