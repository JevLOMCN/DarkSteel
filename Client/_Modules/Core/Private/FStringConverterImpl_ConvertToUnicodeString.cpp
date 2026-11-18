// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 4

// FStringConverterImpl_ConvertToUnicodeString @ 1416d6ac0

FStringConverterImpl_ConvertToUnicodeString * __thiscall
ICUUtilities::FStringConverterImpl_ConvertToUnicodeString::
FStringConverterImpl_ConvertToUnicodeString(FStringConverterImpl_ConvertToUnicodeString *this)

{
  code *pcVar1;
  bool bVar2;
  UConverter *pUVar3;
  FStringConverterImpl_ConvertToUnicodeString *pFVar4;
  int local_res8 [8];
  
  this->ICUConverter = (UConverter *)0x0;
  local_res8[0] = 0;
  pUVar3 = (UConverter *)ucnv_open_64("UTF-16LE",local_res8);
  this->ICUConverter = pUVar3;
  if (0 < local_res8[0]) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("U_SUCCESS(ICUStatus)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Internationalization\\ICUUtilities.cpp"
                       ,0x3a,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FStringConverterImpl_ConvertToUnicodeString *)(*pcVar1)();
      return pFVar4;
    }
  }
  return this;
}

// ~FStringConverterImpl_ConvertToUnicodeString @ 1416d9460

void __thiscall
ICUUtilities::FStringConverterImpl_ConvertToUnicodeString::
~FStringConverterImpl_ConvertToUnicodeString(FStringConverterImpl_ConvertToUnicodeString *this)

{
  ucnv_close_64(this->ICUConverter);
  return;
}

// ConvertString @ 1416e5e60

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
ICUUtilities::FStringConverterImpl_ConvertToUnicodeString::ConvertString
          (FStringConverterImpl_ConvertToUnicodeString *this,UnicodeString *param_1,int param_2,
          int param_3,FString *param_4)

{
  int *piVar1;
  FScriptContainerElement *_Dst;
  ushort uVar2;
  code *pcVar3;
  char cVar4;
  bool bVar5;
  int iVar6;
  uint uVar7;
  wchar16 *pwVar8;
  int iVar9;
  uint uVar10;
  int local_res20 [2];
  undefined8 in_stack_ffffffffffffffb8;
  undefined4 uVar11;
  
  uVar11 = (undefined4)((ulonglong)in_stack_ffffffffffffffb8 >> 0x20);
  if (param_3 < 1) {
    ::FString::Reset(param_4,0);
    return;
  }
  local_res20[0] = 0;
  ucnv_reset_64(this->ICUConverter);
  cVar4 = ucnv_getMaxCharSize_64(this->ICUConverter);
  iVar9 = (int)cVar4 * (param_3 + 10);
  TArray<wchar_t,TSizedDefaultAllocator<32>_>::SetNumUninitialized
            (&param_4->Data,(int)((ulonglong)(longlong)iVar9 >> 1),Default);
  uVar2 = (param_1->fUnion).fStackFields.fLengthAndFlags;
  if ((uVar2 & 0x11) == 0) {
    if ((uVar2 & 2) == 0) {
      pwVar8 = (param_1->fUnion).fFields.fArray;
    }
    else {
      pwVar8 = (wchar16 *)((longlong)&param_1->fUnion + 2);
    }
  }
  else {
    pwVar8 = (wchar16 *)0x0;
  }
  iVar9 = ucnv_fromUChars_64(this->ICUConverter,(param_4->Data).AllocatorInstance.Data,iVar9,
                             pwVar8 + param_2,CONCAT44(uVar11,param_3),local_res20);
  piVar1 = &(param_4->Data).ArrayNum;
  uVar10 = (uint)((ulonglong)(longlong)iVar9 >> 1);
  uVar7 = 0;
  if ((int)uVar10 < (param_4->Data).ArrayNum) {
    uVar7 = ~uVar10 >> 0x1f;
  }
  if (uVar7 == 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  uVar7 = uVar10 + 1;
  *(undefined2 *)((param_4->Data).AllocatorInstance.Data + (longlong)(int)uVar10 * 2) = 0;
  iVar9 = *piVar1;
  if (iVar9 < (int)uVar7) {
    iVar6 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (2,2,uVar7 - iVar9,(ForAnyElementType *)param_4,piVar1,
                       &(param_4->Data).ArrayMax);
    memset((param_4->Data).AllocatorInstance.Data + (longlong)iVar6 * 2,0,
           (longlong)(int)(uVar7 - iVar9) * 2);
  }
  else {
    if ((int)uVar7 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar7);
    }
    if ((int)uVar7 < iVar9) {
      uVar10 = iVar9 - uVar7;
      if ((int)(uVar10 | uVar7) < 0) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x458,
                           L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                          );
        if (bVar5) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      if (uVar10 != 0) {
        _Dst = (param_4->Data).AllocatorInstance.Data + (longlong)(int)uVar7 * 2;
        iVar9 = (*piVar1 - uVar10) - uVar7;
        if (iVar9 != 0) {
          memmove(_Dst,_Dst + (longlong)(int)uVar10 * 2,(longlong)iVar9 * 2);
        }
        *piVar1 = *piVar1 - uVar10;
      }
    }
  }
  if (0 < local_res20[0]) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("U_SUCCESS(ICUStatus)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Internationalization\\ICUUtilities.cpp"
                       ,0x79,L"");
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  return;
}

// ConvertString @ 1416e60a0

void __thiscall
ICUUtilities::FStringConverterImpl_ConvertToUnicodeString::ConvertString
          (FStringConverterImpl_ConvertToUnicodeString *this,wchar_t *param_1,int param_2,
          int param_3,UnicodeString *param_4,bool param_5)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  wchar16 *pwVar4;
  int local_res20 [2];
  
  if (param_3 < 1) {
    if ((*(byte *)&param_4->fUnion & 1) != 0) {
      (param_4->fUnion).fStackFields.fLengthAndFlags = 2;
      return;
    }
    (param_4->fUnion).fStackFields.fLengthAndFlags =
         (param_4->fUnion).fStackFields.fLengthAndFlags & 0x1f;
  }
  else {
    local_res20[0] = 0;
    ucnv_reset_64(this->ICUConverter);
    iVar3 = param_3 * 2;
    pwVar4 = icu_64::UnicodeString::getBuffer(param_4,iVar3);
    iVar3 = ucnv_toUChars_64(this->ICUConverter,pwVar4,iVar3,param_1 + param_2,iVar3,local_res20);
    if (param_5) {
      pwVar4[iVar3] = L'\0';
    }
    icu_64::UnicodeString::releaseBuffer(param_4,iVar3);
    if (0 < local_res20[0]) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("U_SUCCESS(ICUStatus)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Internationalization\\ICUUtilities.cpp"
                         ,0x5b,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
  }
  return;
}

