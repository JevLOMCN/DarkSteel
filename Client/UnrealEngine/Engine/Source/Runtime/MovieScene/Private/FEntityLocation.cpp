// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieScene
// Functions: 1

// Set @ 1461540c0

void __thiscall
UE::MovieScene::FEntityManager::FEntityLocation::Set(FEntityLocation *this,int param_1,int param_2)

{
  code *pcVar1;
  bool bVar2;
  
  if (((param_1 | param_2) & 0xffff0000U) == 0) {
    this->AllocationIndex = (ushort)param_1;
    this->EntryIndexWithinAllocation = (ushort)param_2;
    return;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("(InAllocationIndex & 0xFFFF0000) == 0 && (InEntryIndexWithinAllocation & 0xFFFF0000) == 0"
                     ,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneEntityManager.h"
                     ,0x3ad,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  this->AllocationIndex = (ushort)param_1;
  this->EntryIndexWithinAllocation = (ushort)param_2;
  return;
}

