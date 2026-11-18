// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: IoStoreOnDemandCore
// Functions: 1

// TSharedString<char> @ 144587420

TSharedString<char> * __thiscall
UE::TSharedString<char>::TSharedString<char>(TSharedString<char> *this,TStringView<char> *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  size_t _Size;
  
  iVar1 = param_1->Size;
  _Size = (size_t)iVar1;
  this->Chars = (char *)0x0;
  if (iVar1 != 0) {
    puVar2 = FMemory::Malloc(_Size + 9,0);
    *puVar2 = 1;
    puVar2[1] = iVar1;
    this->Chars = (char *)(puVar2 + 2);
    if (0 < iVar1) {
      memcpy(puVar2 + 2,param_1->DataPtr,_Size);
    }
    this->Chars[_Size] = '\0';
  }
  return this;
}

