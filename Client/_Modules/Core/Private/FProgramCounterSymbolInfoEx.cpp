// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 1

// FProgramCounterSymbolInfoEx @ 14161e240

FProgramCounterSymbolInfoEx * __thiscall
FProgramCounterSymbolInfoEx::FProgramCounterSymbolInfoEx
          (FProgramCounterSymbolInfoEx *this,FString *param_1,FString *param_2,FString *param_3,
          uint param_4,ulong64 param_5,ulong64 param_6,ulong64 param_7)

{
  FScriptContainerElement *pFVar1;
  
  ::FString::FString(&this->ModuleName,param_1);
  ::FString::FString(&this->FunctionName,param_2);
  ::FString::FString(&this->Filename,param_3);
  this->LineNumber = param_4;
  this->SymbolDisplacement = param_5;
  this->OffsetInModule = param_6;
  this->ProgramCounter = param_7;
  pFVar1 = (param_1->Data).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (param_2->Data).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (param_3->Data).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  return this;
}

