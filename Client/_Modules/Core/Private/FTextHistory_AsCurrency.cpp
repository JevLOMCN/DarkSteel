// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 9

// FTextHistory_AsCurrency @ 1417368f0

/* WARNING: Enum "UErrorCode": Some values do not have unique names */

FTextHistory_AsCurrency * __thiscall
FTextHistory_AsCurrency::FTextHistory_AsCurrency
          (FTextHistory_AsCurrency *this,FString *param_1,FFormatArgumentValue *param_2,
          FString *param_3,FNumberFormattingOptions *param_4,TSharedPtr<FCulture,1> *param_5)

{
  TOptional<FText> *pTVar1;
  FScriptContainerElement *pFVar2;
  TSharedPtr<FCulture,1> local_48;
  FFormatArgumentValue local_38;
  
  pTVar1 = &param_2->TextValue;
  local_48.Object = param_5->Object;
  param_5->Object = (FCulture *)0x0;
  local_48.SharedReferenceCount.ReferenceController =
       (param_5->SharedReferenceCount).ReferenceController;
  (param_5->SharedReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
  local_38.field1_0x8 = param_2->field1_0x8;
  local_38.Type = param_2->Type;
  local_38.TextValue.field0_0x0.TypedValue.TextData.Reference =
       (TRefCountPtr<ITextData>)(ITextData *)0x0;
  local_38.TextValue.field0_0x0.TypedValue.Flags = 0;
  if ((pTVar1->field0_0x0).TypedValue.TextData.Reference != (ITextData *)0x0) {
    FText::FText((FText *)&local_38.TextValue,(FText *)pTVar1);
  }
  FTextHistory_FormatNumber::FTextHistory_FormatNumber
            ((FTextHistory_FormatNumber *)this,param_1,&local_38,param_4,&local_48);
  this->_padding_ = (longlong)&___7FTextHistory_AsCurrency__6B_;
  (this->CurrencyCode).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CurrencyCode).Data.AllocatorInstance.Data = (param_3->Data).AllocatorInstance.Data;
  (param_3->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CurrencyCode).Data.ArrayNum = (param_3->Data).ArrayNum;
  (this->CurrencyCode).Data.ArrayMax = (param_3->Data).ArrayMax;
  (param_3->Data).ArrayNum = 0;
  (param_3->Data).ArrayMax = 0;
  if (*(longlong **)&pTVar1->field0_0x0 != (longlong *)0x0) {
    (**(code **)(**(longlong **)&pTVar1->field0_0x0 + 0x10))();
  }
  pFVar2 = (param_3->Data).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_5->SharedReferenceCount).ReferenceController);
  return this;
}

// BuildInvariantDisplayString @ 141749860

/* WARNING: Enum "UErrorCode": Some values do not have unique names */

FString * __thiscall
FTextHistory_AsCurrency::BuildInvariantDisplayString
          (FTextHistory_AsCurrency *this,FString *__return_storage_ptr__)

