// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Slate
// Functions: 1

// FShapedGlyphSequence @ 142844c60

/* WARNING: Removing unreachable block (ram,0x000142844d4f) */
/* WARNING: Removing unreachable block (ram,0x000142844cd5) */

FShapedGlyphSequence * __thiscall
FShapedGlyphSequence::FShapedGlyphSequence(FShapedGlyphSequence *this)

{
  (this->GlyphsToRender).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->GlyphsToRender).ArrayNum = 0;
  (this->GlyphsToRender).ArrayMax = 0;
  (this->FontMaterial).field0_0x0.DebugPtr = (UObject *)0x0;
  (this->OutlineSettings).OutlineMaterial.field0_0x0.DebugPtr = (UObject *)0x0;
  this->TextBaseline = 0;
  this->MaxTextHeight = 0;
  this->bMaterialIsStencil = false;
  (this->OutlineSettings).OutlineSize = 0;
  (this->OutlineSettings).bMiteredCorners = false;
  (this->OutlineSettings).bSeparateFillAlpha = false;
  (this->OutlineSettings).bApplyOutlineToDropShadows = false;
  (this->OutlineSettings).OutlineColor.field0_0x0._s_0 =
       (FLinearColor_u_0_s_0)FLinearColor::Black.field0_0x0;
  this->SequenceWidth = 0;
  (this->GlyphFontFaces).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->GlyphFontFaces).ArrayNum = 0;
  (this->GlyphFontFaces).ArrayMax = 0;
  (this->SourceIndicesToGlyphData).SourceTextRange.TextStart = 0;
  (this->SourceIndicesToGlyphData).SourceTextRange.TextLen = 0;
  (this->SourceIndicesToGlyphData).GlyphDataArray.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->SourceIndicesToGlyphData).GlyphDataArray.ArrayNum = 0;
  (this->SourceIndicesToGlyphData).GlyphDataArray.ArrayMax = 0;
  this->CachedFontSkew = 0.0;
  (this->FontMaterialWeakPtr).WeakPtr.ObjectIndex = 0;
  *(undefined8 *)&(this->FontMaterialWeakPtr).WeakPtr.ObjectSerialNumber = 0;
  *(undefined8 *)&(this->SdfFontMaterialOverrideWeakPtr).WeakPtr.ObjectSerialNumber = 0;
  *(undefined8 *)&(this->OutlineMaterialWeakPtr).WeakPtr.ObjectSerialNumber = 0;
  *(undefined8 *)&(this->DebugFontMaterialName).Number = 0;
  *(undefined8 *)&(this->DebugSdfFontMaterialOverrideName).Number = 0;
  (this->DebugOutlineMaterialName).Number = 0;
  return this;
}

