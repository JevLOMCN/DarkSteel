// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 16

// GetNativeStringLengthImpl<1,2> @ 1416ce490

int __cdecl
ICUUtilities::GetNativeStringLengthImpl<1,2>(UnicodeString *param_1,int param_2,int param_3)

{
  return param_3;
}

// GetNativeStringLengthImpl<1,4> @ 1416ce4a0

int __cdecl
ICUUtilities::GetNativeStringLengthImpl<1,4>(UnicodeString *param_1,int param_2,int param_3)

{
  int iVar1;
  
  if (param_3 == 0) {
    return 0;
  }
  iVar1 = icu_64::UnicodeString::countChar32(param_1,param_2,param_3);
  return iVar1;
}

// GetUnicodeStringLengthImpl<1,2> @ 1416ce550

int __cdecl ICUUtilities::GetUnicodeStringLengthImpl<1,2>(wchar_t *param_1,int param_2,int param_3)

{
  return param_3;
}

// GetUnicodeStringLengthImpl<1,4> @ 1416ce560

int __cdecl ICUUtilities::GetUnicodeStringLengthImpl<1,4>(wchar_t *param_1,int param_2,int param_3)

{
  if ((0 < param_3) && (param_1 + param_2 < param_1 + param_2 + param_3)) {
    return (int)((longlong)param_3 * 2 - 1U >> 1) + 1;
  }
  return 0;
}

// ConvertString @ 1416e6370

FString * __cdecl
ICUUtilities::ConvertString(FString *__return_storage_ptr__,UnicodeString *param_1)

{
  short sVar1;
  int iVar2;
  FStringConverter local_res8 [32];
  
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).ArrayNum = 0;
  (__return_storage_ptr__->Data).ArrayMax = 0;
  sVar1 = (param_1->fUnion).fStackFields.fLengthAndFlags;
  if (sVar1 >> 7 == 0) {
    iVar2 = (int)sVar1 >> 5;
  }
  else {
    iVar2 = (param_1->fUnion).fFields.fLength;
  }
  if (iVar2 != 0) {
    FStringConverter::ConvertString(local_res8,param_1,0,iVar2,__return_storage_ptr__);
    return __return_storage_ptr__;
  }
  ::FString::Empty(__return_storage_ptr__);
  return __return_storage_ptr__;
}

// ConvertString @ 1416e63d0

FString * __cdecl
ICUUtilities::ConvertString
          (FString *__return_storage_ptr__,UnicodeString *param_1,int param_2,int param_3)

{
  FStringConverter local_res20 [8];
  
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).ArrayNum = 0;
  (__return_storage_ptr__->Data).ArrayMax = 0;
  if (param_3 != 0) {
    FStringConverter::ConvertString(local_res20,param_1,param_2,param_3,__return_storage_ptr__);
    return __return_storage_ptr__;
  }
  ::FString::Empty(__return_storage_ptr__);
  return __return_storage_ptr__;
}

// ConvertString @ 1416e6420

UnicodeString * __cdecl
ICUUtilities::ConvertString
          (UnicodeString *__return_storage_ptr__,wchar_t *param_1,int param_2,int param_3,
          bool param_4)

{
  wchar16 *_Dst;
  
  __return_storage_ptr__->_padding_ = (longlong)icu_64::UnicodeString::vftable;
  (__return_storage_ptr__->fUnion).fStackFields.fLengthAndFlags = 2;
  if (0 < param_3) {
    _Dst = icu_64::UnicodeString::getBuffer(__return_storage_ptr__,param_3 + 1);
    memcpy(_Dst,param_1 + param_2,(longlong)param_3 * 2);
    if (param_4) {
      _Dst[param_3] = L'\0';
    }
    icu_64::UnicodeString::releaseBuffer(__return_storage_ptr__,param_3);
  }
  return __return_storage_ptr__;
}

// ConvertString @ 1416e64c0

UnicodeString * __cdecl
ICUUtilities::ConvertString
          (UnicodeString *__return_storage_ptr__,TStringView<wchar_t> *param_1,bool param_2)

{
  undefined8 uVar1;
  wchar16 *_Dst;
  int iVar2;
  
  uVar1 = *(undefined8 *)&param_1->Size;
  __return_storage_ptr__->_padding_ = (longlong)icu_64::UnicodeString::vftable;
  (__return_storage_ptr__->fUnion).fStackFields.fLengthAndFlags = 2;
  iVar2 = (int)uVar1;
  if (0 < iVar2) {
    _Dst = icu_64::UnicodeString::getBuffer(__return_storage_ptr__,iVar2 + 1);
    memcpy(_Dst,param_1->DataPtr,(longlong)iVar2 * 2);
    if (param_2) {
      _Dst[iVar2] = L'\0';
    }
    icu_64::UnicodeString::releaseBuffer(__return_storage_ptr__,iVar2);
  }
  return __return_storage_ptr__;
}

