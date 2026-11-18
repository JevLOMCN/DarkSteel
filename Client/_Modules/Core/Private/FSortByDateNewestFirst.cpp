// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 1

// operator() @ 1418c3f80

bool __thiscall
`FMaintenance::DeleteOldLogs'::__l5::FSortByDateNewestFirst::operator()
          (void *this,FString *param_1,FString *param_2)

{
  IFileManager *pIVar1;
  wchar_t *pwVar2;
  wchar_t *pwVar3;
  longlong local_res10;
  longlong local_res18;
  
  pIVar1 = IFileManager::Get();
  pwVar2 = L"";
  if ((param_1->Data).ArrayNum == 0) {
    pwVar3 = L"";
  }
  else {
    pwVar3 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
  }
  (**(code **)((longlong)*pIVar1 + 0xd8))(pIVar1,&local_res10,pwVar3);
  pIVar1 = IFileManager::Get();
  if ((param_2->Data).ArrayNum != 0) {
    pwVar2 = (wchar_t *)(param_2->Data).AllocatorInstance.Data;
  }
  (**(code **)((longlong)*pIVar1 + 0xd8))(pIVar1,&local_res18,pwVar2);
  return local_res18 < local_res10;
}

