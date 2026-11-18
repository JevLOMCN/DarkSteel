// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 3

// AdvanceUntilAny @ 1478b3700

void __thiscall
FInstanceAttributeTracker::FAnyValidIterator<3>::AdvanceUntilAny(FAnyValidIterator<3> *this)

{
  uint uVar1;
  uint uVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  FInstanceAttributeTracker *pFVar7;
  
  pFVar7 = this->Tracker;
  iVar5 = this->ElementIndex;
  if (iVar5 < (pFVar7->Data).ArrayNum) {
    do {
      uVar1 = this->CurrentElement;
      if (uVar1 != 0) {
        uVar2 = 0;
        if (uVar1 != 0) {
          for (; (uVar1 >> uVar2 & 1) == 0; uVar2 = uVar2 + 1) {
          }
        }
        uVar6 = 0x20;
        if (uVar1 != 0) {
          uVar6 = uVar2;
        }
        this->ElementOffset = this->ElementOffset + (uVar6 >> 2);
        this->CurrentElement = uVar1 >> ((char)(uVar6 >> 2) * '\x04' & 0x1fU);
        return;
      }
      iVar5 = iVar5 + 1;
      this->ElementOffset = 0;
      this->ElementIndex = iVar5;
      if ((pFVar7->Data).ArrayNum <= iVar5) {
        this->CurrentElement = 0;
        return;
      }
      if ((iVar5 < 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      this->CurrentElement =
           *(uint *)((pFVar7->Data).AllocatorInstance.Data + (longlong)iVar5 * 4) & 0x33333333;
      pFVar7 = this->Tracker;
      iVar5 = this->ElementIndex;
    } while (iVar5 < (pFVar7->Data).ArrayNum);
  }
  return;
}

// AdvanceUntilAny @ 1478b37f0

void __thiscall
FInstanceAttributeTracker::FAnyValidIterator<5>::AdvanceUntilAny(FAnyValidIterator<5> *this)

{
  uint uVar1;
  uint uVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  FInstanceAttributeTracker *pFVar7;
  
  pFVar7 = this->Tracker;
  iVar5 = this->ElementIndex;
  if (iVar5 < (pFVar7->Data).ArrayNum) {
    do {
      uVar1 = this->CurrentElement;
      if (uVar1 != 0) {
        uVar2 = 0;
        if (uVar1 != 0) {
          for (; (uVar1 >> uVar2 & 1) == 0; uVar2 = uVar2 + 1) {
          }
        }
        uVar6 = 0x20;
        if (uVar1 != 0) {
          uVar6 = uVar2;
        }
        this->ElementOffset = this->ElementOffset + (uVar6 >> 2);
        this->CurrentElement = uVar1 >> ((char)(uVar6 >> 2) * '\x04' & 0x1fU);
        return;
      }
      iVar5 = iVar5 + 1;
      this->ElementOffset = 0;
      this->ElementIndex = iVar5;
      if ((pFVar7->Data).ArrayNum <= iVar5) {
        this->CurrentElement = 0;
        return;
      }
      if ((iVar5 < 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      this->CurrentElement =
           *(uint *)((pFVar7->Data).AllocatorInstance.Data + (longlong)iVar5 * 4) & 0x55555555;
      pFVar7 = this->Tracker;
      iVar5 = this->ElementIndex;
    } while (iVar5 < (pFVar7->Data).ArrayNum);
  }
  return;
}

// AdvanceUntilAny @ 147cd4220

void __thiscall
FInstanceAttributeTracker::FAnyValidIterator<9>::AdvanceUntilAny(FAnyValidIterator<9> *this)

{
  uint uVar1;
  uint uVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  FInstanceAttributeTracker *pFVar7;
  
  pFVar7 = this->Tracker;
  iVar5 = this->ElementIndex;
  if (iVar5 < (pFVar7->Data).ArrayNum) {
    do {
      uVar1 = this->CurrentElement;
      if (uVar1 != 0) {
        uVar2 = 0;
        if (uVar1 != 0) {
          for (; (uVar1 >> uVar2 & 1) == 0; uVar2 = uVar2 + 1) {
          }
        }
        uVar6 = 0x20;
        if (uVar1 != 0) {
          uVar6 = uVar2;
        }
        this->ElementOffset = this->ElementOffset + (uVar6 >> 2);
        this->CurrentElement = uVar1 >> ((char)(uVar6 >> 2) * '\x04' & 0x1fU);
        return;
      }
      iVar5 = iVar5 + 1;
      this->ElementOffset = 0;
      this->ElementIndex = iVar5;
      if ((pFVar7->Data).ArrayNum <= iVar5) {
        this->CurrentElement = 0;
        return;
      }
      if ((iVar5 < 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      this->CurrentElement =
           *(uint *)((pFVar7->Data).AllocatorInstance.Data + (longlong)iVar5 * 4) & 0x99999999;
      pFVar7 = this->Tracker;
      iVar5 = this->ElementIndex;
    } while (iVar5 < (pFVar7->Data).ArrayNum);
  }
  return;
}

