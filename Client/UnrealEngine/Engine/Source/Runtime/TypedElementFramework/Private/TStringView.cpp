// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: TypedElementFramework
// Functions: 1

// operator[] @ 142ce5a30

char * __thiscall TStringView<char>::operator[](TStringView<char> *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  char *pcVar3;
  
  if ((param_1 < 0) || (this->Size <= param_1)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Index >= 0 && Index < Size",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\StringView.h"
                       ,0x234,
                       L"Index out of bounds on StringView: index %i on a view with a length of %i")
    ;
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pcVar3 = (char *)(*pcVar1)();
      return pcVar3;
    }
  }
  return this->DataPtr + param_1;
}

