// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Localization
// Functions: 2

// GetValue @ 146b76fd0

FString * __thiscall TOptional<FString>::GetValue(TOptional<FString> *this)

{
  code *pcVar1;
  bool bVar2;
  FString *pFVar3;
  
  if (*(int *)((longlong)&this->field0_0x0 + 0xc) == -1) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsSet()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                       ,0x1bd,
                       L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FString *)(*pcVar1)();
      return pFVar3;
    }
  }
  return (FString *)this;
}

// GetValue @ 146b77020

EMergeLocalizationMode * __thiscall
TOptional<enum_UserGeneratedContentLocalization::EMergeLocalizationMode>::GetValue(void *this)

{
  code *pcVar1;
  bool bVar2;
  EMergeLocalizationMode *pEVar3;
  
  if (*(char *)((longlong)this + 1) == '\0') {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsSet()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                       ,0x1bd,
                       L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pEVar3 = (EMergeLocalizationMode *)(*pcVar1)();
      return pEVar3;
    }
  }
  return this;
}

