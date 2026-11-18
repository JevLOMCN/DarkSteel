// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 1

// Copy @ 1419e6290

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
FBitReaderMark::Copy
          (FBitReaderMark *this,FBitReader *param_1,
          TArray<unsigned_char,TSizedDefaultAllocator<32>_> *param_2)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  
  iVar4 = (int)((param_1->Pos - this->Pos) + 7 >> 3);
  if (0 < iVar4) {
    TArray<unsigned_char,TSizedDefaultAllocator<32>_>::SetNumUninitialized(param_2,iVar4,Default);
    uVar5 = iVar4 - 1;
    uVar3 = 0;
    if ((int)uVar5 < param_2->ArrayNum) {
      uVar3 = ~uVar5 >> 0x1f;
    }
    if (uVar3 == 0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    (param_2->AllocatorInstance).Data[(int)uVar5] = (FScriptContainerElement)0x0;
    iVar4 = (int)this->Pos;
    appBitsCpy((uchar *)(param_2->AllocatorInstance).Data,0,
               (uchar *)(param_1->Buffer).AllocatorInstance.Data,iVar4,(int)param_1->Pos - iVar4);
  }
  return;
}

