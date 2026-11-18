// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 41

// FICUCultureImplementation @ 1416d4f10

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "UErrorCode": Some values do not have unique names */

FICUCultureImplementation * __thiscall
FICUCultureImplementation::FICUCultureImplementation
          (FICUCultureImplementation *this,FString *param_1)

{
  TArray<ETextPluralForm,TSizedDefaultAllocator<32>_> *pTVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  TStringConversion<TStringConvert<wchar_t,char>,128> *pTVar5;
  Locale *pLVar6;
  PluralRules *pPVar7;
  FICUCultureImplementation *pFVar8;
  TArray<ETextPluralForm,TSizedDefaultAllocator<32>_> *pTVar9;
  TArray<ETextPluralForm,TSizedDefaultAllocator<32>_> *pTVar10;
  wchar_t *pwVar11;
  undefined1 auStackY_148 [32];
  UErrorCode local_118;
  UErrorCode local_114;
  FString *local_110;
  FString *local_108;
  TArray<ETextPluralForm,TSizedDefaultAllocator<32>_> local_100;
  TArray<ETextPluralForm,TSizedDefaultAllocator<32>_> local_f0;
  TStringConversion<TStringConvert<wchar_t,char>,128> local_d8;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_148;
  this->_padding_ = (longlong)&___7FICUCultureImplementation__6B_;
  if ((param_1->Data).ArrayNum == 0) {
    pwVar11 = L"";
  }
  else {
    pwVar11 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
  }
  pTVar5 = StringCast<char,128,wchar_t>(&local_d8,pwVar11);
  icu_64::Locale::Locale(&this->ICULocale,pTVar5->Ptr,(char *)0x0,(char *)0x0,(char *)0x0);
  if ((void *)local_d8._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_d8._padding_);
  }
  pTVar10 = &this->UEAvailableCardinalPluralForms;
  (this->ICUGraphemeBreakIterator).Object = (BreakIterator *)0x0;
  pTVar1 = &this->UEAvailableOrdinalPluralForms;
  (pTVar10->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  (this->UEAvailableCardinalPluralForms).ArrayNum = 0;
  (this->UEAvailableCardinalPluralForms).ArrayMax = 0;
  (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  (this->UEAvailableOrdinalPluralForms).ArrayNum = 0;
  (this->UEAvailableOrdinalPluralForms).ArrayMax = 0;
  (this->ICUGraphemeBreakIterator).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->ICUWordBreakIterator).Object = (BreakIterator *)0x0;
  (this->ICUWordBreakIterator).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->ICULineBreakIterator).Object = (BreakIterator *)0x0;
  (this->ICULineBreakIterator).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->ICUSentenceBreakIterator).Object = (BreakIterator *)0x0;
  (this->ICUSentenceBreakIterator).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->ICUTitleBreakIterator).Object = (BreakIterator *)0x0;
  (this->ICUTitleBreakIterator).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->ICUCollator).Object = (Collator *)0x0;
  (this->ICUCollator).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  (this->ICUDateTimeDecimalFormat).Object = (DecimalFormat *)0x0;
  (this->ICUDateTimeDecimalFormat).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->ICUDateFormat).Object = (DateFormat *)0x0;
  (this->ICUDateFormat).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->ICUTimeFormat).Object = (DateFormat *)0x0;
  (this->ICUTimeFormat).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->ICUDateTimeFormat).Object = (DateFormat *)0x0;
  (this->ICUDateTimeFormat).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->UEDecimalNumberFormattingRules).Object = (FDecimalNumberFormattingRules *)0x0;
  (this->UEDecimalNumberFormattingRules).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  InitializeCriticalSectionAndSpinCount
            ((LPCRITICAL_SECTION)&this->UEDecimalNumberFormattingRulesCS,4000);
  (this->UEPercentFormattingRules).Object = (FDecimalNumberFormattingRules *)0x0;
  (this->UEPercentFormattingRules).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&this->UEPercentFormattingRulesCS,4000);
  (this->UECurrencyFormattingRules).Object = (FDecimalNumberFormattingRules *)0x0;
  (this->UECurrencyFormattingRules).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&this->UECurrencyFormattingRulesCS,4000)
  ;
  *(undefined8 *)&this->UEAlternateCurrencyFormattingRules = 0;
  *(undefined8 *)&(this->UEAlternateCurrencyFormattingRules).field_0x8 = 0;
  *(undefined8 *)&(this->UEAlternateCurrencyFormattingRules).field_0x20 = 0;
  *(undefined4 *)&(this->UEAlternateCurrencyFormattingRules).field_0x28 = 0;
  *(undefined4 *)&(this->UEAlternateCurrencyFormattingRules).field_0x2c = 0x80;
  *(undefined4 *)&(this->UEAlternateCurrencyFormattingRules).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->UEAlternateCurrencyFormattingRules).field_0x34 = 0;
  *(undefined8 *)&(this->UEAlternateCurrencyFormattingRules).field_0x40 = 0;
  *(undefined4 *)&(this->UEAlternateCurrencyFormattingRules).field_0x48 = 0;
  InitializeCriticalSectionAndSpinCount
            ((LPCRITICAL_SECTION)&this->UEAlternateCurrencyFormattingRulesCS,4000);
  if ((this->ICULocale).fIsBogus != '\0') {
    pLVar6 = ::`anonymous_namespace'::GetInvariantLocale();
    icu_64::Locale::operator=(&this->ICULocale,pLVar6);
  }
  local_118 = U_ZERO_ERROR;
  pPVar7 = icu_64::PluralRules::forLocale(&this->ICULocale,UPLURAL_TYPE_CARDINAL,&local_118);
  this->ICUCardinalPluralRules = pPVar7;
  if ((0 < (int)local_118) || (pPVar7 == (PluralRules *)0x0)) {
    local_110 = param_1;
    bVar4 = `FICUCultureImplementation::FICUCultureImplementation'::__l7::<lambda_1>::operator()
                      (&local_110);
    if (!bVar4) {
      pLVar6 = ::`anonymous_namespace'::GetInvariantLocale();
      pPVar7 = icu_64::PluralRules::forLocale(pLVar6,UPLURAL_TYPE_CARDINAL,&local_118);
      this->ICUCardinalPluralRules = pPVar7;
      if (pPVar7 == (PluralRules *)0x0) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("ICUCardinalPluralRules",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Internationalization\\ICUCulture.cpp"
                           ,0xd3,L"");
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          pFVar8 = (FICUCultureImplementation *)(*pcVar3)();
          return pFVar8;
        }
      }
    }
  }
  pTVar9 = ICUPluralRulesToUEValidPluralForms(&local_100,this->ICUCardinalPluralRules);
  if (pTVar10 != pTVar9) {
    pFVar2 = (pTVar10->AllocatorInstance).Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    (pTVar10->AllocatorInstance).Data = (pTVar9->AllocatorInstance).Data;
    (pTVar9->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    (this->UEAvailableCardinalPluralForms).ArrayNum = pTVar9->ArrayNum;
    (this->UEAvailableCardinalPluralForms).ArrayMax = pTVar9->ArrayMax;
    pTVar9->ArrayNum = 0;
    pTVar9->ArrayMax = 0;
  }
  if (local_100.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_100.AllocatorInstance.Data);
  }
  local_114 = U_ZERO_ERROR;
  pPVar7 = icu_64::PluralRules::forLocale(&this->ICULocale,UPLURAL_TYPE_ORDINAL,&local_114);
  this->ICUOrdinalPluralRules = pPVar7;
  if ((0 < (int)local_114) || (pPVar7 == (PluralRules *)0x0)) {
    local_108 = param_1;
    bVar4 = `FICUCultureImplementation::FICUCultureImplementation'::__l18::<lambda_2>::operator()
                      (&local_108);
    if (!bVar4) {
      pLVar6 = ::`anonymous_namespace'::GetInvariantLocale();
      pPVar7 = icu_64::PluralRules::forLocale(pLVar6,UPLURAL_TYPE_ORDINAL,&local_114);
      this->ICUOrdinalPluralRules = pPVar7;
      if (pPVar7 == (PluralRules *)0x0) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("ICUOrdinalPluralRules",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Internationalization\\ICUCulture.cpp"
                           ,0xdd,L"");
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          pFVar8 = (FICUCultureImplementation *)(*pcVar3)();
          return pFVar8;
        }
      }
    }
  }
  pTVar10 = ICUPluralRulesToUEValidPluralForms(&local_f0,this->ICUOrdinalPluralRules);
  if (pTVar1 != pTVar10) {
    pFVar2 = (pTVar1->AllocatorInstance).Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    (pTVar1->AllocatorInstance).Data = (pTVar10->AllocatorInstance).Data;
    (pTVar10->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    (this->UEAvailableOrdinalPluralForms).ArrayNum = pTVar10->ArrayNum;
    (this->UEAvailableOrdinalPluralForms).ArrayMax = pTVar10->ArrayMax;
    pTVar10->ArrayNum = 0;
    pTVar10->ArrayMax = 0;
  }
  if (local_f0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_f0.AllocatorInstance.Data);
  }
  return this;
}

// ~FICUCultureImplementation @ 1416d89f0

/* WARNING: Enum "UErrorCode": Some values do not have unique names */

void __thiscall
FICUCultureImplementation::~FICUCultureImplementation(FICUCultureImplementation *this)

{
  void *pvVar1;
  FScriptContainerElement *pFVar2;
  
  DeleteCriticalSection((LPCRITICAL_SECTION)&this->UEAlternateCurrencyFormattingRulesCS);
  *(undefined4 *)&(this->UEAlternateCurrencyFormattingRules).field_0x48 = 0;
  pvVar1 = *(void **)&(this->UEAlternateCurrencyFormattingRules).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FString,TSharedPtr<FDecimalNumberFormattingRules_const_,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FString,TSharedPtr<FDecimalNumberFormattingRules_const_,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FString,TSharedPtr<FDecimalNumberFormattingRules_const_,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->UEAlternateCurrencyFormattingRules);
  DeleteCriticalSection((LPCRITICAL_SECTION)&this->UECurrencyFormattingRulesCS);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->UECurrencyFormattingRules).SharedReferenceCount.ReferenceController);
  DeleteCriticalSection((LPCRITICAL_SECTION)&this->UEPercentFormattingRulesCS);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->UEPercentFormattingRules).SharedReferenceCount.ReferenceController);
  DeleteCriticalSection((LPCRITICAL_SECTION)&this->UEDecimalNumberFormattingRulesCS);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->UEDecimalNumberFormattingRules).SharedReferenceCount.ReferenceController);
  pFVar2 = (this->UEAvailableOrdinalPluralForms).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->UEAvailableCardinalPluralForms).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->ICUDateTimeFormat).SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->ICUTimeFormat).SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->ICUDateFormat).SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->ICUDateTimeDecimalFormat).SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->ICUCollator).SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->ICUTitleBreakIterator).SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->ICUSentenceBreakIterator).SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->ICULineBreakIterator).SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->ICUWordBreakIterator).SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->ICUGraphemeBreakIterator).SharedReferenceCount.ReferenceController);
  icu_64::Locale::~Locale(&this->ICULocale);
  return;
}

// operator() @ 1416dbe40

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FString * __thiscall
`FICUCultureImplementation::GetDateTimeFormatter'::__l3::<lambda_1>::operator()
          (void *this,FString *__return_storage_ptr__,wchar_t *param_1)

{
  void *pvVar1;
  wchar_t *pwVar2;
  wchar_t wVar3;
  undefined1 auStack_a8 [32];
  TStringBuilderBase<wchar_t> local_88;
  wchar_t local_68 [32];
  ulonglong local_28 [2];
  
  local_28[0] = __security_cookie.value ^ (ulonglong)auStack_a8;
  local_88.Base = local_68;
  wVar3 = *param_1;
  local_88.CurPos = local_68;
  local_88.End = (wchar_t *)local_28;
  local_88.bIsDynamic = false;
  local_88.bIsExternal = false;
  do {
    if (wVar3 == L'\0') {
      if (local_88.End < local_88.CurPos + 1) {
        TStringBuilderBase<wchar_t>::Extend(&local_88,1);
      }
      *local_88.CurPos = L'\0';
      ::FString::FString(__return_storage_ptr__,local_88.Base);
      TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_88);
      return __return_storage_ptr__;
    }
    if (wVar3 != L'%') {
switchD_1416dbee1_caseD_43:
      if (local_88.End < local_88.CurPos + 1) {
        TStringBuilderBase<wchar_t>::Extend(&local_88,1);
      }
      *local_88.CurPos = wVar3;
      local_88.CurPos = local_88.CurPos + 1;
      goto LAB_1416dc2bb;
    }
    wVar3 = param_1[1];
    param_1 = param_1 + 1;
    if (wVar3 == L'\0') goto switchD_1416dbee1_caseD_43;
    switch(wVar3) {
    case L'A':
      if (local_88.End < local_88.CurPos + 4) {
        TStringBuilderBase<wchar_t>::Extend(&local_88,4);
      }
      pvVar1 = FGenericPlatformString::Memcpy(local_88.CurPos,L"EEEE",8);
      local_88.CurPos = (wchar_t *)((longlong)pvVar1 + 8);
      break;
    case L'B':
      if (local_88.End < local_88.CurPos + 4) {
        TStringBuilderBase<wchar_t>::Extend(&local_88,4);
      }
      pvVar1 = FGenericPlatformString::Memcpy(local_88.CurPos,L"MMMM",8);
      local_88.CurPos = (wchar_t *)((longlong)pvVar1 + 8);
      break;
    default:
      goto switchD_1416dbee1_caseD_43;
    case L'H':
      if (local_88.End < local_88.CurPos + 2) {
        TStringBuilderBase<wchar_t>::Extend(&local_88,2);
      }
      pvVar1 = FGenericPlatformString::Memcpy(local_88.CurPos,L"HH",4);
      local_88.CurPos = (wchar_t *)((longlong)pvVar1 + 4);
      break;
    case L'I':
      if (local_88.End < local_88.CurPos + 2) {
        TStringBuilderBase<wchar_t>::Extend(&local_88,2);
      }
      pvVar1 = FGenericPlatformString::Memcpy(local_88.CurPos,L"hh",4);
      local_88.CurPos = (wchar_t *)((longlong)pvVar1 + 4);
      break;
    case L'M':
      if (local_88.End < local_88.CurPos + 2) {
        TStringBuilderBase<wchar_t>::Extend(&local_88,2);
      }
      pvVar1 = FGenericPlatformString::Memcpy(local_88.CurPos,L"mm",4);
      local_88.CurPos = (wchar_t *)((longlong)pvVar1 + 4);
      break;
    case L'P':
    case L'p':
      if (local_88.End < local_88.CurPos + 1) {
        TStringBuilderBase<wchar_t>::Extend(&local_88,1);
      }
      pwVar2 = L"a";
      goto LAB_1416dc25c;
    case L'S':
      if (local_88.End < local_88.CurPos + 2) {
        TStringBuilderBase<wchar_t>::Extend(&local_88,2);
      }
      pvVar1 = FGenericPlatformString::Memcpy(local_88.CurPos,L"ss",4);
      local_88.CurPos = (wchar_t *)((longlong)pvVar1 + 4);
      break;
    case L'Y':
      if (local_88.End < local_88.CurPos + 4) {
        TStringBuilderBase<wchar_t>::Extend(&local_88,4);
      }
      pvVar1 = FGenericPlatformString::Memcpy(local_88.CurPos,L"yyyy",8);
      local_88.CurPos = (wchar_t *)((longlong)pvVar1 + 8);
      break;
    case L'a':
      if (local_88.End < local_88.CurPos + 3) {
        TStringBuilderBase<wchar_t>::Extend(&local_88,3);
      }
      pvVar1 = FGenericPlatformString::Memcpy(local_88.CurPos,L"EEE",6);
      local_88.CurPos = (wchar_t *)((longlong)pvVar1 + 6);
      break;
    case L'b':
      if (local_88.End < local_88.CurPos + 3) {
        TStringBuilderBase<wchar_t>::Extend(&local_88,3);
      }
      pvVar1 = FGenericPlatformString::Memcpy(local_88.CurPos,L"MMM",6);
      local_88.CurPos = (wchar_t *)((longlong)pvVar1 + 6);
      break;
    case L'd':
      if (local_88.End < local_88.CurPos + 2) {
        TStringBuilderBase<wchar_t>::Extend(&local_88,2);
      }
      pvVar1 = FGenericPlatformString::Memcpy(local_88.CurPos,L"dd",4);
      local_88.CurPos = (wchar_t *)((longlong)pvVar1 + 4);
      break;
    case L'e':
      if (local_88.End < local_88.CurPos + 1) {
        TStringBuilderBase<wchar_t>::Extend(&local_88,1);
      }
      pvVar1 = FGenericPlatformString::Memcpy(local_88.CurPos,L"d",2);
      local_88.CurPos = (wchar_t *)((longlong)pvVar1 + 2);
      break;
    case L'j':
      if (local_88.End < local_88.CurPos + 1) {
        TStringBuilderBase<wchar_t>::Extend(&local_88,1);
      }
      pwVar2 = L"D";
LAB_1416dc25c:
      pvVar1 = FGenericPlatformString::Memcpy(local_88.CurPos,pwVar2,2);
      local_88.CurPos = (wchar_t *)((longlong)pvVar1 + 2);
      break;
    case L'l':
      if (local_88.End < local_88.CurPos + 1) {
        TStringBuilderBase<wchar_t>::Extend(&local_88,1);
      }
      pvVar1 = FGenericPlatformString::Memcpy(local_88.CurPos,L"h",2);
      local_88.CurPos = (wchar_t *)((longlong)pvVar1 + 2);
      break;
    case L'm':
      if (local_88.End < local_88.CurPos + 2) {
        TStringBuilderBase<wchar_t>::Extend(&local_88,2);
      }
      pvVar1 = FGenericPlatformString::Memcpy(local_88.CurPos,L"MM",4);
      local_88.CurPos = (wchar_t *)((longlong)pvVar1 + 4);
      break;
    case L'w':
      if (local_88.End < local_88.CurPos + 1) {
        TStringBuilderBase<wchar_t>::Extend(&local_88,1);
      }
      pvVar1 = FGenericPlatformString::Memcpy(local_88.CurPos,L"e",2);
      local_88.CurPos = (wchar_t *)((longlong)pvVar1 + 2);
      break;
    case L'y':
      if (local_88.End < local_88.CurPos + 2) {
        TStringBuilderBase<wchar_t>::Extend(&local_88,2);
      }
      pvVar1 = FGenericPlatformString::Memcpy(local_88.CurPos,L"yy",4);
      local_88.CurPos = (wchar_t *)((longlong)pvVar1 + 4);
    }
LAB_1416dc2bb:
    wVar3 = param_1[1];
    param_1 = param_1 + 1;
  } while( true );
}

// GetBreakIterator @ 1416f28a0

/* WARNING: Enum "UErrorCode": Some values do not have unique names */

TSharedRef<icu_64::BreakIterator_const_,1> * __thiscall
FICUCultureImplementation::GetBreakIterator
          (FICUCultureImplementation *this,
          TSharedRef<icu_64::BreakIterator_const_,1> *__return_storage_ptr__,
          EBreakIteratorType param_1)

{
  TSharedPtr<icu_64::BreakIterator_const_,1> *pTVar1;
  BreakIterator *pBVar2;
  code *pcVar3;
  ulonglong uVar4;
  bool bVar5;
  bool bVar6;
  TSharedRef<icu_64::BreakIterator_const_,1> *pTVar7;
  BreakIterator *pBVar8;
  BreakIterator *pBVar9;
  BreakIterator *local_b8;
  FSharedReferencer<1> local_b0;
  BreakIterator *local_a8;
  FSharedReferencer<1> local_a0;
  BreakIterator *local_98;
  FSharedReferencer<1> local_90;
  BreakIterator *local_88;
  FSharedReferencer<1> local_80;
  BreakIterator *local_78;
  FSharedReferencer<1> local_70;
  TSharedRef<icu_64::BreakIterator_const_,1> local_68;
  TSharedRef<icu_64::BreakIterator_const_,1> local_58;
  TSharedRef<icu_64::BreakIterator_const_,1> local_48;
  TSharedRef<icu_64::BreakIterator_const_,1> local_38;
  TSharedRef<icu_64::BreakIterator_const_,1> local_28;
  
  pBVar8 = (BreakIterator *)0x0;
  bVar5 = false;
  bVar6 = false;
  if (param_1 == Grapheme) {
    pTVar1 = &this->ICUGraphemeBreakIterator;
    if (pTVar1->Object == (BreakIterator *)0x0) {
      pTVar7 = ::`anonymous_namespace'::CreateBreakIterator(&local_28,&this->ICULocale,Grapheme);
      local_70.ReferenceController = (pTVar7->SharedReferenceCount).ReferenceController;
      local_78 = pTVar7->Object;
      if (local_70.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (local_70.ReferenceController)->SharedReferenceCount =
             (atomic<int>)((int)(local_70.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      if (pTVar1 != (TSharedPtr<icu_64::BreakIterator_const_,1> *)&local_78) {
        pTVar1->Object = local_78;
        local_78 = (BreakIterator *)0x0;
        SharedPointerInternals::FSharedReferencer<1>::operator=
                  (&(this->ICUGraphemeBreakIterator).SharedReferenceCount,&local_70);
      }
      pBVar8 = (BreakIterator *)&DAT_00000003;
    }
    pBVar2 = (BreakIterator *)
             (this->ICUGraphemeBreakIterator).SharedReferenceCount.ReferenceController;
    pBVar9 = pTVar1->Object;
    if (pBVar2 != (BreakIterator *)0x0) {
      LOCK();
      *(int *)pBVar2->actualLocale = *(int *)pBVar2->actualLocale + 1;
      UNLOCK();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
    if (((ulonglong)pBVar8 & 2) != 0) {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_70.ReferenceController);
    }
    uVar4 = (ulonglong)pBVar8 & 1;
    pBVar8 = pBVar2;
    local_68.SharedReferenceCount.ReferenceController =
         local_28.SharedReferenceCount.ReferenceController;
joined_r0x0001416f2bd7:
    if (uVar4 != 0) {
LAB_1416f2bdd:
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_68.SharedReferenceCount.ReferenceController);
    }
LAB_1416f2be2:
    if (pBVar9 != (BreakIterator *)0x0) goto LAB_1416f2c0d;
  }
  else {
    if (param_1 == Word) {
      pTVar1 = &this->ICUWordBreakIterator;
      if (pTVar1->Object == (BreakIterator *)0x0) {
        pTVar7 = ::`anonymous_namespace'::CreateBreakIterator(&local_38,&this->ICULocale,Word);
        local_80.ReferenceController = (pTVar7->SharedReferenceCount).ReferenceController;
        local_88 = pTVar7->Object;
        if (local_80.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          (local_80.ReferenceController)->SharedReferenceCount =
               (atomic<int>)((int)(local_80.ReferenceController)->SharedReferenceCount + 1);
          UNLOCK();
        }
        if (pTVar1 != (TSharedPtr<icu_64::BreakIterator_const_,1> *)&local_88) {
          pTVar1->Object = local_88;
          local_88 = (BreakIterator *)0x0;
          SharedPointerInternals::FSharedReferencer<1>::operator=
                    (&(this->ICUWordBreakIterator).SharedReferenceCount,&local_80);
        }
        pBVar8 = (BreakIterator *)&DAT_0000000c;
      }
      pBVar2 = (BreakIterator *)
               (this->ICUWordBreakIterator).SharedReferenceCount.ReferenceController;
      pBVar9 = pTVar1->Object;
      if (pBVar2 != (BreakIterator *)0x0) {
        LOCK();
        *(int *)pBVar2->actualLocale = *(int *)pBVar2->actualLocale + 1;
        UNLOCK();
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)0x0);
      if (((ulonglong)pBVar8 & 8) != 0) {
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_80.ReferenceController);
      }
      uVar4 = (ulonglong)pBVar8 & 4;
      pBVar8 = pBVar2;
      local_68.SharedReferenceCount.ReferenceController =
           local_38.SharedReferenceCount.ReferenceController;
      goto joined_r0x0001416f2bd7;
    }
    if (param_1 == Line) {
      pTVar1 = &this->ICULineBreakIterator;
      if (pTVar1->Object == (BreakIterator *)0x0) {
        pTVar7 = ::`anonymous_namespace'::CreateBreakIterator(&local_48,&this->ICULocale,Line);
        local_90.ReferenceController = (pTVar7->SharedReferenceCount).ReferenceController;
        local_98 = pTVar7->Object;
        if (local_90.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          (local_90.ReferenceController)->SharedReferenceCount =
               (atomic<int>)((int)(local_90.ReferenceController)->SharedReferenceCount + 1);
          UNLOCK();
        }
        if (pTVar1 != (TSharedPtr<icu_64::BreakIterator_const_,1> *)&local_98) {
          pTVar1->Object = local_98;
          local_98 = (BreakIterator *)0x0;
          SharedPointerInternals::FSharedReferencer<1>::operator=
                    (&(this->ICULineBreakIterator).SharedReferenceCount,&local_90);
        }
        pBVar8 = (BreakIterator *)&DAT_00000030;
      }
      pBVar2 = (BreakIterator *)
               (this->ICULineBreakIterator).SharedReferenceCount.ReferenceController;
      pBVar9 = pTVar1->Object;
      if (pBVar2 != (BreakIterator *)0x0) {
        LOCK();
        *(int *)pBVar2->actualLocale = *(int *)pBVar2->actualLocale + 1;
        UNLOCK();
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)0x0);
      if (((ulonglong)pBVar8 & 0x20) != 0) {
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_90.ReferenceController);
      }
      uVar4 = (ulonglong)pBVar8 & 0x10;
      pBVar8 = pBVar2;
      local_68.SharedReferenceCount.ReferenceController =
           local_48.SharedReferenceCount.ReferenceController;
      goto joined_r0x0001416f2bd7;
    }
    if (param_1 == Sentence) {
      pTVar1 = &this->ICUSentenceBreakIterator;
      if (pTVar1->Object == (BreakIterator *)0x0) {
        pTVar7 = ::`anonymous_namespace'::CreateBreakIterator(&local_58,&this->ICULocale,Sentence);
        local_a0.ReferenceController = (pTVar7->SharedReferenceCount).ReferenceController;
        local_a8 = pTVar7->Object;
        if (local_a0.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          (local_a0.ReferenceController)->SharedReferenceCount =
               (atomic<int>)((int)(local_a0.ReferenceController)->SharedReferenceCount + 1);
          UNLOCK();
        }
        if (pTVar1 != (TSharedPtr<icu_64::BreakIterator_const_,1> *)&local_a8) {
          pTVar1->Object = local_a8;
          local_a8 = (BreakIterator *)0x0;
          SharedPointerInternals::FSharedReferencer<1>::operator=
                    (&(this->ICUSentenceBreakIterator).SharedReferenceCount,&local_a0);
        }
        pBVar8 = (BreakIterator *)&DAT_000000c0;
      }
      pBVar2 = (BreakIterator *)
               (this->ICUSentenceBreakIterator).SharedReferenceCount.ReferenceController;
      pBVar9 = pTVar1->Object;
      if (pBVar2 != (BreakIterator *)0x0) {
        LOCK();
        *(int *)pBVar2->actualLocale = *(int *)pBVar2->actualLocale + 1;
        UNLOCK();
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)0x0);
      if ((char)pBVar8 < '\0') {
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_a0.ReferenceController);
      }
      uVar4 = (ulonglong)pBVar8 & 0x40;
      pBVar8 = pBVar2;
      local_68.SharedReferenceCount.ReferenceController =
           local_58.SharedReferenceCount.ReferenceController;
      goto joined_r0x0001416f2bd7;
    }
    pBVar9 = pBVar8;
    if (param_1 == Title) {
      pTVar1 = &this->ICUTitleBreakIterator;
      if (pTVar1->Object == (BreakIterator *)0x0) {
        pTVar7 = ::`anonymous_namespace'::CreateBreakIterator(&local_68,&this->ICULocale,Title);
        local_b0.ReferenceController = (pTVar7->SharedReferenceCount).ReferenceController;
        local_b8 = pTVar7->Object;
        if (local_b0.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          (local_b0.ReferenceController)->SharedReferenceCount =
               (atomic<int>)((int)(local_b0.ReferenceController)->SharedReferenceCount + 1);
          UNLOCK();
        }
        if (pTVar1 != (TSharedPtr<icu_64::BreakIterator_const_,1> *)&local_b8) {
          pTVar1->Object = local_b8;
          local_b8 = (BreakIterator *)0x0;
          SharedPointerInternals::FSharedReferencer<1>::operator=
                    (&(this->ICUTitleBreakIterator).SharedReferenceCount,&local_b0);
        }
        bVar5 = true;
        bVar6 = true;
      }
      pBVar8 = (BreakIterator *)
               (this->ICUTitleBreakIterator).SharedReferenceCount.ReferenceController;
      pBVar9 = pTVar1->Object;
      if (pBVar8 != (BreakIterator *)0x0) {
        LOCK();
        *(int *)pBVar8->actualLocale = *(int *)pBVar8->actualLocale + 1;
        UNLOCK();
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)0x0);
      if (bVar6) {
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_b0.ReferenceController);
      }
      if (bVar5) goto LAB_1416f2bdd;
      goto LAB_1416f2be2;
    }
  }
  bVar6 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                     ,0x408,L"");
  if (bVar6) {
    pcVar3 = (code *)swi(3);
    pTVar7 = (TSharedRef<icu_64::BreakIterator_const_,1> *)(*pcVar3)();
    return pTVar7;
  }
LAB_1416f2c0d:
  __return_storage_ptr__->Object = pBVar9;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (TReferenceControllerBase<1> *)pBVar8;
  if (pBVar8 != (BreakIterator *)0x0) {
    LOCK();
    *(int *)pBVar8->actualLocale = *(int *)pBVar8->actualLocale + 1;
    UNLOCK();
  }
  if ((__return_storage_ptr__->Object == (BreakIterator *)0x0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x25d,L""), bVar6)) {
    pcVar3 = (code *)swi(3);
    pTVar7 = (TSharedRef<icu_64::BreakIterator_const_,1> *)(*pcVar3)();
    return pTVar7;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pBVar8);
  return __return_storage_ptr__;
}

// GetCanonicalName @ 1416f4620

/* WARNING: Enum "UErrorCode": Some values do not have unique names */

FString * __cdecl
FICUCultureImplementation::GetCanonicalName
          (FString *__return_storage_ptr__,FString *param_1,FInternationalization *param_2)

{
  FString local_18;
  
  ::FString::FString(&local_18,L"en-US-POSIX");
  InternationalizationUtilities::GetCanonicalCultureName
            (__return_storage_ptr__,param_1,&local_18,param_2);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// GetCollator @ 1416f4a60

/* WARNING: Enum "UErrorCode": Some values do not have unique names */

TSharedRef<icu_64::Collator_const_,1> * __thiscall
FICUCultureImplementation::GetCollator
          (FICUCultureImplementation *this,
          TSharedRef<icu_64::Collator_const_,1> *__return_storage_ptr__,Type param_1)

{
  TSharedPtr<icu_64::Collator_const_,1> *pTVar1;
  code *pcVar2;
  FSharedReferencer<1> FVar3;
  bool bVar4;
  Collator *pCVar5;
  TReferenceControllerBase<1> *pTVar6;
  Locale *pLVar7;
  TSharedRef<icu_64::Collator_const_,1> *pTVar8;
  TReferenceControllerBase<1> *pTVar9;
  TReferenceControllerBase<1> *pTVar10;
  undefined4 uVar11;
  undefined4 local_res8 [2];
  UErrorCode local_res18 [2];
  Locale *local_res20;
  FSharedReferencer<1> local_60;
  Collator *local_58;
  FSharedReferencer<1> local_50;
  undefined8 local_48;
  FSharedReferencer<1> local_40;
  
  pTVar1 = &this->ICUCollator;
  pTVar10 = (TReferenceControllerBase<1> *)0x0;
  uVar11 = 0;
  if (pTVar1->Object != (Collator *)0x0) goto LAB_1416f4c3f;
  local_res18[0] = U_ZERO_ERROR;
  pCVar5 = icu_64::Collator::createInstance(&this->ICULocale,local_res18);
  pTVar6 = ::operator_new(0x18);
  local_60.ReferenceController = pTVar10;
  if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
    pTVar6->SharedReferenceCount = (atomic<int>)0x1;
    pTVar6->WeakReferenceCount = (atomic<int>)0x1;
    pTVar6->_padding_ =
         (longlong)
         &
         ___7__TReferenceControllerWithDeleter_VCollator_icu_64__U__DefaultDeleter_VCollator_icu_64___SharedPointerInternals___00_SharedPointerInternals__6B_
    ;
    pTVar6[1]._padding_ = (longlong)pCVar5;
    local_60.ReferenceController = pTVar6;
  }
  if (pCVar5 == (Collator *)0x0) {
    local_res20 = &this->ICULocale;
    bVar4 = ``anonymous_namespace'::CreateCollator'::__l3::<lambda_1>::operator()(&local_res20);
    if (!bVar4) {
      pLVar7 = ::`anonymous_namespace'::GetInvariantLocale();
      pCVar5 = icu_64::Collator::createInstance(pLVar7,local_res18);
      pTVar6 = ::operator_new(0x18);
      local_40.ReferenceController = pTVar10;
      if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
        pTVar6->SharedReferenceCount = (atomic<int>)0x1;
        pTVar6->WeakReferenceCount = (atomic<int>)0x1;
        pTVar6->_padding_ =
             (longlong)
             &
             ___7__TReferenceControllerWithDeleter_VCollator_icu_64__U__DefaultDeleter_VCollator_icu_64___SharedPointerInternals___00_SharedPointerInternals__6B_
        ;
        pTVar6[1]._padding_ = (longlong)pCVar5;
        local_40.ReferenceController = pTVar6;
      }
      local_48 = 0;
      SharedPointerInternals::FSharedReferencer<1>::operator=(&local_60,&local_40);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_40.ReferenceController);
      if (pCVar5 != (Collator *)0x0) goto LAB_1416f4bbc;
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Ptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Internationalization\\ICUCulture.cpp"
                         ,0x5d,L"");
      if (bVar4) {
        pcVar2 = (code *)swi(3);
        pTVar8 = (TSharedRef<icu_64::Collator_const_,1> *)(*pcVar2)();
        return pTVar8;
      }
    }
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x408,L"");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      pTVar8 = (TSharedRef<icu_64::Collator_const_,1> *)(*pcVar2)();
      return pTVar8;
    }
  }
