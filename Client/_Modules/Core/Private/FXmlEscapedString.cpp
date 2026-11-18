// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 1

// FXmlEscapedString<512> @ 141619b80

FXmlEscapedString<512> * __thiscall
FXmlEscapedString<512>::FXmlEscapedString<512>
          (FXmlEscapedString<512> *this,TStringView<wchar_t> *param_1)

{
  wchar_t *pwVar1;
  wchar_t wVar2;
  int iVar3;
  wchar_t *pwVar4;
  
  pwVar4 = param_1->DataPtr;
  *(undefined2 *)&this->field_0x18 = 0;
  *(undefined1 **)this = &this->field_0x20;
  *(undefined1 **)&this->field_0x8 = &this->field_0x20;
  *(FXmlEscapedString<512> **)&this->field_0x10 = this + 1;
  iVar3 = (int)*(undefined8 *)&param_1->Size;
  if (iVar3 != 0) {
    pwVar1 = pwVar4 + iVar3;
    for (; pwVar4 != pwVar1; pwVar4 = pwVar4 + 1) {
      wVar2 = *pwVar4;
      switch(wVar2) {
      case L'\r':
        break;
      default:
        if (*(ulonglong *)&this->field_0x10 < *(longlong *)&this->field_0x8 + 2U) {
          TStringBuilderBase<wchar_t>::Extend((TStringBuilderBase<wchar_t> *)this,1);
        }
        **(wchar_t **)&this->field_0x8 = wVar2;
        *(longlong *)&this->field_0x8 = *(longlong *)&this->field_0x8 + 2;
        break;
      case L'\"':
        TStringBuilderBase<wchar_t>::Append<wchar_t,0>
                  ((TStringBuilderBase<wchar_t> *)this,L"&quot;",6);
        break;
      case L'&':
        TStringBuilderBase<wchar_t>::Append<wchar_t,0>
                  ((TStringBuilderBase<wchar_t> *)this,L"&amp;",5);
        break;
      case L'\'':
        TStringBuilderBase<wchar_t>::Append<wchar_t,0>
                  ((TStringBuilderBase<wchar_t> *)this,L"&apos;",6);
        break;
      case L'<':
        TStringBuilderBase<wchar_t>::Append<wchar_t,0>
                  ((TStringBuilderBase<wchar_t> *)this,L"&lt;",4);
        break;
      case L'>':
        TStringBuilderBase<wchar_t>::Append<wchar_t,0>
                  ((TStringBuilderBase<wchar_t> *)this,L"&gt;",4);
      }
    }
    return this;
  }
  return this;
}

