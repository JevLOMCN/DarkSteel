// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GameplayDebugger
// Functions: 1

// ReadBit @ 146d58630

uchar __thiscall FBitReader::ReadBit(FBitReader *this)

{
  FScriptContainerElement FVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  uchar uVar5;
  uint uVar6;
  uint uVar7;
  
  if ((this->_padding_ & 0x200) != 0) {
    return '\0';
  }
  lVar2 = this->Pos;
  if (this->Num <= lVar2) {
    SetOverflowed(this,1);
    return '\0';
  }
  uVar7 = (uint)(lVar2 >> 3);
  uVar6 = 0;
  if ((int)uVar7 < (this->Buffer).ArrayNum) {
    uVar6 = ~uVar7 >> 0x1f;
  }
  if (uVar6 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return uVar5;
    }
  }
  FVar1 = (this->Buffer).AllocatorInstance.Data[(int)uVar7];
  this->Pos = this->Pos + 1;
  return ((byte)FVar1 & '\x01' << ((byte)lVar2 & 7)) != 0;
}