LAB_1416f4bbc:
  FVar3.ReferenceController = local_60.ReferenceController;
  if (local_60.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_60.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(local_60.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  if ((pCVar5 == (Collator *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x25d,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    pTVar8 = (TSharedRef<icu_64::Collator_const_,1> *)(*pcVar2)();
    return pTVar8;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_60.ReferenceController);
  local_50.ReferenceController = FVar3.ReferenceController;
  if (FVar3.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (FVar3.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(FVar3.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_58 = pCVar5;
  if (pTVar1 != (TSharedPtr<icu_64::Collator_const_,1> *)&local_58) {
    pTVar1->Object = pCVar5;
    local_58 = (Collator *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->ICUCollator).SharedReferenceCount,&local_50);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_50.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar3.ReferenceController);
LAB_1416f4c3f:
  local_res8[0] = 0;
  if ((pTVar1->Object == (Collator *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x408,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    pTVar8 = (TSharedRef<icu_64::Collator_const_,1> *)(*pcVar2)();
    return pTVar8;
  }
  pTVar6 = (this->ICUCollator).SharedReferenceCount.ReferenceController;
  pCVar5 = pTVar1->Object;
  if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
    UNLOCK();
  }
  if ((pCVar5 == (Collator *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x25d,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    pTVar8 = (TSharedRef<icu_64::Collator_const_,1> *)(*pcVar2)();
    return pTVar8;
  }
  if (param_1 == Default) {
    __return_storage_ptr__->Object = pCVar5;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar6;
    if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
      UNLOCK();
    }
  }
  else {
    pCVar5 = (Collator *)(**(code **)((longlong)*pCVar5 + 0x20))(pCVar5);
    pTVar9 = ::operator_new(0x18);
    if (pTVar9 != (TReferenceControllerBase<1> *)0x0) {
      pTVar9->SharedReferenceCount = (atomic<int>)0x1;
      pTVar9->WeakReferenceCount = (atomic<int>)0x1;
      pTVar9->_padding_ =
           (longlong)
           &
           ___7__TReferenceControllerWithDeleter_VCollator_icu_64__U__DefaultDeleter_VCollator_icu_64___SharedPointerInternals___00_SharedPointerInternals__6B_
      ;
      pTVar9[1]._padding_ = (longlong)pCVar5;
      pTVar10 = pTVar9;
    }
    if ((pCVar5 == (Collator *)0x0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("InObject != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x246,L""), bVar4)) {
      pcVar2 = (code *)swi(3);
      pTVar8 = (TSharedRef<icu_64::Collator_const_,1> *)(*pcVar2)();
      return pTVar8;
    }
    switch(param_1) {
    default:
      uVar11 = 0xffffffff;
      break;
    case Primary:
      break;
    case Secondary:
      uVar11 = 1;
      break;
    case Tertiary:
      uVar11 = 2;
      break;
    case Quaternary:
      uVar11 = 3;
      break;
    case Quinary:
      uVar11 = 0xf;
    }
    (**(code **)((longlong)*pCVar5 + 0xb0))(pCVar5,5,uVar11,local_res8);
    __return_storage_ptr__->Object = pCVar5;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar10;
    if (pTVar10 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar10->SharedReferenceCount = (atomic<int>)((int)pTVar10->SharedReferenceCount + 1);
      UNLOCK();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar10);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  return __return_storage_ptr__;
}

// GetCurrencyFormattingRules @ 1416f52d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "UErrorCode": Some values do not have unique names */

FDecimalNumberFormattingRules * __thiscall
FICUCultureImplementation::GetCurrencyFormattingRules
          (FICUCultureImplementation *this,FString *param_1)

{
  FWindowsRecursiveMutex *pFVar1;
  TSharedPtr<FDecimalNumberFormattingRules_const_,1> *pTVar2;
  ushort uVar3;
  code *pcVar4;
  ForAnyElementType _Src;
  FSharedReferencer<1> FVar5;
  bool bVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  DecimalFormat *pDVar12;
  TReferenceControllerBase<1> *pTVar13;
  Locale *pLVar14;
  FDecimalNumberFormattingRules *pFVar15;
  wchar16 *_Dst;
  TReferenceControllerBase<1> *pTVar16;
  int iVar17;
  undefined8 uVar18;
  wchar_t *pwVar19;
  longlong lVar20;
  undefined1 auStack_208 [32];
  int local_1e8;
  int local_1e0;
  FDecimalNumberFormattingRules *local_1d8;
  FSharedReferencer<1> FStack_1d0;
  UErrorCode local_1c8 [2];
  FString local_1c0;
  TSharedPtr<icu_64::DecimalFormat,1> local_1b0;
  int local_1a0;
  FDecimalNumberFormattingRules *local_198;
  FSharedReferencer<1> FStack_190;
  undefined8 local_188;
  FSharedReferencer<1> local_180;
  TPairInitializer<FString_const_&,TSharedPtr<FDecimalNumberFormattingRules_const_,1>_const_&>
  local_178;
  TRawPtrProxy<icu_64::DecimalFormat> local_168;
  undefined8 local_160;
  FSharedReferencer<1> local_158;
  FString *local_150;
  FDecimalNumberFormattingRules **local_148;
  FDecimalNumberFormattingRules local_138;
  UnicodeString local_88;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_208;
  InternationalizationUtilities::SanitizeCurrencyCode(&local_1c0,param_1);
  iVar11 = local_1c0.Data.ArrayNum;
  pTVar16 = (TReferenceControllerBase<1> *)0x0;
  local_1a0 = local_1c0.Data.ArrayNum;
  iVar9 = 0;
  if (local_1c0.Data.ArrayNum < 2) {
    pFVar15 = (this->UECurrencyFormattingRules).Object;
    if (pFVar15 != (FDecimalNumberFormattingRules *)0x0) goto LAB_1416f5df1;
  }
  else {
    pFVar1 = &this->UEAlternateCurrencyFormattingRulesCS;
    if (pFVar1 == (FWindowsRecursiveMutex *)0x0) goto LAB_1416f5e33;
    EnterCriticalSection((LPCRITICAL_SECTION)pFVar1);
    if (local_1c0.Data.ArrayNum == 0) {
      pwVar19 = L"";
    }
    else {
      iVar9 = local_1c0.Data.ArrayNum + -1;
      pwVar19 = (wchar_t *)local_1c0.Data.AllocatorInstance.Data;
    }
    uVar10 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar9,pwVar19);
    iVar9 = TSet<TTuple<FString,TSharedPtr<FDecimalNumberFormattingRules_const_,1>_>,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FDecimalNumberFormattingRules_const_,1>,0>,FDefaultSetAllocator>
            ::FindIndexByHash<FString>
                      ((TSet<TTuple<FString,TSharedPtr<FDecimalNumberFormattingRules_const_,1>_>,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FDecimalNumberFormattingRules_const_,1>,0>,FDefaultSetAllocator>
                        *)&this->UEAlternateCurrencyFormattingRules,uVar10,&local_1c0);
    pTVar13 = pTVar16;
    if ((iVar9 != -1) &&
       (lVar20 = *(longlong *)&this->UEAlternateCurrencyFormattingRules + (longlong)iVar9 * 0x28,
       lVar20 != 0)) {
      pFVar15 = *(FDecimalNumberFormattingRules **)(lVar20 + 0x10);
      pTVar13 = *(TReferenceControllerBase<1> **)(lVar20 + 0x18);
      if (pTVar13 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar13->SharedReferenceCount = (atomic<int>)((int)pTVar13->SharedReferenceCount + 1);
        UNLOCK();
      }
      if (pFVar15 != (FDecimalNumberFormattingRules *)0x0) {
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar13)
        ;
        LeaveCriticalSection((LPCRITICAL_SECTION)pFVar1);
        goto LAB_1416f5df1;
      }
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar13);
    LeaveCriticalSection((LPCRITICAL_SECTION)pFVar1);
  }
  local_1b0.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  local_1c8[0] = U_ZERO_ERROR;
  pDVar12 = (DecimalFormat *)
            icu_64::NumberFormat::createCurrencyInstance(&this->ICULocale,local_1c8);
  pTVar13 = ::operator_new(0x18);
  if (pTVar13 != (TReferenceControllerBase<1> *)0x0) {
    pTVar13->SharedReferenceCount = (atomic<int>)0x1;
    pTVar13->_padding_ =
         (longlong)
         &
         ___7__TReferenceControllerWithDeleter_VDecimalFormat_icu_64__U__DefaultDeleter_VDecimalFormat_icu_64___SharedPointerInternals___00_SharedPointerInternals__6B_
    ;
    pTVar13->WeakReferenceCount = (atomic<int>)0x1;
    pTVar13[1]._padding_ = (longlong)pDVar12;
    pTVar16 = pTVar13;
  }
  local_160 = 0;
  local_1b0.Object = pDVar12;
  local_158.ReferenceController = pTVar16;
  SharedPointerInternals::FSharedReferencer<1>::operator=
            (&local_1b0.SharedReferenceCount,&local_158);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_158.ReferenceController);
  pDVar12 = local_1b0.Object;
  if ((local_1b0.Object == (DecimalFormat *)0x0) &&
     (local_178.Value = (TSharedPtr<FDecimalNumberFormattingRules_const_,1> *)this,
     bVar6 = `FICUCultureImplementation::GetCurrencyFormattingRules'::__l15::<lambda_1>::operator()
                       (&local_178.Value), !bVar6)) {
    pLVar14 = ::`anonymous_namespace'::GetInvariantLocale();
    local_168.Object =
         (DecimalFormat *)icu_64::NumberFormat::createCurrencyInstance(pLVar14,local_1c8);
    TSharedPtr<icu_64::DecimalFormat,1>::operator=<icu_64::DecimalFormat>(&local_1b0,&local_168);
    pDVar12 = local_1b0.Object;
    if ((local_1b0.Object == (DecimalFormat *)0x0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("CurrencyFormatterForCulture",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Internationalization\\ICUCulture.cpp"
                           ,0x389,L""), bVar6)) {
      pcVar4 = (code *)swi(3);
      pFVar15 = (FDecimalNumberFormattingRules *)(*pcVar4)();
      return pFVar15;
    }
  }
  _Src.Data = local_1c0.Data.AllocatorInstance.Data;
  if (1 < iVar11) {
    local_88.fUnion.fStackFields.fLengthAndFlags = 2;
    iVar11 = local_1c0.Data.ArrayNum + -1;
    if (local_1c0.Data.ArrayNum == 0) {
      iVar11 = 0;
    }
    local_88._padding_ = (longlong)icu_64::UnicodeString::vftable;
    if (0 < iVar11) {
      _Dst = icu_64::UnicodeString::getBuffer(&local_88,iVar11 + 1);
      memcpy(_Dst,_Src.Data,(longlong)iVar11 * 2);
      _Dst[iVar11] = L'\0';
      icu_64::UnicodeString::releaseBuffer(&local_88,iVar11);
    }
    uVar18 = (wchar16 *)0x0;
    if ((pDVar12 == (DecimalFormat *)0x0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar6)) {
      pcVar4 = (code *)swi(3);
      pFVar15 = (FDecimalNumberFormattingRules *)(*pcVar4)();
      return pFVar15;
    }
    if (((local_88.fUnion.fStackFields.fLengthAndFlags & 0x11U) == 0) &&
       (uVar18 = (wchar16 *)((longlong)&local_88.fUnion + 2),
       (local_88.fUnion.fStackFields.fLengthAndFlags & 2U) == 0)) {
      uVar18 = local_88.fUnion.fFields.fArray;
    }
    (**(code **)(pDVar12->_padding_ + 0x248))(pDVar12,uVar18);
    icu_64::UnicodeString::~UnicodeString(&local_88);
    iVar11 = local_1a0;
  }
  iVar9 = 0;
  if ((pDVar12 == (DecimalFormat *)0x0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x44d,L""), bVar6)) {
    pcVar4 = (code *)swi(3);
    pFVar15 = (FDecimalNumberFormattingRules *)(*pcVar4)();
    return pFVar15;
  }
  ::`anonymous_namespace'::ExtractNumberFormattingRulesFromICUDecimalFormatter
            (&local_138,&this->ICULocale,pDVar12);
  iVar17 = local_138.PositivePrefixString.Data.ArrayNum + -1;
  if (local_138.PositivePrefixString.Data.ArrayNum == 0) {
    iVar17 = iVar9;
  }
  if (2 < iVar17) {
    iVar7 = iVar17 + -1;
    if ((((iVar7 < 0) || (local_138.PositivePrefixString.Data.ArrayNum == 0)) ||
        (local_138.PositivePrefixString.Data.ArrayNum + -1 <= iVar7)) &&
       (local_1e8 = iVar7, local_1e0 = iVar17,
       bVar6 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValidIndex(Index)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\UnrealString.h.inl"
                          ,0x107,
                          L"String index out of bounds: Index %i from a string with a length of %i")
       , bVar6)) {
      pcVar4 = (code *)swi(3);
      pFVar15 = (FDecimalNumberFormattingRules *)(*pcVar4)();
      return pFVar15;
    }
    lVar20 = (longlong)iVar17;
    uVar3 = *(ushort *)
             (local_138.PositivePrefixString.Data.AllocatorInstance.Data + lVar20 * 2 + -2);
    if (((0x40 < uVar3) && (uVar3 < 0x5b)) || ((ushort)(uVar3 - 0x61) < 0x1a)) {
      iVar7 = iVar17 + -2;
      if (iVar7 < 0) {
LAB_1416f5686:
        local_1e0 = local_138.PositivePrefixString.Data.ArrayNum + -1;
        if (local_138.PositivePrefixString.Data.ArrayNum == 0) {
          local_1e0 = iVar9;
        }
        local_1e8 = iVar7;
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValidIndex(Index)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\UnrealString.h.inl"
                           ,0x107,
                           L"String index out of bounds: Index %i from a string with a length of %i"
                          );
        if (bVar6) {
          pcVar4 = (code *)swi(3);
          pFVar15 = (FDecimalNumberFormattingRules *)(*pcVar4)();
          return pFVar15;
        }
      }
      else {
        iVar8 = local_138.PositivePrefixString.Data.ArrayNum + -1;
        if (local_138.PositivePrefixString.Data.ArrayNum == 0) {
          iVar8 = 0;
        }
        if (iVar8 <= iVar7) goto LAB_1416f5686;
      }
      uVar3 = *(ushort *)
               (local_138.PositivePrefixString.Data.AllocatorInstance.Data + lVar20 * 2 + -4);
      if (((0x40 < uVar3) && (uVar3 < 0x5b)) || ((ushort)(uVar3 - 0x61) < 0x1a)) {
        iVar17 = iVar17 + -3;
        if (iVar17 < 0) {
LAB_1416f56f4:
          local_1e0 = local_138.PositivePrefixString.Data.ArrayNum + -1;
          if (local_138.PositivePrefixString.Data.ArrayNum == 0) {
            local_1e0 = iVar9;
          }
          local_1e8 = iVar17;
          bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValidIndex(Index)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\UnrealString.h.inl"
                             ,0x107,
                             L"String index out of bounds: Index %i from a string with a length of %i"
                            );
          if (bVar6) {
            pcVar4 = (code *)swi(3);
            pFVar15 = (FDecimalNumberFormattingRules *)(*pcVar4)();
            return pFVar15;
          }
        }
        else {
          iVar7 = local_138.PositivePrefixString.Data.ArrayNum + -1;
          if (local_138.PositivePrefixString.Data.ArrayNum == 0) {
            iVar7 = 0;
          }
          if (iVar7 <= iVar17) goto LAB_1416f56f4;
        }
        uVar3 = *(ushort *)
                 (local_138.PositivePrefixString.Data.AllocatorInstance.Data + lVar20 * 2 + -6);
        if (((0x40 < uVar3) && (uVar3 < 0x5b)) || ((ushort)(uVar3 - 0x61) < 0x1a)) {
          ::FString::AppendChar(&local_138.PositivePrefixString,L'\xa0');
        }
      }
    }
  }
  iVar17 = local_138.NegativePrefixString.Data.ArrayNum + -1;
  if (local_138.NegativePrefixString.Data.ArrayNum == 0) {
    iVar17 = iVar9;
  }
  if (2 < iVar17) {
    iVar7 = iVar17 + -1;
    if ((((iVar7 < 0) || (local_138.NegativePrefixString.Data.ArrayNum == 0)) ||
        (local_138.NegativePrefixString.Data.ArrayNum + -1 <= iVar7)) &&
       (local_1e8 = iVar7, local_1e0 = iVar17,
       bVar6 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValidIndex(Index)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\UnrealString.h.inl"
                          ,0x107,
                          L"String index out of bounds: Index %i from a string with a length of %i")
       , bVar6)) {
      pcVar4 = (code *)swi(3);
      pFVar15 = (FDecimalNumberFormattingRules *)(*pcVar4)();
      return pFVar15;
    }
    lVar20 = (longlong)iVar17;
    uVar3 = *(ushort *)
             (local_138.NegativePrefixString.Data.AllocatorInstance.Data + lVar20 * 2 + -2);
    if (((0x40 < uVar3) && (uVar3 < 0x5b)) || ((ushort)(uVar3 - 0x61) < 0x1a)) {
      iVar7 = iVar17 + -2;
      if (iVar7 < 0) {
LAB_1416f57eb:
        local_1e0 = local_138.NegativePrefixString.Data.ArrayNum + -1;
        if (local_138.NegativePrefixString.Data.ArrayNum == 0) {
          local_1e0 = iVar9;
        }
        local_1e8 = iVar7;
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValidIndex(Index)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\UnrealString.h.inl"
                           ,0x107,
                           L"String index out of bounds: Index %i from a string with a length of %i"
                          );
        if (bVar6) {
          pcVar4 = (code *)swi(3);
          pFVar15 = (FDecimalNumberFormattingRules *)(*pcVar4)();
          return pFVar15;
        }
      }
      else {
        iVar8 = local_138.NegativePrefixString.Data.ArrayNum + -1;
        if (local_138.NegativePrefixString.Data.ArrayNum == 0) {
          iVar8 = 0;
        }
        if (iVar8 <= iVar7) goto LAB_1416f57eb;
      }
      uVar3 = *(ushort *)
               (local_138.NegativePrefixString.Data.AllocatorInstance.Data + lVar20 * 2 + -4);
      if (((0x40 < uVar3) && (uVar3 < 0x5b)) || ((ushort)(uVar3 - 0x61) < 0x1a)) {
        iVar17 = iVar17 + -3;
        if (iVar17 < 0) {
LAB_1416f5857:
          local_1e0 = local_138.NegativePrefixString.Data.ArrayNum + -1;
          if (local_138.NegativePrefixString.Data.ArrayNum == 0) {
            local_1e0 = iVar9;
          }
          local_1e8 = iVar17;
          bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValidIndex(Index)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\UnrealString.h.inl"
                             ,0x107,
                             L"String index out of bounds: Index %i from a string with a length of %i"
                            );
          if (bVar6) {
            pcVar4 = (code *)swi(3);
            pFVar15 = (FDecimalNumberFormattingRules *)(*pcVar4)();
            return pFVar15;
          }
        }
        else {
          iVar7 = local_138.NegativePrefixString.Data.ArrayNum + -1;
          if (local_138.NegativePrefixString.Data.ArrayNum == 0) {
            iVar7 = 0;
          }
          if (iVar7 <= iVar17) goto LAB_1416f5857;
        }
        uVar3 = *(ushort *)
                 (local_138.NegativePrefixString.Data.AllocatorInstance.Data + lVar20 * 2 + -6);
        if (((0x40 < uVar3) && (uVar3 < 0x5b)) || ((ushort)(uVar3 - 0x61) < 0x1a)) {
          ::FString::AppendChar(&local_138.NegativePrefixString,L'\xa0');
        }
      }
    }
  }
  iVar9 = local_138.PositiveSuffixString.Data.ArrayNum + -1;
  if (local_138.PositiveSuffixString.Data.ArrayNum == 0) {
    iVar9 = 0;
  }
  if ((2 < iVar9) &&
     ((((uVar3 = *(ushort *)local_138.PositiveSuffixString.Data.AllocatorInstance.Data, 0x40 < uVar3
        && (uVar3 < 0x5b)) || ((ushort)(uVar3 - 0x61) < 0x1a)) &&
      (((uVar3 = *(ushort *)(local_138.PositiveSuffixString.Data.AllocatorInstance.Data + 2),
        0x40 < uVar3 && (uVar3 < 0x5b)) || ((ushort)(uVar3 - 0x61) < 0x1a)))))) {
    iVar9 = local_138.PositiveSuffixString.Data.ArrayNum + -1;
    if (local_138.PositiveSuffixString.Data.ArrayNum == 0) {
      iVar9 = 0;
    }
    if (iVar9 < 3) {
      local_1e8 = 2;
      local_1e0 = iVar9;
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValidIndex(Index)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\UnrealString.h.inl"
                         ,0x107,
                         L"String index out of bounds: Index %i from a string with a length of %i");
      if (bVar6) {
        pcVar4 = (code *)swi(3);
        pFVar15 = (FDecimalNumberFormattingRules *)(*pcVar4)();
        return pFVar15;
      }
    }
    uVar3 = *(ushort *)(local_138.PositiveSuffixString.Data.AllocatorInstance.Data + 4);
    if (((0x40 < uVar3) && (uVar3 < 0x5b)) || ((ushort)(uVar3 - 0x61) < 0x1a)) {
      ::FString::InsertAt(&local_138.PositiveSuffixString,0,L'\xa0');
    }
  }
  iVar9 = local_138.NegativeSuffixString.Data.ArrayNum + -1;
  if (local_138.NegativeSuffixString.Data.ArrayNum == 0) {
    iVar9 = 0;
  }
  if ((2 < iVar9) &&
     ((((uVar3 = *(ushort *)local_138.NegativeSuffixString.Data.AllocatorInstance.Data, 0x40 < uVar3
        && (uVar3 < 0x5b)) || ((ushort)(uVar3 - 0x61) < 0x1a)) &&
      (((uVar3 = *(ushort *)(local_138.NegativeSuffixString.Data.AllocatorInstance.Data + 2),
        0x40 < uVar3 && (uVar3 < 0x5b)) || ((ushort)(uVar3 - 0x61) < 0x1a)))))) {
    iVar9 = local_138.NegativeSuffixString.Data.ArrayNum + -1;
    if (local_138.NegativeSuffixString.Data.ArrayNum == 0) {
      iVar9 = 0;
    }
    if (iVar9 < 3) {
      local_1e8 = 2;
      local_1e0 = iVar9;
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValidIndex(Index)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\UnrealString.h.inl"
                         ,0x107,
                         L"String index out of bounds: Index %i from a string with a length of %i");
      if (bVar6) {
        pcVar4 = (code *)swi(3);
        pFVar15 = (FDecimalNumberFormattingRules *)(*pcVar4)();
        return pFVar15;
      }
    }
    uVar3 = *(ushort *)(local_138.NegativeSuffixString.Data.AllocatorInstance.Data + 4);
    if (((0x40 < uVar3) && (uVar3 < 0x5b)) || ((ushort)(uVar3 - 0x61) < 0x1a)) {
      ::FString::InsertAt(&local_138.NegativeSuffixString,0,L'\xa0');
    }
  }
  if (iVar11 < 2) {
    pFVar1 = &this->UECurrencyFormattingRulesCS;
    if (pFVar1 == (FWindowsRecursiveMutex *)0x0) {
LAB_1416f5e33:
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::ReportNotNullPtr();
    }
    EnterCriticalSection((LPCRITICAL_SECTION)pFVar1);
    pTVar2 = &this->UECurrencyFormattingRules;
    if (pTVar2->Object == (FDecimalNumberFormattingRules *)0x0) {
      pTVar16 = ::operator_new(0xb8);
      if (pTVar16 == (TReferenceControllerBase<1> *)0x0) {
        pTVar16 = (TReferenceControllerBase<1> *)0x0;
        local_198 = ___xmm_00000000000000000000000000000010;
        pFVar15 = (FDecimalNumberFormattingRules *)&DAT_00000010;
        FStack_190.ReferenceController = _UNK_150651568;
      }
      else {
        pTVar16->SharedReferenceCount = (atomic<int>)0x1;
        pTVar16->WeakReferenceCount = (atomic<int>)0x1;
        pTVar16->_padding_ =
             (longlong)
             &
             ___7__TIntrusiveReferenceController_UFDecimalNumberFormattingRules___00_SharedPointerInternals__6B_
        ;
        FDecimalNumberFormattingRules::FDecimalNumberFormattingRules
                  ((FDecimalNumberFormattingRules *)(pTVar16 + 1),&local_138);
        pFVar15 = (FDecimalNumberFormattingRules *)(pTVar16 + 1);
        if ((pFVar15 == (FDecimalNumberFormattingRules *)0x0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("InObject != nullptr",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x246,L""), bVar6)) {
          pcVar4 = (code *)swi(3);
          pFVar15 = (FDecimalNumberFormattingRules *)(*pcVar4)();
          return pFVar15;
        }
        LOCK();
        pTVar16->SharedReferenceCount = (atomic<int>)((int)pTVar16->SharedReferenceCount + 1);
        UNLOCK();
        FStack_190.ReferenceController = pTVar16;
        local_198 = pFVar15;
      }
      if (pTVar2 != (TSharedPtr<FDecimalNumberFormattingRules_const_,1> *)&local_198) {
        local_198 = (FDecimalNumberFormattingRules *)0x0;
        pTVar2->Object = pFVar15;
        SharedPointerInternals::FSharedReferencer<1>::operator=
                  (&(this->UECurrencyFormattingRules).SharedReferenceCount,&FStack_190);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (FStack_190.ReferenceController);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar16);
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)pFVar1);
    if ((pTVar2->Object == (FDecimalNumberFormattingRules *)0x0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x44d,L""), bVar6)) {
      pcVar4 = (code *)swi(3);
      pFVar15 = (FDecimalNumberFormattingRules *)(*pcVar4)();
      return pFVar15;
    }
    pFVar15 = pTVar2->Object;
  }
  else {
    pFVar1 = &this->UEAlternateCurrencyFormattingRulesCS;
    if (pFVar1 == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::ReportNotNullPtr();
    }
    EnterCriticalSection((LPCRITICAL_SECTION)pFVar1);
    if (local_1c0.Data.ArrayNum == 0) {
      pwVar19 = L"";
      local_1c0.Data.ArrayNum = 0;
    }
    else {
      local_1c0.Data.ArrayNum = local_1c0.Data.ArrayNum + -1;
      pwVar19 = (wchar_t *)local_1c0.Data.AllocatorInstance.Data;
    }
    uVar10 = FCrc::Strihash_DEPRECATED<wchar_t>(local_1c0.Data.ArrayNum,pwVar19);
    iVar11 = TSet<TTuple<FString,TSharedPtr<FDecimalNumberFormattingRules_const_,1>_>,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FDecimalNumberFormattingRules_const_,1>,0>,FDefaultSetAllocator>
             ::FindIndexByHash<FString>
                       ((TSet<TTuple<FString,TSharedPtr<FDecimalNumberFormattingRules_const_,1>_>,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FDecimalNumberFormattingRules_const_,1>,0>,FDefaultSetAllocator>
                         *)&this->UEAlternateCurrencyFormattingRules,uVar10,&local_1c0);
    if ((iVar11 == -1) ||
       (lVar20 = *(longlong *)&this->UEAlternateCurrencyFormattingRules + (longlong)iVar11 * 0x28,
       lVar20 == 0)) {
      local_1d8 = (FDecimalNumberFormattingRules *)0x0;
      FStack_1d0.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    }
    else {
      local_1d8 = *(FDecimalNumberFormattingRules **)(lVar20 + 0x10);
      FStack_1d0.ReferenceController = *(TReferenceControllerBase<1> **)(lVar20 + 0x18);
      if (FStack_1d0.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (FStack_1d0.ReferenceController)->SharedReferenceCount =
             (atomic<int>)((int)(FStack_1d0.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
    }
    if (local_1d8 == (FDecimalNumberFormattingRules *)0x0) {
      pTVar16 = ::operator_new(0xb8);
      if (pTVar16 == (TReferenceControllerBase<1> *)0x0) {
        local_180.ReferenceController = (TReferenceControllerBase<1> *)0x0;
        pFVar15 = (FDecimalNumberFormattingRules *)&DAT_00000010;
      }
      else {
        pTVar16->SharedReferenceCount = (atomic<int>)0x1;
        pTVar16->WeakReferenceCount = (atomic<int>)0x1;
        pTVar16->_padding_ =
             (longlong)
             &
             ___7__TIntrusiveReferenceController_UFDecimalNumberFormattingRules___00_SharedPointerInternals__6B_
        ;
        FDecimalNumberFormattingRules::FDecimalNumberFormattingRules
                  ((FDecimalNumberFormattingRules *)(pTVar16 + 1),&local_138);
        pFVar15 = (FDecimalNumberFormattingRules *)(pTVar16 + 1);
        if ((pFVar15 == (FDecimalNumberFormattingRules *)0x0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("InObject != nullptr",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x246,L""), bVar6)) {
          pcVar4 = (code *)swi(3);
          pFVar15 = (FDecimalNumberFormattingRules *)(*pcVar4)();
          return pFVar15;
        }
        LOCK();
        pTVar16->SharedReferenceCount = (atomic<int>)((int)pTVar16->SharedReferenceCount + 1);
        UNLOCK();
        local_180.ReferenceController = pTVar16;
      }
      FVar5.ReferenceController = local_180.ReferenceController;
      local_188 = 0;
      local_1d8 = pFVar15;
      SharedPointerInternals::FSharedReferencer<1>::operator=(&FStack_1d0,&local_180);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_180.ReferenceController);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (FVar5.ReferenceController);
      local_150 = &local_1c0;
      local_148 = &local_1d8;
      TSet<TTuple<FString,TSharedPtr<FDecimalNumberFormattingRules_const_,1>_>,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FDecimalNumberFormattingRules_const_,1>,0>,FDefaultSetAllocator>
      ::
      Emplace<TPairInitializer<FString_const_&,TSharedPtr<FDecimalNumberFormattingRules_const_,1>_const_&>_>
                ((TSet<TTuple<FString,TSharedPtr<FDecimalNumberFormattingRules_const_,1>_>,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FDecimalNumberFormattingRules_const_,1>,0>,FDefaultSetAllocator>
                  *)&this->UEAlternateCurrencyFormattingRules,&local_178,(bool *)&local_150);
      if ((local_1d8 == (FDecimalNumberFormattingRules *)0x0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x44d,L""), bVar6)) goto code_r0x0001416f5d6c;
    }
    else if ((local_1d8 == (FDecimalNumberFormattingRules *)0x0) &&
            (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                ,0x44d,L""), bVar6)) {
code_r0x0001416f5d6c:
      pcVar4 = (code *)swi(3);
      pFVar15 = (FDecimalNumberFormattingRules *)(*pcVar4)();
      return pFVar15;
    }
    pFVar15 = local_1d8;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (FStack_1d0.ReferenceController);
    LeaveCriticalSection((LPCRITICAL_SECTION)pFVar1);
  }
  if (local_138.MinusString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_138.MinusString.Data.AllocatorInstance.Data);
  }
  if (local_138.PlusString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_138.PlusString.Data.AllocatorInstance.Data);
  }
  if (local_138.PositiveSuffixString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
  {
    FMemory::Free(local_138.PositiveSuffixString.Data.AllocatorInstance.Data);
  }
  if (local_138.PositivePrefixString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
  {
    FMemory::Free(local_138.PositivePrefixString.Data.AllocatorInstance.Data);
  }
  if (local_138.NegativeSuffixString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
  {
    FMemory::Free(local_138.NegativeSuffixString.Data.AllocatorInstance.Data);
  }
  if (local_138.NegativePrefixString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
  {
    FMemory::Free(local_138.NegativePrefixString.Data.AllocatorInstance.Data);
  }
  if (local_138.NaNString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_138.NaNString.Data.AllocatorInstance.Data);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1b0.SharedReferenceCount.ReferenceController);
LAB_1416f5df1:
  if (local_1c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1c0.Data.AllocatorInstance.Data);
  }
  return pFVar15;
}

// GetDateFormatter @ 1416f6240

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "UErrorCode": Some values do not have unique names */
/* WARNING: Enum "EStyle": Some values do not have unique names */

TSharedRef<icu_64::DateFormat_const_,1> * __thiscall
FICUCultureImplementation::GetDateFormatter
          (FICUCultureImplementation *this,
          TSharedRef<icu_64::DateFormat_const_,1> *__return_storage_ptr__,Type param_1,
          FString *param_2)

{
  TSharedPtr<icu_64::DateFormat_const_,1> *pTVar1;
  TReferenceControllerBase<1> *pTVar2;
  code *pcVar3;
  FSharedReferencer<1> FVar4;
  ForAnyElementType _Src;
  FICUCultureImplementation *pFVar5;
  bool bVar6;
  char cVar7;
  bool bVar8;
  TSharedRef<icu_64::DecimalFormat_const_,1> *pTVar9;
  TSharedRef<icu_64::DateFormat_const_,1> *pTVar10;
  wchar16 *_Dst;
  longlong lVar11;
  DateFormat *pDVar12;
  Locale *pLVar13;
  TimeZone *pTVar14;
  EStyle EVar15;
  EStyle EVar16;
  int iVar17;
  undefined1 auStack_1e8 [32];
  UErrorCode local_1c8 [2];
  DateFormat *local_1c0;
  FSharedReferencer<1> local_1b8;
  DateFormat *local_1b0;
  FSharedReferencer<1> local_1a8;
  FString local_1a0;
  FICUCultureImplementation *local_190;
  FICUCultureImplementation *local_188;
  undefined8 local_180;
  FSharedReferencer<1> local_178;
  TSharedRef<icu_64::DateFormat_const_,1> local_170;
  TSharedRef<icu_64::DecimalFormat_const_,1> local_160;
  UnicodeString local_148;
  UnicodeString local_108;
  UnicodeString local_c8;
  UnicodeString local_88;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_1e8;
  pTVar1 = &this->ICUDateFormat;
  local_190 = this;
  if (pTVar1->Object == (DateFormat *)0x0) {
    pTVar9 = GetDateTimeDecimalFormat(this,&local_160);
    pTVar10 = ::`anonymous_namespace'::CreateDateFormat(&local_170,&this->ICULocale,pTVar9->Object);
    local_1a8.ReferenceController = (pTVar10->SharedReferenceCount).ReferenceController;
    local_1b0 = pTVar10->Object;
    if (local_1a8.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_1a8.ReferenceController)->SharedReferenceCount =
           (atomic<int>)((int)(local_1a8.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    if (pTVar1 != (TSharedPtr<icu_64::DateFormat_const_,1> *)&local_1b0) {
      pTVar1->Object = local_1b0;
      local_1b0 = (DateFormat *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                (&(this->ICUDateFormat).SharedReferenceCount,&local_1a8);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_1a8.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_170.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_160.SharedReferenceCount.ReferenceController);
  }
  InternationalizationUtilities::SanitizeTimezoneCode(&local_1a0,param_2);
  _Src.Data = local_1a0.Data.AllocatorInstance.Data;
  local_c8._padding_ = (longlong)icu_64::UnicodeString::vftable;
  EVar16 = DEFAULT;
  local_c8.fUnion.fStackFields.fLengthAndFlags = 2;
  iVar17 = local_1a0.Data.ArrayNum + -1;
  if (local_1a0.Data.ArrayNum == 0) {
    iVar17 = 0;
  }
  if (0 < iVar17) {
    _Dst = icu_64::UnicodeString::getBuffer(&local_c8,iVar17 + 1);
    memcpy(_Dst,_Src.Data,(longlong)iVar17 * 2);
    icu_64::UnicodeString::releaseBuffer(&local_c8,iVar17);
  }
  if ((pTVar1->Object == (DateFormat *)0x0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x408,L""), bVar6)) {
    pcVar3 = (code *)swi(3);
    pTVar10 = (TSharedRef<icu_64::DateFormat_const_,1> *)(*pcVar3)();
    return pTVar10;
  }
  pTVar2 = (this->ICUDateFormat).SharedReferenceCount.ReferenceController;
  pDVar12 = pTVar1->Object;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  if ((pDVar12 == (DateFormat *)0x0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x25d,L""), bVar6)) {
    pcVar3 = (code *)swi(3);
    pTVar10 = (TSharedRef<icu_64::DateFormat_const_,1> *)(*pcVar3)();
    return pTVar10;
  }
  bVar6 = local_1a0.Data.ArrayNum < 2;
  if (1 < local_1a0.Data.ArrayNum) {
    local_1c8[0] = U_ZERO_ERROR;
    local_108._padding_ = (longlong)icu_64::UnicodeString::vftable;
    local_108.fUnion.fStackFields.fLengthAndFlags = 2;
    icu_64::TimeZone::getCanonicalID(&local_c8,&local_108,local_1c8);
    local_88._padding_ = (longlong)icu_64::UnicodeString::vftable;
    local_88.fUnion.fStackFields.fLengthAndFlags = 2;
    lVar11 = (**(code **)(pDVar12->_padding_ + 0xa8))(pDVar12);
    icu_64::UnicodeString::operator=(&local_88,(UnicodeString *)(lVar11 + 8));
    local_148._padding_ = (longlong)icu_64::UnicodeString::vftable;
    local_148.fUnion.fStackFields.fLengthAndFlags = 2;
    icu_64::TimeZone::getCanonicalID(&local_88,&local_148,local_1c8);
    if ((local_108.fUnion.fStackFields.fLengthAndFlags & 1U) == 0) {
      if (local_108.fUnion.fStackFields.fLengthAndFlags >> 7 == 0) {
        local_108.fUnion.fFields.fLength = (int)local_108.fUnion.fStackFields.fLengthAndFlags >> 5;
      }
      if (local_148.fUnion.fStackFields.fLengthAndFlags >> 7 == 0) {
        local_148.fUnion.fFields.fLength = (int)local_148.fUnion.fStackFields.fLengthAndFlags >> 5;
      }
      if (((((int)local_148.fUnion.fStackFields.fLengthAndFlags & 1U) == 0) &&
          (local_108.fUnion.fFields.fLength == local_148.fUnion.fFields.fLength)) &&
         (cVar7 = icu_64::UnicodeString::doEquals
                            (&local_108,&local_148,local_108.fUnion.fFields.fLength), cVar7 != '\0')
         ) {
        bVar6 = true;
      }
      else {
        bVar6 = false;
      }
    }
    else {
      bVar6 = (bool)(local_148.fUnion.fStackFields.fLengthAndFlags._0_1_ & 1);
    }
    icu_64::UnicodeString::~UnicodeString(&local_148);
    icu_64::UnicodeString::~UnicodeString(&local_88);
    icu_64::UnicodeString::~UnicodeString(&local_108);
  }
  pFVar5 = local_190;
  if (param_1 == Default) {
    if (bVar6 != false) {
      __return_storage_ptr__->Object = pDVar12;
      (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar2;
      if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
        UNLOCK();
      }
      goto LAB_1416f6720;
    }
LAB_1416f6510:
    EVar15 = DEFAULT;
  }
  else {
    if (param_1 == Default) goto LAB_1416f6510;
    if (param_1 == Short) {
      EVar15 = SHORT;
    }
    else {
      if (param_1 == Medium) goto LAB_1416f6510;
      if (param_1 == Long) {
        EVar15 = LONG;
      }
      else {
        if (param_1 != Full) goto LAB_1416f6510;
        EVar15 = FULL;
      }
    }
  }
  pDVar12 = icu_64::DateFormat::createDateInstance(EVar15,&local_190->ICULocale);
  local_1c0 = pDVar12;
  local_1b8.ReferenceController = ::operator_new(0x18);
  if (local_1b8.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    (local_1b8.ReferenceController)->SharedReferenceCount = (atomic<int>)0x1;
    (local_1b8.ReferenceController)->WeakReferenceCount = (atomic<int>)0x1;
    (local_1b8.ReferenceController)->_padding_ =
         (longlong)
         &
         ___7__TReferenceControllerWithDeleter_VDateFormat_icu_64__U__DefaultDeleter_VDateFormat_icu_64___SharedPointerInternals___00_SharedPointerInternals__6B_
    ;
    local_1b8.ReferenceController[1]._padding_ = (longlong)pDVar12;
  }
  if (pDVar12 == (DateFormat *)0x0) {
    local_188 = pFVar5;
    bVar8 = `FICUCultureImplementation::GetDateFormatter'::__l14::<lambda_1>::operator()(&local_188)
    ;
    if (!bVar8) {
      pLVar13 = ::`anonymous_namespace'::GetInvariantLocale();
      if (param_1 != Default) {
        if (param_1 == Short) {
          EVar16 = SHORT;
        }
        else if (param_1 != Medium) {
          if (param_1 == Long) {
            EVar16 = LONG;
          }
          else if (param_1 == Full) {
            EVar16 = FULL;
          }
        }
      }
      pDVar12 = icu_64::DateFormat::createDateInstance(EVar16,pLVar13);
      local_178.ReferenceController = ::operator_new(0x18);
      if (local_178.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        (local_178.ReferenceController)->SharedReferenceCount = (atomic<int>)0x1;
        (local_178.ReferenceController)->_padding_ =
             (longlong)
             &
             ___7__TReferenceControllerWithDeleter_VDateFormat_icu_64__U__DefaultDeleter_VDateFormat_icu_64___SharedPointerInternals___00_SharedPointerInternals__6B_
        ;
        (local_178.ReferenceController)->WeakReferenceCount = (atomic<int>)0x1;
        local_178.ReferenceController[1]._padding_ = (longlong)pDVar12;
      }
      local_180 = 0;
      local_1c0 = pDVar12;
      SharedPointerInternals::FSharedReferencer<1>::operator=(&local_1b8,&local_178);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_178.ReferenceController);
      pDVar12 = local_1c0;
      if (local_1c0 != (DateFormat *)0x0) goto LAB_1416f666e;
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("Formatter",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Internationalization\\ICUCulture.cpp"
                         ,0x1ff,L"");
      if (bVar8) {
        pcVar3 = (code *)swi(3);
        pTVar10 = (TSharedRef<icu_64::DateFormat_const_,1> *)(*pcVar3)();
        return pTVar10;
      }
    }
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar8) {
      pcVar3 = (code *)swi(3);
      pTVar10 = (TSharedRef<icu_64::DateFormat_const_,1> *)(*pcVar3)();
      return pTVar10;
    }
  }
LAB_1416f666e:
  pcVar3 = *(code **)(pDVar12->_padding_ + 0xb0);
  if (bVar6 == false) {
    pTVar14 = icu_64::TimeZone::createTimeZone(&local_c8);
  }
  else {
    pTVar14 = icu_64::TimeZone::createDefault();
  }
  (*pcVar3)(pDVar12,pTVar14);
  if ((pDVar12 == (DateFormat *)0x0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x408,L""), bVar6)) {
    pcVar3 = (code *)swi(3);
    pTVar10 = (TSharedRef<icu_64::DateFormat_const_,1> *)(*pcVar3)();
    return pTVar10;
  }
  FVar4.ReferenceController = local_1b8.ReferenceController;
  if (local_1b8.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_1b8.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(local_1b8.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  if ((pDVar12 == (DateFormat *)0x0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x25d,L""), bVar6)) {
    pcVar3 = (code *)swi(3);
    pTVar10 = (TSharedRef<icu_64::DateFormat_const_,1> *)(*pcVar3)();
    return pTVar10;
  }
  __return_storage_ptr__->Object = pDVar12;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = FVar4.ReferenceController;
  if (FVar4.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (FVar4.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(FVar4.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar4.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1b8.ReferenceController);
LAB_1416f6720:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  icu_64::UnicodeString::~UnicodeString(&local_c8);
  if (local_1a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1a0.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// GetDateTimeDecimalFormat @ 1416f6780

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "UErrorCode": Some values do not have unique names */

TSharedRef<icu_64::DecimalFormat_const_,1> * __thiscall
FICUCultureImplementation::GetDateTimeDecimalFormat
          (FICUCultureImplementation *this,
          TSharedRef<icu_64::DecimalFormat_const_,1> *__return_storage_ptr__)

{
  TSharedPtr<icu_64::DecimalFormat_const_,1> *pTVar1;
  code *pcVar2;
  FSharedReferencer<1> FVar3;
  bool bVar4;
  DecimalFormat *pDVar5;
  TReferenceControllerBase<1> *pTVar6;
  TReferenceControllerBase<1> *pTVar7;
  Locale *pLVar8;
  TSharedRef<icu_64::DecimalFormat_const_,1> *pTVar9;
  longlong lVar10;
  DecimalFormatSymbols *pDVar11;
  wchar16 *pwVar12;
  undefined1 auStack_eb8 [32];
  UErrorCode local_e98 [4];
  TSharedPtr<icu_64::DecimalFormat,1> local_e88;
  DecimalFormat *local_e78;
  FSharedReferencer<1> FStack_e70;
  FICUCultureImplementation *local_e68;
  TRawPtrProxy<icu_64::DecimalFormat> local_e60;
  undefined8 local_e58;
  FSharedReferencer<1> local_e50;
  UnicodeString local_e48;
  UnicodeString local_e08;
  UnicodeString local_dc8;
  UnicodeString local_d88;
  UnicodeString local_d48;
  UnicodeString local_d08;
  UnicodeString local_cc8;
  UnicodeString local_c88;
  UnicodeString local_c48;
  UnicodeString local_c08;
  UnicodeString local_bc8;
  UnicodeString local_b88;
  DecimalFormatSymbols local_b48;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_eb8;
  pTVar1 = &this->ICUDateTimeDecimalFormat;
  if (pTVar1->Object == (DecimalFormat *)0x0) {
    pTVar7 = (TReferenceControllerBase<1> *)0x0;
    local_e88.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    local_e98[0] = U_ZERO_ERROR;
    pDVar5 = (DecimalFormat *)icu_64::NumberFormat::createInstance(&this->ICULocale,local_e98);
    pTVar6 = ::operator_new(0x18);
    if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
      pTVar6->SharedReferenceCount = (atomic<int>)0x1;
      pTVar6->_padding_ =
           (longlong)
           &
           ___7__TReferenceControllerWithDeleter_VDecimalFormat_icu_64__U__DefaultDeleter_VDecimalFormat_icu_64___SharedPointerInternals___00_SharedPointerInternals__6B_
      ;
      pTVar6->WeakReferenceCount = (atomic<int>)0x1;
      pTVar6[1]._padding_ = (longlong)pDVar5;
      pTVar7 = pTVar6;
    }
    local_e58 = 0;
    local_e88.Object = pDVar5;
    local_e50.ReferenceController = pTVar7;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&local_e88.SharedReferenceCount,&local_e50);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_e50.ReferenceController);
    pDVar5 = local_e88.Object;
    if ((local_e88.Object == (DecimalFormat *)0x0) &&
       (local_e68 = this,
       bVar4 = `FICUCultureImplementation::GetDateTimeDecimalFormat'::__l7::<lambda_1>::operator()
                         (&local_e68), !bVar4)) {
      pLVar8 = ::`anonymous_namespace'::GetInvariantLocale();
      local_e60.Object = (DecimalFormat *)icu_64::NumberFormat::createInstance(pLVar8,local_e98);
      TSharedPtr<icu_64::DecimalFormat,1>::operator=<icu_64::DecimalFormat>(&local_e88,&local_e60);
      pDVar5 = local_e88.Object;
      if ((local_e88.Object == (DecimalFormat *)0x0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("DecimalFormatterForCulture",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Internationalization\\ICUCulture.cpp"
                             ,0x1af,L""), bVar4)) {
        pcVar2 = (code *)swi(3);
        pTVar9 = (TSharedRef<icu_64::DecimalFormat_const_,1> *)(*pcVar2)();
        return pTVar9;
      }
    }
    lVar10 = (**(code **)(this->_padding_ + 0x80))(this);
    if ((pDVar5 == (DecimalFormat *)0x0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar4)) {
      pcVar2 = (code *)swi(3);
      pTVar9 = (TSharedRef<icu_64::DecimalFormat_const_,1> *)(*pcVar2)();
      return pTVar9;
    }
    pDVar11 = (DecimalFormatSymbols *)(**(code **)(pDVar5->_padding_ + 0x130))(pDVar5);
    icu_64::DecimalFormatSymbols::DecimalFormatSymbols(&local_b48,pDVar11);
    local_e48._padding_ = (longlong)icu_64::UnicodeString::vftable;
    local_e48.fUnion.fStackFields.fLengthAndFlags = 2;
    pwVar12 = icu_64::UnicodeString::getBuffer(&local_e48,2);
    *pwVar12 = *(wchar16 *)(lVar10 + 0x78);
    pwVar12[1] = L'\0';
    icu_64::UnicodeString::releaseBuffer(&local_e48,1);
    icu_64::UnicodeString::operator=(local_b48.fSymbols + 4,&local_e48);
    icu_64::UnicodeString::char32At(&local_e48,0);
    local_b48.fCodePointZero = -1;
    icu_64::UnicodeString::~UnicodeString(&local_e48);
    local_e08._padding_ = (longlong)icu_64::UnicodeString::vftable;
    local_e08.fUnion.fStackFields.fLengthAndFlags = 2;
    pwVar12 = icu_64::UnicodeString::getBuffer(&local_e08,2);
    *pwVar12 = *(wchar16 *)(lVar10 + 0x7a);
    pwVar12[1] = L'\0';
    icu_64::UnicodeString::releaseBuffer(&local_e08,1);
    icu_64::UnicodeString::operator=(local_b48.fSymbols + 0x12,&local_e08);
    local_b48.fCodePointZero = -1;
    icu_64::UnicodeString::~UnicodeString(&local_e08);
    local_dc8._padding_ = (longlong)icu_64::UnicodeString::vftable;
    local_dc8.fUnion.fStackFields.fLengthAndFlags = 2;
    pwVar12 = icu_64::UnicodeString::getBuffer(&local_dc8,2);
    *pwVar12 = *(wchar16 *)(lVar10 + 0x7c);
    pwVar12[1] = L'\0';
    icu_64::UnicodeString::releaseBuffer(&local_dc8,1);
    icu_64::UnicodeString::operator=(local_b48.fSymbols + 0x13,&local_dc8);
    local_b48.fCodePointZero = -1;
    icu_64::UnicodeString::~UnicodeString(&local_dc8);
    local_d88._padding_ = (longlong)icu_64::UnicodeString::vftable;
    local_d88.fUnion.fStackFields.fLengthAndFlags = 2;
    pwVar12 = icu_64::UnicodeString::getBuffer(&local_d88,2);
    *pwVar12 = *(wchar16 *)(lVar10 + 0x7e);
    pwVar12[1] = L'\0';
    icu_64::UnicodeString::releaseBuffer(&local_d88,1);
    icu_64::UnicodeString::operator=(local_b48.fSymbols + 0x14,&local_d88);
    local_b48.fCodePointZero = -1;
    icu_64::UnicodeString::~UnicodeString(&local_d88);
    local_d48._padding_ = (longlong)icu_64::UnicodeString::vftable;
    local_d48.fUnion.fStackFields.fLengthAndFlags = 2;
    pwVar12 = icu_64::UnicodeString::getBuffer(&local_d48,2);
    *pwVar12 = *(wchar16 *)(lVar10 + 0x80);
    pwVar12[1] = L'\0';
    icu_64::UnicodeString::releaseBuffer(&local_d48,1);
    icu_64::UnicodeString::operator=(local_b48.fSymbols + 0x15,&local_d48);
    local_b48.fCodePointZero = -1;
    icu_64::UnicodeString::~UnicodeString(&local_d48);
    local_d08._padding_ = (longlong)icu_64::UnicodeString::vftable;
    local_d08.fUnion.fStackFields.fLengthAndFlags = 2;
    pwVar12 = icu_64::UnicodeString::getBuffer(&local_d08,2);
    *pwVar12 = *(wchar16 *)(lVar10 + 0x82);
    pwVar12[1] = L'\0';
    icu_64::UnicodeString::releaseBuffer(&local_d08,1);
    icu_64::UnicodeString::operator=(local_b48.fSymbols + 0x16,&local_d08);
    local_b48.fCodePointZero = -1;
    icu_64::UnicodeString::~UnicodeString(&local_d08);
    local_cc8._padding_ = (longlong)icu_64::UnicodeString::vftable;
    local_cc8.fUnion.fStackFields.fLengthAndFlags = 2;
    pwVar12 = icu_64::UnicodeString::getBuffer(&local_cc8,2);
    *pwVar12 = *(wchar16 *)(lVar10 + 0x84);
    pwVar12[1] = L'\0';
    icu_64::UnicodeString::releaseBuffer(&local_cc8,1);
    icu_64::UnicodeString::operator=(local_b48.fSymbols + 0x17,&local_cc8);
    local_b48.fCodePointZero = -1;
    icu_64::UnicodeString::~UnicodeString(&local_cc8);
    local_c88._padding_ = (longlong)icu_64::UnicodeString::vftable;
    local_c88.fUnion.fStackFields.fLengthAndFlags = 2;
    pwVar12 = icu_64::UnicodeString::getBuffer(&local_c88,2);
    *pwVar12 = *(wchar16 *)(lVar10 + 0x86);
    pwVar12[1] = L'\0';
    icu_64::UnicodeString::releaseBuffer(&local_c88,1);
    icu_64::UnicodeString::operator=(local_b48.fSymbols + 0x18,&local_c88);
    local_b48.fCodePointZero = -1;
    icu_64::UnicodeString::~UnicodeString(&local_c88);
    local_c48._padding_ = (longlong)icu_64::UnicodeString::vftable;
    local_c48.fUnion.fStackFields.fLengthAndFlags = 2;
    pwVar12 = icu_64::UnicodeString::getBuffer(&local_c48,2);
    *pwVar12 = *(wchar16 *)(lVar10 + 0x88);
    pwVar12[1] = L'\0';
    icu_64::UnicodeString::releaseBuffer(&local_c48,1);
    icu_64::UnicodeString::operator=(local_b48.fSymbols + 0x19,&local_c48);
    local_b48.fCodePointZero = -1;
    icu_64::UnicodeString::~UnicodeString(&local_c48);
    local_c08._padding_ = (longlong)icu_64::UnicodeString::vftable;
    local_c08.fUnion.fStackFields.fLengthAndFlags = 2;
    pwVar12 = icu_64::UnicodeString::getBuffer(&local_c08,2);
    *pwVar12 = *(wchar16 *)(lVar10 + 0x8a);
    pwVar12[1] = L'\0';
    icu_64::UnicodeString::releaseBuffer(&local_c08,1);
    icu_64::UnicodeString::operator=(local_b48.fSymbols + 0x1a,&local_c08);
    local_b48.fCodePointZero = -1;
    icu_64::UnicodeString::~UnicodeString(&local_c08);
    local_bc8._padding_ = (longlong)icu_64::UnicodeString::vftable;
    local_bc8.fUnion.fStackFields.fLengthAndFlags = 2;
    pwVar12 = icu_64::UnicodeString::getBuffer(&local_bc8,2);
    *pwVar12 = *(wchar16 *)(lVar10 + 0x70);
    pwVar12[1] = L'\0';
    icu_64::UnicodeString::releaseBuffer(&local_bc8,1);
    icu_64::UnicodeString::operator=(local_b48.fSymbols + 1,&local_bc8);
    icu_64::UnicodeString::~UnicodeString(&local_bc8);
    local_b88._padding_ = (longlong)icu_64::UnicodeString::vftable;
    local_b88.fUnion.fStackFields.fLengthAndFlags = 2;
    pwVar12 = icu_64::UnicodeString::getBuffer(&local_b88,2);
    *pwVar12 = *(wchar16 *)(lVar10 + 0x72);
    pwVar12[1] = L'\0';
    icu_64::UnicodeString::releaseBuffer(&local_b88,1);
    icu_64::UnicodeString::operator=(local_b48.fSymbols,&local_b88);
    icu_64::UnicodeString::~UnicodeString(&local_b88);
    if ((pDVar5 == (DecimalFormat *)0x0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar4)) {
      pcVar2 = (code *)swi(3);
      pTVar9 = (TSharedRef<icu_64::DecimalFormat_const_,1> *)(*pcVar2)();
      return pTVar9;
    }
    (**(code **)(pDVar5->_padding_ + 0x140))(pDVar5,&local_b48);
    if ((pDVar5 == (DecimalFormat *)0x0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar4)) {
      pcVar2 = (code *)swi(3);
      pTVar9 = (TSharedRef<icu_64::DecimalFormat_const_,1> *)(*pcVar2)();
      return pTVar9;
    }
    (**(code **)(pDVar5->_padding_ + 200))(pDVar5,0);
    icu_64::DecimalFormatSymbols::~DecimalFormatSymbols(&local_b48);
    FVar3.ReferenceController = local_e88.SharedReferenceCount.ReferenceController;
    local_e78 = local_e88.Object;
    FStack_e70.ReferenceController = local_e88.SharedReferenceCount.ReferenceController;
    if (local_e88.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_e88.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_e88.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    if (pTVar1 != (TSharedPtr<icu_64::DecimalFormat_const_,1> *)&local_e78) {
      pTVar1->Object = pDVar5;
      local_e78 = (DecimalFormat *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                (&(this->ICUDateTimeDecimalFormat).SharedReferenceCount,&FStack_e70);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (FStack_e70.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (FVar3.ReferenceController);
  }
  if ((pTVar1->Object == (DecimalFormat *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x408,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    pTVar9 = (TSharedRef<icu_64::DecimalFormat_const_,1> *)(*pcVar2)();
    return pTVar9;
  }
  __return_storage_ptr__->Object = pTVar1->Object;
  pTVar7 = (this->ICUDateTimeDecimalFormat).SharedReferenceCount.ReferenceController;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar7;
  if (pTVar7 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar7->SharedReferenceCount = (atomic<int>)((int)pTVar7->SharedReferenceCount + 1);
    UNLOCK();
  }
  if ((__return_storage_ptr__->Object == (DecimalFormat *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x25d,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    pTVar9 = (TSharedRef<icu_64::DecimalFormat_const_,1> *)(*pcVar2)();
    return pTVar9;
  }
  return __return_storage_ptr__;
}

// GetDateTimeFormatter @ 1416f6f40

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "UErrorCode": Some values do not have unique names */

TSharedRef<icu_64::DateFormat_const_,1> * __thiscall
FICUCultureImplementation::GetDateTimeFormatter
          (FICUCultureImplementation *this,
          TSharedRef<icu_64::DateFormat_const_,1> *__return_storage_ptr__,FString *param_1,
          FString *param_2)

{
  code *pcVar1;
  FSharedReferencer<1> FVar2;
  ForAnyElementType FVar3;
  wchar16 *pwVar4;
  DateFormat *pDVar5;
  TReferenceControllerBase<1> *pTVar6;
  Locale *pLVar7;
  TReferenceControllerBase<1> *pTVar8;
  TSharedRef<icu_64::DateFormat_const_,1> *pTVar9;
  TimeZone *pTVar10;
  TSharedRef<icu_64::DecimalFormat_const_,1> *pTVar11;
  int iVar12;
  wchar_t *pwVar13;
  bool bVar14;
  undefined1 auStackY_1b8 [32];
  undefined1 local_188 [4];
  UErrorCode local_184;
  DateFormat *local_180;
  FSharedReferencer<1> local_178;
  FString local_170;
  TReferenceControllerBase<1> *local_160;
  FSharedReferencer<1> local_158;
  undefined8 local_150;
  FSharedReferencer<1> local_148;
  FString local_140;
  TSharedRef<icu_64::DecimalFormat_const_,1> local_130;
  UnicodeString local_118;
  UnicodeString local_d8;
  UnicodeString local_98;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_1b8;
  local_184 = U_ZERO_ERROR;
  if ((param_1->Data).ArrayNum == 0) {
    pwVar13 = L"";
  }
  else {
    pwVar13 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
  }
  `FICUCultureImplementation::GetDateTimeFormatter'::__l3::<lambda_1>::operator()
            (local_188,&local_170,pwVar13);
  FVar3.Data = local_170.Data.AllocatorInstance.Data;
  local_184 = U_ZERO_ERROR;
  local_178.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  iVar12 = local_170.Data.ArrayNum + -1;
  if (local_170.Data.ArrayNum == 0) {
    iVar12 = 0;
  }
  local_118._padding_ = (longlong)icu_64::UnicodeString::vftable;
  local_118.fUnion.fStackFields.fLengthAndFlags = 2;
  if (0 < iVar12) {
    pwVar4 = icu_64::UnicodeString::getBuffer(&local_118,iVar12 + 1);
    memcpy(pwVar4,FVar3.Data,(longlong)iVar12 * 2);
    pwVar4[iVar12] = L'\0';
    icu_64::UnicodeString::releaseBuffer(&local_118,iVar12);
  }
  pTVar8 = (TReferenceControllerBase<1> *)0x0;
  pDVar5 = icu_64::DateFormat::createInstanceForSkeleton(&local_118,&this->ICULocale,&local_184);
  pTVar6 = ::operator_new(0x18);
  if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
    pTVar6->SharedReferenceCount = (atomic<int>)0x1;
    pTVar6->WeakReferenceCount = (atomic<int>)0x1;
    pTVar6->_padding_ =
         (longlong)
         &
         ___7__TReferenceControllerWithDeleter_VDateFormat_icu_64__U__DefaultDeleter_VDateFormat_icu_64___SharedPointerInternals___00_SharedPointerInternals__6B_
    ;
    pTVar6[1]._padding_ = (longlong)pDVar5;
    pTVar8 = pTVar6;
  }
  local_150 = 0;
  local_180 = pDVar5;
  local_148.ReferenceController = pTVar8;
  SharedPointerInternals::FSharedReferencer<1>::operator=(&local_178,&local_148);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_148.ReferenceController);
  icu_64::UnicodeString::~UnicodeString(&local_118);
  bVar14 = false;
  if (local_180 == (DateFormat *)0x0) {
    pLVar7 = ::`anonymous_namespace'::GetInvariantLocale();
    local_160 = (TReferenceControllerBase<1> *)local_170.Data.AllocatorInstance.Data;
    iVar12 = local_170.Data.ArrayNum + -1;
    if (local_170.Data.ArrayNum == 0) {
      iVar12 = 0;
    }
    local_d8._padding_ = (longlong)icu_64::UnicodeString::vftable;
    local_d8.fUnion.fStackFields.fLengthAndFlags = 2;
    if (0 < iVar12) {
      pwVar4 = icu_64::UnicodeString::getBuffer(&local_d8,iVar12 + 1);
      memcpy(pwVar4,local_160,(longlong)iVar12 * 2);
      pwVar4[iVar12] = L'\0';
      icu_64::UnicodeString::releaseBuffer(&local_d8,iVar12);
    }
    pDVar5 = icu_64::DateFormat::createInstanceForSkeleton(&local_d8,pLVar7,&local_184);
    pTVar8 = ::operator_new(0x18);
    local_158.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
      pTVar8->SharedReferenceCount = (atomic<int>)0x1;
      pTVar8->_padding_ =
           (longlong)
           &
           ___7__TReferenceControllerWithDeleter_VDateFormat_icu_64__U__DefaultDeleter_VDateFormat_icu_64___SharedPointerInternals___00_SharedPointerInternals__6B_
      ;
      pTVar8->WeakReferenceCount = (atomic<int>)0x1;
      pTVar8[1]._padding_ = (longlong)pDVar5;
      local_158.ReferenceController = pTVar8;
    }
    local_180 = pDVar5;
    local_160 = (TReferenceControllerBase<1> *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(&local_178,&local_158);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_158.ReferenceController);
    icu_64::UnicodeString::~UnicodeString(&local_d8);
    bVar14 = local_180 == (DateFormat *)0x0;
  }
  pDVar5 = local_180;
  if (local_180 == (DateFormat *)0x0) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_178.ReferenceController);
    if (local_170.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_170.Data.AllocatorInstance.Data);
    }
    GetDateTimeFormatter(this,__return_storage_ptr__,Default,Default,param_2);
  }
  else {
    InternationalizationUtilities::SanitizeTimezoneCode(&local_140,param_2);
    if ((bVar14) &&
       (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar14)) {
      pcVar1 = (code *)swi(3);
      pTVar9 = (TSharedRef<icu_64::DateFormat_const_,1> *)(*pcVar1)();
      return pTVar9;
    }
    FVar3.Data = local_140.Data.AllocatorInstance.Data;
    pcVar1 = *(code **)(pDVar5->_padding_ + 0xb0);
    if (local_140.Data.ArrayNum < 2) {
      pTVar10 = icu_64::TimeZone::createDefault();
      (*pcVar1)(pDVar5,pTVar10);
    }
    else {
      iVar12 = local_140.Data.ArrayNum + -1;
      if (local_140.Data.ArrayNum == 0) {
        iVar12 = 0;
      }
      local_98._padding_ = (longlong)icu_64::UnicodeString::vftable;
      local_98.fUnion.fStackFields.fLengthAndFlags = 2;
      if (0 < iVar12) {
        pwVar4 = icu_64::UnicodeString::getBuffer(&local_98,iVar12 + 1);
        memcpy(pwVar4,FVar3.Data,(longlong)iVar12 * 2);
        icu_64::UnicodeString::releaseBuffer(&local_98,iVar12);
      }
      pTVar10 = icu_64::TimeZone::createTimeZone(&local_98);
      (*pcVar1)(pDVar5,pTVar10);
      icu_64::UnicodeString::~UnicodeString(&local_98);
    }
    if ((pDVar5 == (DateFormat *)0x0) &&
       (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar14)) {
      pcVar1 = (code *)swi(3);
      pTVar9 = (TSharedRef<icu_64::DateFormat_const_,1> *)(*pcVar1)();
      return pTVar9;
    }
    pcVar1 = *(code **)(pDVar5->_padding_ + 0xa0);
    pTVar11 = GetDateTimeDecimalFormat(this,&local_130);
    (*pcVar1)(pDVar5,pTVar11->Object);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_130.SharedReferenceCount.ReferenceController);
    if ((pDVar5 == (DateFormat *)0x0) &&
       (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x408,L""), bVar14)) {
      pcVar1 = (code *)swi(3);
      pTVar9 = (TSharedRef<icu_64::DateFormat_const_,1> *)(*pcVar1)();
      return pTVar9;
    }
    FVar2.ReferenceController = local_178.ReferenceController;
    if (local_178.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_178.ReferenceController)->SharedReferenceCount =
           (atomic<int>)((int)(local_178.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    if ((pDVar5 == (DateFormat *)0x0) &&
       (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x25d,L""), bVar14)) {
      pcVar1 = (code *)swi(3);
      pTVar9 = (TSharedRef<icu_64::DateFormat_const_,1> *)(*pcVar1)();
      return pTVar9;
    }
    __return_storage_ptr__->Object = pDVar5;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController = FVar2.ReferenceController;
    if (FVar2.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (FVar2.ReferenceController)->SharedReferenceCount =
           (atomic<int>)((int)(FVar2.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (FVar2.ReferenceController);
    if (local_140.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_140.Data.AllocatorInstance.Data);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (FVar2.ReferenceController);
    if (local_170.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_170.Data.AllocatorInstance.Data);
    }
  }
  return __return_storage_ptr__;
}

// GetDateTimeFormatter @ 1416f73b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "UErrorCode": Some values do not have unique names */
/* WARNING: Enum "EStyle": Some values do not have unique names */

TSharedRef<icu_64::DateFormat_const_,1> * __thiscall
FICUCultureImplementation::GetDateTimeFormatter
          (FICUCultureImplementation *this,
          TSharedRef<icu_64::DateFormat_const_,1> *__return_storage_ptr__,Type param_1,Type param_2,
          FString *param_3)

{
  TSharedPtr<icu_64::DateFormat_const_,1> *pTVar1;
  TReferenceControllerBase<1> *pTVar2;
  code *pcVar3;
  int iVar4;
  FSharedReferencer<1> FVar5;
  ForAnyElementType _Src;
  FICUCultureImplementation *this_00;
  bool bVar6;
  char cVar7;
  TSharedRef<icu_64::DecimalFormat_const_,1> *pTVar8;
  TSharedRef<icu_64::DateFormat_const_,1> *pTVar9;
  wchar16 *_Dst;
  longlong lVar10;
  DateFormat *pDVar11;
  Locale *pLVar12;
  TReferenceControllerBase<1> *pTVar13;
  TimeZone *pTVar14;
  EStyle EVar15;
  EStyle EVar16;
  EStyle EVar17;
  undefined1 auStack_1f8 [32];
  char local_1d8;
  UErrorCode local_1d4;
  DateFormat *local_1d0;
  FSharedReferencer<1> local_1c8;
  DateFormat *local_1c0;
  FSharedReferencer<1> local_1b8;
  FString local_1b0;
  FICUCultureImplementation *local_1a0;
  FICUCultureImplementation *local_198;
  TReferenceControllerBase<1> *local_190;
  FSharedReferencer<1> local_188;
  TSharedRef<icu_64::DateFormat_const_,1> local_180;
  TSharedRef<icu_64::DecimalFormat_const_,1> local_170;
  TSharedRef<icu_64::DecimalFormat_const_,1> local_160;
  UnicodeString local_148;
  UnicodeString local_108;
  UnicodeString local_c8;
  UnicodeString local_88;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_1f8;
  pTVar1 = &this->ICUDateTimeFormat;
  local_1a0 = this;
  if (pTVar1->Object == (DateFormat *)0x0) {
    pTVar8 = GetDateTimeDecimalFormat(this,&local_170);
    pTVar9 = ::`anonymous_namespace'::CreateDateTimeFormat
                       (&local_180,&this->ICULocale,pTVar8->Object);
    local_1b8.ReferenceController = (pTVar9->SharedReferenceCount).ReferenceController;
    local_1c0 = pTVar9->Object;
    if (local_1b8.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_1b8.ReferenceController)->SharedReferenceCount =
           (atomic<int>)((int)(local_1b8.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    if (pTVar1 != (TSharedPtr<icu_64::DateFormat_const_,1> *)&local_1c0) {
      pTVar1->Object = local_1c0;
      local_1c0 = (DateFormat *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                (&(this->ICUDateTimeFormat).SharedReferenceCount,&local_1b8);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_1b8.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_180.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_170.SharedReferenceCount.ReferenceController);
  }
  InternationalizationUtilities::SanitizeTimezoneCode(&local_1b0,param_3);
  _Src.Data = local_1b0.Data.AllocatorInstance.Data;
  local_c8._padding_ = (longlong)icu_64::UnicodeString::vftable;
  EVar16 = DEFAULT;
  local_c8.fUnion.fStackFields.fLengthAndFlags = 2;
  iVar4 = local_1b0.Data.ArrayNum + -1;
  if (local_1b0.Data.ArrayNum == 0) {
    iVar4 = 0;
  }
  if (0 < iVar4) {
    _Dst = icu_64::UnicodeString::getBuffer(&local_c8,iVar4 + 1);
    memcpy(_Dst,_Src.Data,(longlong)iVar4 * 2);
    icu_64::UnicodeString::releaseBuffer(&local_c8,iVar4);
  }
  if ((pTVar1->Object == (DateFormat *)0x0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x408,L""), bVar6)) {
    pcVar3 = (code *)swi(3);
    pTVar9 = (TSharedRef<icu_64::DateFormat_const_,1> *)(*pcVar3)();
    return pTVar9;
  }
  pTVar2 = (this->ICUDateTimeFormat).SharedReferenceCount.ReferenceController;
  pDVar11 = pTVar1->Object;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  if ((pDVar11 == (DateFormat *)0x0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x25d,L""), bVar6)) {
    pcVar3 = (code *)swi(3);
    pTVar9 = (TSharedRef<icu_64::DateFormat_const_,1> *)(*pcVar3)();
    return pTVar9;
  }
  bVar6 = local_1b0.Data.ArrayNum < 2;
  local_1d8 = bVar6;
  if (1 < local_1b0.Data.ArrayNum) {
    local_108.fUnion.fStackFields.fLengthAndFlags = 2;
    local_1d4 = U_ZERO_ERROR;
    local_108._padding_ = (longlong)icu_64::UnicodeString::vftable;
    icu_64::TimeZone::getCanonicalID(&local_c8,&local_108,&local_1d4);
    local_88._padding_ = (longlong)icu_64::UnicodeString::vftable;
    local_88.fUnion.fStackFields.fLengthAndFlags = 2;
    lVar10 = (**(code **)(pDVar11->_padding_ + 0xa8))(pDVar11);
    icu_64::UnicodeString::operator=(&local_88,(UnicodeString *)(lVar10 + 8));
    local_148._padding_ = (longlong)icu_64::UnicodeString::vftable;
    local_148.fUnion.fStackFields.fLengthAndFlags = 2;
    icu_64::TimeZone::getCanonicalID(&local_88,&local_148,&local_1d4);
    if ((local_108.fUnion.fStackFields.fLengthAndFlags & 1U) == 0) {
      if (local_108.fUnion.fStackFields.fLengthAndFlags >> 7 == 0) {
        local_108.fUnion.fFields.fLength = (int)local_108.fUnion.fStackFields.fLengthAndFlags >> 5;
      }
      if (local_148.fUnion.fStackFields.fLengthAndFlags >> 7 == 0) {
        local_148.fUnion.fFields.fLength = (int)local_148.fUnion.fStackFields.fLengthAndFlags >> 5;
      }
      if (((((int)local_148.fUnion.fStackFields.fLengthAndFlags & 1U) == 0) &&
          (local_108.fUnion.fFields.fLength == local_148.fUnion.fFields.fLength)) &&
         (cVar7 = icu_64::UnicodeString::doEquals
                            (&local_108,&local_148,local_108.fUnion.fFields.fLength), cVar7 != '\0')
         ) {
        bVar6 = true;
      }
      else {
        bVar6 = false;
      }
    }
    else {
      bVar6 = (bool)(local_148.fUnion.fStackFields.fLengthAndFlags._0_1_ & 1);
    }
    local_1d8 = bVar6;
    icu_64::UnicodeString::~UnicodeString(&local_148);
    icu_64::UnicodeString::~UnicodeString(&local_88);
    icu_64::UnicodeString::~UnicodeString(&local_108);
  }
  this_00 = local_1a0;
  EVar17 = DEFAULT;
  if ((param_1 == Default) && (param_2 == Default)) {
    if (bVar6 != false) {
      __return_storage_ptr__->Object = pDVar11;
      (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar2;
      if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
        UNLOCK();
      }
      goto LAB_1416f797c;
    }
  }
  else if (param_2 != Default) {
    if (param_2 == Short) {
      EVar17 = SHORT;
    }
    else if (param_2 != Medium) {
      if (param_2 == Long) {
        EVar17 = LONG;
      }
      else if (param_2 == Full) {
        EVar17 = FULL;
      }
    }
  }
  if (param_1 == Default) {
LAB_1416f76d9:
    EVar15 = DEFAULT;
  }
  else if (param_1 == Short) {
    EVar15 = SHORT;
  }
  else {
    if (param_1 == Medium) goto LAB_1416f76d9;
    if (param_1 == Long) {
      EVar15 = LONG;
    }
    else {
      if (param_1 != Full) goto LAB_1416f76d9;
      EVar15 = FULL;
    }
  }
  pDVar11 = icu_64::DateFormat::createDateTimeInstance(EVar15,EVar17,&local_1a0->ICULocale);
  local_1d0 = pDVar11;
  local_1c8.ReferenceController = ::operator_new(0x18);
  if (local_1c8.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    (local_1c8.ReferenceController)->SharedReferenceCount = (atomic<int>)0x1;
    (local_1c8.ReferenceController)->WeakReferenceCount = (atomic<int>)0x1;
    (local_1c8.ReferenceController)->_padding_ =
         (longlong)
         &
         ___7__TReferenceControllerWithDeleter_VDateFormat_icu_64__U__DefaultDeleter_VDateFormat_icu_64___SharedPointerInternals___00_SharedPointerInternals__6B_
    ;
    local_1c8.ReferenceController[1]._padding_ = (longlong)pDVar11;
  }
  if (pDVar11 == (DateFormat *)0x0) {
    local_198 = this_00;
    bVar6 = `FICUCultureImplementation::GetDateTimeFormatter'::__l14::<lambda_1>::operator()
                      (&local_198);
    if (!bVar6) {
      pLVar12 = ::`anonymous_namespace'::GetInvariantLocale();
      if (param_2 == Default) {
LAB_1416f7779:
        EVar17 = DEFAULT;
      }
      else if (param_2 == Short) {
        EVar17 = SHORT;
      }
      else {
        if (param_2 == Medium) goto LAB_1416f7779;
        if (param_2 == Long) {
          EVar17 = LONG;
        }
        else {
          if (param_2 != Full) goto LAB_1416f7779;
          EVar17 = FULL;
        }
      }
      if (param_1 != Default) {
        if (param_1 == Short) {
          EVar16 = SHORT;
        }
        else if (param_1 != Medium) {
          if (param_1 == Long) {
            EVar16 = LONG;
          }
          else if (param_1 == Full) {
            EVar16 = FULL;
          }
        }
      }
      pDVar11 = icu_64::DateFormat::createDateTimeInstance(EVar16,EVar17,pLVar12);
      pTVar13 = ::operator_new(0x18);
      local_188.ReferenceController = (TReferenceControllerBase<1> *)0x0;
      if (pTVar13 != (TReferenceControllerBase<1> *)0x0) {
        pTVar13->SharedReferenceCount = (atomic<int>)0x1;
        pTVar13->_padding_ =
             (longlong)
             &
             ___7__TReferenceControllerWithDeleter_VDateFormat_icu_64__U__DefaultDeleter_VDateFormat_icu_64___SharedPointerInternals___00_SharedPointerInternals__6B_
        ;
        pTVar13->WeakReferenceCount = (atomic<int>)0x1;
        pTVar13[1]._padding_ = (longlong)pDVar11;
        local_188.ReferenceController = pTVar13;
      }
      local_1d0 = pDVar11;
      local_190 = (TReferenceControllerBase<1> *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=(&local_1c8,&local_188);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_188.ReferenceController);
      pDVar11 = local_1d0;
      if (local_1d0 != (DateFormat *)0x0) goto LAB_1416f786f;
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Formatter",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Internationalization\\ICUCulture.cpp"
                         ,0x269,L"");
      if (bVar6) {
        pcVar3 = (code *)swi(3);
        pTVar9 = (TSharedRef<icu_64::DateFormat_const_,1> *)(*pcVar3)();
        return pTVar9;
      }
    }
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar6) {
      pcVar3 = (code *)swi(3);
      pTVar9 = (TSharedRef<icu_64::DateFormat_const_,1> *)(*pcVar3)();
      return pTVar9;
    }
  }
LAB_1416f786f:
  pcVar3 = *(code **)(pDVar11->_padding_ + 0xb0);
  if (local_1d8 == '\0') {
    pTVar14 = icu_64::TimeZone::createTimeZone(&local_c8);
  }
  else {
    pTVar14 = icu_64::TimeZone::createDefault();
  }
  (*pcVar3)(pDVar11,pTVar14);
  if ((pDVar11 == (DateFormat *)0x0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar6)) {
    pcVar3 = (code *)swi(3);
    pTVar9 = (TSharedRef<icu_64::DateFormat_const_,1> *)(*pcVar3)();
    return pTVar9;
  }
  pcVar3 = *(code **)(pDVar11->_padding_ + 0xa0);
  pTVar8 = GetDateTimeDecimalFormat(this_00,&local_160);
  (*pcVar3)(pDVar11,pTVar8->Object);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_160.SharedReferenceCount.ReferenceController);
  if ((pDVar11 == (DateFormat *)0x0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x408,L""), bVar6)) {
    pcVar3 = (code *)swi(3);
    pTVar9 = (TSharedRef<icu_64::DateFormat_const_,1> *)(*pcVar3)();
    return pTVar9;
  }
  FVar5.ReferenceController = local_1c8.ReferenceController;
  if (local_1c8.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_1c8.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(local_1c8.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  if ((pDVar11 == (DateFormat *)0x0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x25d,L""), bVar6)) {
    pcVar3 = (code *)swi(3);
    pTVar9 = (TSharedRef<icu_64::DateFormat_const_,1> *)(*pcVar3)();
    return pTVar9;
  }
  __return_storage_ptr__->Object = pDVar11;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = FVar5.ReferenceController;
  if (FVar5.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (FVar5.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(FVar5.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar5.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1c8.ReferenceController);
LAB_1416f797c:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  icu_64::UnicodeString::~UnicodeString(&local_c8);
  if (local_1b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1b0.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// GetDecimalNumberFormattingRules @ 1416f79f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "UErrorCode": Some values do not have unique names */

FDecimalNumberFormattingRules * __thiscall
FICUCultureImplementation::GetDecimalNumberFormattingRules(FICUCultureImplementation *this)

{
  TSharedPtr<FDecimalNumberFormattingRules_const_,1> *pTVar1;
  FWindowsRecursiveMutex *lpCriticalSection;
  code *pcVar2;
  bool bVar3;
  DecimalFormat *pDVar4;
  TReferenceControllerBase<1> *pTVar5;
  Locale *pLVar6;
  TReferenceControllerBase<1> *pTVar7;
  FDecimalNumberFormattingRules *pFVar8;
  TSharedRef<FDecimalNumberFormattingRules,1> *pTVar9;
  undefined1 auStack_168 [32];
  UErrorCode local_148 [2];
  DecimalFormat *local_140;
  FSharedReferencer<1> local_138;
  FDecimalNumberFormattingRules *local_130;
  FSharedReferencer<1> local_128;
  FICUCultureImplementation *local_120;
  undefined8 local_118;
  FSharedReferencer<1> local_110;
  undefined8 local_108;
  FSharedReferencer<1> local_100;
  TSharedRef<FDecimalNumberFormattingRules,1> local_f8;
  FDecimalNumberFormattingRules local_e8;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_168;
  pTVar1 = &this->UEDecimalNumberFormattingRules;
  if (pTVar1->Object != (FDecimalNumberFormattingRules *)0x0) {
    return pTVar1->Object;
  }
  pTVar7 = (TReferenceControllerBase<1> *)0x0;
  local_138.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  local_148[0] = U_ZERO_ERROR;
  pDVar4 = (DecimalFormat *)icu_64::NumberFormat::createInstance(&this->ICULocale,local_148);
  pTVar5 = ::operator_new(0x18);
  local_110.ReferenceController = pTVar7;
  if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
    pTVar5->SharedReferenceCount = (atomic<int>)0x1;
    pTVar5->WeakReferenceCount = (atomic<int>)0x1;
    pTVar5->_padding_ =
         (longlong)
         &
         ___7__TReferenceControllerWithDeleter_VDecimalFormat_icu_64__U__DefaultDeleter_VDecimalFormat_icu_64___SharedPointerInternals___00_SharedPointerInternals__6B_
    ;
    pTVar5[1]._padding_ = (longlong)pDVar4;
    local_110.ReferenceController = pTVar5;
  }
  local_118 = 0;
  local_140 = pDVar4;
  SharedPointerInternals::FSharedReferencer<1>::operator=(&local_138,&local_110);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_110.ReferenceController);
  pDVar4 = local_140;
  if (local_140 == (DecimalFormat *)0x0) {
    local_120 = this;
    bVar3 = `FICUCultureImplementation::GetDecimalNumberFormattingRules'::__l7::<lambda_1>::
            operator()(&local_120);
    if (!bVar3) {
      pLVar6 = ::`anonymous_namespace'::GetInvariantLocale();
      pDVar4 = (DecimalFormat *)icu_64::NumberFormat::createInstance(pLVar6,local_148);
      pTVar5 = ::operator_new(0x18);
      if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
        pTVar5->SharedReferenceCount = (atomic<int>)0x1;
        pTVar5->WeakReferenceCount = (atomic<int>)0x1;
        pTVar5->_padding_ =
             (longlong)
             &
             ___7__TReferenceControllerWithDeleter_VDecimalFormat_icu_64__U__DefaultDeleter_VDecimalFormat_icu_64___SharedPointerInternals___00_SharedPointerInternals__6B_
        ;
        pTVar5[1]._padding_ = (longlong)pDVar4;
        pTVar7 = pTVar5;
      }
      local_108 = 0;
      local_140 = pDVar4;
      local_100.ReferenceController = pTVar7;
      SharedPointerInternals::FSharedReferencer<1>::operator=(&local_138,&local_100);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_100.ReferenceController);
      pDVar4 = local_140;
      if (local_140 != (DecimalFormat *)0x0) goto LAB_1416f7b9b;
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("DecimalFormatterForCulture",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Internationalization\\ICUCulture.cpp"
                         ,0x335,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pFVar8 = (FDecimalNumberFormattingRules *)(*pcVar2)();
        return pFVar8;
      }
    }
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x44d,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar8 = (FDecimalNumberFormattingRules *)(*pcVar2)();
      return pFVar8;
    }
  }
LAB_1416f7b9b:
  ::`anonymous_namespace'::ExtractNumberFormattingRulesFromICUDecimalFormatter
            (&local_e8,&this->ICULocale,pDVar4);
  lpCriticalSection = &this->UEDecimalNumberFormattingRulesCS;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  if (pTVar1->Object == (FDecimalNumberFormattingRules *)0x0) {
    pTVar9 = MakeShared<FDecimalNumberFormattingRules,1,FDecimalNumberFormattingRules_const_&>
                       (&local_f8,&local_e8);
    local_128.ReferenceController = (pTVar9->SharedReferenceCount).ReferenceController;
    local_130 = pTVar9->Object;
    if (local_128.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_128.ReferenceController)->SharedReferenceCount =
           (atomic<int>)((int)(local_128.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    if (pTVar1 != (TSharedPtr<FDecimalNumberFormattingRules_const_,1> *)&local_130) {
      pTVar1->Object = local_130;
      local_130 = (FDecimalNumberFormattingRules *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                (&(this->UEDecimalNumberFormattingRules).SharedReferenceCount,&local_128);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_128.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_f8.SharedReferenceCount.ReferenceController);
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  if ((pTVar1->Object == (FDecimalNumberFormattingRules *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x44d,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    pFVar8 = (FDecimalNumberFormattingRules *)(*pcVar2)();
    return pFVar8;
  }
  pFVar8 = pTVar1->Object;
  if (local_e8.MinusString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_e8.MinusString.Data.AllocatorInstance.Data);
  }
  if (local_e8.PlusString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_e8.PlusString.Data.AllocatorInstance.Data);
  }
  if (local_e8.PositiveSuffixString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_e8.PositiveSuffixString.Data.AllocatorInstance.Data);
  }
  if (local_e8.PositivePrefixString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_e8.PositivePrefixString.Data.AllocatorInstance.Data);
  }
  if (local_e8.NegativeSuffixString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_e8.NegativeSuffixString.Data.AllocatorInstance.Data);
  }
  if (local_e8.NegativePrefixString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_e8.NegativePrefixString.Data.AllocatorInstance.Data);
  }
  if (local_e8.NaNString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_e8.NaNString.Data.AllocatorInstance.Data);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_138.ReferenceController);
  return pFVar8;
}

// GetDisplayName @ 1416f7e60

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "UErrorCode": Some values do not have unique names */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

FString * __thiscall
FICUCultureImplementation::GetDisplayName
          (FICUCultureImplementation *this,FString *__return_storage_ptr__)

{
  int iVar1;
  code *pcVar2;
  size_t _Size;
  bool bVar3;
  uint uVar4;
  FString *pFVar5;
  undefined8 _Src;
  undefined4 uVar6;
  undefined1 auStack_98 [32];
  longlong local_78;
  longlong local_70;
  UnicodeString local_68;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_98;
  local_68._padding_ = (longlong)icu_64::UnicodeString::vftable;
  local_68.fUnion.fStackFields.fLengthAndFlags = 2;
  icu_64::Locale::getDisplayName(&this->ICULocale,&local_68);
  _Src = (wchar16 *)0x0;
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).ArrayNum = 0;
  (__return_storage_ptr__->Data).ArrayMax = 0;
  uVar6 = local_68.fUnion.fFields.fLength;
  if (local_68.fUnion.fStackFields.fLengthAndFlags >> 7 == 0) {
    uVar6 = (int)local_68.fUnion.fStackFields.fLengthAndFlags >> 5;
  }
  if (uVar6 == 0) {
    ::FString::Empty(__return_storage_ptr__);
  }
  else if ((int)uVar6 < 1) {
    ::FString::Reset(__return_storage_ptr__,0);
  }
  else {
    TArray<wchar_t,TSizedDefaultAllocator<32>_>::SetNumUninitialized
              (&__return_storage_ptr__->Data,uVar6 + 1,Default);
    if (((local_68.fUnion.fStackFields.fLengthAndFlags & 0x11U) == 0) &&
       (_Src = (wchar16 *)((longlong)&local_68.fUnion + 2),
       (local_68.fUnion.fStackFields.fLengthAndFlags & 2U) == 0)) {
      _Src = local_68.fUnion.fFields.fArray;
    }
    _Size = (longlong)(int)uVar6 * 2;
    memcpy((__return_storage_ptr__->Data).AllocatorInstance.Data,(void *)_Src,_Size);
    iVar1 = (__return_storage_ptr__->Data).ArrayNum;
    uVar4 = 0;
    if ((int)uVar6 < iVar1) {
      uVar4 = (uint)~uVar6 >> 0x1f;
    }
    if ((uVar4 == 0) &&
       (local_78 = (longlong)(int)uVar6, local_70 = (longlong)iVar1,
       bVar3 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar3)) {
      pcVar2 = (code *)swi(3);
      pFVar5 = (FString *)(*pcVar2)();
      return pFVar5;
    }
    *(undefined2 *)((__return_storage_ptr__->Data).AllocatorInstance.Data + _Size) = 0;
  }
  icu_64::UnicodeString::~UnicodeString(&local_68);
  return __return_storage_ptr__;
}

// GetEnglishName @ 1416f80d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "UErrorCode": Some values do not have unique names */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

FString * __thiscall
FICUCultureImplementation::GetEnglishName
          (FICUCultureImplementation *this,FString *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  Locale *pLVar4;
  FString *pFVar5;
  undefined8 _Src;
  undefined4 uVar6;
  undefined1 auStackY_178 [32];
  UnicodeString local_148;
  Locale local_108;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_178;
  local_148._padding_ = (longlong)icu_64::UnicodeString::vftable;
  _Src = (wchar16 *)0x0;
  local_148.fUnion.fStackFields.fLengthAndFlags = 2;
  pLVar4 = (Locale *)icu_64::Locale::Locale(&local_108,"en",(char *)0x0,(char *)0x0,(char *)0x0);
  icu_64::Locale::getDisplayName(&this->ICULocale,pLVar4,&local_148);
  icu_64::Locale::~Locale(&local_108);
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).ArrayNum = 0;
  (__return_storage_ptr__->Data).ArrayMax = 0;
  uVar6 = local_148.fUnion.fFields.fLength;
  if (local_148.fUnion.fStackFields.fLengthAndFlags >> 7 == 0) {
    uVar6 = (int)local_148.fUnion.fStackFields.fLengthAndFlags >> 5;
  }
  if (uVar6 == 0) {
    ::FString::Empty(__return_storage_ptr__);
  }
  else if ((int)uVar6 < 1) {
    ::FString::Reset(__return_storage_ptr__,0);
  }
  else {
    TArray<wchar_t,TSizedDefaultAllocator<32>_>::SetNumUninitialized
              (&__return_storage_ptr__->Data,uVar6 + 1,Default);
    if (((local_148.fUnion.fStackFields.fLengthAndFlags & 0x11U) == 0) &&
       (_Src = (wchar16 *)((longlong)&local_148.fUnion + 2),
       (local_148.fUnion.fStackFields.fLengthAndFlags & 2U) == 0)) {
      _Src = local_148.fUnion.fFields.fArray;
    }
    memcpy((__return_storage_ptr__->Data).AllocatorInstance.Data,(void *)_Src,
           (longlong)(int)uVar6 * 2);
    uVar3 = 0;
    if ((int)uVar6 < (__return_storage_ptr__->Data).ArrayNum) {
      uVar3 = (uint)~uVar6 >> 0x1f;
    }
    if ((uVar3 == 0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar2)) {
      pcVar1 = (code *)swi(3);
      pFVar5 = (FString *)(*pcVar1)();
      return pFVar5;
    }
    *(undefined2 *)
     ((__return_storage_ptr__->Data).AllocatorInstance.Data + (longlong)(int)uVar6 * 2) = 0;
  }
  icu_64::UnicodeString::~UnicodeString(&local_148);
  return __return_storage_ptr__;
}

// GetKeyboardLayoutId @ 1416f8930

/* WARNING: Enum "UErrorCode": Some values do not have unique names */

int __thiscall FICUCultureImplementation::GetKeyboardLayoutId(FICUCultureImplementation *this)

{
  return 0;
}

// GetLCID @ 1416f8950

/* WARNING: Enum "UErrorCode": Some values do not have unique names */

int __thiscall FICUCultureImplementation::GetLCID(FICUCultureImplementation *this)

{
  uint uVar1;
  
  uVar1 = icu_64::Locale::getLCID(&this->ICULocale);
  return uVar1;
}

// GetName @ 1416f8c20

/* WARNING: Enum "UErrorCode": Some values do not have unique names */

FString * __thiscall
FICUCultureImplementation::GetName(FICUCultureImplementation *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,(this->ICULocale).fullName);
  ::FString::ReplaceCharInlineCaseSensitive(__return_storage_ptr__,L'_',L'-');
  return __return_storage_ptr__;
}

// GetNativeLanguage @ 1416f8d20

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "UErrorCode": Some values do not have unique names */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

FString * __thiscall
FICUCultureImplementation::GetNativeLanguage
          (FICUCultureImplementation *this,FString *__return_storage_ptr__)

{
  Locale *this_00;
  code *pcVar1;
  size_t sVar2;
  bool bVar3;
  uint uVar4;
  FString *pFVar5;
  undefined8 _Src;
  undefined8 _Src_00;
  undefined4 uVar6;
  undefined1 auStack_138 [32];
  longlong local_118;
  longlong local_110;
  TArray<wchar_t,TSizedDefaultAllocator<32>_> local_108;
  TArray<wchar_t,TSizedDefaultAllocator<32>_> local_f8;
  FString local_e8;
  FString local_d8;
  UnicodeString local_c8;
  UnicodeString local_88;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_138;
  this_00 = &this->ICULocale;
  local_88._padding_ = (longlong)icu_64::UnicodeString::vftable;
  local_88.fUnion.fStackFields.fLengthAndFlags = 2;
  icu_64::Locale::getDisplayLanguage(this_00,this_00,&local_88);
  _Src_00 = (wchar16 *)0x0;
  local_108.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_108.ArrayNum = 0;
  local_108.ArrayMax = 0;
  uVar6 = local_88.fUnion.fFields.fLength;
  if (local_88.fUnion.fStackFields.fLengthAndFlags >> 7 == 0) {
    uVar6 = (int)local_88.fUnion.fStackFields.fLengthAndFlags >> 5;
  }
  if (uVar6 == 0) {
    ::FString::Empty((FString *)&local_108);
  }
  else if ((int)uVar6 < 1) {
    ::FString::Reset((FString *)&local_108,0);
  }
  else {
    TArray<wchar_t,TSizedDefaultAllocator<32>_>::SetNumUninitialized(&local_108,uVar6 + 1,Default);
    _Src = _Src_00;
    if (((local_88.fUnion.fStackFields.fLengthAndFlags & 0x11U) == 0) &&
       (_Src = (wchar16 *)((longlong)&local_88.fUnion + 2),
       (local_88.fUnion.fStackFields.fLengthAndFlags & 2U) == 0)) {
      _Src = local_88.fUnion.fFields.fArray;
    }
    sVar2 = (longlong)(int)uVar6 * 2;
    memcpy(local_108.AllocatorInstance.Data,(void *)_Src,sVar2);
    uVar4 = 0;
    if ((int)uVar6 < local_108.ArrayNum) {
      uVar4 = (uint)~uVar6 >> 0x1f;
    }
    if ((uVar4 == 0) &&
       (local_118 = (longlong)(int)uVar6, local_110 = (longlong)local_108.ArrayNum,
       bVar3 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar3)) {
      pcVar1 = (code *)swi(3);
      pFVar5 = (FString *)(*pcVar1)();
      return pFVar5;
    }
    *(undefined2 *)(local_108.AllocatorInstance.Data + sVar2) = 0;
  }
  local_c8._padding_ = (longlong)icu_64::UnicodeString::vftable;
  local_c8.fUnion.fStackFields.fLengthAndFlags = 2;
  icu_64::Locale::getDisplayScript(this_00,this_00,&local_c8);
  local_f8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_f8.ArrayNum = 0;
  local_f8.ArrayMax = 0;
  uVar6 = local_c8.fUnion.fFields.fLength;
  if (local_c8.fUnion.fStackFields.fLengthAndFlags >> 7 == 0) {
    uVar6 = (int)local_c8.fUnion.fStackFields.fLengthAndFlags >> 5;
  }
  if (uVar6 == 0) {
    ::FString::Empty((FString *)&local_f8);
  }
  else if ((int)uVar6 < 1) {
    ::FString::Reset((FString *)&local_f8,0);
  }
  else {
    TArray<wchar_t,TSizedDefaultAllocator<32>_>::SetNumUninitialized(&local_f8,uVar6 + 1,Default);
    if (((local_c8.fUnion.fStackFields.fLengthAndFlags & 0x11U) == 0) &&
       (_Src_00 = (wchar16 *)((longlong)&local_c8.fUnion + 2),
       (local_c8.fUnion.fStackFields.fLengthAndFlags & 2U) == 0)) {
      _Src_00 = local_c8.fUnion.fFields.fArray;
    }
    sVar2 = (longlong)(int)uVar6 * 2;
    memcpy(local_f8.AllocatorInstance.Data,(void *)_Src_00,sVar2);
    uVar4 = 0;
    if ((int)uVar6 < local_f8.ArrayNum) {
      uVar4 = (uint)~uVar6 >> 0x1f;
    }
    if ((uVar4 == 0) &&
       (local_118 = (longlong)(int)uVar6, local_110 = (longlong)local_f8.ArrayNum,
       bVar3 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar3)) {
      pcVar1 = (code *)swi(3);
      pFVar5 = (FString *)(*pcVar1)();
      return pFVar5;
    }
    *(undefined2 *)(local_f8.AllocatorInstance.Data + sVar2) = 0;
  }
  if (local_f8.ArrayNum < 2) {
    (__return_storage_ptr__->Data).AllocatorInstance.Data = local_108.AllocatorInstance.Data;
    (__return_storage_ptr__->Data).ArrayNum = local_108.ArrayNum;
    (__return_storage_ptr__->Data).ArrayMax = local_108.ArrayMax;
    local_108.ArrayNum = 0;
    local_108.ArrayMax = 0;
    local_108.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  }
  else {
    ::FString::ConcatFC(&local_d8,(FString *)&local_108,L" (");
    ::FString::ConcatFF(&local_e8,&local_d8,(FString *)&local_f8);
    ::FString::ConcatFC(__return_storage_ptr__,&local_e8,L")");
    if (local_e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_e8.Data.AllocatorInstance.Data);
    }
    if (local_d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_d8.Data.AllocatorInstance.Data);
    }
  }
  if (local_f8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_f8.AllocatorInstance.Data);
  }
  icu_64::UnicodeString::~UnicodeString(&local_c8);
  if (local_108.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_108.AllocatorInstance.Data);
  }
  icu_64::UnicodeString::~UnicodeString(&local_88);
  return __return_storage_ptr__;
}

// GetNativeName @ 1416f90f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "UErrorCode": Some values do not have unique names */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

FString * __thiscall
FICUCultureImplementation::GetNativeName
          (FICUCultureImplementation *this,FString *__return_storage_ptr__)

{
  int iVar1;
  code *pcVar2;
  size_t _Size;
  bool bVar3;
  uint uVar4;
  FString *pFVar5;
  undefined8 _Src;
  undefined4 uVar6;
  undefined1 auStack_98 [32];
  longlong local_78;
  longlong local_70;
  UnicodeString local_68;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_98;
  local_68._padding_ = (longlong)icu_64::UnicodeString::vftable;
  local_68.fUnion.fStackFields.fLengthAndFlags = 2;
  icu_64::Locale::getDisplayName(&this->ICULocale,&this->ICULocale,&local_68);
  _Src = (wchar16 *)0x0;
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).ArrayNum = 0;
  (__return_storage_ptr__->Data).ArrayMax = 0;
  uVar6 = local_68.fUnion.fFields.fLength;
  if (local_68.fUnion.fStackFields.fLengthAndFlags >> 7 == 0) {
    uVar6 = (int)local_68.fUnion.fStackFields.fLengthAndFlags >> 5;
  }
  if (uVar6 == 0) {
    ::FString::Empty(__return_storage_ptr__);
  }
  else if ((int)uVar6 < 1) {
    ::FString::Reset(__return_storage_ptr__,0);
  }
  else {
    TArray<wchar_t,TSizedDefaultAllocator<32>_>::SetNumUninitialized
              (&__return_storage_ptr__->Data,uVar6 + 1,Default);
    if (((local_68.fUnion.fStackFields.fLengthAndFlags & 0x11U) == 0) &&
       (_Src = (wchar16 *)((longlong)&local_68.fUnion + 2),
       (local_68.fUnion.fStackFields.fLengthAndFlags & 2U) == 0)) {
      _Src = local_68.fUnion.fFields.fArray;
    }
    _Size = (longlong)(int)uVar6 * 2;
    memcpy((__return_storage_ptr__->Data).AllocatorInstance.Data,(void *)_Src,_Size);
    iVar1 = (__return_storage_ptr__->Data).ArrayNum;
    uVar4 = 0;
    if ((int)uVar6 < iVar1) {
      uVar4 = (uint)~uVar6 >> 0x1f;
    }
    if ((uVar4 == 0) &&
       (local_78 = (longlong)(int)uVar6, local_70 = (longlong)iVar1,
       bVar3 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar3)) {
      pcVar2 = (code *)swi(3);
      pFVar5 = (FString *)(*pcVar2)();
      return pFVar5;
    }
    *(undefined2 *)((__return_storage_ptr__->Data).AllocatorInstance.Data + _Size) = 0;
  }
  icu_64::UnicodeString::~UnicodeString(&local_68);
  return __return_storage_ptr__;
}

// GetNativeRegion @ 1416f92f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "UErrorCode": Some values do not have unique names */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

FString * __thiscall
FICUCultureImplementation::GetNativeRegion
          (FICUCultureImplementation *this,FString *__return_storage_ptr__)

{
  Locale *this_00;
  code *pcVar1;
  size_t sVar2;
  bool bVar3;
  uint uVar4;
  FString *pFVar5;
  undefined8 _Src;
  undefined8 _Src_00;
  undefined4 uVar6;
  undefined1 auStack_128 [32];
  longlong local_108;
  longlong local_100;
  TArray<wchar_t,TSizedDefaultAllocator<32>_> local_f8;
  TArray<wchar_t,TSizedDefaultAllocator<32>_> local_e8;
  FString local_d8;
  UnicodeString local_c8;
  UnicodeString local_88;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_128;
  this_00 = &this->ICULocale;
  local_88._padding_ = (longlong)icu_64::UnicodeString::vftable;
  local_88.fUnion.fStackFields.fLengthAndFlags = 2;
  icu_64::Locale::getDisplayCountry(this_00,this_00,&local_88);
  _Src_00 = (wchar16 *)0x0;
  local_f8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_f8.ArrayNum = 0;
  local_f8.ArrayMax = 0;
  uVar6 = local_88.fUnion.fFields.fLength;
  if (local_88.fUnion.fStackFields.fLengthAndFlags >> 7 == 0) {
    uVar6 = (int)local_88.fUnion.fStackFields.fLengthAndFlags >> 5;
  }
  if (uVar6 == 0) {
    ::FString::Empty((FString *)&local_f8);
  }
  else if ((int)uVar6 < 1) {
    ::FString::Reset((FString *)&local_f8,0);
  }
  else {
    TArray<wchar_t,TSizedDefaultAllocator<32>_>::SetNumUninitialized(&local_f8,uVar6 + 1,Default);
    _Src = _Src_00;
    if (((local_88.fUnion.fStackFields.fLengthAndFlags & 0x11U) == 0) &&
       (_Src = (wchar16 *)((longlong)&local_88.fUnion + 2),
       (local_88.fUnion.fStackFields.fLengthAndFlags & 2U) == 0)) {
      _Src = local_88.fUnion.fFields.fArray;
    }
    sVar2 = (longlong)(int)uVar6 * 2;
    memcpy(local_f8.AllocatorInstance.Data,(void *)_Src,sVar2);
    uVar4 = 0;
    if ((int)uVar6 < local_f8.ArrayNum) {
      uVar4 = (uint)~uVar6 >> 0x1f;
    }
    if ((uVar4 == 0) &&
       (local_108 = (longlong)(int)uVar6, local_100 = (longlong)local_f8.ArrayNum,
       bVar3 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar3)) {
      pcVar1 = (code *)swi(3);
      pFVar5 = (FString *)(*pcVar1)();
      return pFVar5;
    }
    *(undefined2 *)(local_f8.AllocatorInstance.Data + sVar2) = 0;
  }
  local_c8._padding_ = (longlong)icu_64::UnicodeString::vftable;
  local_c8.fUnion.fStackFields.fLengthAndFlags = 2;
  icu_64::Locale::getDisplayVariant(this_00,this_00,&local_c8);
  local_e8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_e8.ArrayNum = 0;
  local_e8.ArrayMax = 0;
  uVar6 = local_c8.fUnion.fFields.fLength;
  if (local_c8.fUnion.fStackFields.fLengthAndFlags >> 7 == 0) {
    uVar6 = (int)local_c8.fUnion.fStackFields.fLengthAndFlags >> 5;
  }
  if (uVar6 == 0) {
    ::FString::Empty((FString *)&local_e8);
  }
  else if ((int)uVar6 < 1) {
    ::FString::Reset((FString *)&local_e8,0);
  }
  else {
    TArray<wchar_t,TSizedDefaultAllocator<32>_>::SetNumUninitialized(&local_e8,uVar6 + 1,Default);
    if (((local_c8.fUnion.fStackFields.fLengthAndFlags & 0x11U) == 0) &&
       (_Src_00 = (wchar16 *)((longlong)&local_c8.fUnion + 2),
       (local_c8.fUnion.fStackFields.fLengthAndFlags & 2U) == 0)) {
      _Src_00 = local_c8.fUnion.fFields.fArray;
    }
    sVar2 = (longlong)(int)uVar6 * 2;
    memcpy(local_e8.AllocatorInstance.Data,(void *)_Src_00,sVar2);
    uVar4 = 0;
    if ((int)uVar6 < local_e8.ArrayNum) {
      uVar4 = (uint)~uVar6 >> 0x1f;
    }
    if ((uVar4 == 0) &&
       (local_108 = (longlong)(int)uVar6, local_100 = (longlong)local_e8.ArrayNum,
       bVar3 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar3)) {
      pcVar1 = (code *)swi(3);
      pFVar5 = (FString *)(*pcVar1)();
      return pFVar5;
    }
    *(undefined2 *)(local_e8.AllocatorInstance.Data + sVar2) = 0;
  }
  if (local_e8.ArrayNum < 2) {
    (__return_storage_ptr__->Data).AllocatorInstance.Data = local_f8.AllocatorInstance.Data;
    (__return_storage_ptr__->Data).ArrayNum = local_f8.ArrayNum;
    (__return_storage_ptr__->Data).ArrayMax = local_f8.ArrayMax;
    local_f8.ArrayNum = 0;
    local_f8.ArrayMax = 0;
    local_f8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  }
  else {
    ::FString::ConcatFC(&local_d8,(FString *)&local_f8,L", ");
    ::FString::ConcatFF(__return_storage_ptr__,&local_d8,(FString *)&local_e8);
    if (local_d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_d8.Data.AllocatorInstance.Data);
    }
  }
  if (local_e8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_e8.AllocatorInstance.Data);
  }
  icu_64::UnicodeString::~UnicodeString(&local_c8);
  if (local_f8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_f8.AllocatorInstance.Data);
  }
  icu_64::UnicodeString::~UnicodeString(&local_88);
  return __return_storage_ptr__;
}

// GetPercentFormattingRules @ 1416f9840

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "UErrorCode": Some values do not have unique names */

FDecimalNumberFormattingRules * __thiscall
FICUCultureImplementation::GetPercentFormattingRules(FICUCultureImplementation *this)

{
  TSharedPtr<FDecimalNumberFormattingRules_const_,1> *pTVar1;
  FWindowsRecursiveMutex *lpCriticalSection;
  code *pcVar2;
  bool bVar3;
  DecimalFormat *pDVar4;
  TReferenceControllerBase<1> *pTVar5;
  Locale *pLVar6;
  TReferenceControllerBase<1> *pTVar7;
  FDecimalNumberFormattingRules *pFVar8;
  TSharedRef<FDecimalNumberFormattingRules,1> *pTVar9;
  undefined1 auStack_168 [32];
  UErrorCode local_148 [2];
  DecimalFormat *local_140;
  FSharedReferencer<1> local_138;
  FDecimalNumberFormattingRules *local_130;
  FSharedReferencer<1> local_128;
  FICUCultureImplementation *local_120;
  undefined8 local_118;
  FSharedReferencer<1> local_110;
  undefined8 local_108;
  FSharedReferencer<1> local_100;
  TSharedRef<FDecimalNumberFormattingRules,1> local_f8;
  FDecimalNumberFormattingRules local_e8;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_168;
  pTVar1 = &this->UEPercentFormattingRules;
  if (pTVar1->Object != (FDecimalNumberFormattingRules *)0x0) {
    return pTVar1->Object;
  }
  pTVar7 = (TReferenceControllerBase<1> *)0x0;
  local_138.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  local_148[0] = U_ZERO_ERROR;
  pDVar4 = (DecimalFormat *)icu_64::NumberFormat::createPercentInstance(&this->ICULocale,local_148);
  pTVar5 = ::operator_new(0x18);
  local_110.ReferenceController = pTVar7;
  if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
    pTVar5->SharedReferenceCount = (atomic<int>)0x1;
    pTVar5->WeakReferenceCount = (atomic<int>)0x1;
    pTVar5->_padding_ =
         (longlong)
         &
         ___7__TReferenceControllerWithDeleter_VDecimalFormat_icu_64__U__DefaultDeleter_VDecimalFormat_icu_64___SharedPointerInternals___00_SharedPointerInternals__6B_
    ;
    pTVar5[1]._padding_ = (longlong)pDVar4;
    local_110.ReferenceController = pTVar5;
  }
  local_118 = 0;
  local_140 = pDVar4;
  SharedPointerInternals::FSharedReferencer<1>::operator=(&local_138,&local_110);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_110.ReferenceController);
  pDVar4 = local_140;
  if (local_140 == (DecimalFormat *)0x0) {
    local_120 = this;
    bVar3 = `FICUCultureImplementation::GetPercentFormattingRules'::__l7::<lambda_1>::operator()
                      (&local_120);
    if (!bVar3) {
      pLVar6 = ::`anonymous_namespace'::GetInvariantLocale();
      pDVar4 = (DecimalFormat *)icu_64::NumberFormat::createPercentInstance(pLVar6,local_148);
      pTVar5 = ::operator_new(0x18);
      if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
        pTVar5->SharedReferenceCount = (atomic<int>)0x1;
        pTVar5->WeakReferenceCount = (atomic<int>)0x1;
        pTVar5->_padding_ =
             (longlong)
             &
             ___7__TReferenceControllerWithDeleter_VDecimalFormat_icu_64__U__DefaultDeleter_VDecimalFormat_icu_64___SharedPointerInternals___00_SharedPointerInternals__6B_
        ;
        pTVar5[1]._padding_ = (longlong)pDVar4;
        pTVar7 = pTVar5;
      }
      local_108 = 0;
      local_140 = pDVar4;
      local_100.ReferenceController = pTVar7;
      SharedPointerInternals::FSharedReferencer<1>::operator=(&local_138,&local_100);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_100.ReferenceController);
      pDVar4 = local_140;
      if (local_140 != (DecimalFormat *)0x0) goto LAB_1416f99eb;
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("PercentFormatterForCulture",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Internationalization\\ICUCulture.cpp"
                         ,0x357,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pFVar8 = (FDecimalNumberFormattingRules *)(*pcVar2)();
        return pFVar8;
      }
    }
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x44d,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar8 = (FDecimalNumberFormattingRules *)(*pcVar2)();
      return pFVar8;
    }
  }
