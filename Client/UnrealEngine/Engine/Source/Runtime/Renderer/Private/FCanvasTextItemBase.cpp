// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 1

// SetColor @ 1451e3560

void __thiscall FCanvasTextItemBase::SetColor(FCanvasTextItemBase *this,FLinearColor *param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)((longlong)&param_1->field0_0x0 + 8);
  this->_padding_ = *(longlong *)&param_1->field0_0x0;
  this->_padding_ = lVar1;
  return;
}