{
  FCulture *this_00;
  TReferenceControllerBase<1> *pTVar1;
  code *pcVar2;
  bool bVar3;
  FInternationalization *pFVar4;
  FString *pFVar5;
  FDecimalNumberFormattingRules *pFVar6;
  
  pFVar4 = FInternationalization::Get();
  if (pFVar4->bIsInitialized != true) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("I18N.IsInitialized() == true",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Internationalization\\TextHistory.cpp"
                       ,0x6ee,
                       L"FInternationalization is not initialized. An FText formatting method was likely used in static object initialization - this is not supported."
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar5 = (FString *)(*pcVar2)();
      return pFVar5;
    }
  }
  if ((pFVar4->InvariantCulture).Object == (FCulture *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x408,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar5 = (FString *)(*pcVar2)();
      return pFVar5;
    }
  }
  this_00 = (pFVar4->InvariantCulture).Object;
  pTVar1 = (pFVar4->InvariantCulture).SharedReferenceCount.ReferenceController;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (this_00 == (FCulture *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x25d,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar5 = (FString *)(*pcVar2)();
      return pFVar5;
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  pFVar6 = FCulture::GetCurrencyFormattingRules(this_00,&this->CurrencyCode);
  FTextHistory_FormatNumber::BuildNumericDisplayString
            ((FTextHistory_FormatNumber *)this,__return_storage_ptr__,pFVar6,1);
  return __return_storage_ptr__;
}

// BuildLocalizedDisplayString @ 14174a190

/* WARNING: Enum "UErrorCode": Some values do not have unique names */

FString * __thiscall
FTextHistory_AsCurrency::BuildLocalizedDisplayString
          (FTextHistory_AsCurrency *this,FString *__return_storage_ptr__)

{
  TReferenceControllerBase<1> *pTVar1;
  code *pcVar2;
  bool bVar3;
  FInternationalization *pFVar4;
  FString *pFVar5;
  FDecimalNumberFormattingRules *pFVar6;
  FCulture *this_00;
  
  pFVar4 = FInternationalization::Get();
  if (pFVar4->bIsInitialized != true) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("I18N.IsInitialized() == true",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Internationalization\\TextHistory.cpp"
                       ,0x6e3,
                       L"FInternationalization is not initialized. An FText formatting method was likely used in static object initialization - this is not supported."
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar5 = (FString *)(*pcVar2)();
      return pFVar5;
    }
  }
  this_00 = (FCulture *)this->_padding_;
  if (this_00 == (FCulture *)0x0) {
    if ((pFVar4->CurrentLocale).Object == (FCulture *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x408,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pFVar5 = (FString *)(*pcVar2)();
        return pFVar5;
      }
    }
    this_00 = (pFVar4->CurrentLocale).Object;
    pTVar1 = (pFVar4->CurrentLocale).SharedReferenceCount.ReferenceController;
    if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
      UNLOCK();
    }
    if (this_00 == (FCulture *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x25d,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pFVar5 = (FString *)(*pcVar2)();
        return pFVar5;
      }
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  }
  pFVar6 = FCulture::GetCurrencyFormattingRules(this_00,&this->CurrencyCode);
  FTextHistory_FormatNumber::BuildNumericDisplayString
            ((FTextHistory_FormatNumber *)this,__return_storage_ptr__,pFVar6,1);
  return __return_storage_ptr__;
}

// GetType @ 141761b90

ETextHistoryType __thiscall FTextHistory_AsCurrency::GetType(FTextHistory_AsCurrency *this)

{
  return AsCurrency;
}

// ReadFromBuffer @ 14176f2c0

/* WARNING: Enum "UErrorCode": Some values do not have unique names */

wchar_t * __thiscall
FTextHistory_AsCurrency::ReadFromBuffer
          (FTextHistory_AsCurrency *this,wchar_t *param_1,wchar_t *param_2,wchar_t *param_3)

