// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 1

// ToString @ 1485dea00

wchar_t * __thiscall
UE::Shader::FValueComponent::ToString
          (FValueComponent *this,EValueComponentType param_1,TStringBuilderBase<wchar_t> *param_2)

{
  code *pcVar1;
  bool bVar2;
  wchar_t *pwVar3;
  size_t sVar4;
  
  if (param_1 == Float) {
    TStringBuilderBase<wchar_t>::AppendfImpl(param_2,L"%#.9gf");
  }
  else if (param_1 == Int) {
    TStringBuilderBase<wchar_t>::AppendfImpl(param_2,L"%d");
  }
  else if (param_1 == Bool) {
    pwVar3 = L"false";
    if (*this != (FValueComponent)0x0) {
      pwVar3 = L"true";
    }
    sVar4 = wcslen(pwVar3);
    TStringBuilderBase<wchar_t>::Append<wchar_t,0>(param_2,pwVar3,(int)sVar4);
  }
  else {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("!\"Enclosing block should never be called\"",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Shader\\ShaderValue.cpp"
                       ,0x23d,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pwVar3 = (wchar_t *)(*pcVar1)();
      return pwVar3;
    }
  }
  if (param_2->End < param_2->CurPos + 1) {
    TStringBuilderBase<wchar_t>::Extend(param_2,1);
  }
  *param_2->CurPos = L'\0';
  return param_2->Base;
}

