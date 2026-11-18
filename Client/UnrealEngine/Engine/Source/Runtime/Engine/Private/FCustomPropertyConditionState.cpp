// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 1

// SetActiveState @ 1473b45b0

void __thiscall
FCustomPropertyConditionState::SetActiveState
          (FCustomPropertyConditionState *this,ushort param_1,bool param_2)

{
  uint *puVar1;
  ForElementType<unsigned_int> FVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  
  if ((this->CurrentState).NumBits <= (int)(uint)param_1) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Index>=0 && Index<NumBits",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                       ,0x5be,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  FVar2 = (this->CurrentState).AllocatorInstance.SecondaryData;
  if (FVar2 != (ForElementType<unsigned_int>)0x0) {
    this = (FCustomPropertyConditionState *)FVar2;
  }
  puVar1 = (uint *)((longlong)this + (ulonglong)(param_1 >> 5) * 4);
  uVar5 = 1 << ((byte)param_1 & 0x1f);
  if (param_2) {
    *puVar1 = uVar5 | *puVar1;
    return;
  }
  *puVar1 = ~uVar5 & *puVar1;
  return;
}

