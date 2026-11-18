// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chaos
// Functions: 1

// SetContourColor @ 143db6440

void __thiscall
Chaos::Softs::FPBDTriangleMeshCollisions::FGIAColor::SetContourColor
          (FGIAColor *this,int param_1,bool param_2)

{
  code *pcVar1;
  bool bVar2;
  
  if (0x1f < param_1) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("ContourIndex < 32",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\PBDTriangleMeshCollisions.h"
                       ,0x2e,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  this->ContourIndexBits = this->ContourIndexBits | 1 << (param_1 & 0x1fU);
  if (param_2) {
    this->ColorBits = this->ColorBits | 1 << (param_1 & 0x1fU);
    return;
  }
  this->ColorBits = this->ColorBits & ~(1 << (param_1 & 0x1fU));
  return;
}

