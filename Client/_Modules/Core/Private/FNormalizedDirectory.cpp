// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 1

// FNormalizedDirectory @ 141a9bf70

FNormalizedDirectory * __thiscall
FWindowsPlatformFile::FNormalizedDirectory::FNormalizedDirectory
          (FNormalizedDirectory *this,wchar_t *param_1)

{
  int iVar1;
  size_t sVar2;
  
  *(undefined2 *)&this->field_0x18 = 0;
  *(undefined1 **)this = &this->field_0x20;
  *(undefined1 **)&this->field_0x8 = &this->field_0x20;
  *(FNormalizedDirectory **)&this->field_0x10 = this + 1;
  iVar1 = 0;
  if (param_1 != (wchar_t *)0x0) {
    sVar2 = wcslen(param_1);
    iVar1 = (int)sVar2;
  }
  TStringBuilderBase<wchar_t>::Append<wchar_t,0>((TStringBuilderBase<wchar_t> *)this,param_1,iVar1);
  NormalizeWindowsPath((TStringBuilderBase<wchar_t> *)this,false);
  return this;
}