{
  wchar_t wVar1;
  TReferenceControllerBase<1> *pTVar2;
  code *pcVar3;
  double dVar4;
  bool bVar5;
  int iVar6;
  FInternationalization *pFVar7;
  wchar_t *pwVar8;
  TSharedPtr<FCulture,1> *pTVar9;
  long64 lVar10;
  FDecimalNumberFormattingRules *pFVar11;
  ulong64 uVar12;
  wchar_t *pwVar13;
  FCulture *this_00;
  float fVar14;
  FString local_88;
  TSharedPtr<FCulture,1> local_78;
  TSharedPtr<FCulture,1> local_68;
  FFormatArgumentValue local_58;
  
  pFVar7 = FInternationalization::Get();
  if ((pFVar7->bIsInitialized != true) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("I18N.IsInitialized() == true",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Internationalization\\TextHistory.cpp"
                         ,0x70a,
                         L"FInternationalization is not initialized. An FText formatting method was likely used in static object initialization - this is not supported."
                        ), bVar5)) {
    pcVar3 = (code *)swi(3);
    pwVar8 = (wchar_t *)(*pcVar3)();
    return pwVar8;
  }
  this_00 = (FCulture *)this->_padding_;
  if (this_00 == (FCulture *)0x0) {
    if (((pFVar7->CurrentLocale).Object == (FCulture *)0x0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x408,L""), bVar5)) {
      pcVar3 = (code *)swi(3);
      pwVar8 = (wchar_t *)(*pcVar3)();
      return pwVar8;
    }
    this_00 = (pFVar7->CurrentLocale).Object;
    pTVar2 = (pFVar7->CurrentLocale).SharedReferenceCount.ReferenceController;
    if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
      UNLOCK();
    }
    if ((this_00 == (FCulture *)0x0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x25d,L""), bVar5)) {
      pcVar3 = (code *)swi(3);
      pwVar8 = (wchar_t *)(*pcVar3)();
      return pwVar8;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  }
  iVar6 = wcsncmp(param_1,*TextStringificationUtil::LocGenCurrencyMarker,0xf);
  if (iVar6 != 0) {
    return (wchar_t *)0x0;
  }
  pwVar8 = param_1 + 0xf;
  wVar1 = param_1[0xf];
  while ((wVar1 != L'\0' && ((wVar1 == L' ' || (wVar1 == L'\t'))))) {
    pwVar13 = pwVar8 + 1;
    pwVar8 = pwVar8 + 1;
    wVar1 = *pwVar13;
  }
  if (*pwVar8 != L'(') {
    return (wchar_t *)0x0;
  }
  pwVar13 = pwVar8 + 1;
  if (pwVar8 == (wchar_t *)0x0) {
    pwVar13 = (wchar_t *)0x0;
  }
  if (pwVar13 == (wchar_t *)0x0) {
    return (wchar_t *)0x0;
  }
  wVar1 = *pwVar13;
  while ((wVar1 != L'\0' && ((wVar1 == L' ' || (wVar1 == L'\t'))))) {
    pwVar8 = pwVar13 + 1;
    pwVar13 = pwVar13 + 1;
    wVar1 = *pwVar8;
  }
  pwVar8 = TextStringificationUtil::ReadNumberFromBuffer
                     (pwVar13,(FFormatArgumentValue *)&this->_padding_);
  if (pwVar8 == (wchar_t *)0x0) {
    return (wchar_t *)0x0;
  }
  pwVar8 = TextStringificationUtil::SkipWhitespaceAndCharacter(pwVar8,L',');
  if (pwVar8 == (wchar_t *)0x0) {
    return (wchar_t *)0x0;
  }
  wVar1 = *pwVar8;
  while ((wVar1 != L'\0' && ((wVar1 == L' ' || (wVar1 == L'\t'))))) {
    pwVar13 = pwVar8 + 1;
    pwVar8 = pwVar8 + 1;
    wVar1 = *pwVar13;
  }
  pwVar8 = TextStringificationUtil::ReadQuotedStringFromBuffer(pwVar8,&this->CurrencyCode);
  if (pwVar8 == (wchar_t *)0x0) {
    return (wchar_t *)0x0;
  }
  pwVar8 = TextStringificationUtil::SkipWhitespaceAndCharacter(pwVar8,L',');
  if (pwVar8 == (wchar_t *)0x0) {
    return (wchar_t *)0x0;
  }
  local_88.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_88.Data.ArrayNum = 0;
  local_88.Data.ArrayMax = 0;
  wVar1 = *pwVar8;
  while ((wVar1 != L'\0' && ((wVar1 == L' ' || (wVar1 == L'\t'))))) {
    pwVar13 = pwVar8 + 1;
    pwVar8 = pwVar8 + 1;
    wVar1 = *pwVar13;
  }
  pwVar8 = TextStringificationUtil::ReadQuotedStringFromBuffer(pwVar8,&local_88);
  if (pwVar8 != (wchar_t *)0x0) {
    bVar5 = 1 < local_88.Data.ArrayNum;
    if (bVar5) {
      pFVar7 = FInternationalization::Get();
      pTVar9 = FInternationalization::GetCulture(pFVar7,&local_68,&local_88);
    }
    else {
      pTVar9 = &local_78;
      local_78.Object = (FCulture *)0x0;
      local_78.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    }
    TSharedPtr<FCulture,1>::operator=((TSharedPtr<FCulture,1> *)&this->_padding_,pTVar9);
    if (bVar5) {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_68.SharedReferenceCount.ReferenceController);
    }
    else {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_78.SharedReferenceCount.ReferenceController);
    }
    pwVar8 = TextStringificationUtil::SkipWhitespaceAndCharacter(pwVar8,L')');
    if (pwVar8 != (wchar_t *)0x0) {
      iVar6 = (int)this->_padding_;
      if (iVar6 == 0) {
        lVar10 = FFormatArgumentValue::GetIntValue((FFormatArgumentValue *)&this->_padding_);
        dVar4 = (double)lVar10;
      }
      else if (iVar6 == 1) {
        uVar12 = FFormatArgumentValue::GetUIntValue((FFormatArgumentValue *)&this->_padding_);
        if ((longlong)uVar12 < 0) {
          dVar4 = (double)uVar12;
        }
        else {
          dVar4 = (double)(longlong)uVar12;
        }
      }
      else if (iVar6 == 2) {
        fVar14 = FFormatArgumentValue::GetFloatValue((FFormatArgumentValue *)&this->_padding_);
        dVar4 = (double)fVar14;
      }
      else {
        if (iVar6 != 3) goto LAB_14176f66a;
        dVar4 = FFormatArgumentValue::GetDoubleValue((FFormatArgumentValue *)&this->_padding_);
      }
      local_58.Type = Double;
      local_58.TextValue.field0_0x0.TypedValue.TextData.Reference =
           (TRefCountPtr<ITextData>)(ITextData *)0x0;
      local_58.TextValue.field0_0x0.TypedValue.Flags = 0;
      pFVar11 = FCulture::GetCurrencyFormattingRules(this_00,&this->CurrencyCode);
      uVar12 = FastDecimalFormat::Pow10
                         ((pFVar11->CultureDefaultFormattingOptions).MaximumFractionalDigits);
      local_58.field1_0x8.DoubleValue = dVar4 / (double)uVar12;
      FFormatArgumentValue::operator=((FFormatArgumentValue *)&this->_padding_,&local_58);
      if (local_58.TextValue.field0_0x0.TypedValue.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)
                     *(ITextData *)local_58.TextValue.field0_0x0.TypedValue.TextData.Reference +
                    0x10))();
      }
      FTextHistory::MarkDisplayStringOutOfDate((FTextHistory *)this);
      goto LAB_14176f66c;
    }
  }
