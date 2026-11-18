// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CommonUI
// Functions: 2

// operator-> @ 14a7b48e0

FUIInputConfig * __thiscall TOptional<FUIInputConfig>::operator->(TOptional<FUIInputConfig> *this)

{
  code *pcVar1;
  bool bVar2;
  FUIInputConfig *pFVar3;
  
  if (this->bIsSet == false) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsSet()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                       ,0x1bd,
                       L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FUIInputConfig *)(*pcVar1)();
      return pFVar3;
    }
  }
  return &this->TypedValue;
}

// GetValue @ 14a7e9790

FUIInputConfig * __thiscall TOptional<FUIInputConfig>::GetValue(TOptional<FUIInputConfig> *this)

{
  code *pcVar1;
  bool bVar2;
  FUIInputConfig *pFVar3;
  
  if (this->bIsSet == false) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsSet()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                       ,0x1bd,
                       L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FUIInputConfig *)(*pcVar1)();
      return pFVar3;
    }
  }
  return &this->TypedValue;
}

