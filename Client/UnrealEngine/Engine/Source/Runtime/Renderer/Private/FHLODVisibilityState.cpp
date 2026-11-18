// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 1

// IsNodeForcedHidden @ 14563a830

bool __thiscall FHLODVisibilityState::IsNodeForcedHidden(FHLODVisibilityState *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  ForElementType<unsigned_int> FVar4;
  
  if ((param_1 < 0) || ((this->ForcedHiddenPrimitiveMap).NumBits <= param_1)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Index>=0 && Index<NumBits",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                       ,0x5c6,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  FVar4 = (this->ForcedHiddenPrimitiveMap).AllocatorInstance.SecondaryData;
  if (FVar4 == (ForElementType<unsigned_int>)0x0) {
    FVar4 = (ForElementType<unsigned_int>)&this->ForcedHiddenPrimitiveMap;
  }
  return (*(uint *)((longlong)FVar4 +
                   (longlong)((int)(param_1 + (param_1 >> 0x1f & 0x1fU)) >> 5) * 4) >>
          (param_1 & 0x1fU) & 1) != 0;
}

