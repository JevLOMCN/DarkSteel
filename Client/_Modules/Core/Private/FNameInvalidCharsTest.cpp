// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 1

// RunTest @ 141a90940

bool __cdecl
FNameInvalidCharsTest::RunTest
          (FString *param_1,FString *param_2,FString *param_3,bool param_4,
          FAutomationTestBase *param_5)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  bool bVar4;
  FString *pFVar5;
  FScriptContainerElement *pFVar6;
  wchar_t *pwVar7;
  wchar_t *pwVar8;
  TStringView<wchar_t> local_48;
  FText local_38;
  FString local_28;
  
  FText::FText(&local_38);
  local_48.DataPtr = (wchar_t *)(param_2->Data).AllocatorInstance.Data;
  iVar1 = (param_2->Data).ArrayNum;
  local_48.Size = iVar1 + -1;
  if (iVar1 == 0) {
    local_48.Size = 0;
  }
  bVar3 = ::FName::IsValidXName(&local_48,param_1,&local_38,(FText *)0x0);
  pFVar5 = FText::ToString(&local_38);
  ::FString::FString((FString *)&local_48,"Generated error message");
  pFVar6 = (FScriptContainerElement *)L"";
  if (local_48.Size != 0) {
    pFVar6 = (FScriptContainerElement *)local_48.DataPtr;
  }
  if ((param_3->Data).ArrayNum == 0) {
    pwVar8 = L"";
  }
  else {
    pwVar8 = (wchar_t *)(param_3->Data).AllocatorInstance.Data;
  }
  if ((pFVar5->Data).ArrayNum == 0) {
    pwVar7 = L"";
  }
  else {
    pwVar7 = (wchar_t *)(pFVar5->Data).AllocatorInstance.Data;
  }
  bVar4 = FAutomationTestBase::TestEqual(param_5,(wchar_t *)pFVar6,pwVar7,pwVar8);
  if ((FScriptContainerElement *)local_48.DataPtr != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.DataPtr);
  }
  ::FString::FString((FString *)&local_48,"validity return value from FName::IsValidXName");
  if (bVar3 == param_4) {
    bVar3 = true;
  }
  else {
    pcVar2 = *(code **)(param_5->_padding_ + 0x28);
    ::FString::PrintfImpl(&local_28,L"%s: The two values are not equal.");
    (*pcVar2)(param_5,&local_28,0);
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
    bVar3 = false;
  }
  if ((FScriptContainerElement *)local_48.DataPtr != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.DataPtr);
  }
  if ((bVar4) && (bVar3)) {
    bVar3 = true;
  }
  else {
    bVar3 = false;
  }
  if (local_38.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_38.TextData.Reference + 0x10))();
  }
  pFVar6 = (param_1->Data).AllocatorInstance.Data;
  if (pFVar6 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar6);
  }
  return bVar3;
}

