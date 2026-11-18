// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 1

// Pop @ 147a668f0

void __thiscall FMemMark::Pop(FMemMark *this)

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  
  if (this->bPopped == false) {
    if (this->Mem->TopMark != this) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Mem.TopMark == this",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\MemStack.h"
                         ,0x215,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    this->bPopped = true;
    piVar1 = &this->Mem->NumMarks;
    *piVar1 = *piVar1 + -1;
    if (this->SavedChunk != this->Mem->TopChunk) {
      FMemStackBase::FreeChunks(this->Mem,this->SavedChunk);
    }
    this->Mem->Top = this->Top;
    this->Mem->TopMark = this->NextTopmostMark;
    this->Top = (uchar *)0x0;
  }
  return;
}

