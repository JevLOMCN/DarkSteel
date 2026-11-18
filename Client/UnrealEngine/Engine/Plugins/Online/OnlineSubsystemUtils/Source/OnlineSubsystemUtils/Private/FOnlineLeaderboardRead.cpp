// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OnlineSubsystemUtils
// Functions: 1

// ~FOnlineLeaderboardRead @ 14ecdaaf0

void __thiscall FOnlineLeaderboardRead::~FOnlineLeaderboardRead(FOnlineLeaderboardRead *this)

{
  FScriptContainerElement *pFVar1;
  
  DestructItems<FOnlineStatsRow,int>
            ((FOnlineStatsRow *)(this->Rows).AllocatorInstance.Data,(this->Rows).ArrayNum);
  pFVar1 = (this->Rows).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FColumnMetaData,int>
            ((FColumnMetaData *)(this->ColumnMetadata).AllocatorInstance.Data,
             (this->ColumnMetadata).ArrayNum);
  pFVar1 = (this->ColumnMetadata).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  if (*(void **)&this->SortedColumn != (void *)0x0) {
    FMemory::Free(*(void **)&this->SortedColumn);
  }
  if (*(void **)&this->LeaderboardName != (void *)0x0) {
    FMemory::Free(*(void **)&this->LeaderboardName);
    return;
  }
  return;
}

