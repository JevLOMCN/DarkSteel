// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 2

// ConvertString @ 1416e61b0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
ICUUtilities::FStringConverterImpl_NativeUTF16::ConvertString
          (FStringConverterImpl_NativeUTF16 *this,UnicodeString *param_1,int param_2,int param_3,
          FString *param_4)

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

// ConvertString @ 1416e62b0

void __thiscall
ICUUtilities::FStringConverterImpl_NativeUTF16::ConvertString
          (FStringConverterImpl_NativeUTF16 *this,wchar_t *param_1,int param_2,int param_3,
          UnicodeString *param_4,bool param_5)

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

