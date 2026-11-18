// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 8

// TSharedString<wchar_t> @ 14147c870

TSharedString<wchar_t> * __thiscall
UE::TSharedString<wchar_t>::TSharedString<wchar_t>
          (TSharedString<wchar_t> *this,TSharedString<wchar_t> *param_1)

{
  wchar_t *pwVar1;
  
  pwVar1 = param_1->Chars;
  this->Chars = pwVar1;
  if (pwVar1 != (wchar_t *)0x0) {
    LOCK();
    *(int *)(pwVar1 + -4) = *(int *)(pwVar1 + -4) + 1;
    UNLOCK();
  }
  return this;
}

// TSharedString<wchar_t> @ 14179e410

TSharedString<wchar_t> * __thiscall
UE::TSharedString<wchar_t>::TSharedString<wchar_t>
          (TSharedString<wchar_t> *this,TStringView<wchar_t> *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  longlong lVar3;
  
  iVar1 = param_1->Size;
  lVar3 = (longlong)iVar1;
  this->Chars = (wchar_t *)0x0;
  if (iVar1 != 0) {
    puVar2 = FMemory::Malloc(lVar3 * 2 + 10,0);
    *puVar2 = 1;
    puVar2[1] = iVar1;
    this->Chars = (wchar_t *)(puVar2 + 2);
    if (0 < iVar1) {
      memcpy(puVar2 + 2,param_1->DataPtr,lVar3 * 2);
    }
    this->Chars[lVar3] = L'\0';
  }
  return this;
}

// operator= @ 1417a7da0

TSharedString<wchar_t> * __thiscall
UE::TSharedString<wchar_t>::operator=(TSharedString<wchar_t> *this,TSharedString<wchar_t> *param_1)

{
  int iVar1;
  wchar_t *pwVar2;
  wchar_t *pwVar3;
  
  pwVar2 = param_1->Chars;
  pwVar3 = this->Chars;
  if (pwVar2 != (wchar_t *)0x0) {
    LOCK();
    *(int *)(pwVar2 + -4) = *(int *)(pwVar2 + -4) + 1;
    UNLOCK();
  }
  if (pwVar3 != (wchar_t *)0x0) {
    pwVar3 = pwVar3 + -4;
    LOCK();
    iVar1 = *(int *)pwVar3;
    *(int *)pwVar3 = *(int *)pwVar3 + -1;
    UNLOCK();
    if (iVar1 == 1) {
      FMemory::Free(pwVar3);
    }
  }
  this->Chars = pwVar2;
  return this;
}

// TSharedString<char8_t> @ 1419cc400

TSharedString<char8_t> * __thiscall
UE::TSharedString<char8_t>::TSharedString<char8_t>
          (TSharedString<char8_t> *this,TStringView<char8_t> *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  size_t _Size;
  
  iVar1 = param_1->Size;
  _Size = (size_t)iVar1;
  this->Chars = (uchar *)0x0;
  if (iVar1 != 0) {
    puVar2 = FMemory::Malloc(_Size + 9,0);
    *puVar2 = 1;
    puVar2[1] = iVar1;
    this->Chars = (uchar *)(puVar2 + 2);
    if (0 < iVar1) {
      memcpy(puVar2 + 2,param_1->DataPtr,_Size);
    }
    this->Chars[_Size] = '\0';
  }
  return this;
}

// operator= @ 1419d3940

TSharedString<char8_t> * __thiscall
UE::TSharedString<char8_t>::operator=(TSharedString<char8_t> *this,TSharedString<char8_t> *param_1)

{
  int *piVar1;
  int iVar2;
  
  if (this != param_1) {
    if (this->Chars != (uchar *)0x0) {
      piVar1 = (int *)(this->Chars + -8);
      LOCK();
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        FMemory::Free(piVar1);
      }
    }
    this->Chars = param_1->Chars;
    param_1->Chars = (uchar *)0x0;
  }
  return this;
}

