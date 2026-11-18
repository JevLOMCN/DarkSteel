// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Landscape
// Functions: 2

// operator[] @ 145f447f0

uchar * __thiscall
TArrayView<unsigned_char,int>::operator[](TArrayView<unsigned_char,int> *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  uchar *puVar4;
  
  uVar3 = 0;
  if (param_1 < this->ArrayNum) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      puVar4 = (uchar *)(*pcVar1)();
      return puVar4;
    }
  }
  return this->DataPtr + param_1;
}

// operator[] @ 145f44870

ushort * __thiscall
TArrayView<unsigned_short,int>::operator[](TArrayView<unsigned_short,int> *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  ushort *puVar4;
  
  uVar3 = 0;
  if (param_1 < this->ArrayNum) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      puVar4 = (ushort *)(*pcVar1)();
      return puVar4;
    }
  }
  return this->DataPtr + param_1;
}

