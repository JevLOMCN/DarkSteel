// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: StateTreeModule
// Functions: 1

// FActiveFrameID @ 14d4e9ad0

FActiveFrameID * __thiscall
UE::StateTree::FActiveFrameID::FActiveFrameID(FActiveFrameID *this,uint param_1)

{
  code *pcVar1;
  bool bVar2;
  FActiveFrameID *pFVar3;
  
  this->Value = param_1;
  if (param_1 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("NewID != InvalidValue",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\StateTree\\Source\\StateTreeModule\\Public\\StateTreeStatePath.h"
                       ,0x1d,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FActiveFrameID *)(*pcVar1)();
      return pFVar3;
    }
  }
  return this;
}

