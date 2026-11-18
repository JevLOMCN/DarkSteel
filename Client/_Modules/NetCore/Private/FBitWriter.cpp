// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: NetCore
// Functions: 1

// GetData @ 1441dc350

uchar * __thiscall FBitWriter::GetData(FBitWriter *this)

{
  code *pcVar1;
  bool bVar2;
  uchar *puVar3;
  
  if ((this->_padding_ & 0x200) == 0) {
    return (uchar *)(this->Buffer).AllocatorInstance.Data;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("!IsError()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Serialization\\BitWriter.h"
                     ,0x49,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    puVar3 = (uchar *)(*pcVar1)();
    return puVar3;
  }
  return (uchar *)(this->Buffer).AllocatorInstance.Data;
}

