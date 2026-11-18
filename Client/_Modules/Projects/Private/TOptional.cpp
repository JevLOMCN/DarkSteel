// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Projects
// Functions: 1

// TOptional<FText> @ 141e0ca60

TOptional<FText> * __thiscall
TOptional<FText>::TOptional<FText>(TOptional<FText> *this,FText *param_1)

{
  code *pcVar1;
  bool bVar2;
  TOptional<FText> *pTVar3;
  
  FText::FText((FText *)this,param_1);
  if ((this->field0_0x0).TypedValue.TextData.Reference == (ITextData *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsSet()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                       ,0xbd,
                       L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TOptional<FText> *)(*pcVar1)();
      return pTVar3;
    }
  }
  return this;
}

