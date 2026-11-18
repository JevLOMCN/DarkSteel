// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SlateCore
// Functions: 1

// GetGlyphData @ 1424911c0

FSourceIndexToGlyphData * __thiscall
FShapedGlyphSequence::FSourceIndicesToGlyphData::GetGlyphData
          (FSourceIndicesToGlyphData *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  FSourceIndexToGlyphData *pFVar3;
  uint uVar4;
  uint uVar5;
  
  uVar5 = param_1 - (this->SourceTextRange).TextStart;
  if ((-1 < (int)uVar5) && ((int)uVar5 < (this->GlyphDataArray).ArrayNum)) {
    uVar4 = 0;
    if ((int)uVar5 < (this->GlyphDataArray).ArrayNum) {
      uVar4 = ~uVar5 >> 0x1f;
    }
    if (uVar4 == 0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pFVar3 = (FSourceIndexToGlyphData *)(*pcVar1)();
        return pFVar3;
      }
    }
    return (FSourceIndexToGlyphData *)
           ((this->GlyphDataArray).AllocatorInstance.Data + (longlong)(int)uVar5 * 0x18);
  }
  return (FSourceIndexToGlyphData *)0x0;
}

