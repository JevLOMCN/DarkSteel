// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 1

// GetDataPosChecked @ 147a50380

uchar * __thiscall FBitReader::GetDataPosChecked(FBitReader *this)

{
  code *pcVar1;
  bool bVar2;
  uchar *puVar3;
  uint uVar4;
  uint uVar5;
  
  uVar4 = (uint)(this->Pos >> 0x3f) & 7;
  if (((int)this->Pos + uVar4 & 7) != uVar4) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Pos % 8 == 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Serialization\\BitReader.h"
                       ,0xa5,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      puVar3 = (uchar *)(*pcVar1)();
      return puVar3;
    }
  }
  uVar5 = (uint)(this->Pos >> 3);
  uVar4 = 0;
  if ((int)uVar5 < (this->Buffer).ArrayNum) {
    uVar4 = ~uVar5 >> 0x1f;
  }
  if (uVar4 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      puVar3 = (uchar *)(*pcVar1)();
      return puVar3;
    }
  }
  return (uchar *)((this->Buffer).AllocatorInstance.Data + (int)uVar5);
}

