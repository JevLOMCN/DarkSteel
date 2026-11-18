// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AIModule
// Functions: 1

// FKey @ 146ec4ca0

FKey * __thiscall FBlackboard::FKey::FKey(FKey *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  FKey *pFVar3;
  
  this->Key = 0xffff;
  if ((param_1 == (param_1 & 0xffffU)) && (-1 < param_1)) {
    this->Key = (ushort)param_1;
    return this;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("IntFitsIn<OutType>(In)",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\UnrealTemplate.h"
                     ,0xaa,L"Loss of data caused by narrowing conversion, In = %lld");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pFVar3 = (FKey *)(*pcVar1)();
    return pFVar3;
  }
  this->Key = (ushort)param_1;
  return this;
}

