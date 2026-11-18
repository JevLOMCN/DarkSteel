// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 1

// TestFilterExpression @ 1419701d0

bool __thiscall
TextFilterTests::FTestFilterExpression::TestFilterExpression
          (FTestFilterExpression *this,wchar_t *param_1,bool param_2)

{
  FAutomationTestBase *pFVar1;
  code *pcVar2;
  char cVar3;
  bool bVar4;
  bool bVar5;
  FText local_38;
  FString local_28;
  
  FText::FText(&local_38);
  cVar3 = (**(code **)(this->_padding_ + 0x10))(this,param_1,this->TestItem,&local_38);
  bVar5 = true;
  bVar4 = FText::IsEmpty(&local_38);
  if (!bVar4) {
    pFVar1 = this->Test;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    FText::ToString(&local_38);
    ::FString::PrintfImpl(&local_28,L"Filter expression \'%s\' reported an error: %s");
    (*pcVar2)(pFVar1,&local_28,0);
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
    bVar5 = false;
  }
  if ((bool)cVar3 != param_2) {
    pFVar1 = this->Test;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::PrintfImpl
              (&local_28,L"Filter expression \'%s\' evaluated incorrectly: Expected: %s, Actual: %s"
              );
    (*pcVar2)(pFVar1,&local_28,0);
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
    bVar5 = false;
  }
  if (local_38.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_38.TextData.Reference + 0x10))();
  }
  return bVar5;
}

