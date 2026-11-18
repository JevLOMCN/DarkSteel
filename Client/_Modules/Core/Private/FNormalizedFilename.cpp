// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 3

// FNormalizedFilename @ 141a9bfe0

FNormalizedFilename * __thiscall
FWindowsPlatformFile::FNormalizedFilename::FNormalizedFilename
          (FNormalizedFilename *this,wchar_t *param_1)

{
  int iVar1;
  size_t sVar2;
  
  *(undefined2 *)&this->field_0x18 = 0;
  *(undefined1 **)this = &this->field_0x20;
  *(undefined1 **)&this->field_0x8 = &this->field_0x20;
  *(FNormalizedFilename **)&this->field_0x10 = this + 1;
  iVar1 = 0;
  if (param_1 != (wchar_t *)0x0) {
    sVar2 = wcslen(param_1);
    iVar1 = (int)sVar2;
  }
  TStringBuilderBase<wchar_t>::Append<wchar_t,0>((TStringBuilderBase<wchar_t> *)this,param_1,iVar1);
  NormalizeWindowsPath((TStringBuilderBase<wchar_t> *)this,true);
  return this;
}

// FNormalizedFilename @ 141a9c050

FNormalizedFilename * __thiscall
FWindowsPlatformFile::FNormalizedFilename::FNormalizedFilename
          (FNormalizedFilename *this,TStringView<wchar_t> *param_1,TStringView<wchar_t> *param_2)

{
  undefined8 uVar1;
  wchar_t *pwVar2;
  longlong lVar3;
  
  *(undefined2 *)&this->field_0x18 = 0;
  *(undefined1 **)this = &this->field_0x20;
  uVar1 = *(undefined8 *)&param_1->Size;
  pwVar2 = param_1->DataPtr;
  *(undefined1 **)&this->field_0x8 = &this->field_0x20;
  *(FNormalizedFilename **)&this->field_0x10 = this + 1;
  TStringBuilderBase<wchar_t>::Append<wchar_t,0>
            ((TStringBuilderBase<wchar_t> *)this,pwVar2,(int)uVar1);
  lVar3 = *(longlong *)&this->field_0x8;
  if ((((int)(lVar3 - *(longlong *)this >> 1) != 0) && (*(short *)(lVar3 + -2) != 0x2f)) &&
     (*(short *)(lVar3 + -2) != 0x5c)) {
    if (*(ulonglong *)&this->field_0x10 < lVar3 + 2U) {
      TStringBuilderBase<wchar_t>::Extend((TStringBuilderBase<wchar_t> *)this,1);
    }
    **(undefined2 **)&this->field_0x8 = 0x2f;
    *(longlong *)&this->field_0x8 = *(longlong *)&this->field_0x8 + 2;
  }
  TStringBuilderBase<wchar_t>::Append<wchar_t,0>
            ((TStringBuilderBase<wchar_t> *)this,param_2->DataPtr,(int)*(undefined8 *)&param_2->Size
            );
  NormalizeWindowsPath((TStringBuilderBase<wchar_t> *)this,true);
  return this;
}

// FNormalizedFilename @ 141a9c100

FNormalizedFilename * __thiscall
FWindowsPlatformFile::FNormalizedFilename::FNormalizedFilename
          (FNormalizedFilename *this,TStringView<wchar_t> *param_1)

{
  undefined8 uVar1;
  wchar_t *pwVar2;
  
  uVar1 = *(undefined8 *)&param_1->Size;
  pwVar2 = param_1->DataPtr;
  *(undefined1 **)this = &this->field_0x20;
  *(undefined1 **)&this->field_0x8 = &this->field_0x20;
  *(FNormalizedFilename **)&this->field_0x10 = this + 1;
  *(undefined2 *)&this->field_0x18 = 0;
  TStringBuilderBase<wchar_t>::Append<wchar_t,0>
            ((TStringBuilderBase<wchar_t> *)this,pwVar2,(int)uVar1);
  NormalizeWindowsPath((TStringBuilderBase<wchar_t> *)this,true);
  return this;
}

