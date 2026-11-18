// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: FractureEngine
// Functions: 2

// SetNotSelected @ 14e81f9e0

void __thiscall FDataflowSelection::SetNotSelected(FDataflowSelection *this,int param_1)

{
  uint *puVar1;
  code *pcVar2;
  bool bVar3;
  ForElementType<unsigned_int> FVar4;
  
  if ((param_1 < 0) || ((this->SelectionArray).NumBits <= param_1)) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Index>=0 && Index<NumBits",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                       ,0x5be,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  FVar4 = (this->SelectionArray).AllocatorInstance.SecondaryData;
  if (FVar4 == (ForElementType<unsigned_int>)0x0) {
    FVar4 = (ForElementType<unsigned_int>)&this->SelectionArray;
  }
  puVar1 = (uint *)((longlong)FVar4 +
                   (longlong)((int)(param_1 + (param_1 >> 0x1f & 0x1fU)) >> 5) * 4);
  *puVar1 = *puVar1 & ~(1 << ((byte)param_1 & 0x1f));
  return;
}

// SetSelected @ 14e81fa70

void __thiscall FDataflowSelection::SetSelected(FDataflowSelection *this,int param_1)

{
  uint *puVar1;
  code *pcVar2;
  bool bVar3;
  ForElementType<unsigned_int> FVar4;
  
  if ((param_1 < 0) || ((this->SelectionArray).NumBits <= param_1)) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Index>=0 && Index<NumBits",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                       ,0x5be,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  FVar4 = (this->SelectionArray).AllocatorInstance.SecondaryData;
  if (FVar4 == (ForElementType<unsigned_int>)0x0) {
    FVar4 = (ForElementType<unsigned_int>)&this->SelectionArray;
  }
  puVar1 = (uint *)((longlong)FVar4 +
                   (longlong)((int)(param_1 + (param_1 >> 0x1f & 0x1fU)) >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)param_1 & 0x1f);
  return;
}

