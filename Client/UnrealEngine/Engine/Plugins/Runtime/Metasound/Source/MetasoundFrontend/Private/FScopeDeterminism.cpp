// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MetasoundFrontend
// Functions: 3

// FScopeDeterminism @ 14ae1c6f0

FScopeDeterminism * __thiscall
Metasound::Frontend::FDocumentIDGenerator::FScopeDeterminism::FScopeDeterminism
          (FScopeDeterminism *this,bool param_1)

{
  longlong lVar1;
  void *pvVar2;
  ulonglong uVar3;
  
  pvVar2 = ThreadLocalStoragePointer;
  uVar3 = (ulonglong)_tls_index;
  this->bOriginalValue = false;
  lVar1 = *(longlong *)((longlong)pvVar2 + uVar3 * 8);
  this->bOriginalValue = *(bool *)(lVar1 + 0x9ac8);
  *(bool *)(lVar1 + 0x9ac8) = param_1;
  return this;
}

// ~FScopeDeterminism @ 14ae1dd00

void __thiscall
Metasound::Frontend::FDocumentIDGenerator::FScopeDeterminism::~FScopeDeterminism
          (FScopeDeterminism *this)

{
  *(bool *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x9ac8)
       = this->bOriginalValue;
  return;
}

// GetDeterminism @ 14ae38180

bool __thiscall
Metasound::Frontend::FDocumentIDGenerator::FScopeDeterminism::GetDeterminism
          (FScopeDeterminism *this)

{
  return (bool)*(undefined1 *)
                (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x9ac8);
}

