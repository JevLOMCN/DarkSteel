// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OpenGLDrv
// Functions: 1

// UpdateLinkedViews @ 145c36430

void __thiscall FOpenGLViewableResource::UpdateLinkedViews(FOpenGLViewableResource *this)

{
  FOpenGLView *pFVar1;
  
  for (pFVar1 = this->LinkedViews; pFVar1 != (FOpenGLView *)0x0;
      pFVar1 = *(FOpenGLView **)&pFVar1->field_0x8) {
    (*(code *)**(undefined8 **)pFVar1)(pFVar1);
  }
  return;
}

