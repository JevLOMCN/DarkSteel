// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OnlineSubsystem
// Functions: 1

// ToLogString @ 14ec16660

FString * __thiscall
FOnlineLeaderboardRead::ToLogString(FOnlineLeaderboardRead *this,FString *__return_storage_ptr__)

{
  int iVar1;
  FOnlineStatsRow *this_00;
  FOnlineStatsRow *pFVar2;
  int iVar3;
  undefined1 local_res8 [8];
  FString local_38;
  FString local_28;
  
  ::FString::PrintfImpl(__return_storage_ptr__,L"\nLeaderboardName: %s\nSortedColumn: %s\nRows:\n");
  iVar1 = (this->Rows).ArrayNum;
  this_00 = (FOnlineStatsRow *)(this->Rows).AllocatorInstance.Data;
  pFVar2 = this_00 + iVar1;
  while( true ) {
    if ((this->Rows).ArrayNum != iVar1) {
      `TCheckedPointerIterator<FOnlineStatsRow_const_,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (this_00 == pFVar2) break;
    FOnlineStatsRow::ToLogString(this_00,&local_28);
    ::FString::PrintfImpl(&local_38,L"\t%s\n");
    iVar3 = local_38.Data.ArrayNum + -1;
    if (local_38.Data.ArrayNum == 0) {
      iVar3 = 0;
    }
    ::FString::AppendChars
              (__return_storage_ptr__,(wchar_t *)local_38.Data.AllocatorInstance.Data,iVar3);
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
    this_00 = this_00 + 1;
  }
  return __return_storage_ptr__;
}

