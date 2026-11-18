// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SlateCore
// Functions: 1

// GetHighestGlyphIndex @ 142491280

int __thiscall
FShapedGlyphSequence::FSourceIndexToGlyphData::GetHighestGlyphIndex(FSourceIndexToGlyphData *this)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  
  iVar4 = (this->AdditionalGlyphIndices).ArrayNum;
  if (iVar4 < 1) {
    return this->GlyphIndex;
  }
  uVar3 = 0;
  if ((int)(iVar4 - 1U) < iVar4) {
    uVar3 = ~(iVar4 - 1U) >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      iVar4 = (*pcVar1)();
      return iVar4;
    }
  }
  return *(int *)((this->AdditionalGlyphIndices).AllocatorInstance.Data +
                 (longlong)(this->AdditionalGlyphIndices).ArrayNum * 4 + -4);
}

