// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 1

// operator* @ 14173b750

FString * __thiscall
UE::Text::Private::TDisplayStringPtrBase<FString_const_>::operator*
          (TDisplayStringPtrBase<FString_const_> *this)

{
  code *pcVar1;
  bool bVar2;
  FString *pFVar3;
  
  if ((this->DisplayStringPtr).Reference == (FRefCountedDisplayString *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Internationalization\\LocalizedTextSourceTypes.h"
                       ,0x9d,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FString *)(*pcVar1)();
      return pFVar3;
    }
  }
  return &((this->DisplayStringPtr).Reference)->DisplayString;
}

