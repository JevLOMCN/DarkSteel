// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 2

// ToLower @ 141715660

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "UErrorCode": Some values do not have unique names */

FString * __cdecl FTextTransformer::ToLower(FString *__return_storage_ptr__,FString *param_1)

{
  short sVar1;
  int iVar2;
  FScriptContainerElement *_Src;
  code *pcVar3;
  bool bVar4;
  FInternationalization *pFVar5;
  FString *pFVar6;
  wchar16 *_Dst;
  UnicodeString *pUVar7;
  int iVar8;
  undefined1 auStackY_a8 [32];
  FStringConverter local_78 [16];
  UnicodeString local_68;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_a8;
  pFVar5 = FInternationalization::Get();
  if (pFVar5->bIsInitialized != true) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("I18N.IsInitialized() == true",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Internationalization\\ICUText.cpp"
                       ,0x56,
                       L"FInternationalization is not initialized. An FText formatting method was likely used in static object initialization - this is not supported."
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar6 = (FString *)(*pcVar3)();
      return pFVar6;
    }
  }
  iVar2 = (param_1->Data).ArrayNum;
  _Src = (param_1->Data).AllocatorInstance.Data;
  iVar8 = iVar2 + -1;
  if (iVar2 == 0) {
    iVar8 = 0;
  }
  local_68._padding_ = (longlong)icu_64::UnicodeString::vftable;
  local_68.fUnion.fStackFields.fLengthAndFlags = 2;
  if (0 < iVar8) {
    _Dst = icu_64::UnicodeString::getBuffer(&local_68,iVar8 + 1);
    memcpy(_Dst,_Src,(longlong)iVar8 * 2);
    _Dst[iVar8] = L'\0';
    icu_64::UnicodeString::releaseBuffer(&local_68,iVar8);
  }
  pUVar7 = icu_64::UnicodeString::toLower(&local_68);
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).ArrayNum = 0;
  (__return_storage_ptr__->Data).ArrayMax = 0;
  sVar1 = (pUVar7->fUnion).fStackFields.fLengthAndFlags;
  if (sVar1 >> 7 == 0) {
    iVar8 = (int)sVar1 >> 5;
  }
  else {
    iVar8 = (pUVar7->fUnion).fFields.fLength;
  }
  if (iVar8 == 0) {
    ::FString::Empty(__return_storage_ptr__);
  }
  else {
    ICUUtilities::FStringConverter::ConvertString(local_78,pUVar7,0,iVar8,__return_storage_ptr__);
  }
  icu_64::UnicodeString::~UnicodeString(&local_68);
  return __return_storage_ptr__;
}

// ToUpper @ 141715ea0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "UErrorCode": Some values do not have unique names */

FString * __cdecl FTextTransformer::ToUpper(FString *__return_storage_ptr__,FString *param_1)

{
  short sVar1;
  int iVar2;
  FScriptContainerElement *_Src;
  code *pcVar3;
  bool bVar4;
  FInternationalization *pFVar5;
  FString *pFVar6;
  wchar16 *_Dst;
  UnicodeString *pUVar7;
  int iVar8;
  undefined1 auStackY_a8 [32];
  FStringConverter local_78 [16];
  UnicodeString local_68;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_a8;
  pFVar5 = FInternationalization::Get();
  if (pFVar5->bIsInitialized != true) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("I18N.IsInitialized() == true",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Internationalization\\ICUText.cpp"
                       ,0x5e,
                       L"FInternationalization is not initialized. An FText formatting method was likely used in static object initialization - this is not supported."
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar6 = (FString *)(*pcVar3)();
      return pFVar6;
    }
  }
  iVar2 = (param_1->Data).ArrayNum;
  _Src = (param_1->Data).AllocatorInstance.Data;
  iVar8 = iVar2 + -1;
  if (iVar2 == 0) {
    iVar8 = 0;
  }
  local_68._padding_ = (longlong)icu_64::UnicodeString::vftable;
  local_68.fUnion.fStackFields.fLengthAndFlags = 2;
  if (0 < iVar8) {
    _Dst = icu_64::UnicodeString::getBuffer(&local_68,iVar8 + 1);
    memcpy(_Dst,_Src,(longlong)iVar8 * 2);
    _Dst[iVar8] = L'\0';
    icu_64::UnicodeString::releaseBuffer(&local_68,iVar8);
  }
  pUVar7 = icu_64::UnicodeString::toUpper(&local_68);
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).ArrayNum = 0;
  (__return_storage_ptr__->Data).ArrayMax = 0;
  sVar1 = (pUVar7->fUnion).fStackFields.fLengthAndFlags;
  if (sVar1 >> 7 == 0) {
    iVar8 = (int)sVar1 >> 5;
  }
  else {
    iVar8 = (pUVar7->fUnion).fFields.fLength;
  }
  if (iVar8 == 0) {
    ::FString::Empty(__return_storage_ptr__);
  }
  else {
    ICUUtilities::FStringConverter::ConvertString(local_78,pUVar7,0,iVar8,__return_storage_ptr__);
  }
  icu_64::UnicodeString::~UnicodeString(&local_68);
  return __return_storage_ptr__;
}

