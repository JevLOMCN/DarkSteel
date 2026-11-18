// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MetasoundGenerator
// Functions: 2

// operator-> @ 14b2a8990

FOperatorPoolEntryID * __thiscall
TOptional<Metasound::FOperatorPoolEntryID>::operator->
          (TOptional<Metasound::FOperatorPoolEntryID> *this)

{
  code *pcVar1;
  bool bVar2;
  FOperatorPoolEntryID *pFVar3;
  
  if (this->bIsSet == false) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsSet()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                       ,0x1bd,
                       L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FOperatorPoolEntryID *)(*pcVar1)();
      return pFVar3;
    }
  }
  return &this->TypedValue;
}

// operator* @ 14b2a89e0

FOperatorPoolEntryID * __thiscall
TOptional<Metasound::FOperatorPoolEntryID>::operator*
          (TOptional<Metasound::FOperatorPoolEntryID> *this)

{
  code *pcVar1;
  bool bVar2;
  FOperatorPoolEntryID *pFVar3;
  
  if (this->bIsSet == false) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsSet()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                       ,0x1bd,
                       L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FOperatorPoolEntryID *)(*pcVar1)();
      return pFVar3;
    }
  }
  return &this->TypedValue;
}

