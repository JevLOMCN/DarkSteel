// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: InterchangePipelines
// Functions: 1

// TOptional<FString> @ 14e763c70

TOptional<FString> * __thiscall
TOptional<FString>::TOptional<FString>(TOptional<FString> *this,FString *param_1)

{
  code *pcVar1;
  bool bVar2;
  TOptional<FString> *pTVar3;
  
  (this->field0_0x0).TypedValue.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->field0_0x0).TypedValue.Data.AllocatorInstance.Data = (param_1->Data).AllocatorInstance.Data
  ;
  (param_1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  *(int *)((longlong)&this->field0_0x0 + 8) = (param_1->Data).ArrayNum;
  *(int *)((longlong)&this->field0_0x0 + 0xc) = (param_1->Data).ArrayMax;
  (param_1->Data).ArrayNum = 0;
  (param_1->Data).ArrayMax = 0;
  if (*(int *)((longlong)&this->field0_0x0 + 0xc) == -1) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsSet()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                       ,0xbd,
                       L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TOptional<FString> *)(*pcVar1)();
      return pTVar3;
    }
  }
  return this;
}

