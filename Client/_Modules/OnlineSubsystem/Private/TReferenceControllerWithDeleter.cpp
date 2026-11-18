// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OnlineSubsystem
// Functions: 4

// DestroyObject @ 14ebef370

void __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FAutomationSpecBase::FAsyncUntilDoneLatentCommand,SharedPointerInternals::DefaultDeleter<FAutomationSpecBase::FAsyncUntilDoneLatentCommand>,1>
::DestroyObject(TReferenceControllerWithDeleter<FAutomationSpecBase::FAsyncUntilDoneLatentCommand,SharedPointerInternals::DefaultDeleter<FAutomationSpecBase::FAsyncUntilDoneLatentCommand>,1>
                *this)

{
  FAsyncUntilDoneLatentCommand *pFVar1;
  
  pFVar1 = this->Object;
  if (pFVar1 != (FAsyncUntilDoneLatentCommand *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014ebef381. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)pFVar1->_padding_)(pFVar1,1);
    return;
  }
  return;
}

// DestroyObject @ 14ebef390

void __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FOnlineAchievementsWrite,SharedPointerInternals::DefaultDeleter<FOnlineAchievementsWrite>,1>
::DestroyObject(TReferenceControllerWithDeleter<FOnlineAchievementsWrite,SharedPointerInternals::DefaultDeleter<FOnlineAchievementsWrite>,1>
                *this)

{
  FOnlineAchievementsWrite *pFVar1;
  
  pFVar1 = this->Object;
  if (pFVar1 != (FOnlineAchievementsWrite *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014ebef3a1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(pFVar1->_padding_ + 0x30))(pFVar1,1);
    return;
  }
  return;
}

// DestroyObject @ 14ebef3b0

void __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FOnlineLeaderboardRead,SharedPointerInternals::DefaultDeleter<FOnlineLeaderboardRead>,1>
::DestroyObject(TReferenceControllerWithDeleter<FOnlineLeaderboardRead,SharedPointerInternals::DefaultDeleter<FOnlineLeaderboardRead>,1>
                *this)

{
  FOnlineLeaderboardRead *pFVar1;
  FScriptContainerElement *pFVar2;
  
  pFVar1 = this->Object;
  if (pFVar1 != (FOnlineLeaderboardRead *)0x0) {
    DestructItems<FOnlineStatsRow,int>
              ((FOnlineStatsRow *)(pFVar1->Rows).AllocatorInstance.Data,(pFVar1->Rows).ArrayNum);
    pFVar2 = (pFVar1->Rows).AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    DestructItems<FColumnMetaData,int>
              ((FColumnMetaData *)(pFVar1->ColumnMetadata).AllocatorInstance.Data,
               (pFVar1->ColumnMetadata).ArrayNum);
    pFVar2 = (pFVar1->ColumnMetadata).AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    if (*(void **)&pFVar1->SortedColumn != (void *)0x0) {
      FMemory::Free(*(void **)&pFVar1->SortedColumn);
    }
    if (*(void **)&pFVar1->LeaderboardName != (void *)0x0) {
      FMemory::Free(*(void **)&pFVar1->LeaderboardName);
    }
    ::operator_delete(pFVar1,0x48);
    return;
  }
  return;
}

// DestroyObject @ 14ebef430

void __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FAutomationSpecBase::FUntilDoneLatentCommand,SharedPointerInternals::DefaultDeleter<FAutomationSpecBase::FUntilDoneLatentCommand>,1>
::DestroyObject(TReferenceControllerWithDeleter<FAutomationSpecBase::FUntilDoneLatentCommand,SharedPointerInternals::DefaultDeleter<FAutomationSpecBase::FUntilDoneLatentCommand>,1>
                *this)

{
  FUntilDoneLatentCommand *pFVar1;
  
  pFVar1 = this->Object;
  if (pFVar1 != (FUntilDoneLatentCommand *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014ebef441. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)pFVar1->_padding_)(pFVar1,1);
    return;
  }
  return;
}

