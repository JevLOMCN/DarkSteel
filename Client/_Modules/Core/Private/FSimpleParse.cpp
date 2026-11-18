// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 5

// MatchChar @ 141956ab0

bool __cdecl FSimpleParse::MatchChar(wchar_t **param_1,wchar_t param_2)

{
  if (**param_1 != param_2) {
    return false;
  }
  *param_1 = *param_1 + 1;
  return true;
}

// MatchZeroOrMoreWhitespace @ 141956ad0

bool __cdecl FSimpleParse::MatchZeroOrMoreWhitespace(wchar_t **param_1)

{
  wchar_t wVar1;
  wchar_t *pwVar2;
  
  for (pwVar2 = *param_1;
      (wVar1 = *pwVar2, wVar1 == L' ' ||
      (((wVar1 + L'\xfff7' & 0xfffaU) == 0 && (wVar1 != L'\x0e')))); pwVar2 = pwVar2 + 1) {
  }
  *param_1 = pwVar2;
  return true;
}

// ParseString @ 141959fe0

bool __cdecl FSimpleParse::ParseString(wchar_t **param_1,TStringBuilderBase<wchar_t> *param_2)

{
  wchar_t *pwVar1;
  wchar_t wVar2;
  wchar_t **ppwVar3;
  wchar_t *pwVar4;
  
  pwVar4 = *param_1;
  if (*pwVar4 == L'\"') {
LAB_141913350:
    wVar2 = pwVar4[1];
    switch(wVar2) {
    case L'\0':
    case L'\t':
    case L'\n':
    case L'\r':
      break;
    default:
      ppwVar3 = &param_2->CurPos;
      if (param_2->End < *ppwVar3 + 1) {
        TStringBuilderBase<wchar_t>::Extend(param_2,1);
      }
      **ppwVar3 = wVar2;
      *ppwVar3 = *ppwVar3 + 1;
      pwVar4 = pwVar4 + 1;
      goto LAB_141913350;
    case L'\"':
      *param_1 = pwVar4 + 2;
      return true;
    case L'\\':
      pwVar1 = pwVar4 + 2;
      pwVar4 = pwVar4 + 2;
      switch(*pwVar1) {
      case L'\"':
        ppwVar3 = &param_2->CurPos;
        if (param_2->End < param_2->CurPos + 1) {
          TStringBuilderBase<wchar_t>::Extend(param_2,1);
        }
        **ppwVar3 = L'\"';
        *ppwVar3 = *ppwVar3 + 1;
        break;
      default:
        goto LAB_141913563;
      case L'/':
        ppwVar3 = &param_2->CurPos;
        if (param_2->End < param_2->CurPos + 1) {
          TStringBuilderBase<wchar_t>::Extend(param_2,1);
        }
        **ppwVar3 = L'/';
        *ppwVar3 = *ppwVar3 + 1;
        break;
      case L'\\':
        ppwVar3 = &param_2->CurPos;
        if (param_2->End < param_2->CurPos + 1) {
          TStringBuilderBase<wchar_t>::Extend(param_2,1);
        }
        **ppwVar3 = L'\\';
        *ppwVar3 = *ppwVar3 + 1;
        break;
      case L'b':
        ppwVar3 = &param_2->CurPos;
        if (param_2->End < param_2->CurPos + 1) {
          TStringBuilderBase<wchar_t>::Extend(param_2,1);
        }
        **ppwVar3 = L'\b';
        *ppwVar3 = *ppwVar3 + 1;
        break;
      case L'f':
        ppwVar3 = &param_2->CurPos;
        if (param_2->End < param_2->CurPos + 1) {
          TStringBuilderBase<wchar_t>::Extend(param_2,1);
        }
        **ppwVar3 = L'\f';
        *ppwVar3 = *ppwVar3 + 1;
        break;
      case L'n':
        ppwVar3 = &param_2->CurPos;
        if (param_2->End < param_2->CurPos + 1) {
          TStringBuilderBase<wchar_t>::Extend(param_2,1);
        }
        **ppwVar3 = L'\n';
        *ppwVar3 = *ppwVar3 + 1;
        break;
      case L'r':
        ppwVar3 = &param_2->CurPos;
        if (param_2->End < param_2->CurPos + 1) {
          TStringBuilderBase<wchar_t>::Extend(param_2,1);
        }
        **ppwVar3 = L'\r';
        *ppwVar3 = *ppwVar3 + 1;
        break;
      case L't':
        ppwVar3 = &param_2->CurPos;
        if (param_2->End < param_2->CurPos + 1) {
          TStringBuilderBase<wchar_t>::Extend(param_2,1);
        }
        **ppwVar3 = L'\t';
        *ppwVar3 = *ppwVar3 + 1;
      }
      goto LAB_141913350;
    }
  }
LAB_141913563:
  return false;
}