// ConvertString @ 1416e6550

void __cdecl ICUUtilities::ConvertString(UnicodeString *param_1,FString *param_2)

{
  short sVar1;
  int iVar2;
  FStringConverter local_res8 [32];
  
  sVar1 = (param_1->fUnion).fStackFields.fLengthAndFlags;
  if (sVar1 >> 7 == 0) {
    iVar2 = (int)sVar1 >> 5;
  }
  else {
    iVar2 = (param_1->fUnion).fFields.fLength;
  }
  if (iVar2 != 0) {
    FStringConverter::ConvertString(local_res8,param_1,0,iVar2,param_2);
    return;
  }
  ::FString::Empty(param_2);
  return;
}

// ConvertString @ 1416e65a0

void __cdecl
ICUUtilities::ConvertString(UnicodeString *param_1,int param_2,int param_3,FString *param_4)

{
  FStringConverter local_res18 [16];
  
  if (param_3 != 0) {
    FStringConverter::ConvertString(local_res18,param_1,param_2,param_3,param_4);
    return;
  }
  ::FString::Empty(param_4);
  return;
}

// ConvertString @ 1416e65e0

void __cdecl
ICUUtilities::ConvertString
          (wchar_t *param_1,int param_2,int param_3,UnicodeString *param_4,bool param_5)

{
  FStringConverter local_res18 [16];
  
  if (0 < param_3) {
    FStringConverter::ConvertString(local_res18,param_1,param_2,param_3,param_4,param_5);
    return;
  }
  if ((*(byte *)&param_4->fUnion & 1) != 0) {
    (param_4->fUnion).fStackFields.fLengthAndFlags = 2;
    return;
  }
  (param_4->fUnion).fStackFields.fLengthAndFlags =
       (param_4->fUnion).fStackFields.fLengthAndFlags & 0x1f;
  return;
}

// ConvertString @ 1416e6640

void __cdecl
ICUUtilities::ConvertString(TStringView<wchar_t> *param_1,UnicodeString *param_2,bool param_3)

{
  wchar16 *_Dst;
  int iVar1;
  
  if (param_1->Size < 1) {
    if ((*(byte *)&param_2->fUnion & 1) != 0) {
      (param_2->fUnion).fStackFields.fLengthAndFlags = 2;
      return;
    }
    (param_2->fUnion).fStackFields.fLengthAndFlags =
         (param_2->fUnion).fStackFields.fLengthAndFlags & 0x1f;
    return;
  }
  iVar1 = (int)*(undefined8 *)&param_1->Size;
  if (0 < iVar1) {
    _Dst = icu_64::UnicodeString::getBuffer(param_2,iVar1 + 1);
    memcpy(_Dst,param_1->DataPtr,(longlong)iVar1 * 2);
    if (param_3) {
      _Dst[iVar1] = L'\0';
    }
    icu_64::UnicodeString::releaseBuffer(param_2,iVar1);
    return;
  }
  if ((*(byte *)&param_2->fUnion & 1) != 0) {
    (param_2->fUnion).fStackFields.fLengthAndFlags = 2;
    return;
  }
  (param_2->fUnion).fStackFields.fLengthAndFlags =
       (param_2->fUnion).fStackFields.fLengthAndFlags & 0x1f;
  return;
}

// GetNativeStringLength @ 1416f9640

int __cdecl ICUUtilities::GetNativeStringLength(UnicodeString *param_1)

{
  short sVar1;
  
  sVar1 = (param_1->fUnion).fStackFields.fLengthAndFlags;
  if (sVar1 >> 7 == 0) {
    return (int)sVar1 >> 5;
  }
  return (param_1->fUnion).fFields.fLength;
}

// GetNativeStringLength @ 1416f9660

int __cdecl ICUUtilities::GetNativeStringLength(UnicodeString *param_1,int param_2,int param_3)

{
  return param_3;
}

// GetUnicodeStringLength @ 1416fc7b0

int __cdecl ICUUtilities::GetUnicodeStringLength(wchar_t *param_1,int param_2,int param_3)

{
  return param_3;
}

// GetUnicodeStringLength @ 1416fc7c0

int __cdecl ICUUtilities::GetUnicodeStringLength(TStringView<wchar_t> *param_1)

{
  return param_1->Size;
}

