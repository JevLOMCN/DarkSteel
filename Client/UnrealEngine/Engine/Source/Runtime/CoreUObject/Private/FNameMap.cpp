// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 2

// GetName @ 142326cf0

FName __thiscall FNameMap::GetName(FNameMap *this,FMappedName *param_1)

{
  uint uVar1;
  uint uVar2;
  code *pcVar3;
  bool bVar4;
  FName FVar5;
  uint *in_R8;
  
  if (*in_R8 >> 0x1e != this->NameMapType) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("MappedName.GetType() == NameMapType",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Serialization\\MappedName.h"
                       ,0x80,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      FVar5 = (FName)(*pcVar3)();
      return FVar5;
    }
  }
  if ((uint)(this->NameEntries).ArrayNum <= (*in_R8 & 0x3fffffff)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("MappedName.GetIndex() < uint32(NameEntries.Num())",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Serialization\\MappedName.h"
                       ,0x81,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      FVar5 = (FName)(*pcVar3)();
      return FVar5;
    }
  }
  uVar1 = *in_R8;
  if ((this->NameEntries).ArrayNum <= (int)(uVar1 & 0x3fffffff)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      FVar5 = (FName)(*pcVar3)();
      return FVar5;
    }
  }
  uVar2 = in_R8[1];
  param_1->Index =
       *(uint *)((this->NameEntries).AllocatorInstance.Data + (ulonglong)(uVar1 & 0x3fffffff) * 4);
  param_1->Number = uVar2;
  return (FName)param_1;
}

// TryGetName @ 14233fed0

bool __thiscall FNameMap::TryGetName(FNameMap *this,FMappedName *param_1,FName *param_2)

{
  uint uVar1;
  code *pcVar2;
  FName FVar3;
  bool bVar4;
  undefined1 uVar5;
  uint uVar6;
  
  if (param_1->Index >> 0x1e != this->NameMapType) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("MappedName.GetType() == NameMapType",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Serialization\\MappedName.h"
                       ,0x88,L"");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      uVar5 = (*pcVar2)();
      return (bool)uVar5;
    }
  }
  uVar1 = (this->NameEntries).ArrayNum;
  uVar6 = param_1->Index & 0x3fffffff;
  if (uVar6 < uVar1) {
    if ((int)uVar1 <= (int)uVar6) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar4) {
        pcVar2 = (code *)swi(3);
        uVar5 = (*pcVar2)();
        return (bool)uVar5;
      }
    }
    FVar3.Number = param_1->Number;
    FVar3.ComparisonIndex.Value =
         *(uint *)((this->NameEntries).AllocatorInstance.Data + (ulonglong)uVar6 * 4);
    *param_2 = FVar3;
    bVar4 = true;
  }
  else {
    bVar4 = false;
  }
  return bVar4;
}

