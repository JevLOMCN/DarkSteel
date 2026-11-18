// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: DatasmithContent
// Functions: 3

// StartupModule @ 14e2ecd80

void __thiscall FDatasmithContentModule::StartupModule(FDatasmithContentModule *this)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  FString *pFVar3;
  IFileManager *pIVar4;
  wchar_t *pwVar5;
  FString local_48;
  FString local_38;
  TStringView<wchar_t> local_28;
  wchar_t *local_18;
  undefined4 local_10;
  
  pFVar3 = FPaths::ProjectIntermediateDir(&local_38);
  local_10 = 0x14;
  local_28.DataPtr = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
  iVar1 = (pFVar3->Data).ArrayNum;
  local_28.Size = iVar1 + -1;
  if (iVar1 == 0) {
    local_28.Size = 0;
  }
  local_18 = L"DatasmithContentTemp";
  FPaths::CombineInternal(&local_48,&local_28,2);
  pFVar3 = &this->TempDir;
  if (pFVar3 != &local_48) {
    pFVar2 = (pFVar3->Data).AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    (pFVar3->Data).AllocatorInstance.Data = local_48.Data.AllocatorInstance.Data;
    (this->TempDir).Data.ArrayNum = local_48.Data.ArrayNum;
    (this->TempDir).Data.ArrayMax = local_48.Data.ArrayMax;
    local_48.Data.ArrayNum = 0;
    local_48.Data.ArrayMax = 0;
    local_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  }
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  pIVar4 = IFileManager::Get();
  if ((this->TempDir).Data.ArrayNum == 0) {
    pwVar5 = L"";
  }
  else {
    pwVar5 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Could not recover jumptable at 0x00014e2ece65. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((longlong)*pIVar4 + 0x60))(pIVar4,pwVar5,0,*(code **)((longlong)*pIVar4 + 0x60));
  return;
}

// ShutdownModule @ 14e2ece70

void __thiscall FDatasmithContentModule::ShutdownModule(FDatasmithContentModule *this)

{
  IFileManager *pIVar1;
  
  pIVar1 = IFileManager::Get();
  if ((this->TempDir).Data.ArrayNum != 0) {
                    /* WARNING: Could not recover jumptable at 0x00014e2ece9d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((longlong)*pIVar1 + 0x68))(pIVar1,(this->TempDir).Data.AllocatorInstance.Data,0,1);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00014e2eceb5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((longlong)*pIVar1 + 0x68))(pIVar1,L"",0,1);
  return;
}

// GetTempDir @ 14e2ecec0

FString * __thiscall FDatasmithContentModule::GetTempDir(FDatasmithContentModule *this)

{
  return &this->TempDir;
}