// ParseString @ 141959ff0

bool __cdecl FSimpleParse::ParseString(wchar_t **param_1,FString *param_2)

{
  wchar_t wVar1;
  wchar_t *pwVar2;
  wchar_t *pwVar3;
  
  pwVar2 = *param_1;
  if (*pwVar2 != L'\"') {
    return false;
  }
  do {
    wVar1 = pwVar2[1];
    pwVar3 = pwVar2 + 1;
    switch(wVar1) {
    case L'\0':
    case L'\t':
    case L'\n':
    case L'\r':
LAB_14195a13a:
      return false;
    default:
switchD_14195a07e_caseD_1:
      ::FString::AppendChar(param_2,wVar1);
      pwVar2 = pwVar3;
      break;
    case L'\"':
      *param_1 = pwVar2 + 2;
      return true;
    case L'\\':
      pwVar3 = pwVar2 + 2;
      switch(pwVar2[2]) {
      case L'\"':
        ::FString::AppendChar(param_2,L'\"');
        pwVar2 = pwVar3;
        break;
      default:
        goto LAB_14195a13a;
      case L'/':
        ::FString::AppendChar(param_2,L'/');
        pwVar2 = pwVar3;
        break;
      case L'\\':
        ::FString::AppendChar(param_2,L'\\');
        pwVar2 = pwVar3;
        break;
      case L'b':
        ::FString::AppendChar(param_2,L'\b');
        pwVar2 = pwVar3;
        break;
      case L'f':
        ::FString::AppendChar(param_2,L'\f');
        pwVar2 = pwVar3;
        break;
      case L'n':
        ::FString::AppendChar(param_2,L'\n');
        pwVar2 = pwVar3;
        break;
      case L'r':
        ::FString::AppendChar(param_2,L'\r');
        pwVar2 = pwVar3;
        break;
      case L't':
        wVar1 = L'\t';
        goto switchD_14195a07e_caseD_1;
      }
    }
  } while( true );
}

// ParseUnsignedNumber @ 14195a2f0

bool __cdecl FSimpleParse::ParseUnsignedNumber(wchar_t **param_1,int *param_2)

{
  wchar_t wVar1;
  wchar_t *pwVar2;
  wchar_t *pwVar3;
  int iVar4;
  
  pwVar2 = *param_1;
  if ((ushort)(*pwVar2 + L'￐') < 10) {
    pwVar3 = pwVar2 + 1;
    iVar4 = (ushort)*pwVar2 - 0x30;
    wVar1 = pwVar2[1];
    while ((0x2f < (ushort)wVar1 && ((ushort)wVar1 < 0x3a))) {
      pwVar3 = pwVar3 + 1;
      iVar4 = (uint)(ushort)wVar1 + (iVar4 * 5 + -0x18) * 2;
      wVar1 = *pwVar3;
    }
    *param_1 = pwVar3;
    *param_2 = iVar4;
    return true;
  }
  return false;
}