LAB_1416f99eb:
  ::`anonymous_namespace'::ExtractNumberFormattingRulesFromICUDecimalFormatter
            (&local_e8,&this->ICULocale,pDVar4);
  lpCriticalSection = &this->UEPercentFormattingRulesCS;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  if (pTVar1->Object == (FDecimalNumberFormattingRules *)0x0) {
    pTVar9 = MakeShared<FDecimalNumberFormattingRules,1,FDecimalNumberFormattingRules_const_&>
                       (&local_f8,&local_e8);
    local_128.ReferenceController = (pTVar9->SharedReferenceCount).ReferenceController;
    local_130 = pTVar9->Object;
    if (local_128.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_128.ReferenceController)->SharedReferenceCount =
           (atomic<int>)((int)(local_128.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    if (pTVar1 != (TSharedPtr<FDecimalNumberFormattingRules_const_,1> *)&local_130) {
      pTVar1->Object = local_130;
      local_130 = (FDecimalNumberFormattingRules *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                (&(this->UEPercentFormattingRules).SharedReferenceCount,&local_128);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_128.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_f8.SharedReferenceCount.ReferenceController);
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  if ((pTVar1->Object == (FDecimalNumberFormattingRules *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x44d,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    pFVar8 = (FDecimalNumberFormattingRules *)(*pcVar2)();
    return pFVar8;
  }
  pFVar8 = pTVar1->Object;
  if (local_e8.MinusString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_e8.MinusString.Data.AllocatorInstance.Data);
  }
  if (local_e8.PlusString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_e8.PlusString.Data.AllocatorInstance.Data);
  }
  if (local_e8.PositiveSuffixString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_e8.PositiveSuffixString.Data.AllocatorInstance.Data);
  }
  if (local_e8.PositivePrefixString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_e8.PositivePrefixString.Data.AllocatorInstance.Data);
  }
  if (local_e8.NegativeSuffixString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_e8.NegativeSuffixString.Data.AllocatorInstance.Data);
  }
  if (local_e8.NegativePrefixString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_e8.NegativePrefixString.Data.AllocatorInstance.Data);
  }
  if (local_e8.NaNString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_e8.NaNString.Data.AllocatorInstance.Data);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_138.ReferenceController);
  return pFVar8;
}

// GetPluralForm @ 1416fa0f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "UErrorCode": Some values do not have unique names */

ETextPluralForm __thiscall
FICUCultureImplementation::GetPluralForm
          (FICUCultureImplementation *this,int param_1,ETextPluralType param_2)

{
  code *pcVar1;
  bool bVar2;
  ETextPluralForm EVar3;
  longlong lVar4;
  undefined1 auStack_78 [32];
  UnicodeString local_58;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_78;
  if (param_1 < 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Val >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Internationalization\\ICUCulture.cpp"
                       ,0x3d1,L"GetPluralFormImpl requires a positive value");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      EVar3 = (*pcVar1)();
      return EVar3;
    }
  }
  lVar4 = 0x188;
  if (param_2 != Cardinal) {
    lVar4 = 400;
  }
  icu_64::PluralRules::select
            (*(PluralRules **)((this->ICULocale).language + lVar4 + -0x10),&local_58,param_1);
  EVar3 = ICUPluralFormToUE(&local_58);
  icu_64::UnicodeString::~UnicodeString(&local_58);
  return EVar3;
}

// GetPluralForm @ 1416fa1b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "UErrorCode": Some values do not have unique names */

ETextPluralForm __thiscall
FICUCultureImplementation::GetPluralForm
          (FICUCultureImplementation *this,double param_1,ETextPluralType param_2)

{
  code *pcVar1;
  bool bVar2;
  ETextPluralForm EVar3;
  longlong lVar4;
  undefined1 auStack_88 [32];
  UnicodeString local_68;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_88;
  if (0x7fffffffffffffff < (ulonglong)param_1) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("!FMath::IsNegativeOrNegativeZero(Val)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Internationalization\\ICUCulture.cpp"
                       ,0x3db,L"GetPluralFormImpl requires a positive value");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      EVar3 = (*pcVar1)();
      return EVar3;
    }
  }
  lVar4 = 0x188;
  if (param_2 != Cardinal) {
    lVar4 = 400;
  }
  icu_64::PluralRules::select
            (*(PluralRules **)((this->ICULocale).language + lVar4 + -0x10),&local_68,param_1);
  EVar3 = ICUPluralFormToUE(&local_68);
  icu_64::UnicodeString::~UnicodeString(&local_68);
  return EVar3;
}

// GetRegion @ 1416fb690

/* WARNING: Enum "UErrorCode": Some values do not have unique names */

FString * __thiscall
FICUCultureImplementation::GetRegion
          (FICUCultureImplementation *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,(this->ICULocale).country);
  return __return_storage_ptr__;
}

// GetScript @ 1416fb740

/* WARNING: Enum "UErrorCode": Some values do not have unique names */

FString * __thiscall
FICUCultureImplementation::GetScript
          (FICUCultureImplementation *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,(this->ICULocale).script);
  return __return_storage_ptr__;
}

// GetThreeLetterISOLanguageName @ 1416fbd20

/* WARNING: Enum "UErrorCode": Some values do not have unique names */

FString * __thiscall
FICUCultureImplementation::GetThreeLetterISOLanguageName
          (FICUCultureImplementation *this,FString *__return_storage_ptr__)

{
  char *pcVar1;
  
  pcVar1 = icu_64::Locale::getISO3Language(&this->ICULocale);
  ::FString::FString(__return_storage_ptr__,pcVar1);
  return __return_storage_ptr__;
}

// GetTimeFormatter @ 1416fbdb0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "UErrorCode": Some values do not have unique names */
/* WARNING: Enum "EStyle": Some values do not have unique names */

TSharedRef<icu_64::DateFormat_const_,1> * __thiscall
FICUCultureImplementation::GetTimeFormatter
          (FICUCultureImplementation *this,
          TSharedRef<icu_64::DateFormat_const_,1> *__return_storage_ptr__,Type param_1,
          FString *param_2)

{
  TSharedPtr<icu_64::DateFormat_const_,1> *pTVar1;
  TReferenceControllerBase<1> *pTVar2;
  code *pcVar3;
  FSharedReferencer<1> FVar4;
  FICUCultureImplementation *pFVar5;
  ForAnyElementType _Src;
  bool bVar6;
  char cVar7;
  bool bVar8;
  TSharedRef<icu_64::DecimalFormat_const_,1> *pTVar9;
  TSharedRef<icu_64::DateFormat_const_,1> *pTVar10;
  wchar16 *_Dst;
  longlong lVar11;
  DateFormat *pDVar12;
  Locale *pLVar13;
  TimeZone *pTVar14;
  EStyle EVar15;
  int iVar16;
  EStyle EVar17;
  undefined1 auStack_1f8 [32];
  UErrorCode local_1d8 [2];
  DateFormat *local_1d0;
  FSharedReferencer<1> local_1c8;
  FICUCultureImplementation *local_1c0;
  DateFormat *local_1b8;
  FSharedReferencer<1> local_1b0;
  FString local_1a8;
  FICUCultureImplementation *local_198;
  undefined8 local_190;
  FSharedReferencer<1> local_188;
  TSharedRef<icu_64::DateFormat_const_,1> local_180;
  TSharedRef<icu_64::DecimalFormat_const_,1> local_170;
  TSharedRef<icu_64::DecimalFormat_const_,1> local_160;
  UnicodeString local_148;
  UnicodeString local_108;
  UnicodeString local_c8;
  UnicodeString local_88;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_1f8;
  pTVar1 = &this->ICUTimeFormat;
  local_1c0 = this;
  if (pTVar1->Object == (DateFormat *)0x0) {
    pTVar9 = GetDateTimeDecimalFormat(this,&local_170);
    pTVar10 = ::`anonymous_namespace'::CreateTimeFormat(&local_180,&this->ICULocale,pTVar9->Object);
    local_1b0.ReferenceController = (pTVar10->SharedReferenceCount).ReferenceController;
    local_1b8 = pTVar10->Object;
    if (local_1b0.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_1b0.ReferenceController)->SharedReferenceCount =
           (atomic<int>)((int)(local_1b0.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    if (pTVar1 != (TSharedPtr<icu_64::DateFormat_const_,1> *)&local_1b8) {
      pTVar1->Object = local_1b8;
      local_1b8 = (DateFormat *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                (&(this->ICUTimeFormat).SharedReferenceCount,&local_1b0);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_1b0.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_180.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_170.SharedReferenceCount.ReferenceController);
  }
  InternationalizationUtilities::SanitizeTimezoneCode(&local_1a8,param_2);
  _Src.Data = local_1a8.Data.AllocatorInstance.Data;
  local_c8._padding_ = (longlong)icu_64::UnicodeString::vftable;
  EVar17 = DEFAULT;
  local_c8.fUnion.fStackFields.fLengthAndFlags = 2;
  iVar16 = local_1a8.Data.ArrayNum + -1;
  if (local_1a8.Data.ArrayNum == 0) {
    iVar16 = 0;
  }
  if (0 < iVar16) {
    _Dst = icu_64::UnicodeString::getBuffer(&local_c8,iVar16 + 1);
    memcpy(_Dst,_Src.Data,(longlong)iVar16 * 2);
    icu_64::UnicodeString::releaseBuffer(&local_c8,iVar16);
  }
  if ((pTVar1->Object == (DateFormat *)0x0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x408,L""), bVar6)) {
    pcVar3 = (code *)swi(3);
    pTVar10 = (TSharedRef<icu_64::DateFormat_const_,1> *)(*pcVar3)();
    return pTVar10;
  }
  pTVar2 = (this->ICUTimeFormat).SharedReferenceCount.ReferenceController;
  pDVar12 = pTVar1->Object;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  if ((pDVar12 == (DateFormat *)0x0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x25d,L""), bVar6)) {
    pcVar3 = (code *)swi(3);
    pTVar10 = (TSharedRef<icu_64::DateFormat_const_,1> *)(*pcVar3)();
    return pTVar10;
  }
  bVar6 = local_1a8.Data.ArrayNum < 2;
  if (1 < local_1a8.Data.ArrayNum) {
    local_1d8[0] = U_ZERO_ERROR;
    local_108._padding_ = (longlong)icu_64::UnicodeString::vftable;
    local_108.fUnion.fStackFields.fLengthAndFlags = 2;
    icu_64::TimeZone::getCanonicalID(&local_c8,&local_108,local_1d8);
    local_88._padding_ = (longlong)icu_64::UnicodeString::vftable;
    local_88.fUnion.fStackFields.fLengthAndFlags = 2;
    lVar11 = (**(code **)(pDVar12->_padding_ + 0xa8))(pDVar12);
    icu_64::UnicodeString::operator=(&local_88,(UnicodeString *)(lVar11 + 8));
    local_148._padding_ = (longlong)icu_64::UnicodeString::vftable;
    local_148.fUnion.fStackFields.fLengthAndFlags = 2;
    icu_64::TimeZone::getCanonicalID(&local_88,&local_148,local_1d8);
    if ((local_108.fUnion.fStackFields.fLengthAndFlags & 1U) == 0) {
      if (local_108.fUnion.fStackFields.fLengthAndFlags >> 7 == 0) {
        local_108.fUnion.fFields.fLength = (int)local_108.fUnion.fStackFields.fLengthAndFlags >> 5;
      }
      if (local_148.fUnion.fStackFields.fLengthAndFlags >> 7 == 0) {
        local_148.fUnion.fFields.fLength = (int)local_148.fUnion.fStackFields.fLengthAndFlags >> 5;
      }
      if (((((int)local_148.fUnion.fStackFields.fLengthAndFlags & 1U) == 0) &&
          (local_108.fUnion.fFields.fLength == local_148.fUnion.fFields.fLength)) &&
         (cVar7 = icu_64::UnicodeString::doEquals
                            (&local_108,&local_148,local_108.fUnion.fFields.fLength), cVar7 != '\0')
         ) {
        bVar6 = true;
      }
      else {
        bVar6 = false;
      }
    }
    else {
      bVar6 = (bool)(local_148.fUnion.fStackFields.fLengthAndFlags._0_1_ & 1);
    }
    icu_64::UnicodeString::~UnicodeString(&local_148);
    icu_64::UnicodeString::~UnicodeString(&local_88);
    icu_64::UnicodeString::~UnicodeString(&local_108);
  }
  pFVar5 = local_1c0;
  if (param_1 == Default) {
    if (bVar6 != false) {
      __return_storage_ptr__->Object = pDVar12;
      (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar2;
      if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
        UNLOCK();
      }
      goto LAB_1416fc2f2;
    }
LAB_1416fc082:
    EVar15 = DEFAULT;
  }
  else {
    if (param_1 == Default) goto LAB_1416fc082;
    if (param_1 == Short) {
      EVar15 = SHORT;
    }
    else {
      if (param_1 == Medium) goto LAB_1416fc082;
      if (param_1 == Long) {
        EVar15 = LONG;
      }
      else {
        if (param_1 != Full) goto LAB_1416fc082;
        EVar15 = FULL;
      }
    }
  }
  pDVar12 = icu_64::DateFormat::createTimeInstance(EVar15,&local_1c0->ICULocale);
  local_1d0 = pDVar12;
  local_1c8.ReferenceController = ::operator_new(0x18);
  if (local_1c8.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    (local_1c8.ReferenceController)->SharedReferenceCount = (atomic<int>)0x1;
    (local_1c8.ReferenceController)->WeakReferenceCount = (atomic<int>)0x1;
    (local_1c8.ReferenceController)->_padding_ =
         (longlong)
         &
         ___7__TReferenceControllerWithDeleter_VDateFormat_icu_64__U__DefaultDeleter_VDateFormat_icu_64___SharedPointerInternals___00_SharedPointerInternals__6B_
    ;
    local_1c8.ReferenceController[1]._padding_ = (longlong)pDVar12;
  }
  if (pDVar12 == (DateFormat *)0x0) {
    local_198 = pFVar5;
    bVar8 = `FICUCultureImplementation::GetTimeFormatter'::__l14::<lambda_1>::operator()(&local_198)
    ;
    if (!bVar8) {
      pLVar13 = ::`anonymous_namespace'::GetInvariantLocale();
      if (param_1 != Default) {
        if (param_1 == Short) {
          EVar17 = SHORT;
        }
        else if (param_1 != Medium) {
          if (param_1 == Long) {
            EVar17 = LONG;
          }
          else if (param_1 == Full) {
            EVar17 = FULL;
          }
        }
      }
      pDVar12 = icu_64::DateFormat::createTimeInstance(EVar17,pLVar13);
      local_188.ReferenceController = ::operator_new(0x18);
      if (local_188.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        (local_188.ReferenceController)->SharedReferenceCount = (atomic<int>)0x1;
        (local_188.ReferenceController)->_padding_ =
             (longlong)
             &
             ___7__TReferenceControllerWithDeleter_VDateFormat_icu_64__U__DefaultDeleter_VDateFormat_icu_64___SharedPointerInternals___00_SharedPointerInternals__6B_
        ;
        (local_188.ReferenceController)->WeakReferenceCount = (atomic<int>)0x1;
        local_188.ReferenceController[1]._padding_ = (longlong)pDVar12;
      }
      local_190 = 0;
      local_1d0 = pDVar12;
      SharedPointerInternals::FSharedReferencer<1>::operator=(&local_1c8,&local_188);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_188.ReferenceController);
      pDVar12 = local_1d0;
      if (local_1d0 != (DateFormat *)0x0) goto LAB_1416fc1e5;
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("Formatter",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Internationalization\\ICUCulture.cpp"
                         ,0x233,L"");
      if (bVar8) {
        pcVar3 = (code *)swi(3);
        pTVar10 = (TSharedRef<icu_64::DateFormat_const_,1> *)(*pcVar3)();
        return pTVar10;
      }
    }
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar8) {
      pcVar3 = (code *)swi(3);
      pTVar10 = (TSharedRef<icu_64::DateFormat_const_,1> *)(*pcVar3)();
      return pTVar10;
    }
  }
