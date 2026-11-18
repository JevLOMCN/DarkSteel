// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 9

// Equals<FString> @ 14172c180

bool __thiscall
TStringView<wchar_t>::Equals<FString>(TStringView<wchar_t> *this,FString *param_1,Type param_2)

{
  int iVar1;
  FScriptContainerElement *_Str2;
  int iVar2;
  int iVar3;
  
  iVar2 = (param_1->Data).ArrayNum;
  _Str2 = (param_1->Data).AllocatorInstance.Data;
  iVar1 = this->Size;
  iVar3 = iVar2 + -1;
  if (iVar2 == 0) {
    iVar3 = 0;
  }
  if (iVar1 == iVar3) {
    if ((iVar1 != 0) && (iVar3 != 0)) {
      if (param_2 == CaseSensitive) {
        iVar2 = wcsncmp(this->DataPtr,(wchar_t *)_Str2,(longlong)iVar3);
      }
      else {
        iVar2 = FGenericPlatformStricmp::Strnicmp(this->DataPtr,(wchar_t *)_Str2,(longlong)iVar3);
      }
      if (iVar2 != 0) {
        return false;
      }
    }
    if (iVar1 == iVar3) {
      return true;
    }
  }
  return false;
}

// operator[] @ 1418bfdc0

wchar_t * __thiscall TStringView<wchar_t>::operator[](TStringView<wchar_t> *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  wchar_t *pwVar3;
  
  if ((param_1 < 0) || (this->Size <= param_1)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Index >= 0 && Index < Size",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\StringView.h"
                       ,0x234,
                       L"Index out of bounds on StringView: index %i on a view with a length of %i")
    ;
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pwVar3 = (wchar_t *)(*pcVar1)();
      return pwVar3;
    }
  }
  return this->DataPtr + param_1;
}

// TrimStartAndEndInline @ 1419757e0

void __thiscall TStringView<wchar_t>::TrimStartAndEndInline(TStringView<wchar_t> *this)

{
  wchar_t *pwVar1;
  int iVar2;
  int iVar3;
  wchar_t *pwVar4;
  int iVar5;
  longlong lVar6;
  undefined4 uStack_c;
  
  pwVar4 = this->DataPtr;
  iVar5 = 0;
  pwVar1 = pwVar4 + this->Size;
  while ((pwVar4 != pwVar1 && (iVar2 = iswspace(*pwVar4), iVar2 != 0))) {
    iVar5 = iVar5 + 1;
    pwVar4 = pwVar4 + 1;
  }
  pwVar1 = this->DataPtr;
  iVar2 = this->Size - iVar5;
  if (iVar2 != 0) {
    lVar6 = (longlong)iVar2;
    do {
      iVar3 = iswspace((pwVar1 + iVar5)[lVar6 + -1]);
      if (iVar3 == 0) break;
      iVar2 = iVar2 + -1;
      lVar6 = lVar6 + -1;
    } while (lVar6 != 0);
  }
  this->DataPtr = pwVar1 + iVar5;
  *(ulonglong *)&this->Size = CONCAT44(uStack_c,iVar2);
  return;
}

// IsEmpty @ 141a84830

bool __thiscall TStringView<char>::IsEmpty(TStringView<char> *this)

{
  return this->Size == 0;
}

// IsEmpty @ 141a84840

bool __thiscall TStringView<char8_t>::IsEmpty(TStringView<char8_t> *this)

{
  return this->Size == 0;
}

// IsEmpty @ 141a84850

bool __thiscall TStringView<wchar_t>::IsEmpty(TStringView<wchar_t> *this)

{
  return this->Size == 0;
}

// PrivateEquals @ 141b483a0

bool __cdecl
TStringView<wchar_t>::PrivateEquals(TStringView<wchar_t> *param_1,TStringView<wchar_t> *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = param_1->Size;
  iVar3 = (int)*(undefined8 *)&param_2->Size;
  if (iVar1 == iVar3) {
    if ((iVar1 != 0) && (iVar3 != 0)) {
      iVar2 = iVar3;
      if (iVar1 < iVar3) {
        iVar2 = iVar1;
      }
      iVar2 = FGenericPlatformStricmp::Strnicmp(param_1->DataPtr,param_2->DataPtr,(longlong)iVar2);
      if (iVar2 != 0) {
        return false;
      }
    }
    if (iVar1 == iVar3) {
      return true;
    }
  }
  return false;
}

// PrivateEquals @ 141c096a0

bool __cdecl TStringView<wchar_t>::PrivateEquals(TStringView<wchar_t> *param_1,wchar_t *param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = param_1->Size;
  if (iVar1 == 0) {
    return *param_2 == L'\0';
  }
  iVar2 = FGenericPlatformStricmp::Strnicmp(param_1->DataPtr,param_2,(longlong)iVar1);
  if ((iVar2 == 0) && (param_2[iVar1] == L'\0')) {
    return true;
  }
  return false;
}

// UEOpEquals @ 141d8d8f0

bool __thiscall
TStringView<wchar_t>::UEOpEquals(TStringView<wchar_t> *this,TStringView<wchar_t> *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = this->Size;
  iVar3 = (int)*(undefined8 *)&param_1->Size;
  if (iVar1 == iVar3) {
    if ((iVar1 != 0) && (iVar3 != 0)) {
      iVar2 = iVar3;
      if (iVar1 < iVar3) {
        iVar2 = iVar1;
      }
      iVar2 = FGenericPlatformStricmp::Strnicmp(this->DataPtr,param_1->DataPtr,(longlong)iVar2);
      if (iVar2 != 0) {
        return false;
      }
    }
    if (iVar1 == iVar3) {
      return true;
    }
  }
  return false;
}

