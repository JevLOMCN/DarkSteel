// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryCollectionNodes
// Functions: 2

// Invert @ 14e955280

void __thiscall FDataflowSelection::Invert(FDataflowSelection *this)

{
  uint *puVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  ulonglong uVar6;
  ForElementType<unsigned_int> FVar7;
  
  FVar7 = (this->SelectionArray).AllocatorInstance.SecondaryData;
  uVar4 = (this->SelectionArray).NumBits;
  if (FVar7 == (ForElementType<unsigned_int>)0x0) {
    FVar7 = (ForElementType<unsigned_int>)&this->SelectionArray;
  }
  uVar6 = 0;
  iVar3 = uVar4 + 0x1f;
  iVar3 = (int)(iVar3 + (iVar3 >> 0x1f & 0x1fU)) >> 5;
  uVar4 = uVar4 & 0x8000001f;
  if ((int)uVar4 < 0) {
    uVar4 = (uVar4 - 1 | 0xffffffe0) + 1;
  }
  uVar2 = 0xffffffff >> ((byte)(0x20 - uVar4) & 0x1f);
  if (0x1f < (int)(0x20 - uVar4)) {
    uVar2 = 0xffffffff;
  }
  uVar4 = 0xffffffff;
  if (iVar3 == 1) {
    uVar4 = uVar2;
  }
  if (0 < iVar3) {
    do {
      puVar1 = (uint *)((longlong)FVar7 + uVar6 * 4);
      uVar5 = *(uint *)((longlong)FVar7 + uVar6 * 4) & uVar4;
      if (uVar4 == 0xffffffff) {
        uVar5 = *puVar1;
      }
      uVar4 = ~uVar5 & uVar2;
      if ((uint)uVar6 != iVar3 - 1U) {
        uVar4 = ~uVar5;
      }
      uVar5 = (uint)uVar6 + 1;
      uVar6 = (ulonglong)uVar5;
      *puVar1 = uVar4;
      uVar4 = 0xffffffff;
      if (uVar5 == iVar3 - 1U) {
        uVar4 = uVar2;
      }
    } while ((int)uVar5 < iVar3);
  }
  return;
}

// IsSelected @ 14e955750

bool __thiscall FDataflowSelection::IsSelected(FDataflowSelection *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  ForElementType<unsigned_int> FVar4;
  
  if ((param_1 < 0) || ((this->SelectionArray).NumBits <= param_1)) {
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
  FVar4 = (this->SelectionArray).AllocatorInstance.SecondaryData;
  if (FVar4 == (ForElementType<unsigned_int>)0x0) {
    FVar4 = (ForElementType<unsigned_int>)&this->SelectionArray;
  }
  return (*(uint *)((longlong)FVar4 +
                   (longlong)((int)(param_1 + (param_1 >> 0x1f & 0x1fU)) >> 5) * 4) >>
          (param_1 & 0x1fU) & 1) != 0;
}