LAB_14176f66a:
  pwVar8 = (wchar_t *)0x0;
LAB_14176f66c:
  if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.Data.AllocatorInstance.Data);
    return pwVar8;
  }
  return pwVar8;
}

// Serialize @ 14177a510

/* WARNING: Enum "UErrorCode": Some values do not have unique names */

void __thiscall
FTextHistory_AsCurrency::Serialize(FTextHistory_AsCurrency *this,FStructuredArchiveRecord param_1)

{
  FArchive *pFVar1;
  FSlotBase local_res10 [3];
  
  local_res10[0].StructuredArchive = (FStructuredArchive *)param_1;
  pFVar1 = UE::StructuredArchive::Private::FSlotBase::GetUnderlyingArchive(local_res10);
  if (0x184 < *(int *)&pFVar1->field_0x40) {
    ::operator<<((local_res10[0].StructuredArchive)->Formatter->Inner,&this->CurrencyCode);
  }
  FTextHistory_FormatNumber::Serialize
            ((FTextHistory_FormatNumber *)this,
             (FStructuredArchiveRecord)local_res10[0].StructuredArchive);
  return;
}

// ShouldReadFromBuffer @ 14177df90

bool __thiscall
FTextHistory_AsCurrency::ShouldReadFromBuffer(FTextHistory_AsCurrency *this,wchar_t *param_1)

{
  int iVar1;
  
  iVar1 = wcsncmp(param_1,*TextStringificationUtil::LocGenCurrencyMarker,0xf);
  return iVar1 == 0;
}

// StaticShouldReadFromBuffer @ 14177ea10

bool __cdecl FTextHistory_AsCurrency::StaticShouldReadFromBuffer(wchar_t *param_1)

{
  int iVar1;
  
  iVar1 = wcsncmp(param_1,*TextStringificationUtil::LocGenCurrencyMarker,0xf);
  return iVar1 == 0;
}

// WriteToBuffer @ 141784c20

/* WARNING: Enum "UErrorCode": Some values do not have unique names */

bool __thiscall
FTextHistory_AsCurrency::WriteToBuffer(FTextHistory_AsCurrency *this,FString *param_1,bool param_2)

