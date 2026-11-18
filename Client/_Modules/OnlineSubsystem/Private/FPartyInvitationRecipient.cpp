// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OnlineSubsystem
// Functions: 1

// ToDebugString @ 14ec15490

FString * __thiscall
FPartyInvitationRecipient::ToDebugString
          (FPartyInvitationRecipient *this,FString *__return_storage_ptr__)

{
  FUniqueNetId *pFVar1;
  void *local_18 [2];
  
  pFVar1 = (this->Id).Object;
  (**(code **)(*(longlong *)pFVar1 + 0x38))(pFVar1,local_18);
  ::FString::PrintfImpl(__return_storage_ptr__,L"Id=[%s], PlatformData=[%s]");
  if (local_18[0] != (void *)0x0) {
    FMemory::Free(local_18[0]);
  }
  return __return_storage_ptr__;
}

