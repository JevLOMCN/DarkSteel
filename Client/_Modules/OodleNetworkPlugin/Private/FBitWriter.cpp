// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OodleNetworkPlugin
// Functions: 1

// SetNumBits @ 14e29e170

void __thiscall FBitWriter::SetNumBits(FBitWriter *this,long64 param_1)

{
  code *pcVar1;
  bool bVar2;
  
  if (param_1 <= this->Max) {
    this->Num = param_1;
    return;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("NumBits <= Max",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Serialization\\BitWriter.h"
                     ,0x6a,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  this->Num = param_1;
  return;
}

