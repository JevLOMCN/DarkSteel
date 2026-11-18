// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MassEntity
// Functions: 2

// IsValid @ 1472339f0

bool __thiscall
FMassEntityInChunkDataHandle::IsValid
          (FMassEntityInChunkDataHandle *this,FMassArchetypeHandle *param_1)

{
  bool bVar1;
  
  bVar1 = IsValid(this,(param_1->DataPtr).Object);
  return bVar1;
}

// IsValid @ 147233a00

bool __thiscall
FMassEntityInChunkDataHandle::IsValid
          (FMassEntityInChunkDataHandle *this,FMassArchetypeData *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  uint uVar6;
  uint local_18;
  int iStack_14;
  
  if (param_1 != (FMassArchetypeData *)0x0) {
    uVar1 = this->ChunkIndex;
    uVar2 = this->ChunkSerialNumber;
    if ((this->_padding_ != 0) && ((int)this->_padding_ != -1)) {
      if ((-1 < (int)uVar1) && ((int)uVar1 < (param_1->Chunks).ArrayNum)) {
        uVar6 = 0;
        if ((int)uVar1 < (param_1->Chunks).ArrayNum) {
          uVar6 = (uint)~uVar1 >> 0x1f;
        }
        if (uVar6 == 0) {
          bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar4) {
            pcVar3 = (code *)swi(3);
            uVar5 = (*pcVar3)();
            return (bool)uVar5;
          }
        }
        if (*(int *)((param_1->Chunks).AllocatorInstance.Data + (longlong)(int)uVar1 * 0x90 + 0x14)
            == uVar2) {
          return true;
        }
      }
    }
  }
  return false;
}

