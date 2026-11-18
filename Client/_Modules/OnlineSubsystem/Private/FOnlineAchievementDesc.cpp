// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OnlineSubsystem
// Functions: 1

// ToDebugString @ 14ec15090

FString * __thiscall
FOnlineAchievementDesc::ToDebugString(FOnlineAchievementDesc *this,FString *__return_storage_ptr__)

{
  FString local_28;
  
  FDateTime::ToString(&this->UnlockTime,&local_28);
  FText::ToString(&this->UnlockedDesc);
  FText::ToString(&this->LockedDesc);
  FText::ToString(&this->Title);
  ::FString::PrintfImpl
            (__return_storage_ptr__,
             L"Title=\'%s\', LockedDesc=\'%s\', UnlockedDesc=\'%s\', bIsHidden=%s, UnlockTime=%s");
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

