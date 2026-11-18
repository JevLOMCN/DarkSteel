// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 8

// ConvertString @ 1416e5a50

FString * __thiscall
ICUUtilities::FStringConverter::ConvertString
          (FStringConverter *this,FString *__return_storage_ptr__,UnicodeString *param_1)

{
  short sVar1;
  int iVar2;
  
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
  ConvertString(this,param_1,0,iVar2,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// ConvertString @ 1416e5aa0

FString * __thiscall
ICUUtilities::FStringConverter::ConvertString
          (FStringConverter *this,FString *__return_storage_ptr__,UnicodeString *param_1,int param_2
          ,int param_3)

{
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).ArrayNum = 0;
  (__return_storage_ptr__->Data).ArrayMax = 0;
  ConvertString(this,param_1,param_2,param_3,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// ConvertString @ 1416e5ae0

UnicodeString * __thiscall
ICUUtilities::FStringConverter::ConvertString
          (FStringConverter *this,UnicodeString *__return_storage_ptr__,wchar_t *param_1,int param_2
          ,int param_3,bool param_4)

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

// ConvertString @ 1416e5b80

UnicodeString * __thiscall
ICUUtilities::FStringConverter::ConvertString
          (FStringConverter *this,UnicodeString *__return_storage_ptr__,
          TStringView<wchar_t> *param_1,bool param_2)

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

// ConvertString @ 1416e5c20

void __thiscall
ICUUtilities::FStringConverter::ConvertString
          (FStringConverter *this,UnicodeString *param_1,FString *param_2)

{
  short sVar1;
  
  sVar1 = (param_1->fUnion).fStackFields.fLengthAndFlags;
  if (sVar1 >> 7 == 0) {
    ConvertString(this,param_1,0,(int)sVar1 >> 5,param_2);
    return;
  }
  ConvertString(this,param_1,0,(param_1->fUnion).fFields.fLength,param_2);
  return;
}

// ConvertString @ 1416e5c70

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
ICUUtilities::FStringConverter::ConvertString
          (FStringConverter *this,UnicodeString *param_1,int param_2,int param_3,FString *param_4)

{
  ushort uVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  wchar16 *pwVar5;
  
  if (param_3 < 1) {
    ::FString::Reset(param_4,0);
    return;
  }
  TArray<wchar_t,TSizedDefaultAllocator<32>_>::SetNumUninitialized
            (&param_4->Data,param_3 + 1,Default);
  uVar1 = (param_1->fUnion).fStackFields.fLengthAndFlags;
  pwVar5 = (wchar16 *)0x0;
  if ((uVar1 & 0x11) == 0) {
    if ((uVar1 & 2) == 0) {
      pwVar5 = (param_1->fUnion).fFields.fArray;
    }
    else {
      pwVar5 = (wchar16 *)((longlong)&param_1->fUnion + 2);
    }
  }
  memcpy((param_4->Data).AllocatorInstance.Data,pwVar5 + param_2,(longlong)param_3 * 2);
  uVar4 = 0;
  if (param_3 < (param_4->Data).ArrayNum) {
    uVar4 = (uint)~param_3 >> 0x1f;
  }
  if ((uVar4 == 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  *(undefined2 *)((param_4->Data).AllocatorInstance.Data + (longlong)param_3 * 2) = 0;
  return;
}

// ConvertString @ 1416e5d70

void __thiscall
ICUUtilities::FStringConverter::ConvertString
          (FStringConverter *this,wchar_t *param_1,int param_2,int param_3,UnicodeString *param_4,
          bool param_5)

{
  wchar16 *_Dst;
  
  if (0 < param_3) {
    _Dst = icu_64::UnicodeString::getBuffer(param_4,param_3 + 1);
    memcpy(_Dst,param_1 + param_2,(longlong)param_3 * 2);
    if (param_5) {
      _Dst[param_3] = L'\0';
    }
    icu_64::UnicodeString::releaseBuffer(param_4,param_3);
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

// ConvertString @ 1416e5e30

void __thiscall
ICUUtilities::FStringConverter::ConvertString
          (FStringConverter *this,TStringView<wchar_t> *param_1,UnicodeString *param_2,bool param_3)

{
  ConvertString(this,param_1->DataPtr,0,param_1->Size,param_2,param_3);
  return;
}