// operator= @ 1419d39a0

TSharedString<char8_t> * __thiscall
UE::TSharedString<char8_t>::operator=(TSharedString<char8_t> *this,TStringView<char8_t> *param_1)

{
  undefined4 *puVar1;
  int *piVar2;
  uchar *_Dst;
  int iVar3;
  size_t _Size;
  TSharedString<char8_t> local_18 [2];
  
  _Dst = (uchar *)0x0;
  iVar3 = (int)*(undefined8 *)&param_1->Size;
  if (iVar3 != 0) {
    _Size = (size_t)iVar3;
    puVar1 = FMemory::Malloc(_Size + 9,0);
    *puVar1 = 1;
    _Dst = (uchar *)(puVar1 + 2);
    puVar1[1] = iVar3;
    if (0 < iVar3) {
      memcpy(_Dst,param_1->DataPtr,_Size);
    }
    _Dst[_Size] = '\0';
  }
  if (this != local_18) {
    if (this->Chars != (uchar *)0x0) {
      piVar2 = (int *)(this->Chars + -8);
      LOCK();
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        FMemory::Free(piVar2);
      }
    }
    this->Chars = _Dst;
    return this;
  }
  if (_Dst != (uchar *)0x0) {
    piVar2 = (int *)(_Dst + -8);
    LOCK();
    iVar3 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (iVar3 == 1) {
      FMemory::Free(piVar2);
    }
  }
  return this;
}

// operator= @ 1419d3a80

TSharedString<wchar_t> * __thiscall
UE::TSharedString<wchar_t>::operator=(TSharedString<wchar_t> *this,TSharedString<wchar_t> *param_1)

{
  wchar_t *pwVar1;
  int iVar2;
  
  if (this != param_1) {
    if (this->Chars != (wchar_t *)0x0) {
      pwVar1 = this->Chars + -4;
      LOCK();
      iVar2 = *(int *)pwVar1;
      *(int *)pwVar1 = *(int *)pwVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        FMemory::Free(pwVar1);
      }
    }
    this->Chars = param_1->Chars;
    param_1->Chars = (wchar_t *)0x0;
  }
  return this;
}

// operator= @ 1419d3ae0

TSharedString<wchar_t> * __thiscall
UE::TSharedString<wchar_t>::operator=(TSharedString<wchar_t> *this,TStringView<wchar_t> *param_1)

{
  undefined4 *puVar1;
  wchar_t *pwVar2;
  wchar_t *pwVar3;
  int iVar4;
  longlong lVar5;
  TSharedString<wchar_t> local_28 [2];
  
  pwVar3 = (wchar_t *)0x0;
  iVar4 = (int)*(undefined8 *)&param_1->Size;
  if (iVar4 != 0) {
    lVar5 = (longlong)iVar4;
    puVar1 = FMemory::Malloc(lVar5 * 2 + 10,0);
    *puVar1 = 1;
    pwVar3 = (wchar_t *)(puVar1 + 2);
    puVar1[1] = iVar4;
    if (0 < iVar4) {
      memcpy(pwVar3,param_1->DataPtr,lVar5 * 2);
    }
    pwVar3[lVar5] = L'\0';
  }
  if (this != local_28) {
    if (this->Chars != (wchar_t *)0x0) {
      pwVar2 = this->Chars + -4;
      LOCK();
      iVar4 = *(int *)pwVar2;
      *(int *)pwVar2 = *(int *)pwVar2 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        FMemory::Free(pwVar2);
      }
    }
    this->Chars = pwVar3;
    return this;
  }
  if (pwVar3 != (wchar_t *)0x0) {
    pwVar3 = pwVar3 + -4;
    LOCK();
    iVar4 = *(int *)pwVar3;
    *(int *)pwVar3 = *(int *)pwVar3 + -1;
    UNLOCK();
    if (iVar4 == 1) {
      FMemory::Free(pwVar3);
    }
  }
  return this;
}

