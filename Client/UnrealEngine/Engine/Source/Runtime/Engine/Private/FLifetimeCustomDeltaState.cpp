// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 1

// GetCustomDeltaIndexFromPropertyRepIndex @ 1484d8340

ushort __thiscall
FLifetimeCustomDeltaState::GetCustomDeltaIndexFromPropertyRepIndex
          (FLifetimeCustomDeltaState *this,ushort param_1)

{
  code *pcVar1;
  bool bVar2;
  ushort uVar3;
  
  if ((this->LifetimeCustomDeltaIndexLookup).ArrayNum <= (int)(uint)param_1) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return uVar3;
    }
  }
  uVar3 = *(ushort *)
           ((this->LifetimeCustomDeltaIndexLookup).AllocatorInstance.Data + (ulonglong)param_1 * 2);
  if (uVar3 == 0xffff) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("static_cast<uint16>(INDEX_NONE) != CustomDeltaIndex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\RepLayout.cpp"
                       ,0x1ae,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return uVar3;
    }
  }
  return uVar3;
}

