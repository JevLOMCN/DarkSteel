// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 42

// FCulture @ 1416d42e0

/* WARNING: Enum "UErrorCode": Some values do not have unique names */

FCulture * __thiscall
FCulture::FCulture(FCulture *this,
                  TUniquePtr<FICUCultureImplementation,TDefaultDelete<FICUCultureImplementation>_>
                  *param_1)

{
  FICUCultureImplementation *pFVar1;
  bool bVar2;
  TArray<FString,TSizedDefaultAllocator<32>_> local_18;
  
  (this->Implementation).Ptr = param_1->Ptr;
  param_1->Ptr = (FICUCultureImplementation *)0x0;
  (this->CachedDisplayName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CachedDisplayName).Data.ArrayNum = 0;
  (this->CachedDisplayName).Data.ArrayMax = 0;
  (this->CachedEnglishName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CachedEnglishName).Data.ArrayNum = 0;
  (this->CachedEnglishName).Data.ArrayMax = 0;
  pFVar1 = (this->Implementation).Ptr;
  (**(code **)(pFVar1->_padding_ + 0x28))(pFVar1,&this->CachedName);
  ::FString::FString(&this->CachedVerseIdentifier,&this->CachedName);
  ::FString::ReplaceCharInlineCaseSensitive(&this->CachedVerseIdentifier,L'-',L'_');
  (this->CachedNativeName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CachedNativeName).Data.ArrayNum = 0;
  (this->CachedNativeName).Data.ArrayMax = 0;
  pFVar1 = (this->Implementation).Ptr;
  (**(code **)(pFVar1->_padding_ + 0x38))
            (pFVar1,&this->CachedUnrealLegacyThreeLetterISOLanguageName);
  pFVar1 = (this->Implementation).Ptr;
  (**(code **)(pFVar1->_padding_ + 0x40))(pFVar1,&this->CachedThreeLetterISOLanguageName);
  pFVar1 = (this->Implementation).Ptr;
  (**(code **)(pFVar1->_padding_ + 0x48))(pFVar1,&this->CachedTwoLetterISOLanguageName);
  (this->CachedNativeLanguage).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CachedNativeLanguage).Data.ArrayNum = 0;
  (this->CachedNativeLanguage).Data.ArrayMax = 0;
  pFVar1 = (this->Implementation).Ptr;
  (**(code **)(pFVar1->_padding_ + 0x60))(pFVar1,&this->CachedRegion);
  (this->CachedNativeRegion).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CachedNativeRegion).Data.ArrayNum = 0;
  (this->CachedNativeRegion).Data.ArrayMax = 0;
  pFVar1 = (this->Implementation).Ptr;
  (**(code **)(pFVar1->_padding_ + 0x68))(pFVar1,&this->CachedScript);
  pFVar1 = (this->Implementation).Ptr;
  (**(code **)(pFVar1->_padding_ + 0x70))(pFVar1,&this->CachedVariant);
  bVar2 = (bool)(**(code **)(((this->Implementation).Ptr)->_padding_ + 0x78))();
  local_18.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this->CachedIsRightToLeft = bVar2;
  local_18.ArrayNum = 0;
  local_18.ArrayMax = 0;
  RefreshCultureDisplayNames(this,&local_18,true);
  DestructItems<FString,int>((FString *)0x0,0);
  return this;
}

// ~FCulture @ 1416d83f0

/* WARNING: Enum "UErrorCode": Some values do not have unique names */

void __thiscall FCulture::~FCulture(FCulture *this)

{
  FScriptContainerElement *pFVar1;
  FICUCultureImplementation *pFVar2;
  
  pFVar1 = (this->CachedVariant).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->CachedScript).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->CachedNativeRegion).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->CachedRegion).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->CachedNativeLanguage).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->CachedTwoLetterISOLanguageName).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->CachedThreeLetterISOLanguageName).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->CachedUnrealLegacyThreeLetterISOLanguageName).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->CachedNativeName).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->CachedVerseIdentifier).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->CachedName).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->CachedEnglishName).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->CachedDisplayName).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar2 = (this->Implementation).Ptr;
  if (pFVar2 != (FICUCultureImplementation *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001416d84d3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)pFVar2->_padding_)(pFVar2,1);
    return;
  }
  return;
}

// Create @ 1416e6a30

/* WARNING: Enum "UErrorCode": Some values do not have unique names */

TSharedRef<FCulture,1> * __cdecl
FCulture::Create(TSharedRef<FCulture,1> *__return_storage_ptr__,
                TUniquePtr<FICUCultureImplementation,TDefaultDelete<FICUCultureImplementation>_>
                *param_1)