{
  longlong *this_00;
  TReferenceControllerBase<1> *pTVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  FInternationalization *pFVar6;
  long64 lVar7;
  FDecimalNumberFormattingRules *pFVar8;
  ulong64 uVar9;
  FString *pFVar10;
  longlong lVar11;
  FCulture *this_01;
  int iVar12;
  float fVar13;
  double dVar14;
  FString local_78;
  FString local_68;
  FFormatArgumentValue local_58;
  
  pFVar6 = FInternationalization::Get();
  if ((pFVar6->bIsInitialized != true) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("I18N.IsInitialized() == true",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Internationalization\\TextHistory.cpp"
                         ,0x74f,
                         L"FInternationalization is not initialized. An FText formatting method was likely used in static object initialization - this is not supported."
                        ), bVar4)) {
    pcVar3 = (code *)swi(3);
    uVar5 = (*pcVar3)();
    return (bool)uVar5;
  }
  this_01 = (FCulture *)this->_padding_;
  if (this_01 == (FCulture *)0x0) {
    if (((pFVar6->CurrentLocale).Object == (FCulture *)0x0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x408,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return (bool)uVar5;
    }
    this_01 = (pFVar6->CurrentLocale).Object;
    pTVar1 = (pFVar6->CurrentLocale).SharedReferenceCount.ReferenceController;
    if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
      UNLOCK();
    }
    if ((this_01 == (FCulture *)0x0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x25d,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return (bool)uVar5;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  }
  iVar12 = (int)this->_padding_;
  this_00 = &this->_padding_;
  dVar14 = 0.0;
  if (iVar12 == 0) {
    lVar7 = FFormatArgumentValue::GetIntValue((FFormatArgumentValue *)this_00);
    dVar14 = (double)lVar7;
  }
  else if (iVar12 == 1) {
    uVar9 = FFormatArgumentValue::GetUIntValue((FFormatArgumentValue *)this_00);
    if ((longlong)uVar9 < 0) {
      dVar14 = (double)uVar9;
    }
    else {
      dVar14 = (double)(longlong)uVar9;
    }
  }
  else if (iVar12 == 2) {
    fVar13 = FFormatArgumentValue::GetFloatValue((FFormatArgumentValue *)this_00);
    dVar14 = (double)fVar13;
  }
  else if (iVar12 == 3) {
    dVar14 = FFormatArgumentValue::GetDoubleValue((FFormatArgumentValue *)this_00);
  }
  pFVar8 = FCulture::GetCurrencyFormattingRules(this_01,&this->CurrencyCode);
  uVar9 = FastDecimalFormat::Pow10
                    ((pFVar8->CultureDefaultFormattingOptions).MaximumFractionalDigits);
  ::FString::AppendChars(param_1,L"LOCGEN_CURRENCY(",0x10);
  local_58.Type = Int;
  local_58.TextValue.field0_0x0.TypedValue.TextData.Reference =
       (TRefCountPtr<ITextData>)(ITextData *)0x0;
  local_58.TextValue.field0_0x0.TypedValue.Flags = 0;
  local_58.field1_0x8.IntValue = (longlong)((double)uVar9 * dVar14);
  FFormatArgumentValue::ToExportedString(&local_58,param_1,param_2);
  if (local_58.TextValue.field0_0x0.TypedValue.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*(ITextData *)local_58.TextValue.field0_0x0.TypedValue.TextData.Reference
                + 0x10))();
  }
  ::FString::AppendChars(param_1,L", \"",3);
  local_78.Data.ArrayNum = (this->CurrencyCode).Data.ArrayNum;
  lVar11 = (longlong)local_78.Data.ArrayNum;
  pFVar2 = (this->CurrencyCode).Data.AllocatorInstance.Data;
  local_78.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  if (local_78.Data.ArrayNum == 0) {
    local_78.Data.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_78.Data.ArrayNum,0,(ForAnyElementType *)&local_78,local_78.Data.ArrayNum,
               &local_78.Data.ArrayMax);
    memcpy(local_78.Data.AllocatorInstance.Data,pFVar2,lVar11 * 2);
  }
  ::FString::ReplaceCharWithEscapedCharInline
            (&local_78,(TArray<wchar_t,TSizedDefaultAllocator<32>_> *)0x0);
  iVar12 = local_78.Data.ArrayNum + -1;
  if (local_78.Data.ArrayNum == 0) {
    iVar12 = 0;
  }
  ::FString::AppendChars(param_1,(wchar_t *)local_78.Data.AllocatorInstance.Data,iVar12);
  if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.Data.AllocatorInstance.Data);
  }
  ::FString::AppendChars(param_1,L"\", \"",4);
  if ((FCulture *)this->_padding_ != (FCulture *)0x0) {
    pFVar10 = FCulture::GetName((FCulture *)this->_padding_);
    local_68.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_68.Data.ArrayNum = (pFVar10->Data).ArrayNum;
    lVar11 = (longlong)local_68.Data.ArrayNum;
    pFVar2 = (pFVar10->Data).AllocatorInstance.Data;
    if (local_68.Data.ArrayNum == 0) {
      local_68.Data.ArrayMax = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_68.Data.ArrayNum,0,(ForAnyElementType *)&local_68,local_68.Data.ArrayNum,
                 &local_68.Data.ArrayMax);
      memcpy(local_68.Data.AllocatorInstance.Data,pFVar2,lVar11 * 2);
    }
    ::FString::ReplaceCharWithEscapedCharInline
              (&local_68,(TArray<wchar_t,TSizedDefaultAllocator<32>_> *)0x0);
    iVar12 = local_68.Data.ArrayNum + -1;
    if (local_68.Data.ArrayNum == 0) {
      iVar12 = 0;
    }
    ::FString::AppendChars(param_1,(wchar_t *)local_68.Data.AllocatorInstance.Data,iVar12);
    if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_68.Data.AllocatorInstance.Data);
    }
  }
  ::FString::AppendChars(param_1,L"\")",2);
  return true;
}

