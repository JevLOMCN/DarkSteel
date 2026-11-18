// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RenderCore
// Functions: 1

// ResetContext @ 145e22d20

void __thiscall FRenderCommandPipeBase::ResetContext(FRenderCommandPipeBase *this)

{
  FContext *this_00;
  
  if ((this->Context->CommandList).Commands.Head != (FCommand *)0x0) {
    this->Context->bDeleteAfterExecute = true;
    this_00 = ::operator_new(0x58);
    if (this_00 != (FContext *)0x0) {
      FMemStackBase::FMemStackBase(&this_00->Allocator,Large);
      (this_00->CommandList).Allocator = &this_00->Allocator;
      (this_00->CommandList).Commands.Head = (FCommand *)0x0;
      (this_00->CommandList).Commands.Tail = (FCommand *)0x0;
      (this_00->CommandList).Commands.Num = 0;
      (this_00->CommandList).bClosed = false;
      this_00->bDeleteAfterExecute = false;
      this->Context = this_00;
      return;
    }
    this->Context = (FContext *)0x0;
  }
  return;
}

