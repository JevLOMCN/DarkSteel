// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 1

// operator= @ 14938ac90

FBulkDataBuffer<unsigned_char> * __thiscall
FBulkDataBuffer<unsigned_char>::operator=
          (FBulkDataBuffer<unsigned_char> *this,FBulkDataBuffer<unsigned_char> *param_1)

{
  ulong64 _Size;
  code *pcVar1;
  bool bVar2;
  uchar *puVar3;
  FBulkDataBuffer<unsigned_char> *pFVar4;
  
  puVar3 = (this->View).DataPtr;
  if (puVar3 != (uchar *)0x0) {
    FMemory::Free(puVar3);
  }
  if (this != param_1) {
    _Size = (param_1->View).ArrayNum;
    puVar3 = FMemory::Malloc(_Size,0);
    memcpy(puVar3,(param_1->View).DataPtr,_Size);
    if ((longlong)_Size < 0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("ArrayNum >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xfe,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pFVar4 = (FBulkDataBuffer<unsigned_char> *)(*pcVar1)();
        return pFVar4;
      }
    }
    (this->View).DataPtr = puVar3;
    (this->View).ArrayNum = _Size;
  }
  return this;
}

