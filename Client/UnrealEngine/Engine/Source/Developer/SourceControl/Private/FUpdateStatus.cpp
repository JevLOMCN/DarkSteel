// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SourceControl
// Functions: 3

// GetInProgressString @ 146b18360

FText * __thiscall
FUpdateStatus::GetInProgressString(FUpdateStatus *this,FText *__return_storage_ptr__)

{
  FText::AsLocalizable_Advanced_LocText
            (__return_storage_ptr__,L"SourceControl",L"SourceControl_Update",
             L"Updating file(s) Revision Control status...");
  return __return_storage_ptr__;
}

// GetName @ 146b18a30

FName __thiscall FUpdateStatus::GetName(FUpdateStatus *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"UpdateStatus");
  return in_RDX;
}

// IsDirectoryPath @ 146b1bd20

bool __thiscall FUpdateStatus::IsDirectoryPath(FUpdateStatus *this,FString *param_1)

{
  bool bVar1;
  undefined1 uVar2;
  IFileManager *pIVar3;
  
  if (this->bSetRequireDirPathEndWithSeparator == false) {
    pIVar3 = IFileManager::Get();
    if ((param_1->Data).ArrayNum != 0) {
                    /* WARNING: Could not recover jumptable at 0x000146b1bd92. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar2 = (**(code **)((longlong)*pIVar3 + 0x58))(pIVar3,(param_1->Data).AllocatorInstance.Data)
      ;
      return (bool)uVar2;
    }
                    /* WARNING: Could not recover jumptable at 0x000146b1bda4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (**(code **)((longlong)*pIVar3 + 0x58))(pIVar3,L"");
    return (bool)uVar2;
  }
  bVar1 = ::FString::EndsWith(param_1,L"/",1,IgnoreCase);
  if (!bVar1) {
    bVar1 = ::FString::EndsWith(param_1,L"\\",1,IgnoreCase);
    if (!bVar1) {
      return false;
    }
  }
  return true;
}

