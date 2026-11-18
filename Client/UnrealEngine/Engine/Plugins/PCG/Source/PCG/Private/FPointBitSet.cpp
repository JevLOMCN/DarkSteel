// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 3

// Add @ 149bfee00

void __thiscall PCGSelfPruningElement::FPointBitSet::Add(FPointBitSet *this,int param_1)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  
  uVar6 = param_1 >> 0x1f & 0x1f;
  iVar4 = param_1 + uVar6;
  uVar7 = iVar4 >> 5;
  uVar5 = 0;
  if ((int)uVar7 < (this->Bits).ArrayNum) {
    uVar5 = ~uVar7 >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  pFVar1 = (this->Bits).AllocatorInstance.Data + (longlong)(int)uVar7 * 4;
  *(uint *)pFVar1 = *(uint *)pFVar1 | 1 << (((byte)iVar4 & 0x1f) - (char)uVar6 & 0x1f);
  return;
}

// Contains @ 149c03740

bool __thiscall PCGSelfPruningElement::FPointBitSet::Contains(FPointBitSet *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  
  uVar6 = param_1 >> 0x1f & 0x1f;
  uVar4 = param_1 + uVar6;
  uVar7 = (int)uVar4 >> 5;
  uVar5 = 0;
  if ((int)uVar7 < (this->Bits).ArrayNum) {
    uVar5 = ~uVar7 >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  return (*(uint *)((this->Bits).AllocatorInstance.Data + (longlong)(int)uVar7 * 4) >>
          ((uVar4 & 0x1f) - uVar6 & 0x1f) & 1) != 0;
}

// Initialize @ 149c283a0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall PCGSelfPruningElement::FPointBitSet::Initialize(FPointBitSet *this,int param_1)

{
  TArray<unsigned_int,TSizedDefaultAllocator<32>_>::SetNumZeroed
            (&this->Bits,((int)((param_1 >> 0x1f & 0x1fU) + param_1) >> 5) + 1,Default);
  return;
}