LAB_1416fc1e5:
  pcVar3 = *(code **)(pDVar12->_padding_ + 0xb0);
  if (bVar6 == false) {
    pTVar14 = icu_64::TimeZone::createTimeZone(&local_c8);
  }
  else {
    pTVar14 = icu_64::TimeZone::createDefault();
  }
  (*pcVar3)(pDVar12,pTVar14);
  if ((pDVar12 == (DateFormat *)0x0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar6)) {
    pcVar3 = (code *)swi(3);
    pTVar10 = (TSharedRef<icu_64::DateFormat_const_,1> *)(*pcVar3)();
    return pTVar10;
  }
  pcVar3 = *(code **)(pDVar12->_padding_ + 0xa0);
  pTVar9 = GetDateTimeDecimalFormat(local_1c0,&local_160);
  (*pcVar3)(pDVar12,pTVar9->Object);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_160.SharedReferenceCount.ReferenceController);
  if ((pDVar12 == (DateFormat *)0x0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x408,L""), bVar6)) {
    pcVar3 = (code *)swi(3);
    pTVar10 = (TSharedRef<icu_64::DateFormat_const_,1> *)(*pcVar3)();
    return pTVar10;
  }
  FVar4.ReferenceController = local_1c8.ReferenceController;
  if (local_1c8.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_1c8.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(local_1c8.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  if ((pDVar12 == (DateFormat *)0x0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x25d,L""), bVar6)) {
    pcVar3 = (code *)swi(3);
    pTVar10 = (TSharedRef<icu_64::DateFormat_const_,1> *)(*pcVar3)();
    return pTVar10;
  }
  __return_storage_ptr__->Object = pDVar12;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = FVar4.ReferenceController;
  if (FVar4.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (FVar4.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(FVar4.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar4.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1c8.ReferenceController);
LAB_1416fc2f2:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  icu_64::UnicodeString::~UnicodeString(&local_c8);
  if (local_1a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1a8.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// GetTwoLetterISOLanguageName @ 1416fc610

/* WARNING: Enum "UErrorCode": Some values do not have unique names */

FString * __thiscall
FICUCultureImplementation::GetTwoLetterISOLanguageName
          (FICUCultureImplementation *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,(this->ICULocale).language);
  return __return_storage_ptr__;
}

// GetUnrealLegacyThreeLetterISOLanguageName @ 1416fc810

/* WARNING: Enum "UErrorCode": Some values do not have unique names */

FString * __thiscall
FICUCultureImplementation::GetUnrealLegacyThreeLetterISOLanguageName
          (FICUCultureImplementation *this,FString *__return_storage_ptr__)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  char *pcVar3;
  FString *pFVar4;
  wchar_t *pwVar5;
  FString local_18;
  
  pcVar3 = icu_64::Locale::getISO3Language(&this->ICULocale);
  ::FString::FString(__return_storage_ptr__,pcVar3);
  if ((__return_storage_ptr__->Data).ArrayNum == 0) {
    pwVar5 = L"";
  }
  else {
    pwVar5 = (wchar_t *)(__return_storage_ptr__->Data).AllocatorInstance.Data;
  }
  iVar2 = FGenericPlatformStricmp::Stricmp(pwVar5,L"eng");
  if (iVar2 == 0) {
    ::FString::operator=(__return_storage_ptr__,L"INT");
    return __return_storage_ptr__;
  }
  pFVar4 = ::FString::ToUpper(__return_storage_ptr__,&local_18);
  if (__return_storage_ptr__ != pFVar4) {
    pFVar1 = (__return_storage_ptr__->Data).AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    (__return_storage_ptr__->Data).AllocatorInstance.Data = (pFVar4->Data).AllocatorInstance.Data;
    (pFVar4->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (__return_storage_ptr__->Data).ArrayNum = (pFVar4->Data).ArrayNum;
    (__return_storage_ptr__->Data).ArrayMax = (pFVar4->Data).ArrayMax;
    (pFVar4->Data).ArrayNum = 0;
    (pFVar4->Data).ArrayMax = 0;
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// GetValidPluralForms @ 1416fc950

/* WARNING: Enum "UErrorCode": Some values do not have unique names */

TArray<ETextPluralForm,TSizedDefaultAllocator<32>_> * __thiscall
FICUCultureImplementation::GetValidPluralForms
          (FICUCultureImplementation *this,ETextPluralType param_1)

{
  longlong lVar1;
  
  lVar1 = 0x198;
  if (param_1 != Cardinal) {
    lVar1 = 0x1a8;
  }
  return (TArray<ETextPluralForm,TSizedDefaultAllocator<32>_> *)
         ((this->ICULocale).language + lVar1 + -0x10);
}

// GetVariant @ 1416fc9b0

/* WARNING: Enum "UErrorCode": Some values do not have unique names */

FString * __thiscall
FICUCultureImplementation::GetVariant
          (FICUCultureImplementation *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     (this->ICULocale).baseName + (this->ICULocale).variantBegin);
  return __return_storage_ptr__;
}

// IsRightToLeft @ 141702950

/* WARNING: Enum "UErrorCode": Some values do not have unique names */

bool __thiscall FICUCultureImplementation::IsRightToLeft(FICUCultureImplementation *this)

{
  char cVar1;
  
  cVar1 = icu_64::Locale::isRightToLeft(&this->ICULocale);
  return cVar1 != '\0';
}

// operator() @ 15047aa90

bool __thiscall
`FICUCultureImplementation::FICUCultureImplementation'::__l7::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(true,&bGEnsureHasExecuted<_6085170254076444464>);
  if ((bVar2) &&
     (bVar2 = UE::Assert::Private::EnsureFailed
                        (&bGEnsureHasExecuted<_6085170254076444464>,&::ENSURE_Static), bVar2)) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  return false;
}

// operator() @ 15047aaf0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
`FICUCultureImplementation::GetDateTimeDecimalFormat'::__l7::<lambda_1>::operator()(void *this)

{
  char *_Str;
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  size_t sVar4;
  bool bVar5;
  undefined1 auStack_168 [32];
  undefined4 local_148;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_168;
  bVar5 = false;
  local_148 = 0;
  bVar2 = UE::Assert::Private::CheckEnsureFailed(true,&bGEnsureHasExecuted<_6085170254076444244>);
  if (bVar2) {
    _Str = *(char **)(*(longlong *)this + 0x30);
    local_138._padding_ = 0;
    if (_Str == (char *)0x0) {
      local_138.Ptr = (wchar_t *)0x0;
      local_138.StringLength = 0;
    }
    else {
      sVar4 = strlen(_Str);
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init(&local_138,_Str,(int)sVar4,Yes);
    }
    bVar5 = true;
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_6085170254076444244>,&::ENSURE_Static);
    if (bVar2) {
      bVar2 = true;
      goto LAB_15047ab9c;
    }
  }
  bVar2 = false;
LAB_15047ab9c:
  if ((bVar5) && ((void *)local_138._padding_ != (void *)0x0)) {
    FMemory::Free((void *)local_138._padding_);
  }
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  return false;
}

// operator() @ 15047abf0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
`FICUCultureImplementation::GetDecimalNumberFormattingRules'::__l7::<lambda_1>::operator()
          (void *this)

{
  char *_Str;
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  size_t sVar4;
  bool bVar5;
  undefined1 auStack_168 [32];
  undefined4 local_148;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_168;
  bVar5 = false;
  local_148 = 0;
  bVar2 = UE::Assert::Private::CheckEnsureFailed(true,&bGEnsureHasExecuted<_6085170254076443854>);
  if (bVar2) {
    _Str = *(char **)(*(longlong *)this + 0x30);
    local_138._padding_ = 0;
    if (_Str == (char *)0x0) {
      local_138.Ptr = (wchar_t *)0x0;
      local_138.StringLength = 0;
    }
    else {
      sVar4 = strlen(_Str);
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init(&local_138,_Str,(int)sVar4,Yes);
    }
    bVar5 = true;
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_6085170254076443854>,&::ENSURE_Static);
    if (bVar2) {
      bVar2 = true;
      goto LAB_15047ac9c;
    }
  }
  bVar2 = false;
LAB_15047ac9c:
  if ((bVar5) && ((void *)local_138._padding_ != (void *)0x0)) {
    FMemory::Free((void *)local_138._padding_);
  }
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  return false;
}

// operator() @ 15047acf0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
`FICUCultureImplementation::GetPercentFormattingRules'::__l7::<lambda_1>::operator()(void *this)

{
  char *_Str;
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  size_t sVar4;
  bool bVar5;
  undefined1 auStack_168 [32];
  undefined4 local_148;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_168;
  bVar5 = false;
  local_148 = 0;
  bVar2 = UE::Assert::Private::CheckEnsureFailed(true,&bGEnsureHasExecuted<_6085170254076443820>);
  if (bVar2) {
    _Str = *(char **)(*(longlong *)this + 0x30);
    local_138._padding_ = 0;
    if (_Str == (char *)0x0) {
      local_138.Ptr = (wchar_t *)0x0;
      local_138.StringLength = 0;
    }
    else {
      sVar4 = strlen(_Str);
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init(&local_138,_Str,(int)sVar4,Yes);
    }
    bVar5 = true;
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_6085170254076443820>,&::ENSURE_Static);
    if (bVar2) {
      bVar2 = true;
      goto LAB_15047ad9c;
    }
  }
  bVar2 = false;
LAB_15047ad9c:
  if ((bVar5) && ((void *)local_138._padding_ != (void *)0x0)) {
    FMemory::Free((void *)local_138._padding_);
  }
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  return false;
}

// operator() @ 15047af90

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
`FICUCultureImplementation::GetDateFormatter'::__l14::<lambda_1>::operator()(void *this)

{
  char *_Str;
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  size_t sVar4;
  bool bVar5;
  undefined1 auStack_168 [32];
  undefined4 local_148;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_168;
  bVar5 = false;
  local_148 = 0;
  bVar2 = UE::Assert::Private::CheckEnsureFailed(true,&bGEnsureHasExecuted<_6085170254076444164>);
  if (bVar2) {
    _Str = *(char **)(*(longlong *)this + 0x30);
    local_138._padding_ = 0;
    if (_Str == (char *)0x0) {
      local_138.Ptr = (wchar_t *)0x0;
      local_138.StringLength = 0;
    }
    else {
      sVar4 = strlen(_Str);
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init(&local_138,_Str,(int)sVar4,Yes);
    }
    bVar5 = true;
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_6085170254076444164>,&::ENSURE_Static);
    if (bVar2) {
      bVar2 = true;
      goto LAB_15047b03c;
    }
  }
  bVar2 = false;
LAB_15047b03c:
  if ((bVar5) && ((void *)local_138._padding_ != (void *)0x0)) {
    FMemory::Free((void *)local_138._padding_);
  }
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  return false;
}

// operator() @ 15047b090

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
`FICUCultureImplementation::GetDateTimeFormatter'::__l14::<lambda_1>::operator()(void *this)

{
  char *_Str;
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  size_t sVar4;
  bool bVar5;
  undefined1 auStack_168 [32];
  undefined4 local_148;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_168;
  bVar5 = false;
  local_148 = 0;
  bVar2 = UE::Assert::Private::CheckEnsureFailed(true,&bGEnsureHasExecuted<_6085170254076444058>);
  if (bVar2) {
    _Str = *(char **)(*(longlong *)this + 0x30);
    local_138._padding_ = 0;
    if (_Str == (char *)0x0) {
      local_138.Ptr = (wchar_t *)0x0;
      local_138.StringLength = 0;
    }
    else {
      sVar4 = strlen(_Str);
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init(&local_138,_Str,(int)sVar4,Yes);
    }
    bVar5 = true;
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_6085170254076444058>,&::ENSURE_Static);
    if (bVar2) {
      bVar2 = true;
      goto LAB_15047b13c;
    }
  }
  bVar2 = false;
LAB_15047b13c:
  if ((bVar5) && ((void *)local_138._padding_ != (void *)0x0)) {
    FMemory::Free((void *)local_138._padding_);
  }
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  return false;
}

// operator() @ 15047b190

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
`FICUCultureImplementation::GetTimeFormatter'::__l14::<lambda_1>::operator()(void *this)

{
  char *_Str;
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  size_t sVar4;
  bool bVar5;
  undefined1 auStack_168 [32];
  undefined4 local_148;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_168;
  bVar5 = false;
  local_148 = 0;
  bVar2 = UE::Assert::Private::CheckEnsureFailed(true,&bGEnsureHasExecuted<_6085170254076444112>);
  if (bVar2) {
    _Str = *(char **)(*(longlong *)this + 0x30);
    local_138._padding_ = 0;
    if (_Str == (char *)0x0) {
      local_138.Ptr = (wchar_t *)0x0;
      local_138.StringLength = 0;
    }
    else {
      sVar4 = strlen(_Str);
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init(&local_138,_Str,(int)sVar4,Yes);
    }
    bVar5 = true;
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_6085170254076444112>,&::ENSURE_Static);
    if (bVar2) {
      bVar2 = true;
      goto LAB_15047b23c;
    }
  }
  bVar2 = false;
LAB_15047b23c:
  if ((bVar5) && ((void *)local_138._padding_ != (void *)0x0)) {
    FMemory::Free((void *)local_138._padding_);
  }
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  return false;
}

// operator() @ 15047b290

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
`FICUCultureImplementation::GetCurrencyFormattingRules'::__l15::<lambda_1>::operator()(void *this)

{
  char *_Str;
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  size_t sVar4;
  bool bVar5;
  undefined1 auStack_168 [32];
  undefined4 local_148;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_168;
  bVar5 = false;
  local_148 = 0;
  bVar2 = UE::Assert::Private::CheckEnsureFailed(true,&bGEnsureHasExecuted<_6085170254076443770>);
  if (bVar2) {
    _Str = *(char **)(*(longlong *)this + 0x30);
    local_138._padding_ = 0;
    if (_Str == (char *)0x0) {
      local_138.Ptr = (wchar_t *)0x0;
      local_138.StringLength = 0;
    }
    else {
      sVar4 = strlen(_Str);
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init(&local_138,_Str,(int)sVar4,Yes);
    }
    bVar5 = true;
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_6085170254076443770>,&::ENSURE_Static);
    if (bVar2) {
      bVar2 = true;
      goto LAB_15047b33c;
    }
  }
  bVar2 = false;
LAB_15047b33c:
  if ((bVar5) && ((void *)local_138._padding_ != (void *)0x0)) {
    FMemory::Free((void *)local_138._padding_);
  }
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  return false;
}

// operator() @ 15047b610

bool __thiscall
`FICUCultureImplementation::FICUCultureImplementation'::__l18::<lambda_2>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(true,&bGEnsureHasExecuted<_6085170254076444454>);
  if ((bVar2) &&
     (bVar2 = UE::Assert::Private::EnsureFailed
                        (&bGEnsureHasExecuted<_6085170254076444454>,&::ENSURE_Static), bVar2)) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  return false;
}

