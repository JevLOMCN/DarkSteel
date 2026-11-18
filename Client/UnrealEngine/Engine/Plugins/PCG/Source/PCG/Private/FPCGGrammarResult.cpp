// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 1

// AddLog @ 149caa5e0

void __thiscall FPCGGrammarResult::AddLog(FPCGGrammarResult *this,FText *param_1,ELogType param_2)

{
  ITextData *pIVar1;
  FText *pFVar2;
  FText local_38;
  FLog local_28;
  
  pFVar2 = FText::FText(&local_38,param_1);
  FText::FText(&local_28.Message,pFVar2);
  pIVar1 = (pFVar2->TextData).Reference;
  local_28.Verbosity = param_2;
  if (pIVar1 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar1 + 0x10))();
  }
  TArray<FPCGGrammarResult::FLog,TSizedDefaultAllocator<32>_>::
  AddUniqueImpl<FPCGGrammarResult::FLog>(&this->Logs,&local_28);
  if (local_28.Message.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_28.Message.TextData.Reference + 0x10))();
  }
  if (param_2 == Error) {
    this->bSuccess = false;
  }
  pIVar1 = (param_1->TextData).Reference;
  if (pIVar1 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar1 + 0x10))();
  }
  return;
}

