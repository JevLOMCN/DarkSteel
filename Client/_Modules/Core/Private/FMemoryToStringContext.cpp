// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 4

// AppendFrozenPointer @ 1419e1300

void __thiscall
FMemoryToStringContext::AppendFrozenPointer
          (FMemoryToStringContext *this,FTypeLayoutDesc *param_1,int param_2)

{
  TStringBuilderBase<wchar_t>::AppendfImpl
            (this->String,L"TMemoryImagePtr<%s>, FrozenTypeIndex: %d, Target: ");
  return;
}

// AppendIndent @ 1419e1580

void __thiscall FMemoryToStringContext::AppendIndent(FMemoryToStringContext *this)

{
  int iVar1;
  
  iVar1 = 0;
  if (0 < this->Indent) {
    do {
      TStringBuilderBase<wchar_t>::Append<wchar_t,0>(this->String,L"    ",4);
      iVar1 = iVar1 + 1;
    } while (iVar1 < this->Indent);
  }
  return;
}

// AppendNullptr @ 1419e16b0

void __thiscall FMemoryToStringContext::AppendNullptr(FMemoryToStringContext *this)

{
  TStringBuilderBase<wchar_t>::Append<wchar_t,0>(this->String,L"nullptr\n",8);
  return;
}

// AppendUnfrozenPointer @ 1419e1b00

void __thiscall
FMemoryToStringContext::AppendUnfrozenPointer(FMemoryToStringContext *this,FTypeLayoutDesc *param_1)

{
  TStringBuilderBase<wchar_t>::AppendfImpl(this->String,L"TMemoryImagePtr<%s> (Unfrozen), Target: ")
  ;
  return;
}

