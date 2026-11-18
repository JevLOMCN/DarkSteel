// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 1

// Reset @ 1486e9b90

void __thiscall
FBulkDataBuffer<unsigned_char>::Reset
          (FBulkDataBuffer<unsigned_char> *this,uchar *param_1,ulong64 param_2)

{
  uchar *puVar1;
  code *pcVar2;
  bool bVar3;
  
  puVar1 = (this->View).DataPtr;
  if (puVar1 != (uchar *)0x0) {
    FMemory::Free(puVar1);
  }
  if ((longlong)param_2 < 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("ArrayNum >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xfe,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  (this->View).DataPtr = param_1;
  (this->View).ArrayNum = param_2;
  return;
}