{
  FICUCultureImplementation *pFVar1;
  code *pcVar2;
  bool bVar3;
  TSharedRef<FCulture,1> *pTVar4;
  FCulture *this;
  TRawPtrProxy<FCulture> local_res8;
  TArray<FString,TSizedDefaultAllocator<32>_> local_28;
  
  if ((param_1->Ptr == (FICUCultureImplementation *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("InImplementation.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Internationalization\\Culture.cpp"
                         ,0x5b,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    pTVar4 = (TSharedRef<FCulture,1> *)(*pcVar2)();
    return pTVar4;
  }
  this = ::operator_new(0xe0);
  local_res8.Object = (FCulture *)0x0;
  if (this != (FCulture *)0x0) {
    (this->Implementation).Ptr = param_1->Ptr;
    param_1->Ptr = (FICUCultureImplementation *)0x0;
    (this->CachedDisplayName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (this->CachedDisplayName).Data.ArrayNum = 0;
    (this->CachedDisplayName).Data.ArrayMax = 0;
    (this->CachedEnglishName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (this->CachedEnglishName).Data.ArrayNum = 0;
    (this->CachedEnglishName).Data.ArrayMax = 0;
    pFVar1 = (this->Implementation).Ptr;
    (**(code **)(pFVar1->_padding_ + 0x28))(pFVar1,&this->CachedName);
    ::FString::FString(&this->CachedVerseIdentifier,&this->CachedName);
    ::FString::ReplaceCharInlineCaseSensitive(&this->CachedVerseIdentifier,L'-',L'_');
    (this->CachedNativeName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (this->CachedNativeName).Data.ArrayNum = 0;
    (this->CachedNativeName).Data.ArrayMax = 0;
    pFVar1 = (this->Implementation).Ptr;
    (**(code **)(pFVar1->_padding_ + 0x38))
              (pFVar1,&this->CachedUnrealLegacyThreeLetterISOLanguageName);
    pFVar1 = (this->Implementation).Ptr;
    (**(code **)(pFVar1->_padding_ + 0x40))(pFVar1,&this->CachedThreeLetterISOLanguageName);
    pFVar1 = (this->Implementation).Ptr;
    (**(code **)(pFVar1->_padding_ + 0x48))(pFVar1,&this->CachedTwoLetterISOLanguageName);
    (this->CachedNativeLanguage).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (this->CachedNativeLanguage).Data.ArrayNum = 0;
    (this->CachedNativeLanguage).Data.ArrayMax = 0;
    pFVar1 = (this->Implementation).Ptr;
    (**(code **)(pFVar1->_padding_ + 0x60))(pFVar1,&this->CachedRegion);
    (this->CachedNativeRegion).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (this->CachedNativeRegion).Data.ArrayNum = 0;
    (this->CachedNativeRegion).Data.ArrayMax = 0;
    pFVar1 = (this->Implementation).Ptr;
    (**(code **)(pFVar1->_padding_ + 0x68))(pFVar1,&this->CachedScript);
    pFVar1 = (this->Implementation).Ptr;
    (**(code **)(pFVar1->_padding_ + 0x70))(pFVar1,&this->CachedVariant);
    bVar3 = (bool)(**(code **)(((this->Implementation).Ptr)->_padding_ + 0x78))();
    local_28.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    this->CachedIsRightToLeft = bVar3;
    local_28.ArrayNum = 0;
    local_28.ArrayMax = 0;
    RefreshCultureDisplayNames(this,&local_28,true);
    DestructItems<FString,int>((FString *)0x0,0);
    local_res8.Object = this;
  }
  TSharedRef<FCulture,1>::TSharedRef<FCulture,1><FCulture>(__return_storage_ptr__,&local_res8);
  return __return_storage_ptr__;
}

// CreateCultureName @ 1416e7800

FString * __cdecl
FCulture::CreateCultureName
          (FString *__return_storage_ptr__,FString *param_1,FString *param_2,FString *param_3)

{
  int iVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  int iVar4;
  FString local_28;
  
  iVar1 = (param_2->Data).ArrayNum;
  if ((iVar1 < 2) || (iVar4 = (param_3->Data).ArrayNum, iVar4 < 2)) {
    iVar4 = (param_3->Data).ArrayNum;
    if (iVar4 < 2) {
      if (iVar1 < 2) {
        ::FString::FString(__return_storage_ptr__,param_1);
        return __return_storage_ptr__;
      }
      iVar4 = (param_1->Data).ArrayNum;
      local_28.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_28.Data.ArrayNum = 0;
      local_28.Data.ArrayMax = 0;
      iVar2 = iVar4 + -1 + iVar1 + -1;
      if (iVar4 == 0) {
        iVar2 = iVar1 + -1;
      }
      ::FString::Reserve(&local_28,iVar2 + 1);
      iVar1 = (param_1->Data).ArrayNum;
      iVar4 = iVar1 + -1;
      if (iVar1 == 0) {
        iVar4 = 0;
      }
      ::FString::AppendChars(&local_28,(wchar_t *)(param_1->Data).AllocatorInstance.Data,iVar4);
      ::FString::AppendChar(&local_28,L'-');
      iVar1 = (param_2->Data).ArrayNum;
      pFVar3 = (param_2->Data).AllocatorInstance.Data;
      goto LAB_1416e78c8;
    }
    iVar1 = (param_1->Data).ArrayNum;
    local_28.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_28.Data.ArrayNum = 0;
    local_28.Data.ArrayMax = 0;
    iVar2 = iVar4 + -1 + iVar1;
    if (iVar1 == 0) {
      iVar2 = iVar4;
    }
    ::FString::Reserve(&local_28,iVar2);
    iVar1 = (param_1->Data).ArrayNum;
    pFVar3 = (param_1->Data).AllocatorInstance.Data;
  }
  else {
    iVar2 = (param_1->Data).ArrayNum;
    iVar1 = iVar1 + iVar4 + -2;
    local_28.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_28.Data.ArrayNum = 0;
    local_28.Data.ArrayMax = 0;
    iVar4 = iVar2 + -1 + iVar1;
    if (iVar2 == 0) {
      iVar4 = iVar1;
    }
    ::FString::Reserve(&local_28,iVar4 + 2);
    iVar4 = (param_1->Data).ArrayNum;
    iVar1 = iVar4 + -1;
    if (iVar4 == 0) {
      iVar1 = 0;
    }
    ::FString::AppendChars(&local_28,(wchar_t *)(param_1->Data).AllocatorInstance.Data,iVar1);
    ::FString::AppendChar(&local_28,L'-');
    iVar1 = (param_2->Data).ArrayNum;
    pFVar3 = (param_2->Data).AllocatorInstance.Data;
  }
  iVar4 = iVar1 + -1;
  if (iVar1 == 0) {
    iVar4 = 0;
  }
  ::FString::AppendChars(&local_28,(wchar_t *)pFVar3,iVar4);
  ::FString::AppendChar(&local_28,L'-');
  iVar1 = (param_3->Data).ArrayNum;
  pFVar3 = (param_3->Data).AllocatorInstance.Data;
LAB_1416e78c8:
  iVar4 = iVar1 + -1;
  if (iVar1 == 0) {
    iVar4 = 0;
  }
  ::FString::AppendChars(&local_28,(wchar_t *)pFVar3,iVar4);
  (__return_storage_ptr__->Data).AllocatorInstance.Data = local_28.Data.AllocatorInstance.Data;
  (__return_storage_ptr__->Data).ArrayNum = local_28.Data.ArrayNum;
  (__return_storage_ptr__->Data).ArrayMax = local_28.Data.ArrayMax;
  return __return_storage_ptr__;
}

// CultureNameFromVerseIdentifier @ 1416e9b60

FString * __cdecl
FCulture::CultureNameFromVerseIdentifier(FString *__return_storage_ptr__,FString *param_1)

{
  ::FString::FString(__return_storage_ptr__,param_1);
  ::FString::ReplaceCharInlineCaseSensitive(__return_storage_ptr__,L'_',L'-');
  return __return_storage_ptr__;
}

// CultureNameToVerseIdentifier @ 1416e9b90

FString * __cdecl
FCulture::CultureNameToVerseIdentifier(FString *__return_storage_ptr__,FString *param_1)

{
  ::FString::FString(__return_storage_ptr__,param_1);
  ::FString::ReplaceCharInlineCaseSensitive(__return_storage_ptr__,L'-',L'_');
  return __return_storage_ptr__;
}

// GetCanonicalName @ 1416f45b0

/* WARNING: Enum "UErrorCode": Some values do not have unique names */

FString * __cdecl FCulture::GetCanonicalName(FString *__return_storage_ptr__,FString *param_1)

{
  FInternationalization *pFVar1;
  FString local_18;
  
  pFVar1 = FInternationalization::Get();
  ::FString::FString(&local_18,L"en-US-POSIX");
  InternationalizationUtilities::GetCanonicalCultureName
            (__return_storage_ptr__,param_1,&local_18,pFVar1);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// GetCurrencyFormattingRules @ 1416f52b0

/* WARNING: Enum "UErrorCode": Some values do not have unique names */

FDecimalNumberFormattingRules * __thiscall
FCulture::GetCurrencyFormattingRules(FCulture *this,FString *param_1)

{
  FDecimalNumberFormattingRules *pFVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001416f52b6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pFVar1 = (FDecimalNumberFormattingRules *)
           (**(code **)(((this->Implementation).Ptr)->_padding_ + 0x90))();
  return pFVar1;
}

// GetDecimalNumberFormattingRules @ 1416f79d0

/* WARNING: Enum "UErrorCode": Some values do not have unique names */

FDecimalNumberFormattingRules * __thiscall FCulture::GetDecimalNumberFormattingRules(FCulture *this)

{
  FDecimalNumberFormattingRules *pFVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001416f79d6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pFVar1 = (FDecimalNumberFormattingRules *)
           (**(code **)(((this->Implementation).Ptr)->_padding_ + 0x80))();
  return pFVar1;
}

// GetDisplayName @ 1416f7e20

/* WARNING: Enum "UErrorCode": Some values do not have unique names */

FString * __thiscall FCulture::GetDisplayName(FCulture *this)

{
  return &this->CachedDisplayName;
}

// GetEnglishName @ 1416f8090

/* WARNING: Enum "UErrorCode": Some values do not have unique names */

FString * __thiscall FCulture::GetEnglishName(FCulture *this)

{
  return &this->CachedEnglishName;
}

// GetKeyboardLayoutId @ 1416f8920

/* WARNING: Enum "UErrorCode": Some values do not have unique names */

int __thiscall FCulture::GetKeyboardLayoutId(FCulture *this)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001416f8926. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = (**(code **)(((this->Implementation).Ptr)->_padding_ + 0x18))();
  return iVar1;
}

// GetLCID @ 1416f8940

/* WARNING: Enum "UErrorCode": Some values do not have unique names */

int __thiscall FCulture::GetLCID(FCulture *this)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001416f8946. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = (**(code **)(((this->Implementation).Ptr)->_padding_ + 0x20))();
  return iVar1;
}

// GetName @ 1416f8be0

/* WARNING: Enum "UErrorCode": Some values do not have unique names */

FString * __thiscall FCulture::GetName(FCulture *this)

{
  return &this->CachedName;
}

// GetNativeLanguage @ 1416f8ce0

/* WARNING: Enum "UErrorCode": Some values do not have unique names */

FString * __thiscall FCulture::GetNativeLanguage(FCulture *this)

{
  return &this->CachedNativeLanguage;
}

// GetNativeName @ 1416f90b0

/* WARNING: Enum "UErrorCode": Some values do not have unique names */

FString * __thiscall FCulture::GetNativeName(FCulture *this)

{
  return &this->CachedNativeName;
}

// GetNativeRegion @ 1416f92b0

/* WARNING: Enum "UErrorCode": Some values do not have unique names */

FString * __thiscall FCulture::GetNativeRegion(FCulture *this)

{
  return &this->CachedNativeRegion;
}

// GetPercentFormattingRules @ 1416f9820

/* WARNING: Enum "UErrorCode": Some values do not have unique names */

FDecimalNumberFormattingRules * __thiscall FCulture::GetPercentFormattingRules(FCulture *this)

{
  FDecimalNumberFormattingRules *pFVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001416f9826. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pFVar1 = (FDecimalNumberFormattingRules *)
           (**(code **)(((this->Implementation).Ptr)->_padding_ + 0x88))();
  return pFVar1;
}

// GetPluralForm @ 1416f9f20

/* WARNING: Enum "UErrorCode": Some values do not have unique names */

ETextPluralForm __thiscall
FCulture::GetPluralForm(FCulture *this,schar param_1,ETextPluralType param_2)

{
  FICUCultureImplementation *pFVar1;
  int iVar2;
  ETextPluralForm EVar3;
  
  pFVar1 = (this->Implementation).Ptr;
  iVar2 = -(int)param_1;
  if (-1 < param_1) {
    iVar2 = (int)param_1;
  }
                    /* WARNING: Could not recover jumptable at 0x0001416f9f36. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  EVar3 = (**(code **)(pFVar1->_padding_ + 0xa0))(pFVar1,iVar2);
  return EVar3;
}

// GetPluralForm @ 1416f9f50

/* WARNING: Enum "UErrorCode": Some values do not have unique names */

ETextPluralForm __thiscall
FCulture::GetPluralForm(FCulture *this,uchar param_1,ETextPluralType param_2)

{
  FICUCultureImplementation *pFVar1;
  ETextPluralForm EVar2;
  
  pFVar1 = (this->Implementation).Ptr;
                    /* WARNING: Could not recover jumptable at 0x0001416f9f59. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  EVar2 = (**(code **)(pFVar1->_padding_ + 0xa0))(pFVar1,param_1);
  return EVar2;
}

// GetPluralForm @ 1416f9f70

/* WARNING: Enum "UErrorCode": Some values do not have unique names */

ETextPluralForm __thiscall
FCulture::GetPluralForm(FCulture *this,short param_1,ETextPluralType param_2)

{
  FICUCultureImplementation *pFVar1;
  int iVar2;
  ETextPluralForm EVar3;
  
  pFVar1 = (this->Implementation).Ptr;
  iVar2 = -(int)param_1;
  if (-1 < param_1) {
    iVar2 = (int)param_1;
  }
                    /* WARNING: Could not recover jumptable at 0x0001416f9f87. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  EVar3 = (**(code **)(pFVar1->_padding_ + 0xa0))(pFVar1,iVar2);
  return EVar3;
}

// GetPluralForm @ 1416f9fa0

/* WARNING: Enum "UErrorCode": Some values do not have unique names */

ETextPluralForm __thiscall
FCulture::GetPluralForm(FCulture *this,ushort param_1,ETextPluralType param_2)

{
  FICUCultureImplementation *pFVar1;
  ETextPluralForm EVar2;
  
  pFVar1 = (this->Implementation).Ptr;
                    /* WARNING: Could not recover jumptable at 0x0001416f9fa9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  EVar2 = (**(code **)(pFVar1->_padding_ + 0xa0))(pFVar1,param_1);
  return EVar2;
}

// GetPluralForm @ 1416f9fc0

/* WARNING: Enum "UErrorCode": Some values do not have unique names */

ETextPluralForm __thiscall
FCulture::GetPluralForm(FCulture *this,int param_1,ETextPluralType param_2)

{
  FICUCultureImplementation *pFVar1;
  int iVar2;
  ETextPluralForm EVar3;
  
  pFVar1 = (this->Implementation).Ptr;
  iVar2 = -param_1;
  if (-param_1 < 0) {
    iVar2 = param_1;
  }
                    /* WARNING: Could not recover jumptable at 0x0001416f9fd3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  EVar3 = (**(code **)(pFVar1->_padding_ + 0xa0))(pFVar1,iVar2);
  return EVar3;
}

// GetPluralForm @ 1416f9fe0

/* WARNING: Enum "UErrorCode": Some values do not have unique names */

ETextPluralForm __thiscall
FCulture::GetPluralForm(FCulture *this,uint param_1,ETextPluralType param_2)

{
  FICUCultureImplementation *pFVar1;
  ETextPluralForm EVar2;
  double dVar3;
  
  dVar3 = (double)param_1;
  if (dVar3 < 0.0) {
    dVar3 = (double)CONCAT44((uint)((ulonglong)dVar3 >> 0x20) ^
                             __xmm_80000000000000008000000000000000._4_4_,
                             SUB84(dVar3,0) ^ (uint)__xmm_80000000000000008000000000000000);
  }
  pFVar1 = (this->Implementation).Ptr;
                    /* WARNING: Could not recover jumptable at 0x0001416fa000. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  EVar2 = (**(code **)(pFVar1->_padding_ + 0x98))(pFVar1,dVar3);
  return EVar2;
}

// GetPluralForm @ 1416fa010

/* WARNING: Enum "UErrorCode": Some values do not have unique names */

ETextPluralForm __thiscall
FCulture::GetPluralForm(FCulture *this,float param_1,ETextPluralType param_2)

{
  FICUCultureImplementation *pFVar1;
  ETextPluralForm EVar2;
  double dVar3;
  
  dVar3 = (double)param_1;
  if (dVar3 < 0.0) {
    dVar3 = (double)CONCAT44((uint)((ulonglong)dVar3 >> 0x20) ^
                             __xmm_80000000000000008000000000000000._4_4_,
                             SUB84(dVar3,0) ^ (uint)__xmm_80000000000000008000000000000000);
  }
  pFVar1 = (this->Implementation).Ptr;
                    /* WARNING: Could not recover jumptable at 0x0001416fa02a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  EVar2 = (**(code **)(pFVar1->_padding_ + 0x98))(pFVar1,dVar3);
  return EVar2;
}

// GetPluralForm @ 1416fa040

/* WARNING: Enum "UErrorCode": Some values do not have unique names */

ETextPluralForm __thiscall
FCulture::GetPluralForm(FCulture *this,double param_1,ETextPluralType param_2)

{
  FICUCultureImplementation *pFVar1;
  ETextPluralForm EVar2;
  uint uVar3;
  
  uVar3 = SUB84(param_1,0);
  if (param_1 < 0.0) {
    uVar3 = uVar3 ^ (uint)__xmm_80000000000000008000000000000000;
  }
  pFVar1 = (this->Implementation).Ptr;
                    /* WARNING: Could not recover jumptable at 0x0001416fa056. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  EVar2 = (**(code **)(pFVar1->_padding_ + 0x98))(pFVar1,uVar3);
  return EVar2;
}

// GetPluralForm @ 1416fa070

/* WARNING: Enum "UErrorCode": Some values do not have unique names */

ETextPluralForm __thiscall
FCulture::GetPluralForm(FCulture *this,long64 param_1,ETextPluralType param_2)

{
  FICUCultureImplementation *pFVar1;
  ETextPluralForm EVar2;
  double dVar3;
  
  dVar3 = (double)param_1;
  if (dVar3 < 0.0) {
    dVar3 = (double)CONCAT44((uint)((ulonglong)dVar3 >> 0x20) ^
                             __xmm_80000000000000008000000000000000._4_4_,
                             SUB84(dVar3,0) ^ (uint)__xmm_80000000000000008000000000000000);
  }
  pFVar1 = (this->Implementation).Ptr;
                    /* WARNING: Could not recover jumptable at 0x0001416fa08e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  EVar2 = (**(code **)(pFVar1->_padding_ + 0x98))(pFVar1,dVar3);
  return EVar2;
}

// GetPluralForm @ 1416fa0a0

/* WARNING: Enum "UErrorCode": Some values do not have unique names */

ETextPluralForm __thiscall
FCulture::GetPluralForm(FCulture *this,ulong64 param_1,ETextPluralType param_2)

{
  FICUCultureImplementation *pFVar1;
  ETextPluralForm EVar2;
  double dVar3;
  
  dVar3 = (double)param_1;
  if (dVar3 < 0.0) {
    dVar3 = (double)CONCAT44((uint)((ulonglong)dVar3 >> 0x20) ^
                             __xmm_80000000000000008000000000000000._4_4_,
                             SUB84(dVar3,0) ^ (uint)__xmm_80000000000000008000000000000000);
  }
  pFVar1 = (this->Implementation).Ptr;
                    /* WARNING: Could not recover jumptable at 0x0001416fa0da. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  EVar2 = (**(code **)(pFVar1->_padding_ + 0x98))(pFVar1,dVar3);
  return EVar2;
}

// GetPreferredOnDiskIdentifier @ 1416fa280

/* WARNING: Enum "UErrorCode": Some values do not have unique names */

FString * __thiscall FCulture::GetPreferredOnDiskIdentifier(FCulture *this)

{
  code *pcVar1;
  bool bVar2;
  FString *pFVar3;
  longlong lVar4;
  int iVar5;
  FString local_18;
  
  if (((GConfig == (FConfigCacheIni *)0x0) || (GConfig->bIsReadyForUse == false)) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("GConfig && GConfig->IsReadyForUse()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Internationalization\\Culture.cpp"
                         ,0xe0,
                         L"FCulture::GetPreferredOnDiskIdentifierType called before the config system was initialized!"
                        ), bVar2)) {
    pcVar1 = (code *)swi(3);
    pFVar3 = (FString *)(*pcVar1)();
    return pFVar3;
  }
  if ((::_TSS0 <=
       *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c)) || (_Init_thread_header(&::_TSS0), ::_TSS0 != -1)) goto LAB_1416fa2e4;
  local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.Data.ArrayNum = 0;
  local_18.Data.ArrayMax = 0;
  bVar2 = FConfigCacheIni::GetString
                    (GConfig,L"Internationalization",L"PreferredOnDiskCultureIdentifierType",
                     &local_18,&GEngineIni);
  if (bVar2) {
    iVar5 = local_18.Data.ArrayNum + -1;
    if (local_18.Data.ArrayNum == 0) {
      iVar5 = 0;
    }
    if ((iVar5 != 5) ||
       (iVar5 = FGenericPlatformStricmp::Strnicmp
                          (L"Verse",(wchar_t *)local_18.Data.AllocatorInstance.Data,5), iVar5 != 0))
    goto LAB_1416fa3c6;
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
    IdentifierType = Verse;
  }
  else {
LAB_1416fa3c6:
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
    IdentifierType = UE;
  }
  _Init_thread_footer(&::_TSS0);
LAB_1416fa2e4:
  lVar4 = 0x28;
  if (IdentifierType == Verse) {
    lVar4 = 0x38;
  }
  return (FString *)((longlong)&(this->Implementation).Ptr + lVar4);
}

// GetPreferredOnDiskIdentifierType @ 1416fa3e0

ECultureIdentifierType __cdecl FCulture::GetPreferredOnDiskIdentifierType(void)

{
  code *pcVar1;
  bool bVar2;
  ECultureIdentifierType EVar3;
  int iVar4;
  FString local_18;
  
  if (((GConfig == (FConfigCacheIni *)0x0) || (GConfig->bIsReadyForUse == false)) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("GConfig && GConfig->IsReadyForUse()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Internationalization\\Culture.cpp"
                         ,0xe0,
                         L"FCulture::GetPreferredOnDiskIdentifierType called before the config system was initialized!"
                        ), bVar2)) {
    pcVar1 = (code *)swi(3);
    EVar3 = (*pcVar1)();
    return EVar3;
  }
  if ((::_TSS0 <=
       *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c)) || (_Init_thread_header(&::_TSS0), ::_TSS0 != -1)) {
    return IdentifierType;
  }
  local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.Data.ArrayNum = 0;
  local_18.Data.ArrayMax = 0;
  bVar2 = FConfigCacheIni::GetString
                    (GConfig,L"Internationalization",L"PreferredOnDiskCultureIdentifierType",
                     &local_18,&GEngineIni);
  if (bVar2) {
    iVar4 = local_18.Data.ArrayNum + -1;
    if (local_18.Data.ArrayNum == 0) {
      iVar4 = 0;
    }
    if ((iVar4 == 5) &&
       (iVar4 = FGenericPlatformStricmp::Strnicmp
                          (L"Verse",(wchar_t *)local_18.Data.AllocatorInstance.Data,5), iVar4 == 0))
    {
      if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_18.Data.AllocatorInstance.Data);
      }
      IdentifierType = Verse;
      goto LAB_1416fa44b;
    }
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  IdentifierType = UE;
LAB_1416fa44b:
  _Init_thread_footer(&::_TSS0);
  return IdentifierType;
}

// GetPrioritizedParentCultureNames @ 1416fb170

/* WARNING: Enum "UErrorCode": Some values do not have unique names */

TArray<FString,TSizedDefaultAllocator<32>_> * __thiscall
FCulture::GetPrioritizedParentCultureNames
          (FCulture *this,TArray<FString,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  GetPrioritizedParentCultureNames
            (__return_storage_ptr__,&this->CachedTwoLetterISOLanguageName,&this->CachedScript,
             &this->CachedRegion);
  return __return_storage_ptr__;
}

// GetPrioritizedParentCultureNames @ 1416fb1b0

/* WARNING: Removing unreachable block (ram,0x0001416fb3ba) */
/* WARNING: Removing unreachable block (ram,0x0001416fb4c1) */

TArray<FString,TSizedDefaultAllocator<32>_> * __cdecl
FCulture::GetPrioritizedParentCultureNames
          (TArray<FString,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,FString *param_1,
          FString *param_2,FString *param_3)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  TArray<FString,TSizedDefaultAllocator<32>_> *pTVar5;
  FScriptContainerElement *pFVar6;
  FString local_78;
  FString local_68;
  FString local_58;
  FString local_48;
  FString local_38;
  
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  if ((1 < (param_2->Data).ArrayNum) && (1 < (param_3->Data).ArrayNum)) {
    pFVar4 = (FScriptContainerElement *)CreateCultureName(&local_58,param_1,param_2,param_3);
    pFVar6 = (__return_storage_ptr__->AllocatorInstance).Data;
    if ((pFVar6 <= pFVar4) &&
       ((pFVar4 < pFVar6 + (longlong)__return_storage_ptr__->ArrayMax * 0x10 &&
        (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar2)))) {
      pcVar1 = (code *)swi(3);
      pTVar5 = (TArray<FString,TSizedDefaultAllocator<32>_> *)(*pcVar1)();
      return pTVar5;
    }
    iVar3 = __return_storage_ptr__->ArrayNum;
    if (iVar3 == __return_storage_ptr__->ArrayMax) {
      iVar3 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,&__return_storage_ptr__->AllocatorInstance,
                         &__return_storage_ptr__->ArrayMax);
    }
    __return_storage_ptr__->ArrayNum = iVar3 + 1;
    pFVar6 = (__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar3 * 0x10;
    *(undefined8 *)pFVar6 = 0;
    *(FScriptContainerElement **)pFVar6 =
         (((TArray<wchar_t,TSizedDefaultAllocator<32>_> *)&pFVar4->field_0x0)->AllocatorInstance).
         Data;
    (((TArray<wchar_t,TSizedDefaultAllocator<32>_> *)&pFVar4->field_0x0)->AllocatorInstance).Data =
         (FScriptContainerElement *)0x0;
    *(int *)(pFVar6 + 8) = *(int *)&pFVar4[8].field_0x0;
    *(int *)(pFVar6 + 0xc) = *(int *)&pFVar4[0xc].field_0x0;
    *(undefined8 *)&pFVar4[8].field_0x0 = 0;
    if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.Data.AllocatorInstance.Data);
    }
  }
  if (1 < (param_3->Data).ArrayNum) {
    local_78.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_78.Data.ArrayNum = 0;
    local_78.Data.ArrayMax = 0;
    pFVar4 = (FScriptContainerElement *)CreateCultureName(&local_48,param_1,&local_78,param_3);
    pFVar6 = (__return_storage_ptr__->AllocatorInstance).Data;
    if (((pFVar6 <= pFVar4) && (pFVar4 < pFVar6 + (longlong)__return_storage_ptr__->ArrayMax * 0x10)
        ) && (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar2)) {
      pcVar1 = (code *)swi(3);
      pTVar5 = (TArray<FString,TSizedDefaultAllocator<32>_> *)(*pcVar1)();
      return pTVar5;
    }
    iVar3 = __return_storage_ptr__->ArrayNum;
    if (iVar3 == __return_storage_ptr__->ArrayMax) {
      iVar3 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,&__return_storage_ptr__->AllocatorInstance,
                         &__return_storage_ptr__->ArrayMax);
    }
    __return_storage_ptr__->ArrayNum = iVar3 + 1;
    pFVar6 = (__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar3 * 0x10;
    *(undefined8 *)pFVar6 = 0;
    *(FScriptContainerElement **)pFVar6 =
         (((TArray<wchar_t,TSizedDefaultAllocator<32>_> *)&pFVar4->field_0x0)->AllocatorInstance).
         Data;
    (((TArray<wchar_t,TSizedDefaultAllocator<32>_> *)&pFVar4->field_0x0)->AllocatorInstance).Data =
         (FScriptContainerElement *)0x0;
    *(int *)(pFVar6 + 8) = *(int *)&pFVar4[8].field_0x0;
    *(int *)(pFVar6 + 0xc) = *(int *)&pFVar4[0xc].field_0x0;
    *(undefined8 *)&pFVar4[8].field_0x0 = 0;
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
  }
  if (1 < (param_2->Data).ArrayNum) {
    local_68.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_68.Data.ArrayNum = 0;
    local_68.Data.ArrayMax = 0;
    pFVar4 = (FScriptContainerElement *)CreateCultureName(&local_38,param_1,param_2,&local_68);
    pFVar6 = (__return_storage_ptr__->AllocatorInstance).Data;
    if (((pFVar6 <= pFVar4) && (pFVar4 < pFVar6 + (longlong)__return_storage_ptr__->ArrayMax * 0x10)
        ) && (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar2)) {
      pcVar1 = (code *)swi(3);
      pTVar5 = (TArray<FString,TSizedDefaultAllocator<32>_> *)(*pcVar1)();
      return pTVar5;
    }
    iVar3 = __return_storage_ptr__->ArrayNum;
    if (iVar3 == __return_storage_ptr__->ArrayMax) {
      iVar3 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,&__return_storage_ptr__->AllocatorInstance,
                         &__return_storage_ptr__->ArrayMax);
    }
    __return_storage_ptr__->ArrayNum = iVar3 + 1;
    pFVar6 = (__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar3 * 0x10;
    *(undefined8 *)pFVar6 = 0;
    *(FScriptContainerElement **)pFVar6 =
         (((TArray<wchar_t,TSizedDefaultAllocator<32>_> *)&pFVar4->field_0x0)->AllocatorInstance).
         Data;
    (((TArray<wchar_t,TSizedDefaultAllocator<32>_> *)&pFVar4->field_0x0)->AllocatorInstance).Data =
         (FScriptContainerElement *)0x0;
    *(int *)(pFVar6 + 8) = *(int *)&pFVar4[8].field_0x0;
    *(int *)(pFVar6 + 0xc) = *(int *)&pFVar4[0xc].field_0x0;
    *(undefined8 *)&pFVar4[8].field_0x0 = 0;
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
  }
  pFVar6 = (__return_storage_ptr__->AllocatorInstance).Data;
  if (((pFVar6 <= param_1) && (param_1 < pFVar6 + (longlong)__return_storage_ptr__->ArrayMax * 0x10)
      ) && (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar2)) {
    pcVar1 = (code *)swi(3);
    pTVar5 = (TArray<FString,TSizedDefaultAllocator<32>_> *)(*pcVar1)();
    return pTVar5;
  }
  iVar3 = __return_storage_ptr__->ArrayNum;
  if (iVar3 == __return_storage_ptr__->ArrayMax) {
    iVar3 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&__return_storage_ptr__->AllocatorInstance,
                       &__return_storage_ptr__->ArrayMax);
  }
  __return_storage_ptr__->ArrayNum = iVar3 + 1;
  ::FString::FString((FString *)
                     ((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar3 * 0x10),
                     param_1);
  return __return_storage_ptr__;
}

// GetRegion @ 1416fb650

/* WARNING: Enum "UErrorCode": Some values do not have unique names */

FString * __thiscall FCulture::GetRegion(FCulture *this)

{
  return &this->CachedRegion;
}

// GetScript @ 1416fb700

/* WARNING: Enum "UErrorCode": Some values do not have unique names */

FString * __thiscall FCulture::GetScript(FCulture *this)

{
  return &this->CachedScript;
}

// GetThreeLetterISOLanguageName @ 1416fbce0

/* WARNING: Enum "UErrorCode": Some values do not have unique names */

FString * __thiscall FCulture::GetThreeLetterISOLanguageName(FCulture *this)

{
  return &this->CachedThreeLetterISOLanguageName;
}

// GetTwoLetterISOLanguageName @ 1416fc5d0

/* WARNING: Enum "UErrorCode": Some values do not have unique names */

FString * __thiscall FCulture::GetTwoLetterISOLanguageName(FCulture *this)

{
  return &this->CachedTwoLetterISOLanguageName;
}

// GetUnrealLegacyThreeLetterISOLanguageName @ 1416fc7d0

/* WARNING: Enum "UErrorCode": Some values do not have unique names */

FString * __thiscall FCulture::GetUnrealLegacyThreeLetterISOLanguageName(FCulture *this)

{
  return &this->CachedUnrealLegacyThreeLetterISOLanguageName;
}

// GetValidPluralForms @ 1416fc930

/* WARNING: Enum "UErrorCode": Some values do not have unique names */

TArray<ETextPluralForm,TSizedDefaultAllocator<32>_> * __thiscall
FCulture::GetValidPluralForms(FCulture *this,ETextPluralType param_1)

{
  TArray<ETextPluralForm,TSizedDefaultAllocator<32>_> *pTVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001416fc936. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pTVar1 = (TArray<ETextPluralForm,TSizedDefaultAllocator<32>_> *)
           (**(code **)(((this->Implementation).Ptr)->_padding_ + 0xa8))();
  return pTVar1;
}

// GetVariant @ 1416fc970

/* WARNING: Enum "UErrorCode": Some values do not have unique names */

FString * __thiscall FCulture::GetVariant(FCulture *this)

{
  return &this->CachedVariant;
}

// GetVerseIdentifier @ 1416fca20

/* WARNING: Enum "UErrorCode": Some values do not have unique names */

FString * __thiscall FCulture::GetVerseIdentifier(FCulture *this)

{
  return &this->CachedVerseIdentifier;
}

// IsRightToLeft @ 141702920

/* WARNING: Enum "UErrorCode": Some values do not have unique names */

bool __thiscall FCulture::IsRightToLeft(FCulture *this)

{
  return this->CachedIsRightToLeft;
}

// RefreshCultureDisplayNames @ 141709260

/* WARNING: Enum "UErrorCode": Some values do not have unique names */

void __thiscall
FCulture::RefreshCultureDisplayNames
          (FCulture *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1,bool param_2)

{
  FString *pFVar1;
  int iVar2;
  FICUCultureImplementation *pFVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  undefined8 *puVar7;
  TArray<FString,TSizedDefaultAllocator<32>_> local_108;
  TArrayView<FString_const_,int> local_f8;
  FScriptContainerElement *local_e8;
  int iStack_e0;
  undefined4 uStack_dc;
  FScriptContainerElement *local_d8;
  int iStack_d0;
  FScriptContainerElement *local_c8;
  int iStack_c0;
  FScriptContainerElement *local_b8;
  int iStack_b0;
  void *local_a8 [2];
  TArrayView<FString_const_,int> local_98;
  void *local_88 [2];
  void *local_78 [2];
  TArrayView<FString_const_,int> local_68;
  void *local_58 [2];
  TArrayView<FString_const_,int> local_48;
  void *local_38 [2];
  TArrayView<FString_const_,int> local_28;
  
  pFVar3 = (this->Implementation).Ptr;
  puVar7 = (undefined8 *)(**(code **)(pFVar3->_padding_ + 8))(pFVar3,local_a8);
  pFVar1 = &this->CachedDisplayName;
  if (pFVar1 != (FString *)puVar7) {
    pFVar4 = (pFVar1->Data).AllocatorInstance.Data;
    if (pFVar4 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar4);
    }
    (pFVar1->Data).AllocatorInstance.Data = (FScriptContainerElement *)*puVar7;
    *puVar7 = 0;
    (this->CachedDisplayName).Data.ArrayNum = *(int *)(puVar7 + 1);
    (this->CachedDisplayName).Data.ArrayMax = *(int *)((longlong)puVar7 + 0xc);
    puVar7[1] = 0;
  }
  if (local_a8[0] != (void *)0x0) {
    FMemory::Free(local_a8[0]);
  }
  local_e8 = (param_1->AllocatorInstance).Data;
  iVar2 = param_1->ArrayNum;
  if (iVar2 < 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  local_98._12_4_ = uStack_dc;
  local_98.ArrayNum = iVar2;
  local_98.DataPtr = (FString *)local_e8;
  iStack_e0 = iVar2;
  ApplyCultureDisplayNameSubstitutes(&local_98,pFVar1);
  if (param_2) {
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x9d4c) < ::_TSS0) {
      _Init_thread_header(&::_TSS0);
      if (::_TSS0 == -1) {
        ::FString::FString(&EnglishCultureName,L"en");
        atexit(`FCulture::RefreshCultureDisplayNames'::__l6::
               _dynamic_atexit_destructor_for__EnglishCultureName__);
        _Init_thread_footer(&::_TSS0);
      }
    }
    pFVar3 = (this->Implementation).Ptr;
    puVar7 = (undefined8 *)(**(code **)(pFVar3->_padding_ + 0x10))(pFVar3,local_88);
    pFVar1 = &this->CachedEnglishName;
    if (pFVar1 != (FString *)puVar7) {
      pFVar4 = (pFVar1->Data).AllocatorInstance.Data;
      if (pFVar4 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar4);
      }
      (pFVar1->Data).AllocatorInstance.Data = (FScriptContainerElement *)*puVar7;
      *puVar7 = 0;
      (this->CachedEnglishName).Data.ArrayNum = *(int *)(puVar7 + 1);
      (this->CachedEnglishName).Data.ArrayMax = *(int *)((longlong)puVar7 + 0xc);
      puVar7[1] = 0;
    }
    if (local_88[0] != (void *)0x0) {
      FMemory::Free(local_88[0]);
    }
    local_f8.ArrayNum = 1;
    local_f8.DataPtr = &EnglishCultureName;
    ApplyCultureDisplayNameSubstitutes(&local_f8,pFVar1);
    GetPrioritizedParentCultureNames
              (&local_108,&this->CachedTwoLetterISOLanguageName,&this->CachedScript,
               &this->CachedRegion);
    pFVar3 = (this->Implementation).Ptr;
    puVar7 = (undefined8 *)(**(code **)(pFVar3->_padding_ + 0x30))(pFVar3,local_78);
    pFVar1 = &this->CachedNativeName;
    if (pFVar1 != (FString *)puVar7) {
      pFVar4 = (pFVar1->Data).AllocatorInstance.Data;
      if (pFVar4 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar4);
      }
      (pFVar1->Data).AllocatorInstance.Data = (FScriptContainerElement *)*puVar7;
      *puVar7 = 0;
      (this->CachedNativeName).Data.ArrayNum = *(int *)(puVar7 + 1);
      (this->CachedNativeName).Data.ArrayMax = *(int *)((longlong)puVar7 + 0xc);
      puVar7[1] = 0;
    }
    if (local_78[0] != (void *)0x0) {
      FMemory::Free(local_78[0]);
    }
    iVar2 = local_108.ArrayNum;
    local_d8 = local_108.AllocatorInstance.Data;
    if (local_108.ArrayNum < 0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L"");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    iStack_d0 = iVar2;
    local_68.DataPtr = (FString *)local_d8;
    ApplyCultureDisplayNameSubstitutes(&local_68,pFVar1);
    pFVar3 = (this->Implementation).Ptr;
    puVar7 = (undefined8 *)(**(code **)(pFVar3->_padding_ + 0x50))(pFVar3,local_58);
    pFVar1 = &this->CachedNativeLanguage;
    if (pFVar1 != (FString *)puVar7) {
      pFVar4 = (pFVar1->Data).AllocatorInstance.Data;
      if (pFVar4 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar4);
      }
      (pFVar1->Data).AllocatorInstance.Data = (FScriptContainerElement *)*puVar7;
      *puVar7 = 0;
      (this->CachedNativeLanguage).Data.ArrayNum = *(int *)(puVar7 + 1);
      (this->CachedNativeLanguage).Data.ArrayMax = *(int *)((longlong)puVar7 + 0xc);
      puVar7[1] = 0;
    }
    if (local_58[0] != (void *)0x0) {
      FMemory::Free(local_58[0]);
    }
    iVar2 = local_108.ArrayNum;
    local_c8 = local_108.AllocatorInstance.Data;
    if (local_108.ArrayNum < 0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L"");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    iStack_c0 = iVar2;
    local_48.DataPtr = (FString *)local_c8;
    ApplyCultureDisplayNameSubstitutes(&local_48,pFVar1);
    pFVar3 = (this->Implementation).Ptr;
    puVar7 = (undefined8 *)(**(code **)(pFVar3->_padding_ + 0x58))(pFVar3,local_38);
    pFVar1 = &this->CachedNativeRegion;
    if (pFVar1 != (FString *)puVar7) {
      pFVar4 = (pFVar1->Data).AllocatorInstance.Data;
      if (pFVar4 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar4);
      }
      (pFVar1->Data).AllocatorInstance.Data = (FScriptContainerElement *)*puVar7;
      *puVar7 = 0;
      (this->CachedNativeRegion).Data.ArrayNum = *(int *)(puVar7 + 1);
      (this->CachedNativeRegion).Data.ArrayMax = *(int *)((longlong)puVar7 + 0xc);
      puVar7[1] = 0;
    }
    if (local_38[0] != (void *)0x0) {
      FMemory::Free(local_38[0]);
    }
    iVar2 = local_108.ArrayNum;
    local_b8 = local_108.AllocatorInstance.Data;
    if (local_108.ArrayNum < 0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L"");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    iStack_b0 = iVar2;
    local_28.DataPtr = (FString *)local_b8;
    ApplyCultureDisplayNameSubstitutes(&local_28,pFVar1);
    DestructItems<FString,int>((FString *)local_108.AllocatorInstance.Data,local_108.ArrayNum);
    if (local_108.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_108.AllocatorInstance.Data);
    }
  }
  return;
}

